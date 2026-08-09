# QueryReloadSpecDb 重构笔记（2026-08-09，已完成）

原版：`_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer`
（0x0807b8f8，494 条；完整反汇编见 /tmp/reloadspec.txt，重启后需重新导出）

## 签名
- `(Packet_Frame_Lag_Statistic_Reload_Spec* req, CStatisticsServer* stats)`
- h = m_handles[0xf]（+0x3c）

## 已完成（实现细节）
- 494 vs 511 条，DIFF 仅为系统性代码生成形态（xor/sete、寄存器、lea vs
  位移寻址——非对齐 int 字段因工具链无法打包，多 ~17 条）
- 结果包**每包 6 条**（不是 3 条！）：count = n_rows/6，余数 +1
  （0x2aaaaaab 是 ÷6 魔数）；循环 i%6==0 时发包；收尾 i∈1..5 时 sid[i]=-1
- 12 列 getter 与 statics 原版 PushMonitoringSpecData(Reload_Spec) 接收侧
  逐列核对一致（sid@0x13+4i、ts@0x2b+4i、0x43/0x5b/0x61/0x67/0x7f/0x97/
  0xa3/0xbb/0xd3/0xdf 各列）
- 附带 4 个 Frame_Lag 包 ctor 全部 IDENTICAL
  （Collect_Interval_Check 0xc2f/0xc、Result_Reload 0xc2a/0xe5、
  Result_Load 0xc28/0xe5、Spec_Delete_Notify 0xc2e/0xe）

## 发现：statics 重建端接收偏移错误（待修 statics）
- statics ORIG（0x08067164）读 pkt+0x13+4i 等偏移，与 dbmw 发送端一致；
  `source/statics/StaticsStatistic.cpp` 的 PushMonitoringSpecData(Reload_Spec)
  却按 +0x18+i*0x38 读——与它自己的 ORIG 不符，属 statics 重建 bug。
  修复 statics 时以 ORIG 0x08067164 为准。

## 依赖
- Packet_Frame_Lag_Collect_Interval_Check（0xc2f/0xc）
- Packet_Frame_Lag_Statistic_Result_Reload_Spec（0xc2a/0xe5）
- CStatisticsServer::SendToServer（已实现，0x10 同构类）
