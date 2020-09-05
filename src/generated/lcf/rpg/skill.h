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

#ifndef LCF_RPG_SKILL_H
#define LCF_RPG_SKILL_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/dbbitarray.h"
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include "lcf/rpg/battleranimationdata.h"
#include "lcf/rpg/sound.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Skill class.
 */
namespace lcf {
namespace rpg {
	class Skill {
	public:
		enum Type {
			Type_normal = 0,
			Type_teleport = 1,
			Type_escape = 2,
			Type_switch = 3,
			Type_subskill = 4
		};
		static constexpr auto kTypeTags = lcf::makeEnumTags<Type>(
			"normal",
			"teleport",
			"escape",
			"switch",
			"subskill"
		);
		enum SpType {
			SpType_cost = 0,
			SpType_percent = 1
		};
		static constexpr auto kSpTypeTags = lcf::makeEnumTags<SpType>(
			"cost",
			"percent"
		);
		enum Scope {
			Scope_enemy = 0,
			Scope_enemies = 1,
			Scope_self = 2,
			Scope_ally = 3,
			Scope_party = 4
		};
		static constexpr auto kScopeTags = lcf::makeEnumTags<Scope>(
			"enemy",
			"enemies",
			"self",
			"ally",
			"party"
		);

		int ID = 0;
		DBString name;
		DBString description;
		DBString using_message1;
		DBString using_message2;
		int32_t failure_message = 0;
		int32_t type = 0;
		int32_t sp_type = 0;
		int32_t sp_percent = 0;
		int32_t sp_cost = 0;
		int32_t scope = 0;
		int32_t switch_id = 1;
		int32_t animation_id = 1;
		Sound sound_effect;
		bool occasion_field = true;
		bool occasion_battle = false;
		bool reverse_state_effect = false;
		int32_t physical_rate = 0;
		int32_t magical_rate = 3;
		int32_t variance = 4;
		int32_t power = 0;
		int32_t hit = 100;
		bool affect_hp = false;
		bool affect_sp = false;
		bool affect_attack = false;
		bool affect_defense = false;
		bool affect_spirit = false;
		bool affect_agility = false;
		bool absorb_damage = false;
		bool ignore_defense = false;
		DBBitArray state_effects;
		DBBitArray attribute_effects;
		bool affect_attr_defence = false;
		int32_t battler_animation = -1;
		std::vector<BattlerAnimationData> battler_animation_data;
	};
	inline std::ostream& operator<<(std::ostream& os, Skill::Type code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, Skill::SpType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, Skill::Scope code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const Skill& l, const Skill& r) {
		return l.name == r.name
		&& l.description == r.description
		&& l.using_message1 == r.using_message1
		&& l.using_message2 == r.using_message2
		&& l.failure_message == r.failure_message
		&& l.type == r.type
		&& l.sp_type == r.sp_type
		&& l.sp_percent == r.sp_percent
		&& l.sp_cost == r.sp_cost
		&& l.scope == r.scope
		&& l.switch_id == r.switch_id
		&& l.animation_id == r.animation_id
		&& l.sound_effect == r.sound_effect
		&& l.occasion_field == r.occasion_field
		&& l.occasion_battle == r.occasion_battle
		&& l.reverse_state_effect == r.reverse_state_effect
		&& l.physical_rate == r.physical_rate
		&& l.magical_rate == r.magical_rate
		&& l.variance == r.variance
		&& l.power == r.power
		&& l.hit == r.hit
		&& l.affect_hp == r.affect_hp
		&& l.affect_sp == r.affect_sp
		&& l.affect_attack == r.affect_attack
		&& l.affect_defense == r.affect_defense
		&& l.affect_spirit == r.affect_spirit
		&& l.affect_agility == r.affect_agility
		&& l.absorb_damage == r.absorb_damage
		&& l.ignore_defense == r.ignore_defense
		&& l.state_effects == r.state_effects
		&& l.attribute_effects == r.attribute_effects
		&& l.affect_attr_defence == r.affect_attr_defence
		&& l.battler_animation == r.battler_animation
		&& l.battler_animation_data == r.battler_animation_data;
	}

	inline bool operator!=(const Skill& l, const Skill& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Skill& obj);

	template <> struct ReflectStruct<Skill> {
		using type_t = Skill;
		static constexpr const auto& name = "Skill";
	};
	// String
	template <> struct ReflectMember<Skill,DBString,&Skill::name> {
		using struct_t = Skill;
		using type_t = DBString;
		static constexpr const auto& name = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<Skill,DBString,&Skill::description> {
		using struct_t = Skill;
		using type_t = DBString;
		static constexpr const auto& name = "description";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String - RPG2000
	template <> struct ReflectMember<Skill,DBString,&Skill::using_message1> {
		using struct_t = Skill;
		using type_t = DBString;
		static constexpr const auto& name = "using_message1";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String - RPG2000
	template <> struct ReflectMember<Skill,DBString,&Skill::using_message2> {
		using struct_t = Skill;
		using type_t = DBString;
		static constexpr const auto& name = "using_message2";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2000
	template <> struct ReflectMember<Skill,int32_t,&Skill::failure_message> {
		using struct_t = Skill;
		using type_t = int32_t;
		static constexpr const auto& name = "failure_message";
		static constexpr const int id = 0x07;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Skill,int32_t,&Skill::type> {
		using struct_t = Skill;
		using type_t = int32_t;
		static constexpr const auto& name = "type";
		static constexpr const int id = 0x08;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Skill,int32_t,&Skill::sp_type> {
		using struct_t = Skill;
		using type_t = int32_t;
		static constexpr const auto& name = "sp_type";
		static constexpr const int id = 0x09;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Skill,int32_t,&Skill::sp_percent> {
		using struct_t = Skill;
		using type_t = int32_t;
		static constexpr const auto& name = "sp_percent";
		static constexpr const int id = 0x0A;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Skill,int32_t,&Skill::sp_cost> {
		using struct_t = Skill;
		using type_t = int32_t;
		static constexpr const auto& name = "sp_cost";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Skill,int32_t,&Skill::scope> {
		using struct_t = Skill;
		using type_t = int32_t;
		static constexpr const auto& name = "scope";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<Skill,int32_t,&Skill::switch_id> {
		using struct_t = Skill;
		using type_t = int32_t;
		static constexpr const auto& name = "switch_id";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Skill,int32_t,&Skill::animation_id> {
		using struct_t = Skill;
		using type_t = int32_t;
		static constexpr const auto& name = "animation_id";
		static constexpr const int id = 0x0E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// rpg::Sound
	template <> struct ReflectMember<Skill,Sound,&Skill::sound_effect> {
		using struct_t = Skill;
		using type_t = Sound;
		static constexpr const auto& name = "sound_effect";
		static constexpr const int id = 0x10;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Flag
	template <> struct ReflectMember<Skill,bool,&Skill::occasion_field> {
		using struct_t = Skill;
		using type_t = bool;
		static constexpr const auto& name = "occasion_field";
		static constexpr const int id = 0x12;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Skill,bool,&Skill::occasion_battle> {
		using struct_t = Skill;
		using type_t = bool;
		static constexpr const auto& name = "occasion_battle";
		static constexpr const int id = 0x13;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag - RPG2003
	template <> struct ReflectMember<Skill,bool,&Skill::reverse_state_effect> {
		using struct_t = Skill;
		using type_t = bool;
		static constexpr const auto& name = "reverse_state_effect";
		static constexpr const int id = 0x14;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Skill,int32_t,&Skill::physical_rate> {
		using struct_t = Skill;
		using type_t = int32_t;
		static constexpr const auto& name = "physical_rate";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Skill,int32_t,&Skill::magical_rate> {
		using struct_t = Skill;
		using type_t = int32_t;
		static constexpr const auto& name = "magical_rate";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Skill,int32_t,&Skill::variance> {
		using struct_t = Skill;
		using type_t = int32_t;
		static constexpr const auto& name = "variance";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Skill,int32_t,&Skill::power> {
		using struct_t = Skill;
		using type_t = int32_t;
		static constexpr const auto& name = "power";
		static constexpr const int id = 0x18;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Skill,int32_t,&Skill::hit> {
		using struct_t = Skill;
		using type_t = int32_t;
		static constexpr const auto& name = "hit";
		static constexpr const int id = 0x19;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Skill,bool,&Skill::affect_hp> {
		using struct_t = Skill;
		using type_t = bool;
		static constexpr const auto& name = "affect_hp";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Skill,bool,&Skill::affect_sp> {
		using struct_t = Skill;
		using type_t = bool;
		static constexpr const auto& name = "affect_sp";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Skill,bool,&Skill::affect_attack> {
		using struct_t = Skill;
		using type_t = bool;
		static constexpr const auto& name = "affect_attack";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Skill,bool,&Skill::affect_defense> {
		using struct_t = Skill;
		using type_t = bool;
		static constexpr const auto& name = "affect_defense";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Skill,bool,&Skill::affect_spirit> {
		using struct_t = Skill;
		using type_t = bool;
		static constexpr const auto& name = "affect_spirit";
		static constexpr const int id = 0x23;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Skill,bool,&Skill::affect_agility> {
		using struct_t = Skill;
		using type_t = bool;
		static constexpr const auto& name = "affect_agility";
		static constexpr const int id = 0x24;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Skill,bool,&Skill::absorb_damage> {
		using struct_t = Skill;
		using type_t = bool;
		static constexpr const auto& name = "absorb_damage";
		static constexpr const int id = 0x25;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Skill,bool,&Skill::ignore_defense> {
		using struct_t = Skill;
		using type_t = bool;
		static constexpr const auto& name = "ignore_defense";
		static constexpr const int id = 0x26;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - Flag
	template <> struct ReflectMember<Skill,DBBitArray,&Skill::state_effects> {
		using struct_t = Skill;
		using type_t = DBBitArray;
		static constexpr const auto& name = "state_effects";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - Flag
	template <> struct ReflectMember<Skill,DBBitArray,&Skill::attribute_effects> {
		using struct_t = Skill;
		using type_t = DBBitArray;
		static constexpr const auto& name = "attribute_effects";
		static constexpr const int id = 0x2C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Flag
	template <> struct ReflectMember<Skill,bool,&Skill::affect_attr_defence> {
		using struct_t = Skill;
		using type_t = bool;
		static constexpr const auto& name = "affect_attr_defence";
		static constexpr const int id = 0x2D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Skill,int32_t,&Skill::battler_animation> {
		using struct_t = Skill;
		using type_t = int32_t;
		static constexpr const auto& name = "battler_animation";
		static constexpr const int id = 0x31;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// ? - RPG2003
	template <> struct ReflectMember<Skill,std::vector<BattlerAnimationData>,&Skill::battler_animation_data> {
		using struct_t = Skill;
		using type_t = std::vector<BattlerAnimationData>;
		static constexpr const auto& name = "battler_animation_data";
		static constexpr const int id = 0x32;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,Skill>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.name, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, name)());
		v(s, s.description, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, description)());
		v(s, s.using_message1, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, using_message1)());
		v(s, s.using_message2, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, using_message2)());
		v(s, s.failure_message, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, failure_message)());
		v(s, s.type, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, type)());
		v(s, s.sp_type, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, sp_type)());
		v(s, s.sp_percent, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, sp_percent)());
		v(s, s.sp_cost, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, sp_cost)());
		v(s, s.scope, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, scope)());
		v(s, s.switch_id, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, switch_id)());
		v(s, s.animation_id, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, animation_id)());
		v(s, s.sound_effect, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, sound_effect)());
		ForEachMember(s.sound_effect, v);
		v(s, s.occasion_field, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, occasion_field)());
		v(s, s.occasion_battle, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, occasion_battle)());
		v(s, s.reverse_state_effect, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, reverse_state_effect)());
		v(s, s.physical_rate, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, physical_rate)());
		v(s, s.magical_rate, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, magical_rate)());
		v(s, s.variance, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, variance)());
		v(s, s.power, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, power)());
		v(s, s.hit, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, hit)());
		v(s, s.affect_hp, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, affect_hp)());
		v(s, s.affect_sp, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, affect_sp)());
		v(s, s.affect_attack, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, affect_attack)());
		v(s, s.affect_defense, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, affect_defense)());
		v(s, s.affect_spirit, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, affect_spirit)());
		v(s, s.affect_agility, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, affect_agility)());
		v(s, s.absorb_damage, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, absorb_damage)());
		v(s, s.ignore_defense, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, ignore_defense)());
		v(s, s.state_effects, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, state_effects)());
		v(s, s.attribute_effects, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, attribute_effects)());
		v(s, s.affect_attr_defence, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, affect_attr_defence)());
		v(s, s.battler_animation, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, battler_animation)());
		v(s, s.battler_animation_data, LCF_REFL_S(Skill)(), LCF_REFL_M(Skill, battler_animation_data)());
	}

} // namespace rpg
} // namespace lcf

#endif
