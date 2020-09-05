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

#ifndef LCF_RPG_SAVESCREEN_H
#define LCF_RPG_SAVESCREEN_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveScreen class.
 */
namespace lcf {
namespace rpg {
	class SaveScreen {
	public:
		int32_t tint_finish_red = 100;
		int32_t tint_finish_green = 100;
		int32_t tint_finish_blue = 100;
		int32_t tint_finish_sat = 100;
		double tint_current_red = 100.0;
		double tint_current_green = 100.0;
		double tint_current_blue = 100.0;
		double tint_current_sat = 100.0;
		int32_t tint_time_left = 0;
		bool flash_continuous = false;
		int32_t flash_red = 0;
		int32_t flash_green = 0;
		int32_t flash_blue = 0;
		double flash_current_level = 0.0;
		int32_t flash_time_left = 0;
		bool shake_continuous = false;
		int32_t shake_strength = 0;
		int32_t shake_speed = 0;
		int32_t shake_position = 0;
		int32_t shake_position_y = 0;
		int32_t shake_time_left = 0;
		int32_t pan_x = 0;
		int32_t pan_y = 0;
		int32_t battleanim_id = 0;
		int32_t battleanim_target = 0;
		int32_t battleanim_frame = 0;
		bool battleanim_active = false;
		bool battleanim_global = false;
		int32_t weather = 0;
		int32_t weather_strength = 0;
	};

	inline bool operator==(const SaveScreen& l, const SaveScreen& r) {
		return l.tint_finish_red == r.tint_finish_red
		&& l.tint_finish_green == r.tint_finish_green
		&& l.tint_finish_blue == r.tint_finish_blue
		&& l.tint_finish_sat == r.tint_finish_sat
		&& l.tint_current_red == r.tint_current_red
		&& l.tint_current_green == r.tint_current_green
		&& l.tint_current_blue == r.tint_current_blue
		&& l.tint_current_sat == r.tint_current_sat
		&& l.tint_time_left == r.tint_time_left
		&& l.flash_continuous == r.flash_continuous
		&& l.flash_red == r.flash_red
		&& l.flash_green == r.flash_green
		&& l.flash_blue == r.flash_blue
		&& l.flash_current_level == r.flash_current_level
		&& l.flash_time_left == r.flash_time_left
		&& l.shake_continuous == r.shake_continuous
		&& l.shake_strength == r.shake_strength
		&& l.shake_speed == r.shake_speed
		&& l.shake_position == r.shake_position
		&& l.shake_position_y == r.shake_position_y
		&& l.shake_time_left == r.shake_time_left
		&& l.pan_x == r.pan_x
		&& l.pan_y == r.pan_y
		&& l.battleanim_id == r.battleanim_id
		&& l.battleanim_target == r.battleanim_target
		&& l.battleanim_frame == r.battleanim_frame
		&& l.battleanim_active == r.battleanim_active
		&& l.battleanim_global == r.battleanim_global
		&& l.weather == r.weather
		&& l.weather_strength == r.weather_strength;
	}

	inline bool operator!=(const SaveScreen& l, const SaveScreen& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveScreen& obj);

	template <> struct ReflectStruct<SaveScreen> {
		using type_t = SaveScreen;
		static constexpr const auto& name = "SaveScreen";
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::tint_finish_red> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "tint_finish_red";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::tint_finish_green> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "tint_finish_green";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::tint_finish_blue> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "tint_finish_blue";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::tint_finish_sat> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "tint_finish_sat";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// double
	template <> struct ReflectMember<SaveScreen,double,&SaveScreen::tint_current_red> {
		using struct_t = SaveScreen;
		using type_t = double;
		static constexpr const auto& name = "tint_current_red";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// double
	template <> struct ReflectMember<SaveScreen,double,&SaveScreen::tint_current_green> {
		using struct_t = SaveScreen;
		using type_t = double;
		static constexpr const auto& name = "tint_current_green";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// double
	template <> struct ReflectMember<SaveScreen,double,&SaveScreen::tint_current_blue> {
		using struct_t = SaveScreen;
		using type_t = double;
		static constexpr const auto& name = "tint_current_blue";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// double
	template <> struct ReflectMember<SaveScreen,double,&SaveScreen::tint_current_sat> {
		using struct_t = SaveScreen;
		using type_t = double;
		static constexpr const auto& name = "tint_current_sat";
		static constexpr const int id = 0x0E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::tint_time_left> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "tint_time_left";
		static constexpr const int id = 0x0F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,bool,&SaveScreen::flash_continuous> {
		using struct_t = SaveScreen;
		using type_t = bool;
		static constexpr const auto& name = "flash_continuous";
		static constexpr const int id = 0x14;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::flash_red> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "flash_red";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::flash_green> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "flash_green";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::flash_blue> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "flash_blue";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// double
	template <> struct ReflectMember<SaveScreen,double,&SaveScreen::flash_current_level> {
		using struct_t = SaveScreen;
		using type_t = double;
		static constexpr const auto& name = "flash_current_level";
		static constexpr const int id = 0x18;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::flash_time_left> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "flash_time_left";
		static constexpr const int id = 0x19;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,bool,&SaveScreen::shake_continuous> {
		using struct_t = SaveScreen;
		using type_t = bool;
		static constexpr const auto& name = "shake_continuous";
		static constexpr const int id = 0x1E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::shake_strength> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "shake_strength";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::shake_speed> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "shake_speed";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::shake_position> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "shake_position";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int - unused
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::shake_position_y> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "shake_position_y";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::shake_time_left> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "shake_time_left";
		static constexpr const int id = 0x23;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::pan_x> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "pan_x";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::pan_y> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "pan_y";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int - battle animation ID
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::battleanim_id> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "battleanim_id";
		static constexpr const int id = 0x2B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int - battle animation target
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::battleanim_target> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "battleanim_target";
		static constexpr const int id = 0x2C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int - frame count - Ref<Animation>? FIXME
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::battleanim_frame> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "battleanim_frame";
		static constexpr const int id = 0x2D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// There is currently a battle animation playing
	template <> struct ReflectMember<SaveScreen,bool,&SaveScreen::battleanim_active> {
		using struct_t = SaveScreen;
		using type_t = bool;
		static constexpr const auto& name = "battleanim_active";
		static constexpr const int id = 0x2E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int - battle animation global scope
	template <> struct ReflectMember<SaveScreen,bool,&SaveScreen::battleanim_global> {
		using struct_t = SaveScreen;
		using type_t = bool;
		static constexpr const auto& name = "battleanim_global";
		static constexpr const int id = 0x2F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::weather> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "weather";
		static constexpr const int id = 0x30;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveScreen,int32_t,&SaveScreen::weather_strength> {
		using struct_t = SaveScreen;
		using type_t = int32_t;
		static constexpr const auto& name = "weather_strength";
		static constexpr const int id = 0x31;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,SaveScreen>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.tint_finish_red, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, tint_finish_red)());
		v(s, s.tint_finish_green, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, tint_finish_green)());
		v(s, s.tint_finish_blue, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, tint_finish_blue)());
		v(s, s.tint_finish_sat, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, tint_finish_sat)());
		v(s, s.tint_current_red, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, tint_current_red)());
		v(s, s.tint_current_green, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, tint_current_green)());
		v(s, s.tint_current_blue, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, tint_current_blue)());
		v(s, s.tint_current_sat, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, tint_current_sat)());
		v(s, s.tint_time_left, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, tint_time_left)());
		v(s, s.flash_continuous, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, flash_continuous)());
		v(s, s.flash_red, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, flash_red)());
		v(s, s.flash_green, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, flash_green)());
		v(s, s.flash_blue, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, flash_blue)());
		v(s, s.flash_current_level, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, flash_current_level)());
		v(s, s.flash_time_left, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, flash_time_left)());
		v(s, s.shake_continuous, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, shake_continuous)());
		v(s, s.shake_strength, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, shake_strength)());
		v(s, s.shake_speed, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, shake_speed)());
		v(s, s.shake_position, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, shake_position)());
		v(s, s.shake_position_y, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, shake_position_y)());
		v(s, s.shake_time_left, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, shake_time_left)());
		v(s, s.pan_x, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, pan_x)());
		v(s, s.pan_y, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, pan_y)());
		v(s, s.battleanim_id, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, battleanim_id)());
		v(s, s.battleanim_target, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, battleanim_target)());
		v(s, s.battleanim_frame, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, battleanim_frame)());
		v(s, s.battleanim_active, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, battleanim_active)());
		v(s, s.battleanim_global, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, battleanim_global)());
		v(s, s.weather, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, weather)());
		v(s, s.weather_strength, LCF_REFL_S(SaveScreen)(), LCF_REFL_M(SaveScreen, weather_strength)());
	}

} // namespace rpg
} // namespace lcf

#endif
