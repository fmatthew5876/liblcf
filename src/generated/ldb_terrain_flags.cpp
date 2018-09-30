/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

/*
 * Headers
 */
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"


// Read Terrain.

typedef RPG::Terrain::Flags flags_type;

template <>
char const* const Flags<flags_type>::name("Terrain_Flags");

template <>
const Flags<flags_type>::Flag* Flags<flags_type>::flags[] = {
	new Flags<flags_type>::Flag(&flags_type::back_party, "back_party", 1),
	new Flags<flags_type>::Flag(&flags_type::back_enemies, "back_enemies", 1),
	new Flags<flags_type>::Flag(&flags_type::lateral_party, "lateral_party", 1),
	new Flags<flags_type>::Flag(&flags_type::lateral_enemies, "lateral_enemies", 1),
	NULL
};

template <>
const uint32_t Flags<flags_type>::max_size = 1;

