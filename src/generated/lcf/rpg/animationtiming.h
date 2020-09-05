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

#ifndef LCF_RPG_ANIMATIONTIMING_H
#define LCF_RPG_ANIMATIONTIMING_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include "lcf/enum_tags.h"
#include "lcf/rpg/sound.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::AnimationTiming class.
 */
namespace lcf {
namespace rpg {
	class AnimationTiming {
	public:
		enum FlashScope {
			FlashScope_nothing = 0,
			FlashScope_target = 1,
			FlashScope_screen = 2
		};
		static constexpr auto kFlashScopeTags = lcf::makeEnumTags<FlashScope>(
			"nothing",
			"target",
			"screen"
		);
		enum ScreenShake {
			ScreenShake_nothing = 0,
			ScreenShake_target = 1,
			ScreenShake_screen = 2
		};
		static constexpr auto kScreenShakeTags = lcf::makeEnumTags<ScreenShake>(
			"nothing",
			"target",
			"screen"
		);

		int ID = 0;
		int32_t frame = 0;
		Sound se;
		int32_t flash_scope = 0;
		int32_t flash_red = 31;
		int32_t flash_green = 31;
		int32_t flash_blue = 31;
		int32_t flash_power = 31;
		int32_t screen_shake = 0;
	};
	inline std::ostream& operator<<(std::ostream& os, AnimationTiming::FlashScope code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, AnimationTiming::ScreenShake code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const AnimationTiming& l, const AnimationTiming& r) {
		return l.frame == r.frame
		&& l.se == r.se
		&& l.flash_scope == r.flash_scope
		&& l.flash_red == r.flash_red
		&& l.flash_green == r.flash_green
		&& l.flash_blue == r.flash_blue
		&& l.flash_power == r.flash_power
		&& l.screen_shake == r.screen_shake;
	}

	inline bool operator!=(const AnimationTiming& l, const AnimationTiming& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const AnimationTiming& obj);

	template <> struct ReflectStruct<AnimationTiming> {
		using type_t = AnimationTiming;
		static constexpr const auto& = "AnimationTiming";
	};
	// Integer
	template <> struct ReflectMember<AnimationTiming,int32_t,&AnimationTiming::frame> {
		using struct_t = AnimationTiming;
		using type_t = int32_t;
		static constexpr const auto& name[] = "frame";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// rpg::Sound
	template <> struct ReflectMember<AnimationTiming,Sound,&AnimationTiming::se> {
		using struct_t = AnimationTiming;
		using type_t = Sound;
		static constexpr const auto& name[] = "se";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<AnimationTiming,int32_t,&AnimationTiming::flash_scope> {
		using struct_t = AnimationTiming;
		using type_t = int32_t;
		static constexpr const auto& name[] = "flash_scope";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<AnimationTiming,int32_t,&AnimationTiming::flash_red> {
		using struct_t = AnimationTiming;
		using type_t = int32_t;
		static constexpr const auto& name[] = "flash_red";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<AnimationTiming,int32_t,&AnimationTiming::flash_green> {
		using struct_t = AnimationTiming;
		using type_t = int32_t;
		static constexpr const auto& name[] = "flash_green";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<AnimationTiming,int32_t,&AnimationTiming::flash_blue> {
		using struct_t = AnimationTiming;
		using type_t = int32_t;
		static constexpr const auto& name[] = "flash_blue";
		static constexpr const int id = 0x06;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<AnimationTiming,int32_t,&AnimationTiming::flash_power> {
		using struct_t = AnimationTiming;
		using type_t = int32_t;
		static constexpr const auto& name[] = "flash_power";
		static constexpr const int id = 0x07;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - This field RPG2003 only but commonly found in some 2k LDB's. We disable the is2k3 field on purpose because if its defaulted in 2k it won't be written anyway.
	template <> struct ReflectMember<AnimationTiming,int32_t,&AnimationTiming::screen_shake> {
		using struct_t = AnimationTiming;
		using type_t = int32_t;
		static constexpr const auto& name[] = "screen_shake";
		static constexpr const int id = 0x08;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
