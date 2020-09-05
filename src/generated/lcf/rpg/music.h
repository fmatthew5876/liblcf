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

#ifndef LCF_RPG_MUSIC_H
#define LCF_RPG_MUSIC_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <string>
#include <ostream>
#include <type_traits>

/**
 * rpg::Music class.
 */
namespace lcf {
namespace rpg {
	class Music {
	public:
		std::string name = "(OFF)";
		int32_t fadein = 0;
		int32_t volume = 100;
		int32_t tempo = 100;
		int32_t balance = 50;
	};

	inline bool operator==(const Music& l, const Music& r) {
		return l.name == r.name
		&& l.fadein == r.fadein
		&& l.volume == r.volume
		&& l.tempo == r.tempo
		&& l.balance == r.balance;
	}

	inline bool operator!=(const Music& l, const Music& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Music& obj);

	template <> struct ReflectStruct<Music> {
		using type_t = Music;
		static constexpr const auto& name = "Music";
	};
	// String
	template <> struct ReflectMember<Music,std::string,&Music::name> {
		using struct_t = Music;
		using type_t = std::string;
		static constexpr const auto& name = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Integer
	template <> struct ReflectMember<Music,int32_t,&Music::fadein> {
		using struct_t = Music;
		using type_t = int32_t;
		static constexpr const auto& name = "fadein";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Music,int32_t,&Music::volume> {
		using struct_t = Music;
		using type_t = int32_t;
		static constexpr const auto& name = "volume";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Music,int32_t,&Music::tempo> {
		using struct_t = Music;
		using type_t = int32_t;
		static constexpr const auto& name = "tempo";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Music,int32_t,&Music::balance> {
		using struct_t = Music;
		using type_t = int32_t;
		static constexpr const auto& name = "balance";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,Music>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.name, LCF_REFL_S(Music)(), LCF_REFL_M(Music, name)());
		v(s, s.fadein, LCF_REFL_S(Music)(), LCF_REFL_M(Music, fadein)());
		v(s, s.volume, LCF_REFL_S(Music)(), LCF_REFL_M(Music, volume)());
		v(s, s.tempo, LCF_REFL_S(Music)(), LCF_REFL_M(Music, tempo)());
		v(s, s.balance, LCF_REFL_S(Music)(), LCF_REFL_M(Music, balance)());
	}

} // namespace rpg
} // namespace lcf

#endif
