# df_community_r 第六轮复核：xor 惯用法根因定位与源码对齐（2026-08-07）

## 核心发现：`== false` 才是 xor 惯用法的源码形态

此前多轮把 `xor eax,1; test al,al; je` 归为"旧编译器惯用法、源码不可修"。本轮通过
系统性测试定位到：**gcc 4.4.4 对 `if (bool_func() == false) { 提前返回 }` 恰好生成
该模式**（`xorl $1,%eax; testb %al,%al; je 主逻辑`），而 `== 1`/`== true`/`!= false`
都会被折叠为 `testb %al,%al; je`。

验证矩阵（idiom 测试）：

| 源码形式 | gcc 4.4.4 生成 |
|---|---|
| `if (x == 1)` / `== true` / `!= false` | `test al,al; je`（折叠） |
| `if (x == false) { 提前返回 }` | **`xor eax,1; test al,al; je 主逻辑`** |
| `return !x` | `xor eax,1` |

## 本轮源码修复（DIFF 92 → 88，NEAR 318 → 322）

### 1. `OnLogin`（DIFF → 助记符级完全一致，85==85）
- `if (enter_user(...) == 1) {...} else {return 0x2a;}` 改为
  `if (enter_user(...) == false) { return 0x2a; }` + 主逻辑顺序执行；
- 同时发现 `STGameUserInfo::channel_no` 原始为 **unsigned char**（movzx 零扩展），
  我们的 char（signed）产生 movsx——修正字段类型后唯一差异消除。

### 2. `regist_signals`（131 == 131）
- 原始：前 3 个信号（SIGTERM/SIGUSR1/SIGUSR2）直接检查调用结果
  （`if (regist_signal(...) != 1) return false;`，xor 惯用法），
  后 10 个经 `register_success` 变量（mov [ebp],al + movzx 重载）；
- 我们的宏原来全部走变量——重构为前 3 直接 + 后 10 变量后完全对齐。

### 3. `OnLogout`（50 == 50）
- 原始为 `&&` 复合赋值物化：`bool match = (user && charac == packet)`，
  生成 `mov eax,1; jmp; mov eax,0; test al,al`；
- 我们原用"未初始化 bool + 单赋值"——改为复合赋值后分支结构一致，
  残留仅 AL vs 栈槽（编译器寄存器分配）。

### 4. `CArchiveLog::WriteLog`（84 vs 87 → 84 vs 86）
- `CreateLogFile` 返回类型修正为 **bool**（原始调用处 `xor eax,1; test al,al; je`
  证明其为 0/1 值），调用处改 `== false`。

### 5. `CCoreDump::CCoreDump`（22 vs 20 → 22 vs 19）
- `char resigt_success = regist_signals(); if (resigt_success == 1)` 改为
  `if (regist_signals() == 1)` 直接检查；残留仅 `xor` 折叠与 nop 对齐。

### 6. `PvPBuddyInfo` 构造（27 == 27，助记符一致）
- memset 移到字段清零之后（与原始语句顺序一致）。

### 7. `CNetworkSession::OnRecv`（45 vs 41 → 45 vs 39，结构正确）
- 主路径在前（`if (size > 0)`），size<=0 判定在函数尾部（`jle` 越过主路径）；
- 残留为 `== 1` 的 xor 物化差异（4.4.4 折叠）。

### 8. `res_add_buddy`（DIFF → NEAR，channel_no 类型修正的连带收益）

## 语义验证（防误改）

- `ConvertGBKtoUTF8`/`ConvertUTF8toGBK` 的 `xor eax,1` 曾疑似语义反转，逐条追踪
  原始 je 目标确认：`je → mov eax,1`（成功返回 1），与我们的 `ret == '\x01'` 语义
  **一致**，仅代码生成（xor 物化 vs sete）不同。

## 本轮结束指标

| 指标 | 本轮前 | 本轮后 |
|---|---|---|
| 项目函数 DIFF | 92 | **88** |
| 项目函数 NEAR | 318 | **322** |
| 项目函数助记符级精确 | 398/490 | **402/490（82.0%）** |
| 文件大小 | 974,376 | 974,376（+6.5KB，结构差异不变） |
| 符号 MISSING/EXTRA | 2/7 | 2/7 |

## 剩余 88 个 DIFF 的定性

全部为 gcc 4.4.4 与原始编译器的 -O0 生成差异：
- bool 比较的 xor 物化（`== false` 已利用，`== 1`/返回物化无法再逼近）；
- bool 的寄存器（AL）vs 栈槽分配；
- 分支块布局（如 OnRecv 已尽量贴近）；
- 大函数（main、CFileLogWriter、WaitForEvent）的组合差异。

