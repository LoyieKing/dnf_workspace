# _ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics

`StatisticManager::AddLagStatistics(Packet_Stat_Lag_Statistics*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8072e44` | `0x6c5` | `0x8072f7a` | `0x6a1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,472 +1,459 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xd0,%esp
-movl   $0x0,-0x40(%ebp)
-jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x178>
-mov    -0x40(%ebp),%edx
-mov    0xc(%ebp),%ecx
+movl   $0x0,-0x2c(%ebp)
+jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x175>
+mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    0xb(%eax,%ecx,1),%eax
 test   %eax,%eax
-je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x174>
-mov    -0x40(%ebp),%edx
+je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x171>
+mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
-add    0xc(%ebp),%eax
 add    $0xb,%eax
-mov    %eax,-0x3c(%ebp)
-mov    -0x40(%ebp),%edx
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
-add    0xc(%ebp),%eax
 add    $0xf,%eax
-mov    %eax,-0x38(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x34(%ebp)
-mov    -0x38(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x40(%ebp),%ebx
-mov    -0x40(%ebp),%edx
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x2c(%ebp),%ebx
+mov    -0x2c(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0x37,%edx
 shl    $0x4,%edx
 mov    (%edx,%eax,1),%ecx
-flds   -0x34(%ebp)
+flds   -0x28(%ebp)
 fnstcw -0xba(%ebp)
 movzwl -0xba(%ebp),%eax
 mov    $0xc,%ah
 mov    %ax,-0xbc(%ebp)
 fldcw  -0xbc(%ebp)
 fistpll -0xc8(%ebp)
 fldcw  -0xba(%ebp)
 mov    -0xc8(%ebp),%eax
 mov    -0xc4(%ebp),%edx
 add    %eax,%ecx
 mov    0x8(%ebp),%eax
 lea    0x37(%ebx),%edx
 shl    $0x4,%edx
 mov    %ecx,(%edx,%eax,1)
-mov    -0x40(%ebp),%ecx
-mov    -0x40(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x37,%edx
+mov    -0x2c(%ebp),%ecx
+mov    -0x2c(%ebp),%edx
+mov    0x8(%ebp),%eax
 shl    $0x4,%edx
 add    %edx,%eax
-add    $0x4,%eax
+add    $0x374,%eax
 mov    (%eax),%ebx
-flds   -0x30(%ebp)
+flds   -0x24(%ebp)
 fldcw  -0xbc(%ebp)
 fistpll -0xc8(%ebp)
 fldcw  -0xba(%ebp)
 mov    -0xc8(%ebp),%eax
 mov    -0xc4(%ebp),%edx
 lea    (%ebx,%eax,1),%edx
 mov    0x8(%ebp),%eax
-add    $0x37,%ecx
 shl    $0x4,%ecx
 add    %ecx,%eax
-add    $0x4,%eax
+add    $0x374,%eax
 mov    %edx,(%eax)
-mov    -0x40(%ebp),%ebx
-mov    -0x40(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x37,%edx
+mov    -0x2c(%ebp),%ecx
+mov    -0x2c(%ebp),%edx
+mov    0x8(%ebp),%eax
 shl    $0x4,%edx
 add    %edx,%eax
-add    $0x8,%eax
-mov    (%eax),%esi
-mov    -0x40(%ebp),%edx
-mov    0xc(%ebp),%ecx
+add    $0x378,%eax
+mov    (%eax),%eax
+mov    %eax,%ebx
+mov    0xc(%ebp),%esi
+mov    -0x2c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
-movzwl 0x13(%eax,%ecx,1),%eax
+add    $0x13,%eax
+lea    (%esi,%eax,1),%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
-lea    (%esi,%eax,1),%edx
-mov    0x8(%ebp),%eax
-lea    0x37(%ebx),%ecx
+lea    (%ebx,%eax,1),%eax
+mov    0x8(%ebp),%edx
+shl    $0x4,%ecx
+add    %ecx,%edx
+add    $0x378,%edx
+mov    %eax,(%edx)
+mov    -0x2c(%ebp),%ecx
+mov    -0x2c(%ebp),%edx
+mov    0x8(%ebp),%eax
+shl    $0x4,%edx
+add    %edx,%eax
+add    $0x37c,%eax
+mov    (%eax),%eax
+lea    0x1(%eax),%edx
+mov    0x8(%ebp),%eax
 shl    $0x4,%ecx
 add    %ecx,%eax
-add    $0x8,%eax
+add    $0x37c,%eax
 mov    %edx,(%eax)
-mov    -0x40(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x37(%eax),%ecx
-shl    $0x4,%ecx
-add    %ecx,%edx
-add    $0xc,%edx
-mov    (%edx),%edx
-add    $0x1,%edx
-mov    0x8(%ebp),%ecx
-add    $0x37,%eax
-shl    $0x4,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0xc,%eax
-mov    %edx,(%eax)
-addl   $0x1,-0x40(%ebp)
-cmpl   $0x7,-0x40(%ebp)
+addl   $0x1,-0x2c(%ebp)
+cmpl   $0x7,-0x2c(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x17>
 mov    0xc(%ebp),%eax
-movzbl 0x5b(%eax),%eax
-test   %al,%al
-je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x6bb>
-mov    0xc(%ebp),%eax
-movzbl 0x5b(%eax),%eax
-cmp    $0xa,%al
-ja     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x6bb>
-movl   $0x0,-0x2c(%ebp)
-jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x6a3>
-mov    -0x2c(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x50,%eax
-add    0xc(%ebp),%eax
-lea    0xc(%eax),%ecx
-mov    0x8(%ebp),%eax
-lea    0x3f0(%eax),%edx
-lea    -0x98(%ebp),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
+add    $0x5b,%eax
+movzbl (%eax),%eax
+mov    %al,-0x2d(%ebp)
+cmpb   $0x0,-0x2d(%ebp)
+je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x697>
+cmpb   $0xa,-0x2d(%ebp)
+ja     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x697>
+movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x685>
+mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    $0x5f,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    $0x63,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    $0x6a,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    $0x6e,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    $0x5c,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl (%eax),%eax
+mov    %ax,-0x86(%ebp)
+mov    0x8(%ebp),%eax
+lea    0x3f0(%eax),%ecx
+lea    -0x8c(%ebp),%eax
+lea    -0x86(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEE4findERS4_>
 sub    $0x4,%esp
-mov    -0x2c(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x50,%eax
-add    0xc(%ebp),%eax
-add    $0xf,%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x2c(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x50,%eax
-add    0xc(%ebp),%eax
-add    $0x13,%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x1c(%ebp)
-mov    -0x2c(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x50,%eax
-add    0xc(%ebp),%eax
-add    $0x1a,%eax
-mov    %eax,-0x18(%ebp)
-mov    -0x2c(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x60,%eax
-add    0xc(%ebp),%eax
-add    $0xe,%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x18(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x3f0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x2b6>
+jne    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x2ad>
 mov    0x8(%ebp),%eax
 lea    0x3f0(%eax),%edx
-lea    -0x94(%ebp),%eax
+lea    -0x84(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x94(%ebp),%eax
+lea    -0x84(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEeqERKS4_>
 test   %al,%al
-je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x2bd>
+je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x2b4>
 mov    $0x1,%eax
-jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x2c2>
+jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x2b9>
 mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x4c7>
-lea    -0xb8(%ebp),%eax
+mov    %al,-0x9(%ebp)
+cmpb   $0x0,-0x9(%ebp)
+je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x4a7>
+lea    -0xac(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22STDungeonLagStatisticsC1Ev>
-flds   -0x20(%ebp)
-fnstcw -0xba(%ebp)
-movzwl -0xba(%ebp),%eax
-mov    $0xc,%ah
-mov    %ax,-0xbc(%ebp)
-fldcw  -0xbc(%ebp)
-fistpll -0xc8(%ebp)
-fldcw  -0xba(%ebp)
-mov    -0xc8(%ebp),%eax
-mov    -0xc4(%ebp),%edx
-mov    %eax,-0xb8(%ebp)
 flds   -0x1c(%ebp)
-fldcw  -0xbc(%ebp)
-fistpll -0xc8(%ebp)
-fldcw  -0xba(%ebp)
-mov    -0xc8(%ebp),%eax
-mov    -0xc4(%ebp),%edx
-mov    %eax,-0xb4(%ebp)
-mov    -0x2c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x50,%eax
-movzwl 0x17(%eax),%eax
+fnstcw -0xba(%ebp)
+movzwl -0xba(%ebp),%eax
+mov    $0xc,%ah
+mov    %ax,-0xbc(%ebp)
+fldcw  -0xbc(%ebp)
+fistpll -0xc8(%ebp)
+fldcw  -0xba(%ebp)
+mov    -0xc8(%ebp),%eax
+mov    -0xc4(%ebp),%edx
+mov    %eax,-0xac(%ebp)
+flds   -0x18(%ebp)
+fldcw  -0xbc(%ebp)
+fistpll -0xc8(%ebp)
+fldcw  -0xba(%ebp)
+mov    -0xc8(%ebp),%eax
+mov    -0xc4(%ebp),%edx
+mov    %eax,-0xa8(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    $0x67,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
-mov    %eax,-0xb0(%ebp)
-movl   $0x1,-0xac(%ebp)
+mov    %eax,-0xa4(%ebp)
+movl   $0x1,-0xa0(%ebp)
+flds   -0x14(%ebp)
+fldcw  -0xbc(%ebp)
+fistpll -0xc8(%ebp)
+fldcw  -0xba(%ebp)
+mov    -0xc8(%ebp),%eax
+mov    -0xc4(%ebp),%edx
+mov    %eax,-0x9c(%ebp)
 flds   -0x10(%ebp)
 fldcw  -0xbc(%ebp)
 fistpll -0xc8(%ebp)
 fldcw  -0xba(%ebp)
 mov    -0xc8(%ebp),%eax
 mov    -0xc4(%ebp),%edx
-mov    %eax,-0xa8(%ebp)
-flds   -0xc(%ebp)
-fldcw  -0xbc(%ebp)
-fistpll -0xc8(%ebp)
-fldcw  -0xba(%ebp)
-mov    -0xc8(%ebp),%eax
-mov    -0xc4(%ebp),%edx
-mov    %eax,-0xa4(%ebp)
-mov    -0x2c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x60,%eax
-movzwl 0x12(%eax),%eax
+mov    %eax,-0x98(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    $0x72,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
-mov    %eax,-0xa0(%ebp)
-movl   $0x1,-0x9c(%ebp)
-mov    -0x2c(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x50,%eax
-add    0xc(%ebp),%eax
-lea    0xc(%eax),%ecx
-lea    -0x64(%ebp),%eax
-lea    -0xb8(%ebp),%edx
+mov    %eax,-0x94(%ebp)
+movl   $0x1,-0x90(%ebp)
+lea    -0x54(%ebp),%eax
+lea    -0xac(%ebp),%edx
+mov    %edx,0x8(%esp)
+lea    -0x86(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZSt9make_pairIRtR22STDungeonLagStatisticsESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
+sub    $0x4,%esp
+lea    -0x54(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIKt22STDungeonLagStatisticsEC1ItS1_EEOS_IT_T0_E>
+mov    0x8(%ebp),%eax
+lea    0x3f0(%eax),%ecx
+lea    -0x80(%ebp),%eax
+lea    -0x78(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIRtR22STDungeonLagStatisticsESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
-sub    $0x4,%esp
-lea    -0x64(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x88(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKt22STDungeonLagStatisticsEC1ItS1_EEOS_IT_T0_E>
-mov    0x8(%ebp),%eax
-lea    0x3f0(%eax),%ecx
-lea    -0x90(%ebp),%eax
-lea    -0x88(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEE6insertERKS5_>
 sub    $0x4,%esp
-lea    -0x88(%ebp),%eax
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKt22STDungeonLagStatisticsED1Ev>
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIt22STDungeonLagStatisticsED1Ev>
-lea    -0xb8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN22STDungeonLagStatisticsD1Ev>
-jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x69f>
+jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x469>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x88(%ebp),%eax
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKt22STDungeonLagStatisticsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x454>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIt22STDungeonLagStatisticsED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x476>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIt22STDungeonLagStatisticsED1Ev>
 jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x494>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIt22STDungeonLagStatisticsED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x4a9>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0xb8(%ebp),%eax
+lea    -0xac(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22STDungeonLagStatisticsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x98(%ebp),%eax
+lea    -0xac(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN22STDungeonLagStatisticsD1Ev>
+jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x681>
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
 mov    %eax,%ecx
 mov    0x4(%ecx),%ebx
-flds   -0x20(%ebp)
+flds   -0x1c(%ebp)
 fnstcw -0xba(%ebp)
 movzwl -0xba(%ebp),%eax
 mov    $0xc,%ah
 mov    %ax,-0xbc(%ebp)
 fldcw  -0xbc(%ebp)
 fistpll -0xc8(%ebp)
 fldcw  -0xba(%ebp)
 mov    -0xc8(%ebp),%eax
 mov    -0xc4(%ebp),%edx
 lea    (%ebx,%eax,1),%eax
 mov    %eax,0x4(%ecx)
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
 mov    %eax,%ecx
 mov    0x8(%ecx),%ebx
-flds   -0x1c(%ebp)
+flds   -0x18(%ebp)
 fnstcw -0xba(%ebp)
 movzwl -0xba(%ebp),%eax
 mov    $0xc,%ah
 mov    %ax,-0xbc(%ebp)
 fldcw  -0xbc(%ebp)
 fistpll -0xc8(%ebp)
 fldcw  -0xba(%ebp)
 mov    -0xc8(%ebp),%eax
 mov    -0xc4(%ebp),%edx
 lea    (%ebx,%eax,1),%eax
 mov    %eax,0x8(%ecx)
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
 mov    %eax,%edx
-mov    0xc(%edx),%ebx
-mov    -0x2c(%ebp),%ecx
+mov    0xc(%edx),%eax
+mov    %eax,%ebx
 mov    0xc(%ebp),%esi
+mov    -0x20(%ebp),%ecx
 mov    %ecx,%eax
 add    %eax,%eax
 add    %ecx,%eax
 shl    $0x3,%eax
+add    $0x67,%eax
 lea    (%esi,%eax,1),%eax
-add    $0x50,%eax
-movzwl 0x17(%eax),%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 lea    (%ebx,%eax,1),%eax
 mov    %eax,0xc(%edx)
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
 mov    0x10(%eax),%edx
 add    $0x1,%edx
 mov    %edx,0x10(%eax)
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
 mov    %eax,%ecx
 mov    0x14(%ecx),%ebx
-flds   -0x10(%ebp)
+flds   -0x14(%ebp)
 fnstcw -0xba(%ebp)
 movzwl -0xba(%ebp),%eax
 mov    $0xc,%ah
 mov    %ax,-0xbc(%ebp)
 fldcw  -0xbc(%ebp)
 fistpll -0xc8(%ebp)
 fldcw  -0xba(%ebp)
 mov    -0xc8(%ebp),%eax
 mov    -0xc4(%ebp),%edx
 lea    (%ebx,%eax,1),%eax
 mov    %eax,0x14(%ecx)
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
 mov    %eax,%ecx
 mov    0x18(%ecx),%ebx
-flds   -0xc(%ebp)
+flds   -0x10(%ebp)
 fnstcw -0xba(%ebp)
 movzwl -0xba(%ebp),%eax
 mov    $0xc,%ah
 mov    %ax,-0xbc(%ebp)
 fldcw  -0xbc(%ebp)
 fistpll -0xc8(%ebp)
 fldcw  -0xba(%ebp)
 mov    -0xc8(%ebp),%eax
 mov    -0xc4(%ebp),%edx
 lea    (%ebx,%eax,1),%eax
 mov    %eax,0x18(%ecx)
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
 mov    %eax,%edx
-mov    0x1c(%edx),%ebx
-mov    -0x2c(%ebp),%ecx
+mov    0x1c(%edx),%eax
+mov    %eax,%ebx
 mov    0xc(%ebp),%esi
+mov    -0x20(%ebp),%ecx
 mov    %ecx,%eax
 add    %eax,%eax
 add    %ecx,%eax
 shl    $0x3,%eax
+add    $0x72,%eax
 lea    (%esi,%eax,1),%eax
-add    $0x60,%eax
-movzwl 0x12(%eax),%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 lea    (%ebx,%eax,1),%eax
 mov    %eax,0x1c(%edx)
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
 mov    0x20(%eax),%edx
 add    $0x1,%edx
 mov    %edx,0x20(%eax)
-addl   $0x1,-0x2c(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0x5b(%eax),%eax
-movzbl %al,%eax
-cmp    -0x2c(%ebp),%eax
+addl   $0x1,-0x20(%ebp)
+movzbl -0x2d(%ebp),%eax
+cmp    -0x20(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x1b1>
+jne    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x1b0>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddLagStatistics(Packet_Stat_Lag_Statistics*) */

void __thiscall
StatisticManager::_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics
          (StatisticManager *this,Packet_Stat_Lag_Statistics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_cc;
  undefined4 local_bc;
  undefined4 local_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  _Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>> local_9c [4];
  map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
  local_98 [4];
  pair local_94 [8];
  pair<unsigned_short_const,STDungeonLagStatistics> local_8c [36];
  pair<unsigned_short,STDungeonLagStatistics> local_68 [36];
  int local_44;
  Packet_Stat_Lag_Statistics *local_40;
  Packet_Stat_Lag_Statistics *local_3c;
  float local_38;
  float local_34;
  int local_30;
  Packet_Stat_Lag_Statistics *local_2c;
  Packet_Stat_Lag_Statistics *local_28;
  float local_24;
  float local_20;
  Packet_Stat_Lag_Statistics *local_1c;
  Packet_Stat_Lag_Statistics *local_18;
  float local_14;
  float local_10;
  
  for (local_44 = 0; local_44 < 8; local_44 = local_44 + 1) {
    if (*(int *)(param_1 + local_44 * 10 + 0xb) != 0) {
      local_40 = param_1 + local_44 * 10 + 0xb;
      local_3c = param_1 + local_44 * 10 + 0xf;
      local_38 = *(float *)local_40;
      local_34 = *(float *)local_3c;
      local_cc = (int)(longlong)ROUND(local_38);
      *(int *)(this + (local_44 + 0x37) * 0x10) =
           *(int *)(this + (local_44 + 0x37) * 0x10) + local_cc;
      local_cc = (int)(longlong)ROUND(local_34);
      *(int *)(this + (local_44 + 0x37) * 0x10 + 4) =
           *(int *)(this + (local_44 + 0x37) * 0x10 + 4) + local_cc;
      *(uint *)(this + (local_44 + 0x37) * 0x10 + 8) =
           *(int *)(this + (local_44 + 0x37) * 0x10 + 8) +
           (uint)*(ushort *)(param_1 + local_44 * 10 + 0x13);
      *(int *)(this + (local_44 + 0x37) * 0x10 + 0xc) =
           *(int *)(this + (local_44 + 0x37) * 0x10 + 0xc) + 1;
    }
  }
  if ((param_1[0x5b] != (Packet_Stat_Lag_Statistics)0x0) && ((byte)param_1[0x5b] < 0xb)) {
    for (local_30 = 0; local_30 < (int)(uint)(byte)param_1[0x5b]; local_30 = local_30 + 1) {
      std::
      map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
      ::find((ushort *)local_9c);
      local_2c = param_1 + local_30 * 0x18 + 0x5f;
      local_28 = param_1 + local_30 * 0x18 + 99;
      local_24 = *(float *)local_2c;
      local_20 = *(float *)local_28;
      local_1c = param_1 + local_30 * 0x18 + 0x6a;
      local_18 = param_1 + local_30 * 0x18 + 0x6e;
      local_14 = *(float *)local_1c;
      local_10 = *(float *)local_18;
      cVar2 = std::
              map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
              ::empty((map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
                       *)(this + 0x3f0));
      if (cVar2 == '\0') {
        std::
        map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
        ::end(local_98);
        cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
                operator==(local_9c,(_Rb_tree_iterator *)local_98);
        if (cVar2 != '\0') goto LAB_080730fa;
        bVar1 = false;
      }
      else {
LAB_080730fa:
        bVar1 = true;
      }
      if (bVar1) {
        STDungeonLagStatistics::STDungeonLagStatistics((STDungeonLagStatistics *)&local_bc);
        local_cc = (int)(longlong)ROUND(local_24);
        local_bc = local_cc;
        local_cc = (int)(longlong)ROUND(local_20);
        local_b8 = local_cc;
        local_b4 = (uint)*(ushort *)(param_1 + local_30 * 0x18 + 0x67);
        local_b0 = 1;
        local_cc = (int)(longlong)ROUND(local_14);
        local_ac = local_cc;
        local_cc = (int)(longlong)ROUND(local_10);
        local_a8 = local_cc;
        local_a4 = (uint)*(ushort *)(param_1 + local_30 * 0x18 + 0x72);
        local_a0 = 1;
                    /* try { // try from 0807324f to 08073253 has its CatchHandler @ 080732ed */
        std::make_pair<unsigned_short&,STDungeonLagStatistics&>
                  ((ushort *)local_68,(STDungeonLagStatistics *)(param_1 + local_30 * 0x18 + 0x5c));
                    /* try { // try from 08073267 to 0807326b has its CatchHandler @ 080732d8 */
        std::pair<unsigned_short_const,STDungeonLagStatistics>::
        pair<unsigned_short,STDungeonLagStatistics>(local_8c,local_68);
                    /* try { // try from 0807328c to 08073290 has its CatchHandler @ 080732c0 */
        std::
        map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
        ::insert(local_94);
        std::pair<unsigned_short_const,STDungeonLagStatistics>::~pair(local_8c);
        std::pair<unsigned_short,STDungeonLagStatistics>::~pair(local_68);
        STDungeonLagStatistics::~STDungeonLagStatistics((STDungeonLagStatistics *)&local_bc);
      }
      else {
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
                operator->(local_9c);
        local_cc = (int)(longlong)ROUND(local_24);
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + local_cc;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
                operator->(local_9c);
        local_cc = (int)(longlong)ROUND(local_20);
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + local_cc;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
                operator->(local_9c);
        *(uint *)(iVar3 + 0xc) =
             *(int *)(iVar3 + 0xc) + (uint)*(ushort *)(param_1 + local_30 * 0x18 + 0x67);
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
                operator->(local_9c);
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
                operator->(local_9c);
        local_cc = (int)(longlong)ROUND(local_14);
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + local_cc;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
                operator->(local_9c);
        local_cc = (int)(longlong)ROUND(local_10);
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + local_cc;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
                operator->(local_9c);
        *(uint *)(iVar3 + 0x1c) =
             *(int *)(iVar3 + 0x1c) + (uint)*(ushort *)(param_1 + local_30 * 0x18 + 0x72);
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STDungeonLagStatistics>>::
                operator->(local_9c);
        *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1377 行）：

```cpp
void StatisticManager::AddLagStatistics(Packet_Stat_Lag_Statistics* pkt)
{
    for (int i = 0; i < 8; i++)
    {
        if (((LagWire*)pkt)->m_mods[i].m_u.m_int != 0)
        {
            float avg_f = *(float*)((char*)pkt + i * 10 + 0xb);
            float dev_f = *(float*)((char*)pkt + i * 10 + 0xf);
            m_modules[i].m_data[0] += (int)(long long)avg_f;
            m_modules[i].m_data[1] += (int)(long long)dev_f;
            m_modules[i].m_data[2] +=
                (unsigned int)*(unsigned short*)((char*)pkt + i * 10 + 0x13);
            m_modules[i].m_data[3] += 1;
        }
    }
    unsigned char dcount = *(char*)((char*)pkt + 0x5b);
    if (dcount != 0 && dcount < 0xb)
    {
        for (int j = 0; j < (int)dcount; j++)
        {
            float a = *(float*)((char*)pkt + j * 0x18 + 0x5f);
            float b = *(float*)((char*)pkt + j * 0x18 + 99);
            float c = *(float*)((char*)pkt + j * 0x18 + 0x6a);
            float d = *(float*)((char*)pkt + j * 0x18 + 0x6e);
            unsigned short key = *(unsigned short*)((char*)pkt + j * 0x18 + 0x5c);
            std::map<unsigned short, STDungeonLagStatistics>::iterator it =
                m_dungeonLag.find(key);
            bool isNew = (m_dungeonLag.empty() || it == m_dungeonLag.end());
            if (isNew)
            {
                STDungeonLagStatistics v;
                v.m_data[0] = (int)(long long)a;
                v.m_data[1] = (int)(long long)b;
                v.m_data[2] = (unsigned int)*(unsigned short*)((char*)pkt + j * 0x18 + 0x67);
                v.m_data[3] = 1;
                v.m_data[4] = (int)(long long)c;
                v.m_data[5] = (int)(long long)d;
                v.m_data[6] = (unsigned int)*(unsigned short*)((char*)pkt + j * 0x18 + 0x72);
                v.m_data[7] = 1;
                m_dungeonLag.insert(std::make_pair(key, v));
            }
            else
            {
                it->second.m_data[0] += (int)(long long)a;
                it->second.m_data[1] += (int)(long long)b;
                it->second.m_data[2] +=
                    (unsigned int)*(unsigned short*)((char*)pkt + j * 0x18 + 0x67);
                it->second.m_data[3] += 1;
                it->second.m_data[4] += (int)(long long)c;
                it->second.m_data[5] += (int)(long long)d;
                it->second.m_data[6] +=
                    (unsigned int)*(unsigned short*)((char*)pkt + j * 0x18 + 0x72);
                it->second.m_data[7] += 1;
            }
        }
    }
}
```
