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

#ifndef LCF_RPG_ITEM_H
#define LCF_RPG_ITEM_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/dbbitarray.h"
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include "lcf/rpg/itemanimation.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Item class.
 */
namespace lcf {
namespace rpg {
	class Item {
	public:
		enum Type {
			Type_normal = 0,
			Type_weapon = 1,
			Type_shield = 2,
			Type_armor = 3,
			Type_helmet = 4,
			Type_accessory = 5,
			Type_medicine = 6,
			Type_book = 7,
			Type_material = 8,
			Type_special = 9,
			Type_switch = 10
		};
		static constexpr auto kTypeTags = lcf::makeEnumTags<Type>(
			"normal",
			"weapon",
			"shield",
			"armor",
			"helmet",
			"accessory",
			"medicine",
			"book",
			"material",
			"special",
			"switch"
		);
		enum Trajectory {
			Trajectory_straight = 0,
			Trajectory_return = 1
		};
		static constexpr auto kTrajectoryTags = lcf::makeEnumTags<Trajectory>(
			"straight",
			"return"
		);
		enum Target {
			Target_single = 0,
			Target_center = 1,
			Target_simultaneous = 2,
			Target_sequential = 3
		};
		static constexpr auto kTargetTags = lcf::makeEnumTags<Target>(
			"single",
			"center",
			"simultaneous",
			"sequential"
		);

		int ID = 0;
		DBString name;
		DBString description;
		int32_t type = 0;
		int32_t price = 0;
		int32_t uses = 1;
		int32_t atk_points1 = 0;
		int32_t def_points1 = 0;
		int32_t spi_points1 = 0;
		int32_t agi_points1 = 0;
		bool two_handed = false;
		int32_t sp_cost = 0;
		int32_t hit = 90;
		int32_t critical_hit = 0;
		int32_t animation_id = 1;
		bool preemptive = false;
		bool dual_attack = false;
		bool attack_all = false;
		bool ignore_evasion = false;
		bool prevent_critical = false;
		bool raise_evasion = false;
		bool half_sp_cost = false;
		bool no_terrain_damage = false;
		bool cursed = false;
		bool entire_party = false;
		int32_t recover_hp_rate = 0;
		int32_t recover_hp = 0;
		int32_t recover_sp_rate = 0;
		int32_t recover_sp = 0;
		bool occasion_field1 = false;
		bool ko_only = false;
		int32_t max_hp_points = 0;
		int32_t max_sp_points = 0;
		int32_t atk_points2 = 0;
		int32_t def_points2 = 0;
		int32_t spi_points2 = 0;
		int32_t agi_points2 = 0;
		int32_t using_message = 0;
		int32_t skill_id = 1;
		int32_t switch_id = 1;
		bool occasion_field2 = true;
		bool occasion_battle = false;
		DBBitArray actor_set;
		DBBitArray state_set;
		DBBitArray attribute_set;
		int32_t state_chance = 0;
		bool reverse_state_effect = false;
		int32_t weapon_animation = -1;
		std::vector<ItemAnimation> animation_data;
		bool use_skill = false;
		DBBitArray class_set;
		int32_t ranged_trajectory = 0;
		int32_t ranged_target = 0;
	};
	inline std::ostream& operator<<(std::ostream& os, Item::Type code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, Item::Trajectory code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, Item::Target code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const Item& l, const Item& r) {
		return l.name == r.name
		&& l.description == r.description
		&& l.type == r.type
		&& l.price == r.price
		&& l.uses == r.uses
		&& l.atk_points1 == r.atk_points1
		&& l.def_points1 == r.def_points1
		&& l.spi_points1 == r.spi_points1
		&& l.agi_points1 == r.agi_points1
		&& l.two_handed == r.two_handed
		&& l.sp_cost == r.sp_cost
		&& l.hit == r.hit
		&& l.critical_hit == r.critical_hit
		&& l.animation_id == r.animation_id
		&& l.preemptive == r.preemptive
		&& l.dual_attack == r.dual_attack
		&& l.attack_all == r.attack_all
		&& l.ignore_evasion == r.ignore_evasion
		&& l.prevent_critical == r.prevent_critical
		&& l.raise_evasion == r.raise_evasion
		&& l.half_sp_cost == r.half_sp_cost
		&& l.no_terrain_damage == r.no_terrain_damage
		&& l.cursed == r.cursed
		&& l.entire_party == r.entire_party
		&& l.recover_hp_rate == r.recover_hp_rate
		&& l.recover_hp == r.recover_hp
		&& l.recover_sp_rate == r.recover_sp_rate
		&& l.recover_sp == r.recover_sp
		&& l.occasion_field1 == r.occasion_field1
		&& l.ko_only == r.ko_only
		&& l.max_hp_points == r.max_hp_points
		&& l.max_sp_points == r.max_sp_points
		&& l.atk_points2 == r.atk_points2
		&& l.def_points2 == r.def_points2
		&& l.spi_points2 == r.spi_points2
		&& l.agi_points2 == r.agi_points2
		&& l.using_message == r.using_message
		&& l.skill_id == r.skill_id
		&& l.switch_id == r.switch_id
		&& l.occasion_field2 == r.occasion_field2
		&& l.occasion_battle == r.occasion_battle
		&& l.actor_set == r.actor_set
		&& l.state_set == r.state_set
		&& l.attribute_set == r.attribute_set
		&& l.state_chance == r.state_chance
		&& l.reverse_state_effect == r.reverse_state_effect
		&& l.weapon_animation == r.weapon_animation
		&& l.animation_data == r.animation_data
		&& l.use_skill == r.use_skill
		&& l.class_set == r.class_set
		&& l.ranged_trajectory == r.ranged_trajectory
		&& l.ranged_target == r.ranged_target;
	}

	inline bool operator!=(const Item& l, const Item& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Item& obj);

	template <> struct ReflectStruct<Item> {
		using type_t = Item;
		static constexpr const auto& = "Item";
	};
	// String
	template <> struct ReflectMember<Item,DBString,&Item::name> {
		using struct_t = Item;
		using type_t = DBString;
		static constexpr const auto& name[] = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<Item,DBString,&Item::description> {
		using struct_t = Item;
		using type_t = DBString;
		static constexpr const auto& name[] = "description";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::type> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "type";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::price> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "price";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::uses> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "uses";
		static constexpr const int id = 0x06;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::atk_points1> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "atk_points1";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::def_points1> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "def_points1";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::spi_points1> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "spi_points1";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::agi_points1> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "agi_points1";
		static constexpr const int id = 0x0E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Item,bool,&Item::two_handed> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "two_handed";
		static constexpr const int id = 0x0F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::sp_cost> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "sp_cost";
		static constexpr const int id = 0x10;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::hit> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "hit";
		static constexpr const int id = 0x11;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::critical_hit> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "critical_hit";
		static constexpr const int id = 0x12;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::animation_id> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "animation_id";
		static constexpr const int id = 0x14;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Item,bool,&Item::preemptive> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "preemptive";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Item,bool,&Item::dual_attack> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "dual_attack";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Item,bool,&Item::attack_all> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "attack_all";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Item,bool,&Item::ignore_evasion> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "ignore_evasion";
		static constexpr const int id = 0x18;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Item,bool,&Item::prevent_critical> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "prevent_critical";
		static constexpr const int id = 0x19;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Item,bool,&Item::raise_evasion> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "raise_evasion";
		static constexpr const int id = 0x1A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Item,bool,&Item::half_sp_cost> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "half_sp_cost";
		static constexpr const int id = 0x1B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Item,bool,&Item::no_terrain_damage> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "no_terrain_damage";
		static constexpr const int id = 0x1C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag - RPG2003
	template <> struct ReflectMember<Item,bool,&Item::cursed> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "cursed";
		static constexpr const int id = 0x1D;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Item,bool,&Item::entire_party> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "entire_party";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::recover_hp_rate> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "recover_hp_rate";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::recover_hp> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "recover_hp";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::recover_sp_rate> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "recover_sp_rate";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::recover_sp> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "recover_sp";
		static constexpr const int id = 0x23;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Item,bool,&Item::occasion_field1> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "occasion_field1";
		static constexpr const int id = 0x25;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Item,bool,&Item::ko_only> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "ko_only";
		static constexpr const int id = 0x26;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::max_hp_points> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "max_hp_points";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::max_sp_points> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "max_sp_points";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::atk_points2> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "atk_points2";
		static constexpr const int id = 0x2B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::def_points2> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "def_points2";
		static constexpr const int id = 0x2C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::spi_points2> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "spi_points2";
		static constexpr const int id = 0x2D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::agi_points2> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "agi_points2";
		static constexpr const int id = 0x2E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::using_message> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "using_message";
		static constexpr const int id = 0x33;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::skill_id> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "skill_id";
		static constexpr const int id = 0x35;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::switch_id> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "switch_id";
		static constexpr const int id = 0x37;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Item,bool,&Item::occasion_field2> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "occasion_field2";
		static constexpr const int id = 0x39;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Item,bool,&Item::occasion_battle> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "occasion_battle";
		static constexpr const int id = 0x3A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - Flag
	template <> struct ReflectMember<Item,DBBitArray,&Item::actor_set> {
		using struct_t = Item;
		using type_t = DBBitArray;
		static constexpr const auto& name[] = "actor_set";
		static constexpr const int id = 0x3E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - Flag
	template <> struct ReflectMember<Item,DBBitArray,&Item::state_set> {
		using struct_t = Item;
		using type_t = DBBitArray;
		static constexpr const auto& name[] = "state_set";
		static constexpr const int id = 0x40;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - Flag
	template <> struct ReflectMember<Item,DBBitArray,&Item::attribute_set> {
		using struct_t = Item;
		using type_t = DBBitArray;
		static constexpr const auto& name[] = "attribute_set";
		static constexpr const int id = 0x42;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::state_chance> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "state_chance";
		static constexpr const int id = 0x43;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Item,bool,&Item::reverse_state_effect> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "reverse_state_effect";
		static constexpr const int id = 0x44;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Item,int32_t,&Item::weapon_animation> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "weapon_animation";
		static constexpr const int id = 0x45;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Array - RPG2003
	template <> struct ReflectMember<Item,std::vector<ItemAnimation>,&Item::animation_data> {
		using struct_t = Item;
		using type_t = std::vector<ItemAnimation>;
		static constexpr const auto& name[] = "animation_data";
		static constexpr const int id = 0x46;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};
	// Flag - RPG2003
	template <> struct ReflectMember<Item,bool,&Item::use_skill> {
		using struct_t = Item;
		using type_t = bool;
		static constexpr const auto& name[] = "use_skill";
		static constexpr const int id = 0x47;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Array - Flag - RPG2003
	template <> struct ReflectMember<Item,DBBitArray,&Item::class_set> {
		using struct_t = Item;
		using type_t = DBBitArray;
		static constexpr const auto& name[] = "class_set";
		static constexpr const int id = 0x49;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::ranged_trajectory> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "ranged_trajectory";
		static constexpr const int id = 0x4B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Item,int32_t,&Item::ranged_target> {
		using struct_t = Item;
		using type_t = int32_t;
		static constexpr const auto& name[] = "ranged_target";
		static constexpr const int id = 0x4C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
