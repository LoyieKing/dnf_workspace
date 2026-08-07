# df_community_r 第八轮复核：`-1 < ret` vs if/else 返回形态辨析（2026-08-07）

## 本轮发现：原始二进制的两种"非负判断"返回形态

对 `epoll_ctl/fcntl/sigaction/access` 等系统调用结果做 `ret >= 0` 判断时，原始二进制
存在**两种不同代码形态**，对应不同源码写法：

| 源码形态 | 原始代码生成 | 可否用 gcc 4.4.4 复现 |
|---|---|---|
| `if (ret < 0) return false; else return true;` | `cmp X,0; jns ret1; mov eax,0; ret1: mov eax,1` | **可**（Send、SetNonblock 已对齐） |
| `return -1 < ret;` | `shr eax,0x1f; test al,al; je ret1; mov eax,0; ret1: mov eax,1` | 不可（4.4.4 生成 `not eax; shr eax,31`，无分支） |

本轮误改后回退的教训：不能凭语义等价就统一改写，必须先看原始反汇编的形态。

## 本轮源码修复

| 函数 | 修改 | 结果 |
|---|---|---|
| `CNetworkSession::Send` | `return ret > -1;` → 显式 if/else 返回 | **18==18 ALIGNED** |
| `CAbstractSocket::SetNonblock` | `return -1 < r;` → 显式 if/else 返回 | **24==24 ALIGNED** |
| `regist_signal` | 尝试 if/else → 回退 `return -1 < ret`（原始为 shr 形态） | 38 vs 36（编译器差异） |
| `RegisterSession`/`UnregisterSession` | 尝试 if/else → 回退 `return -1 < ret` | 30==30 / 27==27（编译器差异） |

## 本轮结束指标

| 指标 | 第七轮后 | 本轮后 |
|---|---|---|
| 项目函数 DIFF | 83 | **81** |
| 项目函数 NEAR | 327 | **329** |
| 助记符级精确 | 407/490（83.1%） | **409/490（83.5%）** |
| ALIGNED 新增 | - | Send、SetNonblock |
| 文件大小 | 974,376 | 974,376 |
| 符号 MISSING/EXTRA | 2/7 | 2/7 |

## 剩余 81 个 DIFF 定性（本轮复核新增结论）

- `check_pidfile`：`return ret == 0` 的返回物化差异（原始 test+sete+test+je+mov，4.4.4 直接 cmp+sete）；
- `AcceptSocket`/`Parsing`/`get_rand_int`：寄存器分配（ebx 保存 vs leave、lea vs sub）；
- `main`：buffer 清零 rep-stos 与手写循环的寄存器形态差异；
- `WritePID`/`CFLog`：sete/test 物化与栈槽差异；
- 均已确认语义一致，为 gcc 4.4.4 与原始编译器的 -O0 生成差异。

