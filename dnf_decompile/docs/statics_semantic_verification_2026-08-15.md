# statics 残留函数语义验证（2026-08-15）

## 背景与口径

本轮把 statics 非 identical 从 83 降到 26（25 DIFF + 1 NEAR，官方口径：
IDENTICAL 581 / IDENTICAL_AE 236）。剩余 26 个全部是纯编译器形态
（寄存器分配、栈槽/位移拆分、EH landing-pad 摆放、nop 补齐、浮点比较指令
形态、`lea` vs `add`、双重零扩展等），源码写法无法在 c6446r 下逐条对齐。

按用户口径，对这些函数做**逐一大块的语义判定**：任何大块汇编不同 → 判不同；
小块不同 → 详判原因，属于编译器形态且语义等价 → SEMANTIC_EQ。

判定方式：3 个只读子代理逐函数阅读 md（含两侧汇编全文 + diff + Ghidra 伪 C
+ 源码），禁止任何 shell 副作用操作。

## 语义判定结果（26 个）

### 真实语义差异（4 个，均已修复）

| 函数 | 问题 | 修复 |
|---|---|---|
| `CNetworkThread::dispatch` | 0x81/0x8d 两条错误分支的日志字符串
  "Packet Size is Over!"/"Recv Byte is Over!" 互换 | DNFNetworkThread.cpp 对调 |
| `StatisticManager::SendDBLagStatistics` | module 循环 average/count 分子对调
  （且 count 应为有符号 idiv）；dungeon 循环 first_*/boss_* 两组字段对调 |
  Statistics.cpp 按 ORIG 除法链重排（修复后 diff 276→24 行） |
| `FrameLagCollector::PushOneFrameLagData` | `m_b[module+8]` 越界到 m_c 区域，
  ORIG 为 `m_b[module]` | FrameLagCollector.cpp 下标去掉 +8 |
| `FrameLagCollector::PushMonitoringSpecData(Load_Spec)` | find 分支方向与 ORIG
  相反（ORIG 在 key 不存在时执行插入体） | FrameLagCollector.cpp 改为
  `if (find == end) { body }` |

### SEMANTIC_EQ（22 个，纯编译器形态）

Statistics.cpp（SendDB/Write/Add 组）：
- `SendDBPartyStatistic` — 13 个 m_data 落点逐一相同，仅位移拆分/寄存器分配/
  跳转偏移
- `SendDBPartyJobStatistic` — 仅寄存器分配、一处 `-0x17d5+0x13 ≡ -0x17d1+0xf`
  位移拆分
- `SendDBPartyCharacStatistic` — 13 个 m_data 目的偏移一致，sub/disp 拆分不同
- `AddSecretShopStatistic` — 四次累加源/目标一致，位移拆分与等价算式
- `AddTowerOfDespairStatistic` — 指令序列相同，尾部多一组 nop+jmp 补齐
- `AddLagStatistics` — 栈帧/槽位整体平移、key 局部物化、落地垫链式合并
- `AddLoadingTimeReportStatistics` — insert 路径字段一致，目标平移/寄存器分配
- `WriteDungeonPartyStatistic` / `WriteDungeonPartyCharacStatistic` /
  `WriteDeathTowerPlayDataJobStatistic` / `WriteDeathTowerPlayDataPartyStatistic` /
  `WriteHellPartyStatisticItem` — 仅 EH landing-pad 块摆放（块内指令逐条相同）

FrameLag/杂项组：
- `SendDBLagStatistics` 修复后的残余 — 模块数组地址折叠（`add $0x37; shl $4`
  vs `add $0x37c`），24 行
- `SaveUsedMemory` / `SaveFrameLagData` / `accFrameLagStruct` /
  `FrameLagDataStruct::init` / `SaveCollectedDirectxVersion` — 寄存器分配、
  地址拆分、栈槽平移
- `PushMonitoringSpecData(Reload_Spec)` — 分支极性一致，仅栈槽互换/地址计算
- `is_valid_statistic_packet` — `fucompp+fnstsw+sahf` vs `fucomip+fstp` 浮点
  比较形态，条件/极性/常量一致
- `CHWSpecResearcher::SendDBMWHWSpec` / `SendDBMWErrorLine` — lea/add 形态与
  寄存器分配
- `CPacketTranslater::OnFrameLagStatisticsAdd` — 寄存器分配、lea/add 拆分、
  冗余 movzbl 双重零扩展

## 编译器实验（EH pad 摆放问题）

ORIG 的 Write* 函数使用「内联 EH landing pad」，c6446r 输出「独立块 + jmp」。
尝试过以下组合，均无法复现 ORIG 排布：

| 变体 | 结果 |
|---|---|
| c5（GCC 4.1.2-55）逐 TU | 0 修复、12~50 个/TU 回退（不支持 C++0x） |
| c6444r（4.4.4-13）逐 TU | 与基线完全一致 |
| c6（4.4.7）逐 TU | 与基线完全一致 |
| c6446r 去掉 `-fno-enforce-eh-specs` | 与基线完全一致 |

ORIG 的 Write* TU 含 C++0x `make_pair`（`__decay_and_strip ... OS6_`），
证明其编译器为 4.4.x；4.4.4/4.4.6/4.4.7 在 O0 下对当前源码形态生成的 EH
布局相同，均非 ORIG 排布。该差异属编译器内部异常表生成行为，无源码开关。

## 最终状态

- 官方口径：IDENTICAL 581 / IDENTICAL_AE 236 / DIFF 25 / NEAR 1（26 非 identical）
- 26 个全部经逐一大块语义判定：22 个 SEMANTIC_EQ；4 个曾为 SEMANTIC_DIFF，
  已修复后重新判定为仅编译器形态残留
- 构建：`build/statics/df_statics_r`（c6446r，全量重建）
