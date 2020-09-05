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

#ifndef LCF_RPG_COMMONEVENT_H
#define LCF_RPG_COMMONEVENT_H

#include <lcf/rpg/reflect.h>

// Headers
#include <vector>
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include "lcf/rpg/eventcommand.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::CommonEvent class.
 */
namespace lcf {
namespace rpg {
	class CommonEvent {
	public:
		enum Trigger {
			Trigger_automatic = 3,
			Trigger_parallel = 4,
			Trigger_call = 5
		};

		int ID = 0;
		DBString name;
		int32_t trigger = 0;
		bool switch_flag = false;
		int32_t switch_id = 1;
		std::vector<EventCommand> event_commands;
	};
	inline std::ostream& operator<<(std::ostream& os, CommonEvent::Trigger code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const CommonEvent& l, const CommonEvent& r) {
		return l.name == r.name
		&& l.trigger == r.trigger
		&& l.switch_flag == r.switch_flag
		&& l.switch_id == r.switch_id
		&& l.event_commands == r.event_commands;
	}

	inline bool operator!=(const CommonEvent& l, const CommonEvent& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const CommonEvent& obj);

	template <> struct ReflectStruct<CommonEvent> {
		using type_t = CommonEvent;
		static constexpr const auto& name = "CommonEvent";
	};
	// String
	template <> struct ReflectMember<CommonEvent,DBString,&CommonEvent::name> {
		using struct_t = CommonEvent;
		using type_t = DBString;
		static constexpr const auto& name = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<CommonEvent,int32_t,&CommonEvent::trigger> {
		using struct_t = CommonEvent;
		using type_t = int32_t;
		static constexpr const auto& name = "trigger";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<CommonEvent,bool,&CommonEvent::switch_flag> {
		using struct_t = CommonEvent;
		using type_t = bool;
		static constexpr const auto& name = "switch_flag";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<CommonEvent,int32_t,&CommonEvent::switch_id> {
		using struct_t = CommonEvent;
		using type_t = int32_t;
		static constexpr const auto& name = "switch_id";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - rpg::EventCommand
	template <> struct ReflectMember<CommonEvent,std::vector<EventCommand>,&CommonEvent::event_commands> {
		using struct_t = CommonEvent;
		using type_t = std::vector<EventCommand>;
		static constexpr const auto& name = "event_commands";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,CommonEvent>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.name, LCF_REFL_S(CommonEvent)(), LCF_REFL_M(CommonEvent, name)());
		v(s, s.trigger, LCF_REFL_S(CommonEvent)(), LCF_REFL_M(CommonEvent, trigger)());
		v(s, s.switch_flag, LCF_REFL_S(CommonEvent)(), LCF_REFL_M(CommonEvent, switch_flag)());
		v(s, s.switch_id, LCF_REFL_S(CommonEvent)(), LCF_REFL_M(CommonEvent, switch_id)());
		v(s, s.event_commands, LCF_REFL_S(CommonEvent)(), LCF_REFL_M(CommonEvent, event_commands)());
		for (auto&& e: s.event_commands) {
			ForEachMember(e, v);
		}
	}

} // namespace rpg
} // namespace lcf

#endif
