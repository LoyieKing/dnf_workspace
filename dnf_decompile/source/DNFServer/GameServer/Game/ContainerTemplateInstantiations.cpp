// df_game_r Game/ 迁移 TU —— STL 容器显式实例化（2026-08-22）。
// 从 GameStubs.cpp 的 asm 影子桥接迁出。这些符号是 std 容器的模板实例，
// ORIG 以正确 mangled 符号出现；用显式实例化由真实标准库实现提供（弱符号），
// 替换 GameStubs 中的空桩强符号。实例化类型与引用方（CTraceMobDieHack）ABI 一致。
#include <map>
#include <vector>
#include <algorithm>
#include "GameWorld_deps.h"
#include "WarField.h"
#include <iterator>
#include "CTraceMobDieHack.h"

typedef std::map<unsigned short, stMonsterDamageLog_t> MonsterDmgMap;
typedef std::vector<stHackLog_t> HackLogVec;

// ---- std::map<unsigned short, stMonsterDamageLog_t>（CTraceMobDieHack）----
template class std::map<unsigned short, stMonsterDamageLog_t>;

// ---- std::vector<stHackLog_t>（CTraceMobDieHack）----
template class std::vector<stHackLog_t>;

// ---- 显式强制使用，触发 map Dtor / iterator operator-> 发射 ----
static void ForceMonsterDmgMapDtor()
{
    // 让局部 map 在作用域结束时析构，发射 D1 符号
    MonsterDmgMap m;
    m.clear();
}
static stHackLog_t* ForceHackLogIterArrow()
{
    HackLogVec v;
    HackLogVec::iterator it = v.begin();
    return it.operator->();
}
static void ContainerTemplateForceEmission()
{
    ForceMonsterDmgMapDtor();
    ForceHackLogIterArrow();
    HackLogVec v;
    v.push_back(stHackLog_t());
    v.clear();
}

// ---- std::find / __gnu_cxx::operator== / std::min<float>（CTraceMobDieHack/PvP）----
template __gnu_cxx::__normal_iterator<stHackLog_t*, HackLogVec>
std::find<__gnu_cxx::__normal_iterator<stHackLog_t*, HackLogVec>, stHackLog_t>(
    __gnu_cxx::__normal_iterator<stHackLog_t*, HackLogVec>,
    __gnu_cxx::__normal_iterator<stHackLog_t*, HackLogVec>,
    const stHackLog_t&);
template bool __gnu_cxx::operator==<stHackLog_t*, HackLogVec>(
    const __gnu_cxx::__normal_iterator<stHackLog_t*, HackLogVec>&,
    const __gnu_cxx::__normal_iterator<stHackLog_t*, HackLogVec>&);
template const float& std::min<float>(const float&, const float&);

// ---- std::map<int, TownAreaScript>（Village）----
typedef std::map<int, TownAreaScript> TownAreaMap;
template class std::map<int, TownAreaScript>;

static std::pair<const int, TownAreaScript>* ForceTownIter()
{
    TownAreaMap m;
    TownAreaMap::iterator it = m.begin();
    TownAreaMap::iterator it2 = m.end();
    if (it != it2) { ++it; }
    return it.operator->();
}
static void ForceTownSize()
{
    TownAreaMap m;
    (void)m.size();
}

// ---- std::vector<MapInfo> / std::map<int, map_monster>::clear（CParty）----
template class std::vector<MapInfo>;
template class std::map<int, map_monster>;
static void ForceCPartyContainers()
{
    std::vector<MapInfo> v;
    v.clear();
    std::map<int, map_monster> m;
    m.clear();
}