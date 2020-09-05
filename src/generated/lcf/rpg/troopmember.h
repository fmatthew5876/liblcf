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

#ifndef LCF_RPG_TROOPMEMBER_H
#define LCF_RPG_TROOPMEMBER_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <ostream>
#include <type_traits>

/**
 * rpg::TroopMember class.
 */
namespace lcf {
namespace rpg {
	class TroopMember {
	public:
		int ID = 0;
		int32_t enemy_id = 1;
		int32_t x = 0;
		int32_t y = 0;
		bool invisible = false;
	};

	inline bool operator==(const TroopMember& l, const TroopMember& r) {
		return l.enemy_id == r.enemy_id
		&& l.x == r.x
		&& l.y == r.y
		&& l.invisible == r.invisible;
	}

	inline bool operator!=(const TroopMember& l, const TroopMember& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const TroopMember& obj);

	template <> struct ReflectStruct<TroopMember> {
		using type_t = TroopMember;
		static constexpr const auto& = "TroopMember";
	};
	// Integer
	template <> struct ReflectMember<TroopMember,int32_t,&TroopMember::enemy_id> {
		using struct_t = TroopMember;
		using type_t = int32_t;
		static constexpr const auto& name[] = "enemy_id";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TroopMember,int32_t,&TroopMember::x> {
		using struct_t = TroopMember;
		using type_t = int32_t;
		static constexpr const auto& name[] = "x";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TroopMember,int32_t,&TroopMember::y> {
		using struct_t = TroopMember;
		using type_t = int32_t;
		static constexpr const auto& name[] = "y";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<TroopMember,bool,&TroopMember::invisible> {
		using struct_t = TroopMember;
		using type_t = bool;
		static constexpr const auto& name[] = "invisible";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
