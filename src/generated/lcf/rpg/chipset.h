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

#ifndef LCF_RPG_CHIPSET_H
#define LCF_RPG_CHIPSET_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Chipset class.
 */
namespace lcf {
namespace rpg {
	class Chipset {
	public:
		enum AnimType {
			AnimType_reciprocating = 0,
			AnimType_cyclic = 1
		};
		static constexpr auto kAnimTypeTags = lcf::makeEnumTags<AnimType>(
			"reciprocating",
			"cyclic"
		);

		Chipset();
		void Init();
		int ID = 0;
		DBString name;
		DBString chipset_name;
		std::vector<int16_t> terrain_data;
		std::vector<uint8_t> passable_data_lower;
		std::vector<uint8_t> passable_data_upper;
		int32_t animation_type = 0;
		int32_t animation_speed = 0;
	};
	inline std::ostream& operator<<(std::ostream& os, Chipset::AnimType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const Chipset& l, const Chipset& r) {
		return l.name == r.name
		&& l.chipset_name == r.chipset_name
		&& l.terrain_data == r.terrain_data
		&& l.passable_data_lower == r.passable_data_lower
		&& l.passable_data_upper == r.passable_data_upper
		&& l.animation_type == r.animation_type
		&& l.animation_speed == r.animation_speed;
	}

	inline bool operator!=(const Chipset& l, const Chipset& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Chipset& obj);

	template <> struct ReflectStruct<Chipset> {
		using type_t = Chipset;
		static constexpr const auto& = "Chipset";
	};
	// String
	template <> struct ReflectMember<Chipset,DBString,&Chipset::name> {
		using struct_t = Chipset;
		using type_t = DBString;
		static constexpr const auto& name[] = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<Chipset,DBString,&Chipset::chipset_name> {
		using struct_t = Chipset;
		using type_t = DBString;
		static constexpr const auto& name[] = "chipset_name";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - Short x 162
	template <> struct ReflectMember<Chipset,std::vector<int16_t>,&Chipset::terrain_data> {
		using struct_t = Chipset;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name[] = "terrain_data";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - Bitflag x 162
	template <> struct ReflectMember<Chipset,std::vector<uint8_t>,&Chipset::passable_data_lower> {
		using struct_t = Chipset;
		using type_t = std::vector<uint8_t>;
		static constexpr const auto& name[] = "passable_data_lower";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - Bitflag x 144
	template <> struct ReflectMember<Chipset,std::vector<uint8_t>,&Chipset::passable_data_upper> {
		using struct_t = Chipset;
		using type_t = std::vector<uint8_t>;
		static constexpr const auto& name[] = "passable_data_upper";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Chipset,int32_t,&Chipset::animation_type> {
		using struct_t = Chipset;
		using type_t = int32_t;
		static constexpr const auto& name[] = "animation_type";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Chipset,int32_t,&Chipset::animation_speed> {
		using struct_t = Chipset;
		using type_t = int32_t;
		static constexpr const auto& name[] = "animation_speed";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
