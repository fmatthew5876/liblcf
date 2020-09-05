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

#ifndef LCF_RPG_PARAMETERS_H
#define LCF_RPG_PARAMETERS_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <vector>
#include <ostream>
#include <type_traits>

/**
 * rpg::Parameters class.
 */
namespace lcf {
namespace rpg {
	class Parameters {
	public:
		void Setup(int final_level);
		std::vector<int16_t> maxhp;
		std::vector<int16_t> maxsp;
		std::vector<int16_t> attack;
		std::vector<int16_t> defense;
		std::vector<int16_t> spirit;
		std::vector<int16_t> agility;
	};

	inline bool operator==(const Parameters& l, const Parameters& r) {
		return l.maxhp == r.maxhp
		&& l.maxsp == r.maxsp
		&& l.attack == r.attack
		&& l.defense == r.defense
		&& l.spirit == r.spirit
		&& l.agility == r.agility;
	}

	inline bool operator!=(const Parameters& l, const Parameters& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Parameters& obj);

	template <> struct ReflectStruct<Parameters> {
		using type_t = Parameters;
		static constexpr const auto& = "Parameters";
	};
	// 
	template <> struct ReflectMember<Parameters,std::vector<int16_t>,&Parameters::maxhp> {
		using struct_t = Parameters;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name[] = "maxhp";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<Parameters,std::vector<int16_t>,&Parameters::maxsp> {
		using struct_t = Parameters;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name[] = "maxsp";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<Parameters,std::vector<int16_t>,&Parameters::attack> {
		using struct_t = Parameters;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name[] = "attack";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<Parameters,std::vector<int16_t>,&Parameters::defense> {
		using struct_t = Parameters;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name[] = "defense";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<Parameters,std::vector<int16_t>,&Parameters::spirit> {
		using struct_t = Parameters;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name[] = "spirit";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// 
	template <> struct ReflectMember<Parameters,std::vector<int16_t>,&Parameters::agility> {
		using struct_t = Parameters;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name[] = "agility";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
} // namespace rpg
} // namespace lcf

#endif
