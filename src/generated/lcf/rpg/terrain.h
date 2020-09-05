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

#ifndef LCF_RPG_TERRAIN_H
#define LCF_RPG_TERRAIN_H

#include <lcf/rpg/reflect.h>

// Headers
#include <array>
#include <stdint.h>
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include "lcf/rpg/sound.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Terrain class.
 */
namespace lcf {
namespace rpg {
	class Terrain {
	public:
		enum BushDepth {
			BushDepth_normal = 0,
			BushDepth_third = 1,
			BushDepth_half = 2,
			BushDepth_full = 3
		};
		static constexpr auto kBushDepthTags = lcf::makeEnumTags<BushDepth>(
			"normal",
			"third",
			"half",
			"full"
		);
		enum BGAssociation {
			BGAssociation_background = 0,
			BGAssociation_frame = 1
		};
		static constexpr auto kBGAssociationTags = lcf::makeEnumTags<BGAssociation>(
			"background",
			"frame"
		);

		int ID = 0;
		DBString name;
		int32_t damage = 0;
		int32_t encounter_rate = 100;
		DBString background_name;
		bool boat_pass = false;
		bool ship_pass = false;
		bool airship_pass = true;
		bool airship_land = true;
		int32_t bush_depth = 0;
		Sound footstep;
		bool on_damage_se = false;
		int32_t background_type = 0;
		DBString background_a_name;
		bool background_a_scrollh = false;
		bool background_a_scrollv = false;
		int32_t background_a_scrollh_speed = 0;
		int32_t background_a_scrollv_speed = 0;
		bool background_b = false;
		DBString background_b_name;
		bool background_b_scrollh = false;
		bool background_b_scrollv = false;
		int32_t background_b_scrollh_speed = 0;
		int32_t background_b_scrollv_speed = 0;
		struct Flags {
			union {
				struct {
					bool back_party;
					bool back_enemies;
					bool lateral_party;
					bool lateral_enemies;
				};
				std::array<bool, 4> flags;
			};
			//TODO: Should try to switch to member initializers when we upgrade to VS2017.
			Flags() noexcept: back_party(false), back_enemies(false), lateral_party(false), lateral_enemies(false)
			{}
		} special_flags;
		int32_t special_back_party = 15;
		int32_t special_back_enemies = 10;
		int32_t special_lateral_party = 10;
		int32_t special_lateral_enemies = 5;
		int32_t grid_location = 0;
		int32_t grid_top_y = 120;
		int32_t grid_elongation = 392;
		int32_t grid_inclination = 16000;
	};
	inline std::ostream& operator<<(std::ostream& os, Terrain::BushDepth code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, Terrain::BGAssociation code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const Terrain::Flags& l, const Terrain::Flags& r) {
		return l.flags == r.flags;
	}

	inline bool operator!=(const Terrain::Flags& l, const Terrain::Flags& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Terrain::Flags& obj);

	inline bool operator==(const Terrain& l, const Terrain& r) {
		return l.name == r.name
		&& l.damage == r.damage
		&& l.encounter_rate == r.encounter_rate
		&& l.background_name == r.background_name
		&& l.boat_pass == r.boat_pass
		&& l.ship_pass == r.ship_pass
		&& l.airship_pass == r.airship_pass
		&& l.airship_land == r.airship_land
		&& l.bush_depth == r.bush_depth
		&& l.footstep == r.footstep
		&& l.on_damage_se == r.on_damage_se
		&& l.background_type == r.background_type
		&& l.background_a_name == r.background_a_name
		&& l.background_a_scrollh == r.background_a_scrollh
		&& l.background_a_scrollv == r.background_a_scrollv
		&& l.background_a_scrollh_speed == r.background_a_scrollh_speed
		&& l.background_a_scrollv_speed == r.background_a_scrollv_speed
		&& l.background_b == r.background_b
		&& l.background_b_name == r.background_b_name
		&& l.background_b_scrollh == r.background_b_scrollh
		&& l.background_b_scrollv == r.background_b_scrollv
		&& l.background_b_scrollh_speed == r.background_b_scrollh_speed
		&& l.background_b_scrollv_speed == r.background_b_scrollv_speed
		&& l.special_flags == r.special_flags
		&& l.special_back_party == r.special_back_party
		&& l.special_back_enemies == r.special_back_enemies
		&& l.special_lateral_party == r.special_lateral_party
		&& l.special_lateral_enemies == r.special_lateral_enemies
		&& l.grid_location == r.grid_location
		&& l.grid_top_y == r.grid_top_y
		&& l.grid_elongation == r.grid_elongation
		&& l.grid_inclination == r.grid_inclination;
	}

	inline bool operator!=(const Terrain& l, const Terrain& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Terrain& obj);

	template <> struct ReflectStruct<Terrain> {
		using type_t = Terrain;
		static constexpr const auto& name = "Terrain";
	};
	// String
	template <> struct ReflectMember<Terrain,DBString,&Terrain::name> {
		using struct_t = Terrain;
		using type_t = DBString;
		static constexpr const auto& name = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::damage> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "damage";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::encounter_rate> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "encounter_rate";
		static constexpr const int id = 0x03;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// String
	template <> struct ReflectMember<Terrain,DBString,&Terrain::background_name> {
		using struct_t = Terrain;
		using type_t = DBString;
		static constexpr const auto& name = "background_name";
		static constexpr const int id = 0x04;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Terrain,bool,&Terrain::boat_pass> {
		using struct_t = Terrain;
		using type_t = bool;
		static constexpr const auto& name = "boat_pass";
		static constexpr const int id = 0x05;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Terrain,bool,&Terrain::ship_pass> {
		using struct_t = Terrain;
		using type_t = bool;
		static constexpr const auto& name = "ship_pass";
		static constexpr const int id = 0x06;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Terrain,bool,&Terrain::airship_pass> {
		using struct_t = Terrain;
		using type_t = bool;
		static constexpr const auto& name = "airship_pass";
		static constexpr const int id = 0x07;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<Terrain,bool,&Terrain::airship_land> {
		using struct_t = Terrain;
		using type_t = bool;
		static constexpr const auto& name = "airship_land";
		static constexpr const int id = 0x09;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::bush_depth> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "bush_depth";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// rpg::Sound - RPG2003
	template <> struct ReflectMember<Terrain,Sound,&Terrain::footstep> {
		using struct_t = Terrain;
		using type_t = Sound;
		static constexpr const auto& name = "footstep";
		static constexpr const int id = 0x0F;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 1;
	};
	// Flag - RPG2003
	template <> struct ReflectMember<Terrain,bool,&Terrain::on_damage_se> {
		using struct_t = Terrain;
		using type_t = bool;
		static constexpr const auto& name = "on_damage_se";
		static constexpr const int id = 0x10;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::background_type> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "background_type";
		static constexpr const int id = 0x11;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// String - RPG2003
	template <> struct ReflectMember<Terrain,DBString,&Terrain::background_a_name> {
		using struct_t = Terrain;
		using type_t = DBString;
		static constexpr const auto& name = "background_a_name";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Flag - RPG2003
	template <> struct ReflectMember<Terrain,bool,&Terrain::background_a_scrollh> {
		using struct_t = Terrain;
		using type_t = bool;
		static constexpr const auto& name = "background_a_scrollh";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Flag - RPG2003
	template <> struct ReflectMember<Terrain,bool,&Terrain::background_a_scrollv> {
		using struct_t = Terrain;
		using type_t = bool;
		static constexpr const auto& name = "background_a_scrollv";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::background_a_scrollh_speed> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "background_a_scrollh_speed";
		static constexpr const int id = 0x18;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::background_a_scrollv_speed> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "background_a_scrollv_speed";
		static constexpr const int id = 0x19;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Flag - RPG2003
	template <> struct ReflectMember<Terrain,bool,&Terrain::background_b> {
		using struct_t = Terrain;
		using type_t = bool;
		static constexpr const auto& name = "background_b";
		static constexpr const int id = 0x1E;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// String - RPG2003
	template <> struct ReflectMember<Terrain,DBString,&Terrain::background_b_name> {
		using struct_t = Terrain;
		using type_t = DBString;
		static constexpr const auto& name = "background_b_name";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Flag - RPG2003
	template <> struct ReflectMember<Terrain,bool,&Terrain::background_b_scrollh> {
		using struct_t = Terrain;
		using type_t = bool;
		static constexpr const auto& name = "background_b_scrollh";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Flag - RPG2003
	template <> struct ReflectMember<Terrain,bool,&Terrain::background_b_scrollv> {
		using struct_t = Terrain;
		using type_t = bool;
		static constexpr const auto& name = "background_b_scrollv";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::background_b_scrollh_speed> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "background_b_scrollh_speed";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::background_b_scrollv_speed> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "background_b_scrollv_speed";
		static constexpr const int id = 0x23;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Bitflag - RPG2003
	template <> struct ReflectMember<Terrain,Terrain::Flags,&Terrain::special_flags> {
		using struct_t = Terrain;
		using type_t = Terrain::Flags;
		static constexpr const auto& name = "special_flags";
		static constexpr const int id = 0x28;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::special_back_party> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "special_back_party";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::special_back_enemies> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "special_back_enemies";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::special_lateral_party> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "special_lateral_party";
		static constexpr const int id = 0x2B;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::special_lateral_enemies> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "special_lateral_enemies";
		static constexpr const int id = 0x2C;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::grid_location> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "grid_location";
		static constexpr const int id = 0x2D;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::grid_top_y> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "grid_top_y";
		static constexpr const int id = 0x2E;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::grid_elongation> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "grid_elongation";
		static constexpr const int id = 0x2F;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<Terrain,int32_t,&Terrain::grid_inclination> {
		using struct_t = Terrain;
		using type_t = int32_t;
		static constexpr const auto& name = "grid_inclination";
		static constexpr const int id = 0x30;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,Terrain>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.name, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, name)());
		v(s, s.damage, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, damage)());
		v(s, s.encounter_rate, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, encounter_rate)());
		v(s, s.background_name, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, background_name)());
		v(s, s.boat_pass, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, boat_pass)());
		v(s, s.ship_pass, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, ship_pass)());
		v(s, s.airship_pass, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, airship_pass)());
		v(s, s.airship_land, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, airship_land)());
		v(s, s.bush_depth, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, bush_depth)());
		v(s, s.footstep, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, footstep)());
		ForEachMember(s.footstep, v);
		v(s, s.on_damage_se, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, on_damage_se)());
		v(s, s.background_type, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, background_type)());
		v(s, s.background_a_name, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, background_a_name)());
		v(s, s.background_a_scrollh, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, background_a_scrollh)());
		v(s, s.background_a_scrollv, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, background_a_scrollv)());
		v(s, s.background_a_scrollh_speed, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, background_a_scrollh_speed)());
		v(s, s.background_a_scrollv_speed, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, background_a_scrollv_speed)());
		v(s, s.background_b, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, background_b)());
		v(s, s.background_b_name, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, background_b_name)());
		v(s, s.background_b_scrollh, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, background_b_scrollh)());
		v(s, s.background_b_scrollv, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, background_b_scrollv)());
		v(s, s.background_b_scrollh_speed, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, background_b_scrollh_speed)());
		v(s, s.background_b_scrollv_speed, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, background_b_scrollv_speed)());
		v(s, s.special_flags, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, special_flags)());
		v(s, s.special_back_party, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, special_back_party)());
		v(s, s.special_back_enemies, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, special_back_enemies)());
		v(s, s.special_lateral_party, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, special_lateral_party)());
		v(s, s.special_lateral_enemies, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, special_lateral_enemies)());
		v(s, s.grid_location, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, grid_location)());
		v(s, s.grid_top_y, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, grid_top_y)());
		v(s, s.grid_elongation, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, grid_elongation)());
		v(s, s.grid_inclination, LCF_REFL_S(Terrain)(), LCF_REFL_M(Terrain, grid_inclination)());
	}

} // namespace rpg
} // namespace lcf

#endif
