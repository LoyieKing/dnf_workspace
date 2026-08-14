# 回归进度（2026-08-14）

## 官方 IDENTICAL 水位（HEAD 快照，本轮未全量重刷 md）

官方口径仍是 `compare_common` 严格归一化 + `IDENTICAL` / `IDENTICAL_AE`（md 删除）。
本轮只重链改过的 TU，**没有**跑 `gen_report_manifest` / `gen_function_md`，
因此下表仍是上一份官方快照，不能当作本轮翻盘数字：

| 服务 | IDENTICAL | IDENTICAL_AE | non-id |
|---|---:|---:|---:|
| coserver | 182 | 162 | 0 |
| statics | 576 | 225 | 42 |
| guild | 997 | 360 | 193 |
| monitor | 1074 | 421 | 184 |
| dbmw | 758 | 375 | 622 |
| manager | 514 | 255 | 480 |

scratch `classify_one`（对照 ORIG ELF，不写 `function_reports/`）对本轮改动函数：

| 函数 | scratch / 官方重链 |
|---|---|
| `stDisjointAvatarInfoTotal::clear` | IDENTICAL |
| `StatisticManager::AddDisjointAvatarInfo` | IDENTICAL |
| `StatisticManager::AddGoldcardEventStatistic` | IDENTICAL |
| `CMember::IncConnLowerMemberExp(int,...)` | IDENTICAL_AE |
| `incCount` / `AddTowerOfDespairStatistic` / `SendDBSecretShopStatistic` / `SaveFrameLagData` | 仍 DIFF |
| `SetCurTime` / `CollectGarbage` / `InsertMember` / `OnCheckOverlappedAccusation` | 仍 DIFF |
| `ReplyGuildMembersToWeb` / `OnPacketJoinPower` / `OnDBLoadReplyGuildBoardOpen` | 仍 DIFF |
| `CTcpNetworkThread::dispatch` | 仍 DIFF |

剩余 DIFF 对上的是编译器形态（`lea` vs `sub`/`add`、`insert` 传拷贝还是
`lea` 成员、三维数组下标溢出到栈、`make_pair` ABI、`r.second` 的 `je`/`jne`、
EH landing），不是字段错位或业务极性反了。

## 本轮源码修复（语义 / 类型 / 字段）

### statics

- 共享包补命名成员（packed + `TEST_CLASS_SIZE`）：
  - `Packet_TowerOfDespair_Statistic_GTS`：`m_padA` +0xa、`m_layer` +0xe、
    `m_enterFlag` +0x12、`m_serverId` +0x13，大小 0x17。
  - `Packet_Goldcard_Event_Statistic_GTS`：`m_level` +0xa、`m_createCnt` +0xb、
    `m_openCnt` +0xf，大小 0x13。
  - `Packet_Avater_Disjoint_Statistic`：`m_count` +0xa + `Item{m_a,m_b,m_c,m_d}[2]`
    +0xe，大小 0x28（包长只装 2 项，`count` 上限 2）。
- `stDisjointAvatarInfoTotal`：`m_count[3][9][2]` + `m_sum[3][9]` 替换
  `m_data[0x51]`；`clear` / `incCount` 走命名下标。
- `AddTowerOfDespairStatistic`：`m_enterFlag==0` → `m_success++`，否则
  `m_enter++` 并 `m_serverList.insert(m_serverId)`；if/else 顺序对齐 ORIG `je`。
- `SendDBSecretShopStatistic`：整项 `pkt.m_items[idx] = it->second`。
- `SaveFrameLagData`：读 `FrameLagDataLayout` / 写 `pkt.m_data`，去掉 `char*` 偏移。

### monitor

- `OnCheckOverlappedAccusation`：连接号走 `PacketHeader::m_connNo`（+0x6），
  名字/类型/结果走 `Packet_Check_Overlapped_Accusation` 成员。旧二进制读 +0xa 是错的。
- `IncConnLowerMemberExp(int,...)`：先 `count<=index` 打 0x284，再 `charNo`
  不匹配打 0x28c，否则 `exp+1` / `maxExp` 钳制。
- `InsertMember`：`r.second == 0` 才打 “Already Member Exist”。
- `CCacheCharacterTime::m_charNo`：`int` → `unsigned int`；`CollectGarbage`
  队列为空先返回。
- `SetCurTime`：`tm_year - 0x64`、`tm_mon + 1`，不再多声明局部再回写。

### guild

- `ReplyGuildMembersToWeb`：`empty()` 时直接 `return 0`；记录写
  `info->m_members[count].m_charNo` / `.m_channel`。
- `OnPacketJoinPower` / `OnDBLoadReplyGuildBoardOpen`：先测 `m_pclApp != 0`，
  字段走正式 `Packet_Request_Join_Power` / `Packet_DB_Load_Reply_Guild_Board_Open`。

### dbmw

- `CTcpNetworkThread::dispatch`：`m_net==0` 是 `continue` 不是 `break`；
  `errno==4` 继续；`errno!=0` 直接 `return`（不打 Terminate）；发送长度按
  无符号和 `0x1800` 比。

manager 第三方 mysql/charset 未动。

## 辅助工具（非正式 IDENTICAL）

| 脚本 | 作用 |
|---|---|
| `source/toolchain/install_cozy.sh` | 隔离 venv：cozy-re 1.5.4 + angr 9.2.130 + pycparser 2.x |
| `source/toolchain/cozy_compare.py` / `cozy_sweep.py` | cozy 符号执行；`SEMANTIC_EQ` / `PATH_*` **不是**官方 IDENTICAL |
| `source/toolchain/simdiff_compare.py` | angr 路径对比备选 |
| `source/toolchain/objdiff_extract.py` / `objdiff_sweep.py` | 把 FUNC 抽成 ET_REL 再跑 objdiff-cli；低分多半是编译器形态 |

objdiff 必须先抽成 ET_REL：直接对 `df_*_r`（ET_EXEC）会失败。

## 构建注意

全量 `cmake_build_all` 仍会被无关 TU 挡住（statics `SendTestPacket_1` 字段名、
monitor `DNFProhibitUserC5` 的 c5 头、dbmw `DNFPacketTranslater`）。本轮用
scratch 重编改过的 TU，再拷进 `build/<svc>/` 用 `link.txt` 重链。

官方 md / manifest **不要**在未全量重建时手改。
