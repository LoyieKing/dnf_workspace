# CMyFileLog 宏化与行号对齐报告

生成时间：2026-08-09

## 0. 显式行号宏版本（后续追加）

在完成全量对齐前，先落地「显式传行号」的宏版本，把 1472 处 `CMyFileLog log("Name", 0xNN);` 全部替换为宏调用，**值完全不变**：

```cpp
// DNFFileLog.h
#define DNF_LOG_SCOPE() CMyFileLog log(__FUNCTION__, __LINE__)      // 全自动（需行号对齐，guild/GuildUdp.cpp 已用）
#define DNF_LOG_SCOPE_LINE(line) CMyFileLog log(__FUNCTION__, line)  // 函数名自动 + 行号显式
#define DNF_LOG_SCOPE_AT(name, line) CMyFileLog log(name, line)      // 全显式
```

转换结果：

- **1193 处**：名字与所在函数短名一致 → `DNF_LOG_SCOPE_LINE(0xNN);`（函数名由 `__FUNCTION__` 自动识别，字符串内容与原字面量相同）；
- **279 处**：限定名或函数归属未判定 → `DNF_LOG_SCOPE_AT("Name", 0xNN);`（名字显式，保证零变化）。

验证：六个服务（guild/statics/coserver/monitor/manager/dbmw）全部重编链接通过；反汇编抽查确认级别常量原样（如 manager `0x7d/0xa8/0xb8/0x8f/0x119`），`__FUNCTION__` 字符串与原名一致（`alloc`、`CUdpHandler::InitClientSocket` 等）。

> 附带修复：dbmw 全量重编暴露了既有缺漏——`dbmw/ManagerTypes.h` 的 `CDBManager` 用到 `Packet_Load_Periodic_Message` 却无前置声明（增量构建此前一直跳过该 TU），已补一行 `class Packet_Load_Periodic_Message;`。

## 1. 目标与方法

`CMyFileLog log("名字", 0xNN);` 是原始源码宏（`CMyFileLog log(__FUNCTION__, __LINE__)`）的展开痕迹：`0xNN` 是原始源码行号，名字串是所在函数短名。重构版本把两者硬编码成了字面量。

恢复方案：

```cpp
// DNFFileLog.h
#define DNF_LOG_SCOPE() CMyFileLog log(__FUNCTION__, __LINE__)
```

然后通过调整文件布局（函数前后位置、空行），使每个调用点的新 `__LINE__` 精确等于原 `0xNN`，这样宏展开后的常量与原字面量完全一致（日志输出、二进制常量均不变）。

约束：不改变函数内语句顺序、不增删代码行（否则破坏 identical/语义）；只允许增删**空行**、调整**函数整体位置**。

## 2. 名字与函数名核对

用花括号配平法对 1450+ 个调用点做了所属函数归属：

- **1181 处（81%）**：`"名字"` 等于所在函数短名 → `__FUNCTION__` 可直接复现；
- **20 处**：名字是限定名（如 `"CUdpHandler::InitClientSocket"`、`"CTcpNetSystem::SendPacket"`），`__FUNCTION__` 只给短名，不能直接复现；
- **260 处**：函数归属解析器未覆盖（匿名/模板/静态函数等），未判定。

## 3. 行号对齐可行性（全量 30 个文件）

对每个文件检查两个必要条件：

1. **单调性**：调用点在文件顺序上的目标行号必须严格递增（否则 `__LINE__` 无法倒退）；
2. **密度**：相邻两调用点之间现有「非空行」数 ≤ 目标行号差（空行可以删，代码行不能删）。

| 文件 | 调用点 | 单调 | 不可行对数 | 结论 |
|---|---:|---|---:|---|
| guild/GuildUdp.cpp | 7 | ✓ | 0/6 | **可完全对齐（已实施）** |
| dbmw/ManagerApp.cpp | 6 | ✓ | 4/5 | 密度不足 |
| manager/ManagerApp.cpp | 2 | ✓ | 1/1 | 密度不足 |
| statics/StaticsUdp.cpp | 18 | ✗（287→275 倒序） | 3/17 | 函数内语句顺序与原始不同 |
| coserver/CoserverUdp.cpp | 20 | ✗（287→275 倒序） | 4/19 | 同上 |
| guild/GuildThread.cpp | 7 | ✗（184→178→125） | 4/6 | 同上 |
| monitor/MonitorApp.cpp | 11 | ✗（484→476） | 6/10 | 同上 |
| dbmw/ManagerTypes.cpp | 419 | ✗（90 处倒序） | 204/418 | 布局差异过大 |
| monitor/MonitorTypes.cpp | 344 | ✗（64 处倒序） | 154/343 | 布局差异过大 |
| guild/GuildPacket.cpp | 277 | ✗（57 处倒序） | 129/276 | 布局差异过大（首点原行 2625） |
| manager/ManagerTypes.cpp | 114 | ✗（31 处倒序） | 52/113 | 布局差异过大 |
| guild/GuildDomain.cpp | 87 | ✗（32 处倒序） | 47/86 | 布局差异过大 |
| statics/StaticsSignal.cpp、guild/GuildSignal.cpp | 各 2 | ✓ | 1/1 | 首点目标 19 < 当前 83，需删代码 |
| 其余（statics/coserver/guild 小文件） | — | 混合 | 混合 | 见 §5 明细 |

结论：**除 `guild/GuildUdp.cpp` 外，全部 29 个文件在「不改变语句顺序」约束下无法完全对齐**（已用 `DNF_LOG_SCOPE_LINE/AT` 显式传值过渡）。主要原因：

- 反编译重建把函数内语句顺序或整个函数顺序打乱（目标行号在文件内倒序），函数整体重排只能修跨函数倒序，修不了函数内倒序；
- 重建代码比原始源码膨胀（展开表达式、临时变量、`if/else` 形态），相邻调用之间非空行数超过原始行号差，空行删无可删。

## 4. 已实施：guild/GuildUdp.cpp（7 处）

原调用点与目标行号：

| 函数 | 原行 | 目标行（0xNN） |
|---|---:|---:|
| `CUdpHandler::InitServerSocket` | 69 | 110（0x6e） |
| `CUdpHandler::RecvFromClient` | 97 / 103 / 111 | 198（0xc6）/ 205（0xcd）/ 221（0xdd） |
| `CUdpHandler::RecvFromServer` | 138 / 144 / 156 | 365（0x16d）/ 372（0x174）/ 388（0x184） |

处理：在每处调用前插入空行（共 232 行，文件 211→443 行），使 7 处调用精确落在目标行，并把字面量替换为 `DNF_LOG_SCOPE();`。

验证（guild 重建后）：

- `GuildUdp.o` 中构造器级别参数与原名一致：`mov [esp+8], 0x6e / 0xc6 / 0xcd / 0xdd / 0x16d / 0x174 / 0x184`；
- rodata 中 `__FUNCTION__` 字符串为 `InitServerSocket`/`RecvFromClient`/`RecvFromServer`，与原始 ELF 字符串一致；
- 函数名与 `__FUNCTION__` 展开结果、级别常量与 `__LINE__` 展开结果全部对得上，语义与二进制常量零变化。

## 5. 其余文件的处置与后续路径

- 未对齐文件保持 `CMyFileLog log("名字", 0xNN);` 字面量不变（避免宏展开产生错误行号、改变日志输出）。
- 若要继续推进：需先让重建文件与原始源码的行序一致（逐函数对照 DWARF/Ghidra 行号重排函数、压缩重建膨胀代码），每完成一个文件即可用同一算法对齐；跨函数倒序可通过函数整体重排修复，函数内倒序必须还原原始语句顺序。
- 工具化建议：`source/toolchain/align_log_lines.py` 可对单个文件做可行性检查与空行对齐（本次 GuildUdp 即用该算法完成）。

## 6. 验证与风险

- guild 全量重建链接通过；本改动只涉及 `GuildUdp.cpp` 的空行与宏替换，以及 `DNFFileLog.h` 新增宏定义（其它 TU 不受影响）。
- 行号常量经反汇编逐一确认，日志输出不变。
