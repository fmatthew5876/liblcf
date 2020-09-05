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

#ifndef LCF_RPG_BATTLECOMMAND_H
#define LCF_RPG_BATTLECOMMAND_H

#include <lcf/rpg/reflect.h>

// Headers
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::BattleCommand class.
 */
namespace lcf {
namespace rpg {
	class BattleCommand {
	public:
		enum Type {
			Type_attack = 0,
			Type_skill = 1,
			Type_subskill = 2,
			Type_defense = 3,
			Type_item = 4,
			Type_escape = 5,
			Type_special = 6
		};
		static constexpr auto kTypeTags = lcf::makeEnumTags<Type>(
			"attack",
			"skill",
			"subskill",
			"defense",
			"item",
			"escape",
			"special"
		);

		int ID = 0;
		DBString name;
		int32_t type = 0;
	};
	inline std::ostream& operator<<(std::ostream& os, BattleCommand::Type code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const BattleCommand& l, const BattleCommand& r) {
		return l.name == r.name
		&& l.type == r.type;
	}

	inline bool operator!=(const BattleCommand& l, const BattleCommand& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const BattleCommand& obj);

	template <> struct ReflectStruct<BattleCommand> {
		using type_t = BattleCommand;
		static constexpr const auto& name = "BattleCommand";
	};
	// String
	template <> struct ReflectMember<BattleCommand,DBString,&BattleCommand::name> {
		using struct_t = BattleCommand;
		using type_t = DBString;
		static constexpr const auto& name = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<BattleCommand,int32_t,&BattleCommand::type> {
		using struct_t = BattleCommand;
		using type_t = int32_t;
		static constexpr const auto& name = "type";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,BattleCommand>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.name, LCF_REFL_S(BattleCommand)(), LCF_REFL_M(BattleCommand, name)());
		v(s, s.type, LCF_REFL_S(BattleCommand)(), LCF_REFL_M(BattleCommand, type)());
	}

} // namespace rpg
} // namespace lcf

#endif
