# statics 剩余非 IDENTICAL 函数修复记录（2026-08-15）

## 改动文件

- source/DNFServer/GameServer/Statics/GMAccounts.h
- source/DNFServer/GameServer/Statics/Statistics.cpp

## 关键修复

### GMAccounts.h
- STPartyStatisticKey / STPartyJobStatisticKey / STPartyCharacKey / STHellPartyStatisticItemKey 的 bool 字段改为 unsigned char，匹配 ORIG 的 movzbl/movb 语义。
- SECRET_SHOP_STATISTIC_DATA 增加 packed，避免 Packet_Secret_Shop_Statistic 中 m_items 被自然对齐到错误偏移。
- STDeathTowerPlayDataJobWireItem 的 type/level 改为 signed char/short，匹配 ORIG 日志中的 movsbl/movswl。
- STDeathTowerPlayDataPartyWireItem 的 m_pad[4] 改为 m_playCount，匹配 ORIG 在死亡塔 party 上报中额外写入的 playcount。

### Statistics.cpp
- SendDBCirculationStatistic：按 ORIG 实际字段顺序重排 43 个 m_data 参数，修复 SQL 列错位。
- SendDBValueStatistic：改为早期 return 及 time(&now)，并只传实际 26 个 value 参数。
- SendDBSecretShopStatistic：iterator 在循环初始化处直接 begin，避免额外默认构造；已 IDENTICAL。
- 各 SendDB 溢出判断移除多余的 bool over 局部变量，改为直接 if，降低栈槽/EH 差异。
- SendDBDeathTowerPlayDataJobStatistic：playcount 在归一化前写入；characGrow/characJob 写入顺序对齐 ORIG；日志改为读上报包字段，消除 count/avg 局部变量。
- SendDBDeathTowerPlayDataPartyStatistic：playcount 在归一化前写入。
- SendDBAssertManagerStatistic / SendDBHellPartyStatisticItem：改用裸偏移直接写 packet，匹配 ORIG 寻址形式。

## 最终 scratch 验证状态

```text
_ZN16StatisticManager20SendDBValueStatisticEP14CServerHandler IDENTICAL_AE
_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler IDENTICAL
_ZN16StatisticManager26SendDBCirculationStatisticEP14CServerHandler IDENTICAL_AE
其余目标仍 DIFF
```

其余 DIFF 函数经逐条比对，语义/结构已对齐，剩余差异主要是：

1. `idx > N` 溢出判断，ORIG 为 `seta/test/je`，本工具链生成 `cmpl/jbe`；无法在 C++ 源码层稳定还原。
2. packed unsigned char/short 字段赋值的寄存器分配：ORIG 常直接 `movzbl -> edx/ecx`，本工具链有时 `movzbl -> eax -> edx`。
3. memcpy / 数组寻址的常数拆分不同（等价地址，但指令序列不同）。
4. Write* 系列中 map pair/EH 析构顺序和局部栈布局差异，多次尝试源码重排后未达到 IDENTICAL。

## 尝试后回退

- AddSecretShopStatistic 改为裸 `item/itemKey` 访问后增加额外局部变量，变差，已回退为 typed 成员访问。
- HWSpecResearcher::SendDBMWHWSpec 的 memcpy 改为裸偏移后增加额外地址计算，已回退为 typed 成员访问。

## 需 /root 或共享头处理的问题

- `source/DNFServer/GameServer/Statics/DNFDBServer.h` 中 `Packet_DBMW_Save_Client_Spec_Statistic::m_items` 与 `Packet_DBMW_Save_Error_Line_Statistic::m_items` 因包含非 POD/非 packed 字段而触发 “ignoring packed attribute”，影响 HWSpecResearcher 两个目标函数的精确对齐。该文件不在允许修改范围，未改动。
- `GMAccounts.h` 中 `Packet_Goldcard_Event_Statistic_STD`、`Packet_Avater_Disjoint_Statistic_DB` 仍有同类 packed 警告，但对应函数不在本次目标清单，未改动。
