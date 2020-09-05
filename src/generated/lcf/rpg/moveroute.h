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

#ifndef LCF_RPG_MOVEROUTE_H
#define LCF_RPG_MOVEROUTE_H

#include <lcf/rpg/reflect.h>

// Headers
#include <vector>
#include "lcf/rpg/movecommand.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::MoveRoute class.
 */
namespace lcf {
namespace rpg {
	class MoveRoute {
	public:
		std::vector<MoveCommand> move_commands;
		bool repeat = true;
		bool skippable = false;
	};

	inline bool operator==(const MoveRoute& l, const MoveRoute& r) {
		return l.move_commands == r.move_commands
		&& l.repeat == r.repeat
		&& l.skippable == r.skippable;
	}

	inline bool operator!=(const MoveRoute& l, const MoveRoute& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const MoveRoute& obj);

	template <> struct ReflectStruct<MoveRoute> {
		using type_t = MoveRoute;
		static constexpr const auto& = "MoveRoute";
	};
	// Array - rpg::MoveCommand
	template <> struct ReflectMember<MoveRoute,std::vector<MoveCommand>,&MoveRoute::move_commands> {
		using struct_t = MoveRoute;
		using type_t = std::vector<MoveCommand>;
		static constexpr const auto& name[] = "move_commands";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Flag
	template <> struct ReflectMember<MoveRoute,bool,&MoveRoute::repeat> {
		using struct_t = MoveRoute;
		using type_t = bool;
		static constexpr const auto& name[] = "repeat";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<MoveRoute,bool,&MoveRoute::skippable> {
		using struct_t = MoveRoute;
		using type_t = bool;
		static constexpr const auto& name[] = "skippable";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
