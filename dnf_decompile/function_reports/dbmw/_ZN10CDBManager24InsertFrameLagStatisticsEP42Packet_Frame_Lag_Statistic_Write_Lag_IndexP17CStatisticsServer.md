# _ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer

`CDBManager::InsertFrameLagStatistics(Packet_Frame_Lag_Statistic_Write_Lag_Index*, CStatisticsServer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807bf9c` | `0x654` | `0x805d378` | `0x676` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,433 +1,481 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x13c,%esp
+sub    $0x12c,%esp
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
 jne    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x25>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x649>
-movl   $0x20,-0x28(%ebp)
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x66b>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
-mov    %eax,-0xb0(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x25(%eax),%eax
+mov    %eax,-0xa0(%ebp)
+mov    0xc(%ebp),%eax
+add    $0x25,%eax
+movzwl (%eax),%eax
 cwtl
+mov    %eax,-0x9c(%ebp)
+mov    0xc(%ebp),%eax
+add    $0x23,%eax
+movzwl (%eax),%eax
+cwtl
+mov    %eax,-0x98(%ebp)
+mov    0xc(%ebp),%eax
+add    $0x21,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,-0x94(%ebp)
+mov    0xc(%ebp),%eax
+add    $0x1f,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,-0x90(%ebp)
+mov    0xc(%ebp),%eax
+add    $0x1d,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,-0x8c(%ebp)
+mov    0xc(%ebp),%eax
+add    $0x1b,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,-0x88(%ebp)
+mov    0xc(%ebp),%eax
+add    $0x19,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,-0x84(%ebp)
+mov    0xc(%ebp),%eax
+add    $0x17,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,-0x80(%ebp)
+mov    0xc(%ebp),%eax
+add    $0x15,%eax
+movzwl (%eax),%eax
+movzwl %ax,%edi
+mov    0xc(%ebp),%eax
+add    $0x13,%eax
+movzwl (%eax),%eax
+movzwl %ax,%esi
+mov    0xc(%ebp),%eax
+add    $0xf,%eax
+mov    (%eax),%ebx
+mov    0xc(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
+movsbl %al,%ecx
+mov    0xc(%ebp),%eax
+add    $0x177,%eax
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
 mov    %eax,-0xac(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x23(%eax),%eax
-cwtl
-mov    %eax,-0xa8(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x21(%eax),%eax
-movzwl %ax,%eax
-mov    %eax,-0xa4(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x1f(%eax),%eax
-movzwl %ax,%eax
-mov    %eax,-0xa0(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x1d(%eax),%eax
-movzwl %ax,%eax
-mov    %eax,-0x9c(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x1b(%eax),%eax
-movzwl %ax,%eax
-mov    %eax,-0x98(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x19(%eax),%eax
-movzwl %ax,%eax
-mov    %eax,-0x94(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x17(%eax),%eax
-movzwl %ax,%eax
-mov    %eax,-0x90(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x15(%eax),%eax
-movzwl %ax,%edi
-mov    0xc(%ebp),%eax
-movzwl 0x13(%eax),%eax
-movzwl %ax,%esi
-mov    0xc(%ebp),%eax
-mov    0xf(%eax),%ebx
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movsbl %al,%ecx
-mov    0xc(%ebp),%eax
-mov    0x177(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    %eax,-0xbc(%ebp)
-mov    -0xac(%ebp),%eax
+mov    -0x9c(%ebp),%eax
 mov    %eax,0x40(%esp)
-mov    -0xa8(%ebp),%eax
+mov    -0x98(%ebp),%eax
 mov    %eax,0x3c(%esp)
-mov    -0xa4(%ebp),%eax
+mov    -0x94(%ebp),%eax
 mov    %eax,0x38(%esp)
-mov    -0xa0(%ebp),%eax
+mov    -0x90(%ebp),%eax
 mov    %eax,0x34(%esp)
-mov    -0x9c(%ebp),%eax
+mov    -0x8c(%ebp),%eax
 mov    %eax,0x30(%esp)
-mov    -0x98(%ebp),%eax
+mov    -0x88(%ebp),%eax
 mov    %eax,0x2c(%esp)
-mov    -0x94(%ebp),%eax
+mov    -0x84(%ebp),%eax
 mov    %eax,0x28(%esp)
-mov    -0x90(%ebp),%eax
+mov    -0x80(%ebp),%eax
 mov    %eax,0x24(%esp)
 mov    %edi,0x20(%esp)
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
-mov    -0xbc(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    -0xac(%ebp),%ebx
+mov    %ebx,0xc(%esp)
 movl   $"inSert into common_index(spec_id,occ_time,server_group,share_rate,crash_village,crash_dungeon,crash_challenge,crash_wararea,crash_fight_village,crash_dead_tower,crash_channel,crash_load,village_to_dungeon_lag,dungeon_to_village_lag) values(%d,from_unixtime(%d),%hhd,%u,%hu,%hu,%hu,%hu,%hu,%hu,%hu,%hu,%hd,%hd)",0x8(%esp)
 movl   $0x4e8c,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   *-0xb0(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *-0xa0(%ebp)
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e8c,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x1ad>
+je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x1b4>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x649>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x66b>
 movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x58e>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x5a7>
 cmpl   $0x5,-0x1c(%ebp)
-ja     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x285>
+ja     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x28c>
 mov    -0x1c(%ebp),%eax
 shl    $0x2,%eax
-mov    &data#08ae5495(.rodata)(%eax),%eax
+mov    &data#8bf604cd(.rodata)(%eax),%eax
 jmp    *%eax
 movl   $0x20,0x8(%esp)
 movl   $"village_lag_index",0x4(%esp)
-lea    -0x5a(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strncpy>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a0>
+lea    -0x4e(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strncpy>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a7>
 movl   $0x20,0x8(%esp)
 movl   $"dungeon_lag_index",0x4(%esp)
-lea    -0x5a(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strncpy>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a0>
+lea    -0x4e(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strncpy>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a7>
 movl   $0x20,0x8(%esp)
 movl   $"challenge_lag_index",0x4(%esp)
-lea    -0x5a(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strncpy>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a0>
+lea    -0x4e(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strncpy>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a7>
 movl   $0x20,0x8(%esp)
 movl   $"wararea_lag_index",0x4(%esp)
-lea    -0x5a(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strncpy>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a0>
+lea    -0x4e(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strncpy>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a7>
 movl   $0x20,0x8(%esp)
 movl   $"fight_village_lag_index",0x4(%esp)
-lea    -0x5a(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strncpy>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a0>
+lea    -0x4e(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strncpy>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a7>
 movl   $0x20,0x8(%esp)
 movl   $"dead_tower_lag_index",0x4(%esp)
-lea    -0x5a(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strncpy>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a0>
+lea    -0x4e(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strncpy>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a7>
 movl   $0x20,0x8(%esp)
 movl   $"___MAX_FRAME_LAG_STATISTISCS_KIND over",0x4(%esp)
-lea    -0x5a(%ebp),%eax
+lea    -0x4e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
-mov    %eax,-0x8c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x48,%eax
-flds   0x13(%eax)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x48,%eax
-mov    0xf(%eax),%eax
-mov    %eax,-0x88(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x40,%eax
-flds   0x13(%eax)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x40,%eax
-mov    0xf(%eax),%eax
-mov    %eax,-0x84(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    $0x1,%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-flds   0x13(%edx,%ecx,1)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    $0x1,%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    0xf(%edx,%ecx,1),%edx
-mov    %edx,-0x80(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x30,%eax
-flds   0x13(%eax)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x30,%eax
-mov    0xf(%eax),%eax
 mov    %eax,-0x7c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-lea    0x0(,%edx,8),%eax
-mov    %eax,%edx
-lea    0x0(,%edx,8),%eax
-sub    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x28,%eax
-flds   0x13(%eax)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-lea    0x0(,%edx,8),%eax
-mov    %eax,%edx
-lea    0x0(,%edx,8),%eax
-sub    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x28,%eax
-mov    0xf(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x5b,%eax
+lea    (%edx,%eax,1),%eax
+flds   (%eax)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x57,%eax
+lea    (%edx,%eax,1),%eax
+mov    (%eax),%eax
 mov    %eax,-0x78(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-flds   0x13(%eax)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x53,%eax
+lea    (%edx,%eax,1),%eax
+flds   (%eax)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x4f,%eax
+lea    (%edx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,-0x74(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x4b,%eax
+lea    (%edx,%eax,1),%eax
+flds   (%eax)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x47,%eax
+lea    (%edx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,-0x70(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x43,%eax
+lea    (%edx,%eax,1),%eax
+flds   (%eax)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x3f,%eax
+lea    (%edx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,-0x6c(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x3b,%eax
+lea    (%ecx,%eax,1),%eax
+flds   (%eax)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x37,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,-0x68(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x33,%eax
+lea    (%ecx,%eax,1),%eax
+flds   (%eax)
 fxch   %st(5)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-mov    0xf(%eax),%eax
-mov    %eax,-0x74(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-movzwl 0xd(%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x2f,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,-0x64(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x2d,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl (%eax),%eax
 cwtl
-mov    %eax,-0x70(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-movzwl 0xb(%eax),%eax
+mov    %eax,-0x60(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x2b,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl (%eax),%eax
 cwtl
-mov    %eax,-0x6c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-movzwl 0x9(%eax),%eax
+mov    %eax,-0x5c(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x29,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl (%eax),%eax
 movswl %ax,%edi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-movzwl 0x7(%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x27,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl (%eax),%eax
 movswl %ax,%esi
 mov    0xc(%ebp),%eax
-mov    0xf(%eax),%ebx
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xf,%eax
+mov    (%eax),%ebx
+mov    0xc(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movsbl %al,%ecx
 mov    0xc(%ebp),%eax
-mov    0x177(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    %eax,-0xbc(%ebp)
+add    $0x177,%eax
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
+mov    %eax,-0xac(%ebp)
 fstpl  0x70(%esp)
 fxch   %st(3)
-mov    -0x88(%ebp),%eax
+mov    -0x78(%ebp),%eax
 mov    %eax,0x6c(%esp)
 fstpl  0x64(%esp)
 fxch   %st(1)
-mov    -0x84(%ebp),%eax
+mov    -0x74(%ebp),%eax
 mov    %eax,0x60(%esp)
 fstpl  0x58(%esp)
-mov    -0x80(%ebp),%eax
+mov    -0x70(%ebp),%eax
 mov    %eax,0x54(%esp)
 fstpl  0x4c(%esp)
-mov    -0x7c(%ebp),%eax
+mov    -0x6c(%ebp),%eax
 mov    %eax,0x48(%esp)
 fstpl  0x40(%esp)
-mov    -0x78(%ebp),%eax
+mov    -0x68(%ebp),%eax
 mov    %eax,0x3c(%esp)
 fstpl  0x34(%esp)
-mov    -0x74(%ebp),%eax
+mov    -0x64(%ebp),%eax
 mov    %eax,0x30(%esp)
-mov    -0x70(%ebp),%eax
+mov    -0x60(%ebp),%eax
 mov    %eax,0x2c(%esp)
-mov    -0x6c(%ebp),%eax
+mov    -0x5c(%ebp),%eax
 mov    %eax,0x28(%esp)
 mov    %edi,0x24(%esp)
 mov    %esi,0x20(%esp)
 mov    %ebx,0x1c(%esp)
 mov    %ecx,0x18(%esp)
 mov    %edx,0x14(%esp)
-mov    -0xbc(%ebp),%eax
-mov    %eax,0x10(%esp)
-lea    -0x5a(%ebp),%eax
+mov    -0xac(%ebp),%ebx
+mov    %ebx,0x10(%esp)
+lea    -0x4e(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into %s(spec_id,occ_time,server_group,share_rate,win_fps,full_fps,full_win_fps,full_win_nosync_fps,frame1,time1,frame2,time2,frame3,time3,frame4,time4,frame5,time5,frame6,time6) values(%d,from_unixtime(%d),%hhd,%u,%hd,%hd,%hd,%hd,%d,%.3f,%d,%.3f,%d,%.3f,%d,%.3f,%d,%.3f,%d,%.3f)",0x8(%esp)
 movl   $0x4e8d,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   *-0x8c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *-0x7c(%ebp)
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e8d,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x58a>
+je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x5a3>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x649>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x66b>
 addl   $0x1,-0x1c(%ebp)
 cmpl   $0x5,-0x1c(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x1b9>
-mov    -0x2c(%ebp),%eax
+jne    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x1c0>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"select unique_id from monitoring_spec where spec_id = %d",0x8(%esp)
 movl   $0x4e8e,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e8e,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x5f8>
+je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x60c>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x649>
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x66b>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x644>
-lea    -0x3a(%ebp),%eax
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x62e>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x66b>
+lea    -0x2e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_Frame_Lag_Spec_Delete_NotifyC1Ev>
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    %eax,-0x30(%ebp)
-movzwl -0x38(%ebp),%eax
+lea    -0x2e(%ebp),%eax
+lea    0xb(%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+movzwl -0x2c(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x3a(%ebp),%eax
+lea    -0x2e(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CStatisticsServer12SendToServerEPci>
 mov    $0x1,%eax
-add    $0x13c,%esp
+add    $0x12c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::InsertFrameLagStatistics(Packet_Frame_Lag_Statistic_Write_Lag_Index*,
   CStatisticsServer*) */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer
          (CDBManager *this,Packet_Frame_Lag_Statistic_Write_Lag_Index *param_1,
          CStatisticsServer *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char local_5e [32];
  Packet_Frame_Lag_Spec_Delete_Notify local_3e [2];
  ushort local_3c;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  char local_25;
  int local_24;
  int local_20;
  
  local_30 = *(int **)(this + 0x3c);
  if (local_30 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    local_2c = 0x20;
    (**(code **)(*local_30 + 0x1c))
              (local_30,0x4e8c,
               "inSert into common_index(spec_id,occ_time,server_group,share_rate,crash_village,crash_dungeon,crash_challenge,crash_wararea,crash_fight_village,crash_dead_tower,crash_channel,crash_load,village_to_dungeon_lag,dungeon_to_village_lag) values(%d,from_unixtime(%d),%hhd,%u,%hu,%hu,%hu,%hu,%hu,%hu,%hu,%hu,%hd,%hd)"
               ,*(undefined4 *)(param_1 + 0xb),*(undefined4 *)(param_1 + 0x177),
               (int)(char)param_1[10],*(undefined4 *)(param_1 + 0xf),*(undefined2 *)(param_1 + 0x13)
               ,*(undefined2 *)(param_1 + 0x15),*(undefined2 *)(param_1 + 0x17),
               *(undefined2 *)(param_1 + 0x19),*(undefined2 *)(param_1 + 0x1b),
               *(undefined2 *)(param_1 + 0x1d),*(undefined2 *)(param_1 + 0x1f),
               *(undefined2 *)(param_1 + 0x21),(int)*(short *)(param_1 + 0x23),
               (int)*(short *)(param_1 + 0x25));
    cVar1 = (**(code **)(*local_30 + 0x20))(local_30,0x4e8c);
    if (cVar1 == '\x01') {
      for (local_20 = 0; local_25 = 1, local_20 < 6; local_20 = local_20 + 1) {
        switch(local_20) {
        case 0:
          strncpy(local_5e,"village_lag_index",0x20);
          break;
        case 1:
          strncpy(local_5e,"dungeon_lag_index",0x20);
          break;
        case 2:
          strncpy(local_5e,"challenge_lag_index",0x20);
          break;
        case 3:
          strncpy(local_5e,"wararea_lag_index",0x20);
          break;
        case 4:
          strncpy(local_5e,"fight_village_lag_index",0x20);
          break;
        case 5:
          strncpy(local_5e,"dead_tower_lag_index",0x20);
          break;
        default:
          memcpy(local_5e,"___MAX_FRAME_LAG_STATISTISCS_KIND over",0x20);
        }
        (**(code **)(*local_30 + 0x1c))
                  (local_30,0x4e8d,
                   "inSert into %s(spec_id,occ_time,server_group,share_rate,win_fps,full_fps,full_win_fps,full_win_nosync_fps,frame1,time1,frame2,time2,frame3,time3,frame4,time4,frame5,time5,frame6,time6) values(%d,from_unixtime(%d),%hhd,%u,%hd,%hd,%hd,%hd,%d,%.3f,%d,%.3f,%d,%.3f,%d,%.3f,%d,%.3f,%d,%.3f)"
                   ,local_5e,*(undefined4 *)(param_1 + 0xb),*(undefined4 *)(param_1 + 0x177),
                   (int)(char)param_1[10],*(undefined4 *)(param_1 + 0xf),
                   (int)*(short *)(param_1 + local_20 * 0x38 + 0x27),
                   (int)*(short *)(param_1 + local_20 * 0x38 + 0x29),
                   (int)*(short *)(param_1 + local_20 * 0x38 + 0x2b),
                   (int)*(short *)(param_1 + local_20 * 0x38 + 0x2d),
                   *(undefined4 *)(param_1 + local_20 * 0x38 + 0x2f),
                   (double)*(float *)(param_1 + local_20 * 0x38 + 0x33),
                   *(undefined4 *)(param_1 + local_20 * 0x38 + 0x37),
                   (double)*(float *)(param_1 + local_20 * 0x38 + 0x3b),
                   *(undefined4 *)(param_1 + local_20 * 0x38 + 0x3f),
                   (double)*(float *)(param_1 + local_20 * 0x38 + 0x43),
                   *(undefined4 *)(param_1 + (local_20 + 1) * 0x38 + 0xf),
                   (double)*(float *)(param_1 + (local_20 + 1) * 0x38 + 0x13),
                   *(undefined4 *)(param_1 + local_20 * 0x38 + 0x4f),
                   (double)*(float *)(param_1 + local_20 * 0x38 + 0x53),
                   *(undefined4 *)(param_1 + local_20 * 0x38 + 0x57),
                   (double)*(float *)(param_1 + local_20 * 0x38 + 0x5b));
        cVar1 = (**(code **)(*local_30 + 0x20))(local_30,0x4e8d);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      (**(code **)(*local_30 + 0x1c))
                (local_30,0x4e8e,"select unique_id from monitoring_spec where spec_id = %d",
                 *(undefined4 *)(param_1 + 0xb));
      local_25 = (**(code **)(*local_30 + 0x20))(local_30,0x4e8e);
      if (local_25 == '\x01') {
        local_24 = (**(code **)(*local_30 + 0x6c))(local_30);
        if (local_24 == 0) {
          Packet_Frame_Lag_Spec_Delete_Notify::Packet_Frame_Lag_Spec_Delete_Notify(local_3e);
          local_34 = *(undefined4 *)(param_1 + 0xb);
          CStatisticsServer::SendToServer(param_2,(char *)local_3e,(uint)local_3c);
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
