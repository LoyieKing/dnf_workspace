# 非 IDENTICAL 归零：会话检查点（2026-08-15）

目标：把 dnf_decompile 四个服务（dbmw / guild / monitor / statics）的非 IDENTICAL 函数往官方 IDENTICAL / IDENTICAL_AE 收。
官方口径：`source/toolchain/gen_function_md.py --check-only` → `compare_common.norm_identical`（只把 `j*` / `call` / `loop*` 目标归一成 `<T>`）。
本文件是会话结束时的进度，**不是**全量重刷后的 manifest。不要手改各服务 `manifest.tsv`。

## 本轮完成了什么

1. 父代理手读 334 个 PATH_EQ 非 IDENTICAL 函数 md，判定写在 [path_eq_semantic_judgments.md](path_eq_semantic_judgments.md)。
2. 168 个 path-eq 不成立函数（见 [path_eq_failures.md](path_eq_failures.md)）按服务拆开修：
   - dbmw / guild / monitor：子代理已跑完（结果在中断后仍保留在源码树）。
   - statics 5 个：两个子代理中途死掉，父代理接手手修到本检查点。

## 168 汇总

| 服务 | 目标数 | IDENTICAL / AE | NEAR | 仍 DIFF | 备注 |
|---|---:|---:|---:|---:|---|
| dbmw | 41 | 2 AE | 4 | 35 | C2 不再 MISSING |
| guild | 72 | 0 | 0 | 72 | C2 与 C1 同址；若干已接近 leftover |
| monitor | 50 | 1 ID + 2 AE | 3 | 44 | 大 PacketTranslater 仍缺 send/loop |
| statics | 5 | 0 | 0（官方仍 DIFF；Job/Ting 只剩 leftover） | 5 | 父代理手修；check-only 全 DIFF |
| **合计** | **168** | **5** | **7** | **156** | 官方 IDENTICAL 未全量重扫 |

NEAR 是控制流已对齐、剩栈槽 / CSE / 寄存器；官方分类器仍报 DIFF。上表 NEAR 只计 dbmw 4 + monitor 3；statics Job/Ting 虽接近，但 check-only 仍是 DIFF，不算官方 NEAR。

## dbmw 已翻盘

| 函数 | after | 改动 |
|---|---|---|
| `_ZN10CDBManager27UpdateCreateEmblemStatisticEP33Packet_Emblem_Create_Statistic_DB` | IDENTICAL_AE | exec 失败才打日志 |
| `_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader` | IDENTICAL_AE | unused=0；reply 在各分支内构造 |

NEAR：`GetCoinEventPerDay`、`OnSavePowerWarUserRank`、`OnSavePowerWarGuildRank`、`QueryOnTimeEventIdxUpdate`。

子代理 id（历史）：`01a00389-1ee8-7002-a11a-4956a1b1e607`。
独占源码树：`source/DNFServer/GameServer/DBMW/`。不要改 ServerCommon / shared / packet 头。

## monitor 已翻盘

| 函数 | after | 改动 |
|---|---|---|
| `_ZN10CTowerRank16registCharacRankEjPKcjj` | IDENTICAL | `insert(make_pair(name, stTowerRankElement_t(...)))` |
| `_ZN13CAppStartInit11Init_DaemonEiPPc` | IDENTICAL_AE | `register bool failed=!Save_pid(...)`；`Save_pid` 改为 `bool` |
| `_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv` | IDENTICAL_AE | 空队列早退；`make_pair((int)fd, peer)` |

NEAR：`ProcessByMinute`、`registItem`、`CBuddyHandle::delDB`。

子代理 id（历史）：`01a00389-1ee9-79f0-8848-0497c9b389e8`。
独占源码树：`source/DNFServer/GameServer/Monitor/`。

## guild

官方 72/72 仍 DIFF。较近 leftover：
`TcpProcess` / `UdpProcess`（CF 已对齐，5 字节尺寸差）、
`NoticeEnter` / `NoticeSecede` / `NotifyCreateGuildAgit`（2–3 nop）、
`OnGameServerRegist`（lea vs add）、
C1/C2 别名（`mov %ebx,%eax` vs `%edx`）。

大洞：`ReplyGuildMembers` / `ReplyGuildAllMembers` 缺循环体；
Agit DB 回复先查失败字段；cargo 包构造顺序；大量 `On*` 的 `sete` vs `cmpl/je`。

子代理 id（历史）：`01a00389-1ee9-79f0-8848-048808d40d5e`。
独占源码树：`source/DNFServer/GameServer/Guild/`。

## statics（父代理手修到此，5/5 仍 DIFF）

独占源码树：`source/DNFServer/GameServer/Statics/`。
二进制：`build/statics/df_statics_r`（本检查点已与源码对齐重链）。

| 函数 | ours | orig | leftover |
|---|---|---|---|
| `_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job` | `0x1e1` | `0x1df` | 只差 `insert(make_pair)` 的 make_pair 临时 pair 析构落点：ORIG 在 insert 后立刻 `~pair` make_pair 结果；OURS 把这次 dtor 挪到 EH landing 之后 |
| `_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add` | `0x2f4` | `0x2f5` | 同上 dtor；另 `1000 < size()` 编成 `seta`，不是 ORIG 的 `ja` + `mov $0/$1` + `test` |
| `_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler` | `0x666` | `0x63e` | packed `Item` 物化指针；缺 `edi`；帧 `0x1f0` vs `0x1fc`。ORIG 内层循环反复 `lea …; sub $0x177` |
| `_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add` | `0x52b` | `0x51d` | `is_valid` 已对上 `xor $1`；剩 match `cmpb` vs `movzbl`、栈槽、pkt/index 取址顺序 |
| `_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec` | `0x422` | `0x41a` | `end()` / `find()` 槽位；pkt 与下标取址顺序 |

### 盘上保留的源码形态

`Statistics.cpp`：

```cpp
// Job
if (m_partyJob.empty() || it == m_partyJob.end())
    m_partyJob.insert(std::make_pair(key, value));
else {
    PartyJobStatistic* p = &it->second;
    *p += value;
}

// Ting
if (m_userTing.empty() || it == m_userTing.end())
    m_userTing.insert(std::make_pair(key, 1));
else {
    int* p = &it->second;
    *p = *p + 1;
}
if ((int)key.m_minute < 0xb && 0 < (int)key.m_minute) {
    if (1000 < m_tingUser.size()) {
    } else {
        // find + empty||end → insert(make_pair(pkt+0xe, key.m_minute))
    }
}
```

`GMAccounts.h`：`STPartyJobStatisticKey` 的 +9..+0xc 保持 `char`（ORIG 字节拷贝，不是 bool `setne`）。

`FrameLagCollector.cpp` / `.h`：

- `is_valid_statistic_packet` 已改成 `bool`；PushOne 用 `if (!is_valid_statistic_packet(pkt)) return 4;`，对上 ORIG `xor $1`。
- PushOne：`if (m_field4 != 2) return 2;`；`char match = 1;` + `if ((int)match == 1) { … goto MATCH_DONE; }` 链；`MATCH_DONE:` 后再 `if (match)`。
- ReloadSpec：`if (m_field4 != 2) return 2;`；`if (field19 == pkt.fieldA) { iterator e = end(); iterator found = find(pkt+0xb); if (found == e) {} else { … } } return 0;`
- SaveFrameLag：`if (m_field4 != 2) return 2;`；`if (m_field10 >= m_collectInterval)`；`pkt.m_items[k].m_s[]` / `m_pair[][]` 直接写，**不要**缓存 `operator->()`。
- `UdpCharacteristic.h`：`Packet_Frame_Lag_Statistic_Write_Lag_Index` 仍 `__attribute__((packed))`。

### 试过但会打远、已撤回

| 实验 | 结果 |
|---|---|
| 命名 `std::pair tmp = make_pair(...)` 再 insert | 走 copy-ctor 不是 converting-ctor；Job leftover 从 17 跳到 83 |
| ReloadSpec 显式 `return 0` / `if (field4 == 2) {…} return 2` | ORIG 是 `je` 落到后续、失败路径 `mov $2; jmp epilogue`；OURS 变成 `jne` 早退 |
| GNU 语句表达式 `({ insert(make_pair); })` | 析构落点不变 |
| 多余花括号包住 insert | 析构落点不变 |
| SaveFrameLag overlay `WriteLagShorts` / `WriteLagPairs` + `char* rec = it.operator->()` | 尺寸掉到 `0x5f3`（ORIG `0x63e`），少调 `operator->()` |
| Ting 显式 `char b` / `goto TING_SKIP` 物化三分条件 | 尺寸从 `0x2f4` 涨到 `0x2fd` / `0x306` |
| PushOne 合并 9 条 match 到一个 `if (match==1)` | 丢掉每段开头的 `movzbl; cmp $1; jne` |
| `int* p0 = &fd->second.m0` | 多占栈槽，两次 `operator->` |

### statics 重建配方（下次直接用）

`/tmp/c6root` 等应已软链到 `dnf_decompile/toolchains/`。statics 官方驱动是 **c6root g++ 4.4.7**（`dnf_c6_gxx.sh`），不是 4.4.6 `cc1plus`。

```bash
export DNF_TC_ROOT=/home/loyieking/dnf_workspace/dnf_decompile/toolchains
# flags.make 必须 shlex.split，不能当一个 argv
python3 - <<'PY'
import os, subprocess, shlex
from pathlib import Path
root = Path("/home/loyieking/dnf_workspace/dnf_decompile")
flags = None
for line in (root/"build/statics/CMakeFiles/statics.dir/flags.make").read_text().splitlines():
    if line.startswith("CXX_FLAGS"):
        flags = shlex.split(line.split("=",1)[1].strip())
        break
gxx = str(root/"source/toolchain/cmake/dnf_c6_gxx.sh")
objdir = root/"build/statics/CMakeFiles/statics.dir/home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/Statics"
env = os.environ.copy(); env["DNF_TC_ROOT"] = str(root/"toolchains")
for name in ("Statistics.cpp", "FrameLagCollector.cpp"):
    cmd = [gxx] + flags + ["-o", str(objdir/ (name+".o")), "-c",
                           str(root/"source/DNFServer/GameServer/Statics"/name)]
    subprocess.check_call(cmd, env=env)
PY
cd /home/loyieking/dnf_workspace/dnf_decompile/build/statics
env -u LD_LIBRARY_PATH bash CMakeFiles/statics.dir/link.txt
# 单函数：
python3 source/toolchain/gen_function_md.py --services statics \
  --function <MANGLED> --new-bin build/statics/df_statics_r --check-only
```

`--check-only` **不写** md。leftover 要用脚本按 `norm_identical` + `pseudo_lines` 自己 dump。md 头上的尺寸可能是旧的。

不要跑 `cmake` 重配：`dnf_toolchain_44.cmake` 缺失，`cmake_check_build_system` 会坏。

## 334 PATH_EQ 人工判定（已完成，不要重做）

见 [path_eq_semantic_judgments.md](path_eq_semantic_judgments.md)。

| 判定 | 数 |
|---|---:|
| SEM_EQ | 180 |
| SEM_EQ_CLAMP | 2 |
| SEM_EQ_EH | 10 |
| SEM_EQ_CONST_FOLD | 1 |
| SEM_EQ_SHAPE | 121 |
| SEM_DIFF | 20 |
| 合计 | 334 |

这 20 个 SEM_DIFF **不在** 168 集合里：PATH_EQ 成立，但字段 / 行号 / 钳位 / 步长不对。尚未开修。

| 服务 | 函数 | 原因 |
|---|---|---|
| dbmw | `selectCollectItems` | get_int 列号 $2/$3 vs $0/$1 |
| dbmw | `QuerySubGuildMaster` | 扫描步长 add $8+0x2d vs add $0x20+setl |
| dbmw | `SendGuildCoinByMail` | OURS 多 movl $0 写 0x8 |
| dbmw | `QueryParty*StatisticCreate` ×3 | 统计项步长 $0x14 vs $0x10 |
| guild | `OnRequestBlackList` | 行号写死 $0x19f |
| guild | `OnRequestGuildCreate` | 写死 $0x2d |
| guild | `OnWebGuildBoardDelete` | 字段整体 +2 |
| guild | `OnDBMWDeleteToBlackList` | 写死 $0x31 |
| guild | `OnNoticeGuildMailArrive` | catch 多 printf |
| guild | `OnDBMWResisterToBlackList` | 写死 $0x31 |
| guild | `OnNoticeGuildWarPointChange` | 多 printf + 错字符串 OnNoticeGuildWarEnd |
| monitor | `setLoadTerm` | 0x708 vs 0x707 |
| monitor | `OnEventItemUpdate` | 行号 0x4c3/0x4c9 vs 0x4dd/0x4e3 |
| monitor | `OnDBMWResponseBlackListOnLogin` | 0xdc4 vs 0xdc3 |
| monitor | `SendToClient` | `$0x61` vs `$0x60` |
| monitor | `RecvFromClient` | `$0x58` vs `$0x58`+$0x68 |
| statics | `SendDBPartyStatistic` | 字段 0xe vs 0x1a |
| statics | `AddSecretShopStatistic` | 步长 $0x10 vs $0x18/$0x1c |

## 约束（续做时不要破）

- 四个服务源码树不重叠；不要改 ServerCommon / shared / packet 头（其它服务共用）。
- C++98 / 32-bit / `-O0` / `-std=gnu++0x`；最小可审计改动。
- leftover 只允许：寄存器重排、独立 load 重排、lea-vs-add、jcc 长度偏移。
- 不要再派 statics 子代理（两次都死了）。
- 不要重做 334 判定。
- 不要动已完成的 dbmw / guild / monitor 树，除非明确去收那 151 个 DIFF。
- manager / coserver 不在本批 PATH_EQ 里。

## 下次从哪接着

1. 继续 statics 5 个：优先 Job/Ting 的 make_pair 析构落点（不能命名临时量；GNU stmt-expr 无效）。Ting 的 `size()<=1000` 需要 ORIG 那种 `ja` 到共享 `b=false` 标号，且不能把尺寸拉过 `0x2f5`。
2. SaveFrameLag：按 ORIG 的 `lea -0x18(%ebp); add; sub $0x177` 寻址，每次字段访问都重新 `operator->()`，并找回 `push %edi` / 帧 `0x1fc`。
3. PushOne / ReloadSpec：match 用 `movzbl` 提升再 `cmp $1`；ReloadSpec 先 `end` 再 `find`，且不要多 named iterator 槽。
4. 收完 statics 再回头看 168 里剩下的 151（dbmw 35 + guild 72 + monitor 44）。
5. 20 个 PATH_EQ SEM_DIFF 另开一轮，不在 168 里。

## 相关文件

- 334 表：[path_eq_functions.tsv](path_eq_functions.tsv)
- 334 判定：[path_eq_semantic_judgments.md](path_eq_semantic_judgments.md)
- 168 名单：[path_eq_failures.md](path_eq_failures.md)
- cozy path-only：[cozy_path_only_results.md](cozy_path_only_results.md)
- 寄存器-only 语义相等：[register_only_semantic_equal.md](register_only_semantic_equal.md)
