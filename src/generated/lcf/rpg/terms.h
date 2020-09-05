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

#ifndef LCF_RPG_TERMS_H
#define LCF_RPG_TERMS_H

#include <lcf/rpg/reflect.h>

// Headers
#include "lcf/dbstring.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Terms class.
 */
namespace lcf {
namespace rpg {
	class Terms {
	public:
		DBString encounter;
		DBString special_combat;
		DBString escape_success;
		DBString escape_failure;
		DBString victory;
		DBString defeat;
		DBString exp_received;
		DBString gold_recieved_a;
		DBString gold_recieved_b;
		DBString item_recieved;
		DBString attacking;
		DBString enemy_critical;
		DBString actor_critical;
		DBString defending;
		DBString observing;
		DBString focus;
		DBString autodestruction;
		DBString enemy_escape;
		DBString enemy_transform;
		DBString enemy_damaged;
		DBString enemy_undamaged;
		DBString actor_damaged;
		DBString actor_undamaged;
		DBString skill_failure_a;
		DBString skill_failure_b;
		DBString skill_failure_c;
		DBString dodge;
		DBString use_item;
		DBString hp_recovery;
		DBString parameter_increase;
		DBString parameter_decrease;
		DBString enemy_hp_absorbed;
		DBString actor_hp_absorbed;
		DBString resistance_increase;
		DBString resistance_decrease;
		DBString level_up;
		DBString skill_learned;
		DBString battle_start;
		DBString miss;
		DBString shop_greeting1;
		DBString shop_regreeting1;
		DBString shop_buy1;
		DBString shop_sell1;
		DBString shop_leave1;
		DBString shop_buy_select1;
		DBString shop_buy_number1;
		DBString shop_purchased1;
		DBString shop_sell_select1;
		DBString shop_sell_number1;
		DBString shop_sold1;
		DBString shop_greeting2;
		DBString shop_regreeting2;
		DBString shop_buy2;
		DBString shop_sell2;
		DBString shop_leave2;
		DBString shop_buy_select2;
		DBString shop_buy_number2;
		DBString shop_purchased2;
		DBString shop_sell_select2;
		DBString shop_sell_number2;
		DBString shop_sold2;
		DBString shop_greeting3;
		DBString shop_regreeting3;
		DBString shop_buy3;
		DBString shop_sell3;
		DBString shop_leave3;
		DBString shop_buy_select3;
		DBString shop_buy_number3;
		DBString shop_purchased3;
		DBString shop_sell_select3;
		DBString shop_sell_number3;
		DBString shop_sold3;
		DBString inn_a_greeting_1;
		DBString inn_a_greeting_2;
		DBString inn_a_greeting_3;
		DBString inn_a_accept;
		DBString inn_a_cancel;
		DBString inn_b_greeting_1;
		DBString inn_b_greeting_2;
		DBString inn_b_greeting_3;
		DBString inn_b_accept;
		DBString inn_b_cancel;
		DBString possessed_items;
		DBString equipped_items;
		DBString gold;
		DBString battle_fight;
		DBString battle_auto;
		DBString battle_escape;
		DBString command_attack;
		DBString command_defend;
		DBString command_item;
		DBString command_skill;
		DBString menu_equipment;
		DBString menu_save;
		DBString menu_quit;
		DBString new_game;
		DBString load_game;
		DBString exit_game;
		DBString status;
		DBString row;
		DBString order;
		DBString wait_on;
		DBString wait_off;
		DBString level;
		DBString health_points;
		DBString spirit_points;
		DBString normal_status;
		DBString exp_short;
		DBString lvl_short;
		DBString hp_short;
		DBString sp_short;
		DBString sp_cost;
		DBString attack;
		DBString defense;
		DBString spirit;
		DBString agility;
		DBString weapon;
		DBString shield;
		DBString armor;
		DBString helmet;
		DBString accessory;
		DBString save_game_message;
		DBString load_game_message;
		DBString file;
		DBString exit_game_message;
		DBString yes;
		DBString no;
	};

	inline bool operator==(const Terms& l, const Terms& r) {
		return l.encounter == r.encounter
		&& l.special_combat == r.special_combat
		&& l.escape_success == r.escape_success
		&& l.escape_failure == r.escape_failure
		&& l.victory == r.victory
		&& l.defeat == r.defeat
		&& l.exp_received == r.exp_received
		&& l.gold_recieved_a == r.gold_recieved_a
		&& l.gold_recieved_b == r.gold_recieved_b
		&& l.item_recieved == r.item_recieved
		&& l.attacking == r.attacking
		&& l.enemy_critical == r.enemy_critical
		&& l.actor_critical == r.actor_critical
		&& l.defending == r.defending
		&& l.observing == r.observing
		&& l.focus == r.focus
		&& l.autodestruction == r.autodestruction
		&& l.enemy_escape == r.enemy_escape
		&& l.enemy_transform == r.enemy_transform
		&& l.enemy_damaged == r.enemy_damaged
		&& l.enemy_undamaged == r.enemy_undamaged
		&& l.actor_damaged == r.actor_damaged
		&& l.actor_undamaged == r.actor_undamaged
		&& l.skill_failure_a == r.skill_failure_a
		&& l.skill_failure_b == r.skill_failure_b
		&& l.skill_failure_c == r.skill_failure_c
		&& l.dodge == r.dodge
		&& l.use_item == r.use_item
		&& l.hp_recovery == r.hp_recovery
		&& l.parameter_increase == r.parameter_increase
		&& l.parameter_decrease == r.parameter_decrease
		&& l.enemy_hp_absorbed == r.enemy_hp_absorbed
		&& l.actor_hp_absorbed == r.actor_hp_absorbed
		&& l.resistance_increase == r.resistance_increase
		&& l.resistance_decrease == r.resistance_decrease
		&& l.level_up == r.level_up
		&& l.skill_learned == r.skill_learned
		&& l.battle_start == r.battle_start
		&& l.miss == r.miss
		&& l.shop_greeting1 == r.shop_greeting1
		&& l.shop_regreeting1 == r.shop_regreeting1
		&& l.shop_buy1 == r.shop_buy1
		&& l.shop_sell1 == r.shop_sell1
		&& l.shop_leave1 == r.shop_leave1
		&& l.shop_buy_select1 == r.shop_buy_select1
		&& l.shop_buy_number1 == r.shop_buy_number1
		&& l.shop_purchased1 == r.shop_purchased1
		&& l.shop_sell_select1 == r.shop_sell_select1
		&& l.shop_sell_number1 == r.shop_sell_number1
		&& l.shop_sold1 == r.shop_sold1
		&& l.shop_greeting2 == r.shop_greeting2
		&& l.shop_regreeting2 == r.shop_regreeting2
		&& l.shop_buy2 == r.shop_buy2
		&& l.shop_sell2 == r.shop_sell2
		&& l.shop_leave2 == r.shop_leave2
		&& l.shop_buy_select2 == r.shop_buy_select2
		&& l.shop_buy_number2 == r.shop_buy_number2
		&& l.shop_purchased2 == r.shop_purchased2
		&& l.shop_sell_select2 == r.shop_sell_select2
		&& l.shop_sell_number2 == r.shop_sell_number2
		&& l.shop_sold2 == r.shop_sold2
		&& l.shop_greeting3 == r.shop_greeting3
		&& l.shop_regreeting3 == r.shop_regreeting3
		&& l.shop_buy3 == r.shop_buy3
		&& l.shop_sell3 == r.shop_sell3
		&& l.shop_leave3 == r.shop_leave3
		&& l.shop_buy_select3 == r.shop_buy_select3
		&& l.shop_buy_number3 == r.shop_buy_number3
		&& l.shop_purchased3 == r.shop_purchased3
		&& l.shop_sell_select3 == r.shop_sell_select3
		&& l.shop_sell_number3 == r.shop_sell_number3
		&& l.shop_sold3 == r.shop_sold3
		&& l.inn_a_greeting_1 == r.inn_a_greeting_1
		&& l.inn_a_greeting_2 == r.inn_a_greeting_2
		&& l.inn_a_greeting_3 == r.inn_a_greeting_3
		&& l.inn_a_accept == r.inn_a_accept
		&& l.inn_a_cancel == r.inn_a_cancel
		&& l.inn_b_greeting_1 == r.inn_b_greeting_1
		&& l.inn_b_greeting_2 == r.inn_b_greeting_2
		&& l.inn_b_greeting_3 == r.inn_b_greeting_3
		&& l.inn_b_accept == r.inn_b_accept
		&& l.inn_b_cancel == r.inn_b_cancel
		&& l.possessed_items == r.possessed_items
		&& l.equipped_items == r.equipped_items
		&& l.gold == r.gold
		&& l.battle_fight == r.battle_fight
		&& l.battle_auto == r.battle_auto
		&& l.battle_escape == r.battle_escape
		&& l.command_attack == r.command_attack
		&& l.command_defend == r.command_defend
		&& l.command_item == r.command_item
		&& l.command_skill == r.command_skill
		&& l.menu_equipment == r.menu_equipment
		&& l.menu_save == r.menu_save
		&& l.menu_quit == r.menu_quit
		&& l.new_game == r.new_game
		&& l.load_game == r.load_game
		&& l.exit_game == r.exit_game
		&& l.status == r.status
		&& l.row == r.row
		&& l.order == r.order
		&& l.wait_on == r.wait_on
		&& l.wait_off == r.wait_off
		&& l.level == r.level
		&& l.health_points == r.health_points
		&& l.spirit_points == r.spirit_points
		&& l.normal_status == r.normal_status
		&& l.exp_short == r.exp_short
		&& l.lvl_short == r.lvl_short
		&& l.hp_short == r.hp_short
		&& l.sp_short == r.sp_short
		&& l.sp_cost == r.sp_cost
		&& l.attack == r.attack
		&& l.defense == r.defense
		&& l.spirit == r.spirit
		&& l.agility == r.agility
		&& l.weapon == r.weapon
		&& l.shield == r.shield
		&& l.armor == r.armor
		&& l.helmet == r.helmet
		&& l.accessory == r.accessory
		&& l.save_game_message == r.save_game_message
		&& l.load_game_message == r.load_game_message
		&& l.file == r.file
		&& l.exit_game_message == r.exit_game_message
		&& l.yes == r.yes
		&& l.no == r.no;
	}

	inline bool operator!=(const Terms& l, const Terms& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Terms& obj);

	template <> struct ReflectStruct<Terms> {
		using type_t = Terms;
		static constexpr const auto& = "Terms";
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::encounter> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "encounter";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::special_combat> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "special_combat";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::escape_success> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "escape_success";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::escape_failure> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "escape_failure";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::victory> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "victory";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::defeat> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "defeat";
		static constexpr const int id = 0x06;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::exp_received> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "exp_received";
		static constexpr const int id = 0x07;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::gold_recieved_a> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "gold_recieved_a";
		static constexpr const int id = 0x08;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::gold_recieved_b> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "gold_recieved_b";
		static constexpr const int id = 0x09;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::item_recieved> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "item_recieved";
		static constexpr const int id = 0x0A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::attacking> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "attacking";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::enemy_critical> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "enemy_critical";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::actor_critical> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "actor_critical";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::defending> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "defending";
		static constexpr const int id = 0x0E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::observing> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "observing";
		static constexpr const int id = 0x0F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::focus> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "focus";
		static constexpr const int id = 0x10;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::autodestruction> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "autodestruction";
		static constexpr const int id = 0x11;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::enemy_escape> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "enemy_escape";
		static constexpr const int id = 0x12;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::enemy_transform> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "enemy_transform";
		static constexpr const int id = 0x13;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::enemy_damaged> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "enemy_damaged";
		static constexpr const int id = 0x14;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::enemy_undamaged> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "enemy_undamaged";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::actor_damaged> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "actor_damaged";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::actor_undamaged> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "actor_undamaged";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::skill_failure_a> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "skill_failure_a";
		static constexpr const int id = 0x18;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::skill_failure_b> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "skill_failure_b";
		static constexpr const int id = 0x19;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::skill_failure_c> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "skill_failure_c";
		static constexpr const int id = 0x1A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::dodge> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "dodge";
		static constexpr const int id = 0x1B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::use_item> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "use_item";
		static constexpr const int id = 0x1C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::hp_recovery> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "hp_recovery";
		static constexpr const int id = 0x1D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::parameter_increase> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "parameter_increase";
		static constexpr const int id = 0x1E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::parameter_decrease> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "parameter_decrease";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::enemy_hp_absorbed> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "enemy_hp_absorbed";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::actor_hp_absorbed> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "actor_hp_absorbed";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::resistance_increase> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "resistance_increase";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::resistance_decrease> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "resistance_decrease";
		static constexpr const int id = 0x23;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::level_up> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "level_up";
		static constexpr const int id = 0x24;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::skill_learned> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "skill_learned";
		static constexpr const int id = 0x25;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::battle_start> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "battle_start";
		static constexpr const int id = 0x26;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::miss> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "miss";
		static constexpr const int id = 0x27;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_greeting1> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_greeting1";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_regreeting1> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_regreeting1";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_buy1> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_buy1";
		static constexpr const int id = 0x2B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_sell1> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_sell1";
		static constexpr const int id = 0x2C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_leave1> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_leave1";
		static constexpr const int id = 0x2D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_buy_select1> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_buy_select1";
		static constexpr const int id = 0x2E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_buy_number1> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_buy_number1";
		static constexpr const int id = 0x2F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_purchased1> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_purchased1";
		static constexpr const int id = 0x30;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_sell_select1> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_sell_select1";
		static constexpr const int id = 0x31;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_sell_number1> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_sell_number1";
		static constexpr const int id = 0x32;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_sold1> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_sold1";
		static constexpr const int id = 0x33;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_greeting2> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_greeting2";
		static constexpr const int id = 0x36;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_regreeting2> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_regreeting2";
		static constexpr const int id = 0x37;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_buy2> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_buy2";
		static constexpr const int id = 0x38;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_sell2> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_sell2";
		static constexpr const int id = 0x39;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_leave2> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_leave2";
		static constexpr const int id = 0x3A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_buy_select2> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_buy_select2";
		static constexpr const int id = 0x3B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_buy_number2> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_buy_number2";
		static constexpr const int id = 0x3C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_purchased2> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_purchased2";
		static constexpr const int id = 0x3D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_sell_select2> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_sell_select2";
		static constexpr const int id = 0x3E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_sell_number2> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_sell_number2";
		static constexpr const int id = 0x3F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_sold2> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_sold2";
		static constexpr const int id = 0x40;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_greeting3> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_greeting3";
		static constexpr const int id = 0x43;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_regreeting3> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_regreeting3";
		static constexpr const int id = 0x44;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_buy3> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_buy3";
		static constexpr const int id = 0x45;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_sell3> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_sell3";
		static constexpr const int id = 0x46;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_leave3> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_leave3";
		static constexpr const int id = 0x47;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_buy_select3> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_buy_select3";
		static constexpr const int id = 0x48;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_buy_number3> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_buy_number3";
		static constexpr const int id = 0x49;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_purchased3> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_purchased3";
		static constexpr const int id = 0x4A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_sell_select3> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_sell_select3";
		static constexpr const int id = 0x4B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_sell_number3> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_sell_number3";
		static constexpr const int id = 0x4C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shop_sold3> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shop_sold3";
		static constexpr const int id = 0x4D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::inn_a_greeting_1> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "inn_a_greeting_1";
		static constexpr const int id = 0x50;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::inn_a_greeting_2> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "inn_a_greeting_2";
		static constexpr const int id = 0x51;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::inn_a_greeting_3> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "inn_a_greeting_3";
		static constexpr const int id = 0x52;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::inn_a_accept> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "inn_a_accept";
		static constexpr const int id = 0x53;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::inn_a_cancel> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "inn_a_cancel";
		static constexpr const int id = 0x54;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::inn_b_greeting_1> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "inn_b_greeting_1";
		static constexpr const int id = 0x55;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::inn_b_greeting_2> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "inn_b_greeting_2";
		static constexpr const int id = 0x56;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::inn_b_greeting_3> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "inn_b_greeting_3";
		static constexpr const int id = 0x57;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::inn_b_accept> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "inn_b_accept";
		static constexpr const int id = 0x58;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::inn_b_cancel> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "inn_b_cancel";
		static constexpr const int id = 0x59;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::possessed_items> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "possessed_items";
		static constexpr const int id = 0x5C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::equipped_items> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "equipped_items";
		static constexpr const int id = 0x5D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::gold> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "gold";
		static constexpr const int id = 0x5F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::battle_fight> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "battle_fight";
		static constexpr const int id = 0x65;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::battle_auto> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "battle_auto";
		static constexpr const int id = 0x66;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::battle_escape> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "battle_escape";
		static constexpr const int id = 0x67;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::command_attack> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "command_attack";
		static constexpr const int id = 0x68;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::command_defend> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "command_defend";
		static constexpr const int id = 0x69;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::command_item> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "command_item";
		static constexpr const int id = 0x6A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::command_skill> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "command_skill";
		static constexpr const int id = 0x6B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::menu_equipment> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "menu_equipment";
		static constexpr const int id = 0x6C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::menu_save> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "menu_save";
		static constexpr const int id = 0x6E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::menu_quit> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "menu_quit";
		static constexpr const int id = 0x70;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::new_game> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "new_game";
		static constexpr const int id = 0x72;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::load_game> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "load_game";
		static constexpr const int id = 0x73;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::exit_game> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "exit_game";
		static constexpr const int id = 0x75;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::status> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "status";
		static constexpr const int id = 0x76;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::row> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "row";
		static constexpr const int id = 0x77;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::order> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "order";
		static constexpr const int id = 0x78;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::wait_on> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "wait_on";
		static constexpr const int id = 0x79;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::wait_off> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "wait_off";
		static constexpr const int id = 0x7A;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::level> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "level";
		static constexpr const int id = 0x7B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::health_points> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "health_points";
		static constexpr const int id = 0x7C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::spirit_points> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "spirit_points";
		static constexpr const int id = 0x7D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::normal_status> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "normal_status";
		static constexpr const int id = 0x7E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String - char x 2?
	template <> struct ReflectMember<Terms,DBString,&Terms::exp_short> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "exp_short";
		static constexpr const int id = 0x7F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String - char x 2?
	template <> struct ReflectMember<Terms,DBString,&Terms::lvl_short> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "lvl_short";
		static constexpr const int id = 0x80;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String - char x 2?
	template <> struct ReflectMember<Terms,DBString,&Terms::hp_short> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "hp_short";
		static constexpr const int id = 0x81;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String - char x 2?
	template <> struct ReflectMember<Terms,DBString,&Terms::sp_short> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "sp_short";
		static constexpr const int id = 0x82;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::sp_cost> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "sp_cost";
		static constexpr const int id = 0x83;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::attack> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "attack";
		static constexpr const int id = 0x84;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::defense> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "defense";
		static constexpr const int id = 0x85;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::spirit> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "spirit";
		static constexpr const int id = 0x86;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::agility> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "agility";
		static constexpr const int id = 0x87;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::weapon> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "weapon";
		static constexpr const int id = 0x88;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::shield> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "shield";
		static constexpr const int id = 0x89;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::armor> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "armor";
		static constexpr const int id = 0x8A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::helmet> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "helmet";
		static constexpr const int id = 0x8B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::accessory> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "accessory";
		static constexpr const int id = 0x8C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::save_game_message> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "save_game_message";
		static constexpr const int id = 0x92;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::load_game_message> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "load_game_message";
		static constexpr const int id = 0x93;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::file> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "file";
		static constexpr const int id = 0x94;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::exit_game_message> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "exit_game_message";
		static constexpr const int id = 0x97;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::yes> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "yes";
		static constexpr const int id = 0x98;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<Terms,DBString,&Terms::no> {
		using struct_t = Terms;
		using type_t = DBString;
		static constexpr const auto& name[] = "no";
		static constexpr const int id = 0x99;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
} // namespace rpg
} // namespace lcf

#endif
