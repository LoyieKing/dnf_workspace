# InsertFrameLagStatistics 重构笔记（2026-08-09，已完成）

原版：`_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer`
（0x0807bf9c，433 条）

## 实现（433 vs 486，系统性代码生成差异）
- h = m_handles[0xf]；set_query 均不检查返回值，exec 失败 return 0
- sql1(0x4e8c) 14 列：specId(+0xb %d)、shareRate(+0x177，from_unixtime %d)、
  serverGroup(+0xa %hhd 有符号 char)、crashVillage(+0xf %u)、+0x13..0x21
  八个 %hu、+0x23/+0x25 两个 %hd（movzwl+cwtl 符号扩展）
- kind 0..5 循环：跳转表选表名 strncpy(buf, name, 0x20)，
  default memcpy("___MAX_FRAME_LAG_STATISTISCS_KIND over", 0x20)
  （village/dungeon/challenge/wararea/fight_village/dead_tower_lag_index）
- sql2(0x4e8d) 20 列：%s 表名 + specId/shareRate/serverGroup/crashVillage +
  4×%hd(+0x27..0x2d) + 6×(%d int, %.3f float→double)（+0x2f/0x33..0x57/0x5b）
- 收尾 sql3(0x4e8e) select unique_id；get_n_rows()==0 时发
  Packet_Frame_Lag_Spec_Delete_Notify（0xc2e/0xe，+0xb=specId）

## 包布局（Packet_Frame_Lag_Statistic_Write_Lag_Index）
- +0xa 有符号 char serverGroup；+0xb int specId；+0xf int crashVillage；
  +0x13..0x21 ushort×8；+0x23/+0x25 有符号 short；
  +0x177 int shareRate；kind 块步长 0x38（+0x27..0x2d short×4、
  +0x2f/+0x33 .. +0x57/+0x5b int/float 对）
