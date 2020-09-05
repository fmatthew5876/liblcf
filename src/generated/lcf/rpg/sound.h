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

#ifndef LCF_RPG_SOUND_H
#define LCF_RPG_SOUND_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <string>
#include <ostream>
#include <type_traits>

/**
 * rpg::Sound class.
 */
namespace lcf {
namespace rpg {
	class Sound {
	public:
		std::string name = "(OFF)";
		int32_t volume = 100;
		int32_t tempo = 100;
		int32_t balance = 50;
	};

	inline bool operator==(const Sound& l, const Sound& r) {
		return l.name == r.name
		&& l.volume == r.volume
		&& l.tempo == r.tempo
		&& l.balance == r.balance;
	}

	inline bool operator!=(const Sound& l, const Sound& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Sound& obj);

	template <> struct ReflectStruct<Sound> {
		using type_t = Sound;
		static constexpr const auto& = "Sound";
	};
	// String
	template <> struct ReflectMember<Sound,std::string,&Sound::name> {
		using struct_t = Sound;
		using type_t = std::string;
		static constexpr const auto& name[] = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<Sound,int32_t,&Sound::volume> {
		using struct_t = Sound;
		using type_t = int32_t;
		static constexpr const auto& name[] = "volume";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Sound,int32_t,&Sound::tempo> {
		using struct_t = Sound;
		using type_t = int32_t;
		static constexpr const auto& name[] = "tempo";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Sound,int32_t,&Sound::balance> {
		using struct_t = Sound;
		using type_t = int32_t;
		static constexpr const auto& name[] = "balance";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
