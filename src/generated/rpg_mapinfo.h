/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_MAPINFO_H
#define LCF_RPG_MAPINFO_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "enum_tags.h"
#include "rpg_encounter.h"
#include "rpg_music.h"
#include "rpg_rect.h"

/**
 * RPG::MapInfo class.
 */
namespace RPG {
	class MapInfo {
	public:
		enum class MusicType {
			Parent = 0,
			Event = 1,
			Specific = 2
		};
		enum class BGMType {
			Parent = 0,
			Terrain = 1,
			Specific = 2
		};
		enum class TriState {
			Parent = 0,
			Allow = 1,
			Forbid = 2
		};

		int ID = 0;
		std::string name;
		int32_t parent_map = 0;
		int32_t indentation = 0;
		int32_t type = -1;
		int32_t scrollbar_x = 0;
		int32_t scrollbar_y = 0;
		bool expanded_node = false;
		int32_t music_type = 0;
		Music music;
		int32_t background_type = 0;
		std::string background_name;
		int32_t teleport = 0;
		int32_t escape = 0;
		int32_t save = 0;
		std::vector<Encounter> encounters;
		int32_t encounter_steps = 25;
		Rect area_rect;
	};

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
}

LCF_DEFINE_ENUM_TRAITS(RPG::MapInfo::MusicType, true, Parent, Specific);
LCF_DEFINE_ENUM_TRAITS(RPG::MapInfo::BGMType, true, Parent, Specific);
LCF_DEFINE_ENUM_TRAITS(RPG::MapInfo::TriState, true, Parent, Forbid);

LCF_DEFINE_ENUM_TAGS(RPG::MapInfo::MusicType, (makeEnumTags<RPG::MapInfo::MusicType>({{
	"Parent",
	"Event",
	"Specific"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::MapInfo::BGMType, (makeEnumTags<RPG::MapInfo::BGMType>({{
	"Parent",
	"Terrain",
	"Specific"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::MapInfo::TriState, (makeEnumTags<RPG::MapInfo::TriState>({{
	"Parent",
	"Allow",
	"Forbid"
	}})));


#endif
