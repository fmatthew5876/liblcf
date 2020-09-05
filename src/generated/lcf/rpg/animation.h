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

#ifndef LCF_RPG_ANIMATION_H
#define LCF_RPG_ANIMATION_H

#include <lcf/rpg/reflect.h>

// Headers
#include <vector>
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include "lcf/rpg/animationframe.h"
#include "lcf/rpg/animationtiming.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Animation class.
 */
namespace lcf {
namespace rpg {
	class Animation {
	public:
		enum Scope {
			Scope_target = 0,
			Scope_screen = 1
		};
		static constexpr auto kScopeTags = lcf::makeEnumTags<Scope>(
			"target",
			"screen"
		);
		enum Position {
			Position_up = 0,
			Position_middle = 1,
			Position_down = 2
		};
		static constexpr auto kPositionTags = lcf::makeEnumTags<Position>(
			"up",
			"middle",
			"down"
		);

		int ID = 0;
		DBString name;
		DBString animation_name;
		bool large = false;
		std::vector<AnimationTiming> timings;
		int32_t scope = 0;
		int32_t position = 2;
		std::vector<AnimationFrame> frames;
	};
	inline std::ostream& operator<<(std::ostream& os, Animation::Scope code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, Animation::Position code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const Animation& l, const Animation& r) {
		return l.name == r.name
		&& l.animation_name == r.animation_name
		&& l.large == r.large
		&& l.timings == r.timings
		&& l.scope == r.scope
		&& l.position == r.position
		&& l.frames == r.frames;
	}

	inline bool operator!=(const Animation& l, const Animation& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Animation& obj);

	template <> struct ReflectStruct<Animation> {
		using type_t = Animation;
		static constexpr const auto& name = "Animation";
	};
	// String
	template <> struct ReflectMember<Animation,DBString,&Animation::name> {
		using struct_t = Animation;
		using type_t = DBString;
		static constexpr const auto& name = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<Animation,DBString,&Animation::animation_name> {
		using struct_t = Animation;
		using type_t = DBString;
		static constexpr const auto& name = "animation_name";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Battle2 animation when true
	template <> struct ReflectMember<Animation,bool,&Animation::large> {
		using struct_t = Animation;
		using type_t = bool;
		static constexpr const auto& name = "large";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Array - rpg::AnimationTiming
	template <> struct ReflectMember<Animation,std::vector<AnimationTiming>,&Animation::timings> {
		using struct_t = Animation;
		using type_t = std::vector<AnimationTiming>;
		static constexpr const auto& name = "timings";
		static constexpr const int id = 0x06;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<Animation,int32_t,&Animation::scope> {
		using struct_t = Animation;
		using type_t = int32_t;
		static constexpr const auto& name = "scope";
		static constexpr const int id = 0x09;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<Animation,int32_t,&Animation::position> {
		using struct_t = Animation;
		using type_t = int32_t;
		static constexpr const auto& name = "position";
		static constexpr const int id = 0x0A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Array - rpg::AnimationFrames
	template <> struct ReflectMember<Animation,std::vector<AnimationFrame>,&Animation::frames> {
		using struct_t = Animation;
		using type_t = std::vector<AnimationFrame>;
		static constexpr const auto& name = "frames";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,Animation>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.name, LCF_REFL_S(Animation)(), LCF_REFL_M(Animation, name)());
		v(s, s.animation_name, LCF_REFL_S(Animation)(), LCF_REFL_M(Animation, animation_name)());
		v(s, s.large, LCF_REFL_S(Animation)(), LCF_REFL_M(Animation, large)());
		v(s, s.timings, LCF_REFL_S(Animation)(), LCF_REFL_M(Animation, timings)());
		for (auto&& e: s.timings) {
			ForEachMember(e, v);
		}
		v(s, s.scope, LCF_REFL_S(Animation)(), LCF_REFL_M(Animation, scope)());
		v(s, s.position, LCF_REFL_S(Animation)(), LCF_REFL_M(Animation, position)());
		v(s, s.frames, LCF_REFL_S(Animation)(), LCF_REFL_M(Animation, frames)());
		for (auto&& e: s.frames) {
			ForEachMember(e, v);
		}
	}

} // namespace rpg
} // namespace lcf

#endif
