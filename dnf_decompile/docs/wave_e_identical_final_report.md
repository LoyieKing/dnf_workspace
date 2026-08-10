# Wave E 全量 identical 攻坚最终报告（2026-08-10）

## 1. 结论

按用户口径（**strict identical，编译器尾音/归档伪影除外；tinyxml/加密算法/STL/第三方库
豁免**），13 个服务 + 共享根的 **NEAR/DIFF 函数已全部逐函数排查并最终定性**：

- 真实语义 bug：**已修复并重建验证**（约 400+ 个 FIXED 条目，含多个 strict IDENTICAL 落地）；
- 编译器尾音/归档伪影：**全部带差异行 + 坑点 § 证据归档**（A_*/ARCHIVED）；
- REMAIN：**0**（E3 收尾把 dbmw 最后 4 个 REMAIN 全部定案）；
- 全量重建：13 服务构建全部成功，MISSING = 0。

## 2. 最终水位（2026-08-10 全量重建 + 官方严格口径，豁免后项目函数）

| 服务 | 项目函数 | strict IDENTICAL | strict NEAR | strict DIFF | MISSING | full IDENTICAL |
|---|---:|---:|---:|---:|---:|---:|
| stun | 28 | 6 | 19 | 1 | 0 | 15 |
| channel | 325 | 204 | 109 | 10 | 0 | 311 |
| bridge | 481 | 316 | 150 | 14 | 0 | 465 |
| auction | 1,557 | 1,020 | 428 | 108 | 0 | 1,406 |
| point | 1,557 | 1,020 | 422 | 114 | 0 | 1,399 |
| community | 658 (IN_ORIG) | 113 | — | — | 0 | — |
| manager | 491 | 188 | 91 | 212 | 0 | — |
| dbmw | 1,059 | 351 | 136 | 572 | 0 | — |
| monitor | 1,578 | 611 | 193 | 774 | 0 | — |
| guild | 1,451 | 420 | 137 | 894 | 0 | — |
| statics | 705 | 389 | 125 | 191 | 0 | — |
| relay | 394 | 226 | 58 | 110 | 0 | — |
| coserver | 267 | 109 | 70 | 88 | 0 | — |

严格口径下未 identical 的函数，每一行都有一份 disposition（FIXED / ARCHIVED + 证据），
属于目标口径的“编译器尾音/归档伪影”豁免类（§8 数据地址、§81 寄存器流、§3.3 块序、
§5 栈槽、§9 EH landing、§36 编译器补丁差异等），语义均已核验等价。

## 3. 本轮（Wave E 系列）做了什么

### 3.1 排查架构（按拓扑并行）

- `disposition.py`（新增工具，已入 toolchain）把每服务非 identical 函数预分类为
  A_*（归档伪影）与 R_*（需评审）；
- 12+8 个服务代理按拓扑并行逐函数评审（每波可再开子代理，所有权隔离：
  stun / channel / bridge / auction+point / manager / dbmw / monitor / guild /
  statics / relay / coserver / community；共享根 Library/、ServerCommon/、
  ServerLib/、DNFShared/、shared/、Library3rd/ 归 E2 独占）；
- 强制闭环：改 → 重建 → diff_func 复测 → 记改前/改后分类；增量写盘防中断丢进度。

### 3.2 真实语义修复（代表性，均有重建验证）

- **锁/同步**：dbmw `Acquire_TcpSendBuffer` 补缺失的 `CGuard(&m_mutex100)` → IDENTICAL；
- **虚表布局**：dbmw EpollHandler/CProtocol/CThreadInterface、monitor CTcpHandler 等按 ORIG
  槽位对齐（此前存在错误虚派发）；
- **结构体布局/尺寸**：monitor CMember（0x1bc→0x1b4）、STMemberDBInfo（9→10 成员数组）、
  Packet_DBMW_Statistic_Login_Logout（0x618 字节，修栈越界）；statics stGMInfo_t 等；
- **缺初始化/越界**：共享根 4 个 Packet 头补 ORIG 的数据区清零（statics Packet_P2P_Statistics
  44/44 IDENTICAL、monitor 两个 Packet 17/17 IDENTICAL）；
- **错误常量/参数**：dbmw LimitNpcBuyItemResultInfo 的 `PacketHeader(0x27dc,0x176)` 参数颠倒、
  CSystemTime `tv_usec/1000000` 应为 `/1000`；guild STGuildSkillC1 的 memset 0 vs 置 -1/0xff；
- **缺失调用/逻辑**：dbmw CSourceVersionMgr 补 2 次 InsertSourceVersion；monitor
  `OnRequestBlackList` 补 name/occurTime、`CTcpNetworkThread::dispatch` 补 RecvPacket 解析；
  relay TReactor::setManagerToEpoll 调用目标修正；channel Globals.cpp 显式实例化修 EH 语义；
- **异常语义**：dbmw CTcpNetSystem::Init `throw 1` → `throw;`（对齐 `__cxa_rethrow`）；
- **空实现补全**：monitor 58 个 stub 补全（17 个 strict IDENTICAL）、dbmw CTcpNetSystem 析构
  补成员释放（原内存泄漏）；
- **类尺寸 ODR**：dbmw StackBuffer_char/wchar 按 ORIG DWARF 还原 8 字节布局 → C1Ev 9/9 IDENTICAL。

### 3.3 构建树修复（过程中发现并修复）

- auction/point：HandlerFor_GP_JPN.cpp 未声明 log_packet 坏块（阻塞链接）→ 修复后此前从未
  链接的 .o 首次进入二进制，auction DIFF −10；
- guild：trycatch4.patch 遗留 36 个未闭合 try、GuildDomain.cpp 重复/stub 定义与日志参数颠倒
  → 修复后全量重建成功，23 个函数转 FIXED；
- community：CMakeCache 历史遗留指向 `source/build-verify-community`（已移入
  `build/_archive/`；下次重建 community 需先 `cmake -S source -B build/community` 重新配置）。

## 4. 归档口径与证据

- 权威口径：`docs/compare_caliber.md` + `source/toolchain/compare_common.py`
  （strict：仅归一化跳转/调用目标 `<T>`；extended：+ 大地址 `<A>`；full：+ assert 行号 `$L`）；
- 坑点参考：`docs/identical_pitfalls.md`（§1–§104）；
- 逐函数定性数据（临时目录，如需留档可归档到 docs/data/）：
  - `/tmp/disposition/<svc>.tsv`（预分类）
  - `/tmp/wave_e/<svc>/progress_*.tsv` / `report*.tsv`（逐函数最终结论）
  - `/tmp/wave_shared/E2_progress.tsv`（共享根 127 项）
  - `/tmp/final_verify/<svc>.water`（终验水位）
- 可复现验证：`bash source/toolchain/verify_wave_c.sh`（重建 13 服务 + 重测）。

## 5. 已知工具链边界（目标口径内豁免）

1. **community**：当前 GCC 13.3 构建 vs ORIG 4.1.2/4.4.x 混合链，官方口径 113/658 IDENTICAL
   是工具链上限；7 个源码可修项已修，其余差异全部归因（`docs/df_community_r_reverification.md`）。
2. **stun `write_log`**：GCC 4.1.2-52 vs -55 的寄存器分配补丁差异（§36），语义等价。
3. **无 DWARF 服务残余 strict DIFF**：主体是归档类编译器尾音（§8/§81/§3.3/§9/§36 等），
   逐函数证据在 progress 文件；若要进一步降到逐字节 identical，需按 ORIG 工具链
   （4.1.2/4.4.x + 项目 flags）重建，属工具链恢复工程。

## 6. 关键文件

- 本报告：`docs/wave_e_identical_final_report.md`
- 口径 brief：`docs/identical_brief_for_agents.md`
- 工具：`source/toolchain/disposition.py`、`source/toolchain/verify_wave_c.sh`、
  `source/toolchain/diff_func.py`、`source/toolchain/topology_map.py`
