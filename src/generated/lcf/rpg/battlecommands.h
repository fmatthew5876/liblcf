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

#ifndef LCF_RPG_BATTLECOMMANDS_H
#define LCF_RPG_BATTLECOMMANDS_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/enum_tags.h"
#include "lcf/rpg/battlecommand.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::BattleCommands class.
 */
namespace lcf {
namespace rpg {
	class BattleCommands {
	public:
		enum Placement {
			Placement_manual = 0,
			Placement_automatic = 1
		};
		static constexpr auto kPlacementTags = lcf::makeEnumTags<Placement>(
			"manual",
			"automatic"
		);
		enum RowShown {
			RowShown_front = 0,
			RowShown_back = 1
		};
		static constexpr auto kRowShownTags = lcf::makeEnumTags<RowShown>(
			"front",
			"back"
		);
		enum BattleType {
			BattleType_traditional = 0,
			BattleType_alternative = 1,
			BattleType_gauge = 2
		};
		static constexpr auto kBattleTypeTags = lcf::makeEnumTags<BattleType>(
			"traditional",
			"alternative",
			"gauge"
		);
		enum WindowSize {
			WindowSize_large = 0,
			WindowSize_small = 1
		};
		static constexpr auto kWindowSizeTags = lcf::makeEnumTags<WindowSize>(
			"large",
			"small"
		);
		enum Transparency {
			Transparency_opaque = 0,
			Transparency_transparent = 1
		};
		static constexpr auto kTransparencyTags = lcf::makeEnumTags<Transparency>(
			"opaque",
			"transparent"
		);
		enum Facing {
			Facing_retain = 0,
			Facing_up = 1,
			Facing_right = 2,
			Facing_down = 3,
			Facing_left = 4
		};
		static constexpr auto kFacingTags = lcf::makeEnumTags<Facing>(
			"retain",
			"up",
			"right",
			"down",
			"left"
		);

		int32_t placement = 0;
		bool death_handler_unused = 0;
		int32_t row = 0;
		int32_t battle_type = 0;
		bool unused_display_normal_parameters = true;
		std::vector<BattleCommand> commands;
		bool death_handler = 0;
		int32_t death_event = 1;
		int32_t window_size = 0;
		int32_t transparency = 0;
		bool death_teleport = false;
		int32_t death_teleport_id = 1;
		int32_t death_teleport_x = 0;
		int32_t death_teleport_y = 0;
		int32_t death_teleport_face = 0;
	};
	inline std::ostream& operator<<(std::ostream& os, BattleCommands::Placement code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, BattleCommands::RowShown code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, BattleCommands::BattleType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, BattleCommands::WindowSize code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, BattleCommands::Transparency code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, BattleCommands::Facing code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const BattleCommands& l, const BattleCommands& r) {
		return l.placement == r.placement
		&& l.death_handler_unused == r.death_handler_unused
		&& l.row == r.row
		&& l.battle_type == r.battle_type
		&& l.unused_display_normal_parameters == r.unused_display_normal_parameters
		&& l.commands == r.commands
		&& l.death_handler == r.death_handler
		&& l.death_event == r.death_event
		&& l.window_size == r.window_size
		&& l.transparency == r.transparency
		&& l.death_teleport == r.death_teleport
		&& l.death_teleport_id == r.death_teleport_id
		&& l.death_teleport_x == r.death_teleport_x
		&& l.death_teleport_y == r.death_teleport_y
		&& l.death_teleport_face == r.death_teleport_face;
	}

	inline bool operator!=(const BattleCommands& l, const BattleCommands& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const BattleCommands& obj);

	template <> struct ReflectStruct<BattleCommands> {
		using type_t = BattleCommands;
		static constexpr const auto& name = "BattleCommands";
	};
	// Integer
	template <> struct ReflectMember<BattleCommands,int32_t,&BattleCommands::placement> {
		using struct_t = BattleCommands;
		using type_t = int32_t;
		static constexpr const auto& name = "placement";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Set by the RM2k3 Editor when you enable death handler; but has no effect in RPG_RT.
	template <> struct ReflectMember<BattleCommands,bool,&BattleCommands::death_handler_unused> {
		using struct_t = BattleCommands;
		using type_t = bool;
		static constexpr const auto& name = "death_handler_unused";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<BattleCommands,int32_t,&BattleCommands::row> {
		using struct_t = BattleCommands;
		using type_t = int32_t;
		static constexpr const auto& name = "row";
		static constexpr const int id = 0x06;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<BattleCommands,int32_t,&BattleCommands::battle_type> {
		using struct_t = BattleCommands;
		using type_t = int32_t;
		static constexpr const auto& name = "battle_type";
		static constexpr const int id = 0x07;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Unused hidden checkbox Display normal parameters in RPG2003's battle settings tab
	template <> struct ReflectMember<BattleCommands,bool,&BattleCommands::unused_display_normal_parameters> {
		using struct_t = BattleCommands;
		using type_t = bool;
		static constexpr const auto& name = "unused_display_normal_parameters";
		static constexpr const int id = 0x09;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - rpg::BattleCommand
	template <> struct ReflectMember<BattleCommands,std::vector<BattleCommand>,&BattleCommands::commands> {
		using struct_t = BattleCommands;
		using type_t = std::vector<BattleCommand>;
		static constexpr const auto& name = "commands";
		static constexpr const int id = 0x0A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// True if a 2k3 random encounter death handler is active
	template <> struct ReflectMember<BattleCommands,bool,&BattleCommands::death_handler> {
		using struct_t = BattleCommands;
		using type_t = bool;
		static constexpr const auto& name = "death_handler";
		static constexpr const int id = 0x0F;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<BattleCommands,int32_t,&BattleCommands::death_event> {
		using struct_t = BattleCommands;
		using type_t = int32_t;
		static constexpr const auto& name = "death_event";
		static constexpr const int id = 0x10;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<BattleCommands,int32_t,&BattleCommands::window_size> {
		using struct_t = BattleCommands;
		using type_t = int32_t;
		static constexpr const auto& name = "window_size";
		static constexpr const int id = 0x14;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<BattleCommands,int32_t,&BattleCommands::transparency> {
		using struct_t = BattleCommands;
		using type_t = int32_t;
		static constexpr const auto& name = "transparency";
		static constexpr const int id = 0x18;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<BattleCommands,bool,&BattleCommands::death_teleport> {
		using struct_t = BattleCommands;
		using type_t = bool;
		static constexpr const auto& name = "death_teleport";
		static constexpr const int id = 0x19;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<BattleCommands,int32_t,&BattleCommands::death_teleport_id> {
		using struct_t = BattleCommands;
		using type_t = int32_t;
		static constexpr const auto& name = "death_teleport_id";
		static constexpr const int id = 0x1A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<BattleCommands,int32_t,&BattleCommands::death_teleport_x> {
		using struct_t = BattleCommands;
		using type_t = int32_t;
		static constexpr const auto& name = "death_teleport_x";
		static constexpr const int id = 0x1B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<BattleCommands,int32_t,&BattleCommands::death_teleport_y> {
		using struct_t = BattleCommands;
		using type_t = int32_t;
		static constexpr const auto& name = "death_teleport_y";
		static constexpr const int id = 0x1C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<BattleCommands,int32_t,&BattleCommands::death_teleport_face> {
		using struct_t = BattleCommands;
		using type_t = int32_t;
		static constexpr const auto& name = "death_teleport_face";
		static constexpr const int id = 0x1D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,BattleCommands>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.placement, LCF_REFL_S(BattleCommands)(), LCF_REFL_M(BattleCommands, placement)());
		v(s, s.death_handler_unused, LCF_REFL_S(BattleCommands)(), LCF_REFL_M(BattleCommands, death_handler_unused)());
		v(s, s.row, LCF_REFL_S(BattleCommands)(), LCF_REFL_M(BattleCommands, row)());
		v(s, s.battle_type, LCF_REFL_S(BattleCommands)(), LCF_REFL_M(BattleCommands, battle_type)());
		v(s, s.unused_display_normal_parameters, LCF_REFL_S(BattleCommands)(), LCF_REFL_M(BattleCommands, unused_display_normal_parameters)());
		v(s, s.commands, LCF_REFL_S(BattleCommands)(), LCF_REFL_M(BattleCommands, commands)());
		for (auto&& e: s.commands) {
			ForEachMember(e, v);
		}
		v(s, s.death_handler, LCF_REFL_S(BattleCommands)(), LCF_REFL_M(BattleCommands, death_handler)());
		v(s, s.death_event, LCF_REFL_S(BattleCommands)(), LCF_REFL_M(BattleCommands, death_event)());
		v(s, s.window_size, LCF_REFL_S(BattleCommands)(), LCF_REFL_M(BattleCommands, window_size)());
		v(s, s.transparency, LCF_REFL_S(BattleCommands)(), LCF_REFL_M(BattleCommands, transparency)());
		v(s, s.death_teleport, LCF_REFL_S(BattleCommands)(), LCF_REFL_M(BattleCommands, death_teleport)());
		v(s, s.death_teleport_id, LCF_REFL_S(BattleCommands)(), LCF_REFL_M(BattleCommands, death_teleport_id)());
		v(s, s.death_teleport_x, LCF_REFL_S(BattleCommands)(), LCF_REFL_M(BattleCommands, death_teleport_x)());
		v(s, s.death_teleport_y, LCF_REFL_S(BattleCommands)(), LCF_REFL_M(BattleCommands, death_teleport_y)());
		v(s, s.death_teleport_face, LCF_REFL_S(BattleCommands)(), LCF_REFL_M(BattleCommands, death_teleport_face)());
	}

} // namespace rpg
} // namespace lcf

#endif
