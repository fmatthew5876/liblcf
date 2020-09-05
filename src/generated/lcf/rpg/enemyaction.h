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

#ifndef LCF_RPG_ENEMYACTION_H
#define LCF_RPG_ENEMYACTION_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include "lcf/enum_tags.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::EnemyAction class.
 */
namespace lcf {
namespace rpg {
	class EnemyAction {
	public:
		enum Kind {
			Kind_basic = 0,
			Kind_skill = 1,
			Kind_transformation = 2
		};
		static constexpr auto kKindTags = lcf::makeEnumTags<Kind>(
			"basic",
			"skill",
			"transformation"
		);
		enum Basic {
			Basic_attack = 0,
			Basic_dual_attack = 1,
			Basic_defense = 2,
			Basic_observe = 3,
			Basic_charge = 4,
			Basic_autodestruction = 5,
			Basic_escape = 6,
			Basic_nothing = 7
		};
		static constexpr auto kBasicTags = lcf::makeEnumTags<Basic>(
			"attack",
			"dual_attack",
			"defense",
			"observe",
			"charge",
			"autodestruction",
			"escape",
			"nothing"
		);
		enum ConditionType {
			ConditionType_always = 0,
			ConditionType_switch = 1,
			ConditionType_turn = 2,
			ConditionType_actors = 3,
			ConditionType_hp = 4,
			ConditionType_sp = 5,
			ConditionType_party_lvl = 6,
			ConditionType_party_fatigue = 7
		};
		static constexpr auto kConditionTypeTags = lcf::makeEnumTags<ConditionType>(
			"always",
			"switch",
			"turn",
			"actors",
			"hp",
			"sp",
			"party_lvl",
			"party_fatigue"
		);

		int ID = 0;
		int32_t kind = 0;
		int32_t basic = 1;
		int32_t skill_id = 1;
		int32_t enemy_id = 1;
		int32_t condition_type = 0;
		int32_t condition_param1 = 0;
		int32_t condition_param2 = 0;
		int32_t switch_id = 1;
		bool switch_on = false;
		int32_t switch_on_id = 1;
		bool switch_off = false;
		int32_t switch_off_id = 1;
		int32_t rating = 50;
	};
	inline std::ostream& operator<<(std::ostream& os, EnemyAction::Kind code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, EnemyAction::Basic code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, EnemyAction::ConditionType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const EnemyAction& l, const EnemyAction& r) {
		return l.kind == r.kind
		&& l.basic == r.basic
		&& l.skill_id == r.skill_id
		&& l.enemy_id == r.enemy_id
		&& l.condition_type == r.condition_type
		&& l.condition_param1 == r.condition_param1
		&& l.condition_param2 == r.condition_param2
		&& l.switch_id == r.switch_id
		&& l.switch_on == r.switch_on
		&& l.switch_on_id == r.switch_on_id
		&& l.switch_off == r.switch_off
		&& l.switch_off_id == r.switch_off_id
		&& l.rating == r.rating;
	}

	inline bool operator!=(const EnemyAction& l, const EnemyAction& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const EnemyAction& obj);

	template <> struct ReflectStruct<EnemyAction> {
		using type_t = EnemyAction;
		static constexpr const auto& name = "EnemyAction";
	};
	// Integer
	template <> struct ReflectMember<EnemyAction,int32_t,&EnemyAction::kind> {
		using struct_t = EnemyAction;
		using type_t = int32_t;
		static constexpr const auto& name = "kind";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<EnemyAction,int32_t,&EnemyAction::basic> {
		using struct_t = EnemyAction;
		using type_t = int32_t;
		static constexpr const auto& name = "basic";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<EnemyAction,int32_t,&EnemyAction::skill_id> {
		using struct_t = EnemyAction;
		using type_t = int32_t;
		static constexpr const auto& name = "skill_id";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EnemyAction,int32_t,&EnemyAction::enemy_id> {
		using struct_t = EnemyAction;
		using type_t = int32_t;
		static constexpr const auto& name = "enemy_id";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EnemyAction,int32_t,&EnemyAction::condition_type> {
		using struct_t = EnemyAction;
		using type_t = int32_t;
		static constexpr const auto& name = "condition_type";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<EnemyAction,int32_t,&EnemyAction::condition_param1> {
		using struct_t = EnemyAction;
		using type_t = int32_t;
		static constexpr const auto& name = "condition_param1";
		static constexpr const int id = 0x06;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EnemyAction,int32_t,&EnemyAction::condition_param2> {
		using struct_t = EnemyAction;
		using type_t = int32_t;
		static constexpr const auto& name = "condition_param2";
		static constexpr const int id = 0x07;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EnemyAction,int32_t,&EnemyAction::switch_id> {
		using struct_t = EnemyAction;
		using type_t = int32_t;
		static constexpr const auto& name = "switch_id";
		static constexpr const int id = 0x08;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<EnemyAction,bool,&EnemyAction::switch_on> {
		using struct_t = EnemyAction;
		using type_t = bool;
		static constexpr const auto& name = "switch_on";
		static constexpr const int id = 0x09;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EnemyAction,int32_t,&EnemyAction::switch_on_id> {
		using struct_t = EnemyAction;
		using type_t = int32_t;
		static constexpr const auto& name = "switch_on_id";
		static constexpr const int id = 0x0A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<EnemyAction,bool,&EnemyAction::switch_off> {
		using struct_t = EnemyAction;
		using type_t = bool;
		static constexpr const auto& name = "switch_off";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EnemyAction,int32_t,&EnemyAction::switch_off_id> {
		using struct_t = EnemyAction;
		using type_t = int32_t;
		static constexpr const auto& name = "switch_off_id";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<EnemyAction,int32_t,&EnemyAction::rating> {
		using struct_t = EnemyAction;
		using type_t = int32_t;
		static constexpr const auto& name = "rating";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,EnemyAction>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.kind, LCF_REFL_S(EnemyAction)(), LCF_REFL_M(EnemyAction, kind)());
		v(s, s.basic, LCF_REFL_S(EnemyAction)(), LCF_REFL_M(EnemyAction, basic)());
		v(s, s.skill_id, LCF_REFL_S(EnemyAction)(), LCF_REFL_M(EnemyAction, skill_id)());
		v(s, s.enemy_id, LCF_REFL_S(EnemyAction)(), LCF_REFL_M(EnemyAction, enemy_id)());
		v(s, s.condition_type, LCF_REFL_S(EnemyAction)(), LCF_REFL_M(EnemyAction, condition_type)());
		v(s, s.condition_param1, LCF_REFL_S(EnemyAction)(), LCF_REFL_M(EnemyAction, condition_param1)());
		v(s, s.condition_param2, LCF_REFL_S(EnemyAction)(), LCF_REFL_M(EnemyAction, condition_param2)());
		v(s, s.switch_id, LCF_REFL_S(EnemyAction)(), LCF_REFL_M(EnemyAction, switch_id)());
		v(s, s.switch_on, LCF_REFL_S(EnemyAction)(), LCF_REFL_M(EnemyAction, switch_on)());
		v(s, s.switch_on_id, LCF_REFL_S(EnemyAction)(), LCF_REFL_M(EnemyAction, switch_on_id)());
		v(s, s.switch_off, LCF_REFL_S(EnemyAction)(), LCF_REFL_M(EnemyAction, switch_off)());
		v(s, s.switch_off_id, LCF_REFL_S(EnemyAction)(), LCF_REFL_M(EnemyAction, switch_off_id)());
		v(s, s.rating, LCF_REFL_S(EnemyAction)(), LCF_REFL_M(EnemyAction, rating)());
	}

} // namespace rpg
} // namespace lcf

#endif
