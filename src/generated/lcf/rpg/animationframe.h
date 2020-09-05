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

#ifndef LCF_RPG_ANIMATIONFRAME_H
#define LCF_RPG_ANIMATIONFRAME_H

#include <lcf/rpg/reflect.h>

// Headers
#include <vector>
#include "lcf/rpg/animationcelldata.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::AnimationFrame class.
 */
namespace lcf {
namespace rpg {
	class AnimationFrame {
	public:
		int ID = 0;
		std::vector<AnimationCellData> cells;
	};

	inline bool operator==(const AnimationFrame& l, const AnimationFrame& r) {
		return l.cells == r.cells;
	}

	inline bool operator!=(const AnimationFrame& l, const AnimationFrame& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const AnimationFrame& obj);

	template <> struct ReflectStruct<AnimationFrame> {
		using type_t = AnimationFrame;
		static constexpr const auto& name = "AnimationFrame";
	};
	// Array - rpg::AnimationCellData
	template <> struct ReflectMember<AnimationFrame,std::vector<AnimationCellData>,&AnimationFrame::cells> {
		using struct_t = AnimationFrame;
		using type_t = std::vector<AnimationCellData>;
		static constexpr const auto& name = "cells";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,AnimationFrame>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.cells, LCF_REFL_S(AnimationFrame)(), LCF_REFL_M(AnimationFrame, cells)());
		for (auto&& e: s.cells) {
			ForEachMember(e, v);
		}
	}

} // namespace rpg
} // namespace lcf

#endif
