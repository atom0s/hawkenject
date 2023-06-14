#pragma once

// Hawken (1.5.3.142579) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_GAMEEVENT_PLAYER_SCORE_UPDATE                      1400
#define CONST_STATS_PROGRESSION_MECH_C_VANGUARD_2_TIER_HIGH      "Progress.Mech.C.Vanguard2.TierHigh"
#define CONST_STATS_SPAWN_MECH_A_G2_BERSERKER                    "Spawn.Mech.A.G2_Berserker"
#define CONST_VOLUME_MAX                                         1.0
#define CONST_STATS_PROGRESSION_MECH_B_G2_SHARPSHOOTER_TIER_HIGH "Progress.Mech.B.G2_Sharpshooter.TierHigh"
#define CONST_STATS_MAP_TITAN_SG_TOTAL                           "Map.Titan.SG.Total"
#define CONST_STATS_PROGRESSION_MECH_C_GRENADIER_TIER_HIGH       "Progress.Mech.C.Grenadier.TierHigh"
#define CONST_STATS_MAP_WRECKAGE_DM_TOTAL                        "Map.Wreckage.DM.Total"
#define CONST_STATS_PROGRESSION_MECH_C_VANGUARD_2_XP_FOR_TIER    "Progress.Mech.C.Vanguard2.XPForTier"
#define CONST_STATS_MAP_SAHARA_MA_TOTAL                          "Map.Sahara.MA.Total"
#define CONST_STATS_GAMEMODE_COOP_MVP                            "GameMode.CoOp.MVP"
#define CONST_STATS_PROGRESSION_MECH_B_G2_SHARPSHOOTER_XP_FOR_TIER "Progress.Mech.B.G2_Sharpshooter.XPForTier"
#define CONST_MAX_TEAMMATES                                      4
#define CONST_STATS_PROGRESSION_MECH_C_VANGUARD_TIER_HIGH        "Progress.Mech.C.Vanguard.TierHigh"
#define CONST_STATS_ASSIST_TOTAL                                 "Assist.Total"
#define CONST_STATS_COOP_VICTORY_MECH_A_REAPER                   "CoOp.Victory.Mech.A.Reaper"
#define CONST_STATS_MAP_TITAN_SG_WINS                            "Map.Titan.SG.Wins"
#define CONST_MECH_STATS_NEMESISKILL                             "Kills.NemesisKills"
#define CONST_STATS_PROGRESSION_MECH_C_MORTARER_TIER_HIGH        "Progress.Mech.C.Mortarer.TierHigh"
#define CONST_R_GameSearchCommon_PROPERTY_GOALSCORE              0x100000F8
#define CONST_STATS_PROGRESSION_MECH_C_ROCKETEER_XP_FOR_TIER     "Progress.Mech.C.Rocketeer.XPForTier"
#define CONST_STATS_COOP_SURVIVALIST_MECH_C_GRENADIER            "CoOp.Survivalist.Mech.C.Grenadier"
#define CONST_STATS_PROGRESSION_MECH_C_MORTARER_XP_FOR_TIER      "Progress.Mech.C.Mortarer.XPForTier"
#define CONST_STATS_MAP_VALKIRIE_ALL_WINS                        "Map.Valkirie.All.Wins"
#define CONST_STATS_PROGRESSION_MECH_B_ROOKIE_TIER_HIGH          "Progress.Mech.B.Rookie.TierHigh"
#define CONST_STATS_PROGRESSION_MECH_C_VANGUARD_XP_FOR_TIER      "Progress.Mech.C.Vanguard.XPForTier"
#define CONST_STATS_PROGRESSION_MECH_C_ROCKETEER_TIER_HIGH       "Progress.Mech.C.Rocketeer.TierHigh"
#define CONST_STATS_KILL_ENEMY_HEALING                           "Kills.EnemyHealing"
#define CONST_STATS_PROGRESSION_MECH_C_GRENADIER_XP_FOR_TIER     "Progress.Mech.C.Grenadier.XPForTier"
#define CONST_STATS_PROGRESSION_MECH_C_G2_RAIDER_TIER_HIGH       "Progress.Mech.C.G2_Raider.TierHigh"
#define CONST_STATS_MAP_ANDROMEDA_MA_LOSSES                      "Map.Andromeda.MA.Losses"
#define CONST_STATS_PROGRESSION_MECH_C_G2_RAIDER_XP_FOR_TIER     "Progress.Mech.C.G2_Raider.XPForTier"
#define CONST_STATS_PROGRESSION_MECH_C_FIREFIGHTER_TIER_HIGH     "Progress.Mech.C.FireFighter.TierHigh"
#define CONST_R_GameSettingsCommon_CONTEXT_GOALSCORE_16          2
#define CONST_STATS_PROGRESSION_MECH_C_FIREFIGHTER_XP_FOR_TIER   "Progress.Mech.C.FireFighter.XPForTier"
#define CONST_STATS_MAP_ALLEYS_DM_LASTPLACE                      "Map.Alleys.DM.LastPlace"
#define CONST_STATS_SPAWN_MECH_A_REAPER                          "Spawn.Mech.A.Reaper"
#define CONST_STATS_PROGRESSION_MECH_B_DEMOLITION_TIER_HIGH      "Progress.Mech.B.Demolition.TierHigh"
#define CONST_STATS_MAP_ANDROMEDA_SG_WINS                        "Map.Andromeda.SG.Wins"
#define CONST_R_GameSearchCommon_CONTEXT_GOALSCORE_6             0
#define CONST_STATS_COOP_CHALLENGE_TESTOFSURVIVAL                "CoOp.Challenge.TestOfSurvival"
#define CONST_STATS_PROGRESSION_MECH_A_BERSERKER_TIER_HIGH       "Progress.Mech.A.Berserker.TierHigh"
#define CONST_STATS_MAP_VALKIRIE_SG_LOSSES                       "Map.Valkirie.SG.Losses"
#define CONST_STATS_COOP_VICTORY_MECH_C_MORTARER                 "CoOp.Victory.Mech.C.Mortarer"
#define CONST_R_GameSearchCommon_CONTEXT_BOTSKILL_AVERAGE        1
#define CONST_STATS_PROGRESSION_MECH_C_BRAWLER_TIER_HIGH         "Progress.Mech.C.Brawler.TierHigh"
#define CONST_STATS_MAP_ANDROMEDA_TDM_TOTAL                      "Map.Andromeda.TDM.Total"
#define CONST_STATS_PROGRESSION_MECH_A_BERSERKER_XP_FOR_TIER     "Progress.Mech.A.Berserker.XPForTier"
#define CONST_STATS_PROGRESSION_MECH_C_BRAWLER_XP_FOR_TIER       "Progress.Mech.C.Brawler.XPForTier"
#define CONST_GAMEEVENT_ITEM_LASERMINE_TRIPPED_SELF              1217
#define CONST_STATS_GAMEMODE_MA_SILOSCAPTURED                    "GameMode.MA.SilosCaptured"
#define CONST_NUM_SCRAMBLERS                                     4
#define CONST_STATS_MAP_WRECKAGE_MA_LOSSES                       "Map.Wreckage.MA.Losses"
#define CONST_STATS_PROGRESSION_MECH_B_SHARPSHOOTER_TIER_HIGH    "Progress.Mech.B.Sharpshooter.TierHigh"
#define CONST_STATS_MAP_WRECKAGE_SG_WINS                         "Map.Wreckage.SG.Wins"
#define CONST_STATS_GAMEMODE_SG_BATTLESHIP_FINAL_BLOW            "GameMode.SG.BattleshipFinalBlow"
#define CONST_STATS_PROGRESSION_MECH_B_SHARPSHOOTER_XP_FOR_TIER  "Progress.Mech.B.Sharpshooter.XPForTier"
#define CONST_MAX_INSTIGATORS                                    3
#define CONST_STATS_PROGRESSION_MECH_B_ROOKIE_XP_FOR_TIER        "Progress.Mech.B.Rookie.XPForTier"
#define CONST_R_GameSettingsCommon_QUERY_DM                      0
#define CONST_STATS_KILL_INSIDESHIELD                            "Kills.InsideShield"
#define CONST_R_GameSearchCommon_CONTEXT_PURESERVER_YES          1
#define CONST_R_GameSearchCommon_CONTEXT_FORCERESPAWN            10
#define CONST_STATS_MAP_WRECKAGE_ALL_WINS                        "Map.Wreckage.All.Wins"
#define CONST_STATS_PROGRESSION_MECH_B_RAIDER_TIER_HIGH          "Progress.Mech.B.Raider.TierHigh"
#define CONST_STATS_GAMEMODE_MA_SILOSNEUTRALIZED                 "GameMode.MA.SilosNeutralized"
#define CONST_STATS_KILL_MECH_C_G2_RAIDER                        "Kills.Mech.C.G2_Raider"
#define CONST_STATS_OVERFLOWEXPPOINTS_FREE_OUT                   "ExpPointsOverflow"
#define CONST_R_GameSettingsCommon_CONTEXT_ALLOWKEYBOARD_YES     1
#define CONST_R_GameSearchCommon_CONTEXT_FORCERESPAWN_NO         0
#define CONST_STATS_MAP_LAST_ECO_SG_WINS                         "Map.LastEco.SG.Wins"
#define CONST_STATS_MAP_WRECKAGE_TDM_LOSSES                      "Map.Wreckage.TDM.Losses"
#define CONST_GAMEEVENT_ITEM_LASERMINE_LOBBED                    1218
#define CONST_MECH_STATS_MA_SILOSNEUTRALIZED                     "MA.SilosNeutralized"
#define CONST_R_DamageableStaticActor_MAX_DESTRUCTION_STATES     4
#define CONST_STATS_PROGRESSION_MECH_B_RAIDER_XP_FOR_TIER        "Progress.Mech.B.Raider.XPForTier"
#define CONST_R_GameSettingsCommon_GS_CDKEY_PART_MAXLENGTH       4
#define CONST_STATS_PROGRESSION_MECH_B_PREDATOR_TIER_HIGH        "Progress.Mech.B.Predator.TierHigh"
#define CONST_R_GameSettingsCommon_CONTEXT_CAMPAIGN              9
#define CONST_R_GameSearchCommon_CONTEXT_LOCKEDSERVER_YES        1
#define CONST_COLOR_MIN                                          0.0
#define CONST_STATS_MAP_WRECKAGE_DM_WINS                         "Map.Wreckage.DM.Wins"
#define CONST_STATS_MAP_VALKIRIE_MA_TOTAL                        "Map.Valkirie.MA.Total"
#define CONST_STATS_USE_HOLOTAUNT                                "UseHolotaunt"
#define CONST_STATS_COOP_VICTORY_MECH_B_SHARPSHOOTER             "CoOp.Victory.Mech.B.Sharpshooter"
#define CONST_GAMEEVENT_PLAYER_KILL_TURRET                       1201
#define CONST_STATS_PROGRESSION_MECH_B_PREDATOR_XP_FOR_TIER      "Progress.Mech.B.Predator.XPForTier"
#define CONST_STATS_GAMEMODE_SG_COMEBACK                         "GameMode.SG.Comeback"
#define CONST_R_GameSearchCommon_CONTEXT_VSBOTS                  8
#define CONST_STATS_MAP_WRECKAGE_TDM_WINS                        "Map.Wreckage.TDM.Wins"
#define CONST_STATS_GAMEMODE_COOP_ABANDONED                      "GameMode.CoOp.Abandonded"
#define CONST_STATS_GAMEMODE_MA_TOTALMATCHES                     "GameMode.MA.TotalMatches"
#define CONST_STATS_KILL_WHILE_EMPED_BY_KILLED                   "Kills.WhileEMPdByKilled"
#define CONST_R_GameSearchCommon_CONTEXT_TIMELIMIT_6             0
#define CONST_NUM_SHIP_DAMAGE_EFFECTS                            8
#define CONST_STATS_PROGRESSION_MECH_B_FORGER_TIER_HIGH          "Progress.Mech.B.Forger.TierHigh"
#define CONST_R_GameSettingsCommon_CONTEXT_VSBOTS_3_TO_2         5
#define CONST_STATS_PROGRESSION_MECH_B_FORGER_XP_FOR_TIER        "Progress.Mech.B.Forger.XPForTier"
#define CONST_STATS_PROGRESSION_MECH_B_DEMOLITION_XP_FOR_TIER    "Progress.Mech.B.Demolition.XPForTier"
#define CONST_R_GameSearchCommon_CONTEXT_NUMBOTS_1               0
#define CONST_STATS_PROGRESSION_MECH_A_REAPER_TIER_HIGH          "Progress.Mech.A.Reaper.TierHigh"
#define CONST_STATS_GAMEMODE_COOP_TOTALMATCHES_MINTIME           "Gamemode.CoOp.TotalMatchesMinTime"
#define CONST_STATS_COOP_CHALLENGE_PACIFYTHESWARM                "CoOp.Challenge.PacifyTheSwarm"
#define CONST_STATS_PROGRESSION_MECH_B_BRUISER_TIER_HIGH         "Progress.Mech.B.Bruiser.TierHigh"
#define CONST_STATS_PROGRESSION_MECH_A_REAPER_XP_FOR_TIER        "Progress.Mech.A.Reaper.XPForTier"
#define CONST_STATS_GAMEMODE_DM_LOSSES                           "GameMode.DM.Losses"
#define CONST_STATS_DEVIATION                                    "MatchMaking.Deviation"
#define CONST_STATS_PROGRESSION_MECH_B_BRUISER_XP_FOR_TIER       "Progress.Mech.B.Bruiser.XPForTier"
#define CONST_STATS_PROGRESSION_MECH_B_G2_ASSAULT_XP_FOR_TIER    "Progress.Mech.B.G2_Assault.XPForTier"
#define CONST_STATS_PROGRESSION_MECH_B_G2_ASSAULT_TIER_HIGH      "Progress.Mech.B.G2_Assault.TierHigh"
#define CONST_STATS_PROGRESSION_MECH_B_ASSAULT_TIER_HIGH         "Progress.Mech.B.Assault.TierHigh"
#define CONST_STATS_MAP_ALLEYS_MA_WINS                           "Map.Alleys.MA.Wins"
#define CONST_R_GameSettingsCommon_CONTEXT_PRESENCE_MENUPRESENCE 0
#define CONST_STATS_PROGRESSION_MECH_B_ASSAULT_XP_FOR_TIER       "Progress.Mech.B.Assault.XPForTier"
#define CONST_STATS_PROGRESSION_MECH_A_TECHNICIAN_XP_FOR_TIER    "Progress.Mech.A.Technician.XPForTier"
#define CONST_STATS_PROGRESSION_MECH_A_TECHNICIAN_TIER_HIGH      "Progress.Mech.A.Technician.TierHigh"
#define CONST_STATS_MAP_FACILITY_TDM_WINS                        "Map.Facility.TDM.Wins"
#define CONST_STATS_KILL_ENEMY_IN_AIR                            "Kills.EnemyInAir"
#define CONST_STATS_MAP_WRECKAGE_MA_TOTAL                        "Map.Wreckage.MA.Total"
#define CONST_STATS_MAP_SAHARA_SG_WINS                           "Map.Sahara.SG.Wins"
#define CONST_STATS_KILL_MECH_C_GRENADIER                        "Kills.Mech.C.Grenadier"
#define CONST_STATS_KILL_STREAK_BEST                             "Kills.Streak.Best"
#define CONST_STATS_PROGRESSION_MECH_A_SCOUT_TIER_HIGH           "Progress.Mech.A.Scout.TierHigh"
#define CONST_StatIndex_GameMode2                                1
#define CONST_R_GameSearchCommon_CONTEXT_BOTSKILL_NOVICE         0
#define CONST_STATS_PROGRESSION_MECH_A_SCOUT_XP_FOR_TIER         "Progress.Mech.A.Scout.XPForTier"
#define CONST_MECH_STATS_REPAIR_DEPLOYABLES                      "Repair.DeployableAmount"
#define CONST_STATS_MAP_ANDROMEDA_SG_TOTAL                       "Map.Andromeda.SG.Total"
#define CONST_STATS_PROGRESSION_MECH_A_G2_INFILTRATOR_TIER_HIGH  "Progress.Mech.A.G2_Infiltrator.TierHigh"
#define CONST_R_GameSettingsCommon_CONTEXT_NUMBOTS_9             8
#define CONST_STATS_PROGRESSION_MECH_A_G2_INFILTRATOR_XP_FOR_TIER "Progress.Mech.A.G2_Infiltrator.XPForTier"
#define CONST_STATS_PROGRESSION_MECH_A_INFILTRATOR_XP_FOR_TIER   "Progress.Mech.A.Infiltrator.XPForTier"
#define CONST_STATS_GAMEMODE_COOP_REVIVEPLAYER                   "GameMode.CoOp.RevivePlayer"
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_SPOTTEDENEMY           11012
#define CONST_STATS_PROGRESSION_MECH_A_INFILTRATOR_TIER_HIGH     "Progress.Mech.A.Infiltrator.TierHigh"
#define CONST_STATS_MAP_ALLEYS_ALL_TOTAL                         "Map.Alleys.All.Total"
#define CONST_STATS_MAP_WRECKAGE_SG_LOSSES                       "Map.Wreckage.SG.Losses"
#define CONST_STATS_PROGRESSION_MECH_A_G2_BERSERKER_TIER_HIGH    "Progress.Mech.A.G2_Berserker.TierHigh"
#define CONST_STATS_PROGRESSION_MECH_A_G2_BERSERKER_XP_FOR_TIER  "Progress.Mech.A.G2_Berserker.XPForTier"
#define CONST_GFX_MESSAGE_TYPE_OFFLINE_CHAT                      2
#define CONST_STATS_MAP_WRECKAGE_MA_WINS                         "Map.Wreckage.MA.Wins"
#define CONST_STATS_MAP_ANDROMEDA_ALL_TOTAL                      "Map.Andromeda.All.Total"
#define CONST_STATS_MAP_WRECKAGE_DM_LASTPLACE                    "Map.Wreckage.DM.LastPlace"
#define CONST_R_GameSearchCommon_CONTEXT_PURESERVER_NO           0
#define CONST_STATS_MAP_WRECKAGE_SG_TOTAL                        "Map.Wreckage.SG.Total"
#define CONST_GFX_MESSAGE_TYPE_PARTY_INVITE                      5
#define CONST_STATS_KILL_MADEWITHMECH_B_DEMOLITION               "Kills.MadeWithMech.B.Demolition"
#define CONST_STATS_MAP_WRECKAGE_TDM_TOTAL                       "Map.Wreckage.TDM.Total"
#define CONST_STATS_MAP_WRECKAGE_ALL_TOTAL                       "Map.Wreckage.All.Total"
#define CONST_STATS_MAP_SAHARA_DM_LASTPLACE                      "Map.Sahara.DM.LastPlace"
#define CONST_STATS_KILL_STREAK_6                                "Kills.Streak.5"
#define CONST_STATS_MAP_LAST_ECO_YETI_KILL                       "Map.LastEco.YetiKill"
#define CONST_STATS_COOP_SURVIVALIST_MECH_B_DEMOLITION           "CoOp.Survivalist.Mech.B.Demolition"
#define CONST_STATS_KILL_MADEWITHMECH_B_G2_ASSAULT               "Kills.MadeWithMech.B.G2_Assault"
#define CONST_R_GameSearchCommon_PROPERTYNAME_CUSTOMGAMEMODE     "CustomGameMode"
#define CONST_GAMETYPE_DM                                        1
#define CONST_STATS_MAP_LAST_ECO_MA_LOSSES                       "Map.LastEco.MA.Losses"
#define CONST_STATS_MAP_LAST_ECO_MA_WINS                         "Map.LastEco.MA.Wins"
#define CONST_STATS_COOP_VICTORY_MECH_A_G2_BERSERKER             "CoOp.Victory.Mech.A.G2_Berserker"
#define CONST_STATS_MAP_LAST_ECO_MA_TOTAL                        "Map.LastEco.MA.Total"
#define CONST_GAMEEVENT_PLAYER_KILL_SUICIDE                      1203
#define CONST_STATS_MAP_LAST_ECO_SG_LOSSES                       "Map.LastEco.SG.Losses"
#define CONST_STATS_COOP_VICTORY_MECH_C_GRENADIER                "CoOp.Victory.Mech.C.Grenadier"
#define CONST_STATS_MAP_LAST_ECO_SG_TOTAL                        "Map.LastEco.SG.Total"
#define CONST_STATS_GAMEMODE_SG_ENEMYSHIPSDESTROYED              "GameMode.SG.EnemyShipsDestroyed"
#define CONST_R_GameSearchCommon_GS_CDKEY_PART_MAXLENGTH         4
#define CONST_GAMEEVENT_TIMELIMIT                                1002
#define CONST_STATS_MAP_LAST_ECO_ALL_WINS                        "Map.LastEco.All.Wins"
#define CONST_STATS_MAP_LAST_ECO_TDM_LOSSES                      "Map.LastEco.TDM.Losses"
#define CONST_STATS_MAP_LAST_ECO_TDM_WINS                        "Map.LastEco.TDM.Wins"
#define CONST_GAMETYPE_COOP                                      7
#define CONST_STATS_MAP_LAST_ECO_TDM_TOTAL                       "Map.LastEco.TDM.Total"
#define CONST_STATS_MAP_LAST_ECO_DM_LASTPLACE                    "Map.LastEco.DM.LastPlace"
#define CONST_STATS_KILL_MECH_C_ROCKETEER                        "Kills.Mech.C.Rocketeer"
#define CONST_STATS_COOP_SURVIVALIST_MECH_B_RAIDER               "CoOp.Survivalist.Mech.B.Raider"
#define CONST_STATS_MAP_LAST_ECO_DM_WINS                         "Map.LastEco.DM.Wins"
#define CONST_STATS_MAP_LAST_ECO_DM_TOTAL                        "Map.LastEco.DM.Total"
#define CONST_STATS_COOP_CHALLENGE_REVENGEOFTHEAI                "CoOp.Challenge.RevengeOfTheAi"
#define CONST_STATS_MAP_LAST_ECO_ALL_TOTAL                       "Map.LastEco.All.Total"
#define CONST_STATS_GAMEMODE_COOP_SURVIVALIST                    "GameMode.CoOp.Survivalist"
#define CONST_STATS_MAP_FACILITY_COOP_LOSSES                     "Map.Facility.CoOp.Losses"
#define CONST_GAMETYPE_ASYMSIEGE                                 6
#define CONST_STATS_MAP_FACILITY_COOP_WINS                       "Map.Facility.CoOp.Wins"
#define CONST_R_GameSettingsCommon_CONTEXT_VSBOTS_4_TO_2         6
#define CONST_STATS_GAMEMODE_COOP_DRONEKILLINGBLOWS              "GameMode.CoOp.DroneKillingBlows"
#define CONST_STATS_MAP_FACILITY_COOP_TOTAL                      "Map.Facility.CoOp.Total"
#define CONST_STATS_MAP_FACILITY_MA_LOSSES                       "Map.Facility.MA.Losses"
#define CONST_STATS_COOP_SURVIVALIST_MECH_A_INFILTRATOR          "CoOp.Survivalist.Mech.A.Infiltrator"
#define CONST_STATS_KILL_MECH_B_RAIDER                           "Kills.Mech.B.Raider"
#define CONST_STATS_MAP_FACILITY_MA_WINS                         "Map.Facility.MA.Wins"
#define CONST_STATS_MAP_FACILITY_MA_TOTAL                        "Map.Facility.MA.Total"
#define CONST_STATS_MAP_VALKIRIE_DM_WINS                         "Map.Valkirie.DM.Wins"
#define CONST_STATS_MAP_FACILITY_SG_LOSSES                       "Map.Facility.SG.Losses"
#define CONST_R_GameSearchCommon_CONTEXT_GAME_MODE_DM            0
#define CONST_STATS_MAP_FACILITY_SG_WINS                         "Map.Facility.SG.Wins"
#define CONST_STATS_GAMEMODE_SG_EULOST                           "GameMode.SG.EULost"
#define CONST_STATS_COOP_SURVIVALIST_MECH_A_G2_BERSERKER         "CoOp.Survivalist.Mech.A.G2_Berserker"
#define CONST_R_GameSearchCommon_CONTEXT_LOCKEDSERVER_NO         0
#define CONST_STATS_MAP_FACILITY_SG_TOTAL                        "Map.Facility.SG.Total"
#define CONST_R_GameSettingsCommon_CONTEXT_CAMPAIGN_YES          1
#define CONST_STATS_MAP_SAHARA_SG_LOSSES                         "Map.Sahara.SG.Losses"
#define CONST_STATS_MAP_FACILITY_TDM_LOSSES                      "Map.Facility.TDM.Losses"
#define CONST_STATS_MAP_SAHARA_SG_TOTAL                          "Map.Sahara.SG.Total"
#define CONST_STATS_HEAL_FROMENERGYORBS                          "Heal.FromEnergyOrbs"
#define CONST_STATS_MAP_FACILITY_TDM_TOTAL                       "Map.Facility.TDM.Total"
#define CONST_R_GameSearchCommon_CONTEXT_LOCKEDSERVER            7
#define CONST_GFX_MESSAGE_TYPE_SYSTEM                            0
#define CONST_STATS_MAP_FACILITY_DM_LASTPLACE                    "Map.Facility.DM.LastPlace"
#define CONST_STATS_MAP_FACILITY_DM_WINS                         "Map.Facility.DM.Wins"
#define CONST_EMPTY_INTERNAL                                     255
#define CONST_STATS_MAP_FACILITY_DM_TOTAL                        "Map.Facility.DM.Total"
#define CONST_STATS_DEATH_SUICIDE                                "Death.Suicide"
#define CONST_R_GameSettingsCommon_CONTEXT_CAMPAIGN_NO           0
#define CONST_STATS_MAP_FACILITY_ALL_WINS                        "Map.Facility.All.Wins"
#define CONST_STATS_MAP_FACILITY_ALL_TOTAL                       "Map.Facility.All.Total"
#define CONST_STATS_MAP_ANDROMEDA_DM_WINS                        "Map.Andromeda.DM.Wins"
#define CONST_STATS_MAP_VALKIRIE_COOP_LOSSES                     "Map.Valkirie.CoOp.Losses"
#define CONST_STATS_MAP_ALLEYS_TDM_TOTAL                         "Map.Alleys.TDM.Total"
#define CONST_MECH_STATS_AVENGER                                 "Kills.Avenger"
#define CONST_STATS_MAP_VALKIRIE_COOP_WINS                       "Map.Valkirie.CoOp.Wins"
#define CONST_STATS_GAMEMODE_SG_ABANDONED                        "GameMode.SG.Abandonded"
#define CONST_STATS_KILL_TOTAL                                   "Kills.Total"
#define CONST_STATS_MAP_VALKIRIE_COOP_TOTAL                      "Map.Valkirie.CoOp.Total"
#define CONST_STATS_KILL_MECH_C_MORTARER                         "Kills.Mech.C.Mortarer"
#define CONST_STATS_GAMEMODE_ALL_TOTALMATCHES_MINTIME            "Gamemode.All.TotalMatchesMinTime"
#define CONST_STATS_MAP_VALKIRIE_MA_LOSSES                       "Map.Valkirie.MA.Losses"
#define CONST_STATS_MAP_VALKIRIE_MA_WINS                         "Map.Valkirie.MA.Wins"
#define CONST_STATS_MAP_VALKIRIE_SG_WINS                         "Map.Valkirie.SG.Wins"
#define CONST_MECH_STATS_SG_EULOST                               "SG.EULost"
#define CONST_STATS_DEATH_TOTAL                                  "Death.Total"
#define CONST_STATS_KILL_MECH_B_PREDATOR                         "Kills.Mech.B.Predator"
#define CONST_STATS_MAP_VALKIRIE_SG_TOTAL                        "Map.Valkirie.SG.Total"
#define CONST_STATS_MAP_VALKIRIE_TDM_LOSSES                      "Map.Valkirie.TDM.Losses"
#define CONST_STATS_MAP_VALKIRIE_TDM_WINS                        "Map.Valkirie.TDM.Wins"
#define CONST_STATS_CRUSH_VEHICLE                                "CrushVehicle"
#define CONST_STATS_GAMEMODE_ALL_ABANDONED                       "GameMode.All.Abandonded"
#define CONST_STATS_MAP_VALKIRIE_TDM_TOTAL                       "Map.Valkirie.TDM.Total"
#define CONST_MECH_STATS_TOTALHEALED                             "Heal.TotalAmount"
#define CONST_R_GameSettingsCommon_CONTEXT_GAME_MODE_SIEGE       2
#define CONST_STATS_MAP_VALKIRIE_DM_LASTPLACE                    "Map.Valkirie.DM.LastPlace"
#define CONST_StatIndex_Assists                                  5
#define CONST_R_GameSettingsCommon_PROPERTYNAME_NUMBOTS          "NumBots"
#define CONST_STATS_MAP_VALKIRIE_DM_TOTAL                        "Map.Valkirie.DM.Total"
#define CONST_STATS_MAP_VALKIRIE_ALL_TOTAL                       "Map.Valkirie.All.Total"
#define CONST_STATS_MAP_TITAN_TDM_WINS                           "Map.Titan.TDM.Wins"
#define CONST_R_GameSettingsCommon_CONTEXT_GAME_MODE_DM          0
#define CONST_STATS_MAP_ALLEYS_MA_LOSSES                         "Map.Alleys.MA.Losses"
#define CONST_STATS_MAP_ALLEYS_MA_TOTAL                          "Map.Alleys.MA.Total"
#define CONST_STATS_MAP_ALLEYS_SG_LOSSES                         "Map.Alleys.SG.Losses"
#define CONST_STATS_GAMEMODE_MA_LOSSES                           "GameMode.MA.Losses"
#define CONST_STATS_SPAWN_MECH_C_TOTAL                           "Spawn.Mech.C.Total"
#define CONST_STATS_MAP_ALLEYS_SG_WINS                           "Map.Alleys.SG.Wins"
#define CONST_STATS_GAMEMODE_MA_WINS                             "GameMode.MA.Wins"
#define CONST_STATS_MAP_ALLEYS_SG_TOTAL                          "Map.Alleys.SG.Total"
#define CONST_STATS_MAP_ALLEYS_ALL_WINS                          "Map.Alleys.All.Wins"
#define CONST_R_GameSearchCommon_CONTEXT_VSBOTS_3_TO_2           5
#define CONST_R_GameSearchCommon_CONTEXT_ALLOWKEYBOARD_YES       1
#define CONST_STATS_MAP_ALLEYS_TDM_LOSSES                        "Map.Alleys.TDM.Losses"
#define CONST_STATS_MAP_ALLEYS_TDM_WINS                          "Map.Alleys.TDM.Wins"
#define CONST_STATS_MAP_ALLEYS_DM_WINS                           "Map.Alleys.DM.Wins"
#define CONST_MAX_PREVIEW_MECHS                                  6
#define CONST_STATS_MAP_ALLEYS_DM_TOTAL                          "Map.Alleys.DM.Total"
#define CONST_STATS_GAMEMODE_COOP_LASTMANSTANDING                "GameMode.CoOp.LastManStanding"
#define CONST_STATS_GAMEMODE_COOPTDM_TOTALMATCHES                "GameMode.CoOpTDM.TotalMatches"
#define CONST_STATS_MAP_SAHARA_MA_LOSSES                         "Map.Sahara.MA.Losses"
#define CONST_STATS_MAP_SAHARA_MA_WINS                           "Map.Sahara.MA.Wins"
#define CONST_STATS_MAP_TITAN_SG_LOSSES                          "Map.Titan.SG.Losses"
#define CONST_STATS_MAP_SAHARA_TDM_LOSSES                        "Map.Sahara.TDM.Losses"
#define CONST_GAMEEVENT_PLAYER_KILL_ENVIRONMENT                  1202
#define CONST_STATS_KILL_MECH_A_TECHNICIAN                       "Kills.Mech.A.Technician"
#define CONST_STATS_MAP_SAHARA_TDM_WINS                          "Map.Sahara.TDM.Wins"
#define CONST_R_GameSettingsCommon_CONTEXT_DEDICATEDSERVER       14
#define CONST_STATS_MAP_SAHARA_TDM_TOTAL                         "Map.Sahara.TDM.Total"
#define CONST_STATS_MAP_SAHARA_DM_WINS                           "Map.Sahara.DM.Wins"
#define CONST_STATS_KILL_AVENGER                                 "Kills.Avenger"
#define CONST_STATS_KILL_MECH_B_ROOKIE                           "Kills.Mech.B.Rookie"
#define CONST_STATS_MAP_SAHARA_DM_TOTAL                          "Map.Sahara.DM.Total"
#define CONST_STATS_KILL_MADEWITHMECH_B_FORGER                   "Kills.MadeWithMech.B.Forger"
#define CONST_STATS_MAP_TITAN_MA_LOSSES                          "Map.Titan.MA.Losses"
#define CONST_R_GameSearchCommon_CONTEXT_FULLSERVER_NO           0
#define CONST_R_GameSearchCommon_GS_EMAIL_MAXLENGTH              50
#define CONST_STATS_MAP_SAHARA_ALL_WINS                          "Map.Sahara.All.Wins"
#define CONST_FOV_Max                                            110
#define CONST_STATS_KILL_SILODEFENSE                             "Kills.SiloDefense"
#define CONST_STATS_MAP_SAHARA_ALL_TOTAL                         "Map.Sahara.All.Total"
#define CONST_STATS_MAP_ANDROMEDA_MA_WINS                        "Map.Andromeda.MA.Wins"
#define CONST_STATS_MAP_ANDROMEDA_MA_TOTAL                       "Map.Andromeda.MA.Total"
#define CONST_STATS_MAP_ANDROMEDA_SG_LOSSES                      "Map.Andromeda.SG.Losses"
#define CONST_R_GameSettingsCommon_CONTEXT_DEDICATEDSERVER_NO    0
#define CONST_STATS_MAP_ANDROMEDA_TDM_LOSSES                     "Map.Andromeda.TDM.Losses"
#define CONST_STATS_SPAWN_MECH_A_SCOUT                           "Spawn.Mech.A.Scout"
#define CONST_STATS_MAP_ANDROMEDA_TDM_WINS                       "Map.Andromeda.TDM.Wins"
#define CONST_STATS_GAMEMODE_SG_ENEMYSHIPSLAUNCHED               "GameMode.SG.EnemyShipsLaunched"
#define CONST_STATS_COOP_CHALLENGE_TRUSTYOUREYE                  "CoOp.Challenge.TrustYourEye"
#define CONST_STATS_MAP_ANDROMEDA_DM_LASTPLACE                   "Map.Andromeda.DM.LastPlace"
#define CONST_STATS_KILL_MECH_B_DEMOLITION                       "Kills.Mech.B.Demolition"
#define CONST_GFX_MESSAGE_TYPE_FRIEND_REQUEST                    1
#define CONST_MaxDamageTrackingTime                              2.0f
#define CONST_STATS_MAP_ANDROMEDA_DM_TOTAL                       "Map.Andromeda.DM.Total"
#define CONST_STATS_SPAWN_MECH_B_PREDATOR                        "Spawn.Mech.B.Predator"
#define CONST_STATS_MAP_ANDROMEDA_ALL_WINS                       "Map.Andromeda.All.Wins"
#define CONST_STATS_MAP_TITAN_MA_WINS                            "Map.Titan.MA.Wins"
#define CONST_STATS_MAP_TITAN_MA_TOTAL                           "Map.Titan.MA.Total"
#define CONST_STATS_MAP_TITAN_TDM_LOSSES                         "Map.Titan.TDM.Losses"
#define CONST_STATS_KILL_NEMESIS                                 "Kills.Nemesis"
#define CONST_STATS_COOP_VICTORY_MECH_C_ROCKETEER                "CoOp.Victory.Mech.C.Rocketeer"
#define CONST_STATS_MAP_TITAN_TDM_TOTAL                          "Map.Titan.TDM.Total"
#define CONST_STATS_GAMEMODE_SG_EUDELIVERED                      "GameMode.SG.EUDelivered"
#define CONST_STATS_KILL_MECH_B_ASSAULT                          "Kills.Mech.B.Assault"
#define CONST_STATS_MAP_TITAN_DM_LASTPLACE                       "Map.Titan.DM.LastPlace"
#define CONST_R_GameSearchCommon_STATS_VIEW_DM_VEHICLES_RANKED_ALLTIME 6
#define CONST_STATS_KILL_ZOOMED                                  "Kills.Zoomed"
#define CONST_STATS_MAP_TITAN_DM_WINS                            "Map.Titan.DM.Wins"
#define CONST_STATS_GAMEMODE_SG_QUICKLAUNCH                      "GameMode.SG.QuickLaunch"
#define CONST_STATS_KILL_ENEMY_ON_JUMPPAD                        "Kills.EnemyOnJumppad"
#define CONST_STATS_KILL_MADEWITHMECH_C_ROCKETEER                "Kills.MadeWithMech.C.Rocketeer"
#define CONST_STATS_MAP_TITAN_DM_TOTAL                           "Map.Titan.DM.Total"
#define CONST_STATS_KILL_MECH_B_G2_ASSAULT                       "Kills.Mech.B.G2_Assault"
#define CONST_R_GameSearchCommon_CONTEXT_BOTSKILL_MASTERFUL      5
#define CONST_STATS_MAP_TITAN_ALL_WINS                           "Map.Titan.All.Wins"
#define CONST_STATS_COOP_SURVIVALIST_MECH_C_ROCKETEER            "CoOp.Survivalist.Mech.C.Rocketeer"
#define CONST_R_DamageableActor_MAX_DESTRUCTION_STATES           4
#define CONST_STATS_MAP_TITAN_ALL_TOTAL                          "Map.Titan.All.Total"
#define CONST_STATS_COOP_VICTORY_MECH_C_VANGUARD_3               "CoOp.Victory.Mech.C.Vanguard2"
#define CONST_STATS_COOP_VICTORY_MECH_C_VANGUARD                 "CoOp.Victory.Mech.C.Vanguard"
#define CONST_STATS_COOP_VICTORY_MECH_C_SIEGETANK                "CoOp.Victory.Mech.C.SiegeTank"
#define CONST_STATS_GAMEMODE_COOP_BOSSKILLINGBLOWS               "GameMode.CoOp.BossKillingBlows"
#define CONST_STATS_COOP_VICTORY_MECH_C_G2_RAIDER                "CoOp.Victory.Mech.C.G2_Raider"
#define CONST_STATS_COOP_VICTORY_MECH_C_FIREFIGHTER              "CoOp.Victory.Mech.C.Firefighter"
#define CONST_STATS_GAMEMODE_TDM_ABANDONED                       "GameMode.TDM.Abandonded"
#define CONST_STATS_KILL_STREAK_8                                "Kills.Streak.7"
#define CONST_NUM_SMOKEFALL_FX                                   12
#define CONST_R_GameSettingsCommon_CONTEXT_TIMELIMIT_16          2
#define CONST_STATS_GAMEMODE_SG_WINS                             "GameMode.SG.Wins"
#define CONST_STATS_KILL_MADEWITHMECH_C_TOTAL                    "Kills.MadeWithMech.C.Total"
#define CONST_STATS_COOP_VICTORY_MECH_C_BRAWLER                  "CoOp.Victory.Mech.C.Brawler"
#define CONST_STATS_COOP_VICTORY_MECH_B_G2_SHARPSHOOTER          "CoOp.Victory.Mech.B.G2_Sharpshooter"
#define CONST_STATS_COOP_VICTORY_MECH_B_ROOKIE                   "CoOp.Victory.Mech.B.Rookie"
#define CONST_R_GameSearchCommon_CONTEXT_DEDICATEDSERVER_YES     1
#define CONST_STATS_COOP_SURVIVALIST_MECH_C_VANGUARD             "CoOp.Survivalist.Mech.C.Vanguard"
#define CONST_STATS_COOP_VICTORY_MECH_B_RAIDER                   "CoOp.Victory.Mech.B.Raider"
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_SCORE                  11001
#define CONST_STATS_COOP_VICTORY_MECH_B_PREDATOR                 "CoOp.Victory.Mech.B.Predator"
#define CONST_R_GameSearchCommon_STATS_VIEW_DM_WEAPONS_ALLTIME   3
#define CONST_STATS_KILL_BOTH_ZOOMED                             "Kills.BothZoomed"
#define CONST_STATS_COOP_VICTORY_MECH_B_FORGER                   "CoOp.Victory.Mech.B.Forger"
#define CONST_STATS_COOP_VICTORY_MECH_B_DEMOLITION               "CoOp.Victory.Mech.B.Demolition"
#define CONST_MAX_PRIMARY_WEAPON_LEVELS                          3
#define CONST_STATS_COOP_VICTORY_MECH_B_BRUISER                  "CoOp.Victory.Mech.B.Bruiser"
#define CONST_STATS_COOP_SURVIVALIST_MECH_C_VANGUARD_3           "CoOp.Survivalist.Mech.C.Vanguard2"
#define CONST_STATS_DEATH_WHILE_HEALING                          "Death.WhileHealing"
#define CONST_STATS_COOP_VICTORY_MECH_B_G2_ASSAULT               "CoOp.Victory.Mech.B.G2_Assault"
#define CONST_R_GameSettingsCommon_CONTEXT_TIMELIMIT_11          1
#define CONST_STATS_KILL_MULTI_6                                 "Kills.Multi.5"
#define CONST_STATS_COOP_VICTORY_MECH_B_ASSAULT                  "CoOp.Victory.Mech.B.Assault"
#define CONST_STATS_GAMEMODE_ALL_TOTALMATCHES                    "GameMode.All.TotalMatches"
#define CONST_STATS_COOP_VICTORY_MECH_A_TECHNICIAN               "CoOp.Victory.Mech.A.Technician"
#define CONST_STATS_COOP_VICTORY_MECH_A_SCOUT                    "CoOp.Victory.Mech.A.Scout"
#define CONST_R_GameSearchCommon_CONTEXT_GOALSCORE_31            4
#define CONST_STATS_COOP_VICTORY_MECH_A_G2_INFILTRATOR           "CoOp.Victory.Mech.A.G2_Infiltrator"
#define CONST_STATS_GAMEMODE_DM_WINS                             "GameMode.DM.Wins"
#define CONST_STATS_COOP_VICTORY_MECH_A_INFILTRATOR              "CoOp.Victory.Mech.A.Infiltrator"
#define CONST_STATS_COOP_VICTORY_MECH_A_BERSERKER                "CoOp.Victory.Mech.A.Berserker"
#define CONST_STATS_COOP_SURVIVALIST_MECH_C_SIEGETANK            "CoOp.Survivalist.Mech.C.SiegeTank"
#define CONST_STATS_COOP_SURVIVALIST_MECH_C_MORTARER             "CoOp.Survivalist.Mech.C.Mortarer"
#define CONST_STATS_COOP_SURVIVALIST_MECH_B_G2_SHARPSHOOTER      "CoOp.Survivalist.Mech.B.G2_Sharpshooter"
#define CONST_STATS_GAMEMODE_COOPTDM_LOSSES                      "GameMode.CoOpTDM.Losses"
#define CONST_STATS_USE_TAUNT                                    "UseTaunt"
#define CONST_STATS_COOP_SURVIVALIST_MECH_C_G2_RAIDER            "CoOp.Survivalist.Mech.C.G2_Raider"
#define CONST_STATS_COOP_SURVIVALIST_MECH_C_FIREFIGHTER          "CoOp.Survivalist.Mech.C.Firefighter"
#define CONST_STATS_COOP_SURVIVALIST_MECH_C_BRAWLER              "CoOp.Survivalist.Mech.C.Brawler"
#define CONST_STATS_COOP_SURVIVALIST_MECH_B_SHARPSHOOTER         "CoOp.Survivalist.Mech.B.Sharpshooter"
#define CONST_R_GameSettingsCommon_CONTEXT_BOTSKILL_EXPERIENCED  2
#define CONST_STATS_COOP_SURVIVALIST_MECH_B_ROOKIE               "CoOp.Survivalist.Mech.B.Rookie"
#define CONST_STATS_SPAWN_MECH_B_DEMOLITION                      "Spawn.Mech.B.Demolition"
#define CONST_STATS_KILL_REVENGE                                 "Kills.Revenge"
#define CONST_R_GameSearchCommon_CONTEXT_EMPTYSERVER_YES         1
#define CONST_GFX_MESSAGE_TYPE_GAME_INVITE                       3
#define CONST_STATS_COOP_SURVIVALIST_MECH_B_PREDATOR             "CoOp.Survivalist.Mech.B.Predator"
#define CONST_R_GameSearchCommon_CONTEXT_FULLSERVER              12
#define CONST_STATS_KILL_MECH_C_TOTAL                            "Kills.Mech.C.Total"
#define CONST_STATS_COOP_SURVIVALIST_MECH_B_FORGER               "CoOp.Survivalist.Mech.B.Forger"
#define CONST_STATS_COOP_SURVIVALIST_MECH_B_BRUISER              "CoOp.Survivalist.Mech.B.Bruiser"
#define CONST_STATS_COOP_SURVIVALIST_MECH_B_G2_ASSAULT           "CoOp.Survivalist.Mech.B.G2_Assault"
#define CONST_R_GameSettingsCommon_CONTEXT_VSBOTS_2_TO_2         4
#define CONST_STATS_COOP_SURVIVALIST_MECH_B_ASSAULT              "CoOp.Survivalist.Mech.B.Assault"
#define CONST_STATS_COOP_CHALLENGE_SPEEDFREAKS                   "CoOp.Challenge.SpeedFreaks"
#define CONST_STATS_COOP_SURVIVALIST_MECH_A_TECHNICIAN           "CoOp.Survivalist.Mech.A.Technician"
#define CONST_STATS_COOP_SURVIVALIST_MECH_A_SCOUT                "CoOp.Survivalist.Mech.A.Scout"
#define CONST_MECH_STATS_EXPPOINTS                               "ExpPoints"
#define CONST_STATS_COOP_SURVIVALIST_MECH_A_REAPER               "CoOp.Survivalist.Mech.A.Reaper"
#define CONST_STATS_COOP_SURVIVALIST_MECH_A_G2_INFILTRATOR       "CoOp.Survivalist.Mech.A.G2_Infiltrator"
#define CONST_STATS_GAMEMODE_ALL_MVP                             "GameMode.All.MVP"
#define CONST_StatIndex_DamageSustained                          8
#define CONST_STATS_GAMEMODE_SG_WINS_MINTIME                     "GameMode.SG.WinsMinTime"
#define CONST_R_GameSettingsCommon_CONTEXT_EMPTYSERVER_YES       1
#define CONST_STATS_COOP_SURVIVALIST_MECH_A_BERSERKER            "CoOp.Survivalist.Mech.A.Berserker"
#define CONST_MECH_STATS_SUICIDES                                "Suicides"
#define CONST_STATS_COOP_CHALLENGE_GLASSCANNON                   "CoOp.Challenge.GlassCannon"
#define CONST_STATS_COOP_CHALLENGE_MISSIONIMPROBABLE             "CoOp.Challenge.MissionImprobable"
#define CONST_STATS_GAMEMODE_COOPTDM_ABANDONED                   "GameMode.CoOpTDM.Abandonded"
#define CONST_STATS_GAMEMODE_MA_HOLDALLSILOSFORTIME              "GameMode.MA.HoldAllSilosForTime"
#define CONST_STATS_KILL_STREAK_10                               "Kills.Streak.9"
#define CONST_NUM_DAMAGE_INDICATORS                              4
#define CONST_STATS_COOP_CHALLENGE_COMPLETED                     "CoOp.Challenge.Completed"
#define CONST_STATS_GAMEMODE_TDM_WINS                            "GameMode.TDM.Wins"
#define CONST_STATS_GAMEMODE_COOP_TEAMSURVIVALIST                "GameMode.CoOp.TeamSurvivalist"
#define CONST_STATS_KILL_SILOCONTESTED                           "Kills.SiloContested"
#define CONST_STATS_GAMEMODE_COOP_BOMBERTEAMKILLS                "GameMode.CoOp.BomberTeamKills"
#define CONST_STATS_KILL_MADEWITHMECH_A_REAPER                   "Kills.MadeWithMech.A.Reaper"
#define CONST_STATS_GAMEMODE_COOP_WINS_MINTIME                   "GameMode.CoOp.WinsMinTime"
#define CONST_STATS_DEATH_BASE_TURRET                            "Death.BaseTurret"
#define CONST_STATS_GAMEMODE_COOP_WINS                           "GameMode.CoOp.Wins"
#define CONST_STATS_GAMEMODE_COOP_LOSSES                         "GameMode.CoOp.Losses"
#define CONST_STATS_GAMEMODE_MA_CLOSEGAME                        "GameMode.MA.CloseGame"
#define CONST_STATS_SPAWN_MECH_B_BRUISER                         "Spawn.Mech.B.Bruiser"
#define CONST_MAX_PREDATOR_MINES                                 8
#define CONST_R_GameSettingsCommon_CONTEXT_BOTSKILL_NOVICE       0
#define CONST_STATS_GAMEMODE_COOP_TOTALMATCHES                   "GameMode.CoOp.TotalMatches"
#define CONST_MECH_STATS_REPAIR_TEAMMATES                        "Repair.TeammateAmount"
#define CONST_GAMEEVENT_AGGREGATED_AWARD_END                     11899
#define CONST_STATS_GAMEMODE_COOP_BOTKILLINGBLOWS                "GameMode.CoOp.BotKillingBlows"
#define CONST_STATS_GAMEMODE_COOP_RESOURCEFUL                    "GameMode.CoOp.Resourceful"
#define CONST_STATS_GAMEMODE_COOPTDM_BOTKILLS                    "GameMode.CoOpTDM.BotKills"
#define CONST_STATS_GAMEMODE_TDM_TOTALMATCHES                    "GameMode.TDM.TotalMatches"
#define CONST_STATS_GAMEMODE_COOPTDM_MVP                         "GameMode.CoOpTDM.MVP"
#define CONST_STATS_GAMEMODE_MA_WINS_MINTIME                     "GameMode.MA.WinsMinTime"
#define CONST_STATS_GAMEMODE_COOPTDM_WINS_MINTIME                "GameMode.CoOpTDM.WinsMinTime"
#define CONST_R_GameSearchCommon_CONTEXT_GOALSCORE_21            3
#define CONST_R_GameSearchCommon_CONTEXT_PURESERVER              6
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_MULTIKILL              11015
#define CONST_STATS_GAMEMODE_COOPTDM_WINS                        "GameMode.CoOpTDM.Wins"
#define CONST_R_GameSettingsCommon_CONTEXT_EMPTYSERVER           13
#define CONST_SENSITIVITY_MAX                                    1.0
#define CONST_STATS_GAMEMODE_COOPTDM_TOTALMATCHES_MINTIME        "Gamemode.CoOpTDM.TotalMatchesMinTime"
#define CONST_STATS_GAMEMODE_SG_MVP                              "GameMode.SG.MVP"
#define CONST_STATS_KILL_MULTI_TOTAL                             "Kills.Multi.Total"
#define CONST_GFX_MESSAGE_TYPE_GAME_EMERGENCY                    4
#define CONST_STATS_GAMEMODE_SG_FIRSTBLOOD                       "GameMode.SG.FirstBlood"
#define CONST_STATS_GAMEMODE_SG_FULLBASEHEALTH                   "GameMode.SG.FullBaseHealth"
#define CONST_STATS_GAMEMODE_SG_CLOSEGAME                        "GameMode.SG.CloseGame"
#define CONST_STATS_GAMEMODE_SG_FILLEDEUTANK                     "GameMode.SG.FilledEUTank"
#define CONST_STATS_SPAWN_MECH_C_MORTARER                        "Spawn.Mech.C.Mortarer"
#define CONST_STATS_KILL_AACONTESTED                             "Kills.AAContested"
#define CONST_R_GameSearchCommon_CONTEXT_GOALSCORE_16            2
#define CONST_STATS_GAMEMODE_SG_EUCOLLECTED                      "GameMode.SG.EUCollected"
#define CONST_STATS_GAMEMODE_SG_DESTROY_BATTLESHIP_TURRET        "GameMode.SG.DestroyBattleshipTurret"
#define CONST_STATS_GAMEMODE_MA_FIRSTBLOOD                       "GameMode.MA.FirstBlood"
#define CONST_STATS_KILL_MULTI_7                                 "Kills.Multi.6"
#define CONST_STATS_GAMEMODE_SG_SHIPSSUCCESSFUL                  "GameMode.SG.ShipsSuccessful"
#define CONST_STATS_SPAWN_MECH_B_RAIDER                          "Spawn.Mech.B.Raider"
#define CONST_STATS_GAMEMODE_SG_SHIPSLAUNCHED                    "GameMode.SG.ShipsLaunched"
#define CONST_STATS_KILL_MADEWITHMECH_A_INFILTRATOR              "Kills.MadeWithMech.A.Infiltrator"
#define CONST_STATS_GAMEMODE_SG_TOTALMATCHES_MINTIME             "Gamemode.SG.TotalMatchesMinTime"
#define CONST_STATS_GAMEMODE_SG_LOSSES                           "GameMode.SG.Losses"
#define CONST_STATS_KILL_MADEWITHMECH_B_PREDATOR                 "Kills.MadeWithMech.B.Predator"
#define CONST_STATS_GAMEMODE_SG_TOTALMATCHES                     "GameMode.SG.TotalMatches"
#define CONST_STATS_GAMEMODE_MA_MVP                              "GameMode.MA.MVP"
#define CONST_STATS_GAMEMODE_MA_COMEBACK                         "GameMode.MA.Comeback"
#define CONST_STATS_KILL_MADEWITHMECH_B_SHARPSHOOTER             "Kills.MadeWithMech.B.Sharpshooter"
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_KILLSTREAK             11014
#define CONST_STATS_GAMEMODE_MA_FASTGAME                         "GameMode.MA.FastGame"
#define CONST_STATS_GAMEMODE_MA_CONTROLALLSILOS                  "GameMode.MA.ControlAllSilos"
#define CONST_MAX_EXTRA_FLASH                                    14
#define CONST_STATS_GAMEMODE_MA_TOTALMATCHES_MINTIME             "Gamemode.MA.TotalMatchesMinTime"
#define CONST_STATS_GAMEMODE_MA_ABANDONED                        "GameMode.MA.Abandonded"
#define CONST_STATS_GAMEMODE_TDM_MVP                             "GameMode.TDM.MVP"
#define CONST_GAMEEVENT_PLAYER_AWARD_GIVEN                       1401
#define CONST_STATS_GAMEMODE_TDM_FIRSTBLOOD                      "GameMode.TDM.FirstBlood"
#define CONST_STATS_KILL_MECH_A_G2_BERSERKER                     "Kills.Mech.A.G2_Berserker"
#define CONST_STATS_GAMEMODE_TDM_TOTALMATCHES_MINTIME            "Gamemode.TDM.TotalMatchesMinTime"
#define CONST_STATS_GAMEMODE_TDM_LOSSES                          "GameMode.TDM.Losses"
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_BOOSTTIME              11031
#define CONST_STATS_OVERHEATED                                   "Overheated"
#define CONST_STATS_BOOST_MORE_THAN_RUN                          "BoostMoreThanRun"
#define CONST_STATS_GAMEMODE_TDM_WINS_MINTIME                    "GameMode.TDM.WinsMinTime"
#define CONST_R_GameSearchCommon_STATS_VIEW_DM_VEHICLEWEAPONS_ALLTIME 5
#define CONST_R_GameSearchCommon_STATS_VIEW_DM_PLAYER_ALLTIME    1
#define CONST_STATS_GAMEMODE_DM_MVP                              "GameMode.DM.MVP"
#define CONST_STATS_GAMEMODE_DM_FIRSTBLOOD                       "GameMode.DM.FirstBlood"
#define CONST_STATS_KILL_MECH_C_SIEGETANK                        "Kills.Mech.C.SiegeTank"
#define CONST_STATS_GAMEMODE_DM_TOTALMATCHES_MINTIME             "Gamemode.DM.TotalMatchesMinTime"
#define CONST_STATS_GAMEMODE_DM_ABANDONED                        "GameMode.DM.Abandonded"
#define CONST_STATS_GAMEMODE_DM_WINS_MINTIME                     "GameMode.DM.WinsMinTime"
#define CONST_STATS_GAMEMODE_DM_TOTALMATCHES                     "GameMode.DM.TotalMatches"
#define CONST_MECH_STATS_DEATHS                                  "Deaths"
#define CONST_STATS_GAMEMODE_ALL_FIRST_BLOOD                     "GameMode.All.FirstBlood"
#define CONST_STATS_GAMEMODE_ALL_LOSSES                          "GameMode.All.Losses"
#define CONST_STATS_KILL_SELF_ON_JUMPPAD                         "Kills.SelfOnJumppad"
#define CONST_STATS_GAMEMODE_ALL_WINS_MINTIME                    "GameMode.All.WinsMinTime"
#define CONST_STATS_GAMEMODE_ALL_WINS                            "GameMode.All.Wins"
#define CONST_STATS_HEAL_FULLHEALFROMCRITICAL                    "Heal.FullHealFromCritical"
#define CONST_R_GameSettingsCommon_PROPERTY_TIMELIMIT            0x100000F9
#define CONST_GAMETYPE_TDM                                       2
#define CONST_STATS_SPAWN_MECH_A_INFILTRATOR                     "Spawn.Mech.A.Infiltrator"
#define CONST_R_GameSettingsCommon_CONTEXT_GAME_MODE             0x0000800B
#define CONST_STATS_SPAWN_MECH_C_VANGUARD_3                      "Spawn.Mech.C.Vanguard2"
#define CONST_STATS_SPAWN_MECH_C_VANGUARD                        "Spawn.Mech.C.Vanguard"
#define CONST_STATS_SPAWN_MECH_C_SIEGETANK                       "Spawn.Mech.C.SiegeTank"
#define CONST_MECH_STATS_TIMEHEALING                             "Heal.TimeSpent"
#define CONST_STATS_SPAWN_MECH_A_BERSERKER                       "Spawn.Mech.A.Berserker"
#define CONST_GAMEEVENT_PLAYER_OOE                               1300
#define CONST_STATS_SPAWN_MECH_C_ROCKETEER                       "Spawn.Mech.C.Rocketeer"
#define CONST_STATS_SPAWN_TOTAL                                  "Spawn.Total"
#define CONST_STATS_SPAWN_MECH_C_GRENADIER                       "Spawn.Mech.C.Grenadier"
#define CONST_STATS_SPAWN_MECH_C_G2_RAIDER                       "Spawn.Mech.C.G2_Raider"
#define CONST_MAX_PILOT_LEVELS_PLUS_ONE                          31
#define CONST_STATS_HAWKENPOINTS                                 "HawkenPoints"
#define CONST_MAX_HEALERS                                        3
#define CONST_MAX_BREAD_CRUMB                                    30
#define CONST_STATS_SPAWN_MECH_C_FIREFIGHTER                     "Spawn.Mech.C.FireFighter"
#define CONST_STATS_SPAWN_MECH_C_BRAWLER                         "Spawn.Mech.C.Brawler"
#define CONST_STATS_ACHIEVEMENT_POINTS                           "AchievementPoints"
#define CONST_STATS_SPAWN_MECH_B_G2_SHARPSHOOTER                 "Spawn.Mech.B.G2_Sharpshooter"
#define CONST_STATS_SPAWN_MECH_B_SHARPSHOOTER                    "Spawn.Mech.B.Sharpshooter"
#define CONST_STATS_SPAWN_MECH_B_ROOKIE                          "Spawn.Mech.B.Rookie"
#define CONST_STATS_SPAWN_MECH_B_FORGER                          "Spawn.Mech.B.Forger"
#define CONST_R_GameSettingsCommon_QUERY_TDM                     1
#define CONST_STATS_SPAWN_MECH_B_G2_ASSAULT                      "Spawn.Mech.B.G2_Assault"
#define CONST_STATS_SPAWN_MECH_B_ASSAULT                         "Spawn.Mech.B.Assault"
#define CONST_R_GameSearchCommon_STATS_VIEW_DM_WEAPONS_RANKED_ALLTIME 8
#define CONST_STATS_SPAWN_MECH_B_TOTAL                           "Spawn.Mech.B.Total"
#define CONST_STATS_SPAWN_MECH_A_TECHNICIAN                      "Spawn.Mech.A.Technician"
#define CONST_STATS_DAMAGE_SELF_EXPLOSIVE                        "Damage.Self.Explosive"
#define CONST_R_GameSettingsCommon_CONTEXT_BOTSKILL              0
#define CONST_STATS_SPAWN_MECH_A_G2_INFILTRATOR                  "Spawn.Mech.A.G2_Infiltrator"
#define CONST_STATS_SPAWN_MECH_A_TOTAL                           "Spawn.Mech.A.Total"
#define CONST_STATS_REPAIR_DEPLOYABLE                            "Repair.Deployable"
#define CONST_GAMEEVENT_PLAYER_MULTIKILL                         1101
#define CONST_STATS_REPAIR_TEAMMATE                              "Repair.Teammate"
#define CONST_MAX_SECONDARY_WEAPON_LEVELS                        3
#define CONST_STATS_HEAL_TOTALHEALED                             "Heal.TotalAmount"
#define CONST_STATS_KILL_ENDKILLSTREAK                           "Kills.EndKillStreak"
#define CONST_MAX_CHAIN_LINKS                                    4
#define CONST_STATS_HEAL_TIMEHEALING                             "Heal.TimeSpent"
#define CONST_STATS_DEATH_FALLING                                "Death.Falling"
#define CONST_R_GameSearchCommon_CONTEXT_NUMBOTS_2               1
#define CONST_STATS_HEAL_TIMESHEALED                             "Heal.NumTimes"
#define CONST_STATS_DAMAGE_SELF_ITEM                             "Damage.Self.Item"
#define CONST_R_GameSearchCommon_CONTEXT_PURESERVER_ANY          2
#define CONST_STATS_DAMAGE_SELF_OTHER                            "Damage.Self.Other"
#define CONST_R_GameSearchCommon_QUERY_DM                        0
#define CONST_STATS_DAMAGE_DEALT_TOTAL                           "Damage.Dealt.Total"
#define CONST_STATS_KILL_WHILE_IN_AIR                            "Kills.WhileInAir"
#define CONST_STATS_DAMAGE_SUSTAINED_TOTAL                       "Damage.Sustained.Total"
#define CONST_STATS_DISTANCE_TRAVELED                            "DistanceTraveled"
#define CONST_STATS_180_SPIN                                     "180Spin"
#define CONST_STATS_DODGED                                       "Dodged"
#define CONST_MECH_STATS_UNDERDOGBONUS                           "UnderdogBonus"
#define CONST_STATS_DEATH_MISSILE_SILO                           "Death.MissileSilo"
#define CONST_STATS_DEATH_EMPED_BY_KILLER                        "Death.EMPdByKiller"
#define CONST_STATS_DEATH_EMPED_GEN                              "Death.EMPdGeneral"
#define CONST_STATS_DEATH_IN_AIR                                 "Death.InAir"
#define CONST_EMPTY_ITEM                                         255
#define CONST_STATS_DEATH_TURRET                                 "Death.Turret"
#define CONST_STATS_ASSIST_CRITIAL_DAMAGE                        "Assist.CriticalDamage"
#define CONST_STATS_KILL_MECH_C_VANGUARD_3                       "Kills.Mech.C.Vanguard2"
#define CONST_STATS_KILL_WHILE_EMPED_GEN                         "Kills.WhileEMPdGeneral"
#define CONST_STATS_KILL_MECH_C_VANGUARD                         "Kills.Mech.C.Vanguard"
#define CONST_STATS_KILL_MECH_C_FIREFIGHTER                      "Kills.Mech.C.FireFighter"
#define CONST_R_GameSettingsCommon_CONTEXT_NUMBOTS_2             1
#define CONST_STATS_KILL_MECH_C_BRAWLER_BOSSMODE                 "Kills.Mech.C.BrawlerBossMode"
#define CONST_MECH_STATS_DOMINATEDPLAYER                         "DominatedPlayer"
#define CONST_STATS_KILL_MECH_C_BRAWLER                          "Kills.Mech.C.Brawler"
#define CONST_R_GameSearchCommon_CONTEXT_ALLOWKEYBOARD_ANY       2
#define CONST_SYNC_RECENT_FIRE_TIME                              0.2f
#define CONST_STATS_KILL_MECH_B_G2_SHARPSHOOTER                  "Kills.Mech.B.G2_Sharpshooter"
#define CONST_STATS_KILL_MADEWITHMECH_A_TOTAL                    "Kills.MadeWithMech.A.Total"
#define CONST_R_GFx_MainMenu_PROPERTY_CUSTOMMAPNAME              0x40000001
#define CONST_R_GameSearchCommon_PROPERTYNAME_TIMELIMIT          "TimeLimit"
#define CONST_CAMERA_SHAKE_LEVEL_MAX                             2
#define CONST_GAMEEVENT_PLAYER_SPOTTEDENEMY                      1111
#define CONST_MAX_PROP_LEVELS                                    6
#define CONST_STATS_KILL_MECH_B_SHARPSHOOTER                     "Kills.Mech.B.Sharpshooter"
#define CONST_STATS_KILL_MADEWITHMECH_B_RAIDER                   "Kills.MadeWithMech.B.Raider"
#define CONST_HUMANS_INDEX                                       0
#define CONST_STATS_KILL_MECH_B_FORGER                           "Kills.Mech.B.Forger"
#define CONST_STATS_KILL_MECH_B_BRUISER                          "Kills.Mech.B.Bruiser"
#define CONST_STATS_KILL_MECH_B_TOTAL                            "Kills.Mech.B.Total"
#define CONST_R_GameSettingsCommon_PROPERTYNAME_GOALSCORE        "GoalScore"
#define CONST_STATS_EXPPOINTS                                    "ExpPoints"
#define CONST_R_GameSettingsCommon_CONTEXT_BOTSKILL_AVERAGE      1
#define CONST_R_GameSettingsCommon_CONTEXT_ALLOWKEYBOARD         11
#define CONST_SENSITIVITY_MIN                                    0.0
#define CONST_STATS_KILL_MECH_A_REAPER                           "Kills.Mech.A.Reaper"
#define CONST_STATS_KILL_MECH_A_SCOUT                            "Kills.Mech.A.Scout"
#define CONST_STATS_KILL_MECH_A_G2_INFILTRATOR                   "Kills.Mech.A.G2_Infiltrator"
#define CONST_STATS_KILL_STREAK_5                                "Kills.Streak.4"
#define CONST_STATS_KILL_MECH_A_INFILTRATOR                      "Kills.Mech.A.Infiltrator"
#define CONST_STATS_KILL_MECH_A_BERSERKER                        "Kills.Mech.A.Berserker"
#define CONST_STATS_KILL_MECH_A_TOTAL                            "Kills.Mech.A.Total"
#define CONST_STATS_KILL_MADEWITHMECH_C_VANGUARD_3               "Kills.MadeWithMech.C.Vanguard2"
#define CONST_STATS_KILL_MADEWITHMECH_C_VANGUARD                 "Kills.MadeWithMech.C.Vanguard"
#define CONST_STATS_KILL_STREAK_11                               "Kills.Streak.10"
#define CONST_STATS_KILL_MADEWITHMECH_C_SIEGETANK                "Kills.MadeWithMech.C.SiegeTank"
#define CONST_STATS_PROGRESSION_PILOT_LEVEL                      "Progress.Pilot.Level"
#define CONST_R_GameSettingsCommon_PROPERTYNAME_SERVERDESCRIPTION "ServerDescription"
#define CONST_STATS_KILL_MADEWITHMECH_C_MORTARER                 "Kills.MadeWithMech.C.Mortarer"
#define CONST_MAX_PERSONALSERVERS                                15
#define CONST_STATS_KILL_MADEWITHMECH_C_GRENADIER                "Kills.MadeWithMech.C.Grenadier"
#define CONST_R_GameSearchCommon_CONTEXT_DEDICATEDSERVER_NO      0
#define CONST_STATS_KILL_MADEWITHMECH_C_G2_RAIDER                "Kills.MadeWithMech.C.G2_Raider"
#define CONST_STATS_KILL_MADEWITHMECH_C_FIREFIGHTER              "Kills.MadeWithMech.C.FireFighter"
#define CONST_R_GameSettingsCommon_PROPERTYNAME_CUSTOMMAPNAME    "CustomMapName"
#define CONST_STATS_KILL_MADEWITHMECH_C_BRAWLER                  "Kills.MadeWithMech.C.Brawler"
#define CONST_R_GameSearchCommon_CONTEXT_PRESENCE_MENUPRESENCE   0
#define CONST_STATS_KILL_MADEWITHMECH_B_G2_SHARPSHOOTER          "Kills.MadeWithMech.B.G2_Sharpshooter"
#define CONST_STATS_KILL_MADEWITHMECH_B_ROOKIE                   "Kills.MadeWithMech.B.Rookie"
#define CONST_STATS_KILL_MADEWITHMECH_B_BRUISER                  "Kills.MadeWithMech.B.Bruiser"
#define CONST_STATS_KILL_MADEWITHMECH_B_ASSAULT                  "Kills.MadeWithMech.B.Assault"
#define CONST_STATS_KILL_MADEWITHMECH_B_TOTAL                    "Kills.MadeWithMech.B.Total"
#define CONST_STATS_KILL_MULTI_BEST                              "Kills.Multi.Best"
#define CONST_R_GameSettingsCommon_CONTEXT_NUMBOTS_5             4
#define CONST_STATS_KILL_MADEWITHMECH_A_TECHNICIAN               "Kills.MadeWithMech.A.Technician"
#define CONST_STATS_TIMEPLAYED                                   "TimePlayed"
#define CONST_STATS_KILL_MADEWITHMECH_A_SCOUT                    "Kills.MadeWithMech.A.Scout"
#define CONST_R_GameSettingsCommon_CONTEXT_VSBOTS_1_TO_2         2
#define CONST_STATS_KILL_MADEWITHMECH_A_G2_INFILTRATOR           "Kills.MadeWithMech.A.G2_Infiltrator"
#define CONST_R_GameSettingsCommon_CONTEXT_FORCERESPAWN          10
#define CONST_STATS_KILL_MADEWITHMECH_A_G2_BERSERKER             "Kills.MadeWithMech.A.G2_Berserker"
#define CONST_STATS_KILL_SELF_OVERHEATED                         "Kills.SelfOverheated"
#define CONST_STATS_KILL_MADEWITHMECH_A_BERSERKER                "Kills.MadeWithMech.A.Berserker"
#define CONST_STATS_KILL_QUICKALLDAMAGE                          "Kills.QuickAllDamage"
#define CONST_STATS_KILL_ENEMY_EMPED_BY_SELF                     "Kills.EnemyEMPdBySelf"
#define CONST_STATS_KILL_STEAL                                   "Kills.Steal"
#define CONST_StatIndex_NemesisKills                             10
#define CONST_R_GameSettingsCommon_STATS_VIEW_DM_VEHICLES_ALLTIME 4
#define CONST_STATS_KILL_SILOATTACK                              "Kills.SiloAttack"
#define CONST_STATS_KILL_AADEFENSE                               "Kills.AADefense"
#define CONST_STATS_KILL_AAATTACK                                "Kills.AAAttack"
#define CONST_STATS_KILL_FULLEUTANK                              "Kills.FullEUTank"
#define CONST_STATS_KILL_STREAK_9                                "Kills.Streak.8"
#define CONST_STATS_KILL_STREAK_7                                "Kills.Streak.6"
#define CONST_STATS_KILL_STREAK_4                                "Kills.Streak.3"
#define CONST_STATS_KILL_STREAK_3                                "Kills.Streak.2"
#define CONST_R_GameSettingsCommon_STATS_VIEW_DM_WEAPONS_RANKED_ALLTIME 8
#define CONST_STATS_KILL_MULTI_5                                 "Kills.Multi.4"
#define CONST_STATS_KILL_MULTI_4                                 "Kills.Multi.3"
#define CONST_STATS_KILL_MULTI_3                                 "Kills.Multi.2"
#define CONST_GAMEEVENT_PLAYER_DODGE_END                         1503
#define CONST_STATS_KILL_UNDERDOGBONUS                           "Kills.UnderdogBonus"
#define CONST_STATS_KILL_DOMINATE_PLAYER                         "Kills.DominatePlayer"
#define CONST_STATS_KILL_CRUSH                                   "Kills.Crush"
#define CONST_R_GameSearchCommon_CONTEXT_NUMBOTS_3               2
#define CONST_GAMETYPE_HORDE_DEPRECATED                          5
#define CONST_STATS_KILL_SAVIOR                                  "Kills.Savior"
#define CONST_R_GameSettingsCommon_CONTEXT_FORCERESPAWN_YES      1
#define CONST_STATS_KILL_AT_CRITICAL_HEALTH                      "Kills.AtCriticalHealth"
#define CONST_MAX_ALT_PRIMARY_WEAPON_LEVELS                      3
#define CONST_STATS_KILL_ENEMY_OUT_OF_SIGHT                      "Kills.EnemyOutOfSight"
#define CONST_STATS_KILL_WHILE_HEALING                           "Kills.WhileHealing"
#define CONST_STATS_KILL_ENEMY_ZOOMED                            "Kills.EnemyZoomed"
#define CONST_R_GameSearchCommon_CONTEXT_FORCERESPAWN_YES        1
#define CONST_STATS_KILL_ENEMY_EMPED_GEN                         "Kills.EnemyEMPdGeneral"
#define CONST_STATS_KILL_ENEMY_OVERHEATED                        "Kills.EnemyOverheated"
#define CONST_MECH_STATS_SG_EUDELIVERED                          "SG.EUDelivered"
#define CONST_FOV_OculusMax                                      135
#define CONST_STATS_RATING                                       "MatchMaking.Rating"
#define CONST_MECH_STATS_ASSISTS                                 "Assists"
#define CONST_STATS_OVERFLOWEXPPOINTS_PAID_OUT                   "ExpPointsOverflow2"
#define CONST_MECH_STATS_MA_SILOSCAPTURED                        "MA.SilosCaptured"
#define CONST_MECH_STATS_SG_EUCOLLECTED                          "SG.EUCollected"
#define CONST_SERVERBROWSER_SERVERTYPE_LAN                       0
#define CONST_MECH_STATS_TURRETDEATHS                            "TurretDeaths"
#define CONST_StatIndex_GameMode1                                0
#define CONST_MECH_STATS_TIMESHEALED                             "Heal.NumTimes"
#define CONST_MECH_STATS_NUMMULTIKILLS                           "Kills.NumMultiKills"
#define CONST_MECH_STATS_BESTMULTIKILL                           "Kills.BestMultiKill"
#define CONST_MECH_STATS_BESTKILLSTREAK                          "Kills.BestKillStreak"
#define CONST_MECH_STATS_CRUSH                                   "Kills.Crush"
#define CONST_R_GameSearchCommon_CONTEXT_VSBOTS_3_TO_3           3
#define CONST_MECH_STATS_REVENGE                                 "Kills.Revenge"
#define CONST_MECH_STATS_SAVIOR                                  "Kills.Savior"
#define CONST_MECH_STATS_KILLS                                   "Kills.Total"
#define CONST_MECH_STATS_DAMAGESUSTAINED                         "DamageSustained"
#define CONST_MECH_STATS_DAMAGEDEALT                             "DamageDealth"
#define CONST_MECH_STATS_TIME_PLAYED                             "TimePlayed"
#define CONST_MECH_STATS_EARNEDEXPPOINTS                         "EarnedExpPoints"
#define CONST_R_GameSearchCommon_CONTEXT_BOTSKILL_ADEPT          4
#define CONST_GAMEEVENT_PLAYER_ASSIST                            1110
#define CONST_GAMETYPE_EXPLORE                                   12
#define CONST_GAMETYPE_BOTSTDM                                   11
#define CONST_GAMETYPE_VR_TRAINING                               10
#define CONST_R_GameSettingsCommon_PROPERTY_CUSTOMMAPNAME        0x40000001
#define CONST_GAMETYPE_CTF                                       8
#define CONST_MAX_REP_COOLED_BY                                  3
#define CONST_GAMETYPE_MA                                        4
#define CONST_GAMETYPE_SIEGE                                     0
#define CONST_MAX_ABILITY_LEVELS                                 5
#define CONST_NUM_COCKPIT_DECORATION_SLOTS                       3
#define CONST_MAX_PAID_OVERFLOW_XP                               200000
#define CONST_TEST_DRIVE_XP_TO_FREE_OVERFLOW_MULTIPLIER          0.1
#define CONST_MAX_MISSILE_SILO_NODES                             3
#define CONST_MAX_WEAPONS                                        4
#define CONST_R_GameSettingsCommon_CONTEXT_FULLSERVER            12
#define CONST_MAX_TOUCHING_PAWNS                                 3
#define CONST_NUM_ABILITY_UPGRADE_ITEMS                          0
#define CONST_NUM_WEAP_UPGRADE_ITEMS                             0
#define CONST_EMPTY_INSTANCE_ID                                  "empty"
#define CONST_MAX_DAMAGED_BY_SLOTS                               5
#define CONST_SECONDARY_WEAPON_INDEX                             100
#define CONST_NUM_MECH_TYPES                                     3
#define CONST_kCE_MAX                                            43
#define CONST_kCS_MAX                                            11
#define CONST_R_GameSettingsCommon_CONTEXT_MAPNAME_CUSTOM        0
#define CONST_FIREFLAG_TriggerEvent                              1
#define CONST_FIREFLAG_IgnoreLOS                                 2
#define CONST_R_GameSettingsCommon_PROPERTY_SERVERDESCRIPTION    0x40000003
#define CONST_R_GameSearchCommon_CONTEXT_TIMELIMIT_16            2
#define CONST_GAMEEVENT_NUMBOTS                                  1001
#define CONST_GAMEEVENT_GOALSCORE                                1003
#define CONST_GAMEEVENT_PLAYER_BADSTART                          1102
#define CONST_GAMEEVENT_PLAYER_BOOST_START                       1500
#define CONST_GAMEEVENT_ITEM_LAUNCHED                            1210
#define CONST_R_GameSearchCommon_GS_MESSAGE_MAXLENGTH            255
#define CONST_GAMEEVENT_ITEM_LASERMINE_PLANTED                   1215
#define CONST_GAMEEVENT_ITEM_LASERMINE_TRIPPED                   1216
#define CONST_GAMEEVENT_PLAYER_OOE_KILLED                        1301
#define CONST_GAMEEVENT_PLAYER_PARTYOWNER                        1402
#define CONST_R_GameSettingsCommon_GS_EMAIL_MAXLENGTH            50
#define CONST_GAMEEVENT_PLAYER_BOOST_END                         1501
#define CONST_R_GameSettingsCommon_CONTEXT_TIMELIMIT_31          4
#define CONST_R_GameSearchCommon_CONTEXT_FULLSERVER_YES          1
#define CONST_GAMEEVENT_PLAYER_DODGE_START                       1502
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_OOE                    11002
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_OOE_KILLED             11003
#define CONST_CAMERA_SHAKE_LEVEL_MIN                             0
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_ASSIST                 11011
#define CONST_VOLUME_MIN                                         0.0
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_WASSPOTTED             11013
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_DODGETIME              11032
#define CONST_GAMEEVENT_AGGREGATED_AWARD_START                   11700
#define CONST_MAX_ATTACH_EFFECTS                                 2
#define CONST_MAX_OBJECTIVES                                     5
#define CONST_R_GameSearchCommon_CONTEXT_BOTSKILL_GODLIKE        7
#define CONST_kColorSetCount                                     5
#define CONST_R_GameSettingsCommon_CONTEXT_NUMBOTS_1             0
#define CONST_kColorSetMembersCount                              15
#define CONST_MAX_FIRE_LATENCY                                   0.5f
#define CONST_FOV_Min                                            60
#define CONST_kEQOS_MAX                                          2
#define CONST_MIN_SYNC_REQUIRED_FIRE_INTERVAL                    0.6f
#define CONST_SYNC_DELAY_AFTER_CLIENT_FIRE                       1.0f
#define CONST_MAX_DEBUFFS                                        3
#define CONST_MAX_THIRD_PERSON_WEAPONS                           4
#define CONST_NUM_RADAR_STATES                                   10
#define CONST_NUM_MUZZLE_EFFECTS                                 2
#define CONST_NUM_TURRETS                                        2
#define CONST_FRAMES_BEING_STUCK_THRESHOLD                       5.0f
#define CONST_DISTANCE_WHEN_REACHED_TARGET                       500.0f
#define CONST_R_GameSearchCommon_CONTEXT_CAMPAIGN                9
#define CONST_BOTS_INDEX                                         1
#define CONST_COCKPIT_LAG_MIN                                    0.1
#define CONST_COCKPIT_LAG_MAX                                    1.0
#define CONST_COLOR_MAX                                          100.0
#define CONST_NUM_CAM_POSITIONS                                  4
#define CONST_DIALOG_PRIORITY_INFO                               4
#define CONST_DIALOG_PRIORITY_ERROR                              5
#define CONST_R_GameSearchCommon_GS_USERNAME_MAXLENGTH           15
#define CONST_R_GameSearchCommon_GS_PASSWORD_MAXLENGTH           30
#define CONST_R_GameSearchCommon_CONTEXT_GAME_MODE               0x0000800B
#define CONST_R_GameSearchCommon_CONTEXT_TIMELIMIT_21            3
#define CONST_R_GameSearchCommon_CONTEXT_GAME_MODE_TDM           1
#define CONST_R_GameSearchCommon_CONTEXT_GAME_MODE_SIEGE         2
#define CONST_R_GameSettingsCommon_GS_PASSWORD_MAXLENGTH         30
#define CONST_R_GameSearchCommon_CONTEXT_GAME_MODE_CUSTOM        3
#define CONST_R_GameSearchCommon_CONTEXT_BOTSKILL                0
#define CONST_R_GameSearchCommon_CONTEXT_MAPNAME                 1
#define CONST_R_GameSearchCommon_CONTEXT_ALLOWKEYBOARD           11
#define CONST_R_GameSettingsCommon_CONTEXT_BOTSKILL_ADEPT        4
#define CONST_R_GameSearchCommon_CONTEXT_EMPTYSERVER             13
#define CONST_R_GameSearchCommon_CONTEXT_DEDICATEDSERVER         14
#define CONST_R_GameSearchCommon_CONTEXT_MAPNAME_CUSTOM          0
#define CONST_R_GameSettingsCommon_STATS_VIEW_DM_VEHICLEWEAPONS_ALLTIME 5
#define CONST_R_GameSearchCommon_CONTEXT_BOTSKILL_EXPERIENCED    2
#define CONST_R_GameSearchCommon_CONTEXT_BOTSKILL_SKILLED        3
#define CONST_R_GameSearchCommon_CONTEXT_VSBOTS_1_TO_3           1
#define CONST_R_GameSearchCommon_CONTEXT_BOTSKILL_INHUMAN        6
#define CONST_R_GameSearchCommon_CONTEXT_GOALSCORE_11            1
#define CONST_R_GameSearchCommon_CONTEXT_NUMBOTS_4               3
#define CONST_R_GameSearchCommon_CONTEXT_NUMBOTS_5               4
#define CONST_R_GameSearchCommon_CONTEXT_NUMBOTS_6               5
#define CONST_R_GameSearchCommon_CONTEXT_NUMBOTS_7               6
#define CONST_R_GameSearchCommon_CONTEXT_NUMBOTS_8               7
#define CONST_R_GameSearchCommon_CONTEXT_NUMBOTS_9               8
#define CONST_R_GameSearchCommon_CONTEXT_TIMELIMIT_11            1
#define CONST_R_GameSearchCommon_CONTEXT_TIMELIMIT_31            4
#define CONST_R_GameSearchCommon_CONTEXT_CAMPAIGN_NO             0
#define CONST_R_GameSearchCommon_CONTEXT_CAMPAIGN_YES            1
#define CONST_R_GameSearchCommon_CONTEXT_ALLOWKEYBOARD_NO        0
#define CONST_R_GameSettingsCommon_CONTEXT_VSBOTS_1_TO_3         1
#define CONST_R_GameSearchCommon_CONTEXT_EMPTYSERVER_NO          0
#define CONST_R_GameSearchCommon_PROPERTY_CUSTOMGAMEMODE         0x40000002
#define CONST_R_GameSearchCommon_CONTEXT_VSBOTS_NONE             0
#define CONST_R_GameSearchCommon_CONTEXT_VSBOTS_1_TO_2           2
#define CONST_FP_FOV                                             70
#define CONST_R_GameSettingsCommon_CONTEXT_GOALSCORE_11          1
#define CONST_R_GameSearchCommon_CONTEXT_VSBOTS_2_TO_2           4
#define CONST_R_GameSearchCommon_CONTEXT_VSBOTS_4_TO_2           6
#define CONST_R_GameSearchCommon_PROPERTY_NUMBOTS                0x100000F7
#define CONST_R_GameSearchCommon_PROPERTY_TIMELIMIT              0x100000F9
#define CONST_R_GameSettingsCommon_CONTEXT_BOTSKILL_SKILLED      3
#define CONST_R_GameSearchCommon_PROPERTY_CUSTOMMAPNAME          0x40000001
#define CONST_R_GameSearchCommon_PROPERTY_SERVERDESCRIPTION      0x40000003
#define CONST_R_GameSearchCommon_PROPERTYNAME_NUMBOTS            "NumBots"
#define CONST_R_GameSearchCommon_PROPERTYNAME_GOALSCORE          "GoalScore"
#define CONST_R_GameSearchCommon_PROPERTYNAME_CUSTOMMAPNAME      "CustomMapName"
#define CONST_R_GameSearchCommon_PROPERTYNAME_SERVERDESCRIPTION  "ServerDescription"
#define CONST_R_GameSearchCommon_QUERY_TDM                       1
#define CONST_R_GameSearchCommon_QUERY_SIEGE                     2
#define CONST_R_GameSearchCommon_STATS_VIEW_DM_RANKED_ALLTIME    2
#define CONST_R_GameSearchCommon_STATS_VIEW_DM_VEHICLES_ALLTIME  4
#define CONST_R_GameSearchCommon_STATS_VIEW_DM_VEHICLEWEAPONS_RANKED_ALLTIME 7
#define CONST_R_GameSettingsCommon_GS_USERNAME_MAXLENGTH         15
#define CONST_R_GameSettingsCommon_GS_MESSAGE_MAXLENGTH          255
#define CONST_R_GameSettingsCommon_CONTEXT_GAME_MODE_TDM         1
#define CONST_StatIndex_Kills                                    3
#define CONST_R_GameSettingsCommon_CONTEXT_GAME_MODE_CUSTOM      3
#define CONST_R_GameSettingsCommon_CONTEXT_MAPNAME               1
#define CONST_R_GameSettingsCommon_CONTEXT_LOCKEDSERVER          7
#define CONST_R_GameSettingsCommon_CONTEXT_PURESERVER            6
#define CONST_R_GameSettingsCommon_CONTEXT_VSBOTS                8
#define CONST_R_GameSettingsCommon_CONTEXT_BOTSKILL_MASTERFUL    5
#define CONST_R_GameSettingsCommon_CONTEXT_BOTSKILL_INHUMAN      6
#define CONST_R_GameSettingsCommon_CONTEXT_BOTSKILL_GODLIKE      7
#define CONST_R_GameSettingsCommon_CONTEXT_GOALSCORE_6           0
#define CONST_R_GameSettingsCommon_CONTEXT_GOALSCORE_21          3
#define CONST_R_GameSettingsCommon_CONTEXT_GOALSCORE_31          4
#define CONST_R_GameSettingsCommon_CONTEXT_NUMBOTS_3             2
#define CONST_MAX_PROPERTY_STORES                                512
#define CONST_R_GameSettingsCommon_CONTEXT_NUMBOTS_4             3
#define CONST_R_GameSettingsCommon_CONTEXT_NUMBOTS_6             5
#define CONST_R_GameSettingsCommon_CONTEXT_NUMBOTS_7             6
#define CONST_R_GameSettingsCommon_CONTEXT_NUMBOTS_8             7
#define CONST_R_GameSettingsCommon_CONTEXT_TIMELIMIT_6           0
#define CONST_R_GameSettingsCommon_CONTEXT_TIMELIMIT_21          3
#define CONST_R_GameSettingsCommon_CONTEXT_LOCKEDSERVER_NO       0
#define CONST_R_GameSettingsCommon_CONTEXT_PURESERVER_NO         0
#define CONST_R_GameSettingsCommon_CONTEXT_LOCKEDSERVER_YES      1
#define CONST_R_GameSettingsCommon_CONTEXT_PURESERVER_YES        1
#define CONST_R_GameSettingsCommon_CONTEXT_PURESERVER_ANY        2
#define CONST_R_GameSettingsCommon_CONTEXT_FORCERESPAWN_NO       0
#define CONST_R_GameSettingsCommon_CONTEXT_ALLOWKEYBOARD_NO      0
#define CONST_R_GameSettingsCommon_CONTEXT_ALLOWKEYBOARD_ANY     2
#define CONST_R_GameSettingsCommon_CONTEXT_FULLSERVER_NO         0
#define CONST_R_GameSettingsCommon_CONTEXT_FULLSERVER_YES        1
#define CONST_R_GameSettingsCommon_CONTEXT_EMPTYSERVER_NO        0
#define CONST_R_GameSettingsCommon_CONTEXT_DEDICATEDSERVER_YES   1
#define CONST_R_GameSettingsCommon_CONTEXT_VSBOTS_NONE           0
#define CONST_R_GameSettingsCommon_CONTEXT_VSBOTS_3_TO_3         3
#define CONST_R_GameSettingsCommon_PROPERTY_NUMBOTS              0x100000F7
#define CONST_R_GameSettingsCommon_PROPERTY_GOALSCORE            0x100000F8
#define CONST_R_GameSettingsCommon_PROPERTY_CUSTOMGAMEMODE       0x40000002
#define CONST_R_GameSettingsCommon_PROPERTYNAME_TIMELIMIT        "TimeLimit"
#define CONST_R_GameSettingsCommon_PROPERTYNAME_CUSTOMGAMEMODE   "CustomGameMode"
#define CONST_R_GameSettingsCommon_QUERY_SIEGE                   2
#define CONST_FP_FOV_Oculus                                      125
#define CONST_R_GameSettingsCommon_STATS_VIEW_DM_PLAYER_ALLTIME  1
#define CONST_R_GameSettingsCommon_STATS_VIEW_DM_RANKED_ALLTIME  2
#define CONST_R_GameSettingsCommon_STATS_VIEW_DM_WEAPONS_ALLTIME 3
#define CONST_R_GameSettingsCommon_STATS_VIEW_DM_VEHICLES_RANKED_ALLTIME 6
#define CONST_StatIndex_Dominated                                9
#define CONST_R_GameSettingsCommon_STATS_VIEW_DM_VEHICLEWEAPONS_RANKED_ALLTIME 7
#define CONST_R_GFx_MainMenu_PROPERTY_CUSTOMGAMEMODE             0x40000002
#define CONST_SERVERBROWSER_SERVERTYPE_UNRANKED                  1
#define CONST_SERVERBROWSER_SERVERTYPE_RANKED                    2
#define CONST_FP_DEPTH                                           1
#define CONST_StatIndex_GameMode3                                2
#define CONST_StatIndex_Deaths                                   4
#define CONST_StatIndex_Healing                                  6
#define CONST_StatIndex_DamageDelivered                          7
#define CONST_StatIndex_SaviorKills                              11
#define CONST_MAX_MECH_TIERS                                     6
#define CONST_MAX_MECH_TIERS_PLUS_ONE                            7
#define CONST_DEFAULT_PROJECTILE_VALUE                           -1
#define CONST_MAX_PILOT_LEVELS                                   30
#define CONST_MAX_PATTERN_SCALES                                 7
#define CONST_MAX_CAMO_PATTERNS                                  91
#define CONST_MAX_TAUNTS                                         16
#define CONST_MaxChargeLevel                                     3
#define CONST_kAIMoveMinAcceptableDistance                       90

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum HawkenGame.HawkenTypes.EMessageDialogButton
enum class EMessageDialogButton : uint8_t
{
	MDB_Ok                         = 0,
	MDB_Yes                        = 1,
	MDB_No                         = 2,
	MDB_Checkbox                   = 3,
	MDB_MAX                        = 4
};


// Enum HawkenGame.HawkenTypes.eNPC_MECH_TYPE
enum class EeNPC_MECH_TYPE : uint8_t
{
	Type_A_Berserker               = 0,
	Type_A_Infiltrator             = 1,
	Type_B_Raider                  = 2,
	Type_A_Sniper                  = 3,
	Type_A_Technician              = 4,
	Type_B_Bruiser                 = 5,
	Type_B_Demolition              = 6,
	Type_B_Forger                  = 7,
	Type_B_Sharpshooter            = 8,
	Type_C_Brawler                 = 9,
	Type_C_Mortarer                = 10,
	Type_C_Rocketeer               = 11,
	Type_A_Scout                   = 12,
	Type_C_Grenadier               = 13,
	Type_B_Assault                 = 14,
	Type_B_Rookie                  = 15,
	Type_C_Vanguard                = 16,
	NPC_MECH_TYPE_MAX              = 17,
	eNPC_MECH_TYPE_MAX             = 18
};


// Enum HawkenGame.HawkenTypes.EChatterSpeaker
enum class EChatterSpeaker : uint8_t
{
	CS_Generic                     = 0,
	CS_PlayerTeam                  = 1,
	CS_MAX                         = 2
};


// Enum HawkenGame.HawkenTypes.EAIType
enum class EAIType : uint8_t
{
	AITYPE_Berserker               = 0,
	AIType_Infiltrator             = 1,
	AIType_Raider                  = 2,
	AIType_Sniper                  = 3,
	AIType_Technician              = 4,
	AIType_Bruiser                 = 5,
	AIType_Demolition              = 6,
	AIType_Forger                  = 7,
	AIType_Sharpshooter            = 8,
	AIType_Brawler                 = 9,
	AIType_Mortarer                = 10,
	AIType_Rocketeer               = 11,
	AIType_Scout                   = 12,
	AIType_Grenadier               = 13,
	AIType_Assault                 = 14,
	AIType_Rookie                  = 15,
	ATType_Vanguard                = 16,
	AIType_GeneralFriendly         = 17,
	AITypeSpecial_Any              = 18,
	AITypeSpecial_Player           = 19,
	AITypeSpecial_CoopAI           = 20,
	AITypeSpecial_Enemy            = 21,
	EAIType_MAX                    = 22
};


// Enum HawkenGame.HawkenTypes.ESpokenLineType
enum class ESpokenLineType : uint8_t
{
	SLT_Effort                     = 0,
	SLT_Kismet                     = 1,
	SLT_MAX                        = 2
};


// Enum HawkenGame.HawkenTypes.EAudioComponentType
enum class EAudioComponentType : uint8_t
{
	ACType_Engine                  = 0,
	ACType_Full                    = 1,
	ACType_MAX                     = 2
};


// Enum HawkenGame.HawkenTypes.EDefaultNpcBehavior
enum class EDefaultNpcBehavior : uint8_t
{
	BV_ATTACKER                    = 0,
	BV_SCAVANGER                   = 1,
	BV_MAX                         = 2
};


// Enum HawkenGame.HawkenTypes.AIDebugCategory
enum class EAIDebugCategory : uint8_t
{
	AID_Generic                    = 0,
	AID_Combat                     = 1,
	AID_Firing                     = 2,
	AID_BlackBoard                 = 3,
	AID_Preconditions              = 4,
	AID_LogSnap                    = 5,
	AID_History                    = 6,
	AID_ETQ                        = 7,
	AID_MessageSystem              = 8,
	AID_Covers                     = 9,
	AID_Animations                 = 10,
	AID_MAX                        = 11
};


// Enum HawkenGame.HawkenTypes.AIDebugLogFilter
enum class EAIDebugLogFilter : uint8_t
{
	AIDLF_None                     = 0,
	AIDLF_BehaviorTree             = 1,
	AIDLF_BlackBoard               = 2,
	AIDLF_CallStack                = 3,
	AIDLF_Enemy                    = 4,
	AIDLF_State                    = 5,
	AIDLF_ETQ                      = 6,
	AIDLF_Move                     = 7,
	AIDLF_Kismet                   = 8,
	AIDLF_Cover                    = 9,
	AIDLF_Animation                = 10,
	AIDLF_Chatter                  = 11,
	AIDLF_MAX                      = 12
};


// Enum HawkenGame.HawkenTypes.EGameSearchMode
enum class EGameSearchMode : uint8_t
{
	EGSM_Unranked                  = 0,
	EGSM_Competition               = 1,
	EGSM_Coop                      = 2,
	EGSM_MAX                       = 3
};


// Enum HawkenGame.HawkenTypes.ESpeakLineBroadcastFilter
enum class ESpeakLineBroadcastFilter : uint8_t
{
	SLBFilter_None                 = 0,
	SLBFilter_SpeakerOnly          = 1,
	SLBFilter_SpeakerTeamOnly      = 2,
	SLBFilter_SpeakerAndAddresseeOnly = 3,
	SLBFilter_MAX                  = 4
};


// Enum HawkenGame.HawkenTypes.ESpeechInterruptCondition
enum class ESpeechInterruptCondition : uint8_t
{
	SIC_IfHigher                   = 0,
	SIC_Never                      = 1,
	SIC_IfSameOrHigher             = 2,
	SIC_Always                     = 3,
	SIC_MAX                        = 4
};


// Enum HawkenGame.HawkenTypes.ESpeechPriority
enum class ESpeechPriority : uint8_t
{
	Speech_None                    = 0,
	Speech_Effort                  = 1,
	Speech_Chatter                 = 2,
	Speech_Pain                    = 3,
	Speech_ScriptedChatter         = 4,
	Speech_Scripted                = 5,
	Speech_Immediate               = 6,
	Speech_MAX                     = 7
};


// Enum HawkenGame.HawkenTypes.ECZDestination
enum class ECZDestination : uint8_t
{
	CZD_None                       = 0,
	CZD_Center                     = 1,
	CZD_Closest                    = 2,
	CZD_Random                     = 3,
	CZD_Covers                     = 4,
	CZD_MAX                        = 5
};


// Enum HawkenGame.HawkenTypes.EMechPresetLoadingState
enum class EMechPresetLoadingState : uint8_t
{
	MECH_PRESET_NOT_LOADED         = 0,
	MECH_PRESET_LOADING            = 1,
	MECH_PRESET_LOADED             = 2,
	MECH_PRESET_INVALID            = 3,
	MECH_PRESET_MAX                = 4
};


// Enum HawkenGame.HawkenTypes.HealBeamMode_e
enum class EHealBeamMode_e : uint8_t
{
	BM_OFF_REPAIR                  = 0,
	BM_OFF_DAMAGE                  = 1,
	BM_REPAIR_TARGET               = 2,
	BM_REPAIR_TARGET_BURST         = 3,
	BM_REPAIR_TARGET_FULL          = 4,
	BM_REPAIR_NO_TARGET            = 5,
	BM_REPAIR_NO_TARGET_BURST      = 6,
	BM_DAMAGE                      = 7,
	BM_DAMAGE_NO_TARGET            = 8,
	BM_MAX                         = 9
};


// Enum HawkenGame.HawkenTypes.EValueDisplayConversion
enum class EValueDisplayConversion : uint8_t
{
	NormalNumber                   = 0,
	DecimalToPercent               = 1,
	UnitsToMeters                  = 2,
	NoNumber                       = 3,
	EValueDisplayConversion_MAX    = 4
};


// Enum HawkenGame.HawkenTypes.ESelectionValidationStatus
enum class ESelectionValidationStatus : uint8_t
{
	SVS_NotValidating              = 0,
	SVS_InProcess                  = 1,
	SVS_Failed                     = 2,
	SVS_Succeeded                  = 3,
	SVS_MAX                        = 4
};


// Enum HawkenGame.HawkenTypes.DroneAnimStage_e
enum class EDroneAnimStage_e : uint8_t
{
	DAS_LOOP                       = 0,
	DAS_DEPLOY                     = 1,
	DAS_END                        = 2,
	DAS_MAX                        = 3
};


// Enum HawkenGame.HawkenTypes.EWaveRewardType
enum class EWaveRewardType : uint8_t
{
	WRT_COMMON                     = 0,
	WRT_RARE                       = 1,
	WRT_EPIC                       = 2,
	WRT_NONE                       = 3,
	WRT_MAX                        = 4
};


// Enum HawkenGame.HawkenTypes.EUIAlertMessage
enum class EUIAlertMessage : uint8_t
{
	AM_TEAM_BATTLESHIP_LAUNCHING   = 0,
	AM_ENEMY_BATTLESHIP_LAUNCHING  = 1,
	AM_TEAM_BATTLESHIP_LAUNCHED    = 2,
	AM_ENEMY_BATTLESHIP_LAUNCHED   = 3,
	AM_TEAM_BATTLESHIP_UNDER_ATTACK = 4,
	AM_ENEMY_BATTLESHIP_UNDER_ATTACK = 5,
	AM_TEAM_BATTLESHIP_HEAVY_DAMAGE = 6,
	AM_ENEMY_BATTLESHIP_HEAVY_DAMAGE = 7,
	AM_TEAM_BATTLESHIP_CRITICAL    = 8,
	AM_ENEMY_BATTLESHIP_CRITICAL   = 9,
	AM_TEAM_BATTLESHIP_DESTROYED   = 10,
	AM_ENEMY_BATTLESHIP_DESTROYED  = 11,
	AM_TEAM_BATTLESHIP_REACHED_BASE = 12,
	AM_ENEMY_BATTLESHIP_REACHED_BASE = 13,
	AM_DEFEND_TEAM_REACTOR         = 14,
	AM_DESTROY_ENEMY_REACTOR       = 15,
	AM_BASE_UNDER_ATTACK           = 16,
	AM_ENEMY_BASE_UNDER_ATTACK     = 17,
	AM_BASE_HEAVY_DAMAGE           = 18,
	AM_ENEMY_BASE_HEAVY_DAMAGE     = 19,
	AM_BASE_CRITICAL               = 20,
	AM_ENEMY_BASE_CRITICAL         = 21,
	AM_YOU_ARE_THE_BOSS            = 22,
	AM_SILO_1_CONTROLLED           = 23,
	AM_SILO_1_ENEMY_CONTROLLED     = 24,
	AM_SILO_1_NEUTRALIZED_GOOD     = 25,
	AM_SILO_1_NEUTRALIZED_BAD      = 26,
	AM_SILO_2_CONTROLLED           = 27,
	AM_SILO_2_ENEMY_CONTROLLED     = 28,
	AM_SILO_2_NEUTRALIZED_GOOD     = 29,
	AM_SILO_2_NEUTRALIZED_BAD      = 30,
	AM_SILO_3_CONTROLLED           = 31,
	AM_SILO_3_ENEMY_CONTROLLED     = 32,
	AM_SILO_3_NEUTRALIZED_GOOD     = 33,
	AM_SILO_3_NEUTRALIZED_BAD      = 34,
	AM_FLAG_TAKEN                  = 35,
	AM_ENEMY_FLAG_TAKEN            = 36,
	AM_FLAG_RETURNED               = 37,
	AM_ENEMY_FLAG_RETURNED         = 38,
	AM_CAPTURED_FLAG               = 39,
	AM_ENEMY_CAPTURED_FLAG         = 40,
	AM_MATCH_STARTED               = 41,
	AM_SUDDEN_DEATH                = 42,
	AM_TEAM_ANTI_AIR_LAUNCHED      = 43,
	AM_ENEMY_ANTI_AIR_LAUNCHED     = 44,
	AM_KILL_ENDED_KILL_STREAK      = 45,
	AM_KILL_DOMINATING_PLAYER      = 46,
	AM_KILL_NEW_NEMESIS            = 47,
	AM_KILL_KILLED_NEMESIS         = 48,
	AM_KILL_CRUSHING_KILL          = 49,
	AM_KILL_MULTIKILL              = 50,
	AM_KILL_MULTIKILL01            = 51,
	AM_KILL_MULTIKILL02            = 52,
	AM_KILL_MULTIKILL03            = 53,
	AM_KILL_MULTIKILL04            = 54,
	AM_MAX                         = 55
};


// Enum HawkenGame.HawkenTypes.ESplineType
enum class ESplineType : uint8_t
{
	SPL_Normal                     = 0,
	SPL_Safe                       = 1,
	SPL_MAX                        = 2
};


// Enum HawkenGame.HawkenTypes.EHeatMode
enum class EHeatMode : uint8_t
{
	EHM_PassiveGather              = 0,
	EHM_NoGather                   = 1,
	EHM_MAX                        = 2
};


// Enum HawkenGame.HawkenTypes.ECoopUpgradeCategory
enum class ECoopUpgradeCategory : uint8_t
{
	ECUC_WeaponDamage              = 0,
	ECUC_MaxArmor                  = 1,
	ECUC_HeatGen                   = 2,
	ECUC_MAX                       = 3
};


// Enum HawkenGame.HawkenTypes.EBotDifficultyLevels
enum class EBotDifficultyLevels : uint8_t
{
	BDL_Easy                       = 0,
	BDL_Medium                     = 1,
	BDL_Hard                       = 2,
	BDL_MAX                        = 3
};


// Enum HawkenGame.HawkenTypes.EMechProgressionFlags
enum class EMechProgressionFlags : uint8_t
{
	MPF_XpForTier2                 = 0,
	MPF_Tier2                      = 1,
	MPF_XpForTier3                 = 2,
	MPF_Tier3                      = 3,
	MPF_XpForTier4                 = 4,
	MPF_Tier4                      = 5,
	MPF_XpForTier5                 = 6,
	MPF_Tier5                      = 7,
	MPF_Tier5Max                   = 8,
	MPF_AlternateUpgrade_Level1    = 9,
	MPF_PrestigeUpgrade_Level1     = 10,
	MPF_PrimaryUpgrade_Level2or3   = 11,
	MPF_AlternateUpgrade_Level2or3 = 12,
	MPF_PrestigeUpgrade_Level2or3  = 13,
	MPF_SecondaryUpgrade_Level2or3 = 14,
	MPF_MAX                        = 15
};


// Enum HawkenGame.HawkenTypes.ENewUserExperienceFlags
enum class ENewUserExperienceFlags : uint8_t
{
	NUEF_Intro                     = 0,
	NUEF_Tutorial                  = 1,
	NUEF_Garage_Overview           = 2,
	NUEF_Garage_Progression        = 3,
	NUEF_Garage_Weapons            = 4,
	NUEF_Garage_Optimizations      = 5,
	NUEF_Garage_Items              = 6,
	NUEF_Garage_Internals          = 7,
	NUEF_Garage_Style              = 8,
	NUEF_Garage_Tips               = 9,
	NUEF_FirstOptimizationPoints   = 10,
	NUEF_MAX                       = 11
};


// Enum HawkenGame.HawkenTypes.EWeaponHands
enum class EWeaponHands : uint8_t
{
	PRIMARY_HAND                   = 0,
	SECONDARY_HAND                 = 1,
	ABILITY_HAND                   = 2,
	ABILITY_HAND_SECONDARY         = 3,
	NO_HAND                        = 4,
	NO_HAND_REP                    = 5,
	EWeaponHands_MAX               = 6
};


// Enum HawkenGame.HawkenTypes.EAbilities
enum class EAbilities : uint8_t
{
	ABILITY_None                   = 0,
	ABILITY_Cammo                  = 1,
	ABILITY_AttackBoost            = 2,
	ABILITY_Coolant                = 3,
	ABILITY_FuelReplenish          = 4,
	ABILITY_Barrier                = 5,
	ABILITY_Overclock              = 6,
	ABILITY_HeavyTurret            = 7,
	ABILITY_HeavyRegen             = 8,
	ABILITY_HeavyMobile            = 9,
	ABILITY_HeavyVanguard          = 10,
	ABILITY_PrecisionOverdrive     = 11,
	ABILITY_PowerShot              = 12,
	ABILITY_MortarCannon           = 13,
	ABILITY_Amplification          = 14,
	ABILITY_MagneticShell          = 15,
	ABILITY_Stalker                = 16,
	ABILITY_Bulwark                = 17,
	ABILITY_G2_Coolant             = 18,
	ABILITY_G2_Cammo               = 19,
	ABILITY_G2_SpeedBoost          = 20,
	ABILITY_G2_PowerShot           = 21,
	ABILITY_HeatWave               = 22,
	ABILITY_SiegeTank              = 23,
	ABILITY_G2_AttackBoost         = 24,
	ABILITY_G2_HealingBlast        = 25,
	ABILITY_MAX                    = 26
};


// Enum HawkenGame.HawkenTypes.EAllocatedOptimizationType
enum class EAllocatedOptimizationType : uint8_t
{
	EAT_Damage                     = 0,
	EAT_HeatGen                    = 1,
	EAT_Armor                      = 2,
	EAT_FuelCapacity               = 3,
	EAT_BoostSpeed                 = 4,
	EAT_FuelRegen                  = 5,
	EAT_RunSpeed                   = 6,
	EAT_AirEfficiency              = 7,
	EAT_RadarRange                 = 8,
	EAT_OverheatRecovery           = 9,
	EAT_Dodge                      = 10,
	EAT_FireRate                   = 11,
	EAT_HealRate                   = 12,
	EAT_MAX                        = 13
};


// Enum HawkenGame.HawkenTypes.ExplosiveImpactType_e
enum class ExplosiveImpactType_e : uint8_t
{
	EIT_SMALL_MULTI                = 0,
	EIT_SMALL_SINGLE               = 1,
	EIT_MEDIUM                     = 2,
	EIT_LARGE                      = 3,
	EIT_SPECIAL                    = 4,
	EIT_IMPACT                     = 5,
	EIT_NONE                       = 6,
	EIT_MAX                        = 7
};


// Enum HawkenGame.HawkenTypes.BulletImpactType_e
enum class EBulletImpactType_e : uint8_t
{
	BIT_SMALL                      = 0,
	BIT_MEDIUM                     = 1,
	BIT_LARGE                      = 2,
	BIT_X_LARGE                    = 3,
	BIT_NONE                       = 4,
	BIT_MAX                        = 5
};


// Enum HawkenGame.HawkenTypes.DebuffType_e
enum class EDebuffType_e : uint8_t
{
	DEBUFF_NONE                    = 0,
	DEBUFF_EXTRA_DAMAGE            = 1,
	DEBUFF_EXTRA_HEAT              = 2,
	DEBUFF_MAX                     = 3
};


// Enum HawkenGame.HawkenTypes.ePredatorVisionState
enum class EePredatorVisionState : uint8_t
{
	PVS_OFF                        = 0,
	PVS_TEMP_DISABLED              = 1,
	PVS_ON                         = 2,
	PVS_MAX                        = 3
};


// Enum HawkenGame.HawkenTypes.EVisorUIMode
enum class EVisorUIMode : uint8_t
{
	VUIM_NORMAL                    = 0,
	VUIM_ZOOM                      = 1,
	VUIM_TURRET                    = 2,
	VUIM_MAX                       = 3
};


// Enum HawkenGame.HawkenTypes.EVisorBootMode
enum class EVisorBootMode : uint8_t
{
	VBM_Instant                    = 0,
	VBM_Fast                       = 1,
	VBM_Normal                     = 2,
	VBM_Slow                       = 3,
	VBM_MAX                        = 4
};


// Enum HawkenGame.HawkenTypes.EValueDisplayContext
enum class EValueDisplayContext : uint8_t
{
	VDC_Neutral                    = 0,
	VDC_Positive                   = 1,
	VDC_Negative                   = 2,
	VDC_MAX                        = 3
};


// Enum HawkenGame.HawkenTypes.ESelectionValidationResponse
enum class ESelectionValidationResponse : uint8_t
{
	SVR_GeneralFailure             = 0,
	SVR_InstanceCollectionFailure  = 1,
	SVR_NoMechPreset               = 2,
	SVR_NoMechInstanceID           = 3,
	SVR_NoMechInstance             = 4,
	SVR_MechNotLoaded              = 5,
	SVR_InstanceExpired            = 6,
	SVR_Valid                      = 7,
	SVR_PrimaryWeaponFailure       = 8,
	SVR_MAX                        = 9
};


// Enum HawkenGame.HawkenTypes.EMenuMode
enum class EMenuMode : uint8_t
{
	MENUMODE_Pause                 = 0,
	MENUMODE_MechSelect            = 1,
	MENUMODE_TeamSelect            = 2,
	MENUMODE_Scoreboard            = 3,
	MENUMODE_PostMatchStats        = 4,
	MENUMODE_Blank                 = 5,
	MENUMODE_Closed                = 6,
	MENUMODE_MAX                   = 7
};


// Enum HawkenGame.HawkenTypes.EMoveSpeedLimit
enum class EMoveSpeedLimit : uint8_t
{
	MSL_Walk                       = 0,
	MSL_Run                        = 1,
	MSL_Sprint                     = 2,
	MSL_MAX                        = 3
};


// Enum HawkenGame.HawkenTypes.ERobotMoveState
enum class ERobotMoveState : uint8_t
{
	RMS_Walking                    = 0,
	RMS_Running                    = 1,
	RMS_Idling                     = 2,
	RMS_BoostFly                   = 3,
	RMS_BoostForward               = 4,
	RMS_BoostForwardEnd            = 5,
	RMS_BoostRight                 = 6,
	RMS_BoostLeft                  = 7,
	RMS_BoostSpin                  = 8,
	RMS_RechargeHealth             = 9,
	RMS_Falling                    = 10,
	RMS_HeavyMode                  = 11,
	RMS_HeavyBoostForward          = 12,
	RMS_HeavyModeEnd               = 13,
	RMS_UsingBaseLifter            = 14,
	RMS_UsingJumpPad               = 15,
	RMS_MechCharge                 = 16,
	RMS_Taunting                   = 17,
	RMS_MatchOver                  = 18,
	RMS_UsingAbility               = 19,
	RMS_HitReaction                = 20,
	RMS_Spawning                   = 21,
	RMS_MAX                        = 22
};


// Enum HawkenGame.HawkenTypes.EWeaponNetworkAnimation
enum class EWeaponNetworkAnimation : uint8_t
{
	WNA_NONE                       = 0,
	WNA_START                      = 1,
	WNA_FIRING                     = 2,
	WNA_STOP                       = 3,
	WNA_SWITCH_MODE_BEGIN          = 4,
	WNA_SWITCH_MODE_END            = 5,
	WNA_LOCK                       = 6,
	WNA_BLANK                      = 7,
	WNA_MAX                        = 8
};


// Enum HawkenGame.HawkenTypes.ENetworkAnimation
enum class ENetworkAnimation : uint8_t
{
	RNA_NONE                       = 0,
	RNA_TURN_LEFT                  = 1,
	RNA_TURN_RIGHT                 = 2,
	RNA_BOOST_LEFT                 = 3,
	RNA_BOOST_RIGHT                = 4,
	RNA_BOOST_FORWARD              = 5,
	RNA_BOOST_FORWARD_END          = 6,
	RNA_BOOST_SPIN                 = 7,
	RNA_BOOST_SPIN_AIR             = 8,
	RNA_BOOST_UP_START             = 9,
	RNS_BOOST_FORWARD_UP_START     = 10,
	RNA_WALL_BUMP                  = 11,
	RNA_HEAL_MODE_END              = 12,
	RNA_LAND                       = 13,
	RNA_LAND_BIG                   = 14,
	RNA_SHIELD_MODE_START          = 15,
	RNA_SHIELD_MODE_END            = 16,
	RNA_TAUNT_01                   = 17,
	RNA_TAUNT_02                   = 18,
	RNA_TAUNT_03                   = 19,
	RNA_TAUNT_04                   = 20,
	RNA_TAUNT_05                   = 21,
	RNA_TAUNT_06                   = 22,
	RNA_TAUNT_07                   = 23,
	RNA_TAUNT_08                   = 24,
	RNA_HIT_REACTION               = 25,
	RNA_ABILITY_01                 = 26,
	ENetworkAnimation_MAX          = 27
};


// Enum HawkenGame.HawkenTypes.EMeteorCreditEventType
enum class EMeteorCreditEventType : uint8_t
{
	MCT_ACHIEVEMENT                = 0,
	MCT_MAX                        = 1
};


// Enum HawkenGame.HawkenTypes.EHawkenPointEventType
enum class EHawkenPointEventType : uint8_t
{
	HPT_MATCH_WIN                  = 0,
	HPT_MATCH_LOSS                 = 1,
	HPT_MATCH_TIME                 = 2,
	HPT_MATCH_PLACE                = 3,
	HPT_BOOST                      = 4,
	HPT_ACHIEVEMENT                = 5,
	HPT_COOP_WAVE                  = 6,
	HPT_COOP_WIN                   = 7,
	HPT_TEAM_BALANCE_BONUS         = 8,
	HPT_MAX                        = 9
};


// Enum HawkenGame.HawkenTypes.EHintType
enum class EHintType : uint8_t
{
	HINT_NONE                      = 0,
	HINT_ACTIVATE_TURRET           = 1,
	HINT_FEED_TURRET               = 2,
	HINT_ACTIVATE_BASE_LIFTER      = 3,
	HINT_CANT_ACTIVATE_BASE_LIFTER = 4,
	HINT_CANT_ACTIVATE_BASE_LIFTER_ENEMY_SHIP = 5,
	HINT_BUY_ITEM_OFFENSIVE        = 6,
	HINT_BUY_ITEM_SUPPORT          = 7,
	HINT_SWAP_MECHS                = 8,
	HINT_ENERGY_STATION            = 9,
	HINT_COOP_ACTIVATE_REVIVAL     = 10,
	HINT_COOP_DO_REVIVAL           = 11,
	HINT_COOP_REVIVAL_OTHER        = 12,
	HINT_COOP_BEING_REVIVED        = 13,
	HINT_COOP_COLLECT_EU           = 14,
	HINT_CUSTOM                    = 15,
	HINT_MAX                       = 16
};


// Enum HawkenGame.HawkenTypes.CarouselActions_e
enum class ECarouselActions_e : uint8_t
{
	CACT_ANIMATED_TAUNT            = 0,
	CACT_HOLO_TAUNT                = 1,
	CACT_THRUSTERS                 = 2,
	CACT_HEAL                      = 3,
	CACT_ABILITY                   = 4,
	CACT_JUMP                      = 5,
	CACT_MAX                       = 6
};


// Enum HawkenGame.HawkenTypes.PostMatchFadeType_e
enum class EPostMatchFadeType_e : uint8_t
{
	PMF_BLACK                      = 0,
	PMF_WHITE                      = 1,
	PMF_NONE                       = 2,
	PMF_MAX                        = 3
};


// Enum HawkenGame.HawkenTypes.PostMatchState_e
enum class EPostMatchState_e : uint8_t
{
	PMS_NONE                       = 0,
	PMS_CINEMATIC                  = 1,
	PMS_CAROUSEL                   = 2,
	PMS_STATS                      = 3,
	PMS_MAX                        = 4
};


// Enum HawkenGame.HawkenTypes.ESpectatePlayerViewMode
enum class ESpectatePlayerViewMode : uint8_t
{
	SPVM_FirstPerson               = 0,
	SPVM_ThirdPerson               = 1,
	SPVM_ThirdPersonFreeView       = 2,
	SPVM_GhostCam                  = 3,
	SPVM_MAX                       = 4
};


// Enum HawkenGame.HawkenTypes.EPartLocation
enum class EPartLocation : uint8_t
{
	PARTLOC_Upper                  = 0,
	PARTLOC_Middle                 = 1,
	PARTLOC_Arm                    = 2,
	PARTLOC_Lower                  = 3,
	PARTLOC_Booster                = 4,
	PARTLOC_Armor                  = 5,
	PARTLOC_MAX                    = 6
};


// Enum HawkenGame.HawkenTypes.EInventoryItemType
enum class EInventoryItemType : uint8_t
{
	INV_Mech                       = 0,
	INV_Paintjob                   = 1,
	INV_MechA_PartUpper            = 2,
	INV_MechA_PartMiddle           = 3,
	INV_MechA_PartArm              = 4,
	INV_MechA_PartLower            = 5,
	INV_MechA_PartBooster          = 6,
	INV_MechA_PartArmor            = 7,
	INV_MechB_PartUpper            = 8,
	INV_MechB_PartMiddle           = 9,
	INV_MechB_PartArm              = 10,
	INV_MechB_PartLower            = 11,
	INV_MechB_PartBooster          = 12,
	INV_MechB_PartArmor            = 13,
	INV_MechC_PartUpper            = 14,
	INV_MechC_PartMiddle           = 15,
	INV_MechC_PartArm              = 16,
	INV_MechC_PartLower            = 17,
	INV_MechC_PartBooster          = 18,
	INV_MechC_PartArmor            = 19,
	INV_PrimaryWeapon              = 20,
	INV_SecondaryWeapon            = 21,
	INV_Item                       = 22,
	INV_UNUSED                     = 23,
	INV_ConsumableTriggered        = 24,
	INV_ConsumablePassive          = 25,
	INV_UNUSED01                   = 26,
	INV_Internals                  = 27,
	INV_Upgrade_PrimWeapon         = 28,
	INV_Upgrade_AltWeapon          = 29,
	INV_Upgrade_PrestigeWeapon     = 30,
	INV_Upgrade_SecondaryWeapon    = 31,
	INV_Upgrade_Ability            = 32,
	INV_HealingDrone               = 33,
	INV_Ability                    = 34,
	INV_XPBoost                    = 35,
	INV_HPBoost                    = 36,
	INV_HoloTaunt                  = 37,
	INV_AnimTaunt                  = 38,
	INV_ConsumableHoloTaunt        = 39,
	INV_PlayerData                 = 40,
	INV_Globals                    = 41,
	INV_Emblem                     = 42,
	INV_UICallout                  = 43,
	INV_MechTier2                  = 44,
	INV_MechTier3                  = 45,
	INV_MechTier4                  = 46,
	INV_MechTier5                  = 47,
	INV_LocalTestDrive             = 48,
	INV_Unified_PartBooster        = 49,
	INV_GameChallenge              = 50,
	INV_CockpitDecoration          = 51,
	INV_PrimaryReticle             = 52,
	INV_SecondaryReticle           = 53,
	INV_HudColor                   = 54,
	INV_ServerRegion               = 55,
	INV_PrivateServerToken         = 56,
	INV_MAX                        = 57
};


// Enum HawkenGame.HawkenTypes.EHudColorType
enum class EHudColorType : uint8_t
{
	HCT_FRIEND                     = 0,
	HCT_FOE                        = 1,
	HCT_NEUTRAL                    = 2,
	HCT_MAX                        = 3
};


// Enum HawkenGame.HawkenTypes.TechLevel_e
enum class ETechLevel_e : uint8_t
{
	TL_NONE                        = 0,
	TL_BASIC                       = 1,
	TL_MODERATE                    = 2,
	TL_ADVANCED                    = 3,
	TL_MAX                         = 4
};


// Enum HawkenGame.HawkenTypes.TechGroup_e
enum class ETechGroup_e : uint8_t
{
	TG_NONE                        = 0,
	TG_EXPLOSIVES                  = 1,
	TG_DEFENSES                    = 2,
	TG_TARGETING_SYSTEMS           = 3,
	TG_TACTICAL_DEVICES            = 4,
	TG_ELECTROMAGNETISM            = 5,
	TG_BATTLEFIELD_EFFECIENCY      = 6,
	TG_INTERNALS                   = 7,
	TG_MAX                         = 8
};


// Enum HawkenGame.HawkenTypes.MarkerType
enum class EMarkerType : uint8_t
{
	MT_Objective                   = 0,
	MT_Help                        = 1,
	MT_EnergyUnits                 = 2,
	MT_Death                       = 3,
	MT_MAX                         = 4
};


// Enum HawkenGame.HawkenTypes.EItemDebuffType
enum class EItemDebuffType : uint8_t
{
	IDT_EMP                        = 0,
	IDT_DISRUPTOR                  = 1,
	IDT_MAX                        = 2
};


// Enum HawkenGame.HawkenTypes.EnergyPickupType_e
enum class EnergyPickupType_e : uint8_t
{
	ENPT_HEALTH                    = 0,
	ENPT_ENERGY                    = 1,
	ENPT_MODE_DEFAULT              = 2,
	ENPT_HEAT                      = 3,
	ENPT_MAX                       = 4
};


// Enum HawkenGame.HawkenTypes.AttachMeshPart_e
enum class EAttachMeshPart_e : uint8_t
{
	AMP_TORSO                      = 0,
	AMP_MID                        = 1,
	AMP_LEGS                       = 2,
	AMP_ARMS                       = 3,
	AMP_MAX                        = 4
};


// Enum HawkenGame.HawkenTypes.EDamageCategories
enum class EDamageCategories : uint8_t
{
	DAMAGE_Trace                   = 0,
	DAMAGE_Explosion               = 1,
	DAMAGE_Item                    = 2,
	DAMAGE_MAX                     = 3
};


// Enum HawkenGame.HawkenTypes.EMechSubType
enum class EMechSubType : uint8_t
{
	MST_A_Sniper                   = 0,
	MST_B_Assault                  = 1,
	MST_MAX                        = 2
};


// Enum HawkenGame.HawkenTypes.EMechType
enum class EMechType : uint8_t
{
	MT_Mech_A                      = 0,
	MT_Mech_B                      = 1,
	MT_Mech_C                      = 2,
	MT_Mech_MAX                    = 3
};


// Enum HawkenGame.AIChatterManager.EChatterEvent
enum class EChatterEvent : uint8_t
{
	CE_None                        = 0,
	CE_LandLightEffort             = 1,
	CE_MeleeAttackLargeEffort      = 2,
	CE_EvadeEffort                 = 3,
	CE_BTRequest                   = 4,
	CE_GenericChatter              = 5,
	CE_PainSmall                   = 6,
	CE_PainMedium                  = 7,
	CE_PainLarge                   = 8,
	CE_PainHuge                    = 9,
	CE_DeathScream                 = 10,
	CE_SuddenDeathScream           = 11,
	CE_AbyssDeathScream            = 12,
	CE_MeleeAttempt                = 13,
	CE_MeleeSuccess                = 14,
	CE_LowHealth                   = 15,
	CE_HeavyDamage                 = 16,
	CE_BumpedPlayer                = 17,
	CE_DamagedByTeammate           = 18,
	CE_GenericFail                 = 19,
	CE_GenericSuccess              = 20,
	CE_Taunt                       = 21,
	CE_UsedUp                      = 22,
	CE_FailedToDamage_Shooting     = 23,
	CE_FailsafePlayerKill          = 24,
	CE_EnemyHint                   = 25,
	CE_Thumped                     = 26,
	CE_SlomoSniped                 = 27,
	CE_Kicked                      = 28,
	CE_Burning                     = 29,
	CE_BeingAimedAtByPlayer        = 30,
	CE_Dodge                       = 31,
	CE_DamagedPlayer               = 32,
	CE_SpottedEnemy_Alone          = 33,
	CE_SpottedEnemy_Team           = 34,
	CE_SpottedPlayer_Alone         = 35,
	CE_SpottedPlayer_Team          = 36,
	CE_Charge                      = 37,
	CE_PreFire                     = 38,
	CE_Fire                        = 39,
	CE_StillAlive                  = 40,
	CE_Stunned                     = 41,
	CE_NomReaction                 = 42,
	CE_MAX                         = 43
};


// Enum HawkenGame.AIChatterManager.EChatterPriority
enum class EChatterPriority : uint8_t
{
	CP_None                        = 0,
	CP_Low                         = 1,
	CP_Normal                      = 2,
	CP_High                        = 3,
	CP_MAX                         = 4
};


// Enum HawkenGame.R_PawnSoundGroup.ESoundVocal
enum class ESoundVocal : uint8_t
{
	SoundVocal_None                = 0,
	SoundVocal_LandLightEffort     = 1,
	SoundVocal_MeleeAttackLargeEffort = 2,
	SoundVocal_EvadeEffort         = 3,
	SoundVocal_BTRequest           = 4,
	SoundVocal_GenericChatter      = 5,
	SoundVocal_PainSmall           = 6,
	SoundVocal_PainMedium          = 7,
	SoundVocal_PainLarge           = 8,
	SoundVocal_PainHuge            = 9,
	SoundVocal_DeathScream         = 10,
	SoundVocal_SuddenDeathScream   = 11,
	SoundVocal_AbyssDeathScream    = 12,
	SoundVocal_MAX                 = 13
};


// Enum HawkenGame.BTDecoratorConditionBoolProperty.EBoolPropContext
enum class EBoolPropContext : uint8_t
{
	BPC_Self                       = 0,
	BPC_Enemy                      = 1,
	BPC_MAX                        = 2
};


// Enum HawkenGame.BTHawkenTaskUseAbility.AbilityUseType
enum class EAbilityUseType : uint8_t
{
	AUT_Activate                   = 0,
	AUT_Deactivate                 = 1,
	AUT_MAX                        = 2
};


// Enum HawkenGame.HawkenAi_ControllerBase.ECombatMood
enum class ECombatMood : uint8_t
{
	AICM_None                      = 0,
	AICM_Normal                    = 1,
	AICM_Passive                   = 2,
	AICM_Aggressive                = 3,
	AICM_Defensive                 = 4,
	AICM_MAX                       = 5
};


// Enum HawkenGame.HawkenAi_ControllerBase.EPerceptionMood
enum class EPerceptionMood : uint8_t
{
	AIPM_None                      = 0,
	AIPM_Normal                    = 1,
	AIPM_Alert                     = 2,
	AIPM_Unaware                   = 3,
	AIPM_Oblivious                 = 4,
	AIPM_MAX                       = 5
};


// Enum HawkenGame.HawkenAIDefinition.EHitReactionTrigger
enum class EHitReactionTrigger : uint8_t
{
	HRTT_None                      = 0,
	HRTT_DamagePerSec              = 1,
	HRTT_DamageAmount              = 2,
	HRTT_MAX                       = 3
};


// Enum HawkenGame.HawkenAi_ControllerBase.FireAtCrowdOption
enum class EFireAtCrowdOption : uint8_t
{
	FCO_None                       = 0,
	FCO_Self                       = 1,
	FCO_PC                         = 2,
	FCO_NPC                        = 3,
	FCO_MAX                        = 4
};


// Enum HawkenGame.HawkenAi_ControllerBase.EBTGoal
enum class EBTGoal : uint8_t
{
	BTG_None                       = 0,
	BTG_Hide                       = 1,
	BTG_Guard                      = 2,
	BTG_Charge                     = 3,
	BTG_Banzai                     = 4,
	BTG_Support                    = 5,
	BTG_MAX                        = 6
};


// Enum HawkenGame.HawkenAIPluginFireControl.EHeatManagementStatus
enum class EHeatManagementStatus : uint8_t
{
	EHMS_Normal                    = 0,
	EHMS_NearOverheat              = 1,
	EHMS_Cooldown                  = 2,
	EHMS_MAX                       = 3
};


// Enum HawkenGame.HawkenAIPluginMovement_MechSimple.EBreadcrumbType
enum class EBreadcrumbType : uint8_t
{
	BCT_NormalMove                 = 0,
	BCT_SpecialMove                = 1,
	BCT_FailureMonitor             = 2,
	BCT_FailureNextPointNotFound   = 3,
	BCT_FailureNextPointStuck      = 4,
	BCT_Repath                     = 5,
	BCT_Aborted                    = 6,
	BCT_Success                    = 7,
	BCT_MAX                        = 8
};


// Enum HawkenGame.HawkenAIPluginMovement_MechSimple.ESerpentineMoveDirection
enum class ESerpentineMoveDirection : uint8_t
{
	SMD_None                       = 0,
	SMD_Left                       = 1,
	SMD_Right                      = 2,
	SMD_Straight                   = 3,
	SMD_MAX                        = 4
};


// Enum HawkenGame.HawkenAISystem.EBSAITrick
enum class EBSAITrick : uint8_t
{
	AITrick_ClosestFriendChangeCover = 0,
	AITrick_GetOuttaHereHitReaction = 1,
	AITrick_MAX                    = 2
};


// Enum HawkenGame.R_HUD.EVoiceChatter
enum class EVoiceChatter : uint8_t
{
	VC_Base_EnemyBaseUnderAttack_Heavy = 0,
	VC_Base_EnemyBaseUnderAttack_Light = 1,
	VC_Base_TeamBaseUnderAttack_Heavy = 2,
	VC_Base_TeamBaseUnderAttack_Light = 3,
	VC_Battleship_EnemyBattleshipDestroyed = 4,
	VC_Battleship_EnemyBattleshipLaunching = 5,
	VC_Battleship_EnemyBattleshipUnderAttack_Heavy = 6,
	VC_Battleship_EnemyBattleshipUnderAttack_Light = 7,
	VC_Battleship_TeamBattleshipDestroyed = 8,
	VC_Battleship_TeamBattleshipLaunching = 9,
	VC_Battleship_TeamBattleshipUnderAttack_Heavy = 10,
	VC_Battleship_TeamBattleshipUnderAttack_Light = 11,
	VC_EU_CollectEU                = 12,
	VC_EU_ProtectEU                = 13,
	VC_EU_ReturnEU                 = 14,
	VC_AA_ControlAA                = 15,
	VC_MA_SilosMajority            = 16,
	VC_MA_SilosMinority            = 17,
	VC_General_01MinuteLeft        = 18,
	VC_General_05MinutesLeft       = 19,
	VC_General_10MinutesLeft       = 20,
	VC_General_15MinutesLeft       = 21,
	VC_General_EnemySighted        = 22,
	VC_General_Evade               = 23,
	VC_General_FocusPoint          = 24,
	VC_General_HealUp              = 25,
	VC_General_HelpRequested       = 26,
	VC_General_OutOfPosition       = 27,
	VC_General_Overheated          = 28,
	VC_General_Overheating         = 29,
	VC_General_StickTogether       = 30,
	VC_General_UseItems            = 31,
	VC_MAX                         = 32
};


// Enum HawkenGame.R_GameObjectives.GameObjective
enum class EGameObjective : uint8_t
{
	OB_NONE                        = 0,
	OB_CONTROL_AA                  = 1,
	OB_DEFEND_AA                   = 2,
	OB_COLLECT_EU                  = 3,
	OB_RETURN_EU                   = 4,
	OB_REPAIR_MECH                 = 5,
	OB_DEFEND_MECH                 = 6,
	OB_DEFEND_BATTLESHIP           = 7,
	OB_DESTROY_BATTLESHIP          = 8,
	OB_DEFEND_GENERATOR            = 9,
	OB_DESTROY_GENERATOR           = 10,
	OB_CAPTURE_MISSILE_SILO        = 11,
	OB_MAX                         = 12
};


// Enum HawkenGame.R_HUD.EMusicPriority
enum class EMusicPriority : uint8_t
{
	MP_None                        = 0,
	MP_EnemyBattleshipLaunch       = 1,
	MP_TeamBattleshipLaunch        = 2,
	MP_MAX                         = 3
};


// Enum HawkenGame.R_GamePoints.EExperiencePointEventType
enum class EExperiencePointEventType : uint8_t
{
	XPET_Kill                      = 0,
	XPET_Assist                    = 1,
	XPET_Revenge                   = 2,
	XPET_Savior                    = 3,
	XPET_Avenger                   = 4,
	XPET_KillStreak                = 5,
	XPET_MultiKill                 = 6,
	XPET_EndedKillStreak           = 7,
	XPET_ZeroDeaths                = 8,
	XPET_MVP                       = 9,
	XPET_Nemesis                   = 10,
	XPET_TransferEUtoBase          = 11,
	XPET_DestroyBattleshipEngine   = 12,
	XPET_DestroyBattleshipTurret   = 13,
	XPET_OneBattleshipWin          = 14,
	XPET_UnscathedBase             = 15,
	XPET_AntiAirFired              = 16,
	XPET_AntiAirFiredRadiusBonus   = 17,
	XPET_ControlAntiAir            = 18,
	XPET_ControlAntiAirRadiusBonus = 19,
	XPET_AAKillBothInRadius        = 20,
	XPET_AAKillDefense             = 21,
	XPET_AAKillAttack              = 22,
	XPET_AAAssistBothInRadius      = 23,
	XPET_AAAssistDefense           = 24,
	XPET_AAAssistAttack            = 25,
	XPET_DestroyNeutralTurret      = 26,
	XPET_ControlMissileSilo        = 27,
	XPET_ControlMissileSiloRadiusBonus = 28,
	XPET_SiloKillBothInRadius      = 29,
	XPET_SiloKillDefense           = 30,
	XPET_SiloKillAttack            = 31,
	XPET_SiloAssistBothInRadius    = 32,
	XPET_SiloAssistDefense         = 33,
	XPET_SiloAssistAttack          = 34,
	XPET_BonusPoints               = 35,
	XPET_PotentialBonusPoints      = 36,
	XPET_AttachmentBonusPoints     = 37,
	XPET_PlayTime                  = 38,
	XPET_CrushKill                 = 39,
	XPET_KilledNemesis             = 40,
	XPET_UnderdogBonus             = 41,
	XPET_HealAlly                  = 42,
	XPET_CoopBotKill               = 43,
	XPET_CoopBossKill              = 44,
	XPET_CoopBotAssist             = 45,
	XPET_CoopCompletionBonus       = 46,
	XPET_CoopAttemptBonus          = 47,
	XPET_CoopWaveCompletionBonus   = 48,
	XPET_CoopRevival               = 49,
	XPET_MissileSiloFired          = 50,
	XPET_MissileSiloFiredRadiusBonus = 51,
	XPET_NPCKillAssist             = 52,
	XPET_ChallengeRewardXP         = 53,
	NUM_XP_Types                   = 54,
	EExperiencePointEventType_MAX  = 55
};


// Enum HawkenGame.HawkenSeqAct_AISetBehaviorScheme.EBSETQQueryOverrideSets
enum class EBSETQQueryOverrideSets : uint8_t
{
	EQOS_None                      = 0,
	EQOS_SkullHenchmen             = 1,
	EQOS_MAX                       = 2
};


// Enum HawkenGame.HawkenSquad.ELocationType
enum class ELocationType : uint8_t
{
	LT_Known                       = 0,
	LT_Exact                       = 1,
	LT_Expected                    = 2,
	LT_MAX                         = 3
};


// Enum HawkenGame.HawkenWeap_AIGun.AIDebugMode
enum class EAIDebugMode : uint8_t
{
	AIDM_DebugDraw                 = 0,
	AIDM_GotoTether                = 1,
	AIDM_Goto                      = 2,
	AIDM_MAX                       = 3
};


// Enum HawkenGame.R_Ability_Base.EAbilityState
enum class EAbilityState : uint8_t
{
	ABL_OFF                        = 0,
	ABL_ACTIVE                     = 1,
	ABL_TEMP_DEACTIVE              = 2,
	ABL_MAX                        = 3
};


// Enum HawkenGame.R_Modifier.EModifierValueType
enum class EModifierValueType : uint8_t
{
	MVT_None                       = 0,
	MVT_Bool                       = 1,
	MVT_Int                        = 2,
	MVT_Float                      = 3,
	MVT_MAX                        = 4
};


// Enum HawkenGame.R_PawnModifier.EPawnRepModifiers
enum class EPawnRepModifiers : uint8_t
{
	PRM_None                       = 0,
	PRM_Speed                      = 1,
	PRM_Health                     = 2,
	PRM_MAX                        = 3
};


// Enum HawkenGame.R_PawnModifier.EPawnServerModifiers
enum class EPawnServerModifiers : uint8_t
{
	PSM_None                       = 0,
	PSM_Damage                     = 1,
	PSM_Accuracy                   = 2,
	PSM_Mobility                   = 3,
	PSM_MAX                        = 4
};


// Enum HawkenGame.R_PawnNative.EAIJumpPhase
enum class EAIJumpPhase : uint8_t
{
	AIJP_None                      = 0,
	AIJP_Ascending                 = 1,
	AIJP_Descending                = 2,
	AIJP_End                       = 3,
	AIJP_MAX                       = 4
};


// Enum HawkenGame.R_PawnNative.EHawkenPawnProp
enum class EHawkenPawnProp : uint8_t
{
	HPP_Confused                   = 0,
	HPP_SideKick                   = 1,
	HPP_Chained                    = 2,
	HPP_NoWeapon                   = 3,
	HPP_Immune                     = 4,
	HPP_MAX                        = 5
};


// Enum HawkenGame.R_PawnNative.EPawnMaterialOverride
enum class EPawnMaterialOverride : uint8_t
{
	PMO_NONE                       = 0,
	PMO_CAMO                       = 1,
	PMO_PREDATOR_FRIENDLY          = 2,
	PMO_PREDATOR_ENEMY             = 3,
	PMO_MAX                        = 4
};


// Enum HawkenGame.R_PawnNative.EEnergyStatus
enum class EEnergyStatus : uint8_t
{
	ES_NO_TRANSFER                 = 0,
	ES_ACQUIRING                   = 1,
	ES_ACQUIRING_SOURCE_LOW        = 2,
	ES_TRANSFERRING_TO_BASE        = 3,
	ES_MAX                         = 4
};


// Enum HawkenGame.R_PawnNative.EPawnScreenStatus
enum class EPawnScreenStatus : uint8_t
{
	PSS_NotInScreen                = 0,
	PSS_InScreen                   = 1,
	PSS_NotChecked                 = 2,
	PSS_MAX                        = 3
};


// Enum HawkenGame.R_PawnNative.ERadarState
enum class ERadarState : uint8_t
{
	RS_RecentFire                  = 0,
	RS_RecentHitFire               = 1,
	RS_Boosting                    = 2,
	RS_Moving                      = 3,
	RS_Walking                     = 4,
	RS_Idle                        = 5,
	RS_EnemyTargeting              = 6,
	RS_EnemySpecialLockon          = 7,
	RS_EnemyTeamRadar              = 8,
	RS_RadarItem                   = 9,
	RS_MAX                         = 10
};


// Enum HawkenGame.R_GameReplicationInfo.EServerExperiencingDifficultiesCode
enum class EServerExperiencingDifficultiesCode : uint8_t
{
	SEDC_OK                        = 0,
	SEDC_FailedReadingGameItemTypeCollection = 1,
	SEDC_FailedReadingAchievementCollection = 2,
	SEDC_FailedWritingOnlineStats  = 3,
	SEDC_UnresolvedRolloverDependencies = 4,
	SEDC_MAX                       = 5
};


// Enum HawkenGame.R_Deathmatch.EndOfMatchState_e
enum class EndOfMatchState_e : uint8_t
{
	EOM_VICTORY_SCREEN             = 0,
	EOM_STATS_SCREEN               = 1,
	EOM_MAX                        = 2
};


// Enum HawkenGame.R_Deathmatch.PlayerSort_e
enum class EPlayerSort_e : uint8_t
{
	SORT_XP                        = 0,
	SORT_KILLS                     = 1,
	SORT_DEATHS                    = 2,
	SORT_KD_RATIO                  = 3,
	SORT_ASSISTS                   = 4,
	SORT_MAX                       = 5
};


// Enum HawkenGame.R_TeamDeathmatch.TeamSwitchLevel_e
enum class ETeamSwitchLevel_e : uint8_t
{
	TSL_TWO_PLAYERS_LESS_ALLOWED   = 0,
	TSL_ONE_PLAYER_LESS_ALLOWED    = 1,
	TSL_ALWAYS_ALLOWED             = 2,
	TSL_MAX                        = 3
};


// Enum HawkenGame.R_BaseLifter.LifterState_e
enum class ELifterState_e : uint8_t
{
	LFS_IDLE                       = 0,
	LFS_WAITING                    = 1,
	LFS_LIFTING                    = 2,
	LFS_DRAINING                   = 3,
	LFS_DROPPING                   = 4,
	LFS_MAX                        = 5
};


// Enum HawkenGame.R_WeapAttach_Base.AttachedMode_e
enum class EAttachedMode_e : uint8_t
{
	ATM_NONE                       = 0,
	ATM_FIRST_PERSON               = 1,
	ATM_THIRD_PERSON               = 2,
	ATM_MAX                        = 3
};


// Enum HawkenGame.R_Consumable_Base.ConsumableType_e
enum class EConsumableType_e : uint8_t
{
	CON_TRIGGERED                  = 0,
	CON_PASSIVE                    = 1,
	CON_MAX                        = 2
};


// Enum HawkenGame.R_CoOp.eCheckEndGameState
enum class EeCheckEndGameState : uint8_t
{
	EGS_NOTENDED                   = 0,
	EGS_DELAYING                   = 1,
	EGS_DOUBLECHECK                = 2,
	EGS_ENDED                      = 3,
	EGS_MAX                        = 4
};


// Enum HawkenGame.R_PlayerController.SelectStage_e
enum class ESelectStage_e : uint8_t
{
	SS_NONE                        = 0,
	SS_LOBBY                       = 1,
	SS_MECH                        = 2,
	SS_DONE                        = 3,
	SS_MAX                         = 4
};


// Enum HawkenGame.R_PlayerController.MechHangarCamera_e
enum class EMechHangarCamera_e : uint8_t
{
	MECH_H_CAM_RIGHT               = 0,
	MECH_H_CAM_CENTER              = 1,
	MECH_H_CAM_COCKPIT             = 2,
	MECH_H_CAM_LEFT                = 3,
	MECH_H_CAM_MAX                 = 4
};


// Enum HawkenGame.R_DemoSpec.EDemoPlayCameraAnim
enum class EDemoPlayCameraAnim : uint8_t
{
	DPCA_None                      = 0,
	DPCA_Normal                    = 1,
	DPCA_High                      = 2,
	DPCA_MAX                       = 3
};


// Enum HawkenGame.R_Pickup.EFadeInType
enum class EFadeInType : uint8_t
{
	EFIT_NoFade                    = 0,
	EFIT_FadeFromStart             = 1,
	EFIT_FadeFromLand              = 2,
	EFIT_MAX                       = 3
};


// Enum HawkenGame.R_GraphicsOptions.EGraphicDetail
enum class EGraphicDetail : uint8_t
{
	GD_LOW                         = 0,
	GD_MID                         = 1,
	GD_HIGH                        = 2,
	GD_ULTRA                       = 3,
	GD_MAX                         = 4
};


// Enum HawkenGame.R_GraphicsOptions.ESystemPhysXCapability
enum class ESystemPhysXCapability : uint8_t
{
	SYSPHYSX_Not_Supported         = 0,
	SYSPHYSX_LowOnly_NotNvidia     = 1,
	SYSPHYSX_LowOnly_OldDriver     = 2,
	SYSPHYSX_HighAllowed           = 3,
	SYSPHYSX_MAX                   = 4
};


// Enum HawkenGame.R_GFx_MechMenu_Base.EPurchaseCurrency
enum class EPurchaseCurrency : uint8_t
{
	EPC_None                       = 0,
	EPC_HawkenCredits              = 1,
	EPC_MeteorCredits              = 2,
	EPC_MAX                        = 3
};


// Enum HawkenGame.R_GFx_MechMenu_Base.EProgressionUnlockCategory
enum class EProgressionUnlockCategory : uint8_t
{
	PUC_PrimaryWeapon              = 0,
	PUC_GlobalItem                 = 1,
	PUC_VisualPart                 = 2,
	PUC_Mech                       = 3,
	PUC_OptimizationSlot           = 4,
	PUC_ItemSlot                   = 5,
	PUC_InternalSlot               = 6,
	PUC_TechGroup                  = 7,
	PUC_OptimizationPoint          = 8,
	PUC_MechTierAvailable          = 9,
	PUC_MechTierReached            = 10,
	PUC_WeaponUpgrade              = 11,
	PUC_AbilityUpgrade             = 12,
	PUC_Emblem                     = 13,
	PUC_ConsumableHoloTaunt        = 14,
	PUC_ConsumableTriggered        = 15,
	PUC_EliteSkinPart              = 16,
	PUC_MAX                        = 17
};


// Enum HawkenGame.R_EntryPlayerController.MechCamera_e
enum class EMechCamera_e : uint8_t
{
	MECH_CAM_CENTER                = 0,
	MECH_CAM_LEFT                  = 1,
	MECH_CAM_RIGHT                 = 2,
	MECH_CAM_COCKPIT               = 3,
	MECH_CAM_MAX                   = 4
};


// Enum HawkenGame.R_GFx_MainMenu.EServerBrowserType
enum class EServerBrowserType : uint8_t
{
	SB_VS                          = 0,
	SB_COOP                        = 1,
	SB_MAX                         = 2
};


// Enum HawkenGame.R_GFx_MainMenu.DeployPanelType
enum class EDeployPanelType : uint8_t
{
	DPT_Unknown                    = 0,
	DPT_Host                       = 1,
	DPT_Matchmaking                = 2,
	DPT_ServerBrowser              = 3,
	DPT_MAX                        = 4
};


// Enum HawkenGame.R_Pawn.ItemMonitorState_e
enum class EItemMonitorState_e : uint8_t
{
	IMS_DOWN                       = 0,
	IMS_ACTIVE                     = 1,
	IMS_MAX                        = 2
};


// Enum HawkenGame.R_Gfx_VisorNative.EIndicatorType
enum class EIndicatorType : uint8_t
{
	IND_DETAIL                     = 0,
	IND_DISTANT                    = 1,
	IND_OBJECTIVE                  = 2,
	IND_MAX                        = 3
};


// Enum HawkenGame.R_Gfx_VisorNative.EVisorColorType
enum class EVisorColorType : uint8_t
{
	VCT_NONE                       = 0,
	VCT_FRIEND                     = 1,
	VCT_FOE                        = 2,
	VCT_NEUTRAL                    = 3,
	VCT_POSITIVE                   = 4,
	VCT_ENERGY                     = 5,
	VCT_INFO                       = 6,
	VCT_REPAIR                     = 7,
	VCT_MAX                        = 8
};


// Enum HawkenGame.Targetable.TargetPriority
enum class ETargetPriority : uint8_t
{
	TP_None                        = 0,
	TP_Low                         = 1,
	TP_Normal                      = 2,
	TP_High                        = 3,
	TP_MAX                         = 4
};


// Enum HawkenGame.R_NPC.ERadarDistance
enum class ERadarDistance : uint8_t
{
	RD_Normal                      = 0,
	RD_Maximum                     = 1,
	RD_MAX                         = 2
};


// Enum HawkenGame.R_NPC.ERadarIndicatorType
enum class ERadarIndicatorType : uint8_t
{
	RIT_Normal                     = 0,
	RIT_NPC                        = 1,
	RIT_MAX                        = 2
};


// Enum HawkenGame.R_NPC.ESplineMode
enum class ESplineMode : uint8_t
{
	SPLINE_OFF                     = 0,
	MOVE_TO_SPLINE                 = 1,
	FOLLOW_SPLINE                  = 2,
	ESplineMode_MAX                = 3
};


// Enum HawkenGame.R_NPC.ENPCPhysOverride
enum class ENPCPhysOverride : uint8_t
{
	POVR_NO_OVERRIDE               = 0,
	POVR_NONE                      = 1,
	POVR_FLYING                    = 2,
	POVR_MAX                       = 3
};


// Enum HawkenGame.R_Internal_Base.EHudIconType
enum class EHudIconType : uint8_t
{
	HIT_None                       = 0,
	HIT_Healing                    = 1,
	HIT_Buffed                     = 2,
	HIT_Debuffed                   = 3,
	HIT_Speed                      = 4,
	HIT_Rate                       = 5,
	HIT_Fuel                       = 6,
	HIT_Armor                      = 7,
	HIT_Explosive                  = 8,
	HIT_Air                        = 9,
	HIT_Accuracy                   = 10,
	HIT_Target                     = 11,
	HIT_MAX                        = 12
};


// Enum HawkenGame.R_Turret_Base.ETurretType
enum class ETurretType : uint8_t
{
	TT_MACHINE_GUN                 = 0,
	TT_ROCKETS                     = 1,
	TT_HOMING_MISSILES             = 2,
	TT_HAWKINS                     = 3,
	ETurretType_MAX                = 4
};


// Enum HawkenGame.R_MechSubType_Base.EMechFamily
enum class EMechFamily : uint8_t
{
	EMF_Assault                    = 0,
	EMF_Suppression                = 1,
	EMF_Assassination              = 2,
	EMF_Ranged                     = 3,
	EMF_Defense                    = 4,
	EMF_Support                    = 5,
	EMF_MAX                        = 6
};


// Enum HawkenGame.R_MoonDrill.DrillState_e
enum class ER_MoonDrill_DrillState_e : uint8_t
{
	DS_TURNING                     = 0,
	DS_DOWN                        = 1,
	DS_UP                          = 2,
	DS_MAX                         = 3
};


// Enum HawkenGame.R_MoonPump.DrillState_e
enum class ER_MoonPump_DrillState_e : uint8_t
{
	DS_PUMP                        = 0,
	DS_DRILL                       = 1,
	DS_MAX                         = 2
};


// Enum HawkenGame.R_MoonSpinner.DrillState_e
enum class ER_MoonSpinner_DrillState_e : uint8_t
{
	DS_SPINNING_LEFT               = 0,
	DS_SPINNING_RIGHT              = 1,
	DS_LEFT                        = 2,
	DS_RIGHT                       = 3,
	DS_MAX                         = 4
};


// Enum HawkenGame.R_NPC_Drone_Bomb.NPCExplosionAction
enum class ENPCExplosionAction : uint8_t
{
	NEA_Explode                    = 0,
	NEA_EMP                        = 1,
	NEA_MAX                        = 2
};


// Enum HawkenGame.R_NPC_Drone_Bomb.EDroneBombPreDetPhases
enum class EDroneBombPreDetPhases : uint8_t
{
	PREDET_Decelerating            = 0,
	PREDET_Accelerating            = 1,
	PREDET_Seeking                 = 2,
	PREDET_MAX                     = 3
};


// Enum HawkenGame.R_NPC_Manager.eBehavior
enum class EeBehavior : uint8_t
{
	BV_ATTACKER                    = 0,
	BV_SCAVANGER                   = 1,
	BV_MAX                         = 2
};


// Enum HawkenGame.R_NPC_Template.eNPC_MECH_CAT
enum class EeNPC_MECH_CAT : uint8_t
{
	NMC_A                          = 0,
	NMC_B                          = 1,
	NMC_C                          = 2,
	NMC_MAX                        = 3
};


// Enum HawkenGame.R_NPC_Template.eNPC_MECH_PRIMARY_WEAPON
enum class EeNPC_MECH_PRIMARY_WEAPON : uint8_t
{
	M1W_Point_D_Vulcan             = 0,
	M1W_Shotgun                    = 1,
	M1W_CannonBall                 = 2,
	M1W_AutoRifle                  = 3,
	M1W_Repeater                   = 4,
	M1W_SlugRifle                  = 5,
	M1W_AssaultRifle               = 6,
	M1W_MiniShotgun                = 7,
	M1W_SMG                        = 8,
	M1W_Seeker                     = 9,
	M1W_TriSeeker                  = 10,
	M1W_AutoSniper                 = 11,
	M1W_RotaryGrenade              = 12,
	M1W_HawkinsRPR                 = 13,
	M1W_SlugTOO                    = 14,
	M1W_T32_FLAK                   = 15,
	M1W_RF35_FLAK                  = 16,
	M1W_BurstRifle                 = 17,
	M1W_Sniper_Flak                = 18,
	M1W_EOC_Predator               = 19,
	M1W_Suppressor                 = 20,
	HeavyVulcan                    = 21,
	H6_Launcher                    = 22,
	M1W_ShieldGun                  = 23,
	M1W_MAX                        = 24,
	eNPC_MECH_PRIMARY_WEAPON_MAX   = 25
};


// Enum HawkenGame.R_NPC_Template.ENPC_MECH_SECONDARY_WEAPON
enum class ENPC_MECH_SECONDARY_WEAPON : uint8_t
{
	M2W_Sniper                     = 0,
	M2W_MissileLauncher            = 1,
	M2W_HomingMissile              = 2,
	M2W_GrenadeLauncher            = 3,
	M2W_ShrapnelLauncher           = 4,
	M2W_RepairTorch                = 5,
	M2W_Breacher                   = 6,
	M2W_KE_SABOT                   = 7,
	M2W_N_DOW                      = 8,
	M2W_MAX                        = 9
};


// Enum HawkenGame.R_NPC_Weapon.ENPCWeapType
enum class ENPCWeapType : uint8_t
{
	NPCWT_MACHINE_GUN              = 0,
	NPCWT_SHOTGUN                  = 1,
	NPCWT_ROCKETS                  = 2,
	NPCWT_HOMING_MISSILES          = 3,
	NPCWT_MAX                      = 4
};


// Enum HawkenGame.R_PlantBulb.PlantState_e
enum class EPlantState_e : uint8_t
{
	PS_IDLE                        = 0,
	PS_POPPED                      = 1,
	PS_POPIDLE                     = 2,
	PS_GROW                        = 3,
	PS_MAX                         = 4
};


// Enum HawkenGame.R_RevivalMarker.ERevivalMarkerState
enum class ERevivalMarkerState : uint8_t
{
	ERMState_None                  = 0,
	ERMState_Idle                  = 1,
	ERMState_Reviving              = 2,
	ERMState_Decaying              = 3,
	ERMState_Respawning            = 4,
	ERMState_MAX                   = 5
};


// Enum HawkenGame.R_StatusEffect_Base.EEffectDurationType
enum class EEffectDurationType : uint8_t
{
	EDT_Time                       = 0,
	EDT_Kill                       = 1,
	EDT_Assist                     = 2,
	EDT_Count                      = 3,
	EDT_Damage                     = 4,
	EDT_Resource                   = 5,
	EDT_MAX                        = 6
};


// Enum HawkenGame.R_SE_MultiEventTrigger.EEventType
enum class EEventType : uint8_t
{
	ET_Kill                        = 0,
	ET_Assist                      = 1,
	ET_SiloCapture                 = 2,
	ET_AACapture                   = 3,
	ET_EUDelivery                  = 4,
	ET_MAX                         = 5
};


// Enum HawkenGame.R_TeamInfo.battleshipState_e
enum class EbattleshipState_e : uint8_t
{
	BATTLESHIP_INACTIVE            = 0,
	BATTLESHIP_LAUNCHING           = 1,
	BATTLESHIP_EN_ROUTE_TO_AA      = 2,
	BATTLESHIP_CAPPING_AA          = 3,
	BATTLESHIP_EN_ROUTE_TO_BASE    = 4,
	BATTLESHIP_AT_ENEMY_BASE       = 5,
	BATTLESHIP_ENGAGING_ENEMY_BASE = 6,
	BATTLESHIP_MAX                 = 7
};


// Enum HawkenGame.R_TeamPlayerStart.eSpawnType
enum class EeSpawnType : uint8_t
{
	ST_BASE_FORWARD                = 0,
	ST_BASE_BACK                   = 1,
	ST_ANTI_AIR                    = 2,
	eSpawnType_MAX                 = 3
};


// Enum HawkenGame.R_Turret_AntiAir.AntiAirStage_e
enum class EAntiAirStage_e : uint8_t
{
	AA_CLOSED                      = 0,
	AA_OPENING_A                   = 1,
	AA_OPENING_B                   = 2,
	AA_OPENING_C                   = 3,
	AA_POST_FIRE                   = 4,
	AA_CLOSING_B                   = 5,
	AA_CLOSING_A                   = 6,
	AA_CLOSING_CLOSED              = 7,
	AA_MAX                         = 8
};


// Enum HawkenGame.R_Turret_BaseMissile.SiloFireStage_e
enum class ESiloFireStage_e : uint8_t
{
	SFS_CONTROL                    = 0,
	SFS_FIRING                     = 1,
	SFS_MAX                        = 2
};


// Enum HawkenGame.R_Turret_BaseMissile.SiloTurnStage_e
enum class ESiloTurnStage_e : uint8_t
{
	STS_NEUTRAL                    = 0,
	STS_TURNED                     = 1,
	STS_MAX                        = 2
};


// Enum HawkenGame.R_Weap_RepairTorch.HealWeaponMode_e
enum class EHealWeaponMode_e : uint8_t
{
	MODE_REPAIR                    = 0,
	MODE_DAMAGE                    = 1,
	MODE_MAX                       = 2
};


// Enum HawkenGame.SeqAct_AddCallout.ECalloutOrientation
enum class ECalloutOrientation : uint8_t
{
	CORIENT_Left                   = 0,
	CORIENT_Right                  = 1,
	CORIENT_Up                     = 2,
	CORIENT_Down                   = 3,
	CORIENT_MAX                    = 4
};


// Enum HawkenGame.SeqAct_AIMove.EAIInterruptRange
enum class EAIInterruptRange : uint8_t
{
	AIIR_Close                     = 0,
	AIIR_Medium                    = 1,
	AIIR_Large                     = 2,
	AIIR_Always                    = 3,
	AIIR_MAX                       = 4
};


// Enum HawkenGame.SeqAct_AIMove.EAIMoveMood
enum class EAIMoveMood : uint8_t
{
	AIMM_None                      = 0,
	AIMM_Normal                    = 1,
	AIMM_WithCover                 = 2,
	AIMM_MAX                       = 3
};


// Enum HawkenGame.SeqAct_AIMove.EAIMoveStyle
enum class EAIMoveStyle : uint8_t
{
	EMS_Normal                     = 0,
	EMS_Slow                       = 1,
	EMS_Fast                       = 2,
	EMS_MAX                        = 3
};


// Enum HawkenGame.SeqAct_SetAgentText.EAgentPortraitExpression
enum class EAgentPortraitExpression : uint8_t
{
	APE_1A                         = 0,
	APE_1B                         = 1,
	APE_1C                         = 2,
	APE_2A                         = 3,
	APE_2B                         = 4,
	APE_2C                         = 5,
	APE_3A                         = 6,
	APE_3B                         = 7,
	APE_3C                         = 8,
	APE_MAX                        = 9
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HawkenGame.HawkenTypes.SOnlineLegacyStats
// 0x0020
struct FSOnlineLegacyStats
{
	int                                                StatsUnrankedSGWins;                                      // 0x0000(0x0004)
	int                                                StatsUnrankedSGLosses;                                    // 0x0004(0x0004)
	int                                                StatsUnrankedMAWins;                                      // 0x0008(0x0004)
	int                                                StatsUnrankedMALosses;                                    // 0x000C(0x0004)
	int                                                StatsUnrankedTDMWins;                                     // 0x0010(0x0004)
	int                                                StatsUnrankedTDMLosses;                                   // 0x0014(0x0004)
	int                                                StatsUnrankedDMWins;                                      // 0x0018(0x0004)
	int                                                StatsUnrankedDMLosses;                                    // 0x001C(0x0004)
};

// ScriptStruct HawkenGame.R_Ability_Base.ReplicatedIsActive
// 0x0008
struct FReplicatedIsActive
{
	unsigned char                                      forceRep;                                                 // 0x0000(0x0001)
	TEnumAsByte<EAbilityState>                         State;                                                    // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              TempDeactiveTime;                                         // 0x0004(0x0004)
};

// ScriptStruct HawkenGame.R_BaseLifter.LifterStateStruct
// 0x0008
struct FLifterStateStruct
{
	TEnumAsByte<ELifterState_e>                        State;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class AR_Pawn*                                     Activator;                                                // 0x0004(0x0004)
};

// ScriptStruct HawkenGame.R_BattleShip.CachedSplineInfo
// 0x000C
struct FCachedSplineInfo
{
	class ASplineActor*                                SplinePoint;                                              // 0x0000(0x0004)
	class ASplineActor*                                NextSplinePoint;                                          // 0x0004(0x0004)
	float                                              SplinePointDistance;                                      // 0x0008(0x0004)
};

// ScriptStruct HawkenGame.R_EnergySource.Transform
// 0x0018
struct FTransform
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
};

// ScriptStruct HawkenGame.HawkenTypes.ItemsInfo
// 0x0004
struct FItemsInfo
{
	unsigned char                                      Item1;                                                    // 0x0000(0x0001)
	unsigned char                                      Item2;                                                    // 0x0001(0x0001)
	unsigned char                                      Item3;                                                    // 0x0002(0x0001)
	unsigned char                                      pad1;                                                     // 0x0003(0x0001)
};

// ScriptStruct HawkenGame.HawkenTypes.InternalsInfo
// 0x0006
struct FInternalsInfo
{
	unsigned char                                      Internal1;                                                // 0x0000(0x0001)
	unsigned char                                      Internal2;                                                // 0x0001(0x0001)
	unsigned char                                      Internal3;                                                // 0x0002(0x0001)
	unsigned char                                      Internal4;                                                // 0x0003(0x0001)
	unsigned char                                      Internal5;                                                // 0x0004(0x0001)
	unsigned char                                      Internal6;                                                // 0x0005(0x0001)
};

// ScriptStruct HawkenGame.HawkenTypes.ConsumablesInfo
// 0x0004
struct FConsumablesInfo
{
	unsigned char                                      Consumable1;                                              // 0x0000(0x0001)
	unsigned char                                      Consumable2;                                              // 0x0001(0x0001)
	unsigned char                                      Consumable3;                                              // 0x0002(0x0001)
	unsigned char                                      pad1;                                                     // 0x0003(0x0001)
};

// ScriptStruct HawkenGame.HawkenTypes.PartVisualInfo
// 0x0008
struct FPartVisualInfo
{
	unsigned char                                      CamoPattern;                                              // 0x0000(0x0001)
	unsigned char                                      CamoSaturation;                                           // 0x0001(0x0001)
	unsigned char                                      CamoScale;                                                // 0x0002(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	unsigned long                                      bAccent : 1;                                              // 0x0004(0x0004)
};

// ScriptStruct HawkenGame.HawkenTypes.VisualInfo
// 0x003C
struct FVisualInfo
{
	unsigned char                                      AccentHue;                                                // 0x0000(0x0001) (AlwaysInit)
	unsigned char                                      AccentSaturation;                                         // 0x0001(0x0001) (AlwaysInit)
	unsigned char                                      AccentValue;                                              // 0x0002(0x0001) (AlwaysInit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FPartVisualInfo                             Upper;                                                    // 0x0004(0x0008) (AlwaysInit)
	struct FPartVisualInfo                             Middle;                                                   // 0x000C(0x0008) (AlwaysInit)
	struct FPartVisualInfo                             Lower;                                                    // 0x0014(0x0008) (AlwaysInit)
	struct FPartVisualInfo                             Arm;                                                      // 0x001C(0x0008) (AlwaysInit)
	unsigned char                                      LowerPart;                                                // 0x0024(0x0001) (AlwaysInit)
	unsigned char                                      MidPart;                                                  // 0x0025(0x0001) (AlwaysInit)
	unsigned char                                      UpperPart;                                                // 0x0026(0x0001) (AlwaysInit)
	unsigned char                                      ArmPart;                                                  // 0x0027(0x0001) (AlwaysInit)
	unsigned char                                      DroneType;                                                // 0x0028(0x0001) (AlwaysInit)
	unsigned char                                      HoloTauntType;                                            // 0x0029(0x0001) (AlwaysInit)
	unsigned char                                      AnimTauntType;                                            // 0x002A(0x0001) (AlwaysInit)
	unsigned char                                      BoosterPart;                                              // 0x002B(0x0001) (AlwaysInit)
	unsigned char                                      ArmorPart;                                                // 0x002C(0x0001) (AlwaysInit)
	unsigned char                                      CockpitDecoration[0x3];                                   // 0x002D(0x0001) (AlwaysInit)
	unsigned char                                      PrimaryReticle;                                           // 0x0030(0x0001) (AlwaysInit)
	unsigned char                                      SecondaryReticle;                                         // 0x0031(0x0001) (AlwaysInit)
	unsigned char                                      FriendHUDColor;                                           // 0x0032(0x0001) (AlwaysInit)
	unsigned char                                      FoeHUDColor;                                              // 0x0033(0x0001) (AlwaysInit)
	unsigned char                                      NeutralHUDColor;                                          // 0x0034(0x0001) (AlwaysInit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	unsigned long                                      bTintReticle : 1;                                         // 0x0038(0x0004) (AlwaysInit)
};

// ScriptStruct HawkenGame.HawkenTypes.VisualInfo_Instances
// 0x00F0
struct FVisualInfo_Instances
{
	struct FString                                     CamoPatternUpper_InstanceId;                              // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     CamoPatternMiddle_InstanceId;                             // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     CamoPatternLower_InstanceId;                              // 0x0018(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     CamoPatternArm_InstanceId;                                // 0x0024(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     LowerPart_InstanceId;                                     // 0x0030(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     MidPart_InstanceId;                                       // 0x003C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UpperPart_InstanceId;                                     // 0x0048(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     ArmPart_InstanceId;                                       // 0x0054(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     BoosterPart_InstanceId;                                   // 0x0060(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     ArmorPart_InstanceId;                                     // 0x006C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     DroneType_InstanceId;                                     // 0x0078(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     AnimTauntType_InstanceId;                                 // 0x0084(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     CockpitDecoration_InstanceId[0x3];                        // 0x0090(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     PrimaryReticle_InstanceId;                                // 0x00B4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     SecondaryReticle_InstanceId;                              // 0x00C0(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     FriendHUDColor_InstanceId;                                // 0x00CC(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     FoeHUDColor_InstanceId;                                   // 0x00D8(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     NeutralHUDColor_InstanceId;                               // 0x00E4(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct HawkenGame.HawkenTypes.SAllocatedOptimization
// 0x000D
struct FSAllocatedOptimization
{
	unsigned char                                      Damage;                                                   // 0x0000(0x0001)
	unsigned char                                      FireRate;                                                 // 0x0001(0x0001)
	unsigned char                                      HealRate;                                                 // 0x0002(0x0001)
	unsigned char                                      HeatGen;                                                  // 0x0003(0x0001)
	unsigned char                                      Armor;                                                    // 0x0004(0x0001)
	unsigned char                                      FuelCapacity;                                             // 0x0005(0x0001)
	unsigned char                                      BoostSpeed;                                               // 0x0006(0x0001)
	unsigned char                                      FuelRegen;                                                // 0x0007(0x0001)
	unsigned char                                      RunSpeed;                                                 // 0x0008(0x0001)
	unsigned char                                      AirEfficiency;                                            // 0x0009(0x0001)
	unsigned char                                      RadarRange;                                               // 0x000A(0x0001)
	unsigned char                                      OverheatRecovery;                                         // 0x000B(0x0001)
	unsigned char                                      Dodge;                                                    // 0x000C(0x0001)
};

// ScriptStruct HawkenGame.HawkenTypes.MechPreset
// 0x0384
struct FMechPreset
{
	struct FString                                     MechName;                                                 // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	TEnumAsByte<EMechPresetLoadingState>               LoadingState;                                             // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     MechSubTypeName;                                          // 0x0010(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                MechType;                                                 // 0x001C(0x0004)
	int                                                MechSubType;                                              // 0x0020(0x0004)
	int                                                Right_Weapon;                                             // 0x0024(0x0004)
	int                                                Left_Weapon;                                              // 0x0028(0x0004)
	struct FItemsInfo                                  Items;                                                    // 0x002C(0x0004)
	unsigned long                                      bItem1IntentionallyEmpty : 1;                             // 0x0030(0x0004)
	unsigned long                                      bItem2IntentionallyEmpty : 1;                             // 0x0030(0x0004)
	unsigned long                                      bItem3IntentionallyEmpty : 1;                             // 0x0030(0x0004)
	struct FInternalsInfo                              MechInternals;                                            // 0x0034(0x0008)
	unsigned long                                      bInternal1IntentionallyEmpty : 1;                         // 0x003C(0x0004)
	unsigned long                                      bInternal2IntentionallyEmpty : 1;                         // 0x003C(0x0004)
	unsigned long                                      bInternal3IntentionallyEmpty : 1;                         // 0x003C(0x0004)
	unsigned long                                      bInternal4IntentionallyEmpty : 1;                         // 0x003C(0x0004)
	unsigned long                                      bInternal5IntentionallyEmpty : 1;                         // 0x003C(0x0004)
	unsigned long                                      bInternal6IntentionallyEmpty : 1;                         // 0x003C(0x0004)
	int                                                Ability;                                                  // 0x0040(0x0004)
	struct FConsumablesInfo                            Consumables;                                              // 0x0044(0x0004)
	int                                                PassiveConsumable;                                        // 0x0048(0x0004)
	int                                                TriggeredConsumable;                                      // 0x004C(0x0004)
	unsigned long                                      bTriggeredAutoStock : 1;                                  // 0x0050(0x0004)
	unsigned long                                      bPassiveAutoStock : 1;                                    // 0x0050(0x0004)
	int                                                GarageOrder;                                              // 0x0054(0x0004)
	struct FString                                     Mech_InstanceId;                                          // 0x0058(0x000C) (NeedCtorLink)
	struct FString                                     Right_Weapon_InstanceId;                                  // 0x0064(0x000C) (NeedCtorLink)
	struct FString                                     Left_Weapon_InstanceId;                                   // 0x0070(0x000C) (NeedCtorLink)
	struct FString                                     Items1_InstanceId;                                        // 0x007C(0x000C) (NeedCtorLink)
	struct FString                                     Items2_InstanceId;                                        // 0x0088(0x000C) (NeedCtorLink)
	struct FString                                     Items3_InstanceId;                                        // 0x0094(0x000C) (NeedCtorLink)
	struct FString                                     Internals1_InstanceId;                                    // 0x00A0(0x000C) (NeedCtorLink)
	struct FString                                     Internals2_InstanceId;                                    // 0x00AC(0x000C) (NeedCtorLink)
	struct FString                                     Internals3_InstanceId;                                    // 0x00B8(0x000C) (NeedCtorLink)
	struct FString                                     Internals4_InstanceId;                                    // 0x00C4(0x000C) (NeedCtorLink)
	struct FString                                     Internals5_InstanceId;                                    // 0x00D0(0x000C) (NeedCtorLink)
	struct FString                                     Internals6_InstanceId;                                    // 0x00DC(0x000C) (NeedCtorLink)
	struct FString                                     Ability_InstanceId;                                       // 0x00E8(0x000C) (NeedCtorLink)
	struct FString                                     Tier2_InstanceId;                                         // 0x00F4(0x000C) (NeedCtorLink)
	struct FString                                     Tier3_InstanceId;                                         // 0x0100(0x000C) (NeedCtorLink)
	struct FString                                     Tier4_InstanceId;                                         // 0x010C(0x000C) (NeedCtorLink)
	struct FString                                     Tier5_InstanceId;                                         // 0x0118(0x000C) (NeedCtorLink)
	struct FString                                     AbilityUpgrade_InstanceId[0x5];                           // 0x0124(0x000C) (NeedCtorLink)
	struct FString                                     PrimaryWeaponUpgrade_InstanceId[0x3];                     // 0x0160(0x000C) (NeedCtorLink)
	struct FString                                     AltWeaponUpgrade_InstanceId[0x3];                         // 0x0184(0x000C) (NeedCtorLink)
	struct FString                                     PrestigeWeaponUpgrade_InstanceId[0x3];                    // 0x01A8(0x000C) (NeedCtorLink)
	struct FString                                     SecondaryWeaponUpgrade_InstanceId[0x3];                   // 0x01CC(0x000C) (NeedCtorLink)
	struct FVisualInfo                                 MechStyle;                                                // 0x01F0(0x003C)
	struct FVisualInfo_Instances                       MechStyleInstances;                                       // 0x022C(0x00F0) (NeedCtorLink)
	float                                              BonusXpMultiplier;                                        // 0x031C(0x0004)
	class UR_OnlineMechStats_Unranked*                 OnlineStatsUnranked;                                      // 0x0320(0x0004)
	int                                                PrimaryWeaponUpgradeFlags;                                // 0x0324(0x0004)
	int                                                AltPrimaryWeaponUpgradeFlags;                             // 0x0328(0x0004)
	int                                                PrestigePrimaryWeaponUpgradeFlags;                        // 0x032C(0x0004)
	int                                                SecondaryWeaponUpgradeFlags;                              // 0x0330(0x0004)
	int                                                AbilityUpgradeFlags;                                      // 0x0334(0x0004)
	int                                                totalOptimizationPoints;                                  // 0x0338(0x0004)
	struct FSAllocatedOptimization                     AllocOpt;                                                 // 0x033C(0x0010)
	int                                                ProgressionUnlockFlags;                                   // 0x034C(0x0004)
	unsigned long                                      bDirtyFromPurchase : 1;                                   // 0x0350(0x0004)
	unsigned long                                      bLocalOnly : 1;                                           // 0x0350(0x0004)
	struct FString                                     MechItemTypeId;                                           // 0x0354(0x000C) (NeedCtorLink)
	int                                                MatchExpPoints;                                           // 0x0360(0x0004)
	int                                                MatchKills;                                               // 0x0364(0x0004)
	int                                                MatchAssists;                                             // 0x0368(0x0004)
	int                                                MatchDeaths;                                              // 0x036C(0x0004)
	int                                                MatchSuicides;                                            // 0x0370(0x0004)
	int                                                MatchTimeSeconds;                                         // 0x0374(0x0004)
	float                                              MatchXPBonusMultiplier;                                   // 0x0378(0x0004)
	int                                                MatchOverflowXP;                                          // 0x037C(0x0004)
	int                                                MatchFreeOverflowXP;                                      // 0x0380(0x0004)
};

// ScriptStruct HawkenGame.R_GameInfoBase.ReportData
// 0x0018
struct FReportData
{
	struct FString                                     ReporterName;                                             // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Description;                                              // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.R_GameInfoBase.SuspiciousBehaviorStat
// 0x0064
struct FSuspiciousBehaviorStat
{
	class AR_PlayerReplicationInfo*                    RPRI;                                                     // 0x0000(0x0004)
	struct FString                                     PlayerName;                                               // 0x0004(0x000C) (NeedCtorLink)
	struct FString                                     NetworkAddress;                                           // 0x0010(0x000C) (NeedCtorLink)
	int                                                TimeDetected;                                             // 0x001C(0x0004)
	TArray<struct FReportData>                         ReportedByPlayers;                                        // 0x0020(0x000C) (NeedCtorLink)
	int                                                MinPing;                                                  // 0x002C(0x0004)
	int                                                MaxPing;                                                  // 0x0030(0x0004)
	int                                                TotalPing;                                                // 0x0034(0x0004)
	int                                                MinPackageLost;                                           // 0x0038(0x0004)
	int                                                MaxPackageLost;                                           // 0x003C(0x0004)
	int                                                TotalPackageLost;                                         // 0x0040(0x0004)
	int                                                ConnectionCount;                                          // 0x0044(0x0004)
	int                                                Kills;                                                    // 0x0048(0x0004)
	int                                                Deaths;                                                   // 0x004C(0x0004)
	int                                                Assists;                                                  // 0x0050(0x0004)
	float                                              TotalClockRate;                                           // 0x0054(0x0004)
	float                                              MaxClockRate;                                             // 0x0058(0x0004)
	int                                                HawkenNumSpeedHacks;                                      // 0x005C(0x0004)
	unsigned long                                      bAutoBanned : 1;                                          // 0x0060(0x0004)
};

// ScriptStruct HawkenGame.R_PlayerReplicationInfo.ClanInfoStruct
// 0x0060
struct FClanInfoStruct
{
	struct FUniqueNetId                                ClanId;                                                   // 0x0000(0x0010)
	struct FName                                       ClanName;                                                 // 0x0010(0x0008)
	struct FName                                       ClanTag;                                                  // 0x0018(0x0008)
	int                                                Emblem;                                                   // 0x0020(0x0004)
	int                                                Flag;                                                     // 0x0024(0x0004)
	struct FString                                     Motto;                                                    // 0x0028(0x000C) (NeedCtorLink)
	struct FString                                     Description;                                              // 0x0034(0x000C) (NeedCtorLink)
	struct FUniqueNetId                                FounderId;                                                // 0x0040(0x0010)
	struct FUniqueNetId                                LeaderId;                                                 // 0x0050(0x0010)
};

// ScriptStruct HawkenGame.R_PlayerReplicationInfo.DamagedPlayerInfo
// 0x000C
struct FDamagedPlayerInfo
{
	class AController*                                 PlayerController;                                         // 0x0000(0x0004)
	float                                              Amount;                                                   // 0x0004(0x0004)
	float                                              LastTimeSeconds;                                          // 0x0008(0x0004)
};

// ScriptStruct HawkenGame.R_PlayerReplicationInfo.PerPlayerStat
// 0x0020
struct FPerPlayerStat
{
	int                                                StatUniqueId;                                             // 0x0000(0x0004)
	struct FString                                     StatPlayerName;                                           // 0x0004(0x000C) (NeedCtorLink)
	int                                                Kills;                                                    // 0x0010(0x0004)
	int                                                Deaths;                                                   // 0x0014(0x0004)
	unsigned long                                      bIsNemesis : 1;                                           // 0x0018(0x0004)
	int                                                NumDeathsAtLastKill;                                      // 0x001C(0x0004)
};

// ScriptStruct HawkenGame.R_PlayerReplicationInfo.FloatStat
// 0x000C
struct FFloatStat
{
	struct FName                                       StatName;                                                 // 0x0000(0x0008) (AlwaysInit)
	float                                              StatValue;                                                // 0x0008(0x0004) (AlwaysInit)
};

// ScriptStruct HawkenGame.HawkenTypes.CarouselMechInfo
// 0x0054
struct FCarouselMechInfo
{
	struct FVisualInfo                                 MechAppearance;                                           // 0x0000(0x003C)
	unsigned char                                      PilotLevel;                                               // 0x003C(0x0001)
	unsigned char                                      MechTier;                                                 // 0x003D(0x0001)
	unsigned char                                      MechType;                                                 // 0x003E(0x0001)
	unsigned char                                      AbilityIndex;                                             // 0x003F(0x0001)
	unsigned char                                      PrimaryWeaponIdx;                                         // 0x0040(0x0001)
	unsigned char                                      SecondaryWeaponIdx;                                       // 0x0041(0x0001)
	unsigned char                                      TeamIndex;                                                // 0x0042(0x0001)
	unsigned char                                      EmblemIndex;                                              // 0x0043(0x0001)
	unsigned long                                      bMechTierFull : 1;                                        // 0x0044(0x0004)
	struct FString                                     Name;                                                     // 0x0048(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.HawkenTypes.SiegeModeStats
// 0x0014
struct FSiegeModeStats
{
	int                                                EnergyLost;                                               // 0x0000(0x0004)
	int                                                EnergySpent;                                              // 0x0004(0x0004)
	int                                                DamageToBattleship;                                       // 0x0008(0x0004)
	int                                                DamageToBaseReactor;                                      // 0x000C(0x0004)
	unsigned long                                      WinningReactorShot : 1;                                   // 0x0010(0x0004)
};

// ScriptStruct HawkenGame.R_PlayerReplicationInfo.GeneralMatchStats
// 0x0068
struct FGeneralMatchStats
{
	float                                              HealedAmount;                                             // 0x0000(0x0004)
	float                                              HealingTime;                                              // 0x0004(0x0004)
	int                                                HealedNumTimes;                                           // 0x0008(0x0004)
	float                                              DeployableRepair;                                         // 0x000C(0x0004)
	int                                                NPCsKilled;                                               // 0x0010(0x0004)
	int                                                NPCsDeaths;                                               // 0x0014(0x0004)
	unsigned char                                      TurretDeaths;                                             // 0x0018(0x0001)
	unsigned char                                      RevengeKills;                                             // 0x0019(0x0001)
	unsigned char                                      CrushKills;                                               // 0x001A(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	int                                                UnderdogBonusKillsOrAssists;                              // 0x001C(0x0004)
	unsigned char                                      NumMultiKills;                                            // 0x0020(0x0001)
	unsigned char                                      AvengerKills;                                             // 0x0021(0x0001)
	unsigned char                                      KillStreakBest;                                           // 0x0022(0x0001)
	unsigned char                                      MultiKillBest;                                            // 0x0023(0x0001)
	int                                                MVPPlayerID;                                              // 0x0024(0x0004)
	int                                                KillLeaderID;                                             // 0x0028(0x0004)
	int                                                AssistLeaderID;                                           // 0x002C(0x0004)
	int                                                KDRatioLeaderID;                                          // 0x0030(0x0004)
	int                                                EUReturnedLeaderID;                                       // 0x0034(0x0004)
	struct FString                                     MostKilledPlayerName;                                     // 0x0038(0x000C) (NeedCtorLink)
	unsigned char                                      MostKilledNumber;                                         // 0x0044(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FString                                     MostKilledByPlayerName;                                   // 0x0048(0x000C) (NeedCtorLink)
	unsigned char                                      MostKilledByNumber;                                       // 0x0054(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                MostChosenPrimaryWeaponIndex;                             // 0x0058(0x0004)
	int                                                MostChosenSecondaryWeaponIndex;                           // 0x005C(0x0004)
	int                                                MostChosenItemIndex;                                      // 0x0060(0x0004)
	int                                                MostChosenAbilityIndex;                                   // 0x0064(0x0004)
};

// ScriptStruct HawkenGame.R_PlayerReplicationInfo.ExperiencePointGainedCategories
// 0x00DC
struct FExperiencePointGainedCategories
{
	int                                                Total;                                                    // 0x0000(0x0004)
	int                                                Kill;                                                     // 0x0004(0x0004)
	int                                                Assist;                                                   // 0x0008(0x0004)
	int                                                Revenge;                                                  // 0x000C(0x0004)
	int                                                Savior;                                                   // 0x0010(0x0004)
	int                                                Avenger;                                                  // 0x0014(0x0004)
	int                                                CrushKill;                                                // 0x0018(0x0004)
	int                                                KillStreak;                                               // 0x001C(0x0004)
	int                                                MultiKill;                                                // 0x0020(0x0004)
	int                                                EndedKillStreak;                                          // 0x0024(0x0004)
	int                                                ZeroDeaths;                                               // 0x0028(0x0004)
	int                                                mvp;                                                      // 0x002C(0x0004)
	int                                                Nemesis;                                                  // 0x0030(0x0004)
	int                                                UnderdogBonus;                                            // 0x0034(0x0004)
	int                                                KilledNemesis;                                            // 0x0038(0x0004)
	int                                                HealAlly;                                                 // 0x003C(0x0004)
	int                                                TransferEUtoBase;                                         // 0x0040(0x0004)
	int                                                DestroyBattleshipEngine;                                  // 0x0044(0x0004)
	int                                                OneBattleshipWin;                                         // 0x0048(0x0004)
	int                                                UnscathedBase;                                            // 0x004C(0x0004)
	int                                                DestroyBattleshipTurret;                                  // 0x0050(0x0004)
	int                                                AntiAirFired;                                             // 0x0054(0x0004)
	int                                                AntiAirFiredRadiusBonus;                                  // 0x0058(0x0004)
	int                                                ControlAntiAir;                                           // 0x005C(0x0004)
	int                                                ControlAntiAirRadiusBonus;                                // 0x0060(0x0004)
	int                                                AAKillBothInRadius;                                       // 0x0064(0x0004)
	int                                                AAKillDefense;                                            // 0x0068(0x0004)
	int                                                AAKillAttack;                                             // 0x006C(0x0004)
	int                                                AAAssistBothInRadius;                                     // 0x0070(0x0004)
	int                                                AAAssistDefense;                                          // 0x0074(0x0004)
	int                                                AAAssistAttack;                                           // 0x0078(0x0004)
	int                                                DestroyNeutralTurret;                                     // 0x007C(0x0004)
	int                                                ControlMissileSilo;                                       // 0x0080(0x0004)
	int                                                ControlMissileSiloRadiusBonus;                            // 0x0084(0x0004)
	int                                                SiloKillBothInRadius;                                     // 0x0088(0x0004)
	int                                                SiloKillDefense;                                          // 0x008C(0x0004)
	int                                                SiloKillAttack;                                           // 0x0090(0x0004)
	int                                                SiloAssistBothInRadius;                                   // 0x0094(0x0004)
	int                                                SiloAssistDefense;                                        // 0x0098(0x0004)
	int                                                SiloAssistAttack;                                         // 0x009C(0x0004)
	int                                                MissileSiloFired;                                         // 0x00A0(0x0004)
	int                                                MissileSiloFiredRadiusBonus;                              // 0x00A4(0x0004)
	int                                                BonusPoints;                                              // 0x00A8(0x0004)
	int                                                PotentialBonusPoints;                                     // 0x00AC(0x0004)
	int                                                AttachmentBonusPoints;                                    // 0x00B0(0x0004)
	int                                                PlayTime;                                                 // 0x00B4(0x0004)
	int                                                CoopBotKill;                                              // 0x00B8(0x0004)
	int                                                CoopBossKill;                                             // 0x00BC(0x0004)
	int                                                CoopBotAssist;                                            // 0x00C0(0x0004)
	int                                                CoopCompletionBonus;                                      // 0x00C4(0x0004)
	int                                                CoopAttemptBonus;                                         // 0x00C8(0x0004)
	int                                                CoopWaveCompletionBonus;                                  // 0x00CC(0x0004)
	int                                                CoopRevival;                                              // 0x00D0(0x0004)
	int                                                NPCKillAssist;                                            // 0x00D4(0x0004)
	int                                                ChallengeRewardXP;                                        // 0x00D8(0x0004)
};

// ScriptStruct HawkenGame.R_PlayerReplicationInfo.SDelayedStatusEffect
// 0x0014
struct FSDelayedStatusEffect
{
	class UClass*                                      statusEffectClass;                                        // 0x0000(0x0004)
	class UClass*                                      appliedInternalClass;                                     // 0x0004(0x0004)
	struct FString                                     forMechInstanceId;                                        // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.R_PlayerReplicationInfo.WeaponInfo
// 0x0004
struct FWeaponInfo
{
	unsigned char                                      PrimaryIdx;                                               // 0x0000(0x0001)
	unsigned char                                      SecondaryIdx;                                             // 0x0001(0x0001)
	unsigned char                                      PrimaryUpgradeFlags;                                      // 0x0002(0x0001)
	unsigned char                                      SecondaryUpgradeFlags;                                    // 0x0003(0x0001)
};

// ScriptStruct HawkenGame.R_PlayerReplicationInfo.SMechSetupStruct
// 0x0070
struct FSMechSetupStruct
{
	struct FSAllocatedOptimization                     AllocatedOptimizations;                                   // 0x0000(0x0010)
	struct FVisualInfo                                 MechAppearance;                                           // 0x0010(0x003C)
	struct FInternalsInfo                              MechInternals;                                            // 0x004C(0x0008)
	struct FWeaponInfo                                 MechWeapons;                                              // 0x0054(0x0004)
	TEnumAsByte<EAbilities>                            AbilityIndex;                                             // 0x0058(0x0001)
	unsigned char                                      AbilityUpgradeFlags;                                      // 0x0059(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	int                                                MechType;                                                 // 0x005C(0x0004)
	int                                                MechSubType;                                              // 0x0060(0x0004)
	unsigned long                                      bReadyForSetup : 1;                                       // 0x0064(0x0004)
	unsigned char                                      SetupID;                                                  // 0x0068(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	class UR_NPC_Template*                             Template;                                                 // 0x006C(0x0004)
};

// ScriptStruct HawkenGame.R_PlayerReplicationInfo.IntStat
// 0x000C
struct FIntStat
{
	struct FName                                       StatName;                                                 // 0x0000(0x0008) (AlwaysInit)
	int                                                StatValue;                                                // 0x0008(0x0004) (AlwaysInit)
};

// ScriptStruct HawkenGame.HawkenTypes.CarouselInfo
// 0x01FC
struct FCarouselInfo
{
	int                                                NumMechs;                                                 // 0x0000(0x0004)
	struct FCarouselMechInfo                           Mechs[0x6];                                               // 0x0004(0x0054) (NeedCtorLink)
};

// ScriptStruct HawkenGame.R_DamageTracking.DamagedByInfo
// 0x0018
struct FDamagedByInfo
{
	class AController*                                 PlayerController;                                         // 0x0000(0x0004)
	float                                              DamageAmount;                                             // 0x0004(0x0004)
	float                                              VicariousAmount;                                          // 0x0008(0x0004)
	float                                              LastTimeSeconds;                                          // 0x000C(0x0004)
	float                                              FirstTimeSeconds;                                         // 0x0010(0x0004)
	class UClass*                                      LastDmgType;                                              // 0x0014(0x0004)
};

// ScriptStruct HawkenGame.R_PlayerReplicationInfo.MechXPChange
// 0x0020
struct FMechXPChange
{
	struct FString                                     Mech_InstanceId;                                          // 0x0000(0x000C) (NeedCtorLink)
	int                                                OldXP;                                                    // 0x000C(0x0004)
	int                                                NewXP;                                                    // 0x0010(0x0004)
	unsigned long                                      bBoostedXP : 1;                                           // 0x0014(0x0004)
	unsigned long                                      bTestDriveWasPlayed : 1;                                  // 0x0014(0x0004)
	int                                                NewOverflowXP;                                            // 0x0018(0x0004)
	int                                                NewFreeOverflowXP;                                        // 0x001C(0x0004)
};

// ScriptStruct HawkenGame.HawkenTypes.CommandBindingModifiers
// 0x0004
struct FCommandBindingModifiers
{
	unsigned long                                      bConvertNumbers : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bFlattenModifiers : 1;                                    // 0x0000(0x0004)
};

// ScriptStruct HawkenGame.R_GFx_Options.SKeyBind
// 0x0018
struct FSKeyBind
{
	struct FString                                     DisplayName;                                              // 0x0000(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     CommandName;                                              // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.R_GFx_Options.SCachedPrimaryKeybind
// 0x0018
struct FSCachedPrimaryKeybind
{
	struct FString                                     CommandName;                                              // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     primaryKeybind;                                           // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.R_GFx_MechMenu_Base.PublicPlayerProfile
// 0x002C
struct FPublicPlayerProfile
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0010)
	class UR_MechSetup*                                MechSetup;                                                // 0x0010(0x0004)
	class UOnlineUnlockedAchievementCollection*        UnlockedAchievementCollection;                            // 0x0014(0x0004)
	class UR_OnlinePlayerStats_UnrankedGameplay*       OnlinePlayerStats_UnrankedGameplay;                       // 0x0018(0x0004)
	TArray<class UGFxObject*>                          AchievementList;                                          // 0x001C(0x000C) (NeedCtorLink)
	int                                                EmblemIndex;                                              // 0x0028(0x0004)
};

// ScriptStruct HawkenGame.R_GFx_MechMenu_Base.MapDefinition
// 0x0058
struct FMapDefinition
{
	struct FString                                     DisplayName;                                              // 0x0000(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     mapName_DM;                                               // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     mapName_Siege;                                            // 0x0018(0x000C) (NeedCtorLink)
	struct FString                                     mapName_MA;                                               // 0x0024(0x000C) (NeedCtorLink)
	struct FString                                     mapName_TR;                                               // 0x0030(0x000C) (NeedCtorLink)
	struct FString                                     mapName_CO;                                               // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     mapName_CoopTDM;                                          // 0x0048(0x000C) (NeedCtorLink)
	class UTexture2D*                                  MapIcon;                                                  // 0x0054(0x0004)
};

// ScriptStruct HawkenGame.HawkenTypes.CamoPattern
// 0x0050
struct FCamoPattern
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0004)
	struct FLinearColor                                BaseColor;                                                // 0x0004(0x0010)
	struct FLinearColor                                BrightColor;                                              // 0x0014(0x0010)
	struct FLinearColor                                DarkColor;                                                // 0x0024(0x0010)
	float                                              CamoMask;                                                 // 0x0034(0x0004)
	float                                              Rimlight;                                                 // 0x0038(0x0004)
	float                                              SpecIntensity;                                            // 0x003C(0x0004)
	float                                              SpecPower;                                                // 0x0040(0x0004)
	class UTexture2D*                                  PatternIcon;                                              // 0x0044(0x0004)
	float                                              Scale;                                                    // 0x0048(0x0004)
	float                                              Rotation;                                                 // 0x004C(0x0004)
};

// ScriptStruct HawkenGame.HawkenTypes.MechTauntType
// 0x001C
struct FMechTauntType
{
	struct FString                                     DisplayName;                                              // 0x0000(0x000C) (Const, Localized, NeedCtorLink)
	class UTexture2D*                                  DisplayIcon;                                              // 0x000C(0x0004)
	int                                                AnimIndex;                                                // 0x0010(0x0004)
	float                                              AnimLength;                                               // 0x0014(0x0004)
	float                                              ThrusterLength;                                           // 0x0018(0x0004)
};

// ScriptStruct HawkenGame.HawkenTypes.MechPartStyles
// 0x0028
struct FMechPartStyles
{
	struct FString                                     DisplayName;                                              // 0x0000(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     loreText;                                                 // 0x000C(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     Description;                                              // 0x0018(0x000C) (Const, Localized, NeedCtorLink)
	class UTexture2D*                                  DisplayIcon;                                              // 0x0024(0x0004)
};

// ScriptStruct HawkenGame.R_GFx_MechMenu_Base.SOfferInfo
// 0x001C
struct FSOfferInfo
{
	struct FString                                     OfferId;                                                  // 0x0000(0x000C) (NeedCtorLink)
	int                                                TaskID;                                                   // 0x000C(0x0004)
	unsigned long                                      bCompleted : 1;                                           // 0x0010(0x0004)
	unsigned long                                      bFailed : 1;                                              // 0x0010(0x0004)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // 0x0014(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	unsigned long                                      bUseHawkenPoints : 1;                                     // 0x0018(0x0004)
};

// ScriptStruct HawkenGame.R_GFx_MechMenu_Base.SAgentDialogCardInfo
// 0x0034
struct FSAgentDialogCardInfo
{
	struct FString                                     dialogText;                                               // 0x0000(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     modifiedDialogText;                                       // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     agentImageType;                                           // 0x0018(0x000C) (Const, NeedCtorLink)
	class UTexture2D*                                  secondaryImage;                                           // 0x0024(0x0004)
	struct FScriptDelegate                             dialogClosedCallbackDelegate;                             // 0x0028(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.R_GFx_MechMenu_Base.SProgressionUnlockDetails
// 0x0064
struct FSProgressionUnlockDetails
{
	struct FString                                     DisplayName;                                              // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     itemIconPath;                                             // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     Description;                                              // 0x0018(0x000C) (NeedCtorLink)
	struct FString                                     loreText;                                                 // 0x0024(0x000C) (NeedCtorLink)
	struct FString                                     Title;                                                    // 0x0030(0x000C) (NeedCtorLink)
	struct FString                                     unlockExplanation;                                        // 0x003C(0x000C) (NeedCtorLink)
	TEnumAsByte<EProgressionUnlockCategory>            unlockCategory;                                           // 0x0048(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FString                                     actionIconPath;                                           // 0x004C(0x000C) (NeedCtorLink)
	TArray<struct FSAgentDialogCardInfo>               optionalAgentDialogFollowups;                             // 0x0058(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.R_GFx_MechMenu_Base.SGarageTutorialTextBox
// 0x0034
struct FSGarageTutorialTextBox
{
	struct FString                                     Message;                                                  // 0x0000(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     targetControl;                                            // 0x000C(0x000C) (NeedCtorLink)
	int                                                XOffset;                                                  // 0x0018(0x0004)
	int                                                YOffset;                                                  // 0x001C(0x0004)
	unsigned long                                      bControlLineVertical : 1;                                 // 0x0020(0x0004)
	int                                                controlLineOffset;                                        // 0x0024(0x0004)
	unsigned long                                      bTextLineVertical : 1;                                    // 0x0028(0x0004)
	int                                                textLineOffset;                                           // 0x002C(0x0004)
	int                                                TextWidth;                                                // 0x0030(0x0004)
};

// ScriptStruct HawkenGame.R_GFx_MechMenu_Base.SGaragePanelTutorialCardInfo
// 0x0034
struct FSGaragePanelTutorialCardInfo
{
	struct FString                                     Title;                                                    // 0x0000(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     targetPanelName;                                          // 0x000C(0x000C) (NeedCtorLink)
	unsigned long                                      bAutoShow : 1;                                            // 0x0018(0x0004)
	TArray<struct FSGarageTutorialTextBox>             tutorialBoxArray;                                         // 0x001C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             dialogClosedCallbackDelegate;                             // 0x0028(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.R_GFx_MechMenu_Base.SEducationalDialogCardInfo
// 0x0024
struct FSEducationalDialogCardInfo
{
	struct FString                                     Title;                                                    // 0x0000(0x000C) (Const, Localized, NeedCtorLink)
	struct FScriptDelegate                             dialogClosedCallbackDelegate;                             // 0x000C(0x000C) (NeedCtorLink)
	TArray<struct FSGarageTutorialTextBox>             tutorialBoxArray;                                         // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.R_GFx_MechMenu_Base.GFxClanMemberObject
// 0x0014
struct FGFxClanMemberObject
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0010)
	class UGFxObject*                                  GFxObj;                                                   // 0x0010(0x0004)
};

// ScriptStruct HawkenGame.R_GFx_MechMenu_Base.SAchievementIcon
// 0x0010
struct FSAchievementIcon
{
	struct FString                                     ImageId;                                                  // 0x0000(0x000C) (NeedCtorLink)
	class UTexture2D*                                  IconTexture;                                              // 0x000C(0x0004)
};

// ScriptStruct HawkenGame.R_GFx_ProjectedUI.ClipProjectionData
// 0x0018
struct FClipProjectionData
{
	float                                              PosX;                                                     // 0x0000(0x0004) (Transient)
	float                                              PosY;                                                     // 0x0004(0x0004) (Transient)
	float                                              PosZ;                                                     // 0x0008(0x0004) (Transient)
	float                                              ClipWidth;                                                // 0x000C(0x0004) (Transient)
	float                                              ClipHeight;                                               // 0x0010(0x0004) (Transient)
	float                                              ClipScale;                                                // 0x0014(0x0004) (Transient)
};

// ScriptStruct HawkenGame.R_GFx_ProjectedUI.ProjectionParams
// 0x0010
struct FProjectionParams
{
	unsigned long                                      bApplyUE3MVP : 1;                                         // 0x0000(0x0004)
	unsigned long                                      bInitialized : 1;                                         // 0x0000(0x0004) (Transient)
	struct FRotator                                    InitialPlayerRotation;                                    // 0x0004(0x000C) (Transient)
};

// ScriptStruct HawkenGame.R_Gfx_VisorNative.IndicatorGeneric
// 0x006C
struct FIndicatorGeneric
{
	struct FString                                     IndicatorID;                                              // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bIndicatorInUse : 1;                                      // 0x000C(0x0004) (AlwaysInit)
	TEnumAsByte<EVisorColorType>                       cType;                                                    // 0x0010(0x0001) (AlwaysInit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	class UGFxObject*                                  IndicatorClip;                                            // 0x0014(0x0004) (AlwaysInit)
	class UGFxObject*                                  IndicatorParams;                                          // 0x0018(0x0004) (AlwaysInit)
	class UGFxObject*                                  IndicatorLabels;                                          // 0x001C(0x0004) (AlwaysInit)
	class UGFxObject*                                  IndicatorStatusArray;                                     // 0x0020(0x0004) (AlwaysInit)
	struct FString                                     RadarType;                                                // 0x0024(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bIsFocusedOnRadar : 1;                                    // 0x0030(0x0004) (AlwaysInit)
	float                                              IndicatorRadarRadius;                                     // 0x0034(0x0004) (AlwaysInit)
	float                                              IndicatorRadarHeight;                                     // 0x0038(0x0004) (AlwaysInit)
	TEnumAsByte<EIndicatorType>                        LocalType;                                                // 0x003C(0x0001) (AlwaysInit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	unsigned long                                      Cached_bDebuffed : 1;                                     // 0x0040(0x0004) (AlwaysInit)
	unsigned long                                      Cached_bMalfunctioning : 1;                               // 0x0040(0x0004) (AlwaysInit)
	unsigned long                                      Cached_bHeatDebuffed : 1;                                 // 0x0040(0x0004) (AlwaysInit)
	float                                              Cached_HealthPercent;                                     // 0x0044(0x0004) (AlwaysInit)
	int                                                Cached_AbilityIndex;                                      // 0x0048(0x0004) (AlwaysInit)
	struct FString                                     Cached_ObjectiveText;                                     // 0x004C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Cached_PlayerName;                                        // 0x0058(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                Cached_EnergyUnits;                                       // 0x0064(0x0004) (AlwaysInit)
	int                                                Cached_KillStreak;                                        // 0x0068(0x0004) (AlwaysInit)
};

// ScriptStruct HawkenGame.R_GraphicsOptions.CommonSettingsGroup
// 0x001C
struct FCommonSettingsGroup
{
	unsigned long                                      bStoringValues : 1;                                       // 0x0000(0x0004) (AlwaysInit)
	unsigned long                                      bUseVSync : 1;                                            // 0x0000(0x0004) (AlwaysInit)
	unsigned long                                      bBorderless : 1;                                          // 0x0000(0x0004) (AlwaysInit)
	unsigned long                                      bFullScreen : 1;                                          // 0x0000(0x0004) (AlwaysInit)
	int                                                CurrentResX;                                              // 0x0004(0x0004) (AlwaysInit)
	int                                                CurrentResY;                                              // 0x0008(0x0004) (AlwaysInit)
	int                                                DesiredResX;                                              // 0x000C(0x0004) (AlwaysInit)
	int                                                DesiredResY;                                              // 0x0010(0x0004) (AlwaysInit)
	TEnumAsByte<EGraphicDetail>                        TextureDetail;                                            // 0x0014(0x0001) (AlwaysInit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                PhysXLevel;                                               // 0x0018(0x0004) (AlwaysInit)
};

// ScriptStruct HawkenGame.R_GraphicsOptions.ScreenResolutionElement
// 0x000C
struct FScreenResolutionElement
{
	int                                                ResX;                                                     // 0x0000(0x0004)
	int                                                ResY;                                                     // 0x0004(0x0004)
	unsigned long                                      bFullScreen : 1;                                          // 0x0008(0x0004)
};

// ScriptStruct HawkenGame.R_GraphicsOptions.PhysXSettings
// 0x000C
struct FPhysXSettings
{
	int                                                ApexDestructionMaxChunkIslandCount;                       // 0x0000(0x0004)
	int                                                ApexDestructionMaxShapeCount;                             // 0x0004(0x0004)
	float                                              ApexDestructionMaxChunkSeparationLOD;                     // 0x0008(0x0004)
};

// ScriptStruct HawkenGame.R_Internal_Base.InternalModification
// 0x0014
struct FInternalModification
{
	TEnumAsByte<EValueDisplayConversion>               ValueConversion;                                          // 0x0000(0x0001) (Const)
	TEnumAsByte<EValueDisplayContext>                  ValueContext;                                             // 0x0001(0x0001) (Const)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                ValueDisplayDigits;                                       // 0x0004(0x0004) (Const)
	struct FString                                     Description;                                              // 0x0008(0x000C) (Const, Localized, NeedCtorLink)
};

// ScriptStruct HawkenGame.R_ItemDatabaseProps.ItemDBProp
// 0x0026
struct FItemDBProp
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	float                                              Value[0x6];                                               // 0x000C(0x0004)
	unsigned char                                      ValueSetFlags;                                            // 0x0024(0x0001)
	unsigned char                                      IsPercentFlags;                                           // 0x0025(0x0001)
};

// ScriptStruct HawkenGame.R_ItemDatabaseProps.ItemDBPropertiesStore
// 0x001C
struct FItemDBPropertiesStore
{
	int                                                Index;                                                    // 0x0000(0x0004)
	struct FString                                     Typename;                                                 // 0x0004(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FItemDBProp>                         Props;                                                    // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.R_LanguageOptions.SLanguage
// 0x0018
struct FSLanguage
{
	struct FString                                     shortCode;                                                // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     DisplayName;                                              // 0x000C(0x000C) (Const, Localized, NeedCtorLink)
};

// ScriptStruct HawkenGame.R_LocalPlayer.SPilotLevelUnlock
// 0x001C
struct FSPilotLevelUnlock
{
	int                                                Level;                                                    // 0x0000(0x0004)
	struct FString                                     ItemGUID;                                                 // 0x0004(0x000C) (NeedCtorLink)
	int                                                invType;                                                  // 0x0010(0x0004)
	int                                                Index;                                                    // 0x0014(0x0004)
	int                                                Count;                                                    // 0x0018(0x0004)
};

// ScriptStruct HawkenGame.HawkenTypes.CockpitDecorationInstanceData
// 0x0018
struct FCockpitDecorationInstanceData
{
	class UUDKSkeletalMeshComponent*                   Mesh;                                                     // 0x0000(0x0004) (ExportObject, Component, EditInline)
	class UAnimNodeSlot*                               DashAnimNodeSlot;                                         // 0x0004(0x0004)
	class UMorphNodeWeight*                            MorphNode;                                                // 0x0008(0x0004)
	float                                              CurMorphWeight;                                           // 0x000C(0x0004)
	int                                                Idx;                                                      // 0x0010(0x0004)
	float                                              CreationTime;                                             // 0x0014(0x0004)
};

// ScriptStruct HawkenGame.HawkenTypes.CockpitDecoration
// 0x0028
struct FCockpitDecoration
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008)
	class USkeletalMesh*                               SkelMesh;                                                 // 0x0008(0x0004)
	class UAnimSet*                                    Anims;                                                    // 0x000C(0x0004)
	class UAnimTree*                                   Tree;                                                     // 0x0010(0x0004)
	class UMaterialInstanceConstant*                   Mat;                                                      // 0x0014(0x0004)
	class UMorphTargetSet*                             Morph;                                                    // 0x0018(0x0004)
	struct FName                                       MorphNodeName;                                            // 0x001C(0x0008)
	class UPhysicsAsset*                               Phys;                                                     // 0x0024(0x0004)
};

// ScriptStruct HawkenGame.HawkenTypes.HealEffectTime
// 0x0009
struct FHealEffectTime
{
	float                                              StartTime;                                                // 0x0000(0x0004)
	float                                              EndTime;                                                  // 0x0004(0x0004)
	TEnumAsByte<EDroneAnimStage_e>                     AnimStage;                                                // 0x0008(0x0001)
};

// ScriptStruct HawkenGame.HawkenTypes.DroneType
// 0x00AC
struct FDroneType
{
	class USkeletalMesh*                               Model;                                                    // 0x0000(0x0004)
	class UAnimSet*                                    Anims;                                                    // 0x0004(0x0004)
	class UMaterialInstanceConstant*                   DroneMat;                                                 // 0x0008(0x0004)
	struct FName                                       AnimName[0x3];                                            // 0x000C(0x0008)
	struct FName                                       DeployAnimName;                                           // 0x0024(0x0008)
	struct FName                                       EndAnimName;                                              // 0x002C(0x0008)
	int                                                HealEffectTiming;                                         // 0x0034(0x0004)
	class UParticleSystem*                             EffectBeam;                                               // 0x0038(0x0004)
	class UParticleSystem*                             EffectSparks;                                             // 0x003C(0x0004)
	struct FName                                       BeamSocketNames[0x4];                                     // 0x0040(0x0008)
	struct FName                                       BeamTargetName;                                           // 0x0060(0x0008)
	struct FName                                       SparkSocketNames[0x4];                                    // 0x0068(0x0008)
	struct FName                                       ContSocketNames[0x2];                                     // 0x0088(0x0008)
	class UParticleSystem*                             ContEffects[0x2];                                         // 0x0098(0x0004)
	int                                                SecondaryAnimIdx;                                         // 0x00A0(0x0004)
	class UParticleSystem*                             MechEffect;                                               // 0x00A4(0x0004)
	unsigned long                                      bUsesShaderParams : 1;                                    // 0x00A8(0x0004)
};

// ScriptStruct HawkenGame.HawkenTypes.MechMeshes
// 0x0060
struct FMechMeshes
{
	class UUDKSkeletalMeshComponent*                   TorsoMesh;                                                // 0x0000(0x0004) (ExportObject, Component, EditInline)
	class UUDKSkeletalMeshComponent*                   MidMesh;                                                  // 0x0004(0x0004) (ExportObject, Component, EditInline)
	class UUDKSkeletalMeshComponent*                   LowerMesh;                                                // 0x0008(0x0004) (ExportObject, Component, EditInline)
	class UUDKSkeletalMeshComponent*                   ArmsMesh;                                                 // 0x000C(0x0004) (ExportObject, Component, EditInline)
	class UUDKSkeletalMeshComponent*                   ThrusterMesh_L;                                           // 0x0010(0x0004) (ExportObject, Component, EditInline)
	class UUDKSkeletalMeshComponent*                   ThrusterMesh_R;                                           // 0x0014(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        ArmorMesh;                                                // 0x0018(0x0004) (ExportObject, Component, EditInline)
	class UUDKSkeletalMeshComponent*                   HL_TorsoMesh;                                             // 0x001C(0x0004) (ExportObject, Component, EditInline)
	class UUDKSkeletalMeshComponent*                   HL_MidMesh;                                               // 0x0020(0x0004) (ExportObject, Component, EditInline)
	class UUDKSkeletalMeshComponent*                   HL_LowerMesh;                                             // 0x0024(0x0004) (ExportObject, Component, EditInline)
	class UUDKSkeletalMeshComponent*                   HL_ArmsMesh;                                              // 0x0028(0x0004) (ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   MechHighlightInstance;                                    // 0x002C(0x0004)
	int                                                TorsoIdx;                                                 // 0x0030(0x0004)
	int                                                MidIdx;                                                   // 0x0034(0x0004)
	int                                                LowerIdx;                                                 // 0x0038(0x0004)
	int                                                ArmsIdx;                                                  // 0x003C(0x0004)
	int                                                ThrusterIdx;                                              // 0x0040(0x0004)
	int                                                ArmorIdx;                                                 // 0x0044(0x0004)
	class UMaterialInstanceConstant*                   LowMaterialInstance;                                      // 0x0048(0x0004)
	class UMaterialInstanceConstant*                   MidMaterialInstance;                                      // 0x004C(0x0004)
	class UMaterialInstanceConstant*                   TorsoMaterialInstance[0x2];                               // 0x0050(0x0004)
	class UMaterialInstanceConstant*                   ArmMaterialInstance;                                      // 0x0058(0x0004)
	class UMaterialInstanceConstant*                   ArmorMaterialInstance;                                    // 0x005C(0x0004)
};

// ScriptStruct HawkenGame.HawkenTypes.ThrusterType
// 0x000C
struct FThrusterType
{
	class USkeletalMesh*                               SkelModel;                                                // 0x0000(0x0004)
	class UMaterialInstanceConstant*                   MatInstConst;                                             // 0x0004(0x0004)
	class UParticleSystem*                             Effect;                                                   // 0x0008(0x0004)
};

// ScriptStruct HawkenGame.HawkenTypes.HealEffectTimeArray
// 0x000C
struct FHealEffectTimeArray
{
	TArray<struct FHealEffectTime>                     Times;                                                    // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.HawkenTypes.MechArmor
// 0x0038
struct FMechArmor
{
	class UStaticMesh*                                 TheStaticMesh[0xA];                                       // 0x0000(0x0004)
	struct FName                                       TheSocket;                                                // 0x0028(0x0008)
	class UMaterialInstanceConstant*                   TheMIC;                                                   // 0x0030(0x0004)
	class UMaterialInstanceConstant*                   TheSelectionMIC;                                          // 0x0034(0x0004)
};

// ScriptStruct HawkenGame.HawkenTypes.MechSkelDef
// 0x0084
struct FMechSkelDef
{
	class USkeletalMesh*                               Torso;                                                    // 0x0000(0x0004)
	class USkeletalMesh*                               Mid;                                                      // 0x0004(0x0004)
	class USkeletalMesh*                               Lower;                                                    // 0x0008(0x0004)
	class USkeletalMesh*                               Arms;                                                     // 0x000C(0x0004)
	class UMaterialInstanceConstant*                   TorsoMat;                                                 // 0x0010(0x0004)
	class UMaterialInstanceConstant*                   MidMat;                                                   // 0x0014(0x0004)
	class UMaterialInstanceConstant*                   LowerMat;                                                 // 0x0018(0x0004)
	class UMaterialInstanceConstant*                   ArmsMat;                                                  // 0x001C(0x0004)
	class UMaterialInstanceConstant*                   SelectionMat;                                             // 0x0020(0x0004)
	class UMaterialInstanceConstant*                   SelectionTorsoMat;                                        // 0x0024(0x0004)
	class UMaterialInstanceConstant*                   SelectionMidMat;                                          // 0x0028(0x0004)
	class UMaterialInstanceConstant*                   SelectionLowerMat;                                        // 0x002C(0x0004)
	class UMaterialInstanceConstant*                   SelectionArmsMat;                                         // 0x0030(0x0004)
	class UMaterialInstanceConstant*                   HologramMat;                                              // 0x0034(0x0004)
	class UMaterialInstanceConstant*                   HologramTorsoMat;                                         // 0x0038(0x0004)
	class UMaterialInstanceConstant*                   HologramMidMat;                                           // 0x003C(0x0004)
	class UMaterialInstanceConstant*                   HologramLowerMat;                                         // 0x0040(0x0004)
	class UMaterialInstanceConstant*                   HologramArmsMat;                                          // 0x0044(0x0004)
	int                                                ArmorIdxForTorso;                                         // 0x0048(0x0004)
	struct FMechArmor                                  ArmorAttachment;                                          // 0x004C(0x0038)
};

// ScriptStruct HawkenGame.HawkenTypes.SOptimization
// 0x001D
struct FSOptimization
{
	float                                              HardMin;                                                  // 0x0000(0x0004)
	int                                                TotalSlots;                                               // 0x0004(0x0004)
	int                                                StartIndex;                                               // 0x0008(0x0004)
	int                                                AccessibleSlots;                                          // 0x000C(0x0004)
	float                                              Increment;                                                // 0x0010(0x0004)
	int                                                defaultAllocation;                                        // 0x0014(0x0004)
	int                                                decimalCountDisplay;                                      // 0x0018(0x0004)
	TEnumAsByte<EValueDisplayConversion>               ValueConversion;                                          // 0x001C(0x0001)
};

// ScriptStruct HawkenGame.HawkenTypes.SFakeDefault
// 0x0020
struct FSFakeDefault
{
	struct FString                                     InstanceGUID;                                             // 0x0000(0x000C) (Const, NeedCtorLink)
	struct FString                                     ItemTypeGUID;                                             // 0x000C(0x000C) (Const, NeedCtorLink)
	int                                                StoreOrder;                                               // 0x0018(0x0004) (Const)
	int                                                Index;                                                    // 0x001C(0x0004) (Const)
};

// ScriptStruct HawkenGame.HawkenTypes.MechSelectionType
// 0x0010
struct FMechSelectionType
{
	struct FString                                     DisplayName;                                              // 0x0000(0x000C) (Const, Localized, NeedCtorLink)
	class UTexture2D*                                  DisplayIcon;                                              // 0x000C(0x0004)
};

// ScriptStruct HawkenGame.HawkenTypes.SOnlineAccountInfo
// 0x0074
struct FSOnlineAccountInfo
{
	unsigned long                                      bHasSeenMatchmaking : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bHasSeenAllModesUnlocked : 1;                             // 0x0000(0x0004)
	unsigned long                                      bShowSiegeRules : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bShowMARules : 1;                                         // 0x0000(0x0004)
	unsigned long                                      bShowCoopRules : 1;                                       // 0x0000(0x0004)
	unsigned long                                      bShowGameplayTips : 1;                                    // 0x0000(0x0004)
	unsigned long                                      bAutoSwitchItems : 1;                                     // 0x0000(0x0004)
	int                                                EULAVersionSeen;                                          // 0x0004(0x0004)
	int                                                NewUserExperienceFlags;                                   // 0x0008(0x0004)
	int                                                PilotProgressionFlags;                                    // 0x000C(0x0004)
	struct FString                                     EmblemInstanceId;                                         // 0x0010(0x000C) (NeedCtorLink)
	int                                                EmblemIndex;                                              // 0x001C(0x0004)
	struct FString                                     DefaultFriendColorId;                                     // 0x0020(0x000C) (NeedCtorLink)
	struct FString                                     DefaultNeutralColorId;                                    // 0x002C(0x000C) (NeedCtorLink)
	struct FString                                     DefaultFoeColorId;                                        // 0x0038(0x000C) (NeedCtorLink)
	int                                                DefaultFriendColor;                                       // 0x0044(0x0004)
	int                                                DefaultNeutralColor;                                      // 0x0048(0x0004)
	int                                                DefaultFoeColor;                                          // 0x004C(0x0004)
	unsigned long                                      DefaultTintReticle : 1;                                   // 0x0050(0x0004)
	struct FString                                     DefaultPrimaryReticleId;                                  // 0x0054(0x000C) (NeedCtorLink)
	struct FString                                     DefaultSecondaryReticleId;                                // 0x0060(0x000C) (NeedCtorLink)
	int                                                DefaultPrimaryReticle;                                    // 0x006C(0x0004)
	int                                                DefaultSecondaryReticle;                                  // 0x0070(0x0004)
};

// ScriptStruct HawkenGame.R_Pickup.SEnergyDisplayValues
// 0x000C
struct FSEnergyDisplayValues
{
	float                                              ScaleMin;                                                 // 0x0000(0x0004)
	float                                              ScaleMax;                                                 // 0x0004(0x0004)
	float                                              MaxEnergyAmount;                                          // 0x0008(0x0004)
};

// ScriptStruct HawkenGame.R_PilotEmblems.SPilotEmblem
// 0x0028
struct FSPilotEmblem
{
	struct FString                                     DisplayName;                                              // 0x0000(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     LockedToolText;                                           // 0x000C(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     UnlockedToolText;                                         // 0x0018(0x000C) (Const, Localized, NeedCtorLink)
	class UTexture2D*                                  EmblemImage;                                              // 0x0024(0x0004)
};

// ScriptStruct HawkenGame.R_PlayerController_Base.HelpMapInfo
// 0x0018
struct FHelpMapInfo
{
	struct FString                                     MapName;                                                  // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     GameModeSupport;                                          // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.R_EntryPlayerController.GarageCamData
// 0x0048
struct FGarageCamData
{
	float                                              OrbitDistance;                                            // 0x0000(0x0004)
	float                                              OldOrbitDistance;                                         // 0x0004(0x0004)
	float                                              TargetOrbitDistance;                                      // 0x0008(0x0004)
	float                                              HorizontalPan;                                            // 0x000C(0x0004)
	float                                              OldHorizontalPan;                                         // 0x0010(0x0004)
	float                                              TargetHorizontalPan;                                      // 0x0014(0x0004)
	float                                              PanTime;                                                  // 0x0018(0x0004)
	float                                              InterpTime;                                               // 0x001C(0x0004)
	unsigned long                                      bPanSmoothAccel : 1;                                      // 0x0020(0x0004)
	struct FVector                                     CameraOffset;                                             // 0x0024(0x000C)
	struct FVector                                     OldCameraOffset;                                          // 0x0030(0x000C)
	struct FVector                                     TargetCameraOffset;                                       // 0x003C(0x000C)
};

// ScriptStruct HawkenGame.R_PlayerController.RClientAdjustment
// 0x0008
struct FRClientAdjustment
{
	TEnumAsByte<ERobotMoveState>                       MoveState;                                                // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ThrusterEnergy;                                           // 0x0004(0x0004)
};

// ScriptStruct HawkenGame.R_StatusEffect_Base.StatusEffectDuration
// 0x0008
struct FStatusEffectDuration
{
	TEnumAsByte<EEffectDurationType>                   DurationMode;                                             // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DurationValue;                                            // 0x0004(0x0004) (Edit)
};

// ScriptStruct HawkenGame.R_StatusEffect_Base.StatusEffectPeriodicUpdate
// 0x000C
struct FStatusEffectPeriodicUpdate
{
	int                                                CurrentCount;                                             // 0x0000(0x0004) (Transient)
	int                                                TargetCount;                                              // 0x0004(0x0004) (Edit)
	int                                                ResourceCount;                                            // 0x0008(0x0004) (Edit)
};

// ScriptStruct HawkenGame.R_StatusEffect_Base.StatusEffectKillAssistInfo
// 0x0008
struct FStatusEffectKillAssistInfo
{
	int                                                KillsMadeSinceActive;                                     // 0x0000(0x0004) (Transient)
	int                                                AssistsMadeSinceActive;                                   // 0x0004(0x0004) (Transient)
};

// ScriptStruct HawkenGame.R_StatusEffect_Base.StatusEffectFlags
// 0x0004
struct FStatusEffectFlags
{
	unsigned long                                      bDisablesInput : 1;                                       // 0x0000(0x0004) (Edit)
	unsigned long                                      bDisablesMovement : 1;                                    // 0x0000(0x0004) (Edit)
	unsigned long                                      bDisablesLook : 1;                                        // 0x0000(0x0004) (Edit)
	unsigned long                                      bDisablesWeapon : 1;                                      // 0x0000(0x0004) (Edit)
	unsigned long                                      bDisablesCollision : 1;                                   // 0x0000(0x0004) (Edit)
	unsigned long                                      bDisablesPhysics : 1;                                     // 0x0000(0x0004) (Edit)
	unsigned long                                      bCancelsStealth : 1;                                      // 0x0000(0x0004) (Edit)
	unsigned long                                      bWasStealthActive : 1;                                    // 0x0000(0x0004) (Edit, Transient)
	unsigned long                                      bEnablesAir180 : 1;                                       // 0x0000(0x0004) (Edit)
	unsigned long                                      bEnablesAirDodge : 1;                                     // 0x0000(0x0004) (Edit)
};

// ScriptStruct HawkenGame.R_SE_EffectChain.SlaveEffectInfo
// 0x000C
struct FSlaveEffectInfo
{
	class UClass*                                      EffectClass;                                              // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      bIsOwnerEffect : 1;                                       // 0x0004(0x0004) (Edit, Const)
	unsigned long                                      bIsInstigatorEffect : 1;                                  // 0x0004(0x0004) (Edit, Const)
	class AR_StatusEffect_Base*                        EffectInst;                                               // 0x0008(0x0004) (Edit, Transient, EditConst)
};

// ScriptStruct HawkenGame.HawkenTypes.TeamPSManualOverrideProperties.EnemyLOSProperties
// 0x000C
struct FEnemyLOSProperties
{
	float                                              EnemyLOS_OuterRadius;                                     // 0x0000(0x0004) (Edit)
	float                                              EnemyLOS_InnerRadius;                                     // 0x0004(0x0004) (Edit)
	float                                              EnemyLOS_Score;                                           // 0x0008(0x0004) (Edit)
};

// ScriptStruct HawkenGame.HawkenTypes.TeamPSManualOverrideProperties.FriendlyLOSProperties
// 0x000C
struct FFriendlyLOSProperties
{
	float                                              FriendlyLOS_OuterRadius;                                  // 0x0000(0x0004) (Edit)
	float                                              FriendlyLOS_InnerRadius;                                  // 0x0004(0x0004) (Edit)
	float                                              FriendlyLOS_Score;                                        // 0x0008(0x0004) (Edit)
};

// ScriptStruct HawkenGame.HawkenTypes.TeamPSManualOverrideProperties.EnemyRadiusProperties
// 0x0030
struct FEnemyRadiusProperties
{
	struct FVector                                     EnemyRadius_DistanceOuter;                                // 0x0000(0x000C) (Edit)
	float                                              EnemyRadius_ScoreOuter;                                   // 0x000C(0x0004) (Edit)
	struct FVector                                     EnemyRadius_DistanceInner;                                // 0x0010(0x000C) (Edit)
	float                                              EnemyRadius_ScoreInner;                                   // 0x001C(0x0004) (Edit)
	struct FVector                                     EnemyRadius_DistanceInnerMost;                            // 0x0020(0x000C) (Edit)
	float                                              EnemyRadius_ScoreInnerMost;                               // 0x002C(0x0004) (Edit)
};

// ScriptStruct HawkenGame.HawkenTypes.TeamPSManualOverrideProperties.FriendlyRadiusProperties
// 0x0020
struct FFriendlyRadiusProperties
{
	struct FVector                                     FriendlyRadius_DistanceOuter;                             // 0x0000(0x000C) (Edit)
	float                                              FriendlyRadius_ScoreOuter;                                // 0x000C(0x0004) (Edit)
	struct FVector                                     FriendlyRadius_DistanceInner;                             // 0x0010(0x000C) (Edit)
	float                                              FriendlyRadius_ScoreInner;                                // 0x001C(0x0004) (Edit)
};

// ScriptStruct HawkenGame.HawkenTypes.TeamPSManualOverrideProperties
// 0x00A0
struct FTeamPSManualOverrideProperties
{
	unsigned long                                      bEnableManualOverrideProperties : 1;                      // 0x0000(0x0004) (Edit)
	float                                              BaseStartingScore;                                        // 0x0004(0x0004) (Edit)
	struct FEnemyLOSProperties                         EnemyLOSProps;                                            // 0x0008(0x000C) (Edit)
	struct FFriendlyLOSProperties                      FriendlyLOSProps;                                         // 0x0014(0x000C) (Edit)
	struct FEnemyRadiusProperties                      EnemyRadiusProps;                                         // 0x0020(0x0030) (Edit)
	struct FFriendlyRadiusProperties                   FriendlyRadiusProps;                                      // 0x0050(0x0020) (Edit)
	struct FVector                                     DeadFriendlyRadius_Distance;                              // 0x0070(0x000C) (Edit)
	float                                              DeadFriendlyRadius_Score;                                 // 0x007C(0x0004) (Edit)
	struct FVector                                     EnemyTurretRadius_Distance;                               // 0x0080(0x000C) (Edit)
	float                                              EnemyTurretRadius_Score;                                  // 0x008C(0x0004) (Edit)
	struct FVector                                     LastKillerRadius_Distance;                                // 0x0090(0x000C) (Edit)
	float                                              LastKillerRadius_Score;                                   // 0x009C(0x0004) (Edit)
};

// ScriptStruct HawkenGame.AIChatterManager.SpeakLineInfo
// 0x0038
struct FSpeakLineInfo
{
	class AR_PawnNative*                               Addressee;                                                // 0x0000(0x0004)
	class USoundCue*                                   Audio;                                                    // 0x0004(0x0004)
	int                                                DialogueSessionId;                                        // 0x0008(0x0004)
	unsigned char                                      EventID;                                                  // 0x000C(0x0001)
	TEnumAsByte<ESoundVocal>                           VocalID;                                                  // 0x000D(0x0001)
	TEnumAsByte<ESpeakLineBroadcastFilter>             BroadcastFilter;                                          // 0x000E(0x0001)
	TEnumAsByte<ESpeechPriority>                       Priority;                                                 // 0x000F(0x0001)
	TEnumAsByte<ESpokenLineType>                       SpokenLineType;                                           // 0x0010(0x0001)
	TEnumAsByte<EAudioComponentType>                   ACType;                                                   // 0x0011(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	unsigned long                                      bNoHeadTrack : 1;                                         // 0x0014(0x0004)
	unsigned long                                      bSuppressSubtitle : 1;                                    // 0x0014(0x0004)
	float                                              DelayTime;                                                // 0x0018(0x0004)
	float                                              ExtraHeadTrackTime;                                       // 0x001C(0x0004)
	float                                              VolumeMultiplier;                                         // 0x0020(0x0004)
	struct FName                                       SoundModeName;                                            // 0x0024(0x0008)
	struct FString                                     DebugText;                                                // 0x002C(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.AIChatterManager.DialogueLine
// 0x0014
struct FDialogueLine
{
	TEnumAsByte<EChatterSpeaker>                       Speaker;                                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class AR_PawnNative*                               SpeakerPawn;                                              // 0x0004(0x0004)
	class USoundCue*                                   Line;                                                     // 0x0008(0x0004) (Edit)
	float                                              PrePlaybackDelay;                                         // 0x000C(0x0004) (Edit)
	unsigned long                                      bBlockFurtherPlayback : 1;                                // 0x0010(0x0004) (Edit)
};

// ScriptStruct HawkenGame.AIChatterManager.DialogueRef
// 0x000C
struct FDialogueRef
{
	class UDialogueTemplate*                           DialogueResource;                                         // 0x0000(0x0004)
	TEnumAsByte<EChatterEvent>                         EventID;                                                  // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                DialogueIdx;                                              // 0x0008(0x0004)
};

// ScriptStruct HawkenGame.AIChatterManager.DialoguePlayback
// 0x0030
struct FDialoguePlayback
{
	TArray<class AR_PawnNative*>                       Participants;                                             // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FDialogueLine>                       Lines;                                                    // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                CurrentLineIdx;                                           // 0x0018(0x0004)
	struct FDialogueRef                                OriginalDialogue;                                         // 0x001C(0x000C)
	TEnumAsByte<ESpeechPriority>                       Priority;                                                 // 0x0028(0x0001)
	unsigned char                                      EventID;                                                  // 0x0029(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                SessionId;                                                // 0x002C(0x0004) (Transient)
};

// ScriptStruct HawkenGame.AIChatterManager.ChatterLine
// 0x0010
struct FChatterLine
{
	TEnumAsByte<ESpeechPriority>                       Priority;                                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TimeFinishes;                                             // 0x0004(0x0004)
	class AR_PawnNative*                               Speaker;                                                  // 0x0008(0x0004)
	class USoundCue*                                   Line;                                                     // 0x000C(0x0004)
};

// ScriptStruct HawkenGame.AIChatterManager.SpeakerSet
// 0x000C
struct FSpeakerSet
{
	TArray<class AR_PawnNative*>                       Speakers;                                                 // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct HawkenGame.AIChatterManager.QueuedChatterPlayback
// 0x0040
struct FQueuedChatterPlayback
{
	float                                              PlaybackStartTimestamp;                                   // 0x0000(0x0004)
	class AR_PawnNative*                               Speaker;                                                  // 0x0004(0x0004)
	struct FSpeakLineInfo                              LineInfo;                                                 // 0x0008(0x0038) (NeedCtorLink)
};

// ScriptStruct HawkenGame.AIChatterManager.ChatterSpeakerData
// 0x0194
struct FChatterSpeakerData
{
	class USoundCue*                                   CurrentlyPlaying;                                         // 0x0000(0x0004) (Transient)
	TEnumAsByte<ESpeechPriority>                       CurrentPriority;                                          // 0x0004(0x0001) (Transient)
	TEnumAsByte<EChatterEvent>                         CurrentEvent;                                             // 0x0005(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	class AR_PawnNative*                               SpeakerPawn;                                              // 0x0008(0x0004)
	float                                              NextAllowedPlayback;                                      // 0x000C(0x0004)
	float                                              NextEventAvailability[0x2B];                              // 0x0010(0x0004)
	int                                                TimesEventPlayed[0x2B];                                   // 0x00BC(0x0004)
	TArray<class AR_PawnNative*>                       SpeakerProxies;                                           // 0x0168(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bPendingChatter : 1;                                      // 0x0174(0x0004) (Transient)
	unsigned long                                      bPainSoundInterruptKismetChatter : 1;                     // 0x0174(0x0004)
	unsigned long                                      bPainSoundInterruptGenericChatter : 1;                    // 0x0174(0x0004)
	unsigned long                                      bChatterInterruptsPain : 1;                               // 0x0174(0x0004)
	TEnumAsByte<EChatterSpeaker>                       ChatterSpeakerType;                                       // 0x0178(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0179(0x0003) MISSED OFFSET
	float                                              PlaybackVolume;                                           // 0x017C(0x0004)
	float                                              PlaybackPitch;                                            // 0x0180(0x0004)
	struct FVector2D                                   ChatterTimeout;                                           // 0x0184(0x0008)
	unsigned long                                      bAlreadyQueuedLineToSpeak : 1;                            // 0x018C(0x0004)
	int                                                DialogueSessionId;                                        // 0x0190(0x0004)
};

// ScriptStruct HawkenGame.R_Modifier.ModValue_Mirror
// 0x0004
struct FModValue_Mirror
{
	int                                                Value;                                                    // 0x0000(0x0004) (Const, Native)
};

// ScriptStruct HawkenGame.R_Modifier.ModifierValue
// 0x0008
struct FModifierValue
{
	TEnumAsByte<EModifierValueType>                    Type;                                                     // 0x0000(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FModValue_Mirror                            Value;                                                    // 0x0004(0x0004) (Const, Native, Transient)
};

// ScriptStruct HawkenGame.R_PawnNative.RMovementStateVars
// 0x0030
struct FRMovementStateVars
{
	float                                              CurrentDodgeDistance;                                     // 0x0000(0x0004)
	float                                              JumpTime;                                                 // 0x0004(0x0004)
	float                                              SideBoostCooldown;                                        // 0x0008(0x0004)
	float                                              ForwardBoostFireCooldown;                                 // 0x000C(0x0004)
	float                                              BoostToAirTimer;                                          // 0x0010(0x0004)
	float                                              BaseThrusterJumpHeightTimer;                              // 0x0014(0x0004)
	struct FVector                                     OldVelocity;                                              // 0x0018(0x000C)
	float                                              SpecialMoveTimeRemaining;                                 // 0x0024(0x0004)
	float                                              TauntTime;                                                // 0x0028(0x0004)
	float                                              TimeSinceLastThrust;                                      // 0x002C(0x0004)
};

// ScriptStruct HawkenGame.R_PawnNative.SItemDebuff
// 0x0008
struct FSItemDebuff
{
	float                                              Time;                                                     // 0x0000(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x0004(0x0004)
};

// ScriptStruct HawkenGame.R_PawnNative.AttachmentEffects
// 0x0008
struct FAttachmentEffects
{
	TEnumAsByte<EHealBeamMode_e>                       TargetBeamMode;                                           // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0004(0x0004)
};

// ScriptStruct HawkenGame.R_PawnNative.Debuff
// 0x0010
struct FDebuff
{
	TEnumAsByte<EDebuffType_e>                         Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x0004(0x0004)
	float                                              EndTime;                                                  // 0x0008(0x0004)
	float                                              Amount;                                                   // 0x000C(0x0004)
};

// ScriptStruct HawkenGame.R_PawnNative.AIJumpState
// 0x0030
struct FAIJumpState
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	struct FVector                                     Start;                                                    // 0x0004(0x000C)
	struct FVector                                     End;                                                      // 0x0010(0x000C)
	struct FParabola                                   Parabola;                                                 // 0x001C(0x000C)
	struct FVector2D                                   InitialSpeed;                                             // 0x0028(0x0008)
};

// ScriptStruct HawkenGame.R_PawnNative.WeaponIndices
// 0x0004
struct FWeaponIndices
{
	unsigned char                                      Primary;                                                  // 0x0000(0x0001)
	unsigned char                                      Secondary;                                                // 0x0001(0x0001)
	unsigned char                                      FIllA;                                                    // 0x0002(0x0001)
	unsigned char                                      FillB;                                                    // 0x0003(0x0001)
};

// ScriptStruct HawkenGame.AIChatterManager.ChatterEventConfig
// 0x0018
struct FChatterEventConfig
{
	TEnumAsByte<ESpeechPriority>                       Priority;                                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PlayEvery;                                                // 0x0004(0x0004) (Edit)
	class USoundCue*                                   Sound;                                                    // 0x0008(0x0004) (Edit)
	float                                              TimeOutMin;                                               // 0x000C(0x0004) (Edit)
	float                                              TimeOutMax;                                               // 0x0010(0x0004) (Edit)
	unsigned long                                      bTriggerWithAudioDucking : 1;                             // 0x0014(0x0004) (Edit)
};

// ScriptStruct HawkenGame.AIChatterManager.AIChatterEventSetup
// 0x03F0
struct FAIChatterEventSetup
{
	struct FChatterEventConfig                         LandLightEffort;                                          // 0x0000(0x0018) (Edit)
	struct FChatterEventConfig                         MeleeAttackLargeEffort;                                   // 0x0018(0x0018) (Edit)
	struct FChatterEventConfig                         EvadeEffort;                                              // 0x0030(0x0018) (Edit)
	struct FChatterEventConfig                         BTRequest;                                                // 0x0048(0x0018) (Edit)
	struct FChatterEventConfig                         GenericChatter;                                           // 0x0060(0x0018) (Edit)
	struct FChatterEventConfig                         PainSmall;                                                // 0x0078(0x0018) (Edit)
	struct FChatterEventConfig                         PainMedium;                                               // 0x0090(0x0018) (Edit)
	struct FChatterEventConfig                         PainLarge;                                                // 0x00A8(0x0018) (Edit)
	struct FChatterEventConfig                         PainHuge;                                                 // 0x00C0(0x0018) (Edit)
	struct FChatterEventConfig                         DeathScream;                                              // 0x00D8(0x0018) (Edit)
	struct FChatterEventConfig                         SuddenDeathScream;                                        // 0x00F0(0x0018) (Edit)
	struct FChatterEventConfig                         AbyssDeathScream;                                         // 0x0108(0x0018) (Edit)
	struct FChatterEventConfig                         MeleeAttempt;                                             // 0x0120(0x0018) (Edit)
	struct FChatterEventConfig                         MeleeSuccess;                                             // 0x0138(0x0018) (Edit)
	struct FChatterEventConfig                         LowHealth;                                                // 0x0150(0x0018) (Edit)
	struct FChatterEventConfig                         HeavyDamage;                                              // 0x0168(0x0018) (Edit)
	struct FChatterEventConfig                         BumpedPlayer;                                             // 0x0180(0x0018) (Edit)
	struct FChatterEventConfig                         DamagedByTeammate;                                        // 0x0198(0x0018) (Edit)
	struct FChatterEventConfig                         GenericFail;                                              // 0x01B0(0x0018) (Edit)
	struct FChatterEventConfig                         GenericSuccess;                                           // 0x01C8(0x0018) (Edit)
	struct FChatterEventConfig                         Taunt;                                                    // 0x01E0(0x0018) (Edit)
	struct FChatterEventConfig                         UsedUp;                                                   // 0x01F8(0x0018) (Edit)
	struct FChatterEventConfig                         FailedToDamage_Shooting;                                  // 0x0210(0x0018) (Edit)
	struct FChatterEventConfig                         FailsafePlayerKill;                                       // 0x0228(0x0018) (Edit)
	struct FChatterEventConfig                         EnemyHint;                                                // 0x0240(0x0018) (Edit)
	struct FChatterEventConfig                         Thumped;                                                  // 0x0258(0x0018) (Edit)
	struct FChatterEventConfig                         SlomoSniped;                                              // 0x0270(0x0018) (Edit)
	struct FChatterEventConfig                         Kicked;                                                   // 0x0288(0x0018) (Edit)
	struct FChatterEventConfig                         Burning;                                                  // 0x02A0(0x0018) (Edit)
	struct FChatterEventConfig                         BeingAimedAtByPlayer;                                     // 0x02B8(0x0018) (Edit)
	struct FChatterEventConfig                         Dodge;                                                    // 0x02D0(0x0018) (Edit)
	struct FChatterEventConfig                         DamagedPlayer;                                            // 0x02E8(0x0018) (Edit)
	struct FChatterEventConfig                         SpottedEnemy_Alone;                                       // 0x0300(0x0018) (Edit)
	struct FChatterEventConfig                         SpottedEnemy_Team;                                        // 0x0318(0x0018) (Edit)
	struct FChatterEventConfig                         SpottedPlayer_Alone;                                      // 0x0330(0x0018) (Edit)
	struct FChatterEventConfig                         SpottedPlayer_Team;                                       // 0x0348(0x0018) (Edit)
	struct FChatterEventConfig                         Charge;                                                   // 0x0360(0x0018) (Edit)
	struct FChatterEventConfig                         PreFire;                                                  // 0x0378(0x0018) (Edit)
	struct FChatterEventConfig                         Fire;                                                     // 0x0390(0x0018) (Edit)
	struct FChatterEventConfig                         StillAlive;                                               // 0x03A8(0x0018) (Edit)
	struct FChatterEventConfig                         Stunned;                                                  // 0x03C0(0x0018) (Edit)
	struct FChatterEventConfig                         NomReaction;                                              // 0x03D8(0x0018) (Edit)
};

// ScriptStruct HawkenGame.AIChatterManager.ChatterDialogue
// 0x0018
struct FChatterDialogue
{
	TArray<struct FDialogueLine>                       Lines;                                                    // 0x0000(0x000C) (Edit, AlwaysInit, NeedCtorLink)
	float                                              TimeOut;                                                  // 0x000C(0x0004) (Edit)
	int                                                SessionId;                                                // 0x0010(0x0004) (Transient)
	float                                              NextAllowedPlayback;                                      // 0x0014(0x0004) (Transient)
};

// ScriptStruct HawkenGame.AIChatterManager.DialogueSet
// 0x000C
struct FDialogueSet
{
	TArray<struct FChatterDialogue>                    Dialogues;                                                // 0x0000(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct HawkenGame.HawkenTypes.ChatterSpeakerConfig
// 0x0008
struct FChatterSpeakerConfig
{
	TEnumAsByte<EChatterSpeaker>                       Speaker;                                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UChatterTemplate*                            SoundsSetup;                                              // 0x0004(0x0004) (Edit, EditInline, EditInlineUse)
};

// ScriptStruct HawkenGame.HawkenAi_ControllerBase.PerceptionStatusInfo
// 0x0004
struct FPerceptionStatusInfo
{
	float                                              Disruption;                                               // 0x0000(0x0004)
};

// ScriptStruct HawkenGame.HawkenAi_ControllerBase.SecondaryTarget
// 0x0018
struct FSecondaryTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0004)
	TScriptInterface<class UTargetable>                Targetable;                                               // 0x0004(0x0008)
	float                                              LastAttackTime;                                           // 0x000C(0x0004)
	float                                              TimeSelected;                                             // 0x0010(0x0004)
	float                                              Duration;                                                 // 0x0014(0x0004)
};

// ScriptStruct HawkenGame.HawkenAISystem.DelayedExplotion
// 0x0018
struct FDelayedExplotion
{
	class AGameExplosionActor*                         Explosion;                                                // 0x0000(0x0004)
	TArray<class AR_PawnNative*>                       PawnsToDamage;                                            // 0x0004(0x000C) (NeedCtorLink)
	float                                              TimeInBetweenExecutions;                                  // 0x0010(0x0004)
	float                                              NextExecution;                                            // 0x0014(0x0004)
};

// ScriptStruct HawkenGame.R_NPC_Template.NpcVisualInfo
// 0x0030
struct FNpcVisualInfo
{
	float                                              AccentHue;                                                // 0x0000(0x0004) (Edit)
	float                                              AccentSaturation;                                         // 0x0004(0x0004) (Edit)
	float                                              AccentValue;                                              // 0x0008(0x0004) (Edit)
	unsigned char                                      CamoPattern;                                              // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<unsigned char>                              RandomCamos;                                              // 0x0010(0x000C) (Edit, NeedCtorLink)
	unsigned char                                      CamoSaturation;                                           // 0x001C(0x0001) (Edit)
	unsigned char                                      CamoScale;                                                // 0x001D(0x0001) (Edit)
	unsigned char                                      LowerPart;                                                // 0x001E(0x0001) (Edit)
	unsigned char                                      MidPart;                                                  // 0x001F(0x0001) (Edit)
	unsigned char                                      UpperPart;                                                // 0x0020(0x0001) (Edit)
	unsigned char                                      ArmPart;                                                  // 0x0021(0x0001) (Edit)
	unsigned char                                      DroneType;                                                // 0x0022(0x0001) (Edit)
	unsigned char                                      HoloTauntType;                                            // 0x0023(0x0001) (Edit)
	unsigned char                                      AnimTauntType;                                            // 0x0024(0x0001) (Edit)
	unsigned char                                      BoosterPart;                                              // 0x0025(0x0001) (Edit)
	unsigned char                                      ArmorPart;                                                // 0x0026(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0027(0x0001) MISSED OFFSET
	unsigned long                                      bAccentUpper : 1;                                         // 0x0028(0x0004) (Edit)
	unsigned long                                      bAccentMid : 1;                                           // 0x0028(0x0004) (Edit)
	unsigned long                                      bAccentLower : 1;                                         // 0x0028(0x0004) (Edit)
	unsigned long                                      bAccentArms : 1;                                          // 0x0028(0x0004) (Edit)
	unsigned long                                      bPatternUpper : 1;                                        // 0x0028(0x0004) (Edit)
	unsigned long                                      bPatternMid : 1;                                          // 0x0028(0x0004) (Edit)
	unsigned long                                      bPatternLower : 1;                                        // 0x0028(0x0004) (Edit)
	unsigned long                                      bPatternArms : 1;                                         // 0x0028(0x0004) (Edit)
	float                                              Weight;                                                   // 0x002C(0x0004) (Edit)
};

// ScriptStruct HawkenGame.HawkenAIPluginMovement_MechSimple.Breadcrumb
// 0x000D
struct FBreadcrumb
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	TEnumAsByte<EBreadcrumbType>                       Type;                                                     // 0x000C(0x0001)
};

// ScriptStruct HawkenGame.HawkenPawnPluginWeapon_ProjectileAI.PluginProjectileInfo
// 0x0010
struct FPluginProjectileInfo
{
	int                                                Level;                                                    // 0x0000(0x0004) (Transient)
	class AR_Projectile*                               DefaultProjectile;                                        // 0x0004(0x0004) (Transient)
	float                                              Speed;                                                    // 0x0008(0x0004) (Transient)
	float                                              LifeSpan;                                                 // 0x000C(0x0004) (Transient)
};

// ScriptStruct HawkenGame.HawkenGameEngine.PerMapLoadingMovie
// 0x0018
struct FPerMapLoadingMovie
{
	struct FString                                     MapName;                                                  // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     MovieName;                                                // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.HawkenJumpNode.JumpNodeLink
// 0x002C
struct FJumpNodeLink
{
	struct FActorReference                             EndNode;                                                  // 0x0000(0x0014) (Edit, Const, EditConst)
	struct FParabola                                   Parabola;                                                 // 0x0014(0x000C) (Edit, Const, EditConst)
	float                                              Height;                                                   // 0x0020(0x0004) (Edit, Const)
	unsigned long                                      bBroken : 1;                                              // 0x0024(0x0004) (Edit)
	class APawn*                                       Claimer;                                                  // 0x0028(0x0004) (Transient)
};

// ScriptStruct HawkenGame.HawkenSquad.DestinationOffsetInfo
// 0x0010
struct FDestinationOffsetInfo
{
	float                                              Offset_x;                                                 // 0x0000(0x0004)
	float                                              Offset_y;                                                 // 0x0004(0x0004)
	class AHawkenAi_ControllerBase*                    OffsetClaimedBy;                                          // 0x0008(0x0004)
	float                                              LastTimeAccess;                                           // 0x000C(0x0004)
};

// ScriptStruct HawkenGame.HawkenSquad.CommonEnemyInfo
// 0x00A4
struct FCommonEnemyInfo
{
	class APawn*                                       Pawn;                                                     // 0x0000(0x0004)
	class AR_PawnNative*                               HawkenPawn;                                               // 0x0004(0x0004)
	struct FCoverInfo                                  Cover;                                                    // 0x0008(0x0008)
	struct FVector                                     KnownLocation;                                            // 0x0010(0x000C)
	float                                              InitialContact;                                           // 0x001C(0x0004)
	float                                              LastContact;                                              // 0x0020(0x0004)
	struct FDestinationOffsetInfo                      DestinationOffsets[0x8];                                  // 0x0024(0x0010)
};

// ScriptStruct HawkenGame.HawkenSquad.SquadMemberInfo
// 0x000C
struct FSquadMemberInfo
{
	class AController*                                 Member;                                                   // 0x0000(0x0004)
	class AHawkenAi_ControllerBase*                    AI;                                                       // 0x0004(0x0004)
	unsigned long                                      bLogicCombatWalk : 1;                                     // 0x0008(0x0004)
	unsigned long                                      bKismetCombatWalk : 1;                                    // 0x0008(0x0004)
};

// ScriptStruct HawkenGame.R_Mech_CamoPresets.SCamoPatternInfo
// 0x0024
struct FSCamoPatternInfo
{
	struct FString                                     DisplayName;                                              // 0x0000(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     loreText;                                                 // 0x000C(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     Description;                                              // 0x0018(0x000C) (Const, Localized, NeedCtorLink)
};

// ScriptStruct HawkenGame.R_NPC.AttachedEffectInfo
// 0x0010
struct FAttachedEffectInfo
{
	struct FName                                       FXSocket;                                                 // 0x0000(0x0008) (Edit)
	class UParticleSystem*                             FXRef;                                                    // 0x0008(0x0004) (Edit)
	class UParticleSystemComponent*                    FXComponent;                                              // 0x000C(0x0004) (ExportObject, Transient, Component, EditInline)
};

// ScriptStruct HawkenGame.R_NPC.HitEffectsInfo
// 0x001C
struct FHitEffectsInfo
{
	class APawn*                                       PawnHitInstigator;                                        // 0x0000(0x0004)
	struct FVector                                     HitLocation;                                              // 0x0004(0x000C)
	struct FVector                                     Momentum;                                                 // 0x0010(0x000C)
};

// ScriptStruct HawkenGame.R_NPC.CosmeticInfo
// 0x000C
struct FCosmeticInfo
{
	class UPrimitiveComponent*                         Component;                                                // 0x0000(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       Socket;                                                   // 0x0004(0x0008) (Edit)
};

// ScriptStruct HawkenGame.HawkenTypes.BodyStance
// 0x000C
struct FBodyStance
{
	TArray<struct FName>                               AnimName;                                                 // 0x0000(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct HawkenGame.HawkenTypes.SCoopUpgradeAllocations
// 0x0004
struct FSCoopUpgradeAllocations
{
	unsigned char                                      WeaponDamageUpgrades;                                     // 0x0000(0x0001)
	unsigned char                                      MaxArmorUpgrades;                                         // 0x0001(0x0001)
	unsigned char                                      HeatGenUpgrades;                                          // 0x0002(0x0001)
	unsigned char                                      pad1;                                                     // 0x0003(0x0001)
};

// ScriptStruct HawkenGame.HawkenTypes.BeamEffect
// 0x0028
struct FBeamEffect
{
	class AActor*                                      TargetActor;                                              // 0x0000(0x0004)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	struct FVector                                     Velocity;                                                 // 0x0010(0x000C)
	unsigned long                                      locked : 1;                                               // 0x001C(0x0004)
	unsigned long                                      Active : 1;                                               // 0x001C(0x0004)
	class UParticleSystemComponent*                    Effect;                                                   // 0x0020(0x0004) (ExportObject, Component, EditInline)
	float                                              Lifetime;                                                 // 0x0024(0x0004)
};

// ScriptStruct HawkenGame.HawkenTypes.MechProgressionInfo
// 0x0014
struct FMechProgressionInfo
{
	struct FString                                     MechId;                                                   // 0x0000(0x000C) (NeedCtorLink)
	int                                                OldXP;                                                    // 0x000C(0x0004)
	int                                                NewXP;                                                    // 0x0010(0x0004)
};

// ScriptStruct HawkenGame.R_Pawn.DeathAssistPlayerInfo
// 0x0008
struct FDeathAssistPlayerInfo
{
	class AR_PlayerReplicationInfo*                    AssisterRPRI;                                             // 0x0000(0x0004)
	float                                              Amount;                                                   // 0x0004(0x0004)
};

// ScriptStruct HawkenGame.R_Pawn.SMoveStateTracking
// 0x0009
struct FSMoveStateTracking
{
	float                                              AccumulatedTime;                                          // 0x0000(0x0004)
	float                                              TimeEnteredState;                                         // 0x0004(0x0004)
	TEnumAsByte<ERobotMoveState>                       MoveState;                                                // 0x0008(0x0001)
};

// ScriptStruct HawkenGame.R_Pawn.StatusFX
// 0x0040
struct FStatusFX
{
	struct FName                                       Socket_FP;                                                // 0x0000(0x0008)
	struct FName                                       Socket_TP[0x3];                                           // 0x0008(0x0008)
	class UParticleSystem*                             Template_FP;                                              // 0x0020(0x0004)
	class UParticleSystem*                             Template_TP[0x3];                                         // 0x0024(0x0004)
	class UUDKParticleSystemComponent*                 PSC_FP;                                                   // 0x0030(0x0004) (ExportObject, Component, EditInline)
	class UUDKParticleSystemComponent*                 PSC_TP[0x3];                                              // 0x0034(0x0004) (ExportObject, Component, EditInline)
};

// ScriptStruct HawkenGame.R_Pawn.TakeDamageEvent
// 0x0014
struct FTakeDamageEvent
{
	class AActor*                                      DamagingActor;                                            // 0x0000(0x0004)
	float                                              Rotation;                                                 // 0x0004(0x0004)
	float                                              Time;                                                     // 0x0008(0x0004)
	float                                              Distance;                                                 // 0x000C(0x0004)
	float                                              Damage;                                                   // 0x0010(0x0004)
};

// ScriptStruct HawkenGame.R_Pawn.FlashHitInfo
// 0x000D
struct FFlashHitInfo
{
	struct FVector                                     pos;                                                      // 0x0000(0x000C)
	unsigned char                                      Mode;                                                     // 0x000C(0x0001)
};

// ScriptStruct HawkenGame.R_Pawn.ChainEffects
// 0x000C
struct FChainEffects
{
	class AActor*                                      SrcActor;                                                 // 0x0000(0x0004)
	class AActor*                                      DstActor;                                                 // 0x0004(0x0004)
	unsigned long                                      bForceRep : 1;                                            // 0x0008(0x0004)
};

// ScriptStruct HawkenGame.R_CoOp.SCoopUpgradeInfo
// 0x0014
struct FSCoopUpgradeInfo
{
	TEnumAsByte<ECoopUpgradeCategory>                  UpgradeType;                                              // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                InitialCost;                                              // 0x0004(0x0004)
	int                                                CostIncrement;                                            // 0x0008(0x0004)
	float                                              ApplicationValue;                                         // 0x000C(0x0004)
	int                                                MaxUpgrades;                                              // 0x0010(0x0004)
};

// ScriptStruct HawkenGame.R_GameReplicationInfo.RewardInfo
// 0x0024
struct FRewardInfo
{
	struct FString                                     RewardOfferId;                                            // 0x0000(0x000C) (NeedCtorLink)
	unsigned long                                      bIsAlternateReward : 1;                                   // 0x000C(0x0004)
	int                                                RewardXP;                                                 // 0x0010(0x0004)
	struct FString                                     AchievementStat;                                          // 0x0014(0x000C) (NeedCtorLink)
	unsigned long                                      bRepeatable : 1;                                          // 0x0020(0x0004)
};

// ScriptStruct HawkenGame.R_GameReplicationInfo.SChallengeUIInfo
// 0x001C
struct FSChallengeUIInfo
{
	int                                                ChallengeIndex;                                           // 0x0000(0x0004)
	struct FString                                     RewardGUID;                                               // 0x0004(0x000C) (NeedCtorLink)
	TArray<struct FRewardInfo>                         RewardOfferIds;                                           // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.R_GameReplicationInfo.PostMatchFocus
// 0x0008
struct FPostMatchFocus
{
	TEnumAsByte<EPostMatchState_e>                     State;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class AActor*                                      Focus;                                                    // 0x0004(0x0004)
};

// ScriptStruct HawkenGame.R_GameReplicationInfo.PendingPlayer
// 0x0020
struct FPendingPlayer
{
	int                                                PlayerID;                                                 // 0x0000(0x0004)
	struct FUniqueNetId                                UniqueId;                                                 // 0x0004(0x0010)
	int                                                PilotLevel;                                               // 0x0014(0x0004)
	int                                                Skill;                                                    // 0x0018(0x0004)
	int                                                TeamNum;                                                  // 0x001C(0x0004)
};

// ScriptStruct HawkenGame.R_GameReplicationInfo.ChallengeInfo
// 0x0010
struct FChallengeInfo
{
	class UR_Challenge*                                Challenge;                                                // 0x0000(0x0004)
	TArray<class AR_PlayerReplicationInfo*>            ChallengeVoterList;                                       // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.R_PRI_Coop.ConsumableIndexSlotTuple
// 0x0002
struct FConsumableIndexSlotTuple
{
	unsigned char                                      ClassIndex;                                               // 0x0000(0x0001)
	unsigned char                                      SlotIndex;                                                // 0x0001(0x0001)
};

// ScriptStruct HawkenGame.R_PRI_Coop.ConsumablesSlotData
// 0x000C
struct FConsumablesSlotData
{
	struct FConsumableIndexSlotTuple                   Consumable1;                                              // 0x0000(0x0004)
	struct FConsumableIndexSlotTuple                   Consumable2;                                              // 0x0004(0x0004)
	struct FConsumableIndexSlotTuple                   Consumable3;                                              // 0x0008(0x0004)
};

// ScriptStruct HawkenGame.R_HUD.QueuedBigMessage
// 0x0018
struct FQueuedBigMessage
{
	struct FString                                     Message;                                                  // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     MsgColor;                                                 // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.R_HUD.SVoiceChatter
// 0x000C
struct FSVoiceChatter
{
	class USoundCue*                                   VoiceCue;                                                 // 0x0000(0x0004) (Const)
	float                                              TimeBetweenPlays;                                         // 0x0004(0x0004) (Const)
	float                                              LastPlayTime;                                             // 0x0008(0x0004)
};

// ScriptStruct HawkenGame.R_HUD.SMusicEvent
// 0x0005
struct FSMusicEvent
{
	class USoundCue*                                   MusicCue;                                                 // 0x0000(0x0004)
	TEnumAsByte<EMusicPriority>                        Priority;                                                 // 0x0004(0x0001)
};

// ScriptStruct HawkenGame.R_BotsTDM.DifficultyModifiers
// 0x0010
struct FDifficultyModifiers
{
	unsigned long                                      bValid : 1;                                               // 0x0000(0x0004) (Transient)
	TArray<class UR_PawnModifier*>                     Modifiers;                                                // 0x0004(0x000C) (Transient, NeedCtorLink)
};

// ScriptStruct HawkenGame.HawkenHUD_DebugAI.CategoryBox
// 0x0038
struct FCategoryBox
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Opt;                                                      // 0x000C(0x000C) (NeedCtorLink)
	float                                              Width;                                                    // 0x0018(0x0004)
	float                                              Height;                                                   // 0x001C(0x0004)
	float                                              X;                                                        // 0x0020(0x0004)
	float                                              Y;                                                        // 0x0024(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x0028(0x0004)
	unsigned long                                      bWithoutTarget : 1;                                       // 0x0028(0x0004)
	unsigned long                                      bDontDim : 1;                                             // 0x0028(0x0004)
	struct FScriptDelegate                             DrawFunc;                                                 // 0x002C(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.HawkenHUD_DebugAI.LogFilter
// 0x0010
struct FLogFilter
{
	unsigned long                                      bShow : 1;                                                // 0x0000(0x0004)
	struct FName                                       Label;                                                    // 0x0004(0x0008)
	int                                                ColorSet;                                                 // 0x000C(0x0004)
};

// ScriptStruct HawkenGame.R_BT_NPC_Manager.NPCGroup
// 0x001C
struct FNPCGroup
{
	class UR_NPC_Template*                             TemplateToBuildNpcFrom;                                   // 0x0000(0x0004) (Edit)
	TEnumAsByte<EDefaultNpcBehavior>                   Behavior;                                                 // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                MaxSpawned;                                               // 0x0008(0x0004) (Edit)
	int                                                MaxActive;                                                // 0x000C(0x0004) (Edit)
	int                                                NumSpawned;                                               // 0x0010(0x0004)
	int                                                NumActive;                                                // 0x0014(0x0004)
	float                                              TimeTilRespawn;                                           // 0x0018(0x0004)
};

// ScriptStruct HawkenGame.R_BT_NPC_Manager.FillNPCSlotData
// 0x0014
struct FFillNPCSlotData
{
	int                                                FillNPCIndexToBuildFrom;                                  // 0x0000(0x0004)
	class AHawkenAi_ControllerBase*                    CtrlInThisSpot;                                           // 0x0004(0x0004)
	int                                                NumOfTimesSpawned;                                        // 0x0008(0x0004)
	int                                                NumOfRespawns;                                            // 0x000C(0x0004)
	float                                              TimeOfNextRespawn;                                        // 0x0010(0x0004)
};

// ScriptStruct HawkenGame.R_BT_NPC_Manager.FillNPC
// 0x0018
struct FFillNPC
{
	class UR_NPC_Template*                             TemplateToBuildNpcFrom;                                   // 0x0000(0x0004) (Edit)
	TEnumAsByte<EDefaultNpcBehavior>                   Behavior;                                                 // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                NumOfRespawns;                                            // 0x0008(0x0004) (Edit)
	float                                              DelayBetweenRespawns;                                     // 0x000C(0x0004) (Edit)
	int                                                TeamIndex;                                                // 0x0010(0x0004) (Edit)
	unsigned long                                      bFirstSpawn : 1;                                          // 0x0014(0x0004) (Edit)
};

// ScriptStruct HawkenGame.R_BT_NPC_Manager.WaveOfNpcs
// 0x001C
struct FWaveOfNpcs
{
	int                                                NumOfTimesToRepeatWave;                                   // 0x0000(0x0004) (Edit)
	int                                                NumOfTimesWaveCompleted;                                  // 0x0004(0x0004)
	TArray<struct FNPCGroup>                           Groups;                                                   // 0x0008(0x000C) (Edit, NeedCtorLink)
	float                                              AdditionalDelayBeforeRepeatingWave;                       // 0x0014(0x0004) (Edit)
	float                                              TimeToReStartWave;                                        // 0x0018(0x0004)
};

// ScriptStruct HawkenGame.HawkenGameStateObject.HawkenTeamState
// 0x0000 (0x0010 - 0x0010)
struct FHawkenTeamState : public FTeamState
{

};

// ScriptStruct HawkenGame.HawkenGameStateObject.HawkenPlayerState
// 0x0048 (0x0058 - 0x0010)
struct FHawkenPlayerState : public FPlayerState
{
	float                                              BoostStartTime;                                           // 0x0010(0x0004)
	float                                              BoostSpeed;                                               // 0x0014(0x0004)
	struct FVector                                     BoostStartLocation;                                       // 0x0018(0x000C)
	struct FVector                                     BoostEndLocation;                                         // 0x0024(0x000C)
	float                                              LastBoostDuration;                                        // 0x0030(0x0004)
	float                                              DodgeStartTime;                                           // 0x0034(0x0004)
	float                                              DodgeSpeed;                                               // 0x0038(0x0004)
	struct FVector                                     DodgeStartLocation;                                       // 0x003C(0x000C)
	struct FVector                                     DodgeEndLocation;                                         // 0x0048(0x000C)
	float                                              LastDodgeDuration;                                        // 0x0054(0x0004)
};

// ScriptStruct HawkenGame.R_Gfx_Visor.SPlayerNeedsAssistance
// 0x0008
struct FSPlayerNeedsAssistance
{
	float                                              timeRequested;                                            // 0x0000(0x0004)
	class APawn*                                       P;                                                        // 0x0004(0x0004)
};

// ScriptStruct HawkenGame.R_Gfx_Visor.BonusIndicator
// 0x001C
struct FBonusIndicator
{
	class UGFxObject*                                  Clip;                                                     // 0x0000(0x0004) (AlwaysInit)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (AlwaysInit)
	float                                              TimeToLast;                                               // 0x0010(0x0004) (AlwaysInit)
	float                                              IntialTime;                                               // 0x0014(0x0004) (AlwaysInit)
	unsigned long                                      bActive : 1;                                              // 0x0018(0x0004) (AlwaysInit)
};

// ScriptStruct HawkenGame.R_Gfx_Visor.GuidingIndicator
// 0x0008
struct FGuidingIndicator
{
	class UGFxObject*                                  Clip;                                                     // 0x0000(0x0004) (AlwaysInit)
	class UGFxObject*                                  Params;                                                   // 0x0004(0x0004) (AlwaysInit)
};

// ScriptStruct HawkenGame.R_Gfx_Visor.Scrambler
// 0x0018
struct FScrambler
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	float                                              Speed;                                                    // 0x000C(0x0004)
	float                                              degrees;                                                  // 0x0010(0x0004)
	class UGFxObject*                                  Clip;                                                     // 0x0014(0x0004)
};

// ScriptStruct HawkenGame.R_GFx_Reticle.ReticleDrawParameters
// 0x0040
struct FReticleDrawParameters
{
	float                                              DrawX;                                                    // 0x0000(0x0004)
	float                                              DrawY;                                                    // 0x0004(0x0004)
	float                                              DrawX2;                                                   // 0x0008(0x0004)
	float                                              DrawY2;                                                   // 0x000C(0x0004)
	float                                              DrawZ;                                                    // 0x0010(0x0004)
	float                                              SizeX;                                                    // 0x0014(0x0004)
	float                                              SizeY;                                                    // 0x0018(0x0004)
	float                                              ScaleX;                                                   // 0x001C(0x0004)
	float                                              ScaleY;                                                   // 0x0020(0x0004)
	float                                              DrawU;                                                    // 0x0024(0x0004)
	float                                              DrawV;                                                    // 0x0028(0x0004)
	float                                              DrawUL;                                                   // 0x002C(0x0004)
	float                                              DrawVL;                                                   // 0x0030(0x0004)
	struct FRotator                                    Rotation;                                                 // 0x0034(0x000C)
};

// ScriptStruct HawkenGame.R_MechSubType_Base.SMechFamilyData
// 0x0010
struct FSMechFamilyData
{
	struct FString                                     DisplayName;                                              // 0x0000(0x000C) (Const, Localized, NeedCtorLink)
	int                                                ColumnOrder;                                              // 0x000C(0x0004) (Const)
};

// ScriptStruct HawkenGame.R_CoopGRI.DeadTeammateInfo
// 0x0018
struct FDeadTeammateInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x000C) (NeedCtorLink)
	struct FVector                                     DeathLocation;                                            // 0x000C(0x000C)
};

// ScriptStruct HawkenGame.R_NPC_Manager.NPCGroupData
// 0x0034
struct FNPCGroupData
{
	class AR_PawnBase*                                 ArchetypeNPC;                                             // 0x0000(0x0004) (Edit)
	class UR_NPC_Template*                             TemplateToBuildMechFrom;                                  // 0x0004(0x0004) (Edit, ExportObject, NeedCtorLink, EditInline)
	int                                                MaxSpawned;                                               // 0x0008(0x0004) (Edit)
	int                                                MaxActive;                                                // 0x000C(0x0004) (Edit)
	TArray<class AR_SpawningVolume*>                   GroupSpawnVolumes;                                        // 0x0010(0x000C) (Edit, NeedCtorLink)
	class AR_SpawningVolume*                           EnforceSafeCollisionVolume;                               // 0x001C(0x0004) (Edit)
	float                                              MinRespawnTime;                                           // 0x0020(0x0004) (Edit)
	TEnumAsByte<EeBehavior>                            Behavior;                                                 // 0x0024(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	int                                                NumSpawned;                                               // 0x0028(0x0004)
	int                                                NumActive;                                                // 0x002C(0x0004)
	float                                              LastRespawnTime;                                          // 0x0030(0x0004)
};

// ScriptStruct HawkenGame.R_NPC_Manager.WaveData
// 0x0018
struct FWaveData
{
	float                                              TimeTilNextWave;                                          // 0x0000(0x0004) (Edit)
	unsigned long                                      bIsBossWave : 1;                                          // 0x0004(0x0004) (Edit)
	TArray<struct FNPCGroupData>                       Groups;                                                   // 0x0008(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bCompleted : 1;                                           // 0x0014(0x0004)
};

// ScriptStruct HawkenGame.R_NPC_Weapon.TraceRepInfo
// 0x0074
struct FTraceRepInfo
{
	struct FVector                                     HitLoc;                                                   // 0x0000(0x000C)
	struct FVector                                     EndLoc;                                                   // 0x000C(0x000C)
	struct FVector                                     StartLoc;                                                 // 0x0018(0x000C)
	struct FImpactInfo                                 Impact;                                                   // 0x0024(0x0050) (Component)
};

// ScriptStruct HawkenGame.HawkenSeqAct_AISetBehaviorScheme.AIETQQueriesSet
// 0x0018
struct FAIETQQueriesSet
{
	struct FName                                       EnemySelection;                                           // 0x0000(0x0008) (Edit)
	struct FName                                       CoverSelection;                                           // 0x0008(0x0008) (Edit)
	struct FName                                       CoverAdjusting;                                           // 0x0010(0x0008) (Edit)
};

// ScriptStruct HawkenGame.R_RevivalMarker.RevivalSetupData
// 0x0014
struct FRevivalSetupData
{
	int                                                ArmsIdx;                                                  // 0x0000(0x0004)
	int                                                TorsoIdx;                                                 // 0x0004(0x0004)
	int                                                MidIdx;                                                   // 0x0008(0x0004)
	int                                                LowerIdx;                                                 // 0x000C(0x0004)
	int                                                ThrusterIdx;                                              // 0x0010(0x0004)
};

// ScriptStruct HawkenGame.R_CheatManager.PlayerStartRatingInfo
// 0x0008
struct FPlayerStartRatingInfo
{
	class APlayerStart*                                PS;                                                       // 0x0000(0x0004)
	float                                              Rating;                                                   // 0x0004(0x0004)
};

// ScriptStruct HawkenGame.R_BotPopulationDefinition.BotTypeInfo
// 0x0008
struct FBotTypeInfo
{
	class UR_NPC_Template*                             BotTemplate;                                              // 0x0000(0x0004) (Edit)
	float                                              Weight;                                                   // 0x0004(0x0004) (Edit)
};

// ScriptStruct HawkenGame.R_BotsTDMDefinition.BotDifficultyBucket
// 0x000C
struct FBotDifficultyBucket
{
	int                                                MinMMR;                                                   // 0x0000(0x0004) (Edit)
	float                                              Accuracy;                                                 // 0x0004(0x0004) (Edit)
	float                                              Maneuverability;                                          // 0x0008(0x0004) (Edit)
};

// ScriptStruct HawkenGame.R_CalloutManager.CalloutImageData
// 0x0018
struct FCalloutImageData
{
	struct FString                                     ImageId;                                                  // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     ImagePath;                                                // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.R_DataStore_GameSearchDM.PersistentLocalizedSettingValue
// 0x0008
struct UR_DataStore_GameSearchDM_FPersistentLocalizedSettingValue
{
	int                                                SettingId;                                                // 0x0000(0x0004) (Config)
	int                                                ValueId;                                                  // 0x0004(0x0004) (Config)
};

// ScriptStruct HawkenGame.R_DataStore_GameSearchDM.GameSearchSettingsStorage
// 0x0014
struct UR_DataStore_GameSearchDM_FGameSearchSettingsStorage
{
	struct FName                                       GameSearchName;                                           // 0x0000(0x0008) (Config)
	TArray<struct UR_DataStore_GameSearchDM_FPersistentLocalizedSettingValue> StoredValues;                                             // 0x0008(0x000C) (Config, NeedCtorLink)
};

// ScriptStruct HawkenGame.R_DataStore_GameSearchSiege.PersistentLocalizedSettingValue
// 0x0008
struct UR_DataStore_GameSearchSiege_FPersistentLocalizedSettingValue
{
	int                                                SettingId;                                                // 0x0000(0x0004) (Config)
	int                                                ValueId;                                                  // 0x0004(0x0004) (Config)
};

// ScriptStruct HawkenGame.R_DataStore_GameSearchSiege.GameSearchSettingsStorage
// 0x0014
struct UR_DataStore_GameSearchSiege_FGameSearchSettingsStorage
{
	struct FName                                       GameSearchName;                                           // 0x0000(0x0008) (Config)
	TArray<struct UR_DataStore_GameSearchSiege_FPersistentLocalizedSettingValue> StoredValues;                                             // 0x0008(0x000C) (Config, NeedCtorLink)
};

// ScriptStruct HawkenGame.R_DataStore_GameSearchTDM.PersistentLocalizedSettingValue
// 0x0008
struct UR_DataStore_GameSearchTDM_FPersistentLocalizedSettingValue
{
	int                                                SettingId;                                                // 0x0000(0x0004) (Config)
	int                                                ValueId;                                                  // 0x0004(0x0004) (Config)
};

// ScriptStruct HawkenGame.R_DataStore_GameSearchTDM.GameSearchSettingsStorage
// 0x0014
struct UR_DataStore_GameSearchTDM_FGameSearchSettingsStorage
{
	struct FName                                       GameSearchName;                                           // 0x0000(0x0008) (Config)
	TArray<struct UR_DataStore_GameSearchTDM_FPersistentLocalizedSettingValue> StoredValues;                                             // 0x0008(0x000C) (Config, NeedCtorLink)
};

// ScriptStruct HawkenGame.R_PreviewCockpit.DecorationPreviewData
// 0x000C
struct FDecorationPreviewData
{
	int                                                Idx;                                                      // 0x0000(0x0004)
	float                                              PreviewTime;                                              // 0x0004(0x0004)
	unsigned long                                      bPlaying : 1;                                             // 0x0008(0x0004)
};

// ScriptStruct HawkenGame.R_Weap_ChargeCannon.ChainDamage
// 0x0030
struct FChainDamage
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	int                                                NumActorsHit;                                             // 0x0004(0x0004)
	class AActor*                                      HitActors[0x4];                                           // 0x0008(0x0004)
	float                                              Damage[0x4];                                              // 0x0018(0x0004)
	float                                              Radius;                                                   // 0x0028(0x0004)
	float                                              BounceTime;                                               // 0x002C(0x0004)
};

// ScriptStruct HawkenGame.R_GFx_MechMenu_Base.SProgressionUnlockCardInfo
// 0x0048
struct FSProgressionUnlockCardInfo
{
	struct FString                                     DisplayName;                                              // 0x0000(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     Description;                                              // 0x000C(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     loreText;                                                 // 0x0018(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     Title;                                                    // 0x0024(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     unlockExplanation;                                        // 0x0030(0x000C) (Const, Localized, NeedCtorLink)
	TEnumAsByte<EProgressionUnlockCategory>            unlockCategory;                                           // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	class UTexture2D*                                  smallIcon;                                                // 0x0040(0x0004)
	class UTexture2D*                                  actionIcon;                                               // 0x0044(0x0004)
};

// ScriptStruct HawkenGame.R_GameplayTips.SGameplayTip
// 0x000C
struct FSGameplayTip
{
	struct FString                                     TipText;                                                  // 0x0000(0x000C) (Const, Localized, NeedCtorLink)
};

// ScriptStruct HawkenGame.R_GFxHUDKeybindDialog.KeyConnectorElement
// 0x0008
struct FKeyConnectorElement
{
	class UGFxObject*                                  ElementObj;                                               // 0x0000(0x0004) (Transient)
	class UTexture*                                    ElementImageRef;                                          // 0x0004(0x0004) (Transient)
};

// ScriptStruct HawkenGame.R_Gib.StaticMeshDatum
// 0x0010
struct FStaticMeshDatum
{
	class UStaticMesh*                                 TheStaticMesh;                                            // 0x0000(0x0004)
	class USkeletalMesh*                               TheSkelMesh;                                              // 0x0004(0x0004)
	class UPhysicsAsset*                               ThePhysAsset;                                             // 0x0008(0x0004)
	class UParticleSystem*                             CustomEffect;                                             // 0x000C(0x0004)
};

// ScriptStruct HawkenGame.R_SE_ModifySpeedByHealth.SHealthSpeedVals
// 0x0010
struct FSHealthSpeedVals
{
	float                                              HealthPercent;                                            // 0x0000(0x0004)
	float                                              RunSpeedMultiplier;                                       // 0x0004(0x0004)
	float                                              BoostSpeedMultiplier;                                     // 0x0008(0x0004)
	float                                              DodgeSpeedMultiplier;                                     // 0x000C(0x0004)
};

// ScriptStruct HawkenGame.SeqAct_AddKeybindString.InstructionChunk
// 0x0030
struct FInstructionChunk
{
	struct FString                                     InstructionText;                                          // 0x0000(0x000C) (Edit, Const, Localized, NeedCtorLink)
	unsigned long                                      bAppendConnector : 1;                                     // 0x000C(0x0004)
	unsigned long                                      bIsKeyBind : 1;                                           // 0x000C(0x0004) (Edit)
	struct FString                                     KeybindCommand;                                           // 0x0010(0x000C) (Edit, NeedCtorLink)
	struct FString                                     KeyConnector;                                             // 0x001C(0x000C) (Edit, NeedCtorLink)
	class UTexture*                                    ConnectorImage;                                           // 0x0028(0x0004) (Edit)
	int                                                LineNumber;                                               // 0x002C(0x0004) (Edit)
};

// ScriptStruct HawkenGame.TestCommandlet.MapVerificationNub
// 0x0018
struct FMapVerificationNub
{
	struct FString                                     MapName;                                                  // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     ExpectedGameType;                                         // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct HawkenGame.TestCommandlet.StructWithObjTest
// 0x0004
struct FStructWithObjTest
{
	class UObject*                                     StructObj;                                                // 0x0000(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
