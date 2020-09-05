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

#ifndef LCF_RPG_SAVEVEHICLELOCATION_H
#define LCF_RPG_SAVEVEHICLELOCATION_H

#include <lcf/rpg/reflect.h>

// Headers
#include "lcf/rpg/savemapeventbase.h"
#include <stdint.h>
#include <string>
#include "lcf/enum_tags.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveVehicleLocation class.
 */
namespace lcf {
namespace rpg {
	class SaveVehicleLocation : public SaveMapEventBase {
	public:
		enum VehicleType {
			VehicleType_none = 0,
			VehicleType_skiff = 1,
			VehicleType_ship = 2,
			VehicleType_airship = 3
		};
		static constexpr auto kVehicleTypeTags = lcf::makeEnumTags<VehicleType>(
			"none",
			"skiff",
			"ship",
			"airship"
		);

		int32_t vehicle = 0;
		int32_t remaining_ascent = 0;
		int32_t remaining_descent = 0;
		std::string orig_sprite_name;
		int32_t orig_sprite_id = 0;
	};
	inline std::ostream& operator<<(std::ostream& os, SaveVehicleLocation::VehicleType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const SaveVehicleLocation& l, const SaveVehicleLocation& r) {
		return l.vehicle == r.vehicle
		&& l.remaining_ascent == r.remaining_ascent
		&& l.remaining_descent == r.remaining_descent
		&& l.orig_sprite_name == r.orig_sprite_name
		&& l.orig_sprite_id == r.orig_sprite_id;
	}

	inline bool operator!=(const SaveVehicleLocation& l, const SaveVehicleLocation& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveVehicleLocation& obj);

	template <> struct ReflectStruct<SaveVehicleLocation> {
		using type_t = SaveVehicleLocation;
		static constexpr const auto& = "SaveVehicleLocation";
	};
	// Which vehicle
	template <> struct ReflectMember<SaveVehicleLocation,int32_t,&SaveVehicleLocation::vehicle> {
		using struct_t = SaveVehicleLocation;
		using type_t = int32_t;
		static constexpr const auto& name[] = "vehicle";
		static constexpr const int id = 0x65;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// From 0 to 255 - In flying vehicles; remaining distance to ascend
	template <> struct ReflectMember<SaveVehicleLocation,int32_t,&SaveVehicleLocation::remaining_ascent> {
		using struct_t = SaveVehicleLocation;
		using type_t = int32_t;
		static constexpr const auto& name[] = "remaining_ascent";
		static constexpr const int id = 0x6A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// From 0 to 255 - In flying vehicles; remaining distance to descend
	template <> struct ReflectMember<SaveVehicleLocation,int32_t,&SaveVehicleLocation::remaining_descent> {
		using struct_t = SaveVehicleLocation;
		using type_t = int32_t;
		static constexpr const auto& name[] = "remaining_descent";
		static constexpr const int id = 0x6B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Set by ChangeVehicleGraphic command
	template <> struct ReflectMember<SaveVehicleLocation,std::string,&SaveVehicleLocation::orig_sprite_name> {
		using struct_t = SaveVehicleLocation;
		using type_t = std::string;
		static constexpr const auto& name[] = "orig_sprite_name";
		static constexpr const int id = 0x6F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Set by ChangeVehicleGraphic command
	template <> struct ReflectMember<SaveVehicleLocation,int32_t,&SaveVehicleLocation::orig_sprite_id> {
		using struct_t = SaveVehicleLocation;
		using type_t = int32_t;
		static constexpr const auto& name[] = "orig_sprite_id";
		static constexpr const int id = 0x70;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
