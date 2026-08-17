// df_game_r 还原 —— CBattle_Field 地图/移动簇（G2 副本链，并行批次 map）。
// 逐函数对照 docs/class_func_reports/CBattle_Field.md 与 ORIG 反汇编实现；
// 目标：编译产物与 ORIG 逐操作数一致（AE 口径）。
// 本 TU 只实现地图/移动/结算小簇（约 70 函数）；地狱/血战/锦标赛簇由并行 agent 提供。
#include <cstring>

#include <list>
#include <map>
#include <utility>
#include <vector>

#include "CBattle_Field.h"
#include "InterfacePacketBuf.h"

// ============================================================================
// PacketGuard（ORIG 0xc 字节：InterfacePacketBuf + int + char；
//      构造/析构由 GameStubs 提供单例定义）
// ============================================================================
class PacketGuard : public InterfacePacketBuf
{
public:
    PacketGuard();
    ~PacketGuard();

private:
    int m_nField4;
    char m_cField8;
};

// ============================================================================
// 外部方法（asm-label extern；避免依赖并行批次未定稿的权威头）
// ============================================================================
extern "C" GridScript* sub_MazeScript_getGridR(void* maze, int x, int y)
    asm("_ZNK10MazeScript8getGridREii");
extern "C" MapInfo* sub_CBattle_Field_getCurrentLayeredMapInfo(void* self)
    asm("_ZN13CBattle_Field24getCurrentLayeredMapInfoEv");

// ============================================================================
// 小访问器（ORIG 弱符号，直接读反汇编实现）
// ============================================================================

void CBattle_Field::SetParty(CParty* party)
{
    m_party = party;
}

void CBattle_Field::SetCurSeatNo(int seatNo)
{
    m_curSeatNo = seatNo;
}

int CBattle_Field::GetMapInfoKeyValue(int x, int y)
{
    return x * 100 + y;
}

MapInfo* CBattle_Field::GetCurrentMapInfo()
{
    int x = -1;
    int y = -1;
    getCurPosXY(x, y);
    return GetMapInfoFromPos(x, y, false);
}

MapInfo* CBattle_Field::GetMapInfoFromPos(int x, int y, bool create)
{
    int key = GetMapInfoKeyValue(x, y);
    std::map<int, MapInfo>::iterator it = m_mapInfo.find(key);
    if (it != m_mapInfo.end())
    {
        if (create)
        {
            return &it->second;
        }
        if (m_gridMaze != 0)
        {
            GridScript* grid = sub_MazeScript_getGridR(m_gridMaze, x, y);
            if (grid != 0 && grid->m_layeredMapIndexes.size() != 0)
            {
                MapInfo* cur = sub_CBattle_Field_getCurrentLayeredMapInfo(this);
                if (cur->m_layeredMap != 0)
                {
                    return sub_CBattle_Field_getCurrentLayeredMapInfo(this);
                }
            }
        }
        return &it->second;
    }

    MapInfo info;
    key = GetMapInfoKeyValue(x, y);
    m_mapInfo.insert(std::make_pair(key, info));
    it = m_mapInfo.find(key);
    return &it->second;
}

int CBattle_Field::getMapWidth()
{
    return m_mapWidth;
}

int CBattle_Field::getMapHeight()
{
    return m_mapHeight;
}

bool CBattle_Field::check_start_point()
{
    int x = -1;
    int y = -1;
    getCurPosXY(x, y);
    if (m_startX == x && m_startY == y)
    {
        return true;
    }
    return false;
}

bool CBattle_Field::check_end_point()
{
    int x = -1;
    int y = -1;
    getCurPosXY(x, y);
    if (m_pos[0].first == x && m_pos[0].second == y)
    {
        return true;
    }
    return false;
}

int CBattle_Field::get_cur_map()
{
    return GetCurrentMapInfo()->m_mapIndex;
}

MapInfo* CBattle_Field::GetMapInfo()
{
    return GetCurrentMapInfo();
}

MazeScript* CBattle_Field::getMaze()
{
    return m_gridMaze;
}

int CBattle_Field::GetCurrentMapIndex()
{
    if (m_pMap != 0)
    {
        return m_pMap->get_index();
    }
    return 0;
}

bool CBattle_Field::IsClearDungeon()
{
    if (!m_clearCondition.Empty())
    {
        if (m_clearCondition.IsClearCondition())
        {
            return true;
        }
        return false;
    }
    return check_end_point();
}

int CBattle_Field::get_dungeon_index()
{
    return m_dungeonIndex;
}

int CBattle_Field::get_dungeon_diff()
{
    return m_dungeonDiff;
}

CDungeon* CBattle_Field::GetDungeon()
{
    return m_pDungeon;
}

std::map<int, map_monster>* CBattle_Field::GetMonsterMap()
{
    return &GetCurrentMapInfo()->m_monsterMap;
}

int CBattle_Field::get_map_index(int x, int y)
{
    return GetMapInfoFromPos(x, y, false)->m_mapIndex;
}

CMap* CBattle_Field::GetCurrentMap()
{
    return m_pMap;
}

bool CBattle_Field::ClearCondition(ENUM_DUNGEON_CLEAR_CONDITION_TYPE type, int idx)
{
    if (!m_clearCondition.Empty())
    {
        if (m_clearCondition.ClearCondition(type, idx))
        {
            return true;
        }
    }
    return false;
}

bool CBattle_Field::IsVisitedCurrentMap()
{
    return GetCurrentMapInfo()->m_visited;
}

void CBattle_Field::setWorldMapTowerArea(bool flag)
{
    m_worldMapTowerArea = flag;
}

bool CBattle_Field::isWorldMapTowerArea()
{
    return m_worldMapTowerArea != 0;
}

int CBattle_Field::GetCurPosX()
{
    if (m_pDungeon != 0 && m_pDungeon->IsEnterEachMap())
    {
        return m_pos[m_curSeatNo + 2].first;
    }
    return m_curX;
}

int CBattle_Field::GetCurPosY()
{
    if (m_pDungeon != 0 && m_pDungeon->IsEnterEachMap())
    {
        return m_pos[m_curSeatNo + 2].second;
    }
    return m_curY;
}

MapInfo* CBattle_Field::GetLastMapInfo()
{
    int x;
    int y;
    if (m_pDungeon != 0 && m_pDungeon->IsEnterEachMap())
    {
        x = m_pos[m_curSeatNo + 6].first;
        y = m_pos[m_curSeatNo + 6].second;
    }
    else
    {
        x = m_lastX;
        y = m_lastY;
    }
    return GetMapInfoFromPos(x, y, false);
}

void CBattle_Field::getCurPosXY(int& x, int& y)
{
    bool usePos;
    if (m_pDungeon != 0)
    {
        if (m_pDungeon->IsEnterEachMap() &&
            m_curSeatNo >= 0 && m_curSeatNo < 4)
        {
            usePos = true;
        }
        else
        {
            usePos = false;
        }
    }
    else
    {
        usePos = false;
    }
    if (usePos)
    {
        x = m_pos[m_curSeatNo + 2].first;
        y = m_pos[m_curSeatNo + 2].second;
    }
    else
    {
        x = m_curX;
        y = m_curY;
    }
}

void CBattle_Field::getLastPosXY(int& x, int& y)
{
    bool usePos;
    if (m_pDungeon->IsEnterEachMap() &&
        m_curSeatNo >= 0 && m_curSeatNo < 4)
    {
        usePos = true;
    }
    else
    {
        usePos = false;
    }
    if (usePos)
    {
        x = m_pos[m_curSeatNo + 6].first;
        y = m_pos[m_curSeatNo + 6].second;
    }
    else
    {
        x = m_lastX;
        x = m_lastY;
    }
}

void CBattle_Field::swap_curpos_xy(int x, int y)
{
    bool usePos;
    if (m_pDungeon != 0)
    {
        if (m_pDungeon->IsEnterEachMap() &&
            m_curSeatNo >= 0 && m_curSeatNo < 4)
        {
            usePos = true;
        }
        else
        {
            usePos = false;
        }
    }
    else
    {
        usePos = false;
    }
    if (usePos)
    {
        m_pos[m_curSeatNo + 6].first = m_pos[m_curSeatNo + 2].first;
        m_pos[m_curSeatNo + 6].second = m_pos[m_curSeatNo + 2].second;
        m_pos[m_curSeatNo + 2] = std::make_pair<int&, int&>(x, y);
    }
    else
    {
        m_lastX = m_curX;
        m_lastY = m_curY;
        m_curX = x;
        m_curY = y;
    }
}
