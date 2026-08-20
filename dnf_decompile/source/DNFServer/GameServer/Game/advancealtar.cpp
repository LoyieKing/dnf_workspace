// df_game_r Game/ advancealtar 命名空间类实现（独立 TU，从 GameStubs.cpp 拆出）。
#include <cstring>
#include "CGameManager.h"
#include "advancealtar.h"   // advancealtar::CharacData / _SlotItem 声明

namespace advancealtar
{

TimeLine::TimeLine()
{
    std::memset(this, 0, sizeof(*this));
}

TimeLine::~TimeLine()
{
}

TimeLine& TimeLine::operator=(const TimeLine& other)
{
    if (this != &other)
        std::memcpy(this, &other, sizeof(*this));
    return *this;
}

int Manager::gmTimeSpeed = 0;

Manager::Manager() {}
Manager::~Manager() {}

int Manager::selectStage(CUser* user, int stageId, int diff) { return 0; }
int Manager::procErrorSelectStage(CUser* user, int err) { return 0; }
int Manager::eplp(CUser* user, int type) { return 0; }
int Manager::pause(CUser* user, bool flag) { return 0; }
int Manager::dieMob(CUser* user, unsigned short a, unsigned short b, const void* msg) { return 0; }
int Manager::dieCharac(CUser* user) { return 0; }
int Manager::leaveUser(CUser* user) { return 0; }
int Manager::finishLoad(CUser* user) { return 0; }
int Manager::giveUpGame(CUser* user) { return 0; }

// _SlotItem ctor（ORIG 强符号 _ZN12advancealtar9_SlotItemC1Ev @ 0x81347e2，清零 16 字节）
_SlotItem::_SlotItem()
{
    m_slot = 0;
    m_itemId = 0;
    m_needGage = 0;
    m_field0c = 0;
}

// CharacData ctor（ORIG 0x812d024）：+0/+4/+8/+0xc 依次置 0，随后 map 默认构造
// （初始化列表按声明顺序生成：先 4 个标量，再 map ctor，与 ORIG 汇编一致）。
CharacData::CharacData()
    : m_pUser(0), m_pUserMgr(0), m_gageLevel(0), m_gage(0), m_slotItems()
{
}

// CharacData dtor（ORIG 0x812d062）：仅析构 map。
CharacData::~CharacData()
{
    // m_slotItems 自动析构（ORIG：调用 map<uchar,_SlotItem>::~map()）
}

// _SummonObjectMs 为外部/后续批次类型，本 TU 仅用指针。
// ProcSummonObjectMs ctor（ORIG 0x812d378）：+0 置 0，vector/map 默认构造，
// +0x28/+0x2c 置 0，随后存 CharacData& 与 int&（召唤序号计数器）。
ProcSummonObjectMs::ProcSummonObjectMs(CharacData& cd, const int& seqCounter)
    : m_field0(0), m_objects(), m_objMap(), m_field28(0), m_field2c(0),
      m_characData(&cd), m_seqCounter(const_cast<int*>(&seqCounter))
{
}

// ProcSummonObjectMs dtor（ORIG 0x812d3f0）：map 先、vector 后自动析构。
ProcSummonObjectMs::~ProcSummonObjectMs()
{
}

// ProcStage ctor（ORIG 0x812dc18）：字段赋值 → ProcSummonObjectMs（参数
// CharacData& 与 +0x08 计数器）→ map 默认构造 → 字段赋值 → vector 默认构造。
ProcStage::ProcStage(CharacData& cd)
    : m_characData(&cd), m_field4(7), m_field8(0), m_field0c(0), m_field10(0),
      m_field14(0), m_summon(cd, m_field8), m_monsters(), m_field68(-1),
      m_field6c(0), m_field70(0), m_field74(0), m_field78(1), m_field7c(0),
      m_field80(), m_field8c(0), m_field90(0)
{
}

// ProcStage dtor（ORIG 0x812dd26）：vector → map → ProcSummonObjectMs 自动析构。
ProcStage::~ProcStage()
{
}

// StageControl ctor（ORIG 0x812f9a2）：+0 置 -1，随后按声明顺序构造
// ProcStage（参数指向 +0x98 的 CharacData）与 CharacData（+0x98）。
StageControl::StageControl()
    : m_index(-1), m_procStage(m_characData), m_characData()
{
}

// StageControl dtor（ORIG 0x812fa06）：CharacData 先、ProcStage 后自动析构。
StageControl::~StageControl()
{
}

// ---- StageControl 其余方法暂为链接桩（符号由 CGameManager.cpp asm extern 引用）----
int StageControl::getIndex() const { return 0; }
void StageControl::leaveUser() {}
void StageControl::onTimerStageTick() {}
void StageControl::reset() {}
void StageControl::setIndex(int) {}

// 布局静态断言（ORIG 尺寸核对：StageControl 0xc0 / ProcStage 0x94 /
// ProcSummonObjectMs 0x38 / CharacData 0x28）
typedef char _assert_stagecontrol_size[(sizeof(StageControl) == 0xc0) ? 1 : -1];
typedef char _assert_procstage_size[(sizeof(ProcStage) == 0x94) ? 1 : -1];
typedef char _assert_procsummon_size[(sizeof(ProcSummonObjectMs) == 0x38) ? 1 : -1];
typedef char _assert_characdata_size[(sizeof(CharacData) == 0x28) ? 1 : -1];


void HistoryLog::starSub(CUser* user, int type, int count)
{
    user->LogHistory("star-,%d,%d", type, count);
}

}  // namespace advancealtar
