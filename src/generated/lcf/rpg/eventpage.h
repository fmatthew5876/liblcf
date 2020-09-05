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

#ifndef LCF_RPG_EVENTPAGE_H
#define LCF_RPG_EVENTPAGE_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include "lcf/rpg/eventcommand.h"
#include "lcf/rpg/eventpagecondition.h"
#include "lcf/rpg/moveroute.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::EventPage class.
 */
namespace lcf {
namespace rpg {
	class EventPage {
	public:
		enum Direction {
			Direction_up = 0,
			Direction_right = 1,
			Direction_down = 2,
			Direction_left = 3
		};
		static constexpr auto kDirectionTags = lcf::makeEnumTags<Direction>(
			"up",
			"right",
			"down",
			"left"
		);
		enum Frame {
			Frame_left = 0,
			Frame_middle = 1,
			Frame_right = 2,
			Frame_middle2 = 3
		};
		static constexpr auto kFrameTags = lcf::makeEnumTags<Frame>(
			"left",
			"middle",
			"right",
			"middle2"
		);
		enum MoveType {
			MoveType_stationary = 0,
			MoveType_random = 1,
			MoveType_vertical = 2,
			MoveType_horizontal = 3,
			MoveType_toward = 4,
			MoveType_away = 5,
			MoveType_custom = 6
		};
		static constexpr auto kMoveTypeTags = lcf::makeEnumTags<MoveType>(
			"stationary",
			"random",
			"vertical",
			"horizontal",
			"toward",
			"away",
			"custom"
		);
		enum Trigger {
			Trigger_action = 0,
			Trigger_touched = 1,
			Trigger_collision = 2,
			Trigger_auto_start = 3,
			Trigger_parallel = 4
		};
		static constexpr auto kTriggerTags = lcf::makeEnumTags<Trigger>(
			"action",
			"touched",
			"collision",
			"auto_start",
			"parallel"
		);
		enum Layers {
			Layers_below = 0,
			Layers_same = 1,
			Layers_above = 2
		};
		static constexpr auto kLayersTags = lcf::makeEnumTags<Layers>(
			"below",
			"same",
			"above"
		);
		enum AnimType {
			AnimType_non_continuous = 0,
			AnimType_continuous = 1,
			AnimType_fixed_non_continuous = 2,
			AnimType_fixed_continuous = 3,
			AnimType_fixed_graphic = 4,
			AnimType_spin = 5,
			AnimType_step_frame_fix = 6
		};
		static constexpr auto kAnimTypeTags = lcf::makeEnumTags<AnimType>(
			"non_continuous",
			"continuous",
			"fixed_non_continuous",
			"fixed_continuous",
			"fixed_graphic",
			"spin",
			"step_frame_fix"
		);
		enum MoveSpeed {
			MoveSpeed_eighth = 1,
			MoveSpeed_quarter = 2,
			MoveSpeed_half = 3,
			MoveSpeed_normal = 4,
			MoveSpeed_double = 5,
			MoveSpeed_fourfold = 6
		};

		int ID = 0;
		EventPageCondition condition;
		DBString character_name;
		int32_t character_index = 0;
		int32_t character_direction = 2;
		int32_t character_pattern = 1;
		bool translucent = false;
		int32_t move_type = 1;
		int32_t move_frequency = 3;
		int32_t trigger = 0;
		int32_t layer = 0;
		bool overlap_forbidden = false;
		int32_t animation_type = 0;
		int32_t move_speed = 3;
		MoveRoute move_route;
		std::vector<EventCommand> event_commands;
	};
	inline std::ostream& operator<<(std::ostream& os, EventPage::Direction code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, EventPage::Frame code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, EventPage::MoveType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, EventPage::Trigger code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, EventPage::Layers code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, EventPage::AnimType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, EventPage::MoveSpeed code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const EventPage& l, const EventPage& r) {
		return l.condition == r.condition
		&& l.character_name == r.character_name
		&& l.character_index == r.character_index
		&& l.character_direction == r.character_direction
		&& l.character_pattern == r.character_pattern
		&& l.translucent == r.translucent
		&& l.move_type == r.move_type
		&& l.move_frequency == r.move_frequency
		&& l.trigger == r.trigger
		&& l.layer == r.layer
		&& l.overlap_forbidden == r.overlap_forbidden
		&& l.animation_type == r.animation_type
		&& l.move_speed == r.move_speed
		&& l.move_route == r.move_route
		&& l.event_commands == r.event_commands;
	}

	inline bool operator!=(const EventPage& l, const EventPage& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const EventPage& obj);

	template <> struct ReflectStruct<EventPage> {
		using type_t = EventPage;
		static constexpr const auto& = "EventPage";
	};
	// rpg::EventPageCondition
	template <> struct ReflectMember<EventPage,EventPageCondition,&EventPage::condition> {
		using struct_t = EventPage;
		using type_t = EventPageCondition;
		static constexpr const auto& name[] = "condition";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<EventPage,DBString,&EventPage::character_name> {
		using struct_t = EventPage;
		using type_t = DBString;
		static constexpr const auto& name[] = "character_name";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EventPage,int32_t,&EventPage::character_index> {
		using struct_t = EventPage;
		using type_t = int32_t;
		static constexpr const auto& name[] = "character_index";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EventPage,int32_t,&EventPage::character_direction> {
		using struct_t = EventPage;
		using type_t = int32_t;
		static constexpr const auto& name[] = "character_direction";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<EventPage,int32_t,&EventPage::character_pattern> {
		using struct_t = EventPage;
		using type_t = int32_t;
		static constexpr const auto& name[] = "character_pattern";
		static constexpr const int id = 0x18;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EventPage,bool,&EventPage::translucent> {
		using struct_t = EventPage;
		using type_t = bool;
		static constexpr const auto& name[] = "translucent";
		static constexpr const int id = 0x19;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<EventPage,int32_t,&EventPage::move_type> {
		using struct_t = EventPage;
		using type_t = int32_t;
		static constexpr const auto& name[] = "move_type";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<EventPage,int32_t,&EventPage::move_frequency> {
		using struct_t = EventPage;
		using type_t = int32_t;
		static constexpr const auto& name[] = "move_frequency";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EventPage,int32_t,&EventPage::trigger> {
		using struct_t = EventPage;
		using type_t = int32_t;
		static constexpr const auto& name[] = "trigger";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<EventPage,int32_t,&EventPage::layer> {
		using struct_t = EventPage;
		using type_t = int32_t;
		static constexpr const auto& name[] = "layer";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Flag
	template <> struct ReflectMember<EventPage,bool,&EventPage::overlap_forbidden> {
		using struct_t = EventPage;
		using type_t = bool;
		static constexpr const auto& name[] = "overlap_forbidden";
		static constexpr const int id = 0x23;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<EventPage,int32_t,&EventPage::animation_type> {
		using struct_t = EventPage;
		using type_t = int32_t;
		static constexpr const auto& name[] = "animation_type";
		static constexpr const int id = 0x24;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<EventPage,int32_t,&EventPage::move_speed> {
		using struct_t = EventPage;
		using type_t = int32_t;
		static constexpr const auto& name[] = "move_speed";
		static constexpr const int id = 0x25;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// rpg::MoveRoute
	template <> struct ReflectMember<EventPage,MoveRoute,&EventPage::move_route> {
		using struct_t = EventPage;
		using type_t = MoveRoute;
		static constexpr const auto& name[] = "move_route";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - rpg::EventCommand
	template <> struct ReflectMember<EventPage,std::vector<EventCommand>,&EventPage::event_commands> {
		using struct_t = EventPage;
		using type_t = std::vector<EventCommand>;
		static constexpr const auto& name[] = "event_commands";
		static constexpr const int id = 0x34;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
} // namespace rpg
} // namespace lcf

#endif
