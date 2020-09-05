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

#ifndef LCF_RPG_RECT_H
#define LCF_RPG_RECT_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <ostream>
#include <type_traits>

/**
 * rpg::Rect class.
 */
namespace lcf {
namespace rpg {
	class Rect {
	public:
		uint32_t l = 0;
		uint32_t t = 0;
		uint32_t r = 0;
		uint32_t b = 0;
	};

	inline bool operator==(const Rect& l, const Rect& r) {
		return l.l == r.l
		&& l.t == r.t
		&& l.r == r.r
		&& l.b == r.b;
	}

	inline bool operator!=(const Rect& l, const Rect& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Rect& obj);

	template <> struct ReflectStruct<Rect> {
		using type_t = Rect;
		static constexpr const auto& name = "Rect";
	};
	// 
	template <> struct ReflectMember<Rect,uint32_t,&Rect::l> {
		using struct_t = Rect;
		using type_t = uint32_t;
		static constexpr const auto& name = "l";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<Rect,uint32_t,&Rect::t> {
		using struct_t = Rect;
		using type_t = uint32_t;
		static constexpr const auto& name = "t";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<Rect,uint32_t,&Rect::r> {
		using struct_t = Rect;
		using type_t = uint32_t;
		static constexpr const auto& name = "r";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<Rect,uint32_t,&Rect::b> {
		using struct_t = Rect;
		using type_t = uint32_t;
		static constexpr const auto& name = "b";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,Rect>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.l, LCF_REFL_S(Rect)(), LCF_REFL_M(Rect, l)());
		v(s, s.t, LCF_REFL_S(Rect)(), LCF_REFL_M(Rect, t)());
		v(s, s.r, LCF_REFL_S(Rect)(), LCF_REFL_M(Rect, r)());
		v(s, s.b, LCF_REFL_S(Rect)(), LCF_REFL_M(Rect, b)());
	}

} // namespace rpg
} // namespace lcf

#endif
