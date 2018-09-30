/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read Terms.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Terms

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, encounter, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, special_combat, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, escape_success, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, escape_failure, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, victory, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, defeat, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, exp_received, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, gold_recieved_a, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, gold_recieved_b, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, item_recieved, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, attacking, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, enemy_critical, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, actor_critical, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, defending, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, observing, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, focus, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, autodestruction, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, enemy_escape, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, enemy_transform, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, enemy_damaged, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, enemy_undamaged, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, actor_damaged, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, actor_undamaged, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, skill_failure_a, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, skill_failure_b, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, skill_failure_c, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, dodge, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, use_item, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, hp_recovery, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, parameter_increase, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, parameter_decrease, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, enemy_hp_absorbed, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, actor_hp_absorbed, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, resistance_increase, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, resistance_decrease, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, level_up, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, skill_learned, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, battle_start, 1, 1),
	LCF_STRUCT_TYPED_FIELD(std::string, miss, 1, 1),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_greeting1, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_regreeting1, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy1, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell1, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_leave1, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy_select1, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy_number1, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_purchased1, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell_select1, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell_number1, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sold1, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_greeting2, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_regreeting2, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy2, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell2, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_leave2, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy_select2, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy_number2, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_purchased2, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell_select2, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell_number2, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sold2, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_greeting3, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_regreeting3, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy3, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell3, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_leave3, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy_select3, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy_number3, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_purchased3, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell_select3, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell_number3, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sold3, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_a_greeting_1, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_a_greeting_2, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_a_greeting_3, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_a_accept, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_a_cancel, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_b_greeting_1, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_b_greeting_2, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_b_greeting_3, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_b_accept, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_b_cancel, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, possessed_items, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, equipped_items, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, gold, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, battle_fight, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, battle_auto, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, battle_escape, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, command_attack, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, command_defend, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, command_item, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, command_skill, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, menu_equipment, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, menu_save, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, menu_quit, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, new_game, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, load_game, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, exit_game, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, status, 1, 1),
	LCF_STRUCT_TYPED_FIELD(std::string, row, 1, 1),
	LCF_STRUCT_TYPED_FIELD(std::string, order, 1, 1),
	LCF_STRUCT_TYPED_FIELD(std::string, wait_on, 1, 1),
	LCF_STRUCT_TYPED_FIELD(std::string, wait_off, 1, 1),
	LCF_STRUCT_TYPED_FIELD(std::string, level, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, health_points, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, spirit_points, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, normal_status, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, exp_short, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, lvl_short, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, hp_short, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, sp_short, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, sp_cost, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, attack, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, defense, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, spirit, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, agility, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, weapon, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, shield, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, armor, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, helmet, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, accessory, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, save_game_message, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, load_game_message, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, file, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, exit_game_message, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, yes, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, no, 1, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
