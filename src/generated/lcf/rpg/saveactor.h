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

#ifndef LCF_RPG_SAVEACTOR_H
#define LCF_RPG_SAVEACTOR_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "lcf/enum_tags.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveActor class.
 */
namespace lcf {
namespace rpg {
	class SaveActor {
	public:
		enum RowType {
			RowType_front = 0,
			RowType_back = 1
		};
		static constexpr auto kRowTypeTags = lcf::makeEnumTags<RowType>(
			"front",
			"back"
		);

		void Setup(int actor_id);
		void Fixup(int actor_id);
		void UnFixup();
		int ID = 0;
		std::string name;
		std::string title;
		std::string sprite_name;
		int32_t sprite_id = 0;
		int32_t transparency = 0;
		std::string face_name;
		int32_t face_id = 0;
		int32_t level = -1;
		int32_t exp = -1;
		int32_t hp_mod = -1;
		int32_t sp_mod = -1;
		int32_t attack_mod = 0;
		int32_t defense_mod = 0;
		int32_t spirit_mod = 0;
		int32_t agility_mod = 0;
		std::vector<int16_t> skills;
		std::vector<int16_t> equipped;
		int32_t current_hp = -1;
		int32_t current_sp = -1;
		std::vector<int32_t> battle_commands;
		std::vector<int16_t> status;
		bool changed_battle_commands = false;
		int32_t class_id = -1;
		int32_t row = 0;
		bool two_weapon = false;
		bool lock_equipment = false;
		bool auto_battle = false;
		bool super_guard = false;
		int32_t battler_animation = 0;
	};
	inline std::ostream& operator<<(std::ostream& os, SaveActor::RowType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const SaveActor& l, const SaveActor& r) {
		return l.name == r.name
		&& l.title == r.title
		&& l.sprite_name == r.sprite_name
		&& l.sprite_id == r.sprite_id
		&& l.transparency == r.transparency
		&& l.face_name == r.face_name
		&& l.face_id == r.face_id
		&& l.level == r.level
		&& l.exp == r.exp
		&& l.hp_mod == r.hp_mod
		&& l.sp_mod == r.sp_mod
		&& l.attack_mod == r.attack_mod
		&& l.defense_mod == r.defense_mod
		&& l.spirit_mod == r.spirit_mod
		&& l.agility_mod == r.agility_mod
		&& l.skills == r.skills
		&& l.equipped == r.equipped
		&& l.current_hp == r.current_hp
		&& l.current_sp == r.current_sp
		&& l.battle_commands == r.battle_commands
		&& l.status == r.status
		&& l.changed_battle_commands == r.changed_battle_commands
		&& l.class_id == r.class_id
		&& l.row == r.row
		&& l.two_weapon == r.two_weapon
		&& l.lock_equipment == r.lock_equipment
		&& l.auto_battle == r.auto_battle
		&& l.super_guard == r.super_guard
		&& l.battler_animation == r.battler_animation;
	}

	inline bool operator!=(const SaveActor& l, const SaveActor& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveActor& obj);

	template <> struct ReflectStruct<SaveActor> {
		using type_t = SaveActor;
		static constexpr const auto& = "SaveActor";
	};
	// string
	template <> struct ReflectMember<SaveActor,std::string,&SaveActor::name> {
		using struct_t = SaveActor;
		using type_t = std::string;
		static constexpr const auto& name[] = "name";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// string
	template <> struct ReflectMember<SaveActor,std::string,&SaveActor::title> {
		using struct_t = SaveActor;
		using type_t = std::string;
		static constexpr const auto& name[] = "title";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// string
	template <> struct ReflectMember<SaveActor,std::string,&SaveActor::sprite_name> {
		using struct_t = SaveActor;
		using type_t = std::string;
		static constexpr const auto& name[] = "sprite_name";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::sprite_id> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "sprite_id";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// transparency value. 0 means opaque; 3 is the value used when actor is transparent.
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::transparency> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "transparency";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// string
	template <> struct ReflectMember<SaveActor,std::string,&SaveActor::face_name> {
		using struct_t = SaveActor;
		using type_t = std::string;
		static constexpr const auto& name[] = "face_name";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::face_id> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "face_id";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::level> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "level";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::exp> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "exp";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::hp_mod> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "hp_mod";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::sp_mod> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "sp_mod";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::attack_mod> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "attack_mod";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::defense_mod> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "defense_mod";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::spirit_mod> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "spirit_mod";
		static constexpr const int id = 0x2B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::agility_mod> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "agility_mod";
		static constexpr const int id = 0x2C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// short[]
	template <> struct ReflectMember<SaveActor,std::vector<int16_t>,&SaveActor::skills> {
		using struct_t = SaveActor;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name[] = "skills";
		static constexpr const int id = 0x34;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// short[5]
	template <> struct ReflectMember<SaveActor,std::vector<int16_t>,&SaveActor::equipped> {
		using struct_t = SaveActor;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name[] = "equipped";
		static constexpr const int id = 0x3D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// int
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::current_hp> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "current_hp";
		static constexpr const int id = 0x47;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::current_sp> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "current_sp";
		static constexpr const int id = 0x48;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// array of (uncompressed) int32
	template <> struct ReflectMember<SaveActor,std::vector<int32_t>,&SaveActor::battle_commands> {
		using struct_t = SaveActor;
		using type_t = std::vector<int32_t>;
		static constexpr const auto& name[] = "battle_commands";
		static constexpr const int id = 0x50;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// array of short
	template <> struct ReflectMember<SaveActor,std::vector<int16_t>,&SaveActor::status> {
		using struct_t = SaveActor;
		using type_t = std::vector<int16_t>;
		static constexpr const auto& name[] = "status";
		static constexpr const int id = 0x52;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// bool
	template <> struct ReflectMember<SaveActor,bool,&SaveActor::changed_battle_commands> {
		using struct_t = SaveActor;
		using type_t = bool;
		static constexpr const auto& name[] = "changed_battle_commands";
		static constexpr const int id = 0x53;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int class-id
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::class_id> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "class_id";
		static constexpr const int id = 0x5A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// RPG2003 Battle row
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::row> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "row";
		static constexpr const int id = 0x5B;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// bool
	template <> struct ReflectMember<SaveActor,bool,&SaveActor::two_weapon> {
		using struct_t = SaveActor;
		using type_t = bool;
		static constexpr const auto& name[] = "two_weapon";
		static constexpr const int id = 0x5C;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// bool
	template <> struct ReflectMember<SaveActor,bool,&SaveActor::lock_equipment> {
		using struct_t = SaveActor;
		using type_t = bool;
		static constexpr const auto& name[] = "lock_equipment";
		static constexpr const int id = 0x5D;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// bool
	template <> struct ReflectMember<SaveActor,bool,&SaveActor::auto_battle> {
		using struct_t = SaveActor;
		using type_t = bool;
		static constexpr const auto& name[] = "auto_battle";
		static constexpr const int id = 0x5E;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// bool
	template <> struct ReflectMember<SaveActor,bool,&SaveActor::super_guard> {
		using struct_t = SaveActor;
		using type_t = bool;
		static constexpr const auto& name[] = "super_guard";
		static constexpr const int id = 0x5F;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
	// Integer - RPG2003
	template <> struct ReflectMember<SaveActor,int32_t,&SaveActor::battler_animation> {
		using struct_t = SaveActor;
		using type_t = int32_t;
		static constexpr const auto& name[] = "battler_animation";
		static constexpr const int id = 0x60;
		static constexpr const bool is2k3 = 1;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
