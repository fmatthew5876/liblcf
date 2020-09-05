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

#ifndef LCF_RPG_TREEMAP_H
#define LCF_RPG_TREEMAP_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/rpg/mapinfo.h"
#include "lcf/rpg/start.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::TreeMap class.
 */
namespace lcf {
namespace rpg {
	class TreeMap {
	public:
		std::string lmt_header;
		enum MapType {
			MapType_root = 0,
			MapType_map = 1,
			MapType_area = 2
		};
		static constexpr auto kMapTypeTags = lcf::makeEnumTags<MapType>(
			"root",
			"map",
			"area"
		);

		std::vector<MapInfo> maps;
		std::vector<int32_t> tree_order;
		int32_t active_node = 0;
		Start start;
	};
	inline std::ostream& operator<<(std::ostream& os, TreeMap::MapType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const TreeMap& l, const TreeMap& r) {
		return l.maps == r.maps
		&& l.tree_order == r.tree_order
		&& l.active_node == r.active_node
		&& l.start == r.start;
	}

	inline bool operator!=(const TreeMap& l, const TreeMap& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const TreeMap& obj);

	template <> struct ReflectStruct<TreeMap> {
		using type_t = TreeMap;
		static constexpr const auto& = "TreeMap";
	};
	// 
	template <> struct ReflectMember<TreeMap,std::vector<MapInfo>,&TreeMap::maps> {
		using struct_t = TreeMap;
		using type_t = std::vector<MapInfo>;
		static constexpr const auto& name[] = "maps";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<TreeMap,std::vector<int32_t>,&TreeMap::tree_order> {
		using struct_t = TreeMap;
		using type_t = std::vector<int32_t>;
		static constexpr const auto& name[] = "tree_order";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<TreeMap,int32_t,&TreeMap::active_node> {
		using struct_t = TreeMap;
		using type_t = int32_t;
		static constexpr const auto& name[] = "active_node";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<TreeMap,Start,&TreeMap::start> {
		using struct_t = TreeMap;
		using type_t = Start;
		static constexpr const auto& name[] = "start";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
