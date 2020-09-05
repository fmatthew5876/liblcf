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

#ifndef LCF_RPG_EQUIPMENT_H
#define LCF_RPG_EQUIPMENT_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <ostream>
#include <type_traits>

/**
 * rpg::Equipment class.
 */
namespace lcf {
namespace rpg {
	class Equipment {
	public:
		int16_t weapon_id = 0;
		int16_t shield_id = 0;
		int16_t armor_id = 0;
		int16_t helmet_id = 0;
		int16_t accessory_id = 0;
	};

	inline bool operator==(const Equipment& l, const Equipment& r) {
		return l.weapon_id == r.weapon_id
		&& l.shield_id == r.shield_id
		&& l.armor_id == r.armor_id
		&& l.helmet_id == r.helmet_id
		&& l.accessory_id == r.accessory_id;
	}

	inline bool operator!=(const Equipment& l, const Equipment& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Equipment& obj);

	template <> struct ReflectStruct<Equipment> {
		using type_t = Equipment;
		static constexpr const auto& name = "Equipment";
	};
	// 
	template <> struct ReflectMember<Equipment,int16_t,&Equipment::weapon_id> {
		using struct_t = Equipment;
		using type_t = int16_t;
		static constexpr const auto& name = "weapon_id";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<Equipment,int16_t,&Equipment::shield_id> {
		using struct_t = Equipment;
		using type_t = int16_t;
		static constexpr const auto& name = "shield_id";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<Equipment,int16_t,&Equipment::armor_id> {
		using struct_t = Equipment;
		using type_t = int16_t;
		static constexpr const auto& name = "armor_id";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<Equipment,int16_t,&Equipment::helmet_id> {
		using struct_t = Equipment;
		using type_t = int16_t;
		static constexpr const auto& name = "helmet_id";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<Equipment,int16_t,&Equipment::accessory_id> {
		using struct_t = Equipment;
		using type_t = int16_t;
		static constexpr const auto& name = "accessory_id";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,Equipment>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.weapon_id, LCF_REFL_S(Equipment)(), LCF_REFL_M(Equipment, weapon_id)());
		v(s, s.shield_id, LCF_REFL_S(Equipment)(), LCF_REFL_M(Equipment, shield_id)());
		v(s, s.armor_id, LCF_REFL_S(Equipment)(), LCF_REFL_M(Equipment, armor_id)());
		v(s, s.helmet_id, LCF_REFL_S(Equipment)(), LCF_REFL_M(Equipment, helmet_id)());
		v(s, s.accessory_id, LCF_REFL_S(Equipment)(), LCF_REFL_M(Equipment, accessory_id)());
	}

} // namespace rpg
} // namespace lcf

#endif
