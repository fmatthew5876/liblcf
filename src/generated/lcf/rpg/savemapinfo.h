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

#ifndef LCF_RPG_SAVEMAPINFO_H
#define LCF_RPG_SAVEMAPINFO_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "lcf/rpg/map.h"
#include "lcf/rpg/mapinfo.h"
#include "lcf/rpg/savemapevent.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveMapInfo class.
 */
namespace lcf {
namespace rpg {
	class SaveMapInfo {
	public:
		void Setup();
		void Setup(const rpg::Map& map);
		void Fixup(const rpg::Map& map);
		void Fixup(const rpg::MapInfo& map);
		void UnFixup(const rpg::Map& map);
		void UnFixup(const rpg::MapInfo& map);
		int32_t position_x = 0;
		int32_t position_y = 0;
		int32_t encounter_rate = -1;
		int32_t chipset_id = -1;
		std::vector<SaveMapEvent> events;
		std::vector<uint8_t> lower_tiles;
		std::vector<uint8_t> upper_tiles;
		std::string parallax_name;
		bool parallax_horz = false;
		bool parallax_vert = false;
		bool parallax_horz_auto = false;
		int32_t parallax_horz_speed = 0;
		bool parallax_vert_auto = false;
		int32_t parallax_vert_speed = 0;
	};

	inline bool operator==(const SaveMapInfo& l, const SaveMapInfo& r) {
		return l.position_x == r.position_x
		&& l.position_y == r.position_y
		&& l.encounter_rate == r.encounter_rate
		&& l.chipset_id == r.chipset_id
		&& l.events == r.events
		&& l.lower_tiles == r.lower_tiles
		&& l.upper_tiles == r.upper_tiles
		&& l.parallax_name == r.parallax_name
		&& l.parallax_horz == r.parallax_horz
		&& l.parallax_vert == r.parallax_vert
		&& l.parallax_horz_auto == r.parallax_horz_auto
		&& l.parallax_horz_speed == r.parallax_horz_speed
		&& l.parallax_vert_auto == r.parallax_vert_auto
		&& l.parallax_vert_speed == r.parallax_vert_speed;
	}

	inline bool operator!=(const SaveMapInfo& l, const SaveMapInfo& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveMapInfo& obj);

	template <> struct ReflectStruct<SaveMapInfo> {
		using type_t = SaveMapInfo;
		static constexpr const auto& = "SaveMapInfo";
	};
	// int
	template <> struct ReflectMember<SaveMapInfo,int32_t,&SaveMapInfo::position_x> {
		using struct_t = SaveMapInfo;
		using type_t = int32_t;
		static constexpr const auto& name[] = "position_x";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveMapInfo,int32_t,&SaveMapInfo::position_y> {
		using struct_t = SaveMapInfo;
		using type_t = int32_t;
		static constexpr const auto& name[] = "position_y";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveMapInfo,int32_t,&SaveMapInfo::encounter_rate> {
		using struct_t = SaveMapInfo;
		using type_t = int32_t;
		static constexpr const auto& name[] = "encounter_rate";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveMapInfo,int32_t,&SaveMapInfo::chipset_id> {
		using struct_t = SaveMapInfo;
		using type_t = int32_t;
		static constexpr const auto& name[] = "chipset_id";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ? array
	template <> struct ReflectMember<SaveMapInfo,std::vector<SaveMapEvent>,&SaveMapInfo::events> {
		using struct_t = SaveMapInfo;
		using type_t = std::vector<SaveMapEvent>;
		static constexpr const auto& name[] = "events";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// ? [00 01 02 ... 8E 8F]
	template <> struct ReflectMember<SaveMapInfo,std::vector<uint8_t>,&SaveMapInfo::lower_tiles> {
		using struct_t = SaveMapInfo;
		using type_t = std::vector<uint8_t>;
		static constexpr const auto& name[] = "lower_tiles";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<SaveMapInfo,std::vector<uint8_t>,&SaveMapInfo::upper_tiles> {
		using struct_t = SaveMapInfo;
		using type_t = std::vector<uint8_t>;
		static constexpr const auto& name[] = "upper_tiles";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// string
	template <> struct ReflectMember<SaveMapInfo,std::string,&SaveMapInfo::parallax_name> {
		using struct_t = SaveMapInfo;
		using type_t = std::string;
		static constexpr const auto& name[] = "parallax_name";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// bool
	template <> struct ReflectMember<SaveMapInfo,bool,&SaveMapInfo::parallax_horz> {
		using struct_t = SaveMapInfo;
		using type_t = bool;
		static constexpr const auto& name[] = "parallax_horz";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// bool
	template <> struct ReflectMember<SaveMapInfo,bool,&SaveMapInfo::parallax_vert> {
		using struct_t = SaveMapInfo;
		using type_t = bool;
		static constexpr const auto& name[] = "parallax_vert";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// bool
	template <> struct ReflectMember<SaveMapInfo,bool,&SaveMapInfo::parallax_horz_auto> {
		using struct_t = SaveMapInfo;
		using type_t = bool;
		static constexpr const auto& name[] = "parallax_horz_auto";
		static constexpr const int id = 0x23;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveMapInfo,int32_t,&SaveMapInfo::parallax_horz_speed> {
		using struct_t = SaveMapInfo;
		using type_t = int32_t;
		static constexpr const auto& name[] = "parallax_horz_speed";
		static constexpr const int id = 0x24;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// bool
	template <> struct ReflectMember<SaveMapInfo,bool,&SaveMapInfo::parallax_vert_auto> {
		using struct_t = SaveMapInfo;
		using type_t = bool;
		static constexpr const auto& name[] = "parallax_vert_auto";
		static constexpr const int id = 0x25;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveMapInfo,int32_t,&SaveMapInfo::parallax_vert_speed> {
		using struct_t = SaveMapInfo;
		using type_t = int32_t;
		static constexpr const auto& name[] = "parallax_vert_speed";
		static constexpr const int id = 0x26;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
