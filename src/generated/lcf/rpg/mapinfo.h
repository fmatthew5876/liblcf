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

#ifndef LCF_RPG_MAPINFO_H
#define LCF_RPG_MAPINFO_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include "lcf/rpg/encounter.h"
#include "lcf/rpg/music.h"
#include "lcf/rpg/rect.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::MapInfo class.
 */
namespace lcf {
namespace rpg {
	class MapInfo {
	public:
		enum MusicType {
			MusicType_parent = 0,
			MusicType_event = 1,
			MusicType_specific = 2
		};
		static constexpr auto kMusicTypeTags = lcf::makeEnumTags<MusicType>(
			"parent",
			"event",
			"specific"
		);
		enum BGMType {
			BGMType_parent = 0,
			BGMType_terrain = 1,
			BGMType_specific = 2
		};
		static constexpr auto kBGMTypeTags = lcf::makeEnumTags<BGMType>(
			"parent",
			"terrain",
			"specific"
		);
		enum TriState {
			TriState_parent = 0,
			TriState_allow = 1,
			TriState_forbid = 2
		};
		static constexpr auto kTriStateTags = lcf::makeEnumTags<TriState>(
			"parent",
			"allow",
			"forbid"
		);

		int ID = 0;
		DBString name;
		int32_t parent_map = 0;
		int32_t indentation = 0;
		int32_t type = -1;
		int32_t scrollbar_x = 0;
		int32_t scrollbar_y = 0;
		bool expanded_node = false;
		int32_t music_type = 0;
		Music music;
		int32_t background_type = 0;
		DBString background_name;
		int32_t teleport = 0;
		int32_t escape = 0;
		int32_t save = 0;
		std::vector<Encounter> encounters;
		int32_t encounter_steps = 25;
		Rect area_rect;
	};
	inline std::ostream& operator<<(std::ostream& os, MapInfo::MusicType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, MapInfo::BGMType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, MapInfo::TriState code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const MapInfo& l, const MapInfo& r) {
		return l.name == r.name
		&& l.parent_map == r.parent_map
		&& l.indentation == r.indentation
		&& l.type == r.type
		&& l.scrollbar_x == r.scrollbar_x
		&& l.scrollbar_y == r.scrollbar_y
		&& l.expanded_node == r.expanded_node
		&& l.music_type == r.music_type
		&& l.music == r.music
		&& l.background_type == r.background_type
		&& l.background_name == r.background_name
		&& l.teleport == r.teleport
		&& l.escape == r.escape
		&& l.save == r.save
		&& l.encounters == r.encounters
		&& l.encounter_steps == r.encounter_steps
		&& l.area_rect == r.area_rect;
	}

	inline bool operator!=(const MapInfo& l, const MapInfo& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const MapInfo& obj);

	template <> struct ReflectStruct<MapInfo> {
		using type_t = MapInfo;
		static constexpr const auto& name = "MapInfo";
	};
	// String. Note: Map ID 0 used to be game title but it should be ignored (TreeCtrl dummy editor dumped data); always use RPG_RT.ini GameTitle instead
	template <> struct ReflectMember<MapInfo,DBString,&MapInfo::name> {
		using struct_t = MapInfo;
		using type_t = DBString;
		static constexpr const auto& name = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer. Used to inherit parent map properties
	template <> struct ReflectMember<MapInfo,int32_t,&MapInfo::parent_map> {
		using struct_t = MapInfo;
		using type_t = int32_t;
		static constexpr const auto& name = "parent_map";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer. Dummy editor dumped data. Branch indentation level in TreeCtrl
	template <> struct ReflectMember<MapInfo,int32_t,&MapInfo::indentation> {
		using struct_t = MapInfo;
		using type_t = int32_t;
		static constexpr const auto& name = "indentation";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<MapInfo,int32_t,&MapInfo::type> {
		using struct_t = MapInfo;
		using type_t = int32_t;
		static constexpr const auto& name = "type";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer. Editor only
	template <> struct ReflectMember<MapInfo,int32_t,&MapInfo::scrollbar_x> {
		using struct_t = MapInfo;
		using type_t = int32_t;
		static constexpr const auto& name = "scrollbar_x";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer. Editor only
	template <> struct ReflectMember<MapInfo,int32_t,&MapInfo::scrollbar_y> {
		using struct_t = MapInfo;
		using type_t = int32_t;
		static constexpr const auto& name = "scrollbar_y";
		static constexpr const int id = 0x06;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag. Editor only
	template <> struct ReflectMember<MapInfo,bool,&MapInfo::expanded_node> {
		using struct_t = MapInfo;
		using type_t = bool;
		static constexpr const auto& name = "expanded_node";
		static constexpr const int id = 0x07;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer. 0=inherit; 1=from event; 2=specified in 0x0C
	template <> struct ReflectMember<MapInfo,int32_t,&MapInfo::music_type> {
		using struct_t = MapInfo;
		using type_t = int32_t;
		static constexpr const auto& name = "music_type";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - rpg::Music
	template <> struct ReflectMember<MapInfo,Music,&MapInfo::music> {
		using struct_t = MapInfo;
		using type_t = Music;
		static constexpr const auto& name = "music";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer. 0=inherit; 1=from terrain ldb data; 2=specified in 0x16
	template <> struct ReflectMember<MapInfo,int32_t,&MapInfo::background_type> {
		using struct_t = MapInfo;
		using type_t = int32_t;
		static constexpr const auto& name = "background_type";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// String
	template <> struct ReflectMember<MapInfo,DBString,&MapInfo::background_name> {
		using struct_t = MapInfo;
		using type_t = DBString;
		static constexpr const auto& name = "background_name";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag. 0=inherit; 1=allow; 2=disallow
	template <> struct ReflectMember<MapInfo,int32_t,&MapInfo::teleport> {
		using struct_t = MapInfo;
		using type_t = int32_t;
		static constexpr const auto& name = "teleport";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Flag. 0=inherit; 1=allow; 2=disallow
	template <> struct ReflectMember<MapInfo,int32_t,&MapInfo::escape> {
		using struct_t = MapInfo;
		using type_t = int32_t;
		static constexpr const auto& name = "escape";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Flag. 0=inherit; 1=allow; 2=disallow
	template <> struct ReflectMember<MapInfo,int32_t,&MapInfo::save> {
		using struct_t = MapInfo;
		using type_t = int32_t;
		static constexpr const auto& name = "save";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - rpg::Encounter
	template <> struct ReflectMember<MapInfo,std::vector<Encounter>,&MapInfo::encounters> {
		using struct_t = MapInfo;
		using type_t = std::vector<Encounter>;
		static constexpr const auto& name = "encounters";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 0=Encounters Disabled; 1=Encounter Rate for the map
	template <> struct ReflectMember<MapInfo,int32_t,&MapInfo::encounter_steps> {
		using struct_t = MapInfo;
		using type_t = int32_t;
		static constexpr const auto& name = "encounter_steps";
		static constexpr const int id = 0x2C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Uint32 x 4 (Left; Top; Right; Bottom). Normal map (non-area) is 0; 0; 0; 0
	template <> struct ReflectMember<MapInfo,Rect,&MapInfo::area_rect> {
		using struct_t = MapInfo;
		using type_t = Rect;
		static constexpr const auto& name = "area_rect";
		static constexpr const int id = 0x33;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,MapInfo>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.name, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, name)());
		v(s, s.parent_map, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, parent_map)());
		v(s, s.indentation, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, indentation)());
		v(s, s.type, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, type)());
		v(s, s.scrollbar_x, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, scrollbar_x)());
		v(s, s.scrollbar_y, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, scrollbar_y)());
		v(s, s.expanded_node, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, expanded_node)());
		v(s, s.music_type, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, music_type)());
		v(s, s.music, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, music)());
		ForEachMember(s.music, v);
		v(s, s.background_type, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, background_type)());
		v(s, s.background_name, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, background_name)());
		v(s, s.teleport, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, teleport)());
		v(s, s.escape, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, escape)());
		v(s, s.save, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, save)());
		v(s, s.encounters, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, encounters)());
		for (auto&& e: s.encounters) {
			ForEachMember(e, v);
		}
		v(s, s.encounter_steps, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, encounter_steps)());
		v(s, s.area_rect, LCF_REFL_S(MapInfo)(), LCF_REFL_M(MapInfo, area_rect)());
		ForEachMember(s.area_rect, v);
	}

} // namespace rpg
} // namespace lcf

#endif
