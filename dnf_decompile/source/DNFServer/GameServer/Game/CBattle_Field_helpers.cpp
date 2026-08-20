// df_game_r 还原 —— CBattle_Field 引用的叶子助手（独立 TU）。
// 逐函数对照 ORIG df_game_r 反汇编实现（证据见各函数注释）；不编译，主 agent 统一验证。
// 说明：避免与并行批次（CBattle_Field.cpp / GameStubs_remaining.cpp 等）争文件，
// 故独立成 TU；village_attacked 链在 VillageMonster_helpers.cpp。

#include <cstring>

#include "CBattle_Field.h"
#include "CRidable.h"

// ============================================================================
// CRidable::Clear()  —— ORIG 0x82fe6bc
//   objdump: 8306d86 前 82fe6bc: sub $0x18,%esp; mov 0x8(%ebp),%eax;
//             mov %eax,(%esp); call _ZNSt3mapIi20DungeonRidableObject...5clearEv; leave; ret
//   仅清空内部 map<int, DungeonRidableObject>。
// ============================================================================
void CRidable::Clear()
{
    m_objects.clear();
}

// ============================================================================
// stMapMonsterKillChecker_t::setUseSkillMaterial(unsigned int) —— ORIG 0x830e72c
//   objdump: mov 0xc(%ebp),%edx; mov %edx,(%eax)      ; m_useSkillMaterialTime = tick
//            mov 0x14(%eax),%edx; lea 1(%edx); mov %edx,0x14(%eax)  ; m_field14++
// ============================================================================
void stMapMonsterKillChecker_t::setUseSkillMaterial(unsigned int tick)
{
    m_useSkillMaterialTime = tick;
    m_field14++;
}

// ============================================================================
// stMapPlayInfo_t::getPlayTick() const —— ORIG 0x830e7ea
//   objdump: mov 0x4(%eax),%edx; mov (%eax),%eax; sub %eax,%edx; mov %edx,%eax; ret
//   即 return m_clearTick - m_startTick;
// ============================================================================
unsigned int stMapPlayInfo_t::getPlayTick() const
{
    return m_clearTick - m_startTick;
}

// ============================================================================
// addUserHackCount149(CUser*) —— ORIG 0x830dc9d（enumPartyMember 回调）
//   objdump: call CUser::getHackAnalyzer; 入参 (this=analyzer, user, 0x198, 1, 0, 0)
//            call WongWork::CHackAnalyzer::addServerHackCnt(CUser*,ENUM_HACKTYPE,j,j,j)
//            mov $1,%eax; ret
// ============================================================================
bool addUserHackCount149(CUser* user)
{
    user->getHackAnalyzer()->addServerHackCnt(
        user, (WongWork::ENUM_HACKTYPE)0x198, 1, 0, 0);
    return true;
}

// ============================================================================
// addUserHackCount150(CUser*) —— ORIG 0x830dce4（同 149，仅 hack type 0x199）
// ============================================================================
bool addUserHackCount150(CUser* user)
{
    user->getHackAnalyzer()->addServerHackCnt(
        user, (WongWork::ENUM_HACKTYPE)0x199, 1, 0, 0);
    return true;
}

// ============================================================================
// CBattle_Field::reset_blood_values() —— ORIG 0x8306d86
//   objdump（按序）:
//     clear vector<STAssignBloodSystem> @ +0x240   (m_bloodSystems)
//     clear vector<STAssignBloodPhaseTime> @ +0x24c (m_bloodPhaseTimes)
//     clear vector<short> @ +0x258                 (m_bloodPhaseOrder)
//     clear vector<bool> @ +0x264                  (m_bloodPhaseClear)
//     memset +0x278, 0x16                          (m_bloodSpawnCnt)
//     memset +0x28e, 0x16                          (m_bloodSpawnTime)
//     movw $0xffff @ +0x2a8                        (m_bloodCrazyRound)
//     movl $0 @ +0x2a4                             (m_bloodSpawnCntCur)
//     movb $0 @ +0x2aa                             (m_bloodCrazyType)
// ============================================================================
void CBattle_Field::reset_blood_values()
{
    m_bloodSystems.clear();
    m_bloodPhaseTimes.clear();
    m_bloodPhaseOrder.clear();
    m_bloodPhaseClear.clear();
    memset(m_bloodSpawnCnt, 0, sizeof(m_bloodSpawnCnt));
    memset(m_bloodSpawnTime, 0, sizeof(m_bloodSpawnTime));
    m_bloodCrazyRound = 0xffff;
    m_bloodSpawnCntCur = 0;
    m_bloodCrazyType = 0;
}

// ============================================================================
// _mapItem ctor/dtor —— ORIG ctor 0x815088e / 无 dtor 符号（平凡析构，POD int 成员）
// ============================================================================
_mapItem::_mapItem()
{
    m_field04 = 0;
    m_field08 = 0;
    m_field0c = 0;
}
_mapItem::~_mapItem() {}  // 平凡析构：成员均为 int，ORIG 无独立 dtor 符号

// ============================================================================
// WongWork::stGenerateRefData_t / stGenerateResult_t ctor/dtor
//   —— ORIG 实证（RefData ctor 0814a706 / dtor 0814aaf0；
//               Result  ctor 0814ab06 / dtor 0814ab4c），与 deps.h 布局一致。
// ============================================================================
WongWork::stGenerateRefData_t::stGenerateRefData_t()
{
    m_dropRate = 100;
    m_field04 = 0;
    m_forceTag.push_back(false);  // ORIG: vector ctor + clear + 2×push_back(0)
    m_forceTag.push_back(false);
    m_field1c = 1.0f;
    m_premiumDropRate = 0;
    m_field24 = 0;
    m_field25 = 0;
    m_field28 = 11;
    m_field2c = 0;
    m_field30 = 0;
}
WongWork::stGenerateRefData_t::~stGenerateRefData_t()
{
    // m_forceTag（std::vector<bool>）由成员析构阶段自动释放（ORIG 显式析构 +0x08）
}

WongWork::stGenerateResult_t::stGenerateResult_t()
{
    // m_dropItems（std::vector<Inven_Item>）默认构造（ORIG ctor 0814ab06）
}
WongWork::stGenerateResult_t::~stGenerateResult_t()
{
    // m_dropItems 由成员析构阶段自动释放（ORIG dtor 0814ab4c）
}
