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

#ifndef LCF_RPG_SAVEMAPEVENTBASE_H
#define LCF_RPG_SAVEMAPEVENTBASE_H

#include <lcf/rpg/reflect.h>

// Headers
#include <stdint.h>
#include <string>
#include "lcf/enum_tags.h"
#include "lcf/rpg/moveroute.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveMapEventBase class.
 */
namespace lcf {
namespace rpg {
	class SaveMapEventBase {
	public:
		bool active = true;
		int32_t map_id = 0;
		int32_t position_x = 0;
		int32_t position_y = 0;
		int32_t direction = 2;
		int32_t sprite_direction = 2;
		int32_t anim_frame = 1;
		int32_t transparency = 0;
		int32_t remaining_step = 0;
		int32_t move_frequency = 2;
		int32_t layer = 1;
		bool overlap_forbidden = false;
		int32_t animation_type = 0;
		bool lock_facing = false;
		int32_t move_speed = 4;
		MoveRoute move_route;
		bool move_route_overwrite = false;
		int32_t move_route_index = 0;
		bool move_route_repeated = false;
		bool sprite_transparent = false;
		bool route_through = false;
		int32_t anim_paused = 0;
		bool through = false;
		int32_t stop_count = 0;
		int32_t anim_count = 0;
		int32_t max_stop_count = 0;
		bool jumping = false;
		int32_t begin_jump_x = 0;
		int32_t begin_jump_y = 0;
		bool pause = false;
		bool flying = false;
		std::string sprite_name;
		int32_t sprite_id = 0;
		bool processed = false;
		int32_t flash_red = -1;
		int32_t flash_green = -1;
		int32_t flash_blue = -1;
		double flash_current_level = 0.0;
		int32_t flash_time_left = 0;
	};

	inline bool operator==(const SaveMapEventBase& l, const SaveMapEventBase& r) {
		return l.active == r.active
		&& l.map_id == r.map_id
		&& l.position_x == r.position_x
		&& l.position_y == r.position_y
		&& l.direction == r.direction
		&& l.sprite_direction == r.sprite_direction
		&& l.anim_frame == r.anim_frame
		&& l.transparency == r.transparency
		&& l.remaining_step == r.remaining_step
		&& l.move_frequency == r.move_frequency
		&& l.layer == r.layer
		&& l.overlap_forbidden == r.overlap_forbidden
		&& l.animation_type == r.animation_type
		&& l.lock_facing == r.lock_facing
		&& l.move_speed == r.move_speed
		&& l.move_route == r.move_route
		&& l.move_route_overwrite == r.move_route_overwrite
		&& l.move_route_index == r.move_route_index
		&& l.move_route_repeated == r.move_route_repeated
		&& l.sprite_transparent == r.sprite_transparent
		&& l.route_through == r.route_through
		&& l.anim_paused == r.anim_paused
		&& l.through == r.through
		&& l.stop_count == r.stop_count
		&& l.anim_count == r.anim_count
		&& l.max_stop_count == r.max_stop_count
		&& l.jumping == r.jumping
		&& l.begin_jump_x == r.begin_jump_x
		&& l.begin_jump_y == r.begin_jump_y
		&& l.pause == r.pause
		&& l.flying == r.flying
		&& l.sprite_name == r.sprite_name
		&& l.sprite_id == r.sprite_id
		&& l.processed == r.processed
		&& l.flash_red == r.flash_red
		&& l.flash_green == r.flash_green
		&& l.flash_blue == r.flash_blue
		&& l.flash_current_level == r.flash_current_level
		&& l.flash_time_left == r.flash_time_left;
	}

	inline bool operator!=(const SaveMapEventBase& l, const SaveMapEventBase& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveMapEventBase& obj);

	template <> struct ReflectStruct<SaveMapEventBase> {
		using type_t = SaveMapEventBase;
		static constexpr const auto& = "SaveMapEventBase";
	};
	// Flag
	template <> struct ReflectMember<SaveMapEventBase,bool,&SaveMapEventBase::active> {
		using struct_t = SaveMapEventBase;
		using type_t = bool;
		static constexpr const auto& name[] = "active";
		static constexpr const int id = 0x01;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::map_id> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "map_id";
		static constexpr const int id = 0x0B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// ?
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::position_x> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "position_x";
		static constexpr const int id = 0x0C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// ?
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::position_y> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "position_y";
		static constexpr const int id = 0x0D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Facing direction
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::direction> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "direction";
		static constexpr const int id = 0x15;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Sprite direction
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::sprite_direction> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "sprite_direction";
		static constexpr const int id = 0x16;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// ?
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::anim_frame> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "anim_frame";
		static constexpr const int id = 0x17;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 0 or 3 - Transparency level of the current event page
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::transparency> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "transparency";
		static constexpr const int id = 0x18;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// From 0 to 255 - Remaining distance of the current move
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::remaining_step> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "remaining_step";
		static constexpr const int id = 0x1F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::move_frequency> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "move_frequency";
		static constexpr const int id = 0x20;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::layer> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "layer";
		static constexpr const int id = 0x21;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Flag
	template <> struct ReflectMember<SaveMapEventBase,bool,&SaveMapEventBase::overlap_forbidden> {
		using struct_t = SaveMapEventBase;
		using type_t = bool;
		static constexpr const auto& name[] = "overlap_forbidden";
		static constexpr const int id = 0x22;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::animation_type> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "animation_type";
		static constexpr const int id = 0x23;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// facing locked
	template <> struct ReflectMember<SaveMapEventBase,bool,&SaveMapEventBase::lock_facing> {
		using struct_t = SaveMapEventBase;
		using type_t = bool;
		static constexpr const auto& name[] = "lock_facing";
		static constexpr const int id = 0x24;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::move_speed> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "move_speed";
		static constexpr const int id = 0x25;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// chunks: rpg::MoveRoute
	template <> struct ReflectMember<SaveMapEventBase,MoveRoute,&SaveMapEventBase::move_route> {
		using struct_t = SaveMapEventBase;
		using type_t = MoveRoute;
		static constexpr const auto& name[] = "move_route";
		static constexpr const int id = 0x29;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 1;
	};
	// Use custom move route
	template <> struct ReflectMember<SaveMapEventBase,bool,&SaveMapEventBase::move_route_overwrite> {
		using struct_t = SaveMapEventBase;
		using type_t = bool;
		static constexpr const auto& name[] = "move_route_overwrite";
		static constexpr const int id = 0x2A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Index of MoveEvent command route
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::move_route_index> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "move_route_index";
		static constexpr const int id = 0x2B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Boolean - Repeating move route has been completed at least once
	template <> struct ReflectMember<SaveMapEventBase,bool,&SaveMapEventBase::move_route_repeated> {
		using struct_t = SaveMapEventBase;
		using type_t = bool;
		static constexpr const auto& name[] = "move_route_repeated";
		static constexpr const int id = 0x2C;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// bool
	template <> struct ReflectMember<SaveMapEventBase,bool,&SaveMapEventBase::sprite_transparent> {
		using struct_t = SaveMapEventBase;
		using type_t = bool;
		static constexpr const auto& name[] = "sprite_transparent";
		static constexpr const int id = 0x2E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Whether the move route (MoveEvent or defined route) activated through mode. Almost the same as 0x33 (through). 0x2F represents that by MoveEvent the through mode has been activated; but 0x33 is what's actually checked for collisions. In several cases; 0x33 will be changed to indicate a condition in which an event or the hero is in through mode through other means than a MoveEvent; which can be: an event with an empty page being activated; player pressing Ctrl in test play; hero entering or exiting a vehicle (only very briefly)
	template <> struct ReflectMember<SaveMapEventBase,bool,&SaveMapEventBase::route_through> {
		using struct_t = SaveMapEventBase;
		using type_t = bool;
		static constexpr const auto& name[] = "route_through";
		static constexpr const int id = 0x2F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::anim_paused> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "anim_paused";
		static constexpr const int id = 0x30;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Can go through anything
	template <> struct ReflectMember<SaveMapEventBase,bool,&SaveMapEventBase::through> {
		using struct_t = SaveMapEventBase;
		using type_t = bool;
		static constexpr const auto& name[] = "through";
		static constexpr const int id = 0x33;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::stop_count> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "stop_count";
		static constexpr const int id = 0x34;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::anim_count> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "anim_count";
		static constexpr const int id = 0x35;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 2^move_frequency unless it's a random move route - Once stop_count reaches it; the next move command is executed
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::max_stop_count> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "max_stop_count";
		static constexpr const int id = 0x36;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveMapEventBase,bool,&SaveMapEventBase::jumping> {
		using struct_t = SaveMapEventBase;
		using type_t = bool;
		static constexpr const auto& name[] = "jumping";
		static constexpr const int id = 0x3D;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::begin_jump_x> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "begin_jump_x";
		static constexpr const int id = 0x3E;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::begin_jump_y> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "begin_jump_y";
		static constexpr const int id = 0x3F;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Indicates paused movement for an event; set while the player is talking to the event so that it won't run away
	template <> struct ReflectMember<SaveMapEventBase,bool,&SaveMapEventBase::pause> {
		using struct_t = SaveMapEventBase;
		using type_t = bool;
		static constexpr const auto& name[] = "pause";
		static constexpr const int id = 0x47;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag
	template <> struct ReflectMember<SaveMapEventBase,bool,&SaveMapEventBase::flying> {
		using struct_t = SaveMapEventBase;
		using type_t = bool;
		static constexpr const auto& name[] = "flying";
		static constexpr const int id = 0x48;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveMapEventBase,std::string,&SaveMapEventBase::sprite_name> {
		using struct_t = SaveMapEventBase;
		using type_t = std::string;
		static constexpr const auto& name[] = "sprite_name";
		static constexpr const int id = 0x49;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// ?
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::sprite_id> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "sprite_id";
		static constexpr const int id = 0x4A;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// Flag whether an event (the hero is also an event) in the current frame processed their movement actions (may also be none). This is required because events are asked every frame to initiate their next movement step if required; but not necessarily in order; because checking passability for an event trying to move onto another tile will trigger any event's movement initiation which is on the target tile (because this way the target event may move away; allowing the other event to move to that tile). This flag ensures that every event processes their possible movements only once per frame even if it was already asked to do so out of order as part of another event's movement initiation.
	template <> struct ReflectMember<SaveMapEventBase,bool,&SaveMapEventBase::processed> {
		using struct_t = SaveMapEventBase;
		using type_t = bool;
		static constexpr const auto& name[] = "processed";
		static constexpr const int id = 0x4B;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::flash_red> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "flash_red";
		static constexpr const int id = 0x51;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::flash_green> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "flash_green";
		static constexpr const int id = 0x52;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::flash_blue> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "flash_blue";
		static constexpr const int id = 0x53;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// double
	template <> struct ReflectMember<SaveMapEventBase,double,&SaveMapEventBase::flash_current_level> {
		using struct_t = SaveMapEventBase;
		using type_t = double;
		static constexpr const auto& name[] = "flash_current_level";
		static constexpr const int id = 0x54;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// int
	template <> struct ReflectMember<SaveMapEventBase,int32_t,&SaveMapEventBase::flash_time_left> {
		using struct_t = SaveMapEventBase;
		using type_t = int32_t;
		static constexpr const auto& name[] = "flash_time_left";
		static constexpr const int id = 0x55;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
} // namespace rpg
} // namespace lcf

#endif
