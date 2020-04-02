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

#ifndef LCF_RPG_MAP_H
#define LCF_RPG_MAP_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "enum_tags.h"
#include "rpg_event.h"

/**
 * RPG::Map class.
 */
namespace RPG {
	class Map {
	public:
		std::string lmu_header;
		enum class ScrollType {
			None = 0,
			Vertical = 1,
			Horizontal = 2,
			Both = 3
		};
		static constexpr auto kScrollTypeTags = makeEnumTags<ScrollType>(
			"None",
			"Vertical",
			"Horizontal",
			"Both"
		);
		enum class GeneratorMode {
			SinglePassage = 0,
			LinkedRooms = 1,
			MazePassage = 2,
			OpenRoom = 3
		};
		static constexpr auto kGeneratorModeTags = makeEnumTags<GeneratorMode>(
			"SinglePassage",
			"LinkedRooms",
			"MazePassage",
			"OpenRoom"
		);
		enum class GeneratorTiles {
			One = 0,
			Two = 1
		};
		static constexpr auto kGeneratorTilesTags = makeEnumTags<GeneratorTiles>(
			"One",
			"Two"
		);

		int32_t chipset_id = 1;
		int32_t width = 20;
		int32_t height = 15;
		int32_t scroll_type = 0;
		bool parallax_flag = false;
		std::string parallax_name;
		bool parallax_loop_x = false;
		bool parallax_loop_y = false;
		bool parallax_auto_loop_x = false;
		int32_t parallax_sx = 0;
		bool parallax_auto_loop_y = false;
		int32_t parallax_sy = 0;
		bool generator_flag = false;
		int32_t generator_mode = 0;
		bool top_level = false;
		int32_t generator_tiles = 0;
		int32_t generator_width = 4;
		int32_t generator_height = 1;
		bool generator_surround = true;
		bool generator_upper_wall = true;
		bool generator_floor_b = true;
		bool generator_floor_c = true;
		bool generator_extra_b = true;
		bool generator_extra_c = true;
		std::vector<uint32_t> generator_x;
		std::vector<uint32_t> generator_y;
		std::vector<int16_t> generator_tile_ids;
		std::vector<int16_t> lower_layer;
		std::vector<int16_t> upper_layer;
		std::vector<Event> events;
		int32_t save_count_2k3e = 0;
		int32_t save_count = 0;
	};

	inline bool operator==(const Map& l, const Map& r) {
		return l.chipset_id == r.chipset_id
		&& l.width == r.width
		&& l.height == r.height
		&& l.scroll_type == r.scroll_type
		&& l.parallax_flag == r.parallax_flag
		&& l.parallax_name == r.parallax_name
		&& l.parallax_loop_x == r.parallax_loop_x
		&& l.parallax_loop_y == r.parallax_loop_y
		&& l.parallax_auto_loop_x == r.parallax_auto_loop_x
		&& l.parallax_sx == r.parallax_sx
		&& l.parallax_auto_loop_y == r.parallax_auto_loop_y
		&& l.parallax_sy == r.parallax_sy
		&& l.generator_flag == r.generator_flag
		&& l.generator_mode == r.generator_mode
		&& l.top_level == r.top_level
		&& l.generator_tiles == r.generator_tiles
		&& l.generator_width == r.generator_width
		&& l.generator_height == r.generator_height
		&& l.generator_surround == r.generator_surround
		&& l.generator_upper_wall == r.generator_upper_wall
		&& l.generator_floor_b == r.generator_floor_b
		&& l.generator_floor_c == r.generator_floor_c
		&& l.generator_extra_b == r.generator_extra_b
		&& l.generator_extra_c == r.generator_extra_c
		&& l.generator_x == r.generator_x
		&& l.generator_y == r.generator_y
		&& l.generator_tile_ids == r.generator_tile_ids
		&& l.lower_layer == r.lower_layer
		&& l.upper_layer == r.upper_layer
		&& l.events == r.events
		&& l.save_count_2k3e == r.save_count_2k3e
		&& l.save_count == r.save_count;
	}

	inline bool operator!=(const Map& l, const Map& r) {
		return !(l == r);
	}
}

LCF_DEFINE_ENUM_TRAITS(RPG::Map::ScrollType, true, None, Both);
LCF_DEFINE_ENUM_TRAITS(RPG::Map::GeneratorMode, true, SinglePassage, OpenRoom);
LCF_DEFINE_ENUM_TRAITS(RPG::Map::GeneratorTiles, true, One, Two);

#endif
