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

#ifndef LCF_RPG_SAVEPANORAMA_H
#define LCF_RPG_SAVEPANORAMA_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <ostream>
#include <type_traits>

/**
 * rpg::SavePanorama class.
 */
namespace lcf {
namespace rpg {
	class SavePanorama {
	public:
		int32_t pan_x = 0;
		int32_t pan_y = 0;
	};

	inline bool operator==(const SavePanorama& l, const SavePanorama& r) {
		return l.pan_x == r.pan_x
		&& l.pan_y == r.pan_y;
	}

	inline bool operator!=(const SavePanorama& l, const SavePanorama& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SavePanorama& obj);

	template <> struct ReflectStruct<SavePanorama> {
		using type_t = SavePanorama;
		static constexpr const auto& = "SavePanorama";
	};
	// Panorama X position
	template <> struct ReflectMember<SavePanorama,int32_t,&SavePanorama::pan_x> {
		using struct_t = SavePanorama;
		using type_t = int32_t;
		static constexpr const auto& name[] = "pan_x";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Panorama Y position
	template <> struct ReflectMember<SavePanorama,int32_t,&SavePanorama::pan_y> {
		using struct_t = SavePanorama;
		using type_t = int32_t;
		static constexpr const auto& name[] = "pan_y";
		static constexpr const int id = 0x02;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
