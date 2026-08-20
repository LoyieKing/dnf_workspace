# PvPSkillTreeParameterScript：新版 ABI 缺口与加载链报告

## 结论

旧报告地址为 `0x08a5xxxx`，不可用于当前新版。当前 `build/game/df_game_r` 的 ABI 符号为：构造 `0x0829ab44`、析构 `0x0829abb8`、`getPvPSkillPoint` `0x0829ac26`、`getPvPSkillTree` `0x0829adb4`、`getGiveSkill` `0x0829aecc`、`importPairPvPSkillPointScript` `0x0829af54`、`importPvPSkillTreeParameterScript` `0x0829b1fc`。二进制没有 `load_pvp_skill_tree_list` 符号，该名称只能作为源码适配层。

## ABI 布局

新版构造/析构确认三个 `std::map` 位于 `this+0x00`、`this+0x24`、`this+0x48`，上限位于 `this+0x70`；最小对象尺寸为 `0x74`。对应 `CDataManager.h` 当前声明的 `m_pad` 与 `m_pvpSkillTree` 偏移 `0xa800` 是一致的，不能套用旧版 `0x4c` 上限。

## getPvPSkillPoint 实现建议

反汇编确认外层 key 是等级，内层 key 是 `firstGrow * 5 + secondGrow`；之后还会查 `(job, firstGrow, 0)` 的每点配置，`flag=true` 时从非零基础结果扣除 `m_value40`，`flag=false` 且基础结果为零时补上 `m_value40`：

```cpp
int PvPSkillTreeParameterScript::getPvPSkillPoint(
    int job, int firstGrow, int secondGrow, int grade, bool flag) const
{
    if (grade > m_maxLevel) grade = m_maxLevel;
    int result = 0;
    std::map<int, std::map<int, int> >::const_iterator outer =
        m_skillPointMap.find(grade);
    if (outer != m_skillPointMap.end()) {
        std::map<int, int>::const_iterator it =
            outer->second.find(firstGrow * 5 + secondGrow);
        if (it != outer->second.end()) result = it->second;
    }
    PvPSkillTreeKey key = {
        (unsigned char)job, (unsigned char)firstGrow, 0
    };
    std::map<PvPSkillTreeKey, FairPvPSkillPerPoint>::const_iterator it =
        m_skillPerPointMap.find(key);
    if (it != m_skillPerPointMap.end()) {
        if (flag && result != 0) result -= it->second.m_value40;
        else if (!flag && result == 0) result = it->second.m_value40;
    }
    return result;
}
```

这与 `GameStubs_remaining.cpp` 当前实现的关键逻辑一致；建议补测等级超上限、外层/内层缺键及 `flag` 两个分支。

## 加载链

两张表是独立 importer，但新版两者都调用 `loadRDARScriptFile(0x0844d46a, path)`：

```text
调用者
  -> importPvPSkillTreeParameterScript(path)
       -> loadRDARScriptFile(0x0844d46a, path)
       -> ScanType / ScanInt
       -> [level] [job index] [grow type index]
          [awakening type] [skill]/[static basic skill]
       -> m_skillTreeMap (this+0x00)

调用者
  -> importPairPvPSkillPointScript(path)
       -> loadRDARScriptFile(0x0844d46a, path)
       -> [skill point] / [init skill tree] / [version]
       -> m_skillPointMap (this+0x24)，m_maxLevel (this+0x70)
```

因此 `load_pvp_skill_tree_list` 不应重新解析脚本；若确实需要该名字，建议只做包装：

```cpp
bool CDataManager::load_pvp_skill_tree_list(const char* path)
{
    return m_pvpSkillTree.importPvPSkillTreeParameterScript(path) != 0;
}
```

若调用方期望完整功能，应按顺序分别加载 pair 点数表和技能树表，任一失败即失败。

## CDataManager / GameStubs 缺口

当前 `CDataManager.h` 已有 `PvPSkillTreeParameterScript m_pvpSkillTree`，`GameStubs_remaining.cpp` 也已有构造、查询和两个 importer；因此“缺口”不是再添加类或 map，而是加载调用链的包装/接入，以及确认脚本初始化时两个 importer 都被调用。直接在 `CDataManager` 再嵌入 map 会破坏 `m_pvpSkillTree` 后续成员偏移。

## 建议

优先保留现有 `GameStubs` 实现，修正或补齐调用方加载包装；不要新增独立 `load_pvp_skill_tree_list` 解析器。新版 ABI 的字段偏移、`flag` 补偿逻辑和 importer 基址已由当前 ELF 反汇编核对。
