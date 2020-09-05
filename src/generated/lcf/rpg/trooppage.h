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

#ifndef LCF_RPG_TROOPPAGE_H
#define LCF_RPG_TROOPPAGE_H

#include <lcf/rpg/reflect.h>

// Headers
#include <vector>
#include "lcf/rpg/eventcommand.h"
#include "lcf/rpg/trooppagecondition.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::TroopPage class.
 */
namespace lcf {
namespace rpg {
	class TroopPage {
	public:
		int ID = 0;
		TroopPageCondition condition;
		std::vector<EventCommand> event_commands;
	};

	inline bool operator==(const TroopPage& l, const TroopPage& r) {
		return l.condition == r.condition
		&& l.event_commands == r.event_commands;
	}

	inline bool operator!=(const TroopPage& l, const TroopPage& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const TroopPage& obj);

	template <> struct ReflectStruct<TroopPage> {
		using type_t = TroopPage;
		static constexpr const auto& = "TroopPage";
	};
	// rpg::TroopPageCondition
	template <> struct ReflectMember<TroopPage,TroopPageCondition,&TroopPage::condition> {
		using struct_t = TroopPage;
		using type_t = TroopPageCondition;
		static constexpr const auto& name[] = "condition";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - rpg::EventCommand
	template <> struct ReflectMember<TroopPage,std::vector<EventCommand>,&TroopPage::event_commands> {
		using struct_t = TroopPage;
		using type_t = std::vector<EventCommand>;
		static constexpr const auto& name[] = "event_commands";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
} // namespace rpg
} // namespace lcf

#endif
