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

#ifndef LCF_RPG_SYSTEM_H
#define LCF_RPG_SYSTEM_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include "lcf/rpg/music.h"
#include "lcf/rpg/sound.h"
#include "lcf/rpg/testbattler.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::System class.
 */
namespace lcf {
namespace rpg {
	class System {
	public:
		enum FadeOut {
			FadeOut_default = 0,
			FadeOut_fade_out = 1,
			FadeOut_remove_blocks = 2,
			FadeOut_wipe_downward = 3,
			FadeOut_wipe_upward = 4,
			FadeOut_venetian_blinds = 5,
			FadeOut_vertical_blinds = 6,
			FadeOut_horizontal_blinds = 7,
			FadeOut_receding_square = 8,
			FadeOut_expanding_square = 9,
			FadeOut_screen_moves_up = 10,
			FadeOut_screen_moves_down = 11,
			FadeOut_screen_moves_left = 12,
			FadeOut_screen_moves_right = 13,
			FadeOut_vertical_div = 14,
			FadeOut_horizontal_div = 15,
			FadeOut_quadrasection = 16,
			FadeOut_zoom_in = 17,
			FadeOut_mosaic = 18,
			FadeOut_waver_screen = 19,
			FadeOut_instantaneous = 20,
			FadeOut_none = 21
		};
		static constexpr auto kFadeOutTags = lcf::makeEnumTags<FadeOut>(
			"default",
			"fade_out",
			"remove_blocks",
			"wipe_downward",
			"wipe_upward",
			"venetian_blinds",
			"vertical_blinds",
			"horizontal_blinds",
			"receding_square",
			"expanding_square",
			"screen_moves_up",
			"screen_moves_down",
			"screen_moves_left",
			"screen_moves_right",
			"vertical_div",
			"horizontal_div",
			"quadrasection",
			"zoom_in",
			"mosaic",
			"waver_screen",
			"instantaneous",
			"none"
		);
		enum FadeIn {
			FadeIn_default = 0,
			FadeIn_fade_in = 1,
			FadeIn_reconstitute_blocks = 2,
			FadeIn_unwipe_downward = 3,
			FadeIn_unwipe_upward = 4,
			FadeIn_venetian_blinds = 5,
			FadeIn_vertical_blinds = 6,
			FadeIn_horizontal_blinds = 7,
			FadeIn_receding_square = 8,
			FadeIn_expanding_square = 9,
			FadeIn_screen_moves_down = 10,
			FadeIn_screen_moves_up = 11,
			FadeIn_screen_moves_right = 12,
			FadeIn_screen_moves_left = 13,
			FadeIn_vertical_unify = 14,
			FadeIn_horizontal_unify = 15,
			FadeIn_unify_quadrants = 16,
			FadeIn_zoom_out = 17,
			FadeIn_mosaic = 18,
			FadeIn_waver_screen = 19,
			FadeIn_instantaneous = 20,
			FadeIn_none = 21
		};
		static constexpr auto kFadeInTags = lcf::makeEnumTags<FadeIn>(
			"default",
			"fade_in",
			"reconstitute_blocks",
			"unwipe_downward",
			"unwipe_upward",
			"venetian_blinds",
			"vertical_blinds",
			"horizontal_blinds",
			"receding_square",
			"expanding_square",
			"screen_moves_down",
			"screen_moves_up",
			"screen_moves_right",
			"screen_moves_left",
			"vertical_unify",
			"horizontal_unify",
			"unify_quadrants",
			"zoom_out",
			"mosaic",
			"waver_screen",
			"instantaneous",
			"none"
		);
		enum Stretch {
			Stretch_stretch = 0,
			Stretch_tiled = 1
		};
		static constexpr auto kStretchTags = lcf::makeEnumTags<Stretch>(
			"stretch",
			"tiled"
		);
		enum Font {
			Font_gothic = 0,
			Font_mincho = 1
		};
		static constexpr auto kFontTags = lcf::makeEnumTags<Font>(
			"gothic",
			"mincho"
		);
		enum BattleFormation {
			BattleFormation_terrain = 0,
			BattleFormation_loose = 1,
			BattleFormation_tight = 2
		};
		static constexpr auto kBattleFormationTags = lcf::makeEnumTags<BattleFormation>(
			"terrain",
			"loose",
			"tight"
		);
		enum BattleCondition {
			BattleCondition_none = 0,
			BattleCondition_initiative = 1,
			BattleCondition_back = 2,
			BattleCondition_surround = 3,
			BattleCondition_pincers = 4
		};
		static constexpr auto kBattleConditionTags = lcf::makeEnumTags<BattleCondition>(
			"none",
			"initiative",
			"back",
			"surround",
			"pincers"
		);
		enum EquipmentSetting {
			EquipmentSetting_actor = 0,
			EquipmentSetting_class = 1
		};
		static constexpr auto kEquipmentSettingTags = lcf::makeEnumTags<EquipmentSetting>(
			"actor",
			"class"
		);

		System();
		void Init();
		int32_t ldb_id = 0;
		DBString boat_name;
		DBString ship_name;
		DBString airship_name;
		int32_t boat_index = 0;
		int32_t ship_index = 0;
		int32_t airship_index = 0;
		DBString title_name;
		DBString gameover_name;
		DBString system_name;
		DBString system2_name;
		std::vector<int16_t> party;
		std::vector<int16_t> menu_commands;
		Music title_music;
		Music battle_music;
		Music battle_end_music;
		Music inn_music;
		Music boat_music;
		Music ship_music;
		Music airship_music;
		Music gameover_music;
		Sound cursor_se;
		Sound decision_se;
		Sound cancel_se;
		Sound buzzer_se;
		Sound battle_se;
		Sound escape_se;
		Sound enemy_attack_se;
		Sound enemy_damaged_se;
		Sound actor_damaged_se;
		Sound dodge_se;
		Sound enemy_death_se;
		Sound item_se;
		int32_t transition_out = 0;
		int32_t transition_in = 0;
		int32_t battle_start_fadeout = 0;
		int32_t battle_start_fadein = 0;
		int32_t battle_end_fadeout = 0;
		int32_t battle_end_fadein = 0;
		int32_t message_stretch = 0;
		int32_t font_id = 0;
		int32_t selected_condition = 0;
		int32_t selected_hero = 0;
		DBString battletest_background;
		std::vector<TestBattler> battletest_data;
		int32_t save_count = 0;
		int32_t battletest_terrain = 0;
		int32_t battletest_formation = 0;
		int32_t battletest_condition = 0;
		int32_t equipment_setting = 0;
		int32_t battletest_alt_terrain = -1;
		bool show_frame = false;
		DBString frame_name;
		bool invert_animations = false;
		bool show_title = true;
	};
	inline std::ostream& operator<<(std::ostream& os, System::FadeOut code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, System::FadeIn code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, System::Stretch code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, System::Font code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, System::BattleFormation code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, System::BattleCondition code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, System::EquipmentSetting code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const System& l, const System& r) {
		return l.ldb_id == r.ldb_id
		&& l.boat_name == r.boat_name
		&& l.ship_name == r.ship_name
		&& l.airship_name == r.airship_name
		&& l.boat_index == r.boat_index
		&& l.ship_index == r.ship_index
		&& l.airship_index == r.airship_index
		&& l.title_name == r.title_name
		&& l.gameover_name == r.gameover_name
		&& l.system_name == r.system_name
		&& l.system2_name == r.system2_name
		&& l.party == r.party
		&& l.menu_commands == r.menu_commands
		&& l.title_music == r.title_music
		&& l.battle_music == r.battle_music
		&& l.battle_end_music == r.battle_end_music
		&& l.inn_music == r.inn_music
		&& l.boat_music == r.boat_music
		&& l.ship_music == r.ship_music
		&& l.airship_music == r.airship_music
		&& l.gameover_music == r.gameover_music
		&& l.cursor_se == r.cursor_se
		&& l.decision_se == r.decision_se
		&& l.cancel_se == r.cancel_se
		&& l.buzzer_se == r.buzzer_se
		&& l.battle_se == r.battle_se
		&& l.escape_se == r.escape_se
		&& l.enemy_attack_se == r.enemy_attack_se
		&& l.enemy_damaged_se == r.enemy_damaged_se
		&& l.actor_damaged_se == r.actor_damaged_se
		&& l.dodge_se == r.dodge_se
		&& l.enemy_death_se == r.enemy_death_se
		&& l.item_se == r.item_se
		&& l.transition_out == r.transition_out
		&& l.transition_in == r.transition_in
		&& l.battle_start_fadeout == r.battle_start_fadeout
		&& l.battle_start_fadein == r.battle_start_fadein
		&& l.battle_end_fadeout == r.battle_end_fadeout
		&& l.battle_end_fadein == r.battle_end_fadein
		&& l.message_stretch == r.message_stretch
		&& l.font_id == r.font_id
		&& l.selected_condition == r.selected_condition
		&& l.selected_hero == r.selected_hero
		&& l.battletest_background == r.battletest_background
		&& l.battletest_data == r.battletest_data
		&& l.save_count == r.save_count
		&& l.battletest_terrain == r.battletest_terrain
		&& l.battletest_formation == r.battletest_formation
		&& l.battletest_condition == r.battletest_condition
		&& l.equipment_setting == r.equipment_setting
		&& l.battletest_alt_terrain == r.battletest_alt_terrain
		&& l.show_frame == r.show_frame
		&& l.frame_name == r.frame_name
		&& l.invert_animations == r.invert_animations
		&& l.show_title == r.show_title;
	}

	inline bool operator!=(const System& l, const System& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const System& obj);

	template <> struct ReflectStruct<System> {
		using type_t = System;
		static constexpr const auto& = "System";
	};
	// Integer - RPG2003
	template <> struct ReflectMember<System,int32_t,&System::ldb_id> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "ldb_id";
		static constexpr const int id = 0x0A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<System,DBString,&System::boat_name> {
		using struct_t = System;
		using type_t = DBString;
		static constexpr const auto& name[] = "boat_name";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<System,DBString,&System::ship_name> {
		using struct_t = System;
		using type_t = DBString;
		static constexpr const auto& name[] = "ship_name";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<System,DBString,&System::airship_name> {
		using struct_t = System;
		using type_t = DBString;
		static constexpr const auto& name[] = "airship_name";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::boat_index> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "boat_index";
		static constexpr const int id = 0x0E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::ship_index> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "ship_index";
		static constexpr const int id = 0x0F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::airship_index> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "airship_index";
		static constexpr const int id = 0x10;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<System,DBString,&System::title_name> {
		using struct_t = System;
		using type_t = DBString;
		static constexpr const auto& name[] = "title_name";
		static constexpr const int id = 0x11;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<System,DBString,&System::gameover_name> {
		using struct_t = System;
		using type_t = DBString;
		static constexpr const auto& name[] = "gameover_name";
		static constexpr const int id = 0x12;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<System,DBString,&System::system_name> {
		using struct_t = System;
		using type_t = DBString;
		static constexpr const auto& name[] = "system_name";
		static constexpr const int id = 0x13;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String - RPG2003
	template <> struct ReflectMember<System,DBString,&System::system2_name> {
		using struct_t = System;
		using type_t = DBString;
		static constexpr const auto& name[] = "system2_name";
		static constexpr const int id = 0x14;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Array - Short
	template <> struct ReflectMember<System,std::vector<int16_t>,&System::party> {
		using struct_t = System;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name[] = "party";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - Short - RPG2003
	template <> struct ReflectMember<System,std::vector<int16_t>,&System::menu_commands> {
		using struct_t = System;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name[] = "menu_commands";
		static constexpr const int id = 0x1B;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Music
	template <> struct ReflectMember<System,Music,&System::title_music> {
		using struct_t = System;
		using type_t = Music;
		static constexpr const auto& name[] = "title_music";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Music
	template <> struct ReflectMember<System,Music,&System::battle_music> {
		using struct_t = System;
		using type_t = Music;
		static constexpr const auto& name[] = "battle_music";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Music
	template <> struct ReflectMember<System,Music,&System::battle_end_music> {
		using struct_t = System;
		using type_t = Music;
		static constexpr const auto& name[] = "battle_end_music";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Music
	template <> struct ReflectMember<System,Music,&System::inn_music> {
		using struct_t = System;
		using type_t = Music;
		static constexpr const auto& name[] = "inn_music";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Music
	template <> struct ReflectMember<System,Music,&System::boat_music> {
		using struct_t = System;
		using type_t = Music;
		static constexpr const auto& name[] = "boat_music";
		static constexpr const int id = 0x23;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Music
	template <> struct ReflectMember<System,Music,&System::ship_music> {
		using struct_t = System;
		using type_t = Music;
		static constexpr const auto& name[] = "ship_music";
		static constexpr const int id = 0x24;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Music
	template <> struct ReflectMember<System,Music,&System::airship_music> {
		using struct_t = System;
		using type_t = Music;
		static constexpr const auto& name[] = "airship_music";
		static constexpr const int id = 0x25;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Music
	template <> struct ReflectMember<System,Music,&System::gameover_music> {
		using struct_t = System;
		using type_t = Music;
		static constexpr const auto& name[] = "gameover_music";
		static constexpr const int id = 0x26;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Sound
	template <> struct ReflectMember<System,Sound,&System::cursor_se> {
		using struct_t = System;
		using type_t = Sound;
		static constexpr const auto& name[] = "cursor_se";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Sound
	template <> struct ReflectMember<System,Sound,&System::decision_se> {
		using struct_t = System;
		using type_t = Sound;
		static constexpr const auto& name[] = "decision_se";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Sound
	template <> struct ReflectMember<System,Sound,&System::cancel_se> {
		using struct_t = System;
		using type_t = Sound;
		static constexpr const auto& name[] = "cancel_se";
		static constexpr const int id = 0x2B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Sound
	template <> struct ReflectMember<System,Sound,&System::buzzer_se> {
		using struct_t = System;
		using type_t = Sound;
		static constexpr const auto& name[] = "buzzer_se";
		static constexpr const int id = 0x2C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Sound
	template <> struct ReflectMember<System,Sound,&System::battle_se> {
		using struct_t = System;
		using type_t = Sound;
		static constexpr const auto& name[] = "battle_se";
		static constexpr const int id = 0x2D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Sound
	template <> struct ReflectMember<System,Sound,&System::escape_se> {
		using struct_t = System;
		using type_t = Sound;
		static constexpr const auto& name[] = "escape_se";
		static constexpr const int id = 0x2E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Sound
	template <> struct ReflectMember<System,Sound,&System::enemy_attack_se> {
		using struct_t = System;
		using type_t = Sound;
		static constexpr const auto& name[] = "enemy_attack_se";
		static constexpr const int id = 0x2F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Sound
	template <> struct ReflectMember<System,Sound,&System::enemy_damaged_se> {
		using struct_t = System;
		using type_t = Sound;
		static constexpr const auto& name[] = "enemy_damaged_se";
		static constexpr const int id = 0x30;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Sound
	template <> struct ReflectMember<System,Sound,&System::actor_damaged_se> {
		using struct_t = System;
		using type_t = Sound;
		static constexpr const auto& name[] = "actor_damaged_se";
		static constexpr const int id = 0x31;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Sound
	template <> struct ReflectMember<System,Sound,&System::dodge_se> {
		using struct_t = System;
		using type_t = Sound;
		static constexpr const auto& name[] = "dodge_se";
		static constexpr const int id = 0x32;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Sound
	template <> struct ReflectMember<System,Sound,&System::enemy_death_se> {
		using struct_t = System;
		using type_t = Sound;
		static constexpr const auto& name[] = "enemy_death_se";
		static constexpr const int id = 0x33;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Sound
	template <> struct ReflectMember<System,Sound,&System::item_se> {
		using struct_t = System;
		using type_t = Sound;
		static constexpr const auto& name[] = "item_se";
		static constexpr const int id = 0x34;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::transition_out> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "transition_out";
		static constexpr const int id = 0x3D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::transition_in> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "transition_in";
		static constexpr const int id = 0x3E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::battle_start_fadeout> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "battle_start_fadeout";
		static constexpr const int id = 0x3F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::battle_start_fadein> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "battle_start_fadein";
		static constexpr const int id = 0x40;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::battle_end_fadeout> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "battle_end_fadeout";
		static constexpr const int id = 0x41;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::battle_end_fadein> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "battle_end_fadein";
		static constexpr const int id = 0x42;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::message_stretch> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "message_stretch";
		static constexpr const int id = 0x47;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::font_id> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "font_id";
		static constexpr const int id = 0x48;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::selected_condition> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "selected_condition";
		static constexpr const int id = 0x51;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::selected_hero> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "selected_hero";
		static constexpr const int id = 0x52;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<System,DBString,&System::battletest_background> {
		using struct_t = System;
		using type_t = DBString;
		static constexpr const auto& name[] = "battletest_background";
		static constexpr const int id = 0x54;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - rpg::TestBattler
	template <> struct ReflectMember<System,std::vector<TestBattler>,&System::battletest_data> {
		using struct_t = System;
		using type_t = std::vector<TestBattler>;
		static constexpr const auto& name[] = "battletest_data";
		static constexpr const int id = 0x55;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::save_count> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "save_count";
		static constexpr const int id = 0x5B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::battletest_terrain> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "battletest_terrain";
		static constexpr const int id = 0x5E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::battletest_formation> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "battletest_formation";
		static constexpr const int id = 0x5F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<System,int32_t,&System::battletest_condition> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "battletest_condition";
		static constexpr const int id = 0x60;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer RPG2003 - Whether equipment usage is by Actor or by Class. This is a global setting in RM2k3!
	template <> struct ReflectMember<System,int32_t,&System::equipment_setting> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "equipment_setting";
		static constexpr const int id = 0x61;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer RPG2003 (EDITOR ONLY) - Double click on Terrain in Troops changes this setting and 0x54. Affects only the RM2k3 editor.
	template <> struct ReflectMember<System,int32_t,&System::battletest_alt_terrain> {
		using struct_t = System;
		using type_t = int32_t;
		static constexpr const auto& name[] = "battletest_alt_terrain";
		static constexpr const int id = 0x62;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Flag - RPG2003
	template <> struct ReflectMember<System,bool,&System::show_frame> {
		using struct_t = System;
		using type_t = bool;
		static constexpr const auto& name[] = "show_frame";
		static constexpr const int id = 0x63;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// String - RPG2003
	template <> struct ReflectMember<System,DBString,&System::frame_name> {
		using struct_t = System;
		using type_t = DBString;
		static constexpr const auto& name[] = "frame_name";
		static constexpr const int id = 0x64;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Flag - RPG2003
	template <> struct ReflectMember<System,bool,&System::invert_animations> {
		using struct_t = System;
		using type_t = bool;
		static constexpr const auto& name[] = "invert_animations";
		static constexpr const int id = 0x65;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// When false the title is skipped and the game starts directly. In TestPlay mode skips directly to the Load scene. Added in RPG Maker 2003 v1.11
	template <> struct ReflectMember<System,bool,&System::show_title> {
		using struct_t = System;
		using type_t = bool;
		static constexpr const auto& name[] = "show_title";
		static constexpr const int id = 0x6F;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
