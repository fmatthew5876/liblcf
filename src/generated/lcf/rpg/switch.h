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

#ifndef LCF_RPG_SWITCH_H
#define LCF_RPG_SWITCH_H

#include <lcf/rpg/reflect.h>

// Headers
#include "lcf/dbstring.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Switch class.
 */
namespace lcf {
namespace rpg {
	class Switch {
	public:
		int ID = 0;
		DBString name;
	};

	inline bool operator==(const Switch& l, const Switch& r) {
		return l.name == r.name;
	}

	inline bool operator!=(const Switch& l, const Switch& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Switch& obj);

	template <> struct ReflectStruct<Switch> {
		using type_t = Switch;
		static constexpr const auto& name = "Switch";
	};
	// String
	template <> struct ReflectMember<Switch,DBString,&Switch::name> {
		using struct_t = Switch;
		using type_t = DBString;
		static constexpr const auto& name = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,Switch>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.name, LCF_REFL_S(Switch)(), LCF_REFL_M(Switch, name)());
	}

} // namespace rpg
} // namespace lcf

#endif
