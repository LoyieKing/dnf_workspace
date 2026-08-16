# Packet 结构一致性审计（2026-08-16）

按用户指令分块启动 9+ subagent，对 4 个服务全部 223 个被引用 Packet 做
结构审计：OURS 声明大小/字段偏移 vs ORIG 内存结构（ctor packetSize 常量 +
使用函数字段写入偏移，objdump 双向核对）。

## 结论

216 OK + 7 MISMATCH（全部已修复）

大量包命中"ORIG Ghidra 把包字段误当栈上局部变量"形态（包本体只显示
local_xx[10]、旁边跟大数组 local），经 objdump 证实这些"局部"恰落在包基址
+0xa 起的字段偏移上，OURS 定义均已包含 → Ghidra 拆分伪影，非缺字段。

## 7 个 MISMATCH 修复清单

| # | Packet | 服务 | 修复 |
|---|---|---|---|
| 1 | Packet_Monitor_ServerEvent_Start | monitor | 删多余 m_pad16（sizeof 0x14→0x12） |
| 2 | Packet_Item_Limit_Edition_Load_Data_Req | monitor | m_ipgNo[24]→[28]（0x73→0x83） |
| 3 | Packet_Notice_Guild_Mail_Arrived | dbmw | m_rest[0x28]→[0x24]（0x37→0x33） |
| 4 | Packet_Reply_Load_Tower_Full_Rank | dbmw | m_count char→int、补 m_totalCount、数据区+0x13 |
| 5 | Packet_Notify_New_Group_Mail | dbmw | m_pad[4]→int m_count，两调用点补写 |
| 6 | Packet_DB_Query_On_Guild_Booting | guild | 补 m_group +0xa（去 cast） |
| 7 | Packet_DB_Request_Guild_Secede | guild | m_pad35→m_masterId +0x35，补写 GetMasterId |

修复均为真实结构 bug（发送字节流与 ORIG 对齐），相关 commit：
0d4215ad / 06b0f427 / bd31c4d4 / 947fcdc5 / 971b3991。

原始逐行审计结果：/tmp/pkt_audit_result_{m1,m2,m3,d1,d2,g1,g2,g3,s1}.tsv
