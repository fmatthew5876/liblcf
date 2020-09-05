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

#ifndef LCF_RPG_SAVESYSTEM_H
#define LCF_RPG_SAVESYSTEM_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "lcf/enum_tags.h"
#include "lcf/rpg/music.h"
#include "lcf/rpg/sound.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveSystem class.
 */
namespace lcf {
namespace rpg {
	class SaveSystem {
	public:
		enum Scene {
			Scene_map = 0,
			Scene_menu = 1,
			Scene_battle = 2,
			Scene_shop = 3,
			Scene_name = 4,
			Scene_file = 5,
			Scene_title = 6,
			Scene_game_over = 7,
			Scene_debug = 8
		};
		static constexpr auto kSceneTags = lcf::makeEnumTags<Scene>(
			"map",
			"menu",
			"battle",
			"shop",
			"name",
			"file",
			"title",
			"game_over",
			"debug"
		);
		enum AtbMode {
			AtbMode_atb_active = 0,
			AtbMode_atb_wait = 1
		};
		static constexpr auto kAtbModeTags = lcf::makeEnumTags<AtbMode>(
			"atb_active",
			"atb_wait"
		);

		void Setup();
		void Fixup();
		void UnFixup();
		int32_t scene = 0;
		int32_t frame_count = 0;
		std::string graphics_name;
		int32_t message_stretch = 0;
		int32_t font_id = 0;
		std::vector<bool> switches;
		std::vector<int32_t> variables;
		int32_t message_transparent = 0;
		int32_t message_position = 2;
		int32_t message_prevent_overlap = 1;
		int32_t message_continue_events = 0;
		std::string face_name;
		int32_t face_id = 0;
		bool face_right = false;
		bool face_flip = false;
		bool event_message_active = false;
		bool music_stopping = false;
		Music title_music;
		Music battle_music;
		Music battle_end_music;
		Music inn_music;
		Music current_music;
		Music before_vehicle_music;
		Music before_battle_music;
		Music stored_music;
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
		int8_t transition_out = -1;
		int8_t transition_in = -1;
		int8_t battle_start_fadeout = -1;
		int8_t battle_start_fadein = -1;
		int8_t battle_end_fadeout = -1;
		int8_t battle_end_fadein = -1;
		bool teleport_allowed = true;
		bool escape_allowed = true;
		bool save_allowed = true;
		bool menu_allowed = true;
		std::string background;
		int32_t save_count = 0;
		int32_t save_slot = 1;
		int32_t atb_mode = 0;
	};
	inline std::ostream& operator<<(std::ostream& os, SaveSystem::Scene code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, SaveSystem::AtbMode code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const SaveSystem& l, const SaveSystem& r) {
		return l.scene == r.scene
		&& l.frame_count == r.frame_count
		&& l.graphics_name == r.graphics_name
		&& l.message_stretch == r.message_stretch
		&& l.font_id == r.font_id
		&& l.switches == r.switches
		&& l.variables == r.variables
		&& l.message_transparent == r.message_transparent
		&& l.message_position == r.message_position
		&& l.message_prevent_overlap == r.message_prevent_overlap
		&& l.message_continue_events == r.message_continue_events
		&& l.face_name == r.face_name
		&& l.face_id == r.face_id
		&& l.face_right == r.face_right
		&& l.face_flip == r.face_flip
		&& l.event_message_active == r.event_message_active
		&& l.music_stopping == r.music_stopping
		&& l.title_music == r.title_music
		&& l.battle_music == r.battle_music
		&& l.battle_end_music == r.battle_end_music
		&& l.inn_music == r.inn_music
		&& l.current_music == r.current_music
		&& l.before_vehicle_music == r.before_vehicle_music
		&& l.before_battle_music == r.before_battle_music
		&& l.stored_music == r.stored_music
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
		&& l.teleport_allowed == r.teleport_allowed
		&& l.escape_allowed == r.escape_allowed
		&& l.save_allowed == r.save_allowed
		&& l.menu_allowed == r.menu_allowed
		&& l.background == r.background
		&& l.save_count == r.save_count
		&& l.save_slot == r.save_slot
		&& l.atb_mode == r.atb_mode;
	}

	inline bool operator!=(const SaveSystem& l, const SaveSystem& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveSystem& obj);

	template <> struct ReflectStruct<SaveSystem> {
		using type_t = SaveSystem;
		static constexpr const auto& name = "SaveSystem";
	};
	// The current Scene for RPG_RT. Legacy field only used by RPG_RT and not by EasyRPG Player. Savegames always have a scene of 5 (filemenu).
	template <> struct ReflectMember<SaveSystem,int32_t,&SaveSystem::scene> {
		using struct_t = SaveSystem;
		using type_t = int32_t;
		static constexpr const auto& name = "scene";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,int32_t,&SaveSystem::frame_count> {
		using struct_t = SaveSystem;
		using type_t = int32_t;
		static constexpr const auto& name = "frame_count";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// string
	template <> struct ReflectMember<SaveSystem,std::string,&SaveSystem::graphics_name> {
		using struct_t = SaveSystem;
		using type_t = std::string;
		static constexpr const auto& name = "graphics_name";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<SaveSystem,int32_t,&SaveSystem::message_stretch> {
		using struct_t = SaveSystem;
		using type_t = int32_t;
		static constexpr const auto& name = "message_stretch";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<SaveSystem,int32_t,&SaveSystem::font_id> {
		using struct_t = SaveSystem;
		using type_t = int32_t;
		static constexpr const auto& name = "font_id";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveSystem,std::vector<bool>,&SaveSystem::switches> {
		using struct_t = SaveSystem;
		using type_t = std::vector<bool>;
		static constexpr const auto& name = "switches";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,std::vector<int32_t>,&SaveSystem::variables> {
		using struct_t = SaveSystem;
		using type_t = std::vector<int32_t>;
		static constexpr const auto& name = "variables";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,int32_t,&SaveSystem::message_transparent> {
		using struct_t = SaveSystem;
		using type_t = int32_t;
		static constexpr const auto& name = "message_transparent";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveSystem,int32_t,&SaveSystem::message_position> {
		using struct_t = SaveSystem;
		using type_t = int32_t;
		static constexpr const auto& name = "message_position";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveSystem,int32_t,&SaveSystem::message_prevent_overlap> {
		using struct_t = SaveSystem;
		using type_t = int32_t;
		static constexpr const auto& name = "message_prevent_overlap";
		static constexpr const int id = 0x2B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveSystem,int32_t,&SaveSystem::message_continue_events> {
		using struct_t = SaveSystem;
		using type_t = int32_t;
		static constexpr const auto& name = "message_continue_events";
		static constexpr const int id = 0x2C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveSystem,std::string,&SaveSystem::face_name> {
		using struct_t = SaveSystem;
		using type_t = std::string;
		static constexpr const auto& name = "face_name";
		static constexpr const int id = 0x33;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveSystem,int32_t,&SaveSystem::face_id> {
		using struct_t = SaveSystem;
		using type_t = int32_t;
		static constexpr const auto& name = "face_id";
		static constexpr const int id = 0x34;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// bool
	template <> struct ReflectMember<SaveSystem,bool,&SaveSystem::face_right> {
		using struct_t = SaveSystem;
		using type_t = bool;
		static constexpr const auto& name = "face_right";
		static constexpr const int id = 0x35;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// bool
	template <> struct ReflectMember<SaveSystem,bool,&SaveSystem::face_flip> {
		using struct_t = SaveSystem;
		using type_t = bool;
		static constexpr const auto& name = "face_flip";
		static constexpr const int id = 0x36;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// A flag set by RPG_RT when a message is spawned by ShowMessage; ShowChoices; or ShowNumberInput and cleared when message spawned for any other reason.
	template <> struct ReflectMember<SaveSystem,bool,&SaveSystem::event_message_active> {
		using struct_t = SaveSystem;
		using type_t = bool;
		static constexpr const auto& name = "event_message_active";
		static constexpr const int id = 0x37;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Music is being faded out or had been stopped (Play music with the same music as currently playing will restart the music when this flag is set)
	template <> struct ReflectMember<SaveSystem,bool,&SaveSystem::music_stopping> {
		using struct_t = SaveSystem;
		using type_t = bool;
		static constexpr const auto& name = "music_stopping";
		static constexpr const int id = 0x3D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Music,&SaveSystem::title_music> {
		using struct_t = SaveSystem;
		using type_t = Music;
		static constexpr const auto& name = "title_music";
		static constexpr const int id = 0x47;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Music,&SaveSystem::battle_music> {
		using struct_t = SaveSystem;
		using type_t = Music;
		static constexpr const auto& name = "battle_music";
		static constexpr const int id = 0x48;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Music,&SaveSystem::battle_end_music> {
		using struct_t = SaveSystem;
		using type_t = Music;
		static constexpr const auto& name = "battle_end_music";
		static constexpr const int id = 0x49;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Music,&SaveSystem::inn_music> {
		using struct_t = SaveSystem;
		using type_t = Music;
		static constexpr const auto& name = "inn_music";
		static constexpr const int id = 0x4A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Music,&SaveSystem::current_music> {
		using struct_t = SaveSystem;
		using type_t = Music;
		static constexpr const auto& name = "current_music";
		static constexpr const int id = 0x4B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Music,&SaveSystem::before_vehicle_music> {
		using struct_t = SaveSystem;
		using type_t = Music;
		static constexpr const auto& name = "before_vehicle_music";
		static constexpr const int id = 0x4C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Music,&SaveSystem::before_battle_music> {
		using struct_t = SaveSystem;
		using type_t = Music;
		static constexpr const auto& name = "before_battle_music";
		static constexpr const int id = 0x4D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Music,&SaveSystem::stored_music> {
		using struct_t = SaveSystem;
		using type_t = Music;
		static constexpr const auto& name = "stored_music";
		static constexpr const int id = 0x4E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Music,&SaveSystem::boat_music> {
		using struct_t = SaveSystem;
		using type_t = Music;
		static constexpr const auto& name = "boat_music";
		static constexpr const int id = 0x4F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Music,&SaveSystem::ship_music> {
		using struct_t = SaveSystem;
		using type_t = Music;
		static constexpr const auto& name = "ship_music";
		static constexpr const int id = 0x50;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Music,&SaveSystem::airship_music> {
		using struct_t = SaveSystem;
		using type_t = Music;
		static constexpr const auto& name = "airship_music";
		static constexpr const int id = 0x51;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Music,&SaveSystem::gameover_music> {
		using struct_t = SaveSystem;
		using type_t = Music;
		static constexpr const auto& name = "gameover_music";
		static constexpr const int id = 0x52;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Sound,&SaveSystem::cursor_se> {
		using struct_t = SaveSystem;
		using type_t = Sound;
		static constexpr const auto& name = "cursor_se";
		static constexpr const int id = 0x5B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Sound,&SaveSystem::decision_se> {
		using struct_t = SaveSystem;
		using type_t = Sound;
		static constexpr const auto& name = "decision_se";
		static constexpr const int id = 0x5C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Sound,&SaveSystem::cancel_se> {
		using struct_t = SaveSystem;
		using type_t = Sound;
		static constexpr const auto& name = "cancel_se";
		static constexpr const int id = 0x5D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Sound,&SaveSystem::buzzer_se> {
		using struct_t = SaveSystem;
		using type_t = Sound;
		static constexpr const auto& name = "buzzer_se";
		static constexpr const int id = 0x5E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Sound,&SaveSystem::battle_se> {
		using struct_t = SaveSystem;
		using type_t = Sound;
		static constexpr const auto& name = "battle_se";
		static constexpr const int id = 0x5F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Sound,&SaveSystem::escape_se> {
		using struct_t = SaveSystem;
		using type_t = Sound;
		static constexpr const auto& name = "escape_se";
		static constexpr const int id = 0x60;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Sound,&SaveSystem::enemy_attack_se> {
		using struct_t = SaveSystem;
		using type_t = Sound;
		static constexpr const auto& name = "enemy_attack_se";
		static constexpr const int id = 0x61;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Sound,&SaveSystem::enemy_damaged_se> {
		using struct_t = SaveSystem;
		using type_t = Sound;
		static constexpr const auto& name = "enemy_damaged_se";
		static constexpr const int id = 0x62;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Sound,&SaveSystem::actor_damaged_se> {
		using struct_t = SaveSystem;
		using type_t = Sound;
		static constexpr const auto& name = "actor_damaged_se";
		static constexpr const int id = 0x63;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Sound,&SaveSystem::dodge_se> {
		using struct_t = SaveSystem;
		using type_t = Sound;
		static constexpr const auto& name = "dodge_se";
		static constexpr const int id = 0x64;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Sound,&SaveSystem::enemy_death_se> {
		using struct_t = SaveSystem;
		using type_t = Sound;
		static constexpr const auto& name = "enemy_death_se";
		static constexpr const int id = 0x65;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,Sound,&SaveSystem::item_se> {
		using struct_t = SaveSystem;
		using type_t = Sound;
		static constexpr const auto& name = "item_se";
		static constexpr const int id = 0x66;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,int8_t,&SaveSystem::transition_out> {
		using struct_t = SaveSystem;
		using type_t = int8_t;
		static constexpr const auto& name = "transition_out";
		static constexpr const int id = 0x6F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,int8_t,&SaveSystem::transition_in> {
		using struct_t = SaveSystem;
		using type_t = int8_t;
		static constexpr const auto& name = "transition_in";
		static constexpr const int id = 0x70;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,int8_t,&SaveSystem::battle_start_fadeout> {
		using struct_t = SaveSystem;
		using type_t = int8_t;
		static constexpr const auto& name = "battle_start_fadeout";
		static constexpr const int id = 0x71;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,int8_t,&SaveSystem::battle_start_fadein> {
		using struct_t = SaveSystem;
		using type_t = int8_t;
		static constexpr const auto& name = "battle_start_fadein";
		static constexpr const int id = 0x72;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,int8_t,&SaveSystem::battle_end_fadeout> {
		using struct_t = SaveSystem;
		using type_t = int8_t;
		static constexpr const auto& name = "battle_end_fadeout";
		static constexpr const int id = 0x73;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,int8_t,&SaveSystem::battle_end_fadein> {
		using struct_t = SaveSystem;
		using type_t = int8_t;
		static constexpr const auto& name = "battle_end_fadein";
		static constexpr const int id = 0x74;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveSystem,bool,&SaveSystem::teleport_allowed> {
		using struct_t = SaveSystem;
		using type_t = bool;
		static constexpr const auto& name = "teleport_allowed";
		static constexpr const int id = 0x79;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveSystem,bool,&SaveSystem::escape_allowed> {
		using struct_t = SaveSystem;
		using type_t = bool;
		static constexpr const auto& name = "escape_allowed";
		static constexpr const int id = 0x7A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveSystem,bool,&SaveSystem::save_allowed> {
		using struct_t = SaveSystem;
		using type_t = bool;
		static constexpr const auto& name = "save_allowed";
		static constexpr const int id = 0x7B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveSystem,bool,&SaveSystem::menu_allowed> {
		using struct_t = SaveSystem;
		using type_t = bool;
		static constexpr const auto& name = "menu_allowed";
		static constexpr const int id = 0x7C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// string
	template <> struct ReflectMember<SaveSystem,std::string,&SaveSystem::background> {
		using struct_t = SaveSystem;
		using type_t = std::string;
		static constexpr const auto& name = "background";
		static constexpr const int id = 0x7D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveSystem,int32_t,&SaveSystem::save_count> {
		using struct_t = SaveSystem;
		using type_t = int32_t;
		static constexpr const auto& name = "save_count";
		static constexpr const int id = 0x83;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveSystem,int32_t,&SaveSystem::save_slot> {
		using struct_t = SaveSystem;
		using type_t = int32_t;
		static constexpr const auto& name = "save_slot";
		static constexpr const int id = 0x84;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ATB mode of RPG 2003 battle system.
	template <> struct ReflectMember<SaveSystem,int32_t,&SaveSystem::atb_mode> {
		using struct_t = SaveSystem;
		using type_t = int32_t;
		static constexpr const auto& name = "atb_mode";
		static constexpr const int id = 0x8C;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,SaveSystem>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.scene, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, scene)());
		v(s, s.frame_count, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, frame_count)());
		v(s, s.graphics_name, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, graphics_name)());
		v(s, s.message_stretch, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, message_stretch)());
		v(s, s.font_id, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, font_id)());
		v(s, s.switches, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, switches)());
		v(s, s.variables, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, variables)());
		v(s, s.message_transparent, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, message_transparent)());
		v(s, s.message_position, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, message_position)());
		v(s, s.message_prevent_overlap, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, message_prevent_overlap)());
		v(s, s.message_continue_events, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, message_continue_events)());
		v(s, s.face_name, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, face_name)());
		v(s, s.face_id, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, face_id)());
		v(s, s.face_right, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, face_right)());
		v(s, s.face_flip, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, face_flip)());
		v(s, s.event_message_active, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, event_message_active)());
		v(s, s.music_stopping, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, music_stopping)());
		v(s, s.title_music, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, title_music)());
		ForEachMember(s.title_music, v);
		v(s, s.battle_music, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, battle_music)());
		ForEachMember(s.battle_music, v);
		v(s, s.battle_end_music, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, battle_end_music)());
		ForEachMember(s.battle_end_music, v);
		v(s, s.inn_music, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, inn_music)());
		ForEachMember(s.inn_music, v);
		v(s, s.current_music, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, current_music)());
		ForEachMember(s.current_music, v);
		v(s, s.before_vehicle_music, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, before_vehicle_music)());
		ForEachMember(s.before_vehicle_music, v);
		v(s, s.before_battle_music, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, before_battle_music)());
		ForEachMember(s.before_battle_music, v);
		v(s, s.stored_music, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, stored_music)());
		ForEachMember(s.stored_music, v);
		v(s, s.boat_music, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, boat_music)());
		ForEachMember(s.boat_music, v);
		v(s, s.ship_music, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, ship_music)());
		ForEachMember(s.ship_music, v);
		v(s, s.airship_music, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, airship_music)());
		ForEachMember(s.airship_music, v);
		v(s, s.gameover_music, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, gameover_music)());
		ForEachMember(s.gameover_music, v);
		v(s, s.cursor_se, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, cursor_se)());
		ForEachMember(s.cursor_se, v);
		v(s, s.decision_se, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, decision_se)());
		ForEachMember(s.decision_se, v);
		v(s, s.cancel_se, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, cancel_se)());
		ForEachMember(s.cancel_se, v);
		v(s, s.buzzer_se, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, buzzer_se)());
		ForEachMember(s.buzzer_se, v);
		v(s, s.battle_se, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, battle_se)());
		ForEachMember(s.battle_se, v);
		v(s, s.escape_se, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, escape_se)());
		ForEachMember(s.escape_se, v);
		v(s, s.enemy_attack_se, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, enemy_attack_se)());
		ForEachMember(s.enemy_attack_se, v);
		v(s, s.enemy_damaged_se, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, enemy_damaged_se)());
		ForEachMember(s.enemy_damaged_se, v);
		v(s, s.actor_damaged_se, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, actor_damaged_se)());
		ForEachMember(s.actor_damaged_se, v);
		v(s, s.dodge_se, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, dodge_se)());
		ForEachMember(s.dodge_se, v);
		v(s, s.enemy_death_se, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, enemy_death_se)());
		ForEachMember(s.enemy_death_se, v);
		v(s, s.item_se, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, item_se)());
		ForEachMember(s.item_se, v);
		v(s, s.transition_out, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, transition_out)());
		v(s, s.transition_in, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, transition_in)());
		v(s, s.battle_start_fadeout, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, battle_start_fadeout)());
		v(s, s.battle_start_fadein, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, battle_start_fadein)());
		v(s, s.battle_end_fadeout, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, battle_end_fadeout)());
		v(s, s.battle_end_fadein, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, battle_end_fadein)());
		v(s, s.teleport_allowed, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, teleport_allowed)());
		v(s, s.escape_allowed, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, escape_allowed)());
		v(s, s.save_allowed, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, save_allowed)());
		v(s, s.menu_allowed, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, menu_allowed)());
		v(s, s.background, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, background)());
		v(s, s.save_count, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, save_count)());
		v(s, s.save_slot, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, save_slot)());
		v(s, s.atb_mode, LCF_REFL_S(SaveSystem)(), LCF_REFL_M(SaveSystem, atb_mode)());
	}

} // namespace rpg
} // namespace lcf

#endif
