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

#ifndef LCF_RPG_SAVEEVENTEXECSTATE_H
#define LCF_RPG_SAVEEVENTEXECSTATE_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/rpg/saveeventexecframe.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveEventExecState class.
 */
namespace lcf {
namespace rpg {
	class SaveEventExecState {
	public:
		std::vector<SaveEventExecFrame> stack;
		bool show_message = false;
		bool abort_on_escape = false;
		bool wait_movement = false;
		bool keyinput_wait = false;
		uint8_t keyinput_variable = 0;
		bool keyinput_all_directions = false;
		bool keyinput_decision = false;
		bool keyinput_cancel = false;
		bool keyinput_2kshift_2k3numbers = false;
		bool keyinput_2kdown_2k3operators = false;
		bool keyinput_2kleft_2k3shift = false;
		bool keyinput_2kright = false;
		bool keyinput_2kup = false;
		int32_t wait_time = 0;
		int32_t keyinput_time_variable = 0;
		bool keyinput_2k3down = false;
		bool keyinput_2k3left = false;
		bool keyinput_2k3right = false;
		bool keyinput_2k3up = false;
		bool keyinput_timed = false;
		bool wait_key_enter = false;
	};

	inline bool operator==(const SaveEventExecState& l, const SaveEventExecState& r) {
		return l.stack == r.stack
		&& l.show_message == r.show_message
		&& l.abort_on_escape == r.abort_on_escape
		&& l.wait_movement == r.wait_movement
		&& l.keyinput_wait == r.keyinput_wait
		&& l.keyinput_variable == r.keyinput_variable
		&& l.keyinput_all_directions == r.keyinput_all_directions
		&& l.keyinput_decision == r.keyinput_decision
		&& l.keyinput_cancel == r.keyinput_cancel
		&& l.keyinput_2kshift_2k3numbers == r.keyinput_2kshift_2k3numbers
		&& l.keyinput_2kdown_2k3operators == r.keyinput_2kdown_2k3operators
		&& l.keyinput_2kleft_2k3shift == r.keyinput_2kleft_2k3shift
		&& l.keyinput_2kright == r.keyinput_2kright
		&& l.keyinput_2kup == r.keyinput_2kup
		&& l.wait_time == r.wait_time
		&& l.keyinput_time_variable == r.keyinput_time_variable
		&& l.keyinput_2k3down == r.keyinput_2k3down
		&& l.keyinput_2k3left == r.keyinput_2k3left
		&& l.keyinput_2k3right == r.keyinput_2k3right
		&& l.keyinput_2k3up == r.keyinput_2k3up
		&& l.keyinput_timed == r.keyinput_timed
		&& l.wait_key_enter == r.wait_key_enter;
	}

	inline bool operator!=(const SaveEventExecState& l, const SaveEventExecState& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveEventExecState& obj);

	template <> struct ReflectStruct<SaveEventExecState> {
		using type_t = SaveEventExecState;
		static constexpr const auto& = "SaveEventExecState";
	};
	// array
	template <> struct ReflectMember<SaveEventExecState,std::vector<SaveEventExecFrame>,&SaveEventExecState::stack> {
		using struct_t = SaveEventExecState;
		using type_t = std::vector<SaveEventExecFrame>;
		static constexpr const auto& name[] = "stack";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Show Message command has been executed in the current move route
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::show_message> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "show_message";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag which is set before a fight if the EnemyEncounter event command had battle_escape_mode set to 1 (abort event on escape). After the fight; the interpreter checks if the battle result was an escape and this flag was set and abort the event in that case.
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::abort_on_escape> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "abort_on_escape";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Whether Wait for all movement is in effect
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::wait_movement> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "wait_movement";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::keyinput_wait> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "keyinput_wait";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveEventExecState,uint8_t,&SaveEventExecState::keyinput_variable> {
		using struct_t = SaveEventExecState;
		using type_t = uint8_t;
		static constexpr const auto& name[] = "keyinput_variable";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::keyinput_all_directions> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "keyinput_all_directions";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::keyinput_decision> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "keyinput_decision";
		static constexpr const int id = 0x18;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::keyinput_cancel> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "keyinput_cancel";
		static constexpr const int id = 0x19;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// In RM2k Value this is keyinput_shift
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::keyinput_2kshift_2k3numbers> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "keyinput_2kshift_2k3numbers";
		static constexpr const int id = 0x1A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// In Value keyinput_down
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::keyinput_2kdown_2k3operators> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "keyinput_2kdown_2k3operators";
		static constexpr const int id = 0x1B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// In Value keyinput_left
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::keyinput_2kleft_2k3shift> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "keyinput_2kleft_2k3shift";
		static constexpr const int id = 0x1C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Only in Value
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::keyinput_2kright> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "keyinput_2kright";
		static constexpr const int id = 0x1D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Only in Value
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::keyinput_2kup> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "keyinput_2kup";
		static constexpr const int id = 0x1E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveEventExecState,int32_t,&SaveEventExecState::wait_time> {
		using struct_t = SaveEventExecState;
		using type_t = int32_t;
		static constexpr const auto& name[] = "wait_time";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveEventExecState,int32_t,&SaveEventExecState::keyinput_time_variable> {
		using struct_t = SaveEventExecState;
		using type_t = int32_t;
		static constexpr const auto& name[] = "keyinput_time_variable";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::keyinput_2k3down> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "keyinput_2k3down";
		static constexpr const int id = 0x23;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::keyinput_2k3left> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "keyinput_2k3left";
		static constexpr const int id = 0x24;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::keyinput_2k3right> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "keyinput_2k3right";
		static constexpr const int id = 0x25;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::keyinput_2k3up> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "keyinput_2k3up";
		static constexpr const int id = 0x26;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::keyinput_timed> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "keyinput_timed";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Used for a wait command WaitForKeyInput rm2k3 feature to wait for decision key press.
	template <> struct ReflectMember<SaveEventExecState,bool,&SaveEventExecState::wait_key_enter> {
		using struct_t = SaveEventExecState;
		using type_t = bool;
		static constexpr const auto& name[] = "wait_key_enter";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
