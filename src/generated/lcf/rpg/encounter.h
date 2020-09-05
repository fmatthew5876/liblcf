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

#ifndef LCF_RPG_ENCOUNTER_H
#define LCF_RPG_ENCOUNTER_H

#include <lcf/rpg/reflect.h>
#include <ostream>
#include <type_traits>

/**
 * rpg::Encounter class.
 */
namespace lcf {
namespace rpg {
	class Encounter {
	public:
		int ID = 0;
		int32_t troop_id = 0;
	};

	inline bool operator==(const Encounter& l, const Encounter& r) {
		return l.troop_id == r.troop_id;
	}

	inline bool operator!=(const Encounter& l, const Encounter& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Encounter& obj);

	template <> struct ReflectStruct<Encounter> {
		using type_t = Encounter;
		static constexpr const auto& = "Encounter";
	};
	// Integer
	template <> struct ReflectMember<Encounter,int32_t,&Encounter::troop_id> {
		using struct_t = Encounter;
		using type_t = int32_t;
		static constexpr const auto& name[] = "troop_id";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
