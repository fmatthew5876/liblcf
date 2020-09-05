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

#ifndef LCF_RPG_BATTLERANIMATION_H
#define LCF_RPG_BATTLERANIMATION_H

#include <lcf/rpg/reflect.h>

// Headers
#include <vector>
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include "lcf/rpg/battleranimationextension.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::BattlerAnimation class.
 */
namespace lcf {
namespace rpg {
	class BattlerAnimation {
	public:
		enum Speed {
			Speed_slow = 0,
			Speed_normal = 8,
			Speed_fast = 14
		};

		int ID = 0;
		DBString name;
		int32_t speed = 0;
		std::vector<BattlerAnimationExtension> base_data;
		std::vector<BattlerAnimationExtension> weapon_data;
	};
	inline std::ostream& operator<<(std::ostream& os, BattlerAnimation::Speed code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const BattlerAnimation& l, const BattlerAnimation& r) {
		return l.name == r.name
		&& l.speed == r.speed
		&& l.base_data == r.base_data
		&& l.weapon_data == r.weapon_data;
	}

	inline bool operator!=(const BattlerAnimation& l, const BattlerAnimation& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const BattlerAnimation& obj);

	template <> struct ReflectStruct<BattlerAnimation> {
		using type_t = BattlerAnimation;
		static constexpr const auto& name = "BattlerAnimation";
	};
	// String
	template <> struct ReflectMember<BattlerAnimation,DBString,&BattlerAnimation::name> {
		using struct_t = BattlerAnimation;
		using type_t = DBString;
		static constexpr const auto& name = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<BattlerAnimation,int32_t,&BattlerAnimation::speed> {
		using struct_t = BattlerAnimation;
		using type_t = int32_t;
		static constexpr const auto& name = "speed";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - rpg::BattlerAnimationExtension
	template <> struct ReflectMember<BattlerAnimation,std::vector<BattlerAnimationExtension>,&BattlerAnimation::base_data> {
		using struct_t = BattlerAnimation;
		using type_t = std::vector<BattlerAnimationExtension>;
		static constexpr const auto& name = "base_data";
		static constexpr const int id = 0x0A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - rpg::BattlerAnimationExtension
	template <> struct ReflectMember<BattlerAnimation,std::vector<BattlerAnimationExtension>,&BattlerAnimation::weapon_data> {
		using struct_t = BattlerAnimation;
		using type_t = std::vector<BattlerAnimationExtension>;
		static constexpr const auto& name = "weapon_data";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,BattlerAnimation>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.name, LCF_REFL_S(BattlerAnimation)(), LCF_REFL_M(BattlerAnimation, name)());
		v(s, s.speed, LCF_REFL_S(BattlerAnimation)(), LCF_REFL_M(BattlerAnimation, speed)());
		v(s, s.base_data, LCF_REFL_S(BattlerAnimation)(), LCF_REFL_M(BattlerAnimation, base_data)());
		for (auto&& e: s.base_data) {
			ForEachMember(e, v);
		}
		v(s, s.weapon_data, LCF_REFL_S(BattlerAnimation)(), LCF_REFL_M(BattlerAnimation, weapon_data)());
		for (auto&& e: s.weapon_data) {
			ForEachMember(e, v);
		}
	}

} // namespace rpg
} // namespace lcf

#endif
