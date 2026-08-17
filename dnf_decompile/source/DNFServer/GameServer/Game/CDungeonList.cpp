// df_game_r 还原 —— CDungeonList 实现（G2 副本表管理器）。
// 类声明权威源：CDataManager.h（CDungeon.h 间接包含），本文件只做实现。
// 逐函数参照 docs/class_func_reports/CDungeonList.md（ORIG 符号：
// C1/D1 @0834d320/0834d334、load_list @0834d376、destroy @0834d610、
// insert_dungeon @0834d6cc、find_dungeon @0834d7ca、
// get_dungeon_at_index @0834d846、getDungeonIndexList @0836542c、
// size @08374698 weak，CDataManager.h 头内联）。

#include "CDungeon.h"

#include <stdio.h>

#include <map>
#include <string>
#include <utility>

#include "GameTypes.h"
#include "GlobalData.h"
#include "LogManager.h"

// ===================== 外部依赖声明（其它 TU / GameStubs 提供） =====================

namespace sync_script
{
extern std::map<int, std::string> g_dungeonInfoTable;  // ORIG 0x94f6ea0
}

int ImportDungeonScript(STDungeonScript* script, const char* path);

// ===================== CDungeonList =====================

CDungeonList::CDungeonList()
{
}

CDungeonList::~CDungeonList()
{
    destroy();
}

void CDungeonList::destroy()
{
    CDungeon* dungeon = 0;
    __gnu_cxx::hash_map<int, CDungeon*>::iterator it;
    it = m_dungeonMap.begin();
    while (it != m_dungeonMap.end())
    {
        dungeon = it->second;
        delete dungeon;
        it++;
    }
    m_dungeonMap.clear();
}

CDungeon* CDungeonList::find_dungeon(int idx) const
{
    __gnu_cxx::hash_map<int, CDungeon*>::const_iterator it;
    it = m_dungeonMap.find(idx);
    if (it == m_dungeonMap.end())
    {
        return 0;
    }
    return it->second;
}

CDungeon* CDungeonList::get_dungeon_at_index(int idx) const
{
    __gnu_cxx::hash_map<int, CDungeon*>::const_iterator it;
    int count = 0;
    it = m_dungeonMap.begin();
    while (true)
    {
        if (it == m_dungeonMap.end())
        {
            return 0;
        }
        if (idx == count)
        {
            break;
        }
        count++;
        it++;
    }
    return it->second;
}

CDungeonList* CDungeonList::getDungeonIndexList()
{
    return this;
}

bool CDungeonList::insert_dungeon(CDungeon* dungeon)
{
    __gnu_cxx::hash_map<int, CDungeon*>::iterator it;
    int idx = dungeon->get_index();
    it = m_dungeonMap.find(idx);
    if (it == m_dungeonMap.end())
    {
        m_dungeonMap.insert(
            std::pair<const int, CDungeon*>(dungeon->get_index(), dungeon));
        return true;
    }
    LogManager::logFormat(1, "data_manager.cpp", __PRETTY_FUNCTION__, 0x921,
                          "Already registed dungeon index detected : %d",
                          dungeon->get_index());
    return false;
}

int CDungeonList::load_list()
{
    char* path = 0;
    STDungeonScript script;
    CDungeon* dungeon = 0;
    std::map<int, std::string>::iterator it;
    it = sync_script::g_dungeonInfoTable.begin();
    while (it != sync_script::g_dungeonInfoTable.end())
    {
        path = (char*)it->second.c_str();
        if (path == 0)
        {
            break;
        }
        if (!ImportDungeonScript(&script, path))
        {
            printf("Dungeon Script Error: %s\n", path);
            return 0;
        }
        if (script.m_dailySchedule.size() != 0)
        {
            GlobalData::s_DailyScheduleManager->AddDailSchedule(
                script.m_dailySchedule);
        }
        if (script.m_2a9)
        {
            dungeon = new CDungeon_TowerOfDespair();
        }
        else
        {
            dungeon = new CDungeon();
        }
        dungeon->set_dungeon(script);
        insert_dungeon(dungeon);
        G_CGameManager()->GetQuickPartySystemManager()
            ->init_quick_party_pool(dungeon);
        if (size() > 1000)
        {
            int s = size();
            cMyTrace trace(__PRETTY_FUNCTION__, 0x8ec, 5);
            trace("Best Clear Time Save Dungeon Index Over Error: %d\n", s);
            return 0;
        }
        it++;
    }
    return 1;
}
