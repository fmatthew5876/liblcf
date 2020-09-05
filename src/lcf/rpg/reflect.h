/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_REFLECT_H
#define LCF_RPG_REFLECT_H

namespace lcf {
namespace rpg {

template <typename T> struct ReflectStruct {};
template <typename T, typename MT, MT T::* M> struct ReflectMember {};

template <typename T, typename M>
constexpr M* ReflectMemberHelper(M T::*) { return {}; }

#define LCF_REFL_S(TYPE) ReflectStruct<TYPE>
#define LCF_REFL_M(TYPE, M) ReflectMember<TYPE,std::remove_pointer_t<decltype(ReflectMemberHelper<TYPE>(&TYPE::M))>,&TYPE::M>

} // namespace rpg
} // namespace lcf


#endif
