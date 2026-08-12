# _ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics

`StatisticManager::AddLoadingTimeReportStatistics(Packet_Loading_Time_Report_Statistics*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80715f2` | `0x592` | `0x8071554` | `0x6d7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,402 +1,513 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0xb0,%esp
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x579>
-mov    -0x1c(%ebp),%edx
+sub    $0xc0,%esp
+movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x6be>
 mov    0xc(%ebp),%eax
-mov    0xa(%eax,%edx,4),%eax
+mov    -0x20(%ebp),%edx
+shl    $0x2,%edx
+add    $0xa,%edx
+add    %edx,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x63>
-mov    -0x1c(%ebp),%ebx
-mov    -0x1c(%ebp),%edx
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x72>
+mov    -0x20(%ebp),%edx
+mov    -0x20(%ebp),%ecx
+mov    0x8(%ebp),%eax
+add    $0x50,%ecx
+mov    (%eax,%ecx,4),%ecx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ebx
+shl    $0x2,%ebx
+add    $0xa,%ebx
+add    %ebx,%eax
+mov    (%eax),%eax
+add    %eax,%ecx
 mov    0x8(%ebp),%eax
 add    $0x50,%edx
-mov    (%eax,%edx,4),%ecx
-mov    -0x1c(%ebp),%edx
+mov    %ecx,(%eax,%edx,4)
+mov    -0x20(%ebp),%edx
+mov    -0x20(%ebp),%ecx
+mov    0x8(%ebp),%eax
+add    $0x58,%ecx
+mov    0x4(%eax,%ecx,4),%eax
+lea    0x1(%eax),%ecx
+mov    0x8(%ebp),%eax
+add    $0x58,%edx
+mov    %ecx,0x4(%eax,%edx,4)
+cmpl   $0x7,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x6ba>
 mov    0xc(%ebp),%eax
-mov    0xa(%eax,%edx,4),%eax
-add    %eax,%ecx
-mov    0x8(%ebp),%eax
-lea    0x50(%ebx),%edx
-mov    %ecx,(%eax,%edx,4)
-mov    -0x1c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x58(%eax),%ecx
-mov    0x4(%edx,%ecx,4),%edx
-lea    0x1(%edx),%ecx
-mov    0x8(%ebp),%edx
-add    $0x58,%eax
-mov    %ecx,0x4(%edx,%eax,4)
-cmpl   $0x7,-0x1c(%ebp)
-jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2ee>
-mov    0xc(%ebp),%eax
-movzwl 0x32(%eax),%eax
-mov    %ax,-0x16(%ebp)
-cmpw   $0x0,-0x16(%ebp)
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2ee>
-lea    -0x84(%ebp),%eax
+add    $0x32,%eax
+movzwl (%eax),%eax
+mov    %ax,-0x1c(%ebp)
+cmpw   $0x0,-0x1c(%ebp)
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x3a2>
+lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25STPowerwarFightLoadingKeyC1Ev>
 mov    0xc(%ebp),%eax
-mov    0x2e(%eax),%eax
-mov    %eax,-0x84(%ebp)
-movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2ae>
-mov    -0x14(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x30,%eax
-movzwl 0x4(%eax),%eax
-mov    %ax,-0x80(%ebp)
+add    $0x2e,%eax
+mov    (%eax),%eax
+mov    %eax,-0x88(%ebp)
+movl   $0x0,-0x18(%ebp)
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x362>
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+add    %edx,%eax
+add    $0x34,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl (%eax),%eax
+mov    %ax,-0x84(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x188,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE4sizeEv>
 cmp    $0x3e8,%eax
 setbe  %al
 test   %al,%al
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2aa>
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x35e>
 mov    0x8(%ebp),%eax
 lea    0x188(%eax),%ecx
-lea    -0x88(%ebp),%eax
-lea    -0x84(%ebp),%edx
+lea    -0x8c(%ebp),%eax
+lea    -0x88(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 add    $0x188,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x154>
+jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x169>
 mov    0x8(%ebp),%eax
 lea    0x188(%eax),%edx
+lea    -0x80(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
+sub    $0x4,%esp
+lea    -0x80(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEeqERKS5_>
+test   %al,%al
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x170>
+mov    $0x1,%eax
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x175>
+mov    $0x0,%eax
+mov    %al,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2cb>
+lea    -0x94(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN26STPowerwarFightLoadingDataC1Ev>
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+add    %edx,%eax
+add    $0x36,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl (%eax),%eax
+mov    %al,-0x94(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+add    %edx,%eax
+add    $0x37,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl (%eax),%eax
+mov    %ax,-0x92(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+add    %edx,%eax
+add    $0x39,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl (%eax),%eax
+mov    %ax,-0x90(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+add    %edx,%eax
+add    $0x3b,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl (%eax),%eax
+mov    %ax,-0x8e(%ebp)
+lea    -0x64(%ebp),%eax
+lea    -0x94(%ebp),%edx
+mov    %edx,0x8(%esp)
+lea    -0x88(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZSt9make_pairIR25STPowerwarFightLoadingKeyR26STPowerwarFightLoadingDataESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
+sub    $0x4,%esp
+lea    -0x64(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEC1IS0_S2_EEOS_IT_T0_E>
+mov    0x8(%ebp),%eax
+lea    0x188(%eax),%ecx
 lea    -0x7c(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
-sub    $0x4,%esp
-lea    -0x7c(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x88(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEeqERKS5_>
-test   %al,%al
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x15b>
-mov    $0x1,%eax
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x160>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2aa>
-lea    -0x90(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN26STPowerwarFightLoadingDataC1Ev>
-mov    -0x14(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x36,%eax
-movzbl (%eax),%eax
-mov    %al,-0x90(%ebp)
-mov    -0x14(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x30,%eax
-movzwl 0x7(%eax),%eax
-mov    %ax,-0x8e(%ebp)
-mov    -0x14(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x30,%eax
-movzwl 0x9(%eax),%eax
-mov    %ax,-0x8c(%ebp)
-mov    -0x14(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x30,%eax
-movzwl 0xb(%eax),%eax
-mov    %ax,-0x8a(%ebp)
-lea    -0x60(%ebp),%eax
-lea    -0x90(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    -0x84(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIR25STPowerwarFightLoadingKeyR26STPowerwarFightLoadingDataESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
-sub    $0x4,%esp
-lea    -0x60(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEC1IS0_S2_EEOS_IT_T0_E>
-mov    0x8(%ebp),%eax
-lea    0x188(%eax),%ecx
-lea    -0x78(%ebp),%eax
-lea    -0x70(%ebp),%edx
+lea    -0x74(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 sub    $0x4,%esp
-lea    -0x70(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataED1Ev>
-lea    -0x60(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x290>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x27b>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataED1Ev>
-lea    -0x90(%ebp),%eax
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x29d>
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataED1Ev>
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2b8>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x94(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26STPowerwarFightLoadingDataD1Ev>
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2aa>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x27d>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x292>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x90(%ebp),%eax
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x376>
+lea    -0x94(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26STPowerwarFightLoadingDataD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2c2>
-addl   $0x1,-0x14(%ebp)
-movzwl -0x16(%ebp),%eax
-cmp    -0x14(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x35e>
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEptEv>
+mov    %eax,%edx
+movzwl 0xa(%edx),%ebx
+mov    0xc(%ebp),%esi
+mov    -0x18(%ebp),%ecx
+mov    %ecx,%eax
+shl    $0x3,%eax
+add    %ecx,%eax
+add    $0x37,%eax
+lea    (%esi,%eax,1),%eax
+movzwl (%eax),%eax
+lea    (%ebx,%eax,1),%eax
+mov    %ax,0xa(%edx)
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEptEv>
+mov    %eax,%edx
+movzwl 0xc(%edx),%ebx
+mov    0xc(%ebp),%esi
+mov    -0x18(%ebp),%ecx
+mov    %ecx,%eax
+shl    $0x3,%eax
+add    %ecx,%eax
+add    $0x39,%eax
+lea    (%esi,%eax,1),%eax
+movzwl (%eax),%eax
+lea    (%ebx,%eax,1),%eax
+mov    %ax,0xc(%edx)
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEptEv>
+mov    %eax,%edx
+movzwl 0xe(%edx),%ebx
+mov    0xc(%ebp),%esi
+mov    -0x18(%ebp),%ecx
+mov    %ecx,%eax
+shl    $0x3,%eax
+add    %ecx,%eax
+add    $0x3b,%eax
+lea    (%esi,%eax,1),%eax
+movzwl (%eax),%eax
+lea    (%ebx,%eax,1),%eax
+mov    %ax,0xe(%edx)
+addl   $0x1,-0x18(%ebp)
+movzwl -0x1c(%ebp),%eax
+cmp    -0x18(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0xa9>
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2e0>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x84(%ebp),%eax
+jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0xbc>
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x394>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25STPowerwarFightLoadingKeyD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x84(%ebp),%eax
+lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25STPowerwarFightLoadingKeyD1Ev>
-cmpl   $0x8,-0x1c(%ebp)
-jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x575>
 mov    0xc(%ebp),%eax
-movzwl 0x3b8(%eax),%eax
-mov    %ax,-0xe(%ebp)
-cmpw   $0x0,-0xe(%ebp)
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x575>
-lea    -0x98(%ebp),%eax
+add    $0x4e,%eax
+movzwl (%eax),%eax
+mov    %ax,-0x1a(%ebp)
+cmpw   $0x0,-0x1a(%ebp)
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x6ba>
+lea    -0x9c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21STPowerwarFightLagKeyC1Ev>
 mov    0xc(%ebp),%eax
-mov    0x2e(%eax),%eax
-mov    %eax,-0x98(%ebp)
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x535>
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x3b0,%eax
-movzwl 0xa(%eax),%eax
-mov    %ax,-0x94(%ebp)
+add    $0x4a,%eax
+mov    (%eax),%eax
+mov    %eax,-0x9c(%ebp)
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x67a>
+mov    0xc(%ebp),%ecx
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+add    $0x50,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl (%eax),%eax
+mov    %ax,-0x98(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1a0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE4sizeEv>
 cmp    $0x3e8,%eax
 setbe  %al
 test   %al,%al
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x531>
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x676>
 mov    0x8(%ebp),%eax
 lea    0x1a0(%eax),%ecx
-lea    -0x9c(%ebp),%eax
-lea    -0x98(%ebp),%edx
+lea    -0xa0(%ebp),%eax
+lea    -0x9c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 add    $0x1a0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x3eb>
+jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x493>
 mov    0x8(%ebp),%eax
 lea    0x1a0(%eax),%edx
+lea    -0x54(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
+sub    $0x4,%esp
+lea    -0x54(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0xa0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEeqERKS5_>
+test   %al,%al
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x49a>
+mov    $0x1,%eax
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x49f>
+mov    $0x0,%eax
+mov    %al,-0x9(%ebp)
+cmpb   $0x0,-0x9(%ebp)
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x5df>
+lea    -0xac(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN22STPowerwarFightLagDataC1Ev>
+mov    0xc(%ebp),%ecx
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+add    $0x52,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %al,-0xac(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+add    $0x56,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,-0xa8(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+add    $0x5a,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,-0xa4(%ebp)
+lea    -0x34(%ebp),%eax
+lea    -0xac(%ebp),%edx
+mov    %edx,0x8(%esp)
+lea    -0x9c(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZSt9make_pairIR21STPowerwarFightLagKeyR22STPowerwarFightLagDataESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
+sub    $0x4,%esp
+lea    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEC1IS0_S2_EEOS_IT_T0_E>
+mov    0x8(%ebp),%eax
+lea    0x1a0(%eax),%ecx
 lea    -0x50(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
-sub    $0x4,%esp
-lea    -0x50(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x9c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEeqERKS5_>
-test   %al,%al
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x3f2>
-mov    $0x1,%eax
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x3f7>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x531>
-lea    -0xa8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN22STPowerwarFightLagDataC1Ev>
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x3bc,%eax
-movzbl (%eax),%eax
-mov    %al,-0xa8(%ebp)
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x3b0,%eax
-mov    0xd(%eax),%eax
-mov    %eax,-0xa4(%ebp)
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x3b0,%eax
-mov    0x11(%eax),%eax
-mov    %eax,-0xa0(%ebp)
-lea    -0x30(%ebp),%eax
-lea    -0xa8(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    -0x98(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIR21STPowerwarFightLagKeyR22STPowerwarFightLagDataESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
-sub    $0x4,%esp
-lea    -0x30(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEC1IS0_S2_EEOS_IT_T0_E>
-mov    0x8(%ebp),%eax
-lea    0x1a0(%eax),%ecx
-lea    -0x4c(%ebp),%eax
-lea    -0x44(%ebp),%edx
+lea    -0x48(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 sub    $0x4,%esp
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataED1Ev>
-lea    -0x30(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x5a4>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x58f>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairI21STPowerwarFightLagKey22STPowerwarFightLagDataED1Ev>
-lea    -0xa8(%ebp),%eax
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x5b1>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI21STPowerwarFightLagKey22STPowerwarFightLagDataED1Ev>
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x5cc>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0xac(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22STPowerwarFightLagDataD1Ev>
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x531>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x504>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI21STPowerwarFightLagKey22STPowerwarFightLagDataED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x519>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0xa8(%ebp),%eax
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x68e>
+lea    -0xac(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22STPowerwarFightLagDataD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x549>
-addl   $0x1,-0xc(%ebp)
-movzwl -0xe(%ebp),%eax
-cmp    -0xc(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x676>
+lea    -0xa0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEptEv>
+mov    %eax,%ecx
+movzbl 0x8(%ecx),%ebx
+mov    0xc(%ebp),%esi
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+add    $0x52,%eax
+lea    (%esi,%eax,1),%eax
+mov    (%eax),%eax
+lea    (%ebx,%eax,1),%eax
+mov    %al,0x8(%ecx)
+lea    -0xa0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEptEv>
+mov    %eax,%ecx
+mov    0xc(%ecx),%ebx
+mov    0xc(%ebp),%esi
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+add    $0x56,%eax
+lea    (%esi,%eax,1),%eax
+mov    (%eax),%eax
+lea    (%ebx,%eax,1),%eax
+mov    %eax,0xc(%ecx)
+lea    -0xa0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEptEv>
+mov    %eax,%ecx
+mov    0x10(%ecx),%ebx
+mov    0xc(%ebp),%esi
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+add    $0x5a,%eax
+lea    (%esi,%eax,1),%eax
+mov    (%eax),%eax
+lea    (%ebx,%eax,1),%eax
+mov    %eax,0x10(%ecx)
+addl   $0x1,-0x10(%ebp)
+movzwl -0x1a(%ebp),%eax
+cmp    -0x10(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x337>
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x567>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x98(%ebp),%eax
+jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x3e2>
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x6ac>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x9c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21STPowerwarFightLagKeyD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x98(%ebp),%eax
+lea    -0x9c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21STPowerwarFightLagKeyD1Ev>
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x8,-0x1c(%ebp)
+addl   $0x1,-0x20(%ebp)
+cmpl   $0x8,-0x20(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x17>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddLoadingTimeReportStatistics(Packet_Loading_Time_Report_Statistics*) */

void __thiscall
StatisticManager::
_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics
          (StatisticManager *this,Packet_Loading_Time_Report_Statistics *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  Packet_Loading_Time_Report_Statistics local_ac [4];
  undefined4 local_a8;
  undefined4 local_a4;
  STPowerwarFightLagKey local_a0 [4];
  undefined4 local_9c;
  undefined2 local_98;
  Packet_Loading_Time_Report_Statistics local_94 [2];
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  STPowerwarFightLoadingKey local_8c [4];
  undefined4 local_88;
  undefined2 local_84;
  map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
  local_80 [4];
  pair local_7c [8];
  pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData> local_74 [16];
  STPowerwarFightLoadingKey local_64 [16];
  map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
  local_54 [4];
  pair local_50 [8];
  pair<STPowerwarFightLagKey_const,STPowerwarFightLagData> local_48 [20];
  STPowerwarFightLagKey local_34 [20];
  int local_20;
  ushort local_1a;
  int local_18;
  ushort local_12;
  int local_10;
  
  local_20 = 0;
  do {
    if (8 < local_20) {
      return;
    }
    if (*(int *)(param_1 + local_20 * 4 + 10) != 0) {
      *(int *)(this + (local_20 + 0x50) * 4) =
           *(int *)(this + (local_20 + 0x50) * 4) + *(int *)(param_1 + local_20 * 4 + 10);
      *(int *)(this + (local_20 + 0x58) * 4 + 4) = *(int *)(this + (local_20 + 0x58) * 4 + 4) + 1;
    }
    if ((local_20 == 7) && (local_1a = *(ushort *)(param_1 + 0x32), local_1a != 0)) {
      STPowerwarFightLoadingKey::STPowerwarFightLoadingKey((STPowerwarFightLoadingKey *)&local_88);
      local_88 = *(undefined4 *)(param_1 + 0x2e);
      for (local_18 = 0; local_18 < (int)(uint)local_1a; local_18 = local_18 + 1) {
        local_84 = *(undefined2 *)(param_1 + local_18 * 9 + 0x34);
                    /* try { // try from 080716c1 to 08071729 has its CatchHandler @ 080718b4 */
        uVar3 = std::
                map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
                ::size((map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
                        *)(this + 0x188));
        if (uVar3 < 0x3e9) {
          std::
          map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
          ::find(local_8c);
          cVar2 = std::
                  map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
                  ::empty((map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
                           *)(this + 0x188));
          if (cVar2 == '\0') {
            std::
            map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
            ::end(local_80);
            cVar2 = std::
                    _Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
                    ::operator==((_Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
                                  *)local_8c,(_Rb_tree_iterator *)local_80);
            if (cVar2 != '\0') goto LAB_08071746;
            bVar1 = false;
          }
          else {
LAB_08071746:
            bVar1 = true;
          }
          if (bVar1) {
            STPowerwarFightLoadingData::STPowerwarFightLoadingData
                      ((STPowerwarFightLoadingData *)local_94);
            local_94[0] = param_1[local_18 * 9 + 0x36];
            local_92 = *(undefined2 *)(param_1 + local_18 * 9 + 0x37);
            local_90 = *(undefined2 *)(param_1 + local_18 * 9 + 0x39);
            local_8e = *(undefined2 *)(param_1 + local_18 * 9 + 0x3b);
                    /* try { // try from 080717f8 to 080717fc has its CatchHandler @ 08071884 */
            std::make_pair<STPowerwarFightLoadingKey&,STPowerwarFightLoadingData&>
                      (local_64,(STPowerwarFightLoadingData *)&local_88);
                    /* try { // try from 0807180d to 08071811 has its CatchHandler @ 0807186f */
            std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>::
            pair<STPowerwarFightLoadingKey,STPowerwarFightLoadingData>(local_74,local_64);
                    /* try { // try from 0807182c to 08071830 has its CatchHandler @ 0807185a */
            std::
            map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
            ::insert(local_7c);
            std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>::~pair(local_74);
            std::pair<STPowerwarFightLoadingKey,STPowerwarFightLoadingData>::~pair
                      ((pair<STPowerwarFightLoadingKey,STPowerwarFightLoadingData> *)local_64);
            STPowerwarFightLoadingData::~STPowerwarFightLoadingData
                      ((STPowerwarFightLoadingData *)local_94);
          }
        }
      }
      STPowerwarFightLoadingKey::~STPowerwarFightLoadingKey((STPowerwarFightLoadingKey *)&local_88);
    }
    if ((local_20 == 8) && (local_12 = *(ushort *)(param_1 + 0x3b8), local_12 != 0)) {
      STPowerwarFightLagKey::STPowerwarFightLagKey((STPowerwarFightLagKey *)&local_9c);
      local_9c = *(undefined4 *)(param_1 + 0x2e);
      for (local_10 = 0; local_10 < (int)(uint)local_12; local_10 = local_10 + 1) {
        local_98 = *(undefined2 *)(param_1 + local_10 * 0xb + 0x3ba);
                    /* try { // try from 08071958 to 080719c0 has its CatchHandler @ 08071b3b */
        uVar3 = std::
                map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
                ::size((map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
                        *)(this + 0x1a0));
        if (uVar3 < 0x3e9) {
          std::
          map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
          ::find(local_a0);
          cVar2 = std::
                  map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
                  ::empty((map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
                           *)(this + 0x1a0));
          if (cVar2 == '\0') {
            std::
            map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
            ::end(local_54);
            cVar2 = std::
                    _Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>
                    ::operator==((_Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>
                                  *)local_a0,(_Rb_tree_iterator *)local_54);
            if (cVar2 != '\0') goto LAB_080719dd;
            bVar1 = false;
          }
          else {
LAB_080719dd:
            bVar1 = true;
          }
          if (bVar1) {
            STPowerwarFightLagData::STPowerwarFightLagData((STPowerwarFightLagData *)local_ac);
            local_ac[0] = param_1[local_10 * 0xb + 0x3bc];
            local_a8 = *(undefined4 *)(param_1 + local_10 * 0xb + 0x3bd);
            local_a4 = *(undefined4 *)(param_1 + local_10 * 0xb + 0x3c1);
                    /* try { // try from 08071a7f to 08071a83 has its CatchHandler @ 08071b0b */
            std::make_pair<STPowerwarFightLagKey&,STPowerwarFightLagData&>
                      (local_34,(STPowerwarFightLagData *)&local_9c);
                    /* try { // try from 08071a94 to 08071a98 has its CatchHandler @ 08071af6 */
            std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>::
            pair<STPowerwarFightLagKey,STPowerwarFightLagData>(local_48,local_34);
                    /* try { // try from 08071ab3 to 08071ab7 has its CatchHandler @ 08071ae1 */
            std::
            map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
            ::insert(local_50);
            std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>::~pair(local_48);
            std::pair<STPowerwarFightLagKey,STPowerwarFightLagData>::~pair
                      ((pair<STPowerwarFightLagKey,STPowerwarFightLagData> *)local_34);
            STPowerwarFightLagData::~STPowerwarFightLagData((STPowerwarFightLagData *)local_ac);
          }
        }
      }
      STPowerwarFightLagKey::~STPowerwarFightLagKey((STPowerwarFightLagKey *)&local_9c);
    }
    local_20 = local_20 + 1;
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 852 行）：

```cpp
void StatisticManager::AddLoadingTimeReportStatistics(Packet_Loading_Time_Report_Statistics* pkt)
{
    for (int i = 0; i <= 8; i++)
    {
        if (*(int*)((char*)pkt + i * 4 + 10) != 0)
        {
            m_loading.m_data[i] += *(int*)((char*)pkt + i * 4 + 10);
            m_loading.m_data2[i] += 1;
        }
        if (i == 7)
        {
            unsigned short lcount = *(unsigned short*)((char*)pkt + 0x32);
            if (lcount != 0)
            {
                STPowerwarFightLoadingKey lkey;
                lkey.m_field0 = *(unsigned int*)((char*)pkt + 0x2e);
                for (int j = 0; j < (int)lcount; j++)
                {
                    lkey.m_field4 = *(unsigned short*)((char*)pkt + j * 9 + 0x34);
                    if (m_pwLoading.size() < 0x3e9)
                    {
                        std::map<STPowerwarFightLoadingKey, STPowerwarFightLoadingData>::iterator it =
                            m_pwLoading.find(lkey);
                        bool isNew = (m_pwLoading.empty() || it == m_pwLoading.end());
                        if (isNew)
                        {
                            STPowerwarFightLoadingData v;
                            v.m_field0 = *(char*)((char*)pkt + j * 9 + 0x36);
                            v.m_field2 = *(unsigned short*)((char*)pkt + j * 9 + 0x37);
                            v.m_field4 = *(unsigned short*)((char*)pkt + j * 9 + 0x39);
                            v.m_field6 = *(unsigned short*)((char*)pkt + j * 9 + 0x3b);
                            m_pwLoading.insert(std::make_pair(lkey, v));
                        }
                        else
                        {
                            it->second.m_field2 += *(unsigned short*)((char*)pkt + j * 9 + 0x37);
                            it->second.m_field4 += *(unsigned short*)((char*)pkt + j * 9 + 0x39);
                            it->second.m_field6 += *(unsigned short*)((char*)pkt + j * 9 + 0x3b);
                        }
                    }
                }
            }
            unsigned short gcount = *(unsigned short*)((char*)pkt + 0x4e);
            if (gcount != 0)
            {
                STPowerwarFightLagKey gkey;
                gkey.m_field0 = *(unsigned int*)((char*)pkt + 0x4a);
                for (int j = 0; j < (int)gcount; j++)
                {
                    gkey.m_field4 = *(unsigned short*)((char*)pkt + j * 0xd + 0x50);
                    if (m_pwLag.size() < 0x3e9)
                    {
                        std::map<STPowerwarFightLagKey, STPowerwarFightLagData>::iterator it =
                            m_pwLag.find(gkey);
                        bool isNew = (m_pwLag.empty() || it == m_pwLag.end());
                        if (isNew)
                        {
                            STPowerwarFightLagData v;
                            v.m_field0 = *(unsigned int*)((char*)pkt + j * 0xd + 0x52);
                            v.m_field4 = *(unsigned int*)((char*)pkt + j * 0xd + 0x56);
                            v.m_field8 = *(unsigned int*)((char*)pkt + j * 0xd + 0x5a);
                            m_pwLag.insert(std::make_pair(gkey, v));
                        }
                        else
                        {
                            it->second.m_field0 += *(unsigned int*)((char*)pkt + j * 0xd + 0x52);
                            it->second.m_field4 += *(unsigned int*)((char*)pkt + j * 0xd + 0x56);
                            it->second.m_field8 += *(unsigned int*)((char*)pkt + j * 0xd + 0x5a);
                        }
                    }
                }
            }
        }
    }
}
```
