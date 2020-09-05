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

#ifndef LCF_RPG_STATE_H
#define LCF_RPG_STATE_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::State class.
 */
namespace lcf {
namespace rpg {
	class State {
	public:
		// The ID of the special death state
		static constexpr int kDeathID = 1;

		enum Persistence {
			Persistence_ends = 0,
			Persistence_persists = 1
		};
		static constexpr auto kPersistenceTags = lcf::makeEnumTags<Persistence>(
			"ends",
			"persists"
		);
		enum Restriction {
			Restriction_normal = 0,
			Restriction_do_nothing = 1,
			Restriction_attack_enemy = 2,
			Restriction_attack_ally = 3
		};
		static constexpr auto kRestrictionTags = lcf::makeEnumTags<Restriction>(
			"normal",
			"do_nothing",
			"attack_enemy",
			"attack_ally"
		);
		enum AffectType {
			AffectType_half = 0,
			AffectType_double = 1,
			AffectType_nothing = 2
		};
		static constexpr auto kAffectTypeTags = lcf::makeEnumTags<AffectType>(
			"half",
			"double",
			"nothing"
		);
		enum ChangeType {
			ChangeType_lose = 0,
			ChangeType_gain = 1,
			ChangeType_nothing = 2
		};
		static constexpr auto kChangeTypeTags = lcf::makeEnumTags<ChangeType>(
			"lose",
			"gain",
			"nothing"
		);

		int ID = 0;
		DBString name;
		int32_t type = 0;
		int32_t color = 6;
		int32_t priority = 50;
		int32_t restriction = 0;
		int32_t a_rate = 100;
		int32_t b_rate = 80;
		int32_t c_rate = 60;
		int32_t d_rate = 30;
		int32_t e_rate = 0;
		int32_t hold_turn = 0;
		int32_t auto_release_prob = 0;
		int32_t release_by_damage = 0;
		int32_t affect_type = 0;
		bool affect_attack = false;
		bool affect_defense = false;
		bool affect_spirit = false;
		bool affect_agility = false;
		int32_t reduce_hit_ratio = 100;
		bool avoid_attacks = false;
		bool reflect_magic = false;
		bool cursed = false;
		int32_t battler_animation_id = 100;
		bool restrict_skill = false;
		int32_t restrict_skill_level = 0;
		bool restrict_magic = false;
		int32_t restrict_magic_level = 0;
		int32_t hp_change_type = 0;
		int32_t sp_change_type = 0;
		DBString message_actor;
		DBString message_enemy;
		DBString message_already;
		DBString message_affected;
		DBString message_recovery;
		int32_t hp_change_max = 0;
		int32_t hp_change_val = 0;
		int32_t hp_change_map_steps = 0;
		int32_t hp_change_map_val = 0;
		int32_t sp_change_max = 0;
		int32_t sp_change_val = 0;
		int32_t sp_change_map_steps = 0;
		int32_t sp_change_map_val = 0;
	};
	inline std::ostream& operator<<(std::ostream& os, State::Persistence code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, State::Restriction code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, State::AffectType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, State::ChangeType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const State& l, const State& r) {
		return l.name == r.name
		&& l.type == r.type
		&& l.color == r.color
		&& l.priority == r.priority
		&& l.restriction == r.restriction
		&& l.a_rate == r.a_rate
		&& l.b_rate == r.b_rate
		&& l.c_rate == r.c_rate
		&& l.d_rate == r.d_rate
		&& l.e_rate == r.e_rate
		&& l.hold_turn == r.hold_turn
		&& l.auto_release_prob == r.auto_release_prob
		&& l.release_by_damage == r.release_by_damage
		&& l.affect_type == r.affect_type
		&& l.affect_attack == r.affect_attack
		&& l.affect_defense == r.affect_defense
		&& l.affect_spirit == r.affect_spirit
		&& l.affect_agility == r.affect_agility
		&& l.reduce_hit_ratio == r.reduce_hit_ratio
		&& l.avoid_attacks == r.avoid_attacks
		&& l.reflect_magic == r.reflect_magic
		&& l.cursed == r.cursed
		&& l.battler_animation_id == r.battler_animation_id
		&& l.restrict_skill == r.restrict_skill
		&& l.restrict_skill_level == r.restrict_skill_level
		&& l.restrict_magic == r.restrict_magic
		&& l.restrict_magic_level == r.restrict_magic_level
		&& l.hp_change_type == r.hp_change_type
		&& l.sp_change_type == r.sp_change_type
		&& l.message_actor == r.message_actor
		&& l.message_enemy == r.message_enemy
		&& l.message_already == r.message_already
		&& l.message_affected == r.message_affected
		&& l.message_recovery == r.message_recovery
		&& l.hp_change_max == r.hp_change_max
		&& l.hp_change_val == r.hp_change_val
		&& l.hp_change_map_steps == r.hp_change_map_steps
		&& l.hp_change_map_val == r.hp_change_map_val
		&& l.sp_change_max == r.sp_change_max
		&& l.sp_change_val == r.sp_change_val
		&& l.sp_change_map_steps == r.sp_change_map_steps
		&& l.sp_change_map_val == r.sp_change_map_val;
	}

	inline bool operator!=(const State& l, const State& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const State& obj);

	template <> struct ReflectStruct<State> {
		using type_t = State;
		static constexpr const auto& = "State";
	};
	// String
	template <> struct ReflectMember<State,DBString,&State::name> {
		using struct_t = State;
		using type_t = DBString;
		static constexpr const auto& name[] = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::type> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "type";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::color> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "color";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::priority> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "priority";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::restriction> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "restriction";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::a_rate> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "a_rate";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::b_rate> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "b_rate";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::c_rate> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "c_rate";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::d_rate> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "d_rate";
		static constexpr const int id = 0x0E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::e_rate> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "e_rate";
		static constexpr const int id = 0x0F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::hold_turn> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "hold_turn";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::auto_release_prob> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "auto_release_prob";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::release_by_damage> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "release_by_damage";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<State,int32_t,&State::affect_type> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "affect_type";
		static constexpr const int id = 0x1E;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<State,bool,&State::affect_attack> {
		using struct_t = State;
		using type_t = bool;
		static constexpr const auto& name[] = "affect_attack";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<State,bool,&State::affect_defense> {
		using struct_t = State;
		using type_t = bool;
		static constexpr const auto& name[] = "affect_defense";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<State,bool,&State::affect_spirit> {
		using struct_t = State;
		using type_t = bool;
		static constexpr const auto& name[] = "affect_spirit";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<State,bool,&State::affect_agility> {
		using struct_t = State;
		using type_t = bool;
		static constexpr const auto& name[] = "affect_agility";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::reduce_hit_ratio> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "reduce_hit_ratio";
		static constexpr const int id = 0x23;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag - RPG2003
	template <> struct ReflectMember<State,bool,&State::avoid_attacks> {
		using struct_t = State;
		using type_t = bool;
		static constexpr const auto& name[] = "avoid_attacks";
		static constexpr const int id = 0x24;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Flag - RPG2003
	template <> struct ReflectMember<State,bool,&State::reflect_magic> {
		using struct_t = State;
		using type_t = bool;
		static constexpr const auto& name[] = "reflect_magic";
		static constexpr const int id = 0x25;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Flag - RPG2003
	template <> struct ReflectMember<State,bool,&State::cursed> {
		using struct_t = State;
		using type_t = bool;
		static constexpr const auto& name[] = "cursed";
		static constexpr const int id = 0x26;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<State,int32_t,&State::battler_animation_id> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "battler_animation_id";
		static constexpr const int id = 0x27;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<State,bool,&State::restrict_skill> {
		using struct_t = State;
		using type_t = bool;
		static constexpr const auto& name[] = "restrict_skill";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::restrict_skill_level> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "restrict_skill_level";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<State,bool,&State::restrict_magic> {
		using struct_t = State;
		using type_t = bool;
		static constexpr const auto& name[] = "restrict_magic";
		static constexpr const int id = 0x2B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::restrict_magic_level> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "restrict_magic_level";
		static constexpr const int id = 0x2C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::hp_change_type> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "hp_change_type";
		static constexpr const int id = 0x2D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::sp_change_type> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "sp_change_type";
		static constexpr const int id = 0x2E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<State,DBString,&State::message_actor> {
		using struct_t = State;
		using type_t = DBString;
		static constexpr const auto& name[] = "message_actor";
		static constexpr const int id = 0x33;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<State,DBString,&State::message_enemy> {
		using struct_t = State;
		using type_t = DBString;
		static constexpr const auto& name[] = "message_enemy";
		static constexpr const int id = 0x34;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<State,DBString,&State::message_already> {
		using struct_t = State;
		using type_t = DBString;
		static constexpr const auto& name[] = "message_already";
		static constexpr const int id = 0x35;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<State,DBString,&State::message_affected> {
		using struct_t = State;
		using type_t = DBString;
		static constexpr const auto& name[] = "message_affected";
		static constexpr const int id = 0x36;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<State,DBString,&State::message_recovery> {
		using struct_t = State;
		using type_t = DBString;
		static constexpr const auto& name[] = "message_recovery";
		static constexpr const int id = 0x37;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::hp_change_max> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "hp_change_max";
		static constexpr const int id = 0x3D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::hp_change_val> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "hp_change_val";
		static constexpr const int id = 0x3E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::hp_change_map_steps> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "hp_change_map_steps";
		static constexpr const int id = 0x3F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::hp_change_map_val> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "hp_change_map_val";
		static constexpr const int id = 0x40;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::sp_change_max> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "sp_change_max";
		static constexpr const int id = 0x41;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::sp_change_val> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "sp_change_val";
		static constexpr const int id = 0x42;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::sp_change_map_steps> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "sp_change_map_steps";
		static constexpr const int id = 0x43;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<State,int32_t,&State::sp_change_map_val> {
		using struct_t = State;
		using type_t = int32_t;
		static constexpr const auto& name[] = "sp_change_map_val";
		static constexpr const int id = 0x44;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
