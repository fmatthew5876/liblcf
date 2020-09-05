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

#ifndef LCF_RPG_SAVEPARTYLOCATION_H
#define LCF_RPG_SAVEPARTYLOCATION_H

#include <lcf/rpg/reflect.h>

// Headers
#include "lcf/rpg/savemapeventbase.h"
#include <stdint.h>
#include "lcf/enum_tags.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::SavePartyLocation class.
 */
namespace lcf {
namespace rpg {
	class SavePartyLocation : public SaveMapEventBase {
	public:
		// Equal to 9 tiles in 1/16th pixels
		static constexpr int kPanXDefault = 9 * 256;
		// Equal to 7 tiles in 1/16th pixels
		static constexpr int kPanYDefault = 7 * 256;
		// Frame speed in 1/16th pixels
		static constexpr int kPanSpeedDefault = 2 << 3;

		enum VehicleType {
			VehicleType_none = 0,
			VehicleType_skiff = 1,
			VehicleType_ship = 2,
			VehicleType_airship = 3
		};
		static constexpr auto kVehicleTypeTags = lcf::makeEnumTags<VehicleType>(
			"none",
			"skiff",
			"ship",
			"airship"
		);
		enum PanState {
			PanState_fixed = 0,
			PanState_follow = 1
		};
		static constexpr auto kPanStateTags = lcf::makeEnumTags<PanState>(
			"fixed",
			"follow"
		);

		bool boarding = false;
		bool aboard = false;
		int32_t vehicle = 0;
		bool unboarding = false;
		int32_t preboard_move_speed = 4;
		bool menu_calling = false;
		int32_t pan_state = 1;
		int32_t pan_current_x = kPanXDefault;
		int32_t pan_current_y = kPanYDefault;
		int32_t pan_finish_x = kPanXDefault;
		int32_t pan_finish_y = kPanYDefault;
		int32_t pan_speed = kPanSpeedDefault;
		int32_t encounter_steps = 0;
		bool encounter_calling = false;
		int32_t map_save_count = 0;
		int32_t database_save_count = 0;
	};
	inline std::ostream& operator<<(std::ostream& os, SavePartyLocation::VehicleType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, SavePartyLocation::PanState code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const SavePartyLocation& l, const SavePartyLocation& r) {
		return l.boarding == r.boarding
		&& l.aboard == r.aboard
		&& l.vehicle == r.vehicle
		&& l.unboarding == r.unboarding
		&& l.preboard_move_speed == r.preboard_move_speed
		&& l.menu_calling == r.menu_calling
		&& l.pan_state == r.pan_state
		&& l.pan_current_x == r.pan_current_x
		&& l.pan_current_y == r.pan_current_y
		&& l.pan_finish_x == r.pan_finish_x
		&& l.pan_finish_y == r.pan_finish_y
		&& l.pan_speed == r.pan_speed
		&& l.encounter_steps == r.encounter_steps
		&& l.encounter_calling == r.encounter_calling
		&& l.map_save_count == r.map_save_count
		&& l.database_save_count == r.database_save_count;
	}

	inline bool operator!=(const SavePartyLocation& l, const SavePartyLocation& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SavePartyLocation& obj);

	template <> struct ReflectStruct<SavePartyLocation> {
		using type_t = SavePartyLocation;
		static constexpr const auto& = "SavePartyLocation";
	};
	// 
	template <> struct ReflectMember<SavePartyLocation,bool,&SavePartyLocation::boarding> {
		using struct_t = SavePartyLocation;
		using type_t = bool;
		static constexpr const auto& name[] = "boarding";
		static constexpr const int id = 0x65;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SavePartyLocation,bool,&SavePartyLocation::aboard> {
		using struct_t = SavePartyLocation;
		using type_t = bool;
		static constexpr const auto& name[] = "aboard";
		static constexpr const int id = 0x66;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Vehicle in use
	template <> struct ReflectMember<SavePartyLocation,int32_t,&SavePartyLocation::vehicle> {
		using struct_t = SavePartyLocation;
		using type_t = int32_t;
		static constexpr const auto& name[] = "vehicle";
		static constexpr const int id = 0x67;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SavePartyLocation,bool,&SavePartyLocation::unboarding> {
		using struct_t = SavePartyLocation;
		using type_t = bool;
		static constexpr const auto& name[] = "unboarding";
		static constexpr const int id = 0x68;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Move speed before the party boarded the vehicle
	template <> struct ReflectMember<SavePartyLocation,int32_t,&SavePartyLocation::preboard_move_speed> {
		using struct_t = SavePartyLocation;
		using type_t = int32_t;
		static constexpr const auto& name[] = "preboard_move_speed";
		static constexpr const int id = 0x69;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag which briefly is true if the player presses ESC. At the right place in handling each frame's activities for the player; the code checks whether this flag is set and calls the menu; however there are several conditions which would cancel this flag and instead process another higher-priority action; such as when an encounter takes place during the same frame.
	template <> struct ReflectMember<SavePartyLocation,bool,&SavePartyLocation::menu_calling> {
		using struct_t = SavePartyLocation;
		using type_t = bool;
		static constexpr const auto& name[] = "menu_calling";
		static constexpr const int id = 0x6C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 0: screen is fixed; 1: screen moves with player.
	template <> struct ReflectMember<SavePartyLocation,int32_t,&SavePartyLocation::pan_state> {
		using struct_t = SavePartyLocation;
		using type_t = int32_t;
		static constexpr const auto& name[] = "pan_state";
		static constexpr const int id = 0x6F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Number of 1/16 pixels to the left of player
	template <> struct ReflectMember<SavePartyLocation,int32_t,&SavePartyLocation::pan_current_x> {
		using struct_t = SavePartyLocation;
		using type_t = int32_t;
		static constexpr const auto& name[] = "pan_current_x";
		static constexpr const int id = 0x70;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Number of 1/16 pixels above the player
	template <> struct ReflectMember<SavePartyLocation,int32_t,&SavePartyLocation::pan_current_y> {
		using struct_t = SavePartyLocation;
		using type_t = int32_t;
		static constexpr const auto& name[] = "pan_current_y";
		static constexpr const int id = 0x71;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Number of 1/16 pixels to the left of player when current scroll finishes
	template <> struct ReflectMember<SavePartyLocation,int32_t,&SavePartyLocation::pan_finish_x> {
		using struct_t = SavePartyLocation;
		using type_t = int32_t;
		static constexpr const auto& name[] = "pan_finish_x";
		static constexpr const int id = 0x72;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Number of 1/16 pixels above the player when current scroll finishes.
	template <> struct ReflectMember<SavePartyLocation,int32_t,&SavePartyLocation::pan_finish_y> {
		using struct_t = SavePartyLocation;
		using type_t = int32_t;
		static constexpr const auto& name[] = "pan_finish_y";
		static constexpr const int id = 0x73;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// speed in the scrolls of the screen - shown in sixteenth pixels.
	template <> struct ReflectMember<SavePartyLocation,int32_t,&SavePartyLocation::pan_speed> {
		using struct_t = SavePartyLocation;
		using type_t = int32_t;
		static constexpr const auto& name[] = "pan_speed";
		static constexpr const int id = 0x79;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int: sum of terrain.encounter_rate for each step
	template <> struct ReflectMember<SavePartyLocation,int32_t,&SavePartyLocation::encounter_steps> {
		using struct_t = SavePartyLocation;
		using type_t = int32_t;
		static constexpr const auto& name[] = "encounter_steps";
		static constexpr const int id = 0x7C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Similar to 0x6C - is used to signal a different piece of code that an encounter is to be triggered; which may be cancelled by other conditions such as the player starting to interact with an event during the same frame.
	template <> struct ReflectMember<SavePartyLocation,bool,&SavePartyLocation::encounter_calling> {
		using struct_t = SavePartyLocation;
		using type_t = bool;
		static constexpr const auto& name[] = "encounter_calling";
		static constexpr const int id = 0x7D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Mirrors save_count of current map. On mismatch events are not continued after load.
	template <> struct ReflectMember<SavePartyLocation,int32_t,&SavePartyLocation::map_save_count> {
		using struct_t = SavePartyLocation;
		using type_t = int32_t;
		static constexpr const auto& name[] = "map_save_count";
		static constexpr const int id = 0x83;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SavePartyLocation,int32_t,&SavePartyLocation::database_save_count> {
		using struct_t = SavePartyLocation;
		using type_t = int32_t;
		static constexpr const auto& name[] = "database_save_count";
		static constexpr const int id = 0x84;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
