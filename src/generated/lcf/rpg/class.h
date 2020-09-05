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

#ifndef LCF_RPG_CLASS_H
#define LCF_RPG_CLASS_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/dbstring.h"
#include "lcf/rpg/learning.h"
#include "lcf/rpg/parameters.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Class class.
 */
namespace lcf {
namespace rpg {
	class Class {
	public:
		int ID = 0;
		DBString name;
		bool two_weapon = false;
		bool lock_equipment = false;
		bool auto_battle = false;
		bool super_guard = false;
		Parameters parameters;
		int32_t exp_base = 300;
		int32_t exp_inflation = 300;
		int32_t exp_correction = 0;
		int32_t battler_animation = 0;
		std::vector<Learning> skills;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<int32_t> battle_commands;
	};

	inline bool operator==(const Class& l, const Class& r) {
		return l.name == r.name
		&& l.two_weapon == r.two_weapon
		&& l.lock_equipment == r.lock_equipment
		&& l.auto_battle == r.auto_battle
		&& l.super_guard == r.super_guard
		&& l.parameters == r.parameters
		&& l.exp_base == r.exp_base
		&& l.exp_inflation == r.exp_inflation
		&& l.exp_correction == r.exp_correction
		&& l.battler_animation == r.battler_animation
		&& l.skills == r.skills
		&& l.state_ranks == r.state_ranks
		&& l.attribute_ranks == r.attribute_ranks
		&& l.battle_commands == r.battle_commands;
	}

	inline bool operator!=(const Class& l, const Class& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Class& obj);

	template <> struct ReflectStruct<Class> {
		using type_t = Class;
		static constexpr const auto& = "Class";
	};
	// String
	template <> struct ReflectMember<Class,DBString,&Class::name> {
		using struct_t = Class;
		using type_t = DBString;
		static constexpr const auto& name[] = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Class,bool,&Class::two_weapon> {
		using struct_t = Class;
		using type_t = bool;
		static constexpr const auto& name[] = "two_weapon";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Class,bool,&Class::lock_equipment> {
		using struct_t = Class;
		using type_t = bool;
		static constexpr const auto& name[] = "lock_equipment";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Class,bool,&Class::auto_battle> {
		using struct_t = Class;
		using type_t = bool;
		static constexpr const auto& name[] = "auto_battle";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Class,bool,&Class::super_guard> {
		using struct_t = Class;
		using type_t = bool;
		static constexpr const auto& name[] = "super_guard";
		static constexpr const int id = 0x18;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array x 6 - Short
	template <> struct ReflectMember<Class,Parameters,&Class::parameters> {
		using struct_t = Class;
		using type_t = Parameters;
		static constexpr const auto& name[] = "parameters";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Class,int32_t,&Class::exp_base> {
		using struct_t = Class;
		using type_t = int32_t;
		static constexpr const auto& name[] = "exp_base";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Class,int32_t,&Class::exp_inflation> {
		using struct_t = Class;
		using type_t = int32_t;
		static constexpr const auto& name[] = "exp_inflation";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Class,int32_t,&Class::exp_correction> {
		using struct_t = Class;
		using type_t = int32_t;
		static constexpr const auto& name[] = "exp_correction";
		static constexpr const int id = 0x2B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Class,int32_t,&Class::battler_animation> {
		using struct_t = Class;
		using type_t = int32_t;
		static constexpr const auto& name[] = "battler_animation";
		static constexpr const int id = 0x3E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - rpg::Learning
	template <> struct ReflectMember<Class,std::vector<Learning>,&Class::skills> {
		using struct_t = Class;
		using type_t = std::vector<Learning>;
		static constexpr const auto& name[] = "skills";
		static constexpr const int id = 0x3F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - Short
	template <> struct ReflectMember<Class,std::vector<uint8_t>,&Class::state_ranks> {
		using struct_t = Class;
		using type_t = std::vector<uint8_t>;
		static constexpr const auto& name[] = "state_ranks";
		static constexpr const int id = 0x48;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - Short
	template <> struct ReflectMember<Class,std::vector<uint8_t>,&Class::attribute_ranks> {
		using struct_t = Class;
		using type_t = std::vector<uint8_t>;
		static constexpr const auto& name[] = "attribute_ranks";
		static constexpr const int id = 0x4A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - Uint32
	template <> struct ReflectMember<Class,std::vector<int32_t>,&Class::battle_commands> {
		using struct_t = Class;
		using type_t = std::vector<int32_t>;
		static constexpr const auto& name[] = "battle_commands";
		static constexpr const int id = 0x50;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
} // namespace rpg
} // namespace lcf

#endif
