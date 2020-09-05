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

#ifndef LCF_RPG_ENEMY_H
#define LCF_RPG_ENEMY_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/dbstring.h"
#include "lcf/rpg/enemyaction.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Enemy class.
 */
namespace lcf {
namespace rpg {
	class Enemy {
	public:
		int ID = 0;
		DBString name;
		DBString battler_name;
		int32_t battler_hue = 0;
		int32_t max_hp = 10;
		int32_t max_sp = 10;
		int32_t attack = 10;
		int32_t defense = 10;
		int32_t spirit = 10;
		int32_t agility = 10;
		bool transparent = false;
		int32_t exp = 0;
		int32_t gold = 0;
		int32_t drop_id = 0;
		int32_t drop_prob = 100;
		bool critical_hit = false;
		int32_t critical_hit_chance = 30;
		bool miss = false;
		bool levitate = false;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<EnemyAction> actions;
	};

	inline bool operator==(const Enemy& l, const Enemy& r) {
		return l.name == r.name
		&& l.battler_name == r.battler_name
		&& l.battler_hue == r.battler_hue
		&& l.max_hp == r.max_hp
		&& l.max_sp == r.max_sp
		&& l.attack == r.attack
		&& l.defense == r.defense
		&& l.spirit == r.spirit
		&& l.agility == r.agility
		&& l.transparent == r.transparent
		&& l.exp == r.exp
		&& l.gold == r.gold
		&& l.drop_id == r.drop_id
		&& l.drop_prob == r.drop_prob
		&& l.critical_hit == r.critical_hit
		&& l.critical_hit_chance == r.critical_hit_chance
		&& l.miss == r.miss
		&& l.levitate == r.levitate
		&& l.state_ranks == r.state_ranks
		&& l.attribute_ranks == r.attribute_ranks
		&& l.actions == r.actions;
	}

	inline bool operator!=(const Enemy& l, const Enemy& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Enemy& obj);

	template <> struct ReflectStruct<Enemy> {
		using type_t = Enemy;
		static constexpr const auto& name = "Enemy";
	};
	// String
	template <> struct ReflectMember<Enemy,DBString,&Enemy::name> {
		using struct_t = Enemy;
		using type_t = DBString;
		static constexpr const auto& name = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<Enemy,DBString,&Enemy::battler_name> {
		using struct_t = Enemy;
		using type_t = DBString;
		static constexpr const auto& name = "battler_name";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Enemy,int32_t,&Enemy::battler_hue> {
		using struct_t = Enemy;
		using type_t = int32_t;
		static constexpr const auto& name = "battler_hue";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Enemy,int32_t,&Enemy::max_hp> {
		using struct_t = Enemy;
		using type_t = int32_t;
		static constexpr const auto& name = "max_hp";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Enemy,int32_t,&Enemy::max_sp> {
		using struct_t = Enemy;
		using type_t = int32_t;
		static constexpr const auto& name = "max_sp";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Enemy,int32_t,&Enemy::attack> {
		using struct_t = Enemy;
		using type_t = int32_t;
		static constexpr const auto& name = "attack";
		static constexpr const int id = 0x06;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Enemy,int32_t,&Enemy::defense> {
		using struct_t = Enemy;
		using type_t = int32_t;
		static constexpr const auto& name = "defense";
		static constexpr const int id = 0x07;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Enemy,int32_t,&Enemy::spirit> {
		using struct_t = Enemy;
		using type_t = int32_t;
		static constexpr const auto& name = "spirit";
		static constexpr const int id = 0x08;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Enemy,int32_t,&Enemy::agility> {
		using struct_t = Enemy;
		using type_t = int32_t;
		static constexpr const auto& name = "agility";
		static constexpr const int id = 0x09;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Enemy,bool,&Enemy::transparent> {
		using struct_t = Enemy;
		using type_t = bool;
		static constexpr const auto& name = "transparent";
		static constexpr const int id = 0x0A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Enemy,int32_t,&Enemy::exp> {
		using struct_t = Enemy;
		using type_t = int32_t;
		static constexpr const auto& name = "exp";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Enemy,int32_t,&Enemy::gold> {
		using struct_t = Enemy;
		using type_t = int32_t;
		static constexpr const auto& name = "gold";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Enemy,int32_t,&Enemy::drop_id> {
		using struct_t = Enemy;
		using type_t = int32_t;
		static constexpr const auto& name = "drop_id";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Enemy,int32_t,&Enemy::drop_prob> {
		using struct_t = Enemy;
		using type_t = int32_t;
		static constexpr const auto& name = "drop_prob";
		static constexpr const int id = 0x0E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Enemy,bool,&Enemy::critical_hit> {
		using struct_t = Enemy;
		using type_t = bool;
		static constexpr const auto& name = "critical_hit";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Enemy,int32_t,&Enemy::critical_hit_chance> {
		using struct_t = Enemy;
		using type_t = int32_t;
		static constexpr const auto& name = "critical_hit_chance";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Enemy,bool,&Enemy::miss> {
		using struct_t = Enemy;
		using type_t = bool;
		static constexpr const auto& name = "miss";
		static constexpr const int id = 0x1A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Enemy,bool,&Enemy::levitate> {
		using struct_t = Enemy;
		using type_t = bool;
		static constexpr const auto& name = "levitate";
		static constexpr const int id = 0x1C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - Short
	template <> struct ReflectMember<Enemy,std::vector<uint8_t>,&Enemy::state_ranks> {
		using struct_t = Enemy;
		using type_t = std::vector<uint8_t>;
		static constexpr const auto& name = "state_ranks";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - Short
	template <> struct ReflectMember<Enemy,std::vector<uint8_t>,&Enemy::attribute_ranks> {
		using struct_t = Enemy;
		using type_t = std::vector<uint8_t>;
		static constexpr const auto& name = "attribute_ranks";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - rpg::EnemyAction
	template <> struct ReflectMember<Enemy,std::vector<EnemyAction>,&Enemy::actions> {
		using struct_t = Enemy;
		using type_t = std::vector<EnemyAction>;
		static constexpr const auto& name = "actions";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,Enemy>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.name, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, name)());
		v(s, s.battler_name, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, battler_name)());
		v(s, s.battler_hue, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, battler_hue)());
		v(s, s.max_hp, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, max_hp)());
		v(s, s.max_sp, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, max_sp)());
		v(s, s.attack, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, attack)());
		v(s, s.defense, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, defense)());
		v(s, s.spirit, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, spirit)());
		v(s, s.agility, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, agility)());
		v(s, s.transparent, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, transparent)());
		v(s, s.exp, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, exp)());
		v(s, s.gold, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, gold)());
		v(s, s.drop_id, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, drop_id)());
		v(s, s.drop_prob, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, drop_prob)());
		v(s, s.critical_hit, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, critical_hit)());
		v(s, s.critical_hit_chance, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, critical_hit_chance)());
		v(s, s.miss, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, miss)());
		v(s, s.levitate, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, levitate)());
		v(s, s.state_ranks, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, state_ranks)());
		v(s, s.attribute_ranks, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, attribute_ranks)());
		v(s, s.actions, LCF_REFL_S(Enemy)(), LCF_REFL_M(Enemy, actions)());
		for (auto&& e: s.actions) {
			ForEachMember(e, v);
		}
	}

} // namespace rpg
} // namespace lcf

#endif
