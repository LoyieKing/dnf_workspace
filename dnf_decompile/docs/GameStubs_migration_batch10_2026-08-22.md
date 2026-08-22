# GameStubs 迁移 batch-10：最后 8 个必要符号迁移 + GameStubs.cpp 从 CMake 移除（2026-08-22）

## 目标
将 GameStubs.cpp 最后 8 个「仅由 GameStubs 提供」的必要符号迁移到对应真实 TU
（ORIG 签名/类型精确一致），随后把 `GameStubs.cpp` 从 `source/cmake/game/CMakeLists.txt`
移除并重新配置构建，验证 0 错误、无 undefined，实现 GameStubs 目标清零。

## 判定口径
- 每个符号先经 `nm -C /home/wangyilei/下载/df_game_r` 核对 ORIG 地址/类型。
- 迁移后由真实 TU 提供定义（nm 验证对象文件 `[BDT]`，非 U），build binary 解析。

## 迁移清单（8 符号 → 目标 TU）

| 符号（demangled） | ORIG 地址 | 类型 | 迁往 TU | 目标行 | 说明 |
|---|---|---|---|---|---|
| `DEFAULT_MAX_FATIGUE` | 0x9370f5c D | const int | `CUserCharacInfo.cpp` | 238 | `int DEFAULT_MAX_FATIGUE = 0;`（头 CUserCharacInfo.h:297 extern） |
| `g_schoolMgr` | 0x943e080 B | `CSchoolMgr*` | `CGameManager.cpp` | 54 | `CSchoolMgr* g_schoolMgr;`（CGameManager.cpp:59/2592 引用） |
| `g_guildAgitMgr` | 0x943e0e0 B | `CGuildAgitManager*` | `CGameManager.cpp` | 55 | `CGuildAgitManager* g_guildAgitMgr;`（:60/2596 引用） |
| `GlobalData::s_timerQueue_` | （源码必需） | `TimerQueue*` | `CGameManager.cpp` | 52 | `TimerQueue* s_timerQueue_;` 于 namespace GlobalData（:2601-2617 InsertTimer 引用）|
| `GetInvenTypeFromItemSpace(ENUM_ITEMSPACE)` | 0x80f7845 W | free function | `CTitleBook.cpp` | 28 | switch 跳表 0→1/1→2/2→4/3→0/7→3/18→5/默认6；mangled `_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE` |
| `g_emptySlot` | 0x943ddc0 B | `Inven_Item` | `CAccountCargo.cpp` | 45 | `Inven_Item g_emptySlot;`（GameStubs 原为错误 `int`，已按 ORIG 修正）|
| `g_itemShopScriptFileList` | 0x94fe260 B | `STScriptFileList` | `CItemShop.cpp` | 29 | 删除 extern，改为定义（GameStubs 原为错误 `std::map<...>`，已按 ORIG 修正）|
| `np_server_xml::g_ServerString_` | 0x93fa660 B | `CServerXml` | `CBoosterGage.cpp` | 221 | `CServerXml g_ServerString_;` 于 namespace np_server_xml |

## GameStubs.cpp 删除内容（精确行号，定义删除→改注释）
- 原 L55-68/L54：`GetInvenTypeFromItemSpace(ENUM_ITEMSPACE)` 函数 + `enum ENUM_ITEMSPACE`
- 原 L196：`np_server_xml::g_ServerString_`
- 原 L205：`DEFAULT_MAX_FATIGUE`
- 原 L244/246：`g_schoolMgr` / `g_guildAgitMgr`（含前置 class 声明 L243/245）
- 原 L250-251：`GlobalData::s_timerQueue_`
- 原 L314：`g_emptySlot = 0;`
- 原 L315：`g_itemShopScriptFileList;`

（文件 501 行 → 477 行；8 个符号仅余注释，无任何定义残留。）

## GameStubs.cpp 移除结果
- `source/cmake/game/CMakeLists.txt` L327 `GameStubs.cpp` 条目已删除（CUT）。
- `cmake -DCMAKE_TOOLCHAIN_FILE=source/toolchain/cmake/dnf_toolchain_44.cmake .../source/cmake/game`
  重新配置 → `-- Configuring done` / `-- Generating done`。
- `cmake --build dnf_decompile/build/game -j16` → **0 错误**（df_game_r 生成）。
- `GameStubs.cpp.o` 不再存在于 build 产物（object 已移除）；link binary 中
  GameStubs 相关符号计数 = **0**。

## nm 验证（defined 符号所在对象，非 U）
```
CUserCharacInfo.cpp.o : 00000000 B DEFAULT_MAX_FATIGUE
CGameManager.cpp.o     : 00000000 B GlobalData::s_timerQueue_; 00000004 B g_schoolMgr; 00000008 B g_guildAgitMgr
CTitleBook.cpp.o       : 00000000 T GetInvenTypeFromItemSpace(ENUM_ITEMSPACE)
CAccountCargo.cpp.o    : 00000000 B g_emptySlot
CItemShop.cpp.o        : 00000000 B g_itemShopScriptFileList
CBoosterGage.cpp.o     : 00000000 B _ZN13np_server_xml15g_ServerString_E
```
build binary `df_game_r` 全部解析（无 U）：`_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE`(T)、
`_ZN10GlobalData13s_timerQueue_E`(B)、`_ZN13np_server_xml15g_ServerString_E`(B)、
`g_schoolMgr`/`g_guildAgitMgr`/`g_emptySlot`/`g_itemShopScriptFileList`/`DEFAULT_MAX_FATIGUE`(B)。

## compare
（compare_tu_game_orig.py，AE 口径；迁移符号为全局/自由函数，函数对比无新增影响，
getTitle/putTitle 仅符号替换 `sub_CDataManager_GetInvenTypeFromItemSpace`→`GetInvenTypeFromItemSpace`，
跳表逻辑不变，DIFF 状态为既有 AE 对齐差距非本批引入）
- `CUserCharacInfo.cpp.o`：DIFF=28, NEAR=2
- `CGameManager.cpp.o`：DIFF=23, NEAR=7
- `CAccountCargo.cpp.o`：DIFF=22
- `CItemShop.cpp.o`：DIFF=13
- `CBoosterGage.cpp.o`：DIFF=6, NEAR=4
- `CTitleBook.cpp.o`：DIFF=15, NEAR=3（getTitle/putTitle 仅调用目标符号替换）

## 验收
- build = 0 错误，df_game_r 正常链接。
- 8 符号全部由真实 TU 提供（nm 验证 T/B）。
- GameStubs.cpp 从 CMake 移除成功（确认无 GameStubs 条目，object 不再编译）。

## 未迁移项（本轮范围外）
- GameStubs.cpp 其余内容（其余顶层桩/枚举/前置声明）未在本批移除，其符号分属
  其他批次/peer 域；当前 GameStubs.cpp 已从构建移除，故不影响产物。