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

#ifndef LCF_RPG_LEARNING_H
#define LCF_RPG_LEARNING_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <ostream>
#include <type_traits>

/**
 * rpg::Learning class.
 */
namespace lcf {
namespace rpg {
	class Learning {
	public:
		int ID = 0;
		int32_t level = 1;
		int32_t skill_id = 1;
	};

	inline bool operator==(const Learning& l, const Learning& r) {
		return l.level == r.level
		&& l.skill_id == r.skill_id;
	}

	inline bool operator!=(const Learning& l, const Learning& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Learning& obj);

	template <> struct ReflectStruct<Learning> {
		using type_t = Learning;
		static constexpr const auto& name = "Learning";
	};
	// Integer
	template <> struct ReflectMember<Learning,int32_t,&Learning::level> {
		using struct_t = Learning;
		using type_t = int32_t;
		static constexpr const auto& name = "level";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Learning,int32_t,&Learning::skill_id> {
		using struct_t = Learning;
		using type_t = int32_t;
		static constexpr const auto& name = "skill_id";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,Learning>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.level, LCF_REFL_S(Learning)(), LCF_REFL_M(Learning, level)());
		v(s, s.skill_id, LCF_REFL_S(Learning)(), LCF_REFL_M(Learning, skill_id)());
	}

} // namespace rpg
} // namespace lcf

#endif
