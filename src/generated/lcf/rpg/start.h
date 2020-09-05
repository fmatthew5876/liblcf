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

#ifndef LCF_RPG_START_H
#define LCF_RPG_START_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <ostream>
#include <type_traits>

/**
 * rpg::Start class.
 */
namespace lcf {
namespace rpg {
	class Start {
	public:
		int32_t party_map_id = 0;
		int32_t party_x = 0;
		int32_t party_y = 0;
		int32_t boat_map_id = 0;
		int32_t boat_x = 0;
		int32_t boat_y = 0;
		int32_t ship_map_id = 0;
		int32_t ship_x = 0;
		int32_t ship_y = 0;
		int32_t airship_map_id = 0;
		int32_t airship_x = 0;
		int32_t airship_y = 0;
	};

	inline bool operator==(const Start& l, const Start& r) {
		return l.party_map_id == r.party_map_id
		&& l.party_x == r.party_x
		&& l.party_y == r.party_y
		&& l.boat_map_id == r.boat_map_id
		&& l.boat_x == r.boat_x
		&& l.boat_y == r.boat_y
		&& l.ship_map_id == r.ship_map_id
		&& l.ship_x == r.ship_x
		&& l.ship_y == r.ship_y
		&& l.airship_map_id == r.airship_map_id
		&& l.airship_x == r.airship_x
		&& l.airship_y == r.airship_y;
	}

	inline bool operator!=(const Start& l, const Start& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Start& obj);

	template <> struct ReflectStruct<Start> {
		using type_t = Start;
		static constexpr const auto& = "Start";
	};
	// Integer
	template <> struct ReflectMember<Start,int32_t,&Start::party_map_id> {
		using struct_t = Start;
		using type_t = int32_t;
		static constexpr const auto& name[] = "party_map_id";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Start,int32_t,&Start::party_x> {
		using struct_t = Start;
		using type_t = int32_t;
		static constexpr const auto& name[] = "party_x";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Start,int32_t,&Start::party_y> {
		using struct_t = Start;
		using type_t = int32_t;
		static constexpr const auto& name[] = "party_y";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Start,int32_t,&Start::boat_map_id> {
		using struct_t = Start;
		using type_t = int32_t;
		static constexpr const auto& name[] = "boat_map_id";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Start,int32_t,&Start::boat_x> {
		using struct_t = Start;
		using type_t = int32_t;
		static constexpr const auto& name[] = "boat_x";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Start,int32_t,&Start::boat_y> {
		using struct_t = Start;
		using type_t = int32_t;
		static constexpr const auto& name[] = "boat_y";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Start,int32_t,&Start::ship_map_id> {
		using struct_t = Start;
		using type_t = int32_t;
		static constexpr const auto& name[] = "ship_map_id";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Start,int32_t,&Start::ship_x> {
		using struct_t = Start;
		using type_t = int32_t;
		static constexpr const auto& name[] = "ship_x";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Start,int32_t,&Start::ship_y> {
		using struct_t = Start;
		using type_t = int32_t;
		static constexpr const auto& name[] = "ship_y";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Start,int32_t,&Start::airship_map_id> {
		using struct_t = Start;
		using type_t = int32_t;
		static constexpr const auto& name[] = "airship_map_id";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Start,int32_t,&Start::airship_x> {
		using struct_t = Start;
		using type_t = int32_t;
		static constexpr const auto& name[] = "airship_x";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Start,int32_t,&Start::airship_y> {
		using struct_t = Start;
		using type_t = int32_t;
		static constexpr const auto& name[] = "airship_y";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
