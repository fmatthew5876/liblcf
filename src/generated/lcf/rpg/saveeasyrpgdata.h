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

#ifndef LCF_RPG_SAVEEASYRPGDATA_H
#define LCF_RPG_SAVEEASYRPGDATA_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveEasyRpgData class.
 */
namespace lcf {
namespace rpg {
	class SaveEasyRpgData {
	public:
		int32_t version = 0;
	};

	inline bool operator==(const SaveEasyRpgData& l, const SaveEasyRpgData& r) {
		return l.version == r.version;
	}

	inline bool operator!=(const SaveEasyRpgData& l, const SaveEasyRpgData& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveEasyRpgData& obj);

	template <> struct ReflectStruct<SaveEasyRpgData> {
		using type_t = SaveEasyRpgData;
		static constexpr const auto& name = "SaveEasyRpgData";
	};
	// Savegame version
	template <> struct ReflectMember<SaveEasyRpgData,int32_t,&SaveEasyRpgData::version> {
		using struct_t = SaveEasyRpgData;
		using type_t = int32_t;
		static constexpr const auto& name = "version";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,SaveEasyRpgData>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.version, LCF_REFL_S(SaveEasyRpgData)(), LCF_REFL_M(SaveEasyRpgData, version)());
	}

} // namespace rpg
} // namespace lcf

#endif
