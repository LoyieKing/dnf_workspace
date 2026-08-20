// df_game_r Game/ CSlotBoundChecker 实现（独立 TU，从 GameStubs.cpp 拆出）。
#include "CInventory.h"

CSlotBoundChecker* g_slotBoundChecker = 0;

// 简单实现：使用固定大小的数组存储槽位绑定信息
// 每个 ITEM_TYPE 对应一个 [start, end) 区间
namespace
{
    struct SlotBound
    {
        int start;
        int end;
        Inven_Item::ITEM_TYPE type;
        bool valid;
    };

    static const int MAX_BOUNDS = 64;
    static SlotBound s_bounds[MAX_BOUNDS];
    static int s_boundCount = 0;
}

void CSlotBoundChecker::init()
{
    s_boundCount = 0;
    for (int i = 0; i < MAX_BOUNDS; i++)
        s_bounds[i].valid = false;
}

void CSlotBoundChecker::insert(int slot, int capacity, Inven_Item::ITEM_TYPE type, bool a, bool b)
{
    if (s_boundCount < MAX_BOUNDS)
    {
        s_bounds[s_boundCount].start = slot;
        s_bounds[s_boundCount].end = slot + capacity;
        s_bounds[s_boundCount].type = type;
        s_bounds[s_boundCount].valid = true;
        s_boundCount++;
    }
}

bool CSlotBoundChecker::get_slot_bound(Inven_Item::ITEM_TYPE type, int capacity, int& start, int& end) const
{
    for (int i = 0; i < s_boundCount; i++)
    {
        if (s_bounds[i].valid && s_bounds[i].type == type)
        {
            start = s_bounds[i].start;
            end = s_bounds[i].end;
            return true;
        }
    }
    return false;
}

bool CSlotBoundChecker::get_item_type(int slot, int capacity, Inven_Item::ITEM_TYPE& outType) const
{
    for (int i = 0; i < s_boundCount; i++)
    {
        if (s_bounds[i].valid && slot >= s_bounds[i].start && slot < s_bounds[i].end)
        {
            outType = s_bounds[i].type;
            return true;
        }
    }
    return false;
}
