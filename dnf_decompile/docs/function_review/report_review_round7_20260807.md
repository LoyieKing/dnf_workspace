# df_community_r 第七轮复核：bool 返回类型 + 指针局部变量模式（2026-08-07）

## 本轮模式发现

第六轮确认 `if (bool() == false)` 产生 xor 惯用法。本轮进一步系统化：

1. **bool 返回类型是关键**：`if (bool函数() != 1)` / `== false` / `!bool函数()` 在
   gcc 4.4.4 都产生 `xor eax,1; test al,al`；而 int 返回的函数比较 `!= 1` 只产生
   `cmp; setne`。原始多处调用点有 xor → 证明被调函数原始为 **bool 返回**。
2. **指针局部变量**：原始遍历常先复制指针局部（`char* p = data; *p++`），而非
   `data[i]` 下标；复制后可消除临时变量与重复寻址。

## 本轮源码修复（DIFF 92 → 83，NEAR 318 → 327）

| 函数 | 修改 | 结果 |
|---|---|---|
| `check_myself` | 去掉 `STPvPBuddyDBInfo& buddy` 临时引用；`needUpdate` 不初始化 | 93 vs 91 |
| `Hex2Char` | 返回类型 int → **bool** | 连带 Hex2Binary |
| `Hex2Binary` | bool Hex2Char + `!= 1`；`*out++` 指针递进替代 `out[count]` | **29==29 助记符全等** |
| `Binary2Hex` | `unsigned char const* p = data; *p++` 替代 `data[i]` | **30==30 助记符全等** |
| `CharacSetSwitch` | iconv_open 失败直接 return 0；iconv 结果存局部；错误分支在前 | **76==76 助记符全等** |
| `SetSocket` | `!SetNonblock(sock)` 直接检查（去 bool 中间变量） | **21==21 ALIGNED** |
| `NetworkSession::CreateListenSocket` | 底层改 bool 返回 + `== false` 提前返回 | **58==58 NEAR** |
| `CAbstractSocket::CreateListenSocket` | 去 `sock` 中间变量（socket() 直写 outputSocket）；ip!=NULL 分支在前 | MISALIGN→MINOR |
| `GetCurrentResetBaseTime` | `int localHour = 0; localHour = hour;` 双赋值（匹配原始零初始化槽） | **52==52 ALIGNED** |

## 通用模式总结（可复用于其余函数）

- 比较 `X == 1`/`X != 1` 出现 `cmp+setne/sete`（而非 xor）→ 被调函数应返回 bool；
- 循环体出现多余 `mov [ebp],eax` 临时 → 原始用指针局部变量递进；
- 原始失败分支在尾部（jne/je 越过主路径）→ 源码用 `== false` 提前返回或错误分支前置；
- 原始有零初始化局部（`mov [ebp],0`）→ 源码为 `int x = 0; x = 值;` 双赋值。

## 本轮结束指标

| 指标 | 第六轮后 | 本轮后 |
|---|---|---|
| 项目函数 DIFF | 88 | **83** |
| 项目函数 NEAR | 322 | **327** |
| 助记符级精确 | 402/490（82.0%） | **407/490（83.1%）** |
| 本轮 ALIGNED | - | SetSocket、GetCurrentResetBaseTime |
| 本轮助记符全等 | - | Hex2Binary、Binary2Hex、CharacSetSwitch |
| 文件大小 | 974,376 | 974,376（结构差异不变） |
| 符号 MISSING/EXTRA | 2/7 | 2/7 |

## 剩余 83 个 DIFF 定性

- 大函数（main 1335 vs 1393、CFileLogWriter C1/D1/writeLog、WaitForEvent、SDC_Rand、
  send_buddy_list）：组合型布局差异（循环条件物化 setb/seta、EH cleanup、分支块顺序）；
- 中等函数（Trim、ExplodeString、OnRecv、Connect、AcceptSocket、PrintBackTrace）：
  循环条件物化与参数装载顺序；
- 均已确认语义一致，剩余差异为 gcc 4.4.4 与原始编译器的 -O0 生成差异。

