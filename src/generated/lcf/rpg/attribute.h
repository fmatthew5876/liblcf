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

#ifndef LCF_RPG_ATTRIBUTE_H
#define LCF_RPG_ATTRIBUTE_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Attribute class.
 */
namespace lcf {
namespace rpg {
	class Attribute {
	public:
		enum Type {
			Type_physical = 0,
			Type_magical = 1
		};
		static constexpr auto kTypeTags = lcf::makeEnumTags<Type>(
			"physical",
			"magical"
		);

		int ID = 0;
		DBString name;
		int32_t type = 0;
		int32_t a_rate = 300;
		int32_t b_rate = 200;
		int32_t c_rate = 100;
		int32_t d_rate = 50;
		int32_t e_rate = 0;
	};
	inline std::ostream& operator<<(std::ostream& os, Attribute::Type code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const Attribute& l, const Attribute& r) {
		return l.name == r.name
		&& l.type == r.type
		&& l.a_rate == r.a_rate
		&& l.b_rate == r.b_rate
		&& l.c_rate == r.c_rate
		&& l.d_rate == r.d_rate
		&& l.e_rate == r.e_rate;
	}

	inline bool operator!=(const Attribute& l, const Attribute& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Attribute& obj);

	template <> struct ReflectStruct<Attribute> {
		using type_t = Attribute;
		static constexpr const auto& = "Attribute";
	};
	// String
	template <> struct ReflectMember<Attribute,DBString,&Attribute::name> {
		using struct_t = Attribute;
		using type_t = DBString;
		static constexpr const auto& name[] = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Attribute,int32_t,&Attribute::type> {
		using struct_t = Attribute;
		using type_t = int32_t;
		static constexpr const auto& name[] = "type";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<Attribute,int32_t,&Attribute::a_rate> {
		using struct_t = Attribute;
		using type_t = int32_t;
		static constexpr const auto& name[] = "a_rate";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Attribute,int32_t,&Attribute::b_rate> {
		using struct_t = Attribute;
		using type_t = int32_t;
		static constexpr const auto& name[] = "b_rate";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Attribute,int32_t,&Attribute::c_rate> {
		using struct_t = Attribute;
		using type_t = int32_t;
		static constexpr const auto& name[] = "c_rate";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Attribute,int32_t,&Attribute::d_rate> {
		using struct_t = Attribute;
		using type_t = int32_t;
		static constexpr const auto& name[] = "d_rate";
		static constexpr const int id = 0x0E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Attribute,int32_t,&Attribute::e_rate> {
		using struct_t = Attribute;
		using type_t = int32_t;
		static constexpr const auto& name[] = "e_rate";
		static constexpr const int id = 0x0F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
