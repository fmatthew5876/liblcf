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

#ifndef LCF_RPG_ACTOR_H
#define LCF_RPG_ACTOR_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/dbstring.h"
#include "lcf/rpg/equipment.h"
#include "lcf/rpg/learning.h"
#include "lcf/rpg/parameters.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Actor class.
 */
namespace lcf {
namespace rpg {
	class Actor {
	public:
		void Setup();
		int ID = 0;
		DBString name;
		DBString title;
		DBString character_name;
		int32_t character_index = 0;
		bool transparent = false;
		int32_t initial_level = 1;
		int32_t final_level = -1;
		bool critical_hit = true;
		int32_t critical_hit_chance = 30;
		DBString face_name;
		int32_t face_index = 0;
		bool two_weapon = false;
		bool lock_equipment = false;
		bool auto_battle = false;
		bool super_guard = false;
		Parameters parameters;
		int32_t exp_base = -1;
		int32_t exp_inflation = -1;
		int32_t exp_correction = 0;
		Equipment initial_equipment;
		int32_t unarmed_animation = 1;
		int32_t class_id = 0;
		int32_t battle_x = 220;
		int32_t battle_y = 120;
		int32_t battler_animation = 1;
		std::vector<Learning> skills;
		bool rename_skill = false;
		DBString skill_name;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<int32_t> battle_commands;
	};

	inline bool operator==(const Actor& l, const Actor& r) {
		return l.name == r.name
		&& l.title == r.title
		&& l.character_name == r.character_name
		&& l.character_index == r.character_index
		&& l.transparent == r.transparent
		&& l.initial_level == r.initial_level
		&& l.final_level == r.final_level
		&& l.critical_hit == r.critical_hit
		&& l.critical_hit_chance == r.critical_hit_chance
		&& l.face_name == r.face_name
		&& l.face_index == r.face_index
		&& l.two_weapon == r.two_weapon
		&& l.lock_equipment == r.lock_equipment
		&& l.auto_battle == r.auto_battle
		&& l.super_guard == r.super_guard
		&& l.parameters == r.parameters
		&& l.exp_base == r.exp_base
		&& l.exp_inflation == r.exp_inflation
		&& l.exp_correction == r.exp_correction
		&& l.initial_equipment == r.initial_equipment
		&& l.unarmed_animation == r.unarmed_animation
		&& l.class_id == r.class_id
		&& l.battle_x == r.battle_x
		&& l.battle_y == r.battle_y
		&& l.battler_animation == r.battler_animation
		&& l.skills == r.skills
		&& l.rename_skill == r.rename_skill
		&& l.skill_name == r.skill_name
		&& l.state_ranks == r.state_ranks
		&& l.attribute_ranks == r.attribute_ranks
		&& l.battle_commands == r.battle_commands;
	}

	inline bool operator!=(const Actor& l, const Actor& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Actor& obj);

	template <> struct ReflectStruct<Actor> {
		using type_t = Actor;
		static constexpr const auto& name = "Actor";
	};
	// String
	template <> struct ReflectMember<Actor,DBString,&Actor::name> {
		using struct_t = Actor;
		using type_t = DBString;
		static constexpr const auto& name = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<Actor,DBString,&Actor::title> {
		using struct_t = Actor;
		using type_t = DBString;
		static constexpr const auto& name = "title";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<Actor,DBString,&Actor::character_name> {
		using struct_t = Actor;
		using type_t = DBString;
		static constexpr const auto& name = "character_name";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Actor,int32_t,&Actor::character_index> {
		using struct_t = Actor;
		using type_t = int32_t;
		static constexpr const auto& name = "character_index";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Actor,bool,&Actor::transparent> {
		using struct_t = Actor;
		using type_t = bool;
		static constexpr const auto& name = "transparent";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Actor,int32_t,&Actor::initial_level> {
		using struct_t = Actor;
		using type_t = int32_t;
		static constexpr const auto& name = "initial_level";
		static constexpr const int id = 0x07;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Actor,int32_t,&Actor::final_level> {
		using struct_t = Actor;
		using type_t = int32_t;
		static constexpr const auto& name = "final_level";
		static constexpr const int id = 0x08;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Actor,bool,&Actor::critical_hit> {
		using struct_t = Actor;
		using type_t = bool;
		static constexpr const auto& name = "critical_hit";
		static constexpr const int id = 0x09;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Actor,int32_t,&Actor::critical_hit_chance> {
		using struct_t = Actor;
		using type_t = int32_t;
		static constexpr const auto& name = "critical_hit_chance";
		static constexpr const int id = 0x0A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<Actor,DBString,&Actor::face_name> {
		using struct_t = Actor;
		using type_t = DBString;
		static constexpr const auto& name = "face_name";
		static constexpr const int id = 0x0F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Actor,int32_t,&Actor::face_index> {
		using struct_t = Actor;
		using type_t = int32_t;
		static constexpr const auto& name = "face_index";
		static constexpr const int id = 0x10;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Actor,bool,&Actor::two_weapon> {
		using struct_t = Actor;
		using type_t = bool;
		static constexpr const auto& name = "two_weapon";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Actor,bool,&Actor::lock_equipment> {
		using struct_t = Actor;
		using type_t = bool;
		static constexpr const auto& name = "lock_equipment";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Actor,bool,&Actor::auto_battle> {
		using struct_t = Actor;
		using type_t = bool;
		static constexpr const auto& name = "auto_battle";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Actor,bool,&Actor::super_guard> {
		using struct_t = Actor;
		using type_t = bool;
		static constexpr const auto& name = "super_guard";
		static constexpr const int id = 0x18;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array x 6 - Short
	template <> struct ReflectMember<Actor,Parameters,&Actor::parameters> {
		using struct_t = Actor;
		using type_t = Parameters;
		static constexpr const auto& name = "parameters";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<Actor,int32_t,&Actor::exp_base> {
		using struct_t = Actor;
		using type_t = int32_t;
		static constexpr const auto& name = "exp_base";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Actor,int32_t,&Actor::exp_inflation> {
		using struct_t = Actor;
		using type_t = int32_t;
		static constexpr const auto& name = "exp_inflation";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Actor,int32_t,&Actor::exp_correction> {
		using struct_t = Actor;
		using type_t = int32_t;
		static constexpr const auto& name = "exp_correction";
		static constexpr const int id = 0x2B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer x 5
	template <> struct ReflectMember<Actor,Equipment,&Actor::initial_equipment> {
		using struct_t = Actor;
		using type_t = Equipment;
		static constexpr const auto& name = "initial_equipment";
		static constexpr const int id = 0x33;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<Actor,int32_t,&Actor::unarmed_animation> {
		using struct_t = Actor;
		using type_t = int32_t;
		static constexpr const auto& name = "unarmed_animation";
		static constexpr const int id = 0x38;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Actor,int32_t,&Actor::class_id> {
		using struct_t = Actor;
		using type_t = int32_t;
		static constexpr const auto& name = "class_id";
		static constexpr const int id = 0x39;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Actor,int32_t,&Actor::battle_x> {
		using struct_t = Actor;
		using type_t = int32_t;
		static constexpr const auto& name = "battle_x";
		static constexpr const int id = 0x3B;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Actor,int32_t,&Actor::battle_y> {
		using struct_t = Actor;
		using type_t = int32_t;
		static constexpr const auto& name = "battle_y";
		static constexpr const int id = 0x3C;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Actor,int32_t,&Actor::battler_animation> {
		using struct_t = Actor;
		using type_t = int32_t;
		static constexpr const auto& name = "battler_animation";
		static constexpr const int id = 0x3E;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Array - rpg::Learning
	template <> struct ReflectMember<Actor,std::vector<Learning>,&Actor::skills> {
		using struct_t = Actor;
		using type_t = std::vector<Learning>;
		static constexpr const auto& name = "skills";
		static constexpr const int id = 0x3F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Flag
	template <> struct ReflectMember<Actor,bool,&Actor::rename_skill> {
		using struct_t = Actor;
		using type_t = bool;
		static constexpr const auto& name = "rename_skill";
		static constexpr const int id = 0x42;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<Actor,DBString,&Actor::skill_name> {
		using struct_t = Actor;
		using type_t = DBString;
		static constexpr const auto& name = "skill_name";
		static constexpr const int id = 0x43;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - Short
	template <> struct ReflectMember<Actor,std::vector<uint8_t>,&Actor::state_ranks> {
		using struct_t = Actor;
		using type_t = std::vector<uint8_t>;
		static constexpr const auto& name = "state_ranks";
		static constexpr const int id = 0x48;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - Short
	template <> struct ReflectMember<Actor,std::vector<uint8_t>,&Actor::attribute_ranks> {
		using struct_t = Actor;
		using type_t = std::vector<uint8_t>;
		static constexpr const auto& name = "attribute_ranks";
		static constexpr const int id = 0x4A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - rpg::BattleCommand - RPG2003
	template <> struct ReflectMember<Actor,std::vector<int32_t>,&Actor::battle_commands> {
		using struct_t = Actor;
		using type_t = std::vector<int32_t>;
		static constexpr const auto& name = "battle_commands";
		static constexpr const int id = 0x50;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,Actor>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.name, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, name)());
		v(s, s.title, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, title)());
		v(s, s.character_name, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, character_name)());
		v(s, s.character_index, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, character_index)());
		v(s, s.transparent, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, transparent)());
		v(s, s.initial_level, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, initial_level)());
		v(s, s.final_level, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, final_level)());
		v(s, s.critical_hit, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, critical_hit)());
		v(s, s.critical_hit_chance, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, critical_hit_chance)());
		v(s, s.face_name, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, face_name)());
		v(s, s.face_index, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, face_index)());
		v(s, s.two_weapon, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, two_weapon)());
		v(s, s.lock_equipment, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, lock_equipment)());
		v(s, s.auto_battle, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, auto_battle)());
		v(s, s.super_guard, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, super_guard)());
		v(s, s.parameters, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, parameters)());
		ForEachMember(s.parameters, v);
		v(s, s.exp_base, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, exp_base)());
		v(s, s.exp_inflation, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, exp_inflation)());
		v(s, s.exp_correction, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, exp_correction)());
		v(s, s.initial_equipment, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, initial_equipment)());
		ForEachMember(s.initial_equipment, v);
		v(s, s.unarmed_animation, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, unarmed_animation)());
		v(s, s.class_id, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, class_id)());
		v(s, s.battle_x, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, battle_x)());
		v(s, s.battle_y, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, battle_y)());
		v(s, s.battler_animation, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, battler_animation)());
		v(s, s.skills, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, skills)());
		for (auto&& e: s.skills) {
			ForEachMember(e, v);
		}
		v(s, s.rename_skill, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, rename_skill)());
		v(s, s.skill_name, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, skill_name)());
		v(s, s.state_ranks, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, state_ranks)());
		v(s, s.attribute_ranks, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, attribute_ranks)());
		v(s, s.battle_commands, LCF_REFL_S(Actor)(), LCF_REFL_M(Actor, battle_commands)());
	}

} // namespace rpg
} // namespace lcf

#endif
