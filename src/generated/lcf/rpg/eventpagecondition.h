/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_EVENTPAGECONDITION_H
#define LCF_RPG_EVENTPAGECONDITION_H

#include <lcf/rpg/reflect.h>

// Headers
#include <array>
#include <stdint.h>
#include "lcf/enum_tags.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::EventPageCondition class.
 */
namespace lcf {
namespace rpg {
	class EventPageCondition {
	public:
		enum Comparison {
			Comparison_equal = 0,
			Comparison_greater_equal = 1,
			Comparison_less_equal = 2,
			Comparison_greater = 3,
			Comparison_less = 4,
			Comparison_not_equal = 5
		};
		static constexpr auto kComparisonTags = lcf::makeEnumTags<Comparison>(
			"equal",
			"greater_equal",
			"less_equal",
			"greater",
			"less",
			"not_equal"
		);

		struct Flags {
			union {
				struct {
					bool switch_a;
					bool switch_b;
					bool variable;
					bool item;
					bool actor;
					bool timer;
					bool timer2;
				};
				std::array<bool, 7> flags;
			};
			//TODO: Should try to switch to member initializers when we upgrade to VS2017.
			Flags() noexcept: switch_a(false), switch_b(false), variable(false), item(false), actor(false), timer(false), timer2(false)
			{}
		} flags;
		int32_t switch_a_id = 1;
		int32_t switch_b_id = 1;
		int32_t variable_id = 1;
		int32_t variable_value = 0;
		int32_t item_id = 1;
		int32_t actor_id = 1;
		int32_t timer_sec = 0;
		int32_t timer2_sec = 0;
		int32_t compare_operator = 1;
	};
	inline std::ostream& operator<<(std::ostream& os, EventPageCondition::Comparison code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const EventPageCondition::Flags& l, const EventPageCondition::Flags& r) {
		return l.flags == r.flags;
	}

	inline bool operator!=(const EventPageCondition::Flags& l, const EventPageCondition::Flags& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const EventPageCondition::Flags& obj);

	inline bool operator==(const EventPageCondition& l, const EventPageCondition& r) {
		return l.flags == r.flags
		&& l.switch_a_id == r.switch_a_id
		&& l.switch_b_id == r.switch_b_id
		&& l.variable_id == r.variable_id
		&& l.variable_value == r.variable_value
		&& l.item_id == r.item_id
		&& l.actor_id == r.actor_id
		&& l.timer_sec == r.timer_sec
		&& l.timer2_sec == r.timer2_sec
		&& l.compare_operator == r.compare_operator;
	}

	inline bool operator!=(const EventPageCondition& l, const EventPageCondition& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const EventPageCondition& obj);

	template <> struct ReflectStruct<EventPageCondition> {
		using type_t = EventPageCondition;
		static constexpr const auto& = "EventPageCondition";
	};
	// Bitflag
	template <> struct ReflectMember<EventPageCondition,EventPageCondition::Flags,&EventPageCondition::flags> {
		using struct_t = EventPageCondition;
		using type_t = EventPageCondition::Flags;
		static constexpr const auto& name[] = "flags";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<EventPageCondition,int32_t,&EventPageCondition::switch_a_id> {
		using struct_t = EventPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "switch_a_id";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EventPageCondition,int32_t,&EventPageCondition::switch_b_id> {
		using struct_t = EventPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "switch_b_id";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EventPageCondition,int32_t,&EventPageCondition::variable_id> {
		using struct_t = EventPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "variable_id";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EventPageCondition,int32_t,&EventPageCondition::variable_value> {
		using struct_t = EventPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "variable_value";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EventPageCondition,int32_t,&EventPageCondition::item_id> {
		using struct_t = EventPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "item_id";
		static constexpr const int id = 0x06;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EventPageCondition,int32_t,&EventPageCondition::actor_id> {
		using struct_t = EventPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "actor_id";
		static constexpr const int id = 0x07;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<EventPageCondition,int32_t,&EventPageCondition::timer_sec> {
		using struct_t = EventPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "timer_sec";
		static constexpr const int id = 0x08;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<EventPageCondition,int32_t,&EventPageCondition::timer2_sec> {
		using struct_t = EventPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "timer2_sec";
		static constexpr const int id = 0x09;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<EventPageCondition,int32_t,&EventPageCondition::compare_operator> {
		using struct_t = EventPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "compare_operator";
		static constexpr const int id = 0x0A;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
