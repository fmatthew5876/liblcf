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

#ifndef LCF_RPG_ANIMATIONCELLDATA_H
#define LCF_RPG_ANIMATIONCELLDATA_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <ostream>
#include <type_traits>

/**
 * rpg::AnimationCellData class.
 */
namespace lcf {
namespace rpg {
	class AnimationCellData {
	public:
		int ID = 0;
		int32_t valid = 1;
		int32_t cell_id = 0;
		int32_t x = 0;
		int32_t y = 0;
		int32_t zoom = 100;
		int32_t tone_red = 100;
		int32_t tone_green = 100;
		int32_t tone_blue = 100;
		int32_t tone_gray = 100;
		int32_t transparency = 0;
	};

	inline bool operator==(const AnimationCellData& l, const AnimationCellData& r) {
		return l.valid == r.valid
		&& l.cell_id == r.cell_id
		&& l.x == r.x
		&& l.y == r.y
		&& l.zoom == r.zoom
		&& l.tone_red == r.tone_red
		&& l.tone_green == r.tone_green
		&& l.tone_blue == r.tone_blue
		&& l.tone_gray == r.tone_gray
		&& l.transparency == r.transparency;
	}

	inline bool operator!=(const AnimationCellData& l, const AnimationCellData& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const AnimationCellData& obj);

	template <> struct ReflectStruct<AnimationCellData> {
		using type_t = AnimationCellData;
		static constexpr const auto& name = "AnimationCellData";
	};
	// Bool
	template <> struct ReflectMember<AnimationCellData,int32_t,&AnimationCellData::valid> {
		using struct_t = AnimationCellData;
		using type_t = int32_t;
		static constexpr const auto& name = "valid";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<AnimationCellData,int32_t,&AnimationCellData::cell_id> {
		using struct_t = AnimationCellData;
		using type_t = int32_t;
		static constexpr const auto& name = "cell_id";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<AnimationCellData,int32_t,&AnimationCellData::x> {
		using struct_t = AnimationCellData;
		using type_t = int32_t;
		static constexpr const auto& name = "x";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<AnimationCellData,int32_t,&AnimationCellData::y> {
		using struct_t = AnimationCellData;
		using type_t = int32_t;
		static constexpr const auto& name = "y";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<AnimationCellData,int32_t,&AnimationCellData::zoom> {
		using struct_t = AnimationCellData;
		using type_t = int32_t;
		static constexpr const auto& name = "zoom";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<AnimationCellData,int32_t,&AnimationCellData::tone_red> {
		using struct_t = AnimationCellData;
		using type_t = int32_t;
		static constexpr const auto& name = "tone_red";
		static constexpr const int id = 0x06;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<AnimationCellData,int32_t,&AnimationCellData::tone_green> {
		using struct_t = AnimationCellData;
		using type_t = int32_t;
		static constexpr const auto& name = "tone_green";
		static constexpr const int id = 0x07;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<AnimationCellData,int32_t,&AnimationCellData::tone_blue> {
		using struct_t = AnimationCellData;
		using type_t = int32_t;
		static constexpr const auto& name = "tone_blue";
		static constexpr const int id = 0x08;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<AnimationCellData,int32_t,&AnimationCellData::tone_gray> {
		using struct_t = AnimationCellData;
		using type_t = int32_t;
		static constexpr const auto& name = "tone_gray";
		static constexpr const int id = 0x09;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<AnimationCellData,int32_t,&AnimationCellData::transparency> {
		using struct_t = AnimationCellData;
		using type_t = int32_t;
		static constexpr const auto& name = "transparency";
		static constexpr const int id = 0x0A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,AnimationCellData>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.valid, LCF_REFL_S(AnimationCellData)(), LCF_REFL_M(AnimationCellData, valid)());
		v(s, s.cell_id, LCF_REFL_S(AnimationCellData)(), LCF_REFL_M(AnimationCellData, cell_id)());
		v(s, s.x, LCF_REFL_S(AnimationCellData)(), LCF_REFL_M(AnimationCellData, x)());
		v(s, s.y, LCF_REFL_S(AnimationCellData)(), LCF_REFL_M(AnimationCellData, y)());
		v(s, s.zoom, LCF_REFL_S(AnimationCellData)(), LCF_REFL_M(AnimationCellData, zoom)());
		v(s, s.tone_red, LCF_REFL_S(AnimationCellData)(), LCF_REFL_M(AnimationCellData, tone_red)());
		v(s, s.tone_green, LCF_REFL_S(AnimationCellData)(), LCF_REFL_M(AnimationCellData, tone_green)());
		v(s, s.tone_blue, LCF_REFL_S(AnimationCellData)(), LCF_REFL_M(AnimationCellData, tone_blue)());
		v(s, s.tone_gray, LCF_REFL_S(AnimationCellData)(), LCF_REFL_M(AnimationCellData, tone_gray)());
		v(s, s.transparency, LCF_REFL_S(AnimationCellData)(), LCF_REFL_M(AnimationCellData, transparency)());
	}

} // namespace rpg
} // namespace lcf

#endif
