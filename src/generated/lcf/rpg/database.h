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

#ifndef LCF_RPG_DATABASE_H
#define LCF_RPG_DATABASE_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/rpg/actor.h"
#include "lcf/rpg/animation.h"
#include "lcf/rpg/attribute.h"
#include "lcf/rpg/battlecommands.h"
#include "lcf/rpg/battleranimation.h"
#include "lcf/rpg/chipset.h"
#include "lcf/rpg/class.h"
#include "lcf/rpg/commonevent.h"
#include "lcf/rpg/enemy.h"
#include "lcf/rpg/item.h"
#include "lcf/rpg/skill.h"
#include "lcf/rpg/state.h"
#include "lcf/rpg/switch.h"
#include "lcf/rpg/system.h"
#include "lcf/rpg/terms.h"
#include "lcf/rpg/terrain.h"
#include "lcf/rpg/troop.h"
#include "lcf/rpg/variable.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Database class.
 */
namespace lcf {
namespace rpg {
	class Database {
	public:
		std::string ldb_header;
		std::vector<Actor> actors;
		std::vector<Skill> skills;
		std::vector<Item> items;
		std::vector<Enemy> enemies;
		std::vector<Troop> troops;
		std::vector<Terrain> terrains;
		std::vector<Attribute> attributes;
		std::vector<State> states;
		std::vector<Animation> animations;
		std::vector<Chipset> chipsets;
		Terms terms;
		System system;
		std::vector<Switch> switches;
		std::vector<Variable> variables;
		std::vector<CommonEvent> commonevents;
		int32_t version = 0;
		BattleCommands battlecommands;
		std::vector<Class> classes;
		std::vector<BattlerAnimation> battleranimations;
	};

	inline bool operator==(const Database& l, const Database& r) {
		return l.actors == r.actors
		&& l.skills == r.skills
		&& l.items == r.items
		&& l.enemies == r.enemies
		&& l.troops == r.troops
		&& l.terrains == r.terrains
		&& l.attributes == r.attributes
		&& l.states == r.states
		&& l.animations == r.animations
		&& l.chipsets == r.chipsets
		&& l.terms == r.terms
		&& l.system == r.system
		&& l.switches == r.switches
		&& l.variables == r.variables
		&& l.commonevents == r.commonevents
		&& l.version == r.version
		&& l.battlecommands == r.battlecommands
		&& l.classes == r.classes
		&& l.battleranimations == r.battleranimations;
	}

	inline bool operator!=(const Database& l, const Database& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Database& obj);

	template <> struct ReflectStruct<Database> {
		using type_t = Database;
		static constexpr const auto& name = "Database";
	};
	// rpg::Actor
	template <> struct ReflectMember<Database,std::vector<Actor>,&Database::actors> {
		using struct_t = Database;
		using type_t = std::vector<Actor>;
		static constexpr const auto& name = "actors";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Skill
	template <> struct ReflectMember<Database,std::vector<Skill>,&Database::skills> {
		using struct_t = Database;
		using type_t = std::vector<Skill>;
		static constexpr const auto& name = "skills";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Item
	template <> struct ReflectMember<Database,std::vector<Item>,&Database::items> {
		using struct_t = Database;
		using type_t = std::vector<Item>;
		static constexpr const auto& name = "items";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Enemy
	template <> struct ReflectMember<Database,std::vector<Enemy>,&Database::enemies> {
		using struct_t = Database;
		using type_t = std::vector<Enemy>;
		static constexpr const auto& name = "enemies";
		static constexpr const int id = 0x0E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Troop
	template <> struct ReflectMember<Database,std::vector<Troop>,&Database::troops> {
		using struct_t = Database;
		using type_t = std::vector<Troop>;
		static constexpr const auto& name = "troops";
		static constexpr const int id = 0x0F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Terrain
	template <> struct ReflectMember<Database,std::vector<Terrain>,&Database::terrains> {
		using struct_t = Database;
		using type_t = std::vector<Terrain>;
		static constexpr const auto& name = "terrains";
		static constexpr const int id = 0x10;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Attribute
	template <> struct ReflectMember<Database,std::vector<Attribute>,&Database::attributes> {
		using struct_t = Database;
		using type_t = std::vector<Attribute>;
		static constexpr const auto& name = "attributes";
		static constexpr const int id = 0x11;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::State
	template <> struct ReflectMember<Database,std::vector<State>,&Database::states> {
		using struct_t = Database;
		using type_t = std::vector<State>;
		static constexpr const auto& name = "states";
		static constexpr const int id = 0x12;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Animation
	template <> struct ReflectMember<Database,std::vector<Animation>,&Database::animations> {
		using struct_t = Database;
		using type_t = std::vector<Animation>;
		static constexpr const auto& name = "animations";
		static constexpr const int id = 0x13;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Chipset
	template <> struct ReflectMember<Database,std::vector<Chipset>,&Database::chipsets> {
		using struct_t = Database;
		using type_t = std::vector<Chipset>;
		static constexpr const auto& name = "chipsets";
		static constexpr const int id = 0x14;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Terms
	template <> struct ReflectMember<Database,Terms,&Database::terms> {
		using struct_t = Database;
		using type_t = Terms;
		static constexpr const auto& name = "terms";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::System
	template <> struct ReflectMember<Database,System,&Database::system> {
		using struct_t = Database;
		using type_t = System;
		static constexpr const auto& name = "system";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Switchs
	template <> struct ReflectMember<Database,std::vector<Switch>,&Database::switches> {
		using struct_t = Database;
		using type_t = std::vector<Switch>;
		static constexpr const auto& name = "switches";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Variables
	template <> struct ReflectMember<Database,std::vector<Variable>,&Database::variables> {
		using struct_t = Database;
		using type_t = std::vector<Variable>;
		static constexpr const auto& name = "variables";
		static constexpr const int id = 0x18;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::CommonEvent
	template <> struct ReflectMember<Database,std::vector<CommonEvent>,&Database::commonevents> {
		using struct_t = Database;
		using type_t = std::vector<CommonEvent>;
		static constexpr const auto& name = "commonevents";
		static constexpr const int id = 0x19;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Indicates version of database. When 1 the database was converted to RPG Maker 2000 v1.61
	template <> struct ReflectMember<Database,int32_t,&Database::version> {
		using struct_t = Database;
		using type_t = int32_t;
		static constexpr const auto& name = "version";
		static constexpr const int id = 0x1A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// rpg::BattleCommand - RPG2003
	template <> struct ReflectMember<Database,BattleCommands,&Database::battlecommands> {
		using struct_t = Database;
		using type_t = BattleCommands;
		static constexpr const auto& name = "battlecommands";
		static constexpr const int id = 0x1D;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Class - RPG2003
	template <> struct ReflectMember<Database,std::vector<Class>,&Database::classes> {
		using struct_t = Database;
		using type_t = std::vector<Class>;
		static constexpr const auto& name = "classes";
		static constexpr const int id = 0x1E;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::BattlerAnimation - RPG2003
	template <> struct ReflectMember<Database,std::vector<BattlerAnimation>,&Database::battleranimations> {
		using struct_t = Database;
		using type_t = std::vector<BattlerAnimation>;
		static constexpr const auto& name = "battleranimations";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,Database>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.actors, LCF_REFL_S(Database)(), LCF_REFL_M(Database, actors)());
		for (auto&& e: s.actors) {
			ForEachMember(e, v);
		}
		v(s, s.skills, LCF_REFL_S(Database)(), LCF_REFL_M(Database, skills)());
		for (auto&& e: s.skills) {
			ForEachMember(e, v);
		}
		v(s, s.items, LCF_REFL_S(Database)(), LCF_REFL_M(Database, items)());
		for (auto&& e: s.items) {
			ForEachMember(e, v);
		}
		v(s, s.enemies, LCF_REFL_S(Database)(), LCF_REFL_M(Database, enemies)());
		for (auto&& e: s.enemies) {
			ForEachMember(e, v);
		}
		v(s, s.troops, LCF_REFL_S(Database)(), LCF_REFL_M(Database, troops)());
		for (auto&& e: s.troops) {
			ForEachMember(e, v);
		}
		v(s, s.terrains, LCF_REFL_S(Database)(), LCF_REFL_M(Database, terrains)());
		for (auto&& e: s.terrains) {
			ForEachMember(e, v);
		}
		v(s, s.attributes, LCF_REFL_S(Database)(), LCF_REFL_M(Database, attributes)());
		for (auto&& e: s.attributes) {
			ForEachMember(e, v);
		}
		v(s, s.states, LCF_REFL_S(Database)(), LCF_REFL_M(Database, states)());
		for (auto&& e: s.states) {
			ForEachMember(e, v);
		}
		v(s, s.animations, LCF_REFL_S(Database)(), LCF_REFL_M(Database, animations)());
		for (auto&& e: s.animations) {
			ForEachMember(e, v);
		}
		v(s, s.chipsets, LCF_REFL_S(Database)(), LCF_REFL_M(Database, chipsets)());
		for (auto&& e: s.chipsets) {
			ForEachMember(e, v);
		}
		v(s, s.terms, LCF_REFL_S(Database)(), LCF_REFL_M(Database, terms)());
		ForEachMember(s.terms, v);
		v(s, s.system, LCF_REFL_S(Database)(), LCF_REFL_M(Database, system)());
		ForEachMember(s.system, v);
		v(s, s.switches, LCF_REFL_S(Database)(), LCF_REFL_M(Database, switches)());
		for (auto&& e: s.switches) {
			ForEachMember(e, v);
		}
		v(s, s.variables, LCF_REFL_S(Database)(), LCF_REFL_M(Database, variables)());
		for (auto&& e: s.variables) {
			ForEachMember(e, v);
		}
		v(s, s.commonevents, LCF_REFL_S(Database)(), LCF_REFL_M(Database, commonevents)());
		for (auto&& e: s.commonevents) {
			ForEachMember(e, v);
		}
		v(s, s.version, LCF_REFL_S(Database)(), LCF_REFL_M(Database, version)());
		v(s, s.battlecommands, LCF_REFL_S(Database)(), LCF_REFL_M(Database, battlecommands)());
		ForEachMember(s.battlecommands, v);
		v(s, s.classes, LCF_REFL_S(Database)(), LCF_REFL_M(Database, classes)());
		for (auto&& e: s.classes) {
			ForEachMember(e, v);
		}
		v(s, s.battleranimations, LCF_REFL_S(Database)(), LCF_REFL_M(Database, battleranimations)());
		for (auto&& e: s.battleranimations) {
			ForEachMember(e, v);
		}
	}

} // namespace rpg
} // namespace lcf

#endif
