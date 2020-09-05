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

#ifndef LCF_RPG_SAVEPICTURE_H
#define LCF_RPG_SAVEPICTURE_H

#include <lcf/rpg/reflect.h>

// Headers
#include <array>
#include <stdint.h>
#include <string>
#include "lcf/enum_tags.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::SavePicture class.
 */
namespace lcf {
namespace rpg {
	class SavePicture {
	public:
		enum Effect {
			Effect_none = 0,
			Effect_rotation = 1,
			Effect_wave = 2
		};
		static constexpr auto kEffectTags = lcf::makeEnumTags<Effect>(
			"none",
			"rotation",
			"wave"
		);
		enum MapLayer {
			MapLayer_none = 0,
			MapLayer_parallax = 1,
			MapLayer_tilemap_below = 2,
			MapLayer_events_below = 3,
			MapLayer_events_same_as_player = 4,
			MapLayer_tilemap_above = 5,
			MapLayer_events_above = 6,
			MapLayer_weather = 7,
			MapLayer_animations = 8,
			MapLayer_windows = 9,
			MapLayer_timers = 10
		};
		static constexpr auto kMapLayerTags = lcf::makeEnumTags<MapLayer>(
			"none",
			"parallax",
			"tilemap_below",
			"events_below",
			"events_same_as_player",
			"tilemap_above",
			"events_above",
			"weather",
			"animations",
			"windows",
			"timers"
		);
		enum BattleLayer {
			BattleLayer_none = 0,
			BattleLayer_background = 1,
			BattleLayer_battlers_and_animations = 2,
			BattleLayer_weather = 3,
			BattleLayer_windows_and_status = 4,
			BattleLayer_timers = 5
		};
		static constexpr auto kBattleLayerTags = lcf::makeEnumTags<BattleLayer>(
			"none",
			"background",
			"battlers_and_animations",
			"weather",
			"windows_and_status",
			"timers"
		);

		int ID = 0;
		std::string name;
		double start_x = 0.0;
		double start_y = 0.0;
		double current_x = 0.0;
		double current_y = 0.0;
		bool fixed_to_map = false;
		double current_magnify = 100.0;
		double current_top_trans = 0.0;
		bool use_transparent_color = false;
		double current_red = 100.0;
		double current_green = 100.0;
		double current_blue = 100.0;
		double current_sat = 100.0;
		int32_t effect_mode = 0;
		double current_effect_power = 0.0;
		double current_bot_trans = 0.0;
		int32_t spritesheet_cols = 1;
		int32_t spritesheet_rows = 1;
		int32_t spritesheet_frame = 0;
		int32_t spritesheet_speed = 0;
		int32_t frames = 0;
		bool spritesheet_play_once = false;
		int32_t map_layer = 7;
		int32_t battle_layer = 0;
		struct Flags {
			union {
				struct {
					bool erase_on_map_change;
					bool erase_on_battle_end;
					bool unused_bit;
					bool unused_bit2;
					bool affected_by_tint;
					bool affected_by_flash;
					bool affected_by_shake;
				};
				std::array<bool, 7> flags;
			};
			//TODO: Should try to switch to member initializers when we upgrade to VS2017.
			Flags() noexcept: erase_on_map_change(true), erase_on_battle_end(false), unused_bit(false), unused_bit2(false), affected_by_tint(false), affected_by_flash(true), affected_by_shake(true)
			{}
		} flags;
		double finish_x = 0.0;
		double finish_y = 0.0;
		int32_t finish_magnify = 100;
		int32_t finish_top_trans = 0;
		int32_t finish_bot_trans = 0;
		int32_t finish_red = 100;
		int32_t finish_green = 100;
		int32_t finish_blue = 100;
		int32_t finish_sat = 100;
		int32_t finish_effect_power = 0;
		int32_t time_left = 0;
		double current_rotation = 0.0;
		int32_t current_waver = 0;
	};
	inline std::ostream& operator<<(std::ostream& os, SavePicture::Effect code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, SavePicture::MapLayer code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, SavePicture::BattleLayer code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const SavePicture::Flags& l, const SavePicture::Flags& r) {
		return l.flags == r.flags;
	}

	inline bool operator!=(const SavePicture::Flags& l, const SavePicture::Flags& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SavePicture::Flags& obj);

	inline bool operator==(const SavePicture& l, const SavePicture& r) {
		return l.name == r.name
		&& l.start_x == r.start_x
		&& l.start_y == r.start_y
		&& l.current_x == r.current_x
		&& l.current_y == r.current_y
		&& l.fixed_to_map == r.fixed_to_map
		&& l.current_magnify == r.current_magnify
		&& l.current_top_trans == r.current_top_trans
		&& l.use_transparent_color == r.use_transparent_color
		&& l.current_red == r.current_red
		&& l.current_green == r.current_green
		&& l.current_blue == r.current_blue
		&& l.current_sat == r.current_sat
		&& l.effect_mode == r.effect_mode
		&& l.current_effect_power == r.current_effect_power
		&& l.current_bot_trans == r.current_bot_trans
		&& l.spritesheet_cols == r.spritesheet_cols
		&& l.spritesheet_rows == r.spritesheet_rows
		&& l.spritesheet_frame == r.spritesheet_frame
		&& l.spritesheet_speed == r.spritesheet_speed
		&& l.frames == r.frames
		&& l.spritesheet_play_once == r.spritesheet_play_once
		&& l.map_layer == r.map_layer
		&& l.battle_layer == r.battle_layer
		&& l.flags == r.flags
		&& l.finish_x == r.finish_x
		&& l.finish_y == r.finish_y
		&& l.finish_magnify == r.finish_magnify
		&& l.finish_top_trans == r.finish_top_trans
		&& l.finish_bot_trans == r.finish_bot_trans
		&& l.finish_red == r.finish_red
		&& l.finish_green == r.finish_green
		&& l.finish_blue == r.finish_blue
		&& l.finish_sat == r.finish_sat
		&& l.finish_effect_power == r.finish_effect_power
		&& l.time_left == r.time_left
		&& l.current_rotation == r.current_rotation
		&& l.current_waver == r.current_waver;
	}

	inline bool operator!=(const SavePicture& l, const SavePicture& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SavePicture& obj);

	template <> struct ReflectStruct<SavePicture> {
		using type_t = SavePicture;
		static constexpr const auto& name = "SavePicture";
	};
	// string
	template <> struct ReflectMember<SavePicture,std::string,&SavePicture::name> {
		using struct_t = SavePicture;
		using type_t = std::string;
		static constexpr const auto& name = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// X position where picture was originally shown
	template <> struct ReflectMember<SavePicture,double,&SavePicture::start_x> {
		using struct_t = SavePicture;
		using type_t = double;
		static constexpr const auto& name = "start_x";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Y position where picture was originally shown
	template <> struct ReflectMember<SavePicture,double,&SavePicture::start_y> {
		using struct_t = SavePicture;
		using type_t = double;
		static constexpr const auto& name = "start_y";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Current x position of picture
	template <> struct ReflectMember<SavePicture,double,&SavePicture::current_x> {
		using struct_t = SavePicture;
		using type_t = double;
		static constexpr const auto& name = "current_x";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Current y position of picture
	template <> struct ReflectMember<SavePicture,double,&SavePicture::current_y> {
		using struct_t = SavePicture;
		using type_t = double;
		static constexpr const auto& name = "current_y";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// If true; picture will scroll with map
	template <> struct ReflectMember<SavePicture,bool,&SavePicture::fixed_to_map> {
		using struct_t = SavePicture;
		using type_t = bool;
		static constexpr const auto& name = "fixed_to_map";
		static constexpr const int id = 0x06;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Current zoom level of picture.
	template <> struct ReflectMember<SavePicture,double,&SavePicture::current_magnify> {
		using struct_t = SavePicture;
		using type_t = double;
		static constexpr const auto& name = "current_magnify";
		static constexpr const int id = 0x07;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Current transparency of picture. In RPG2k3 < 1.12 affects only top half of picture.
	template <> struct ReflectMember<SavePicture,double,&SavePicture::current_top_trans> {
		using struct_t = SavePicture;
		using type_t = double;
		static constexpr const auto& name = "current_top_trans";
		static constexpr const int id = 0x08;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// If false; ignore the transparent color
	template <> struct ReflectMember<SavePicture,bool,&SavePicture::use_transparent_color> {
		using struct_t = SavePicture;
		using type_t = bool;
		static constexpr const auto& name = "use_transparent_color";
		static constexpr const int id = 0x09;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Current red tint
	template <> struct ReflectMember<SavePicture,double,&SavePicture::current_red> {
		using struct_t = SavePicture;
		using type_t = double;
		static constexpr const auto& name = "current_red";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Current green tint
	template <> struct ReflectMember<SavePicture,double,&SavePicture::current_green> {
		using struct_t = SavePicture;
		using type_t = double;
		static constexpr const auto& name = "current_green";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Current blue tint.
	template <> struct ReflectMember<SavePicture,double,&SavePicture::current_blue> {
		using struct_t = SavePicture;
		using type_t = double;
		static constexpr const auto& name = "current_blue";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Current saturation
	template <> struct ReflectMember<SavePicture,double,&SavePicture::current_sat> {
		using struct_t = SavePicture;
		using type_t = double;
		static constexpr const auto& name = "current_sat";
		static constexpr const int id = 0x0E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Which effect is active.
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::effect_mode> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "effect_mode";
		static constexpr const int id = 0x0F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// The current power of the active effect.
	template <> struct ReflectMember<SavePicture,double,&SavePicture::current_effect_power> {
		using struct_t = SavePicture;
		using type_t = double;
		static constexpr const auto& name = "current_effect_power";
		static constexpr const int id = 0x10;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Bottom half transparency. Only has an effect in RPG2k3 < 1.12.
	template <> struct ReflectMember<SavePicture,double,&SavePicture::current_bot_trans> {
		using struct_t = SavePicture;
		using type_t = double;
		static constexpr const auto& name = "current_bot_trans";
		static constexpr const int id = 0x12;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Spritesheet columns
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::spritesheet_cols> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "spritesheet_cols";
		static constexpr const int id = 0x13;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Spritesheet rows
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::spritesheet_rows> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "spritesheet_rows";
		static constexpr const int id = 0x14;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Current spritesheet frame
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::spritesheet_frame> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "spritesheet_frame";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Spritesheet speed (X frames per second)
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::spritesheet_speed> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "spritesheet_speed";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Frames since ShowPicture
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::frames> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "frames";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// True: Play once and destroy; False: Loop spritesheet
	template <> struct ReflectMember<SavePicture,bool,&SavePicture::spritesheet_play_once> {
		using struct_t = SavePicture;
		using type_t = bool;
		static constexpr const auto& name = "spritesheet_play_once";
		static constexpr const int id = 0x18;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Layer to show picture on at the map
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::map_layer> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "map_layer";
		static constexpr const int id = 0x19;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Layer to show picture on in battle
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::battle_layer> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "battle_layer";
		static constexpr const int id = 0x1A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Bitflag. Persists Map/Battle change/end; Affected by Shake/Flash/Tint
	template <> struct ReflectMember<SavePicture,SavePicture::Flags,&SavePicture::flags> {
		using struct_t = SavePicture;
		using type_t = SavePicture::Flags;
		static constexpr const auto& name = "flags";
		static constexpr const int id = 0x1B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Final X position to move picture to.
	template <> struct ReflectMember<SavePicture,double,&SavePicture::finish_x> {
		using struct_t = SavePicture;
		using type_t = double;
		static constexpr const auto& name = "finish_x";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Final Y position to move picture to.
	template <> struct ReflectMember<SavePicture,double,&SavePicture::finish_y> {
		using struct_t = SavePicture;
		using type_t = double;
		static constexpr const auto& name = "finish_y";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Final zoom level to animate picture to.
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::finish_magnify> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "finish_magnify";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Final top_trans level to animate picture.
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::finish_top_trans> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "finish_top_trans";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Final bot_trans level to animate picture.
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::finish_bot_trans> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "finish_bot_trans";
		static constexpr const int id = 0x23;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Final red tint to animate picture.
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::finish_red> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "finish_red";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Final green tint to animate picture.
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::finish_green> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "finish_green";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Final blue tint to animate picture.
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::finish_blue> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "finish_blue";
		static constexpr const int id = 0x2B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Final saturation to animate picture.
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::finish_sat> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "finish_sat";
		static constexpr const int id = 0x2C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Final power of the effect to animate picture.
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::finish_effect_power> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "finish_effect_power";
		static constexpr const int id = 0x2E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// How much time left in picture move / animation effects.
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::time_left> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "time_left";
		static constexpr const int id = 0x33;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// How much the picture is currently rotated.
	template <> struct ReflectMember<SavePicture,double,&SavePicture::current_rotation> {
		using struct_t = SavePicture;
		using type_t = double;
		static constexpr const auto& name = "current_rotation";
		static constexpr const int id = 0x34;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Current wave effect for picture.
	template <> struct ReflectMember<SavePicture,int32_t,&SavePicture::current_waver> {
		using struct_t = SavePicture;
		using type_t = int32_t;
		static constexpr const auto& name = "current_waver";
		static constexpr const int id = 0x35;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,SavePicture>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.name, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, name)());
		v(s, s.start_x, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, start_x)());
		v(s, s.start_y, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, start_y)());
		v(s, s.current_x, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, current_x)());
		v(s, s.current_y, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, current_y)());
		v(s, s.fixed_to_map, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, fixed_to_map)());
		v(s, s.current_magnify, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, current_magnify)());
		v(s, s.current_top_trans, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, current_top_trans)());
		v(s, s.use_transparent_color, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, use_transparent_color)());
		v(s, s.current_red, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, current_red)());
		v(s, s.current_green, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, current_green)());
		v(s, s.current_blue, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, current_blue)());
		v(s, s.current_sat, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, current_sat)());
		v(s, s.effect_mode, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, effect_mode)());
		v(s, s.current_effect_power, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, current_effect_power)());
		v(s, s.current_bot_trans, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, current_bot_trans)());
		v(s, s.spritesheet_cols, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, spritesheet_cols)());
		v(s, s.spritesheet_rows, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, spritesheet_rows)());
		v(s, s.spritesheet_frame, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, spritesheet_frame)());
		v(s, s.spritesheet_speed, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, spritesheet_speed)());
		v(s, s.frames, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, frames)());
		v(s, s.spritesheet_play_once, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, spritesheet_play_once)());
		v(s, s.map_layer, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, map_layer)());
		v(s, s.battle_layer, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, battle_layer)());
		v(s, s.flags, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, flags)());
		v(s, s.finish_x, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, finish_x)());
		v(s, s.finish_y, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, finish_y)());
		v(s, s.finish_magnify, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, finish_magnify)());
		v(s, s.finish_top_trans, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, finish_top_trans)());
		v(s, s.finish_bot_trans, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, finish_bot_trans)());
		v(s, s.finish_red, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, finish_red)());
		v(s, s.finish_green, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, finish_green)());
		v(s, s.finish_blue, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, finish_blue)());
		v(s, s.finish_sat, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, finish_sat)());
		v(s, s.finish_effect_power, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, finish_effect_power)());
		v(s, s.time_left, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, time_left)());
		v(s, s.current_rotation, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, current_rotation)());
		v(s, s.current_waver, LCF_REFL_S(SavePicture)(), LCF_REFL_M(SavePicture, current_waver)());
	}

} // namespace rpg
} // namespace lcf

#endif
