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

#ifndef LCF_RPG_EVENTCOMMAND_H
#define LCF_RPG_EVENTCOMMAND_H

#include <lcf/rpg/reflect.h>

// Headers
#include <lcf/dbarray.h>
#include <stdint.h>
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::EventCommand class.
 */
namespace lcf {
namespace rpg {
	class EventCommand {
	public:
		enum class Code {
			END = 10,
			CallCommonEvent = 1005,
			ForceFlee = 1006,
			EnableCombo = 1007,
			ChangeClass = 1008,
			ChangeBattleCommands = 1009,
			OpenLoadMenu = 5001,
			ExitGame = 5002,
			ToggleAtbMode = 5003,
			ToggleFullscreen = 5004,
			OpenVideoOptions = 5005,
			ShowMessage = 10110,
			MessageOptions = 10120,
			ChangeFaceGraphic = 10130,
			ShowChoice = 10140,
			InputNumber = 10150,
			ControlSwitches = 10210,
			ControlVars = 10220,
			TimerOperation = 10230,
			ChangeGold = 10310,
			ChangeItems = 10320,
			ChangePartyMembers = 10330,
			ChangeExp = 10410,
			ChangeLevel = 10420,
			ChangeParameters = 10430,
			ChangeSkills = 10440,
			ChangeEquipment = 10450,
			ChangeHP = 10460,
			ChangeSP = 10470,
			ChangeCondition = 10480,
			FullHeal = 10490,
			SimulatedAttack = 10500,
			ChangeHeroName = 10610,
			ChangeHeroTitle = 10620,
			ChangeSpriteAssociation = 10630,
			ChangeActorFace = 10640,
			ChangeVehicleGraphic = 10650,
			ChangeSystemBGM = 10660,
			ChangeSystemSFX = 10670,
			ChangeSystemGraphics = 10680,
			ChangeScreenTransitions = 10690,
			EnemyEncounter = 10710,
			OpenShop = 10720,
			ShowInn = 10730,
			EnterHeroName = 10740,
			Teleport = 10810,
			MemorizeLocation = 10820,
			RecallToLocation = 10830,
			EnterExitVehicle = 10840,
			SetVehicleLocation = 10850,
			ChangeEventLocation = 10860,
			TradeEventLocations = 10870,
			StoreTerrainID = 10910,
			StoreEventID = 10920,
			EraseScreen = 11010,
			ShowScreen = 11020,
			TintScreen = 11030,
			FlashScreen = 11040,
			ShakeScreen = 11050,
			PanScreen = 11060,
			WeatherEffects = 11070,
			ShowPicture = 11110,
			MovePicture = 11120,
			ErasePicture = 11130,
			ShowBattleAnimation = 11210,
			SpriteTransparency = 11310,
			FlashSprite = 11320,
			MoveEvent = 11330,
			ProceedWithMovement = 11340,
			HaltAllMovement = 11350,
			Wait = 11410,
			PlayBGM = 11510,
			FadeOutBGM = 11520,
			MemorizeBGM = 11530,
			PlayMemorizedBGM = 11540,
			PlaySound = 11550,
			PlayMovie = 11560,
			KeyInputProc = 11610,
			ChangeMapTileset = 11710,
			ChangePBG = 11720,
			ChangeEncounterRate = 11740,
			TileSubstitution = 11750,
			TeleportTargets = 11810,
			ChangeTeleportAccess = 11820,
			EscapeTarget = 11830,
			ChangeEscapeAccess = 11840,
			OpenSaveMenu = 11910,
			ChangeSaveAccess = 11930,
			OpenMainMenu = 11950,
			ChangeMainMenuAccess = 11960,
			ConditionalBranch = 12010,
			Label = 12110,
			JumpToLabel = 12120,
			Loop = 12210,
			BreakLoop = 12220,
			EndEventProcessing = 12310,
			EraseEvent = 12320,
			CallEvent = 12330,
			Comment = 12410,
			GameOver = 12420,
			ReturntoTitleScreen = 12510,
			ChangeMonsterHP = 13110,
			ChangeMonsterMP = 13120,
			ChangeMonsterCondition = 13130,
			ShowHiddenMonster = 13150,
			ChangeBattleBG = 13210,
			ShowBattleAnimation_B = 13260,
			ConditionalBranch_B = 13310,
			TerminateBattle = 13410,
			ShowMessage_2 = 20110,
			ShowChoiceOption = 20140,
			ShowChoiceEnd = 20141,
			VictoryHandler = 20710,
			EscapeHandler = 20711,
			DefeatHandler = 20712,
			EndBattle = 20713,
			Transaction = 20720,
			NoTransaction = 20721,
			EndShop = 20722,
			Stay = 20730,
			NoStay = 20731,
			EndInn = 20732,
			ElseBranch = 22010,
			EndBranch = 22011,
			EndLoop = 22210,
			Comment_2 = 22410,
			ElseBranch_B = 23310,
			EndBranch_B = 23311,
			Maniac_GetSaveInfo = 3001,
			Maniac_Save = 3002,
			Maniac_Load = 3003,
			Maniac_EndLoadProcess = 3004,
			Maniac_GetMousePosition = 3005,
			Maniac_SetMousePosition = 3006,
			Maniac_ShowStringPicture = 3007,
			Maniac_GetPictureInfo = 3008,
			Maniac_ControlBattle = 3009,
			Maniac_ControlAtbGauge = 3010,
			Maniac_ChangeBattleCommandEx = 3011,
			Maniac_GetBattleInfo = 3012,
			Maniac_ControlVarArray = 3013,
			Maniac_KeyInputProcEx = 3014,
			Maniac_RewriteMap = 3015,
			Maniac_ControlGlobalSave = 3016,
			Maniac_ChangePictureId = 3017,
			Maniac_SetGameOption = 3018,
			Maniac_CallCommand = 3019
		};

		int32_t code = 0;
		int32_t indent = 0;
		DBString string;
		DBArray<int32_t> parameters;
	};
	inline std::ostream& operator<<(std::ostream& os, EventCommand::Code code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const EventCommand& l, const EventCommand& r) {
		return l.code == r.code
		&& l.indent == r.indent
		&& l.string == r.string
		&& l.parameters == r.parameters;
	}

	inline bool operator!=(const EventCommand& l, const EventCommand& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const EventCommand& obj);

	template <> struct ReflectStruct<EventCommand> {
		using type_t = EventCommand;
		static constexpr const auto& name = "EventCommand";
	};
	// 
	template <> struct ReflectMember<EventCommand,int32_t,&EventCommand::code> {
		using struct_t = EventCommand;
		using type_t = int32_t;
		static constexpr const auto& name = "code";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<EventCommand,int32_t,&EventCommand::indent> {
		using struct_t = EventCommand;
		using type_t = int32_t;
		static constexpr const auto& name = "indent";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<EventCommand,DBString,&EventCommand::string> {
		using struct_t = EventCommand;
		using type_t = DBString;
		static constexpr const auto& name = "string";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};
	// 
	template <> struct ReflectMember<EventCommand,DBArray<int32_t>,&EventCommand::parameters> {
		using struct_t = EventCommand;
		using type_t = DBArray<int32_t>;
		static constexpr const auto& name = "parameters";
		static constexpr const int id = 0x00;
		static constexpr const bool is2k3 = 0;
		static constexpr const bool present_if_default = 0;
	};

	template <typename T, typename Visitor, EnableIfStruct<T,EventCommand>* = nullptr>
	void ForEachMember(T&& s, const Visitor& v) {
		v(s, s.code, LCF_REFL_S(EventCommand)(), LCF_REFL_M(EventCommand, code)());
		v(s, s.indent, LCF_REFL_S(EventCommand)(), LCF_REFL_M(EventCommand, indent)());
		v(s, s.string, LCF_REFL_S(EventCommand)(), LCF_REFL_M(EventCommand, string)());
		v(s, s.parameters, LCF_REFL_S(EventCommand)(), LCF_REFL_M(EventCommand, parameters)());
	}

} // namespace rpg
} // namespace lcf

#endif
