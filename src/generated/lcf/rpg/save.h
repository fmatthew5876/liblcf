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

#ifndef LCF_RPG_SAVE_H
#define LCF_RPG_SAVE_H

#include <lcf/rpg/reflect.h>

// Headers
#include <vector>
#include "lcf/rpg/saveactor.h"
#include "lcf/rpg/savecommonevent.h"
#include "lcf/rpg/saveeasyrpgdata.h"
#include "lcf/rpg/saveeventexecstate.h"
#include "lcf/rpg/saveinventory.h"
#include "lcf/rpg/savemapinfo.h"
#include "lcf/rpg/savepanorama.h"
#include "lcf/rpg/savepartylocation.h"
#include "lcf/rpg/savepicture.h"
#include "lcf/rpg/savescreen.h"
#include "lcf/rpg/savesystem.h"
#include "lcf/rpg/savetarget.h"
#include "lcf/rpg/savetitle.h"
#include "lcf/rpg/savevehiclelocation.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Save class.
 */
namespace lcf {
namespace rpg {
	class Save {
	public:
		void Setup();
		SaveTitle title;
		SaveSystem system;
		SaveScreen screen;
		std::vector<SavePicture> pictures;
		SavePartyLocation party_location;
		SaveVehicleLocation boat_location;
		SaveVehicleLocation ship_location;
		SaveVehicleLocation airship_location;
		std::vector<SaveActor> actors;
		SaveInventory inventory;
		std::vector<SaveTarget> targets;
		SaveMapInfo map_info;
		SavePanorama panorama;
		SaveEventExecState foreground_event_execstate;
		std::vector<SaveCommonEvent> common_events;
		SaveEasyRpgData easyrpg_data;
	};

	inline bool operator==(const Save& l, const Save& r) {
		return l.title == r.title
		&& l.system == r.system
		&& l.screen == r.screen
		&& l.pictures == r.pictures
		&& l.party_location == r.party_location
		&& l.boat_location == r.boat_location
		&& l.ship_location == r.ship_location
		&& l.airship_location == r.airship_location
		&& l.actors == r.actors
		&& l.inventory == r.inventory
		&& l.targets == r.targets
		&& l.map_info == r.map_info
		&& l.panorama == r.panorama
		&& l.foreground_event_execstate == r.foreground_event_execstate
		&& l.common_events == r.common_events
		&& l.easyrpg_data == r.easyrpg_data;
	}

	inline bool operator!=(const Save& l, const Save& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Save& obj);

	template <> struct ReflectStruct<Save> {
		using type_t = Save;
		static constexpr const auto& name = "Save";
	};
	// rpg::SaveTitle
	template <> struct ReflectMember<Save,SaveTitle,&Save::title> {
		using struct_t = Save;
		using type_t = SaveTitle;
		static constexpr const auto& name = "title";
		static constexpr const int id = 0x64;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// rpg::SaveSystem
	template <> struct ReflectMember<Save,SaveSystem,&Save::system> {
		using struct_t = Save;
		using type_t = SaveSystem;
		static constexpr const auto& name = "system";
		static constexpr const int id = 0x65;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::SaveScreen
	template <> struct ReflectMember<Save,SaveScreen,&Save::screen> {
		using struct_t = Save;
		using type_t = SaveScreen;
		static constexpr const auto& name = "screen";
		static constexpr const int id = 0x66;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// array of rpg::SavePicture
	template <> struct ReflectMember<Save,std::vector<SavePicture>,&Save::pictures> {
		using struct_t = Save;
		using type_t = std::vector<SavePicture>;
		static constexpr const auto& name = "pictures";
		static constexpr const int id = 0x67;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::SavePartyLocation
	template <> struct ReflectMember<Save,SavePartyLocation,&Save::party_location> {
		using struct_t = Save;
		using type_t = SavePartyLocation;
		static constexpr const auto& name = "party_location";
		static constexpr const int id = 0x68;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::SaveVehicleLocation
	template <> struct ReflectMember<Save,SaveVehicleLocation,&Save::boat_location> {
		using struct_t = Save;
		using type_t = SaveVehicleLocation;
		static constexpr const auto& name = "boat_location";
		static constexpr const int id = 0x69;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::SaveVehicleLocation
	template <> struct ReflectMember<Save,SaveVehicleLocation,&Save::ship_location> {
		using struct_t = Save;
		using type_t = SaveVehicleLocation;
		static constexpr const auto& name = "ship_location";
		static constexpr const int id = 0x6A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::SaveVehicleLocation
	template <> struct ReflectMember<Save,SaveVehicleLocation,&Save::airship_location> {
		using struct_t = Save;
		using type_t = SaveVehicleLocation;
		static constexpr const auto& name = "airship_location";
		static constexpr const int id = 0x6B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// array of rpg::SaveActor
	template <> struct ReflectMember<Save,std::vector<SaveActor>,&Save::actors> {
		using struct_t = Save;
		using type_t = std::vector<SaveActor>;
		static constexpr const auto& name = "actors";
		static constexpr const int id = 0x6C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::SaveInventory
	template <> struct ReflectMember<Save,SaveInventory,&Save::inventory> {
		using struct_t = Save;
		using type_t = SaveInventory;
		static constexpr const auto& name = "inventory";
		static constexpr const int id = 0x6D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// array of rpg::SaveTarget
	template <> struct ReflectMember<Save,std::vector<SaveTarget>,&Save::targets> {
		using struct_t = Save;
		using type_t = std::vector<SaveTarget>;
		static constexpr const auto& name = "targets";
		static constexpr const int id = 0x6E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::SaveMapInfo
	template <> struct ReflectMember<Save,SaveMapInfo,&Save::map_info> {
		using struct_t = Save;
		using type_t = SaveMapInfo;
		static constexpr const auto& name = "map_info";
		static constexpr const int id = 0x6F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Used to store panorama position data. Used by RPG_RT 2k3 1.12 in other versions an empty object.
	template <> struct ReflectMember<Save,SavePanorama,&Save::panorama> {
		using struct_t = Save;
		using type_t = SavePanorama;
		static constexpr const auto& name = "panorama";
		static constexpr const int id = 0x70;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::SaveEventExecState
	template <> struct ReflectMember<Save,SaveEventExecState,&Save::foreground_event_execstate> {
		using struct_t = Save;
		using type_t = SaveEventExecState;
		static constexpr const auto& name = "foreground_event_execstate";
		static constexpr const int id = 0x71;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// array of rpg::SaveCommonEvent
	template <> struct ReflectMember<Save,std::vector<SaveCommonEvent>,&Save::common_events> {
		using struct_t = Save;
		using type_t = std::vector<SaveCommonEvent>;
		static constexpr const auto& name = "common_events";
		static constexpr const int id = 0x72;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Additional save data written by EasyRPG Player
	template <> struct ReflectMember<Save,SaveEasyRpgData,&Save::easyrpg_data> {
		using struct_t = Save;
		using type_t = SaveEasyRpgData;
		static constexpr const auto& name = "easyrpg_data";
		static constexpr const int id = 0xC8;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,Save>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.title, LCF_REFL_S(Save)(), LCF_REFL_M(Save, title)());
		ForEachMember(s.title, v);
		v(s, s.system, LCF_REFL_S(Save)(), LCF_REFL_M(Save, system)());
		ForEachMember(s.system, v);
		v(s, s.screen, LCF_REFL_S(Save)(), LCF_REFL_M(Save, screen)());
		ForEachMember(s.screen, v);
		v(s, s.pictures, LCF_REFL_S(Save)(), LCF_REFL_M(Save, pictures)());
		for (auto&& e: s.pictures) {
			ForEachMember(e, v);
		}
		v(s, s.party_location, LCF_REFL_S(Save)(), LCF_REFL_M(Save, party_location)());
		ForEachMember(s.party_location, v);
		v(s, s.boat_location, LCF_REFL_S(Save)(), LCF_REFL_M(Save, boat_location)());
		ForEachMember(s.boat_location, v);
		v(s, s.ship_location, LCF_REFL_S(Save)(), LCF_REFL_M(Save, ship_location)());
		ForEachMember(s.ship_location, v);
		v(s, s.airship_location, LCF_REFL_S(Save)(), LCF_REFL_M(Save, airship_location)());
		ForEachMember(s.airship_location, v);
		v(s, s.actors, LCF_REFL_S(Save)(), LCF_REFL_M(Save, actors)());
		for (auto&& e: s.actors) {
			ForEachMember(e, v);
		}
		v(s, s.inventory, LCF_REFL_S(Save)(), LCF_REFL_M(Save, inventory)());
		ForEachMember(s.inventory, v);
		v(s, s.targets, LCF_REFL_S(Save)(), LCF_REFL_M(Save, targets)());
		for (auto&& e: s.targets) {
			ForEachMember(e, v);
		}
		v(s, s.map_info, LCF_REFL_S(Save)(), LCF_REFL_M(Save, map_info)());
		ForEachMember(s.map_info, v);
		v(s, s.panorama, LCF_REFL_S(Save)(), LCF_REFL_M(Save, panorama)());
		ForEachMember(s.panorama, v);
		v(s, s.foreground_event_execstate, LCF_REFL_S(Save)(), LCF_REFL_M(Save, foreground_event_execstate)());
		ForEachMember(s.foreground_event_execstate, v);
		v(s, s.common_events, LCF_REFL_S(Save)(), LCF_REFL_M(Save, common_events)());
		for (auto&& e: s.common_events) {
			ForEachMember(e, v);
		}
		v(s, s.easyrpg_data, LCF_REFL_S(Save)(), LCF_REFL_M(Save, easyrpg_data)());
		ForEachMember(s.easyrpg_data, v);
	}

} // namespace rpg
} // namespace lcf

#endif
