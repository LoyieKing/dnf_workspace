# _ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc

`StatisticManager::SendDBLagStatistics(CServerHandler*, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x807350a` | `0x499` | `0x80735a8` | `0x40f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,302 +1,278 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x48c,%esp
-lea    -0x43e(%ebp),%eax
+sub    $0x8ac,%esp
+lea    -0x882(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN40Packet_DBMW_TechnicalReport_Common_QueryC1Ev>
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x1c6>
-mov    -0x1c(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x37,%edx
-shl    $0x4,%edx
-add    %edx,%eax
-add    $0xc,%eax
+movl   $0x0,-0x60(%ebp)
+jmp    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x1c1>
+mov    -0x60(%ebp),%edx
+mov    0x8(%ebp),%eax
+shl    $0x4,%edx
+add    %edx,%eax
+add    $0x37c,%eax
 mov    (%eax),%eax
 test   %eax,%eax
-jle    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x1c2>
+jle    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x1bd>
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x43e(%ebp),%eax
-add    $0xa,%eax
+lea    -0x478(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-mov    -0x1c(%ebp),%edx
+mov    -0x60(%ebp),%edx
+mov    0x8(%ebp),%eax
+shl    $0x4,%edx
+add    %edx,%eax
+add    $0x378,%eax
+mov    (%eax),%eax
+mov    %eax,-0x5c(%ebp)
+mov    -0x60(%ebp),%edx
+mov    0x8(%ebp),%eax
+shl    $0x4,%edx
+add    %edx,%eax
+add    $0x37c,%eax
+mov    (%eax),%eax
+mov    %eax,-0x58(%ebp)
+mov    -0x60(%ebp),%edx
+mov    0x8(%ebp),%eax
+shl    $0x4,%edx
+add    %edx,%eax
+add    $0x374,%eax
+mov    (%eax),%eax
+mov    %eax,-0x54(%ebp)
+mov    -0x60(%ebp),%edx
+mov    0x8(%ebp),%eax
+shl    $0x4,%edx
+add    %edx,%eax
+add    $0x37c,%eax
+mov    (%eax),%eax
+mov    %eax,-0x50(%ebp)
+mov    -0x60(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0x37,%edx
 shl    $0x4,%edx
-add    %edx,%eax
-add    $0x8,%eax
-mov    (%eax),%eax
-mov    -0x1c(%ebp),%ecx
-mov    0x8(%ebp),%edx
-add    $0x37,%ecx
-shl    $0x4,%ecx
-add    %ecx,%edx
-add    $0xc,%edx
-mov    (%edx),%edx
-mov    %edx,-0x45c(%ebp)
+mov    (%edx,%eax,1),%eax
+mov    %eax,-0x4c(%ebp)
+mov    -0x60(%ebp),%edx
+mov    0x8(%ebp),%eax
+shl    $0x4,%edx
+add    %edx,%eax
+add    $0x37c,%eax
+mov    (%eax),%eax
+mov    %eax,-0x48(%ebp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
+movzbl %al,%eax
+mov    %eax,-0x44(%ebp)
+mov    -0x5c(%ebp),%eax
 mov    %eax,%edx
 sar    $0x1f,%edx
-idivl  -0x45c(%ebp)
-mov    %eax,%edi
-mov    -0x1c(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x37,%edx
-shl    $0x4,%edx
-add    %edx,%eax
-add    $0x4,%eax
-mov    (%eax),%eax
-mov    -0x1c(%ebp),%ecx
-mov    0x8(%ebp),%edx
-add    $0x37,%ecx
-shl    $0x4,%ecx
-add    %ecx,%edx
-add    $0xc,%edx
-mov    (%edx),%edx
-mov    %edx,-0x45c(%ebp)
-mov    $0x0,%edx
-divl   -0x45c(%ebp)
-mov    %eax,%esi
-mov    -0x1c(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x37,%edx
-shl    $0x4,%edx
-mov    (%edx,%eax,1),%eax
-mov    -0x1c(%ebp),%ecx
-mov    0x8(%ebp),%edx
-add    $0x37,%ecx
-shl    $0x4,%ecx
-add    %ecx,%edx
-add    $0xc,%edx
-mov    (%edx),%edx
-mov    %edx,-0x45c(%ebp)
-mov    $0x0,%edx
-divl   -0x45c(%ebp)
+idivl  -0x58(%ebp)
 mov    %eax,%ebx
+mov    -0x54(%ebp),%eax
+mov    $0x0,%edx
+divl   -0x50(%ebp)
+mov    %eax,%ecx
+mov    -0x4c(%ebp),%eax
+mov    $0x0,%edx
+divl   -0x48(%ebp)
+mov    -0x44(%ebp),%edx
+and    $0xff,%edx
+mov    %ebx,0x20(%esp)
+mov    %ecx,0x1c(%esp)
+mov    %eax,0x18(%esp)
+mov    -0x60(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    0x10(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"inSert into lag_stat_module (occ_time, server_id, module, average, deviation, count) values ('%s', %d, %d, %d, %d, %d)",0x8(%esp)
+movl   $0x400,0x4(%esp)
+lea    -0x478(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <snprintf>
+movl   $0x6a1,0x8(%esp)
+movl   $&_ZZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPcE12__FUNCTION__,0x4(%esp)
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+lea    -0x478(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"%s",0x8(%esp)
+movl   $"./log/LagStatistics",0x4(%esp)
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x882(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+mov    -0x60(%ebp),%eax
+add    $0x37,%eax
+shl    $0x4,%eax
+add    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN21STModuleLagStatistics5ResetEv>
+addl   $0x1,-0x60(%ebp)
+cmpl   $0x7,-0x60(%ebp)
+setle  %al
+test   %al,%al
+jne    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x26>
+mov    0x8(%ebp),%eax
+add    $0x3f0,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEE5emptyEv>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x404>
+mov    0x8(%ebp),%eax
+lea    0x3f0(%eax),%edx
+lea    -0x78(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEE5beginEv>
+sub    $0x4,%esp
+jmp    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x3bf>
+movl   $0x400,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0x478(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x1c(%eax),%eax
+mov    %eax,-0x40(%ebp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x20(%eax),%eax
+mov    %eax,-0x3c(%ebp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x18(%eax),%eax
+mov    %eax,-0x38(%ebp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x20(%eax),%eax
+mov    %eax,-0x34(%ebp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x14(%eax),%eax
+mov    %eax,-0x30(%ebp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x20(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0xc(%eax),%eax
+mov    %eax,-0x28(%ebp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x10(%eax),%eax
+mov    %eax,-0x24(%ebp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x8(%eax),%eax
+mov    %eax,-0x20(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
 movzbl %al,%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x40(%ebp),%eax
+mov    %eax,%edx
+sar    $0x1f,%edx
+idivl  -0x3c(%ebp)
+mov    %eax,%edi
+mov    -0x38(%ebp),%eax
+mov    $0x0,%edx
+divl   -0x34(%ebp)
+mov    %eax,%esi
+mov    -0x30(%ebp),%eax
+mov    $0x0,%edx
+divl   -0x2c(%ebp)
+mov    %eax,%ebx
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    -0x1c(%ebp),%edx
+movzbl %dl,%ecx
+mov    -0x20(%ebp),%edx
+mov    %edx,0x2c(%esp)
+mov    -0x24(%ebp),%edx
+mov    %edx,0x28(%esp)
+mov    -0x28(%ebp),%edx
+mov    %edx,0x24(%esp)
 mov    %edi,0x20(%esp)
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
-mov    -0x1c(%ebp),%edx
-mov    %edx,0x14(%esp)
-mov    %eax,0x10(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0xc(%esp)
-movl   $"inSert into lag_stat_module (occ_time, server_id, module, average, deviation, count) values ('%s', %d, %d, %d, %d, %d)",0x8(%esp)
-movl   $0x400,0x4(%esp)
-lea    -0x43e(%ebp),%eax
-add    $0xa,%eax
-mov    %eax,(%esp)
-call   <T> <snprintf>
-movl   $0x6a1,0x8(%esp)
-movl   $&_ZZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPcE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-lea    -0x43e(%ebp),%eax
-add    $0xa,%eax
-mov    %eax,0xc(%esp)
-movl   $"%s",0x8(%esp)
-movl   $"./log/LagStatistics",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x43e(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-mov    -0x1c(%ebp),%eax
-add    $0x37,%eax
-shl    $0x4,%eax
-add    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN21STModuleLagStatistics5ResetEv>
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x7,-0x1c(%ebp)
-setle  %al
-test   %al,%al
-jne    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x26>
-mov    0x8(%ebp),%eax
-add    $0x3f0,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEE5emptyEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x48e>
-mov    0x8(%ebp),%eax
-lea    0x3f0(%eax),%edx
-lea    -0x34(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEE5beginEv>
-sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x449>
-movl   $0x400,0x8(%esp)
-movl   $0x0,0x4(%esp)
-lea    -0x43e(%ebp),%eax
-add    $0xa,%eax
-mov    %eax,(%esp)
-call   <T> <memset>
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x1c(%eax),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x20(%eax),%eax
-mov    %eax,-0x45c(%ebp)
-mov    %ebx,%edx
-mov    %edx,%eax
-sar    $0x1f,%edx
-idivl  -0x45c(%ebp)
-mov    %eax,%edi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x18(%eax),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x20(%eax),%eax
-mov    %eax,-0x45c(%ebp)
-mov    %ebx,%eax
-mov    $0x0,%edx
-divl   -0x45c(%ebp)
-mov    %eax,-0x458(%ebp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x14(%eax),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x20(%eax),%eax
-mov    %eax,-0x45c(%ebp)
-mov    %ebx,%eax
-mov    $0x0,%edx
-divl   -0x45c(%ebp)
-mov    %eax,-0x454(%ebp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0xc(%eax),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x10(%eax),%eax
-mov    %eax,-0x45c(%ebp)
-mov    %ebx,%edx
-mov    %edx,%eax
-sar    $0x1f,%edx
-idivl  -0x45c(%ebp)
-mov    %eax,-0x450(%ebp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x8(%eax),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x10(%eax),%eax
-mov    %eax,-0x45c(%ebp)
-mov    %ebx,%eax
-mov    $0x0,%edx
-divl   -0x45c(%ebp)
-mov    %eax,-0x44c(%ebp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x4(%eax),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x10(%eax),%eax
-mov    %eax,-0x45c(%ebp)
-mov    %ebx,%eax
-mov    $0x0,%edx
-divl   -0x45c(%ebp)
-mov    %eax,%esi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-movzwl (%eax),%eax
-movzwl %ax,%ebx
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
-movzbl %al,%eax
-mov    %edi,0x2c(%esp)
-mov    -0x458(%ebp),%edx
-mov    %edx,0x28(%esp)
-mov    -0x454(%ebp),%edx
-mov    %edx,0x24(%esp)
-mov    -0x450(%ebp),%edx
-mov    %edx,0x20(%esp)
-mov    -0x44c(%ebp),%edx
-mov    %edx,0x1c(%esp)
-mov    %esi,0x18(%esp)
-mov    %ebx,0x14(%esp)
-mov    %eax,0x10(%esp)
+mov    %eax,0x14(%esp)
+mov    %ecx,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into lag_stat_dungeon (occ_time, server_id, dungeon_idx, first_average, first_deviation, first_count, boss_average, boss_deviation, boss_count) values ('%s', %d, %d, %d, %d, %d, %d, %d, %d)",0x8(%esp)
 movl   $0x400,0x4(%esp)
-lea    -0x43e(%ebp),%eax
-add    $0xa,%eax
+lea    -0x478(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 movl   $0x6b8,0x8(%esp)
 movl   $&_ZZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPcE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-lea    -0x43e(%ebp),%eax
-add    $0xa,%eax
+lea    -0x478(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"%s",0x8(%esp)
 movl   $"./log/LagStatistics",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x43e(%ebp),%eax
+lea    -0x882(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-lea    -0x34(%ebp),%eax
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x3f0(%eax),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEneERKS4_>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x210>
+jne    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x20b>
 mov    0x8(%ebp),%eax
 add    $0x3f0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEE5clearEv>
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBLagStatistics(CServerHandler*, char*) */

void __thiscall
StatisticManager::_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc
          (StatisticManager *this,CServerHandler *param_1,char *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  uint uVar17;
  Packet_DBMW_TechnicalReport_Common_Query local_442 [10];
  char acStack_438 [1024];
  map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
  local_38 [4];
  CMyFileLog local_34 [8];
  map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
  local_2c [4];
  CMyFileLog local_28 [8];
  int local_20;
  
  Packet_DBMW_TechnicalReport_Common_Query::Packet_DBMW_TechnicalReport_Common_Query(local_442);
  for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
    if (0 < *(int *)(this + (local_20 + 0x37) * 0x10 + 0xc)) {
      memset(acStack_438,0,0x400);
      iVar11 = *(int *)(this + (local_20 + 0x37) * 0x10 + 8);
      iVar12 = *(int *)(this + (local_20 + 0x37) * 0x10 + 0xc);
      uVar2 = *(uint *)(this + (local_20 + 0x37) * 0x10 + 4);
      uVar3 = *(uint *)(this + (local_20 + 0x37) * 0x10 + 0xc);
      uVar4 = *(uint *)(this + (local_20 + 0x37) * 0x10);
      uVar5 = *(uint *)(this + (local_20 + 0x37) * 0x10 + 0xc);
      uVar10 = CServerHandler::GetServerGroupNo(param_1);
      snprintf(acStack_438,0x400,
               "inSert into lag_stat_module (occ_time, server_id, module, average, deviation, count) values (\'%s\', %d, %d, %d, %d, %d)"
               ,param_2,uVar10 & 0xff,local_20,uVar4 / uVar5,uVar2 / uVar3,iVar11 / iVar12);
      CMyFileLog::CMyFileLog(local_34,"SendDBLagStatistics",0x6a1);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_34,"./log/LagStatistics","%s",acStack_438);
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_442);
      STModuleLagStatistics::Reset((STModuleLagStatistics *)(this + (local_20 + 0x37) * 0x10));
    }
  }
  cVar9 = std::
          map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
          ::empty((map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
                   *)(this + 0x3f0));
  if (cVar9 != '\x01') {
    std::
    map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
    ::begin(local_38);
    while( true ) {
      std::
      map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
      ::end(local_2c);
      cVar9 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
              operator!=((_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>
                          *)local_38,(_Rb_tree_iterator *)local_2c);
      if (cVar9 == '\0') break;
      memset(acStack_438,0,0x400);
      iVar11 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
               operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>
                           *)local_38);
      iVar11 = *(int *)(iVar11 + 0x1c);
      iVar12 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
               operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>
                           *)local_38);
      iVar12 = *(int *)(iVar12 + 0x20);
      iVar13 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
               operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>
                           *)local_38);
      uVar2 = *(uint *)(iVar13 + 0x18);
      iVar13 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
               operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>
                           *)local_38);
      uVar3 = *(uint *)(iVar13 + 0x20);
      iVar13 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
               operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>
                           *)local_38);
      uVar4 = *(uint *)(iVar13 + 0x14);
      iVar13 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
               operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>
                           *)local_38);
      uVar5 = *(uint *)(iVar13 + 0x20);
      iVar13 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
               operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>
                           *)local_38);
      iVar13 = *(int *)(iVar13 + 0xc);
      iVar14 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
               operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>
                           *)local_38);
      iVar14 = *(int *)(iVar14 + 0x10);
      iVar15 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
               operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>
                           *)local_38);
      uVar10 = *(uint *)(iVar15 + 8);
      iVar15 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
               operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>
                           *)local_38);
      uVar6 = *(uint *)(iVar15 + 0x10);
      iVar15 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
               operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>
                           *)local_38);
      uVar7 = *(uint *)(iVar15 + 4);
      iVar15 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
               operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>
                           *)local_38);
      uVar8 = *(uint *)(iVar15 + 0x10);
      puVar16 = (ushort *)
                std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
                operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>
                            *)local_38);
      uVar1 = *puVar16;
      uVar17 = CServerHandler::GetServerGroupNo(param_1);
      snprintf(acStack_438,0x400,
               "inSert into lag_stat_dungeon (occ_time, server_id, dungeon_idx, first_average, first_deviation, first_count, boss_average, boss_deviation, boss_count) values (\'%s\', %d, %d, %d, %d, %d, %d, %d, %d)"
               ,param_2,uVar17 & 0xff,(uint)uVar1,uVar7 / uVar8,uVar10 / uVar6,iVar13 / iVar14,
               uVar4 / uVar5,uVar2 / uVar3,iVar11 / iVar12);
      CMyFileLog::CMyFileLog(local_28,"SendDBLagStatistics",0x6b8);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_28,"./log/LagStatistics","%s",acStack_438);
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_442);
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>> *)
                 local_38);
    }
    std::
    map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
    ::clear((map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
             *)(this + 0x3f0));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1397 行）：

```cpp
void StatisticManager::SendDBLagStatistics(CServerHandler* handler, char* timeStr)
{
    Packet_DBMW_TechnicalReport_Common_Query pkt;
    char sql[1024];
    for (int i = 0; i < 8; i++)
    {
        if (0 < m_modules[i].m_data[3])
        {
            memset(sql, 0, 0x400);
            int d1 = m_modules[i].m_data[2];
            int d2 = m_modules[i].m_data[3];
            unsigned int a = m_modules[i].m_data[1];
            unsigned int b = m_modules[i].m_data[3];
            unsigned int c = m_modules[i].m_data[0];
            unsigned int d = m_modules[i].m_data[3];
            unsigned int group = handler->GetServerGroupNo();
            snprintf(sql, 0x400,
                "inSert into lag_stat_module (occ_time, server_id, module, average, deviation, count) values ('%s', %d, %d, %d, %d, %d)",
                timeStr, group & 0xff, i, c / d, a / b, d1 / d2);
            DNF_LOG_SCOPE_LINE(0x6a1, "./log/LagStatistics", "%s", sql);
            handler->SendToDB((PacketHeader*)&pkt);
            m_modules[i].Reset();
        }
    }
    if (!m_dungeonLag.empty())
    {
        for (std::map<unsigned short, STDungeonLagStatistics>::iterator it = m_dungeonLag.begin();
             it != m_dungeonLag.end(); ++it)
        {
            memset(sql, 0, 0x400);
            int d1 = it->second.m_data[6];
            int d2 = it->second.m_data[7];
            unsigned int a = it->second.m_data[5];
            unsigned int b = it->second.m_data[7];
            unsigned int c = it->second.m_data[4];
            unsigned int d = it->second.m_data[7];
            unsigned int e = it->second.m_data[2];
            int f = it->second.m_data[3];
            unsigned int g = it->second.m_data[1];
            unsigned int group = handler->GetServerGroupNo();
            snprintf(sql, 0x400,
                "inSert into lag_stat_dungeon (occ_time, server_id, dungeon_idx, first_average, first_deviation, first_count, boss_average, boss_deviation, boss_count) values ('%s', %d, %d, %d, %d, %d, %d, %d, %d)",
                timeStr, group & 0xff, it->first, c / d, a / b, d1 / d2, e, f, g);
            DNF_LOG_SCOPE_LINE(0x6b8, "./log/LagStatistics", "%s", sql);
            handler->SendToDB((PacketHeader*)&pkt);
        }
        m_dungeonLag.clear();
    }
}
```
