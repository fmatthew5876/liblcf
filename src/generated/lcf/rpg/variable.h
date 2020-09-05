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

#ifndef LCF_RPG_VARIABLE_H
#define LCF_RPG_VARIABLE_H

#include <lcf/rpg/reflect.h>

// Headers
#include "lcf/dbstring.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Variable class.
 */
namespace lcf {
namespace rpg {
	class Variable {
	public:
		int ID = 0;
		DBString name;
	};

	inline bool operator==(const Variable& l, const Variable& r) {
		return l.name == r.name;
	}

	inline bool operator!=(const Variable& l, const Variable& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Variable& obj);

	template <> struct ReflectStruct<Variable> {
		using type_t = Variable;
		static constexpr const auto& = "Variable";
	};
	// String
	template <> struct ReflectMember<Variable,DBString,&Variable::name> {
		using struct_t = Variable;
		using type_t = DBString;
		static constexpr const auto& name[] = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
