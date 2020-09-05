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

#ifndef LCF_RPG_MOVECOMMAND_H
#define LCF_RPG_MOVECOMMAND_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::MoveCommand class.
 */
namespace lcf {
namespace rpg {
	class MoveCommand {
	public:
		enum class Code {
			move_up = 0,
			move_right = 1,
			move_down = 2,
			move_left = 3,
			move_upright = 4,
			move_downright = 5,
			move_downleft = 6,
			move_upleft = 7,
			move_random = 8,
			move_towards_hero = 9,
			move_away_from_hero = 10,
			move_forward = 11,
			face_up = 12,
			face_right = 13,
			face_down = 14,
			face_left = 15,
			turn_90_degree_right = 16,
			turn_90_degree_left = 17,
			turn_180_degree = 18,
			turn_90_degree_random = 19,
			face_random_direction = 20,
			face_hero = 21,
			face_away_from_hero = 22,
			wait = 23,
			begin_jump = 24,
			end_jump = 25,
			lock_facing = 26,
			unlock_facing = 27,
			increase_movement_speed = 28,
			decrease_movement_speed = 29,
			increase_movement_frequence = 30,
			decrease_movement_frequence = 31,
			switch_on = 32,
			switch_off = 33,
			change_graphic = 34,
			play_sound_effect = 35,
			walk_everywhere_on = 36,
			walk_everywhere_off = 37,
			stop_animation = 38,
			start_animation = 39,
			increase_transp = 40,
			decrease_transp = 41
		};
		static constexpr auto kCodeTags = lcf::makeEnumTags<Code>(
			"move_up",
			"move_right",
			"move_down",
			"move_left",
			"move_upright",
			"move_downright",
			"move_downleft",
			"move_upleft",
			"move_random",
			"move_towards_hero",
			"move_away_from_hero",
			"move_forward",
			"face_up",
			"face_right",
			"face_down",
			"face_left",
			"turn_90_degree_right",
			"turn_90_degree_left",
			"turn_180_degree",
			"turn_90_degree_random",
			"face_random_direction",
			"face_hero",
			"face_away_from_hero",
			"wait",
			"begin_jump",
			"end_jump",
			"lock_facing",
			"unlock_facing",
			"increase_movement_speed",
			"decrease_movement_speed",
			"increase_movement_frequence",
			"decrease_movement_frequence",
			"switch_on",
			"switch_off",
			"change_graphic",
			"play_sound_effect",
			"walk_everywhere_on",
			"walk_everywhere_off",
			"stop_animation",
			"start_animation",
			"increase_transp",
			"decrease_transp"
		);

		int32_t command_id = 0;
		DBString parameter_string;
		int32_t parameter_a = 0;
		int32_t parameter_b = 0;
		int32_t parameter_c = 0;
	};
	inline std::ostream& operator<<(std::ostream& os, MoveCommand::Code code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const MoveCommand& l, const MoveCommand& r) {
		return l.command_id == r.command_id
		&& l.parameter_string == r.parameter_string
		&& l.parameter_a == r.parameter_a
		&& l.parameter_b == r.parameter_b
		&& l.parameter_c == r.parameter_c;
	}

	inline bool operator!=(const MoveCommand& l, const MoveCommand& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const MoveCommand& obj);

	template <> struct ReflectStruct<MoveCommand> {
		using type_t = MoveCommand;
		static constexpr const auto& name = "MoveCommand";
	};
	// 
	template <> struct ReflectMember<MoveCommand,int32_t,&MoveCommand::command_id> {
		using struct_t = MoveCommand;
		using type_t = int32_t;
		static constexpr const auto& name = "command_id";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<MoveCommand,DBString,&MoveCommand::parameter_string> {
		using struct_t = MoveCommand;
		using type_t = DBString;
		static constexpr const auto& name = "parameter_string";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<MoveCommand,int32_t,&MoveCommand::parameter_a> {
		using struct_t = MoveCommand;
		using type_t = int32_t;
		static constexpr const auto& name = "parameter_a";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<MoveCommand,int32_t,&MoveCommand::parameter_b> {
		using struct_t = MoveCommand;
		using type_t = int32_t;
		static constexpr const auto& name = "parameter_b";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<MoveCommand,int32_t,&MoveCommand::parameter_c> {
		using struct_t = MoveCommand;
		using type_t = int32_t;
		static constexpr const auto& name = "parameter_c";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,MoveCommand>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.command_id, LCF_REFL_S(MoveCommand)(), LCF_REFL_M(MoveCommand, command_id)());
		v(s, s.parameter_string, LCF_REFL_S(MoveCommand)(), LCF_REFL_M(MoveCommand, parameter_string)());
		v(s, s.parameter_a, LCF_REFL_S(MoveCommand)(), LCF_REFL_M(MoveCommand, parameter_a)());
		v(s, s.parameter_b, LCF_REFL_S(MoveCommand)(), LCF_REFL_M(MoveCommand, parameter_b)());
		v(s, s.parameter_c, LCF_REFL_S(MoveCommand)(), LCF_REFL_M(MoveCommand, parameter_c)());
	}

} // namespace rpg
} // namespace lcf

#endif
