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

#ifndef LCF_RPG_TROOPPAGECONDITION_H
#define LCF_RPG_TROOPPAGECONDITION_H

#include <lcf/rpg/reflect.h>

// Headers
#include <array>
#include <stdint.h>
#include <ostream>
#include <type_traits>

/**
 * rpg::TroopPageCondition class.
 */
namespace lcf {
namespace rpg {
	class TroopPageCondition {
	public:
		struct Flags {
			union {
				struct {
					bool switch_a;
					bool switch_b;
					bool variable;
					bool turn;
					bool fatigue;
					bool enemy_hp;
					bool actor_hp;
					bool turn_enemy;
					bool turn_actor;
					bool command_actor;
				};
				std::array<bool, 10> flags;
			};
			//TODO: Should try to switch to member initializers when we upgrade to VS2017.
			Flags() noexcept: switch_a(false), switch_b(false), variable(false), turn(false), fatigue(false), enemy_hp(false), actor_hp(false), turn_enemy(false), turn_actor(false), command_actor(false)
			{}
		} flags;
		int32_t switch_a_id = 1;
		int32_t switch_b_id = 1;
		int32_t variable_id = 1;
		int32_t variable_value = 0;
		int32_t turn_a = 0;
		int32_t turn_b = 0;
		int32_t fatigue_min = 0;
		int32_t fatigue_max = 100;
		int32_t enemy_id = 0;
		int32_t enemy_hp_min = 0;
		int32_t enemy_hp_max = 100;
		int32_t actor_id = 1;
		int32_t actor_hp_min = 0;
		int32_t actor_hp_max = 100;
		int32_t turn_enemy_id = 0;
		int32_t turn_enemy_a = 0;
		int32_t turn_enemy_b = 0;
		int32_t turn_actor_id = 1;
		int32_t turn_actor_a = 0;
		int32_t turn_actor_b = 0;
		int32_t command_actor_id = 1;
		int32_t command_id = 1;
	};

	inline bool operator==(const TroopPageCondition::Flags& l, const TroopPageCondition::Flags& r) {
		return l.flags == r.flags;
	}

	inline bool operator!=(const TroopPageCondition::Flags& l, const TroopPageCondition::Flags& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const TroopPageCondition::Flags& obj);

	inline bool operator==(const TroopPageCondition& l, const TroopPageCondition& r) {
		return l.flags == r.flags
		&& l.switch_a_id == r.switch_a_id
		&& l.switch_b_id == r.switch_b_id
		&& l.variable_id == r.variable_id
		&& l.variable_value == r.variable_value
		&& l.turn_a == r.turn_a
		&& l.turn_b == r.turn_b
		&& l.fatigue_min == r.fatigue_min
		&& l.fatigue_max == r.fatigue_max
		&& l.enemy_id == r.enemy_id
		&& l.enemy_hp_min == r.enemy_hp_min
		&& l.enemy_hp_max == r.enemy_hp_max
		&& l.actor_id == r.actor_id
		&& l.actor_hp_min == r.actor_hp_min
		&& l.actor_hp_max == r.actor_hp_max
		&& l.turn_enemy_id == r.turn_enemy_id
		&& l.turn_enemy_a == r.turn_enemy_a
		&& l.turn_enemy_b == r.turn_enemy_b
		&& l.turn_actor_id == r.turn_actor_id
		&& l.turn_actor_a == r.turn_actor_a
		&& l.turn_actor_b == r.turn_actor_b
		&& l.command_actor_id == r.command_actor_id
		&& l.command_id == r.command_id;
	}

	inline bool operator!=(const TroopPageCondition& l, const TroopPageCondition& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const TroopPageCondition& obj);

	template <> struct ReflectStruct<TroopPageCondition> {
		using type_t = TroopPageCondition;
		static constexpr const auto& = "TroopPageCondition";
	};
	// Bitflag - x 2 if RPG2003
	template <> struct ReflectMember<TroopPageCondition,TroopPageCondition::Flags,&TroopPageCondition::flags> {
		using struct_t = TroopPageCondition;
		using type_t = TroopPageCondition::Flags;
		static constexpr const auto& name[] = "flags";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::switch_a_id> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "switch_a_id";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::switch_b_id> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "switch_b_id";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::variable_id> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "variable_id";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::variable_value> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "variable_value";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::turn_a> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "turn_a";
		static constexpr const int id = 0x06;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::turn_b> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "turn_b";
		static constexpr const int id = 0x07;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::fatigue_min> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "fatigue_min";
		static constexpr const int id = 0x08;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::fatigue_max> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "fatigue_max";
		static constexpr const int id = 0x09;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::enemy_id> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "enemy_id";
		static constexpr const int id = 0x0A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::enemy_hp_min> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "enemy_hp_min";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::enemy_hp_max> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "enemy_hp_max";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::actor_id> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "actor_id";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::actor_hp_min> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "actor_hp_min";
		static constexpr const int id = 0x0E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::actor_hp_max> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "actor_hp_max";
		static constexpr const int id = 0x0F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::turn_enemy_id> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "turn_enemy_id";
		static constexpr const int id = 0x10;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::turn_enemy_a> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "turn_enemy_a";
		static constexpr const int id = 0x11;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::turn_enemy_b> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "turn_enemy_b";
		static constexpr const int id = 0x12;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::turn_actor_id> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "turn_actor_id";
		static constexpr const int id = 0x13;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::turn_actor_a> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "turn_actor_a";
		static constexpr const int id = 0x14;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::turn_actor_b> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "turn_actor_b";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::command_actor_id> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "command_actor_id";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<TroopPageCondition,int32_t,&TroopPageCondition::command_id> {
		using struct_t = TroopPageCondition;
		using type_t = int32_t;
		static constexpr const auto& name[] = "command_id";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
