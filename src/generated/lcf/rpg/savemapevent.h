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

#ifndef LCF_RPG_SAVEMAPEVENT_H
#define LCF_RPG_SAVEMAPEVENT_H

#include <lcf/rpg/reflect.h>

// Headers
#include "lcf/rpg/savemapeventbase.h"
#include <stdint.h>
#include "lcf/rpg/event.h"
#include "lcf/rpg/saveeventexecstate.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveMapEvent class.
 */
namespace lcf {
namespace rpg {
	class SaveMapEvent : public SaveMapEventBase {
	public:
		void Setup(const rpg::Event& event);
		int ID = 0;
		bool waiting_execution = false;
		int32_t original_move_route_index = 0;
		bool triggered_by_decision_key = false;
		SaveEventExecState parallel_event_execstate;
	};

	inline bool operator==(const SaveMapEvent& l, const SaveMapEvent& r) {
		return l.waiting_execution == r.waiting_execution
		&& l.original_move_route_index == r.original_move_route_index
		&& l.triggered_by_decision_key == r.triggered_by_decision_key
		&& l.parallel_event_execstate == r.parallel_event_execstate;
	}

	inline bool operator!=(const SaveMapEvent& l, const SaveMapEvent& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveMapEvent& obj);

	template <> struct ReflectStruct<SaveMapEvent> {
		using type_t = SaveMapEvent;
		static constexpr const auto& name = "SaveMapEvent";
	};
	// If true; this event is waiting for foreground execution.
	template <> struct ReflectMember<SaveMapEvent,bool,&SaveMapEvent::waiting_execution> {
		using struct_t = SaveMapEvent;
		using type_t = bool;
		static constexpr const auto& name = "waiting_execution";
		static constexpr const int id = 0x65;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Index of custom move route
	template <> struct ReflectMember<SaveMapEvent,int32_t,&SaveMapEvent::original_move_route_index> {
		using struct_t = SaveMapEvent;
		using type_t = int32_t;
		static constexpr const auto& name = "original_move_route_index";
		static constexpr const int id = 0x66;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// If true; this event was started by the decision key.
	template <> struct ReflectMember<SaveMapEvent,bool,&SaveMapEvent::triggered_by_decision_key> {
		using struct_t = SaveMapEvent;
		using type_t = bool;
		static constexpr const auto& name = "triggered_by_decision_key";
		static constexpr const int id = 0x67;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// chunks
	template <> struct ReflectMember<SaveMapEvent,SaveEventExecState,&SaveMapEvent::parallel_event_execstate> {
		using struct_t = SaveMapEvent;
		using type_t = SaveEventExecState;
		static constexpr const auto& name = "parallel_event_execstate";
		static constexpr const int id = 0x6C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,SaveMapEvent>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.waiting_execution, LCF_REFL_S(SaveMapEvent)(), LCF_REFL_M(SaveMapEvent, waiting_execution)());
		v(s, s.original_move_route_index, LCF_REFL_S(SaveMapEvent)(), LCF_REFL_M(SaveMapEvent, original_move_route_index)());
		v(s, s.triggered_by_decision_key, LCF_REFL_S(SaveMapEvent)(), LCF_REFL_M(SaveMapEvent, triggered_by_decision_key)());
		v(s, s.parallel_event_execstate, LCF_REFL_S(SaveMapEvent)(), LCF_REFL_M(SaveMapEvent, parallel_event_execstate)());
		ForEachMember(s.parallel_event_execstate, v);
	}

} // namespace rpg
} // namespace lcf

#endif
