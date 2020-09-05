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

#ifndef LCF_RPG_TROOP_H
#define LCF_RPG_TROOP_H

#include <lcf/rpg/reflect.h>

// Headers
#include <vector>
#include "lcf/dbbitarray.h"
#include "lcf/dbstring.h"
#include "lcf/rpg/troopmember.h"
#include "lcf/rpg/trooppage.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Troop class.
 */
namespace lcf {
namespace rpg {
	class Troop {
	public:
		int ID = 0;
		DBString name;
		std::vector<TroopMember> members;
		bool auto_alignment = false;
		DBBitArray terrain_set;
		bool appear_randomly = false;
		std::vector<TroopPage> pages;
	};

	inline bool operator==(const Troop& l, const Troop& r) {
		return l.name == r.name
		&& l.members == r.members
		&& l.auto_alignment == r.auto_alignment
		&& l.terrain_set == r.terrain_set
		&& l.appear_randomly == r.appear_randomly
		&& l.pages == r.pages;
	}

	inline bool operator!=(const Troop& l, const Troop& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Troop& obj);

	template <> struct ReflectStruct<Troop> {
		using type_t = Troop;
		static constexpr const auto& = "Troop";
	};
	// String
	template <> struct ReflectMember<Troop,DBString,&Troop::name> {
		using struct_t = Troop;
		using type_t = DBString;
		static constexpr const auto& name[] = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - rpg::TroopMember
	template <> struct ReflectMember<Troop,std::vector<TroopMember>,&Troop::members> {
		using struct_t = Troop;
		using type_t = std::vector<TroopMember>;
		static constexpr const auto& name[] = "members";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Flag
	template <> struct ReflectMember<Troop,bool,&Troop::auto_alignment> {
		using struct_t = Troop;
		using type_t = bool;
		static constexpr const auto& name[] = "auto_alignment";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Array - Flag
	template <> struct ReflectMember<Troop,DBBitArray,&Troop::terrain_set> {
		using struct_t = Troop;
		using type_t = DBBitArray;
		static constexpr const auto& name[] = "terrain_set";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Flag
	template <> struct ReflectMember<Troop,bool,&Troop::appear_randomly> {
		using struct_t = Troop;
		using type_t = bool;
		static constexpr const auto& name[] = "appear_randomly";
		static constexpr const int id = 0x06;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Array - rpg::TroopPage
	template <> struct ReflectMember<Troop,std::vector<TroopPage>,&Troop::pages> {
		using struct_t = Troop;
		using type_t = std::vector<TroopPage>;
		static constexpr const auto& name[] = "pages";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
} // namespace rpg
} // namespace lcf

#endif
