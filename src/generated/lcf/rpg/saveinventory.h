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

#ifndef LCF_RPG_SAVEINVENTORY_H
#define LCF_RPG_SAVEINVENTORY_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveInventory class.
 */
namespace lcf {
namespace rpg {
	class SaveInventory {
	public:
		void Setup();
		std::vector<int16_t> party;
		std::vector<int16_t> item_ids;
		std::vector<uint8_t> item_counts;
		std::vector<uint8_t> item_usage;
		int32_t gold = 0;
		int32_t timer1_frames = 0;
		bool timer1_active = false;
		bool timer1_visible = false;
		bool timer1_battle = false;
		int32_t timer2_frames = 0;
		bool timer2_active = false;
		bool timer2_visible = false;
		bool timer2_battle = false;
		int32_t battles = 0;
		int32_t defeats = 0;
		int32_t escapes = 0;
		int32_t victories = 0;
		int32_t turns = 0;
		int32_t steps = 0;
	};

	inline bool operator==(const SaveInventory& l, const SaveInventory& r) {
		return l.party == r.party
		&& l.item_ids == r.item_ids
		&& l.item_counts == r.item_counts
		&& l.item_usage == r.item_usage
		&& l.gold == r.gold
		&& l.timer1_frames == r.timer1_frames
		&& l.timer1_active == r.timer1_active
		&& l.timer1_visible == r.timer1_visible
		&& l.timer1_battle == r.timer1_battle
		&& l.timer2_frames == r.timer2_frames
		&& l.timer2_active == r.timer2_active
		&& l.timer2_visible == r.timer2_visible
		&& l.timer2_battle == r.timer2_battle
		&& l.battles == r.battles
		&& l.defeats == r.defeats
		&& l.escapes == r.escapes
		&& l.victories == r.victories
		&& l.turns == r.turns
		&& l.steps == r.steps;
	}

	inline bool operator!=(const SaveInventory& l, const SaveInventory& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveInventory& obj);

	template <> struct ReflectStruct<SaveInventory> {
		using type_t = SaveInventory;
		static constexpr const auto& name = "SaveInventory";
	};
	// ?
	template <> struct ReflectMember<SaveInventory,std::vector<int16_t>,&SaveInventory::party> {
		using struct_t = SaveInventory;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name = "party";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// short[]: item list
	template <> struct ReflectMember<SaveInventory,std::vector<int16_t>,&SaveInventory::item_ids> {
		using struct_t = SaveInventory;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name = "item_ids";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// ?
	template <> struct ReflectMember<SaveInventory,std::vector<uint8_t>,&SaveInventory::item_counts> {
		using struct_t = SaveInventory;
		using type_t = std::vector<uint8_t>;
		static constexpr const auto& name = "item_counts";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// ?
	template <> struct ReflectMember<SaveInventory,std::vector<uint8_t>,&SaveInventory::item_usage> {
		using struct_t = SaveInventory;
		using type_t = std::vector<uint8_t>;
		static constexpr const auto& name = "item_usage";
		static constexpr const int id = 0x0E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// int
	template <> struct ReflectMember<SaveInventory,int32_t,&SaveInventory::gold> {
		using struct_t = SaveInventory;
		using type_t = int32_t;
		static constexpr const auto& name = "gold";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Number of frames remaining for timer1; When set; the value is seconds * 60 + 59.
	template <> struct ReflectMember<SaveInventory,int32_t,&SaveInventory::timer1_frames> {
		using struct_t = SaveInventory;
		using type_t = int32_t;
		static constexpr const auto& name = "timer1_frames";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// If timer1 is active
	template <> struct ReflectMember<SaveInventory,bool,&SaveInventory::timer1_active> {
		using struct_t = SaveInventory;
		using type_t = bool;
		static constexpr const auto& name = "timer1_active";
		static constexpr const int id = 0x18;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// If timer1 is visible
	template <> struct ReflectMember<SaveInventory,bool,&SaveInventory::timer1_visible> {
		using struct_t = SaveInventory;
		using type_t = bool;
		static constexpr const auto& name = "timer1_visible";
		static constexpr const int id = 0x19;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// If timer1 will be active in battles
	template <> struct ReflectMember<SaveInventory,bool,&SaveInventory::timer1_battle> {
		using struct_t = SaveInventory;
		using type_t = bool;
		static constexpr const auto& name = "timer1_battle";
		static constexpr const int id = 0x1A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Number of frames remaining for timer2; When set; the value is seconds * 60 + 59.
	template <> struct ReflectMember<SaveInventory,int32_t,&SaveInventory::timer2_frames> {
		using struct_t = SaveInventory;
		using type_t = int32_t;
		static constexpr const auto& name = "timer2_frames";
		static constexpr const int id = 0x1B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// If timer2 is active
	template <> struct ReflectMember<SaveInventory,bool,&SaveInventory::timer2_active> {
		using struct_t = SaveInventory;
		using type_t = bool;
		static constexpr const auto& name = "timer2_active";
		static constexpr const int id = 0x1C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// If timer2 is visible
	template <> struct ReflectMember<SaveInventory,bool,&SaveInventory::timer2_visible> {
		using struct_t = SaveInventory;
		using type_t = bool;
		static constexpr const auto& name = "timer2_visible";
		static constexpr const int id = 0x1D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// If timer2 will be active in battles
	template <> struct ReflectMember<SaveInventory,bool,&SaveInventory::timer2_battle> {
		using struct_t = SaveInventory;
		using type_t = bool;
		static constexpr const auto& name = "timer2_battle";
		static constexpr const int id = 0x1E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveInventory,int32_t,&SaveInventory::battles> {
		using struct_t = SaveInventory;
		using type_t = int32_t;
		static constexpr const auto& name = "battles";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveInventory,int32_t,&SaveInventory::defeats> {
		using struct_t = SaveInventory;
		using type_t = int32_t;
		static constexpr const auto& name = "defeats";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveInventory,int32_t,&SaveInventory::escapes> {
		using struct_t = SaveInventory;
		using type_t = int32_t;
		static constexpr const auto& name = "escapes";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveInventory,int32_t,&SaveInventory::victories> {
		using struct_t = SaveInventory;
		using type_t = int32_t;
		static constexpr const auto& name = "victories";
		static constexpr const int id = 0x23;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Number of turns passed in the latest battle fought. RPG2000: 'turn' passes after every character (enemies and heroes both) performed an action each. RPG2003: every time a hero or enemy performs an action that is considered a 'turn'.
	template <> struct ReflectMember<SaveInventory,int32_t,&SaveInventory::turns> {
		using struct_t = SaveInventory;
		using type_t = int32_t;
		static constexpr const auto& name = "turns";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Number of steps taken in the field.
	template <> struct ReflectMember<SaveInventory,int32_t,&SaveInventory::steps> {
		using struct_t = SaveInventory;
		using type_t = int32_t;
		static constexpr const auto& name = "steps";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,SaveInventory>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.party, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, party)());
		v(s, s.item_ids, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, item_ids)());
		v(s, s.item_counts, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, item_counts)());
		v(s, s.item_usage, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, item_usage)());
		v(s, s.gold, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, gold)());
		v(s, s.timer1_frames, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, timer1_frames)());
		v(s, s.timer1_active, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, timer1_active)());
		v(s, s.timer1_visible, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, timer1_visible)());
		v(s, s.timer1_battle, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, timer1_battle)());
		v(s, s.timer2_frames, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, timer2_frames)());
		v(s, s.timer2_active, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, timer2_active)());
		v(s, s.timer2_visible, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, timer2_visible)());
		v(s, s.timer2_battle, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, timer2_battle)());
		v(s, s.battles, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, battles)());
		v(s, s.defeats, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, defeats)());
		v(s, s.escapes, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, escapes)());
		v(s, s.victories, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, victories)());
		v(s, s.turns, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, turns)());
		v(s, s.steps, LCF_REFL_S(SaveInventory)(), LCF_REFL_M(SaveInventory, steps)());
	}

} // namespace rpg
} // namespace lcf

#endif
