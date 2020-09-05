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

#ifndef LCF_RPG_TESTBATTLER_H
#define LCF_RPG_TESTBATTLER_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <ostream>
#include <type_traits>

/**
 * rpg::TestBattler class.
 */
namespace lcf {
namespace rpg {
	class TestBattler {
	public:
		int ID = 0;
		int32_t actor_id = 1;
		int32_t level = 1;
		int32_t weapon_id = 0;
		int32_t shield_id = 0;
		int32_t armor_id = 0;
		int32_t helmet_id = 0;
		int32_t accessory_id = 0;
	};

	inline bool operator==(const TestBattler& l, const TestBattler& r) {
		return l.actor_id == r.actor_id
		&& l.level == r.level
		&& l.weapon_id == r.weapon_id
		&& l.shield_id == r.shield_id
		&& l.armor_id == r.armor_id
		&& l.helmet_id == r.helmet_id
		&& l.accessory_id == r.accessory_id;
	}

	inline bool operator!=(const TestBattler& l, const TestBattler& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const TestBattler& obj);

	template <> struct ReflectStruct<TestBattler> {
		using type_t = TestBattler;
		static constexpr const auto& name = "TestBattler";
	};
	// Integer
	template <> struct ReflectMember<TestBattler,int32_t,&TestBattler::actor_id> {
		using struct_t = TestBattler;
		using type_t = int32_t;
		static constexpr const auto& name = "actor_id";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TestBattler,int32_t,&TestBattler::level> {
		using struct_t = TestBattler;
		using type_t = int32_t;
		static constexpr const auto& name = "level";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TestBattler,int32_t,&TestBattler::weapon_id> {
		using struct_t = TestBattler;
		using type_t = int32_t;
		static constexpr const auto& name = "weapon_id";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TestBattler,int32_t,&TestBattler::shield_id> {
		using struct_t = TestBattler;
		using type_t = int32_t;
		static constexpr const auto& name = "shield_id";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TestBattler,int32_t,&TestBattler::armor_id> {
		using struct_t = TestBattler;
		using type_t = int32_t;
		static constexpr const auto& name = "armor_id";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TestBattler,int32_t,&TestBattler::helmet_id> {
		using struct_t = TestBattler;
		using type_t = int32_t;
		static constexpr const auto& name = "helmet_id";
		static constexpr const int id = 0x0E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Integer
	template <> struct ReflectMember<TestBattler,int32_t,&TestBattler::accessory_id> {
		using struct_t = TestBattler;
		using type_t = int32_t;
		static constexpr const auto& name = "accessory_id";
		static constexpr const int id = 0x0F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,TestBattler>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.actor_id, LCF_REFL_S(TestBattler)(), LCF_REFL_M(TestBattler, actor_id)());
		v(s, s.level, LCF_REFL_S(TestBattler)(), LCF_REFL_M(TestBattler, level)());
		v(s, s.weapon_id, LCF_REFL_S(TestBattler)(), LCF_REFL_M(TestBattler, weapon_id)());
		v(s, s.shield_id, LCF_REFL_S(TestBattler)(), LCF_REFL_M(TestBattler, shield_id)());
		v(s, s.armor_id, LCF_REFL_S(TestBattler)(), LCF_REFL_M(TestBattler, armor_id)());
		v(s, s.helmet_id, LCF_REFL_S(TestBattler)(), LCF_REFL_M(TestBattler, helmet_id)());
		v(s, s.accessory_id, LCF_REFL_S(TestBattler)(), LCF_REFL_M(TestBattler, accessory_id)());
	}

} // namespace rpg
} // namespace lcf

#endif
