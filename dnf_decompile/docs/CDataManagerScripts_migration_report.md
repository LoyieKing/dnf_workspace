# CDataManager 脚本 POD 构析构迁移报告

## 范围

从 `CDataManager` 链接缺口中选取前 8 组脚本 POD 的构造/析构符号，迁移到 `CDataManagerScripts.cpp`：

| 类型 | 构造 | 析构 |
|---|---|---|
| `QuestParameterScript` | `QuestParameterScript()` | `~QuestParameterScript()` |
| `GuildParameterScript` | `GuildParameterScript()` | `~GuildParameterScript()` |
| `PowerParameterScript` | `PowerParameterScript()` | `~PowerParameterScript()` |
| `AccountCargoScript` | `AccountCargoScript()` | `~AccountCargoScript()` |
| `PvPSkillTreeParameterScript` | `PvPSkillTreeParameterScript()` | `~PvPSkillTreeParameterScript()` |
| `IndependentDropParameterScript` | `IndependentDropParameterScript()` | `~IndependentDropParameterScript()` |
| `channel_script_t` | `channel_script_t()` | `~channel_script_t()` |
| `stBroadCastItemScript` | `stBroadCastItemScript()` | `~stBroadCastItemScript()` |

POD 初始化按原始布局要求清零；`AccountCargoScript` 保留显式的 `m_reqLevel`/`m_itemIdx` 初始化。析构函数为空体，避免引入脚本解析器语义。

## 唯一实现确认

使用 `nm -C` 检查两个目标文件：

```text
CDataManagerScripts.cpp.o: 八组构造/析构均有 T 符号
GameStubs_remaining.cpp.o: 上述 16 个符号均为 0
```

因此这批符号只由 `CDataManagerScripts.cpp` 提供，没有与 `GameStubs_remaining.cpp` 重复定义。源文件搜索同样未发现这些类型的构析构实现残留在 `GameStubs_remaining.cpp`。

## TU/构建确认

`source/cmake/game/CMakeLists.txt` 已将 `CDataManagerScripts.cpp` 纳入 `game` 目标。将清理并重编译两个相关 TU，再用 `nm -C` 验证唯一归属。
