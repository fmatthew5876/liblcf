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

#ifndef LCF_RPG_SAVECOMMONEVENT_H
#define LCF_RPG_SAVECOMMONEVENT_H

#include <lcf/rpg/reflect.h>

// Headers
#include "lcf/rpg/saveeventexecstate.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveCommonEvent class.
 */
namespace lcf {
namespace rpg {
	class SaveCommonEvent {
	public:
		int ID = 0;
		SaveEventExecState parallel_event_execstate;
	};

	inline bool operator==(const SaveCommonEvent& l, const SaveCommonEvent& r) {
		return l.parallel_event_execstate == r.parallel_event_execstate;
	}

	inline bool operator!=(const SaveCommonEvent& l, const SaveCommonEvent& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveCommonEvent& obj);

	template <> struct ReflectStruct<SaveCommonEvent> {
		using type_t = SaveCommonEvent;
		static constexpr const auto& = "SaveCommonEvent";
	};
	// chunks
	template <> struct ReflectMember<SaveCommonEvent,SaveEventExecState,&SaveCommonEvent::parallel_event_execstate> {
		using struct_t = SaveCommonEvent;
		using type_t = SaveEventExecState;
		static constexpr const auto& name[] = "parallel_event_execstate";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
} // namespace rpg
} // namespace lcf

#endif
