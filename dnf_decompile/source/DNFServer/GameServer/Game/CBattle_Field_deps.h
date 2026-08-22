#ifndef DNF_GAME_CBATTLE_FIELD_DEPS_H_
#define DNF_GAME_CBATTLE_FIELD_DEPS_H_

// CBattle_Field 外部依赖最小声明（G2-4 专属；CParty/CDungeon/CMap 等真实头
// 由并行批次交付后，本文件内对应声明可删除并改为 include 权威头）。
// 各方法签名 mangled 名与 ORIG df_game_r 符号一致（用于最终链接解析）。
// 注意：CMap.h（并行批次）与 CBattle_Field.h 均定义了 _mapMonster/_mapItem/
// STAssignBloodSystem 等，集成时需统一（本文件/头以 ORIG 构造体为准）。

#include <list>
#include <map>
#include <string>
#include <utility>
#include <vector>

#include "ActiveStaticInfo.h"
#include "CClearCondition.h"
#include "CDataManager.h"
#include "CSystemTime.h"
#include "CUser.h"
#include "CDungeon.h"
#include "CRidable.h"
#include "GameWorld.h"
#include "TimerQueue.h"

class CUser;
class CUserCharacInfo;
class CDataManager;
class CGameManager;
class CWorldMap;
class CMap;
class CDungeon;
class CParty;
class PacketGuard;
class Inven_Item;
class CItem;
class CMonster;
class CEquipItem;
class BlueMarble;
class CExpandEquipslot;

struct MapInfo;
struct map_monster;
struct map_item;
struct _mapMonster;
struct _mapItem;

// ---- 枚举（tag 名与 ORIG mangled 名一致，值占位，按使用点常量比对） ----
#ifndef DNF_ENUM_ENUM_DUNGEON_TYPE_DEFINED
#define DNF_ENUM_ENUM_DUNGEON_TYPE_DEFINED
enum ENUM_DUNGEON_TYPE { ENUM_DUNGEON_TYPE_0 = 0 };
#endif
#ifndef DNF_ENUM_ENUM_DUNGEON_MODE_DEFINED
#define DNF_ENUM_ENUM_DUNGEON_MODE_DEFINED
enum ENUM_DUNGEON_MODE { ENUM_DUNGEON_MODE_0 = 0 };
#endif
enum ENUM_DUNGEON_DIFFICULTY { ENUM_DUNGEON_DIFFICULTY_0 = 0 };
enum ENUM_BLOOD_STATE { ENUM_BLOOD_STATE_0 = 0 };
#ifndef DNF_ENUM_ENUM_MAZE_QUEST_TYPE_DEFINED
#define DNF_ENUM_ENUM_MAZE_QUEST_TYPE_DEFINED
enum ENUM_MAZE_QUEST_TYPE { ENUM_MAZE_QUEST_TYPE_0 = 0 };
#endif
#ifndef DNF_ENUM_ENUM_PREMIUM_TYPE_DEFINED
#define DNF_ENUM_ENUM_PREMIUM_TYPE_DEFINED
enum ENUM_PREMIUM_TYPE { ENUM_PREMIUM_TYPE_0 = 0 };
#endif
#ifndef DNF_ENUM_ERIDABLEOBJECTSTATE_DEFINED
#define DNF_ENUM_ERIDABLEOBJECTSTATE_DEFINED
enum eRidableObjectState { eRidableObjectState_0 = 0 };
#endif

namespace QuickParty
{
#ifndef DNF_ENUM_QUICKPARTY_RANDOMBUFFDUNGEON_DEFINED
#define DNF_ENUM_QUICKPARTY_RANDOMBUFFDUNGEON_DEFINED
enum RandomBuffDungeon { RandomBuffDungeon_0 = 0 };
#endif

class CQuickPartyRewardManager
{
public:
    std::vector<int>& get_dungeon_idx_list();  // ORIG T 0x826d896
};
}

// GridScript、MazeScript、RidableScript 等迷宫类型使用 CDungeon.h 的权威定义。

// ---- CBattle_Field / MapInfo 支撑结构 ----

// 6 个 int（0x18 字节）：技能材料/连杀检查（ORIG init 0x81512ec 实证）
struct stMapMonsterKillChecker_t
{
    unsigned int m_useSkillMaterialTime;   // +0x00
    unsigned int m_lastMobDieTime;         // +0x04
    int m_uncontinuallyMobDieCnt;          // +0x08
    int m_dieCnt;                          // +0x0c
    int m_field10;                         // +0x10
    int m_field14;                         // +0x14

    void init();                           // ORIG W 0x81512ec
    void initMonsterInfo();                // ORIG W 0x830e71c
    void setUseSkillMaterial(unsigned int tick);   // ORIG W 0x830e72c
    unsigned int getUseSkillMaterialTime() const;  // ORIG W 0x830e78c
    int getUseSkillMaterialCount() const;          // ORIG W 0x822cb86
    int dieMonster(unsigned int tick, unsigned int limit);       // ORIG W 0x830e748
    void setLastMobDieTime(unsigned int tick);     // ORIG W 0x830e796
    int checkLongTermMobDie(unsigned int tick, unsigned int limit);  // ORIG W 0x830e7a4
    void setUncontinuallyMobDieCnt(unsigned int cnt);      // ORIG W 0x830e7dc
};

// 4 个 int（0x10 字节）：地图游玩计时（ORIG init 0x815132c 实证）
struct stMapPlayInfo_t
{
    unsigned int m_startTick;   // +0x00
    unsigned int m_clearTick;   // +0x04
    int m_useItemType2Count;    // +0x08
    int m_useItemOtherCount;    // +0x0c

    void init();                             // ORIG W 0x815132c
    unsigned int getPlayTick() const;        // ORIG W 0x830e7ea
};


struct STAICharacterMapArrangeData
{
    int m_type;        // +0x00
    char m_pad4[0xc];  // +0x04
    int m_level;       // +0x10
    int m_roleType;    // +0x14
    int m_field18;     // +0x18
    char m_unk19;      // +0x19
    char m_pad1a[0x1e];
};  // 0x38 字节（vector size 除数实证）

struct STHellPartyGroupRate
{
    int m_groupIdx;      // +0x00
    int m_rate;          // +0x04
    char m_difficulty;   // +0x08
    char m_pad9[3];
};

struct STHellPartyGroupOrder
{
    unsigned short m_groupIdx;    // +0x00
    unsigned short m_pad2;        // +0x02
    unsigned short m_rateByDifficulty[6];  // +0x04（每难度出现权重）
    std::list<STHellPartyGroupRate> m_rates;  // +0x10
};

// kill_monster 输入（ORIG 布局：+0 ushort uid、+2 ushort、+4 char、+8 int、
// +0xc int、+0x10/+0x11 char、+0x14 float）
struct STKillMonsterData
{
    unsigned short m_monsterUid;  // +0x00
    unsigned short m_mapIndex;    // +0x02
    char m_dieReason;             // +0x04
    char m_pad5[3];               // +0x05
    int m_field08;                // +0x08
    int m_field0c;                // +0x0c
    char m_flag10;                // +0x10
    char m_flag11;                // +0x11
    char m_pad12[2];              // +0x12
    float m_field14;              // +0x14
};

struct MONSTER_POS
{
    char x;  // +0x00
    char y;  // +0x01
};
bool operator==(const MONSTER_POS& a, const MONSTER_POS& b);  // ORIG 0x830e6e9

// ---- 全局函数 ----
TimerQueue* G_TimerQueue();  // ORIG W 0x80f647c

class CGameManager
{
public:
    static void* GetParty(CGameManager* mgr);
    static void* GetWarRoom(CGameManager* mgr);
    static QuickParty::CQuickPartyRewardManager* GetQuickPartyRewardManager();  // ORIG T 0x8298e24
};

extern CGameManager* G_CGameManager();  // ORIG 0x??

class CWorldMap
{
public:
    bool IsInHellDungeon() const;  // ORIG W 0x830e6ba
};

class CLuckPoint
{
public:
    int GetUserGainItem(int idx);  // ORIG 0x??（_MakeDropItems 使用）
};

namespace WongWork
{

// stGenerateRefData_t（≥0x44 字节；WongWork/掉落批交付前仅声明必要字段）
struct stGenerateRefData_t
{
    char m_pad0[0x20];
    int m_premiumDropRate;      // +0x20（setPremiumDropRate 写）
    char m_pad24[0x1c];         // +0x24
    char m_flag40;              // +0x40（setPremiumDropRate 读）

    stGenerateRefData_t();
    ~stGenerateRefData_t();
};

struct stGenerateResult_t
{
    char m_pad[0xc];
    stGenerateResult_t();
    ~stGenerateResult_t();
};

class CDeathTower
{
public:
    unsigned int genTimerKey(TIMER_MESSAGE msg);  // ORIG W 0x830edd2
    int getIdx();                                 // ORIG W 0x82a7586
};

class CItemGeneratorMgr;  // 权威定义见 CItemGeneratorMgr.h（经 CDataManager.h 传递包含）

}  // namespace WongWork

class CAICharacter
{
public:
    unsigned char getLevel() const;  // ORIG 0x??
    unsigned int getIdx() const;     // ORIG 0x??
    int getAppearancePoint() const;  // ORIG 0x??
};

class CMonster
{
public:
    static void* getMonsterScript(CMonster* self);  // ORIG 0x??（set_monster_ability 使用）
};

struct STMonsterScript
{
    char m_pad[0x7c];
    std::vector<int> m_vec7c;  // +0x7c（upgradeAbilityByMonsterParameterCategory 参数）
};

class CEventManager
{
public:
    static void* GetRepeatEvent(void* mgr, int eventId);  // ORIG 0x??
};

class CGlobalEffectManager
{
public:
    static bool isAffectedEffect(void* mgr, int effectId);  // ORIG 0x??
    static double getEffectValue(void* mgr, int effectId);  // ORIG 0x??
};

class CHellPartyItemStatistic
{
public:
    static CHellPartyItemStatistic* GetInstanceHellPartyItemStatistic();  // ORIG 0x??
    static bool SendHellPartyItemStatistic(CHellPartyItemStatistic* self,
                                           bool bRandom, int dungeonIdx, int diff,
                                           int dropCnt, char difficulty, int* statistic);
};

class CKillMonsterInfo
{
public:
    bool CheckBossKill(int mobIdx, int diff);
    bool RegisterBossKill(int mobIdx, int diff);
    bool CheckAPCBossKill(int mobIdx, int diff);
    bool RegisterAPCBossKill(int mobIdx, int diff);
    bool CheckNamedKill(int mobIdx, int diff);
    bool RegisterNamedKill(int mobIdx, int diff);
};

namespace village_attacked
{
class CVillageMonsterMgr
{
public:
    void OnKillVillageMonster(int a, int b, unsigned short c, bool d);  // ORIG 0x??
};
}

class TOD_Layer
{
public:
    static unsigned short GetLayer(TOD_Layer* layers);  // ORIG 0x??
};

class TOD_UserState
{
public:
    static int getTodayEnterLayer();  // ORIG 0x??
};

// ---- 自由函数（怪物能力/掉落系统，ORIG 符号位于其它 TU） ----
void setBasicAbilityByLevel(STMonsterScript* script, ActiveStaticInfo* info,
                            unsigned int level, int dungeonIdx, int roleType,
                            bool a, bool b);
void upgradeAbilityByMonsterParameterCategory(std::vector<int>& vec,
                                              ActiveStaticInfo* info,
                                              bool isChampion);
void upgradeAbilityByDifficultyOfDungeon(int diff, ActiveStaticInfo* info,
                                         unsigned int level, std::vector<int>& vec);
void upgradeAbilityByBossFeature(ActiveStaticInfo* info);
int getRandomChampionElement(STMonsterScript* script, int seed);
void makeChampionFeatureList(std::vector<int>& out, unsigned int level, int seed,
                             std::vector<int>& tmp, int diff);
void upgradeAbilityByChampionFeature(int elem, int roleType, std::vector<int>& vec,
                                     ActiveStaticInfo* info);

bool addUserHackCount149(CUser* user);  // ORIG 0x??（enumPartyMember 回调）
bool addUserHackCount150(CUser* user);

// ---- 全局对象（GlobalData 静态成员；避免同时 include GlobalData.h 与
//      CUser.h/CUserCharacInfo.h 的 class/namespace 冲突，用 asm label 直引） ----
// CSystemTime 用 CUserCharacInfo.h 的 namespace GlobalData::s_systemTime_。
extern CEventManager* GlobalData_s_event_manager
    asm("_ZN10GlobalData15s_event_managerE");
extern village_attacked::CVillageMonsterMgr* GlobalData_s_villageMonsterMgr
    asm("_ZN10GlobalData19s_villageMonsterMgrE");
extern CGlobalEffectManager* GlobalData_s_globalEffectManager_
    asm("_ZN10GlobalData22s_globalEffectManager_E");

// ---- 缺失方法符号的直接引用（asm label 固定为 ORIG mangled 名；
//     避免修改 CDataManager.h / CUser.h） ----
extern WongWork::CItemGeneratorMgr* cbf_CDataManager_getItemGenerator(CDataManager* self)
    asm("_ZN12CDataManager16getItemGeneratorEv");
extern float cbf_CDataManager_getDropRate(const CDataManager* self)
    asm("_ZNK12CDataManager11getDropRateEv");
extern void* cbf_CDataManager_get_hellparty_groupOrder_map(CDataManager* self, int idx)
    asm("_ZN12CDataManager25get_hellparty_groupOrder_mapEi");
extern BlueMarble* cbf_CUser_getBlueMarble(CUser* self)
    asm("_ZN5CUser13getBlueMarbleEv");
extern WongWork::CDeathTower* cbf_CUser_getDeathTower(CUser* self)
    asm("_ZN5CUser13getDeathTowerEv");
extern bool cbf_CUser_isAffectedPremium(const CUser* self, ENUM_PREMIUM_TYPE type)
    asm("_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE");
extern int cbf_CUser_getAddIndependentDropRateFromPremium(
    const CUser* self, ENUM_PREMIUM_TYPE type, unsigned int count)
    asm("_ZN5CUser36getAddIndependentDropRateFromPremiumE17ENUM_PREMIUM_TYPEj");
extern CAICharacter* cbf_CAICharacterList_get(void* list, unsigned int idx)
    asm("_ZN16CAICharacterList3getEj");
extern CAICharacter* cbf_CAICharacterList_getByLevel(void* list, unsigned int level)
    asm("_ZN16CAICharacterList10getByLevelEj");

// ---- CParty 最小声明（真实 CParty.h 交付后替换） ----
#ifndef GAME_CPARTY_H_
class CParty
{
public:
    void send_to_party(PacketGuard& packet);                 // ORIG T 0x859d14e
    unsigned int gen_timer_key(TIMER_MESSAGE msg);           // ORIG T 0x859ae76
    int GetPartyIndex();                                     // ORIG W 0x822d846
    void increase_hell_party_ratio(char* rate);              // ORIG T 0x859bba8
    void sub_hellparty_value();                              // ORIG T 0x85b690a
    int get_member_count();                                  // ORIG T 0x859a16a
    CUser* getManager();                                     // ORIG W 0x8145780
    CUser* get_user(int idx);                                // ORIG W 0x8145764
    void* GetMember();                                       // ORIG W 0x822d91c
    bool checkValidUser(int idx);                            // ORIG W 0x8145868
    bool IsSinglePlay();                                     // ORIG W 0x822d812
    int GetLuckPoint(CLuckPoint* luck, bool flag);           // ORIG T 0x85b61be
    bool hasPCRoomPlayer();                                  // ORIG T 0x85b669a
    int getMemberMaxLevel();                                 // ORIG T 0x85b60be
    bool CheckQuestConnection(int questIdx, ENUM_MAZE_QUEST_TYPE type);  // ORIG T 0x85b6478
    void MemberRegisterKillMonster(map_monster& mob, unsigned char diff);  // ORIG T 0x85bae6e
    bool GetPartyMemberForceDropFlag();                      // ORIG T 0x85bdc00
    int get_random_buff_type();                              // ORIG W 0x830ed3a
    bool checkBossRoom();                                    // ORIG W 0x822d8f6
    void enumPartyMember(bool (*callback)(CUser*));          // ORIG T 0x85b669a
    void historyBloodRoundClear(int round, unsigned int timeA, unsigned int timeB,
                                const char* name);           // ORIG T 0x85b7db6
};
#endif  // GAME_CPARTY_H_

// ---- CDungeon 最小声明（真实 CDungeon.h 交付后替换） ----
#ifndef CDUNGEON_CLASS_DEFINED
class CDungeon
{
public:
    int get_standard_level() const;                    // ORIG W 0x80f9810
    int get_dimension_possible() const;                // ORIG W 0x826b938
    int GetStartMap(int gridValue) const;              // ORIG T 0x834c75a
    int ChooseRandomMap(int a, int b, int c) const;    // ORIG T 0x834bf56
    bool IsEnterEachMap() const;                       // ORIG T 0x8365278
    bool IsHaveDummyMap() const;                       // ORIG W 0x830e610
    int GetDummyAppearCount() const;                   // ORIG W 0x830e620
    MazeScript* GetRandMazebyPartyCount(int count) const;  // ORIG T 0x834d06c
    std::vector<MazeScript>& GetQuestMazeScriptVector(ENUM_MAZE_QUEST_TYPE type) const;
                                                       // ORIG W 0x830e69e
    bool isTournamentDungeon() const;                  // ORIG T 0x836520a
    int getDungeonKind() const;                        // ORIG W 0x822b4c0
    bool limitOfStackableItemInTower() const;          // ORIG W 0x822b4ce
    bool isTowerOfDespairDungeon() const;              // ORIG W 0x822b4fa
    char get_blood_dungeon_type() const;               // ORIG W 0x826b928
    int getTournamentRoundFatigue() const;             // ORIG T 0x8365238
    std::vector<stEventMonster_t>& getEventMonsters() const;         // ORIG W 0x830e658
    std::vector<stSecondEventMonster_t>& getSecondEventMonsters() const;  // ORIG W 0x830e690
    int getEventMonsterTotalProb() const;              // ORIG W 0x830e64a
    int getSecondEventMonsterTotalProb() const;        // ORIG W 0x830e682
    int getTryGenEventMonsterCnt() const;              // ORIG W 0x830e62e
    int getTryGenEventMonsterProb() const;             // ORIG W 0x830e63c
    int getTryGenSecondEventMonsterCnt() const;        // ORIG W 0x830e666
    int getTryGenSecondEventMonsterProb() const;       // ORIG W 0x830e674
    int getAICharacterAppearRate() const;              // ORIG W 0x830e5f6
    std::vector<stDungeonAssignItem_t>& getObjectDropItems() const;   // ORIG W 0x8150908
    std::vector<stDungeonAssignItem_t>& getSpecialPassiveObjectItems() const;  // ORIG W 0x8150914
    void* getDropItems() const;                        // ORIG W 0x830e604
    int get_index() const;                             // ORIG W 0x80fdcf0
    const char* GetDungeonName() const;                // ORIG T 0x81455a6
};
#endif  // CDUNGEON_CLASS_DEFINED

// ---- CMap 最小声明（真实 CMap.h 交付后替换；与并行批次同布局） ----
#ifndef CMAP_CLASS_DEFINED
class CMap
{
public:
    int GetBossCount() const;                             // ORIG W 0x830e5b6（+0x00）
    int get_map_type() const;                             // ORIG W 0x830e5c0（+0x08）
    int get_index() const;                                // ORIG W 0x8134776（+0x04）
    bool CheckEntrance(int flag) const;                   // ORIG T 0x834ecaa
    std::list<_mapMonster> get_monster_list() const;      // ORIG W 0x8134796（+0x0c）
    std::list<_mapMonster> get_condition_monster_list() const;  // ORIG W 0x830e5cc（+0x14）
    std::list<_mapItem> get_item_list() const;            // ORIG W 0x81508c6（+0x1c）
    std::vector<STAICharacterMapArrangeData>& getAICharacters() const;  // ORIG W 0x81508fc（+0x6c）
};
#endif  // CMAP_CLASS_DEFINED

#endif  // DNF_GAME_CBATTLE_FIELD_DEPS_H_
