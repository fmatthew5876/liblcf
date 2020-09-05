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

#ifndef LCF_RPG_EVENT_H
#define LCF_RPG_EVENT_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/dbstring.h"
#include "lcf/rpg/eventpage.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Event class.
 */
namespace lcf {
namespace rpg {
	class Event {
	public:
		int ID = 0;
		DBString name;
		int32_t x = 0;
		int32_t y = 0;
		std::vector<EventPage> pages;
	};

	inline bool operator==(const Event& l, const Event& r) {
		return l.name == r.name
		&& l.x == r.x
		&& l.y == r.y
		&& l.pages == r.pages;
	}

	inline bool operator!=(const Event& l, const Event& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Event& obj);

	template <> struct ReflectStruct<Event> {
		using type_t = Event;
		static constexpr const auto& name = "Event";
	};
	// String
	template <> struct ReflectMember<Event,DBString,&Event::name> {
		using struct_t = Event;
		using type_t = DBString;
		static constexpr const auto& name = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Event,int32_t,&Event::x> {
		using struct_t = Event;
		using type_t = int32_t;
		static constexpr const auto& name = "x";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Event,int32_t,&Event::y> {
		using struct_t = Event;
		using type_t = int32_t;
		static constexpr const auto& name = "y";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - rpg::EventPage
	template <> struct ReflectMember<Event,std::vector<EventPage>,&Event::pages> {
		using struct_t = Event;
		using type_t = std::vector<EventPage>;
		static constexpr const auto& name = "pages";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,Event>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.name, LCF_REFL_S(Event)(), LCF_REFL_M(Event, name)());
		v(s, s.x, LCF_REFL_S(Event)(), LCF_REFL_M(Event, x)());
		v(s, s.y, LCF_REFL_S(Event)(), LCF_REFL_M(Event, y)());
		v(s, s.pages, LCF_REFL_S(Event)(), LCF_REFL_M(Event, pages)());
		for (auto&& e: s.pages) {
			ForEachMember(e, v);
		}
	}

} // namespace rpg
} // namespace lcf

#endif
