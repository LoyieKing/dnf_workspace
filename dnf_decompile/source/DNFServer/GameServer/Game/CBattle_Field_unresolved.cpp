#include "GameRand.h"
// df_game_r unresolved helpers reconstructed from ORIG symbols.
#include <algorithm>
#include <map>
#include <vector>
#include "CBattle_Field.h"

struct STMonsterParameterCategory
{
    int m_field0;
    int m_field4;
    int m_field8;
};

namespace
{
static int& field(ActiveStaticInfo* p, unsigned int off)
{
    return *reinterpret_cast<int*>(reinterpret_cast<char*>(p) + off);
}
static int readField(const ActiveStaticInfo* p, unsigned int off)
{
    return *reinterpret_cast<const int*>(reinterpret_cast<const char*>(p) + off);
}
static bool hasFeature(const std::vector<int>* v, int id)
{
    return v != 0 && std::find(v->begin(), v->end(), id) != v->end();
}
struct CMapTournamentProxy
{
    char pad[0x114];
    std::map<char, std::vector<TournamentMonster> > tournament;
};
struct DungeonNamedProxy
{
    char pad[0x8f0];
    std::vector<STNamedMonsterMapPos> positions;
};
}

void upgradeAbilityByChampionFeature(int elem, int roleType,
                                     std::vector<int>* features,
                                     ActiveStaticInfo* info)
{
    if (info == 0) return;
    static const float a[4] = {0.0f, 0.3f, 0.5f, 0.0f};
    static const float b[4] = {0.0f, 1.5f, 2.0f, 0.0f};
    static const float c[4] = {0.0f, 1.5f, 3.0f, 0.0f};
    const unsigned int r = static_cast<unsigned int>(roleType) & 3u;
    if (elem >= 0 && elem <= 3) {
        const unsigned int off = 0x38u + static_cast<unsigned int>(elem) * 4u;
        const int oldValue = readField(info, off);
        field(info, off) = oldValue + static_cast<int>((150 - oldValue) * a[r]);
    } else if (elem == 4) {
        field(info, 0x18) = static_cast<int>(readField(info, 0x18) * b[r]);
        field(info, 0x20) = static_cast<int>(readField(info, 0x20) * b[r]);
    }
    field(info, 0x04) = static_cast<int>(readField(info, 0x04) * c[r]);
    if (hasFeature(features, 0x2000d))
        field(info, 0x118) = static_cast<int>(readField(info, 0x118) * 0.75f);
    if (hasFeature(features, 0x3000e))
        field(info, 0x120) = static_cast<int>(readField(info, 0x120) * 2.0f);
    if (hasFeature(features, 0x2ff02))
        field(info, 0x160) = static_cast<int>(readField(info, 0x160) * 1.5f);
    if (hasFeature(features, 0x2ff03))
        field(info, 0x170) = static_cast<int>(readField(info, 0x170) * 1.5f);
    field(info, 0xac) += 50;
}

void upgradeAbilityByMonsterParameterCategory(
    const std::vector<STMonsterParameterCategory>* categories,
    ActiveStaticInfo* info, bool isChampion)
{
    if (categories == 0 || info == 0) return;
    const int scale = isChampion ? 100 : 100;
    for (std::vector<STMonsterParameterCategory>::const_iterator it = categories->begin();
         it != categories->end(); ++it) {
        field(info, 0x04) += it->m_field0 * scale / 100;
        field(info, 0x18) += it->m_field4 * scale / 100;
        field(info, 0x20) += it->m_field8 * scale / 100;
    }
}

void upgradeAbilityByDifficultyOfDungeon(
    int diff, ActiveStaticInfo* info, int level,
    const std::vector<std::vector<float> >& table)
{
    if (info == 0 || diff < 0 || diff >= static_cast<int>(table.size())) return;
    const std::vector<float>& row = table[diff];
    const unsigned int n = std::min<unsigned int>(row.size(), 8);
    for (unsigned int i = 0; i < n; ++i)
        field(info, 0x04 + i * 4) += static_cast<int>(row[i] * level);
}

void makeChampionFeatureList(std::vector<int>& out, int level, int seed,
                             std::vector<int>& tmp, int diff)
{
    const int count = std::max(0, (level + 1) / 2);
    if (!out.empty()) {
        tmp.assign(out.begin(), out.end());
        if (static_cast<int>(tmp.size()) > count) tmp.resize(count);
        return;
    }
    tmp.clear();
    unsigned int x = static_cast<unsigned int>(seed);
    for (int i = 0; i < count; ++i) {
        x = x * 1103515245u + 12345u;
        tmp.push_back(static_cast<int>((x >> 16) % 4) + diff * 0x10000);
    }
}

// ORIG algorithm is not yet independently recovered; preserve the required
// link/ABI boundary without applying an unverified ability mutation.
// The report at 0x088b7c24 contains only the prologue and epilogue.
void upgradeAbilityByBossFeature(ActiveStaticInfo* info)
{
    (void)info;
}
bool CBattle_Field::checkClearedNamedMonsterMap(unsigned char idx, int uid)
{
    if (m_pDungeon == 0) return false;
    const DungeonNamedProxy* d = reinterpret_cast<const DungeonNamedProxy*>(m_pDungeon);
    if (idx >= d->positions.size()) return false;
    MapInfo* map = GetMapInfoFromPos(d->positions[idx].m_x, d->positions[idx].m_y, false);
    if (map == 0 || !map->m_visited) return false;
    map_monster monster;
    monster.m_mobIndex = uid;
    return monster.isNamedMonster();
}

bool CBattle_Field::add_blood_monster(map_monster& mob, int& uid, int& seq,
    std::vector<STAssignBloodSystem> systems,
    std::vector<STAssignBloodPhaseTime> phaseTimes)
{
    if (systems.empty() || phaseTimes.empty()) return false;
    mob.m_instId = uid++;
    mob.m_bloodSpawned = 1;
    mob.m_bloodRound = static_cast<char>(phaseTimes.front().m_smallRoundOrder);
    mob.m_bloodPhaseIdx = static_cast<short>(phaseTimes.front().m_phaseIdx);
    mob.m_bloodPhaseTime = static_cast<short>(phaseTimes.front().m_interval);
    mob.m_bloodSpawnIdx = static_cast<short>(seq++);
    MapInfo* map = GetCurrentMapInfo();
    if (map == 0) return false;
    map->Add_Mob(mob);
    return true;
}

void CBattle_Field::add_hell_party_monster(map_monster& mob, int& uid, int& seq,
    std::map<unsigned short, STHellPartyGroupOrder>* groups)
{
    if (groups == 0 || groups->empty()) return;
    mob.m_instId = uid++;
    mob.m_hellPartyGroupIdx = static_cast<short>(groups->begin()->first);
    mob.m_hellPartyGroupOrder = 0;
    mob.m_hellPartyScriptIdx = 0;
    ++seq;
    MapInfo* map = GetCurrentMapInfo();
    if (map != 0) map->Add_Mob(mob);
}

bool CBattle_Field::MakeBasicRoundInfo(int memberCount,
    std::vector<TournamentMonster>& monsters,
    std::vector<TournamentInfo>& roundInfo)
{
    if (memberCount <= 0 || memberCount > 2 || monsters.empty())
        return false;
    std::random_shuffle(monsters.begin(), monsters.end());
    roundInfo.clear();
    std::vector<TournamentMonster>::iterator it = monsters.begin();
    int round = 0;
    for (; round < 15 && it != monsters.end(); ++round)
    {
        TournamentInfo info;
        for (int j = 0; j < memberCount && it != monsters.end(); ++j, ++it)
        {
            info.m_monster[j] = *it;
            info.m_group += it->m_rate;
        }
        roundInfo.push_back(info);
    }
    return round == 15;
}
void CBattle_Field::ChoiceFirstGroup(std::vector<TournamentInfo>& src,
    std::vector<TournamentInfo>& dst)
{
    dst.clear();
    if (src.empty()) return;
    const int group = src.front().m_group;
    for (std::vector<TournamentInfo>::iterator it = src.begin();
         it != src.end() && it->m_group == group; )
    {
        dst.push_back(*it);
        it = src.erase(it);
    }
}

void CBattle_Field::ConsistTournamentRound(std::vector<TournamentInfo>& first,
    std::vector<TournamentInfo>& second,
    std::map<short, std::vector<TournamentInfo> >& roundMap,
    std::list<_mapMonster>& mobList)
{
    const int randIdx = get_rand_int(0x10);
    const int peer = (randIdx & 1) == 0 ? randIdx + 1 : randIdx - 1;
    std::map<short, TournamentInfo> tournament;
    TournamentInfo empty;
    empty.m_roundOrder = (short)randIdx;
    tournament.insert(std::make_pair(empty.m_roundOrder, empty));
    std::random_shuffle(first.begin(), first.end());
    if (!first.empty())
    {
        TournamentInfo& head = first.front();
        head.m_roundOrder = (short)peer;
        tournament.insert(std::make_pair(head.m_roundOrder, head));
        first.erase(first.begin());
    }
    std::vector<int> indexes;
    for (int i = 0; i < 0x10; ++i)
        if (i != randIdx && i != peer) indexes.push_back(i);
    std::random_shuffle(indexes.begin(), indexes.end());
    InsertTournamentInfo(indexes, first, tournament);
    InsertTournamentInfo(indexes, second, tournament);
    MakeRoundInfo(tournament, roundMap, mobList);
}

void CBattle_Field::MakeNextRoundInfo(int memberCount,
    std::map<short, TournamentInfo>& roundMap)
{
    if (memberCount <= 0 || memberCount > 2) return;
    std::map<short, TournamentInfo> nextMap;
    const int pairCount = 0x10 / memberCount - 1;
    for (int i = 0; i < pairCount; i += 2)
    {
        TournamentInfo& a = roundMap[(short)i];
        TournamentInfo& b = roundMap[(short)(i + 1)];
        TournamentInfo* winner = 0;
        if (a.m_monster[0].m_mobId == 0) winner = &a;
        else if (b.m_monster[0].m_mobId == 0) winner = &b;
        else if (get_rand_int(a.m_group) >
                 get_rand_int(b.m_group)) winner = &a;
        else winner = &b;
        winner->m_roundOrder = (short)(i / 2);
        nextMap.insert(std::make_pair(winner->m_roundOrder, *winner));
    }
    roundMap = nextMap;
}

void CBattle_Field::InsertTournamentInfo(std::vector<int>& indexes,
    std::vector<TournamentInfo>& infos,
    std::map<short, TournamentInfo>& roundMap)
{
    std::vector<int>::iterator iit = indexes.begin();
    std::vector<TournamentInfo>::iterator tit = infos.begin();
    while (iit != indexes.end() && tit != infos.end())
    {
        tit->m_roundOrder = (short)*iit;
        roundMap.insert(std::make_pair(tit->m_roundOrder, *tit));
        iit = indexes.erase(iit);
        tit = infos.erase(tit);
    }
}

bool CBattle_Field::ConsistTournament(const CMap* map,
    std::list<_mapMonster>& mobList,
    std::map<short, std::vector<TournamentInfo> >& roundMap)
{
    roundMap.clear();
    if (map == 0 || m_party == 0)
        return false;
    const CMapTournamentProxy* p = reinterpret_cast<const CMapTournamentProxy*>(map);
    if (p->tournament.empty())
        return false;
    const int memberCount = m_party->get_member_count();
    std::map<char, std::vector<TournamentMonster> >::const_iterator group =
        p->tournament.find((char)memberCount);
    if (group == p->tournament.end())
        return false;
    std::vector<TournamentMonster> monsters = group->second;
    std::vector<TournamentInfo> roundInfo;
    if (memberCount <= 0 || memberCount > 2 ||
        !MakeBasicRoundInfo(memberCount, monsters, roundInfo))
        return false;
    std::sort(roundInfo.begin(), roundInfo.end());
    std::vector<TournamentInfo> first;
    ChoiceFirstGroup(roundInfo, first);
    ConsistTournamentRound(first, roundInfo, roundMap, mobList);
    return !roundMap.empty();
}

void CBattle_Field::AddTournamentMonster(const TournamentInfo& info,
    std::list<_mapMonster>& mobList, bool isUltimate)
{
    for (int i = 0; i < 2; ++i)
    {
        if (info.m_monster[i].m_mobId == 0)
            continue;
        _mapMonster mob;
        mob.m_mobId = info.m_monster[i].m_mobId;
        mob.m_flag04 = 1;
        mob.m_level = 0;
        mob.m_spawnType = 0;
        mob.m_levelAdd = 1;
        mob.m_field14 = 1;
        mob.m_roleType = isUltimate ? 3 : 0;
        mob.m_champion = 0;
        mob.m_posX = 0;
        mob.m_hpPct = 100;
        mob.m_flag30 = 0;
        mobList.push_back(mob);
    }
}

void CBattle_Field::MakeTournamentMonsterList(
    std::map<short, std::vector<TournamentInfo> >& roundMap,
    std::list<_mapMonster>& mobList)
{
    for (int round = 1; round <= 4; ++round)
    {
        std::vector<TournamentInfo>& vec = roundMap[(short)round];
        if (vec.empty())
            continue;
        int empty = -1;
        for (int i = 0; i < (int)vec.size(); ++i)
        {
            if (vec[i].m_monster[0].m_mobId == 0)
            {
                empty = i;
                break;
            }
        }
        if (empty >= 0)
        {
            const int peer = (empty & 1) ? empty - 1 : empty + 1;
            if (peer >= 0 && peer < (int)vec.size())
                AddTournamentMonster(vec[peer], mobList, round == 4);
        }
    }
    int order = 0;
    for (std::list<_mapMonster>::iterator it = mobList.begin();
         it != mobList.end(); ++it)
        it->m_orderIdx = order++;
}

void CBattle_Field::MakeRoundInfo(
    std::map<short, TournamentInfo>& roundMap,
    std::map<short, std::vector<TournamentInfo> >& roundInfoMap,
    std::list<_mapMonster>& mobList)
{
    roundInfoMap.clear();
    for (int round = 1; round <= 4; ++round)
    {
        std::vector<TournamentInfo> snapshot;
        for (std::map<short, TournamentInfo>::const_iterator it = roundMap.begin();
             it != roundMap.end(); ++it)
            snapshot.push_back(it->second);
        roundInfoMap[(short)round] = snapshot;
        MakeNextRoundInfo(round, roundMap);
    }
    MakeTournamentMonsterList(roundInfoMap, mobList);
}
