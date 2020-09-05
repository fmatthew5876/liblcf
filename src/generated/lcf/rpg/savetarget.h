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

#ifndef LCF_RPG_SAVETARGET_H
#define LCF_RPG_SAVETARGET_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveTarget class.
 */
namespace lcf {
namespace rpg {
	class SaveTarget {
	public:
		int ID = 0;
		int32_t map_id = 0;
		int32_t map_x = 0;
		int32_t map_y = 0;
		bool switch_on = false;
		int32_t switch_id = 0;
	};

	inline bool operator==(const SaveTarget& l, const SaveTarget& r) {
		return l.map_id == r.map_id
		&& l.map_x == r.map_x
		&& l.map_y == r.map_y
		&& l.switch_on == r.switch_on
		&& l.switch_id == r.switch_id;
	}

	inline bool operator!=(const SaveTarget& l, const SaveTarget& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveTarget& obj);

	template <> struct ReflectStruct<SaveTarget> {
		using type_t = SaveTarget;
		static constexpr const auto& name = "SaveTarget";
	};
	// int
	template <> struct ReflectMember<SaveTarget,int32_t,&SaveTarget::map_id> {
		using struct_t = SaveTarget;
		using type_t = int32_t;
		static constexpr const auto& name = "map_id";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveTarget,int32_t,&SaveTarget::map_x> {
		using struct_t = SaveTarget;
		using type_t = int32_t;
		static constexpr const auto& name = "map_x";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveTarget,int32_t,&SaveTarget::map_y> {
		using struct_t = SaveTarget;
		using type_t = int32_t;
		static constexpr const auto& name = "map_y";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// bool
	template <> struct ReflectMember<SaveTarget,bool,&SaveTarget::switch_on> {
		using struct_t = SaveTarget;
		using type_t = bool;
		static constexpr const auto& name = "switch_on";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveTarget,int32_t,&SaveTarget::switch_id> {
		using struct_t = SaveTarget;
		using type_t = int32_t;
		static constexpr const auto& name = "switch_id";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,SaveTarget>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.map_id, LCF_REFL_S(SaveTarget)(), LCF_REFL_M(SaveTarget, map_id)());
		v(s, s.map_x, LCF_REFL_S(SaveTarget)(), LCF_REFL_M(SaveTarget, map_x)());
		v(s, s.map_y, LCF_REFL_S(SaveTarget)(), LCF_REFL_M(SaveTarget, map_y)());
		v(s, s.switch_on, LCF_REFL_S(SaveTarget)(), LCF_REFL_M(SaveTarget, switch_on)());
		v(s, s.switch_id, LCF_REFL_S(SaveTarget)(), LCF_REFL_M(SaveTarget, switch_id)());
	}

} // namespace rpg
} // namespace lcf

#endif
