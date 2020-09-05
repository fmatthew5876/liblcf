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

#ifndef LCF_RPG_SAVETITLE_H
#define LCF_RPG_SAVETITLE_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <string>
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveTitle class.
 */
namespace lcf {
namespace rpg {
	class SaveTitle {
	public:
		double timestamp = 0.0;
		std::string hero_name;
		int32_t hero_level = 0;
		int32_t hero_hp = 0;
		std::string face1_name;
		int32_t face1_id = 0;
		std::string face2_name;
		int32_t face2_id = 0;
		std::string face3_name;
		int32_t face3_id = 0;
		std::string face4_name;
		int32_t face4_id = 0;
	};

	inline bool operator==(const SaveTitle& l, const SaveTitle& r) {
		return l.timestamp == r.timestamp
		&& l.hero_name == r.hero_name
		&& l.hero_level == r.hero_level
		&& l.hero_hp == r.hero_hp
		&& l.face1_name == r.face1_name
		&& l.face1_id == r.face1_id
		&& l.face2_name == r.face2_name
		&& l.face2_id == r.face2_id
		&& l.face3_name == r.face3_name
		&& l.face3_id == r.face3_id
		&& l.face4_name == r.face4_name
		&& l.face4_id == r.face4_id;
	}

	inline bool operator!=(const SaveTitle& l, const SaveTitle& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveTitle& obj);

	template <> struct ReflectStruct<SaveTitle> {
		using type_t = SaveTitle;
		static constexpr const auto& = "SaveTitle";
	};
	// double - timestamp in Delphi's TDateTime format
	template <> struct ReflectMember<SaveTitle,double,&SaveTitle::timestamp> {
		using struct_t = SaveTitle;
		using type_t = double;
		static constexpr const auto& name[] = "timestamp";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// char[]: hero name
	template <> struct ReflectMember<SaveTitle,std::string,&SaveTitle::hero_name> {
		using struct_t = SaveTitle;
		using type_t = std::string;
		static constexpr const auto& name[] = "hero_name";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int: hero level
	template <> struct ReflectMember<SaveTitle,int32_t,&SaveTitle::hero_level> {
		using struct_t = SaveTitle;
		using type_t = int32_t;
		static constexpr const auto& name[] = "hero_level";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int: hero HP
	template <> struct ReflectMember<SaveTitle,int32_t,&SaveTitle::hero_hp> {
		using struct_t = SaveTitle;
		using type_t = int32_t;
		static constexpr const auto& name[] = "hero_hp";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// char[]: face filename
	template <> struct ReflectMember<SaveTitle,std::string,&SaveTitle::face1_name> {
		using struct_t = SaveTitle;
		using type_t = std::string;
		static constexpr const auto& name[] = "face1_name";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int: face id
	template <> struct ReflectMember<SaveTitle,int32_t,&SaveTitle::face1_id> {
		using struct_t = SaveTitle;
		using type_t = int32_t;
		static constexpr const auto& name[] = "face1_id";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// char[]: face filename
	template <> struct ReflectMember<SaveTitle,std::string,&SaveTitle::face2_name> {
		using struct_t = SaveTitle;
		using type_t = std::string;
		static constexpr const auto& name[] = "face2_name";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int: face id
	template <> struct ReflectMember<SaveTitle,int32_t,&SaveTitle::face2_id> {
		using struct_t = SaveTitle;
		using type_t = int32_t;
		static constexpr const auto& name[] = "face2_id";
		static constexpr const int id = 0x18;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// char[]: face filename
	template <> struct ReflectMember<SaveTitle,std::string,&SaveTitle::face3_name> {
		using struct_t = SaveTitle;
		using type_t = std::string;
		static constexpr const auto& name[] = "face3_name";
		static constexpr const int id = 0x19;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int: face id
	template <> struct ReflectMember<SaveTitle,int32_t,&SaveTitle::face3_id> {
		using struct_t = SaveTitle;
		using type_t = int32_t;
		static constexpr const auto& name[] = "face3_id";
		static constexpr const int id = 0x1A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// char[]: face filename
	template <> struct ReflectMember<SaveTitle,std::string,&SaveTitle::face4_name> {
		using struct_t = SaveTitle;
		using type_t = std::string;
		static constexpr const auto& name[] = "face4_name";
		static constexpr const int id = 0x1B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int: face id
	template <> struct ReflectMember<SaveTitle,int32_t,&SaveTitle::face4_id> {
		using struct_t = SaveTitle;
		using type_t = int32_t;
		static constexpr const auto& name[] = "face4_id";
		static constexpr const int id = 0x1C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
