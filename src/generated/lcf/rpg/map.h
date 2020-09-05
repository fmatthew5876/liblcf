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

#ifndef LCF_RPG_MAP_H
#define LCF_RPG_MAP_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include "lcf/rpg/event.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Map class.
 */
namespace lcf {
namespace rpg {
	class Map {
	public:
		std::string lmu_header;
		enum ScrollType {
			ScrollType_none = 0,
			ScrollType_vertical = 1,
			ScrollType_horizontal = 2,
			ScrollType_both = 3
		};
		static constexpr auto kScrollTypeTags = lcf::makeEnumTags<ScrollType>(
			"none",
			"vertical",
			"horizontal",
			"both"
		);
		enum GeneratorMode {
			GeneratorMode_single_passage = 0,
			GeneratorMode_linked_rooms = 1,
			GeneratorMode_maze_passage = 2,
			GeneratorMode_open_room = 3
		};
		static constexpr auto kGeneratorModeTags = lcf::makeEnumTags<GeneratorMode>(
			"single_passage",
			"linked_rooms",
			"maze_passage",
			"open_room"
		);
		enum GeneratorTiles {
			GeneratorTiles_one = 0,
			GeneratorTiles_two = 1
		};
		static constexpr auto kGeneratorTilesTags = lcf::makeEnumTags<GeneratorTiles>(
			"one",
			"two"
		);

		int32_t chipset_id = 1;
		int32_t width = 20;
		int32_t height = 15;
		int32_t scroll_type = 0;
		bool parallax_flag = false;
		DBString parallax_name;
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
	inline std::ostream& operator<<(std::ostream& os, Map::ScrollType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, Map::GeneratorMode code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, Map::GeneratorTiles code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

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

	std::ostream& operator<<(std::ostream& os, const Map& obj);

	template <> struct ReflectStruct<Map> {
		using type_t = Map;
		static constexpr const auto& = "Map";
	};
	// Integer
	template <> struct ReflectMember<Map,int32_t,&Map::chipset_id> {
		using struct_t = Map;
		using type_t = int32_t;
		static constexpr const auto& name[] = "chipset_id";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Map,int32_t,&Map::width> {
		using struct_t = Map;
		using type_t = int32_t;
		static constexpr const auto& name[] = "width";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Map,int32_t,&Map::height> {
		using struct_t = Map;
		using type_t = int32_t;
		static constexpr const auto& name[] = "height";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Map,int32_t,&Map::scroll_type> {
		using struct_t = Map;
		using type_t = int32_t;
		static constexpr const auto& name[] = "scroll_type";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Flag
	template <> struct ReflectMember<Map,bool,&Map::parallax_flag> {
		using struct_t = Map;
		using type_t = bool;
		static constexpr const auto& name[] = "parallax_flag";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<Map,DBString,&Map::parallax_name> {
		using struct_t = Map;
		using type_t = DBString;
		static constexpr const auto& name[] = "parallax_name";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Map,bool,&Map::parallax_loop_x> {
		using struct_t = Map;
		using type_t = bool;
		static constexpr const auto& name[] = "parallax_loop_x";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Map,bool,&Map::parallax_loop_y> {
		using struct_t = Map;
		using type_t = bool;
		static constexpr const auto& name[] = "parallax_loop_y";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Map,bool,&Map::parallax_auto_loop_x> {
		using struct_t = Map;
		using type_t = bool;
		static constexpr const auto& name[] = "parallax_auto_loop_x";
		static constexpr const int id = 0x23;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Map,int32_t,&Map::parallax_sx> {
		using struct_t = Map;
		using type_t = int32_t;
		static constexpr const auto& name[] = "parallax_sx";
		static constexpr const int id = 0x24;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Map,bool,&Map::parallax_auto_loop_y> {
		using struct_t = Map;
		using type_t = bool;
		static constexpr const auto& name[] = "parallax_auto_loop_y";
		static constexpr const int id = 0x25;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Map,int32_t,&Map::parallax_sy> {
		using struct_t = Map;
		using type_t = int32_t;
		static constexpr const auto& name[] = "parallax_sy";
		static constexpr const int id = 0x26;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Map,bool,&Map::generator_flag> {
		using struct_t = Map;
		using type_t = bool;
		static constexpr const auto& name[] = "generator_flag";
		static constexpr const int id = 0x28;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Map,int32_t,&Map::generator_mode> {
		using struct_t = Map;
		using type_t = int32_t;
		static constexpr const auto& name[] = "generator_mode";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Bool
	template <> struct ReflectMember<Map,bool,&Map::top_level> {
		using struct_t = Map;
		using type_t = bool;
		static constexpr const auto& name[] = "top_level";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Map,int32_t,&Map::generator_tiles> {
		using struct_t = Map;
		using type_t = int32_t;
		static constexpr const auto& name[] = "generator_tiles";
		static constexpr const int id = 0x30;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Map,int32_t,&Map::generator_width> {
		using struct_t = Map;
		using type_t = int32_t;
		static constexpr const auto& name[] = "generator_width";
		static constexpr const int id = 0x31;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Map,int32_t,&Map::generator_height> {
		using struct_t = Map;
		using type_t = int32_t;
		static constexpr const auto& name[] = "generator_height";
		static constexpr const int id = 0x32;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Map,bool,&Map::generator_surround> {
		using struct_t = Map;
		using type_t = bool;
		static constexpr const auto& name[] = "generator_surround";
		static constexpr const int id = 0x33;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Map,bool,&Map::generator_upper_wall> {
		using struct_t = Map;
		using type_t = bool;
		static constexpr const auto& name[] = "generator_upper_wall";
		static constexpr const int id = 0x34;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Map,bool,&Map::generator_floor_b> {
		using struct_t = Map;
		using type_t = bool;
		static constexpr const auto& name[] = "generator_floor_b";
		static constexpr const int id = 0x35;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Map,bool,&Map::generator_floor_c> {
		using struct_t = Map;
		using type_t = bool;
		static constexpr const auto& name[] = "generator_floor_c";
		static constexpr const int id = 0x36;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Map,bool,&Map::generator_extra_b> {
		using struct_t = Map;
		using type_t = bool;
		static constexpr const auto& name[] = "generator_extra_b";
		static constexpr const int id = 0x37;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Map,bool,&Map::generator_extra_c> {
		using struct_t = Map;
		using type_t = bool;
		static constexpr const auto& name[] = "generator_extra_c";
		static constexpr const int id = 0x38;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Uint32 x 9 RPG2003
	template <> struct ReflectMember<Map,std::vector<uint32_t>,&Map::generator_x> {
		using struct_t = Map;
		using type_t = std::vector<uint32_t>;
		static constexpr const auto& name[] = "generator_x";
		static constexpr const int id = 0x3C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Uint32 x 9 RPG2003
	template <> struct ReflectMember<Map,std::vector<uint32_t>,&Map::generator_y> {
		using struct_t = Map;
		using type_t = std::vector<uint32_t>;
		static constexpr const auto& name[] = "generator_y";
		static constexpr const int id = 0x3D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - Short RPG2003
	template <> struct ReflectMember<Map,std::vector<int16_t>,&Map::generator_tile_ids> {
		using struct_t = Map;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name[] = "generator_tile_ids";
		static constexpr const int id = 0x3E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - Short
	template <> struct ReflectMember<Map,std::vector<int16_t>,&Map::lower_layer> {
		using struct_t = Map;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name[] = "lower_layer";
		static constexpr const int id = 0x47;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - Short
	template <> struct ReflectMember<Map,std::vector<int16_t>,&Map::upper_layer> {
		using struct_t = Map;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name[] = "upper_layer";
		static constexpr const int id = 0x48;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - rpg::Event
	template <> struct ReflectMember<Map,std::vector<Event>,&Map::events> {
		using struct_t = Map;
		using type_t = std::vector<Event>;
		static constexpr const auto& name[] = "events";
		static constexpr const int id = 0x51;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer - Used by steam version of rm2k3 instead of 0x5B.
	template <> struct ReflectMember<Map,int32_t,&Map::save_count_2k3e> {
		using struct_t = Map;
		using type_t = int32_t;
		static constexpr const auto& name[] = "save_count_2k3e";
		static constexpr const int id = 0x5A;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Map,int32_t,&Map::save_count> {
		using struct_t = Map;
		using type_t = int32_t;
		static constexpr const auto& name[] = "save_count";
		static constexpr const int id = 0x5B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
