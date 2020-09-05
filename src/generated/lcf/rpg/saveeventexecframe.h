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

#ifndef LCF_RPG_SAVEEVENTEXECFRAME_H
#define LCF_RPG_SAVEEVENTEXECFRAME_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/rpg/eventcommand.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveEventExecFrame class.
 */
namespace lcf {
namespace rpg {
	class SaveEventExecFrame {
	public:
		int ID = 0;
		std::vector<EventCommand> commands;
		int32_t current_command = 0;
		int32_t event_id = 0;
		bool triggered_by_decision_key = false;
		std::vector<uint8_t> subcommand_path;
	};

	inline bool operator==(const SaveEventExecFrame& l, const SaveEventExecFrame& r) {
		return l.commands == r.commands
		&& l.current_command == r.current_command
		&& l.event_id == r.event_id
		&& l.triggered_by_decision_key == r.triggered_by_decision_key
		&& l.subcommand_path == r.subcommand_path;
	}

	inline bool operator!=(const SaveEventExecFrame& l, const SaveEventExecFrame& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveEventExecFrame& obj);

	template <> struct ReflectStruct<SaveEventExecFrame> {
		using type_t = SaveEventExecFrame;
		static constexpr const auto& name = "SaveEventExecFrame";
	};
	// event command list
	template <> struct ReflectMember<SaveEventExecFrame,std::vector<EventCommand>,&SaveEventExecFrame::commands> {
		using struct_t = SaveEventExecFrame;
		using type_t = std::vector<EventCommand>;
		static constexpr const auto& name = "commands";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// int
	template <> struct ReflectMember<SaveEventExecFrame,int32_t,&SaveEventExecFrame::current_command> {
		using struct_t = SaveEventExecFrame;
		using type_t = int32_t;
		static constexpr const auto& name = "current_command";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 0 if it's common event or in other map
	template <> struct ReflectMember<SaveEventExecFrame,int32_t,&SaveEventExecFrame::event_id> {
		using struct_t = SaveEventExecFrame;
		using type_t = int32_t;
		static constexpr const auto& name = "event_id";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Event was triggered by the Action Key
	template <> struct ReflectMember<SaveEventExecFrame,bool,&SaveEventExecFrame::triggered_by_decision_key> {
		using struct_t = SaveEventExecFrame;
		using type_t = bool;
		static constexpr const auto& name = "triggered_by_decision_key";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// byte For each indention level in the script; an ID is stored there which corresponds to the branch to take in case a command allows multiple branches. For example; the Show Choice command would write the result of the choice (for example 2 for the third item) into the current indention level's entry in this array; and the script processor would later look for the Case subcommand with the corresponding ID; if any; and jump to that one (if none found; it would jump to the End Case subcommand). Once the jump is executed; the ID is set to 255 (probably a protection mechanism even though there should normally not be multiple subcommands with the same ID).
	template <> struct ReflectMember<SaveEventExecFrame,std::vector<uint8_t>,&SaveEventExecFrame::subcommand_path> {
		using struct_t = SaveEventExecFrame;
		using type_t = std::vector<uint8_t>;
		static constexpr const auto& name = "subcommand_path";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,SaveEventExecFrame>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.commands, LCF_REFL_S(SaveEventExecFrame)(), LCF_REFL_M(SaveEventExecFrame, commands)());
		for (auto&& e: s.commands) {
			ForEachMember(e, v);
		}
		v(s, s.current_command, LCF_REFL_S(SaveEventExecFrame)(), LCF_REFL_M(SaveEventExecFrame, current_command)());
		v(s, s.event_id, LCF_REFL_S(SaveEventExecFrame)(), LCF_REFL_M(SaveEventExecFrame, event_id)());
		v(s, s.triggered_by_decision_key, LCF_REFL_S(SaveEventExecFrame)(), LCF_REFL_M(SaveEventExecFrame, triggered_by_decision_key)());
		v(s, s.subcommand_path, LCF_REFL_S(SaveEventExecFrame)(), LCF_REFL_M(SaveEventExecFrame, subcommand_path)());
	}

} // namespace rpg
} // namespace lcf

#endif
