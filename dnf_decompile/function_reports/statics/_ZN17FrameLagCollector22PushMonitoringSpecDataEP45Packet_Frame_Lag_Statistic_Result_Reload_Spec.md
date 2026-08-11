# _ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec

`FrameLagCollector::PushMonitoringSpecData(Packet_Frame_Lag_Statistic_Result_Reload_Spec*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8067164` | `0x41a` | `0x80604a8` | `0x501` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,312 +1,426 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2ac,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0x2,%eax
 je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x21>
 mov    $0x2,%eax
-jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x40f>
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x4f6>
 mov    0x8(%ebp),%eax
 movzbl 0x19(%eax),%edx
 mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x40a>
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x3f>
+mov    $0x0,%eax
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x4f6>
+mov    0xc(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
+mov    %eax,-0x30(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x34(%eax),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEE3endEv>
 sub    $0x4,%esp
-mov    0xc(%ebp),%eax
-lea    0xb(%eax),%ecx
-mov    0x8(%ebp),%eax
-lea    0x34(%eax),%edx
-lea    -0x24(%ebp),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    0x8(%ebp),%eax
+lea    0x34(%eax),%ecx
+lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEE4findERS3_>
 sub    $0x4,%esp
+lea    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKicEEeqERKS3_>
 test   %al,%al
-je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x40a>
-mov    0xc(%ebp),%eax
-lea    0xb(%eax),%edx
-mov    0x8(%ebp),%eax
-add    $0x34,%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0xa1>
+mov    $0x0,%eax
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x4f6>
+mov    0x8(%ebp),%eax
+lea    0x34(%eax),%edx
+lea    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEEixERS3_>
 movb   $0x1,(%eax)
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x3b3>
+movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x496>
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%edx
+add    $0x4,%edx
+shl    $0x2,%edx
+add    $0x3,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
+cmp    $0xffffffff,%eax
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x4a7>
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%edx
+add    $0x8,%edx
+shl    $0x2,%edx
+add    $0xb,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x50(%eax),%eax
+cmp    -0x1c(%ebp),%eax
+jge    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x111>
+mov    0x8(%ebp),%eax
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x4,%edx
-mov    0x3(%eax,%edx,4),%eax
-cmp    $0xffffffff,%eax
-je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x3c4>
-mov    0x8(%ebp),%eax
-mov    0x50(%eax),%edx
-mov    -0x1c(%ebp),%ecx
-mov    0xc(%ebp),%eax
-add    $0x8,%ecx
-mov    0xb(%eax,%ecx,4),%eax
-cmp    %eax,%edx
-jge    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0xf2>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x8,%edx
-mov    0xb(%eax,%edx,4),%edx
-mov    0x8(%ebp),%eax
 mov    %edx,0x50(%eax)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEC1Ev>
-mov    -0x1c(%ebp),%eax
-add    $0x4,%eax
-shl    $0x2,%eax
-add    0xc(%ebp),%eax
-lea    0x3(%eax),%ecx
-mov    0x8(%ebp),%eax
-lea    0x54(%eax),%edx
-lea    -0x29c(%ebp),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    0x8(%ebp),%eax
+lea    0x54(%eax),%ecx
+lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18MonitoringSpecCaseESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 sub    $0x4,%esp
-mov    -0x29c(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x54(%eax),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18MonitoringSpecCaseESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEeqERKS5_>
 test   %al,%al
-je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x25c>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x284>
+lea    -0x58(%ebp),%eax
+mov    0xc(%ebp),%edx
+mov    -0x20(%ebp),%ecx
+add    $0x10,%ecx
+shl    $0x2,%ecx
+add    $0x3,%ecx
+add    %ecx,%edx
+mov    (%edx),%edx
+mov    %edx,(%eax)
+lea    -0x58(%ebp),%eax
+lea    0x4(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x5b,%ecx
+add    %ecx,%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+mov    %eax,(%edx)
+lea    -0x58(%ebp),%eax
+lea    0x8(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x18,%ecx
+shl    $0x2,%ecx
+add    $0x7,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x58(%ebp),%eax
+lea    0xc(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x1c,%ecx
+shl    $0x2,%ecx
+add    $0xf,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x58(%ebp),%eax
+lea    0x10(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x48,%ecx
+add    %ecx,%ecx
+add    $0x7,%ecx
+add    %ecx,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,(%edx)
+lea    -0x58(%ebp),%eax
+lea    0x14(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x28,%ecx
+shl    $0x2,%ecx
+add    $0x3,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x58(%ebp),%eax
+lea    0x18(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x2c,%ecx
+shl    $0x2,%ecx
+add    $0xb,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x58(%ebp),%eax
+lea    0x1c(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x68,%ecx
+add    %ecx,%ecx
+add    $0x3,%ecx
+add    %ecx,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,(%edx)
+mov    0x8(%ebp),%eax
+lea    0x54(%eax),%edx
+lea    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNSt3mapIiN17FrameLagCollector18MonitoringSpecCaseESt4lessIiESaISt4pairIKiS1_EEEixERS5_>
+mov    -0x58(%ebp),%edx
+mov    %edx,(%eax)
+mov    -0x54(%ebp),%edx
+mov    %edx,0x4(%eax)
+mov    -0x50(%ebp),%edx
+mov    %edx,0x8(%eax)
+mov    -0x4c(%ebp),%edx
+mov    %edx,0xc(%eax)
+mov    -0x48(%ebp),%edx
+mov    %edx,0x10(%eax)
+mov    -0x44(%ebp),%edx
+mov    %edx,0x14(%eax)
+mov    -0x40(%ebp),%edx
+mov    %edx,0x18(%eax)
+mov    -0x3c(%ebp),%edx
+mov    %edx,0x1c(%eax)
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x3f0>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
+add    $0x4,%eax
+lea    0x4(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x10,%ecx
+shl    $0x2,%ecx
+add    $0x3,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
+lea    0xc(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x5b,%ecx
+add    %ecx,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
+lea    0xd(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x61,%ecx
+add    %ecx,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
+add    $0x4,%eax
+lea    0xc(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x18,%ecx
+shl    $0x2,%ecx
+add    $0x7,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
+add    $0x4,%eax
+lea    0x10(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x1c,%ecx
+shl    $0x2,%ecx
+add    $0xf,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
+add    $0x4,%eax
+lea    0x14(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x48,%ecx
+add    %ecx,%ecx
+add    $0x7,%ecx
+add    %ecx,%eax
+movzwl (%eax),%eax
+mov    %ax,(%edx)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
+add    $0x4,%eax
+lea    0x18(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x28,%ecx
+shl    $0x2,%ecx
+add    $0x3,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
+add    $0x4,%eax
+lea    0x1c(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x2c,%ecx
+shl    $0x2,%ecx
+add    $0xb,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
+add    $0x4,%eax
+lea    0x20(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x68,%ecx
+add    %ecx,%ecx
+add    $0x3,%ecx
+add    %ecx,%eax
+movzwl (%eax),%eax
+mov    %ax,(%edx)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
+add    $0x4,%eax
+lea    0x22(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0xdf,%ecx
+add    %ecx,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+lea    -0x2a0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17FrameLagCollector18FrameLagDataStructC1Ev>
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%edx
 add    $0x10,%edx
-mov    0x3(%eax,%edx,4),%eax
-mov    %eax,-0x4c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-movzbl 0x5b(%edx,%eax,1),%eax
-mov    %al,-0x48(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-movzbl 0x61(%edx,%eax,1),%eax
-mov    %al,-0x47(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x18,%edx
-mov    0x7(%eax,%edx,4),%eax
-mov    %eax,-0x44(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x1c,%edx
-mov    0xf(%eax,%edx,4),%eax
-mov    %eax,-0x40(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x48,%edx
-movzwl 0x7(%eax,%edx,2),%eax
-mov    %ax,-0x3c(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x28,%edx
-mov    0x3(%eax,%edx,4),%eax
-mov    %eax,-0x38(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x2c,%edx
-mov    0xb(%eax,%edx,4),%eax
-mov    %eax,-0x34(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x68,%edx
-movzwl 0x3(%eax,%edx,2),%eax
-mov    %ax,-0x30(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-movzbl 0xdf(%edx,%eax,1),%eax
-mov    %al,-0x2e(%ebp)
-mov    -0x1c(%ebp),%eax
-add    $0x4,%eax
-shl    $0x2,%eax
-add    0xc(%ebp),%eax
-lea    0x3(%eax),%edx
-mov    0x8(%ebp),%eax
-add    $0x54,%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIiN17FrameLagCollector18MonitoringSpecCaseESt4lessIiESaISt4pairIKiS1_EEEixERS5_>
-mov    -0x4c(%ebp),%edx
-mov    %edx,(%eax)
-mov    -0x48(%ebp),%edx
-mov    %edx,0x4(%eax)
-mov    -0x44(%ebp),%edx
-mov    %edx,0x8(%eax)
-mov    -0x40(%ebp),%edx
-mov    %edx,0xc(%eax)
-mov    -0x3c(%ebp),%edx
-mov    %edx,0x10(%eax)
-mov    -0x38(%ebp),%edx
-mov    %edx,0x14(%eax)
-mov    -0x34(%ebp),%edx
-mov    %edx,0x18(%eax)
-mov    -0x30(%ebp),%edx
-mov    %edx,0x1c(%eax)
-jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x36b>
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    -0x1c(%ebp),%ecx
-mov    0xc(%ebp),%edx
-add    $0x10,%ecx
-mov    0x3(%edx,%ecx,4),%edx
-mov    %edx,0x4(%eax)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-movzbl 0x5b(%ecx,%edx,1),%edx
-mov    %dl,0x8(%eax)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-movzbl 0x61(%ecx,%edx,1),%edx
-mov    %dl,0x9(%eax)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    -0x1c(%ebp),%ecx
-mov    0xc(%ebp),%edx
-add    $0x18,%ecx
-mov    0x7(%edx,%ecx,4),%edx
-mov    %edx,0xc(%eax)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    -0x1c(%ebp),%ecx
-mov    0xc(%ebp),%edx
-add    $0x1c,%ecx
-mov    0xf(%edx,%ecx,4),%edx
-mov    %edx,0x10(%eax)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    -0x1c(%ebp),%ecx
-mov    0xc(%ebp),%edx
-add    $0x48,%ecx
-movzwl 0x7(%edx,%ecx,2),%edx
-mov    %dx,0x14(%eax)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    -0x1c(%ebp),%ecx
-mov    0xc(%ebp),%edx
-add    $0x28,%ecx
-mov    0x3(%edx,%ecx,4),%edx
-mov    %edx,0x18(%eax)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    -0x1c(%ebp),%ecx
-mov    0xc(%ebp),%edx
-add    $0x2c,%ecx
-mov    0xb(%edx,%ecx,4),%edx
-mov    %edx,0x1c(%eax)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    -0x1c(%ebp),%ecx
-mov    0xc(%ebp),%edx
-add    $0x68,%ecx
-movzwl 0x3(%edx,%ecx,2),%edx
-mov    %dx,0x20(%eax)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-movzbl 0xdf(%ecx,%edx,1),%edx
-mov    %dl,0x22(%eax)
-lea    -0x294(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17FrameLagCollector18FrameLagDataStructC1Ev>
-mov    -0x1c(%ebp),%eax
-add    $0x10,%eax
-shl    $0x2,%eax
-add    0xc(%ebp),%eax
-lea    0x3(%eax),%edx
+shl    $0x2,%edx
+add    $0x3,%edx
+lea    (%eax,%edx,1),%edx
 mov    0x8(%ebp),%eax
 add    $0x70,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18FrameLagDataStructESt4lessIiESaISt4pairIKiS1_EEEixERS5_>
-mov    %eax,%edx
-lea    -0x294(%ebp),%ebx
-mov    $0x92,%eax
-mov    %edx,%edi
+lea    -0x2a0(%ebp),%edx
+mov    $0x248,%ebx
+mov    %eax,%ecx
+and    $0x1,%ecx
+test   %ecx,%ecx
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x444>
+movzbl (%edx),%ecx
+mov    %cl,(%eax)
+add    $0x1,%eax
+add    $0x1,%edx
+sub    $0x1,%ebx
+mov    %eax,%ecx
+and    $0x2,%ecx
+test   %ecx,%ecx
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x45c>
+movzwl (%edx),%ecx
+mov    %cx,(%eax)
+add    $0x2,%eax
+add    $0x2,%edx
+sub    $0x2,%ebx
+mov    %ebx,%ecx
+shr    $0x2,%ecx
+mov    %eax,%edi
+mov    %edx,%esi
+rep movsl %ds:(%esi),%es:(%edi)
+mov    %esi,%edx
+mov    %edi,%eax
+mov    $0x0,%ecx
 mov    %ebx,%esi
-mov    %eax,%ecx
-rep movsl %ds:(%esi),%es:(%edi)
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x5,-0x1c(%ebp)
+and    $0x2,%esi
+test   %esi,%esi
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x484>
+movzwl (%edx,%ecx,1),%esi
+mov    %si,(%eax,%ecx,1)
+add    $0x2,%ecx
+and    $0x1,%ebx
+test   %ebx,%ebx
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x492>
+movzbl (%edx,%ecx,1),%edx
+mov    %dl,(%eax,%ecx,1)
+addl   $0x1,-0x20(%ebp)
+cmpl   $0x5,-0x20(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0xb2>
-jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x3c5>
+jne    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0xc5>
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x4a8>
 nop
 mov    0x8(%ebp),%eax
 add    $0x34,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIicSt4lessIiESaISt4pairIKicEEE4sizeEv>
-mov    0xc(%ebp),%edx
-mov    0xf(%edx),%edx
-cmp    %edx,%eax
+mov    %eax,%edx
+mov    0xc(%ebp),%eax
+add    $0xf,%eax
+mov    (%eax),%eax
+cmp    %eax,%edx
 sete   %al
 test   %al,%al
-je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x40a>
-mov    0x8(%ebp),%eax
-mov    0x50(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x4c(%eax),%eax
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x4f1>
+mov    0x8(%ebp),%eax
+mov    0x4c(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0x50(%eax),%eax
 cmp    %eax,%edx
-jle    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x3fe>
+jge    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec+0x4e5>
 mov    0x8(%ebp),%eax
 mov    0x50(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x4c(%eax)
 movl   $"============ReloadSpec Complete!!!==========",(%esp)
 call   <T> <puts>
 mov    $0x0,%eax
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

/* FrameLagCollector::PushMonitoringSpecData(Packet_Frame_Lag_Statistic_Result_Reload_Spec*) */

undefined4 __thiscall
FrameLagCollector::
_ZN17FrameLagCollector22PushMonitoringSpecDataEP45Packet_Frame_Lag_Statistic_Result_Reload_Spec
          (FrameLagCollector *this,Packet_Frame_Lag_Statistic_Result_Reload_Spec *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  FrameLagDataStruct *pFVar6;
  byte bVar7;
  int local_2a0 [2];
  FrameLagDataStruct local_298 [584];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>> local_2c [4];
  _Rb_tree_iterator<std::pair<int_const,char>> local_28 [4];
  map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
  local_24 [4];
  int local_20;
  
  bVar7 = 0;
  if (*(int *)(this + 4) == 2) {
    if (this[0x19] == *(FrameLagCollector *)(param_1 + 10)) {
      std::map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>::end(local_2c);
      std::map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>::find
                ((int *)local_28);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,char>>::operator==
                        (local_28,(_Rb_tree_iterator *)local_2c);
      if (cVar1 != '\0') {
        puVar3 = (undefined1 *)
                 std::map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>::
                 operator[]((map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>
                             *)(this + 0x34),(int *)(param_1 + 0xb));
        *puVar3 = 1;
        local_20 = 0;
        while ((local_20 < 6 && (*(int *)(param_1 + (local_20 + 4) * 4 + 3) != -1))) {
          if (*(int *)(this + 0x50) < *(int *)(param_1 + (local_20 + 8) * 4 + 0xb)) {
            *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + (local_20 + 8) * 4 + 0xb);
          }
          std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
          _Rb_tree_iterator((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                             *)&local_30);
          std::
          map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
          ::find(local_2a0);
          local_30 = local_2a0[0];
          std::
          map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
          ::end(local_24);
          cVar1 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                  ::operator==((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                *)&local_30,(_Rb_tree_iterator *)local_24);
          if (cVar1 == '\0') {
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                *)&local_30);
            *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(param_1 + (local_20 + 0x10) * 4 + 3);
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                *)&local_30);
            *(Packet_Frame_Lag_Statistic_Result_Reload_Spec *)(iVar5 + 8) = param_1[local_20 + 0x5b]
            ;
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                *)&local_30);
            *(Packet_Frame_Lag_Statistic_Result_Reload_Spec *)(iVar5 + 9) = param_1[local_20 + 0x61]
            ;
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                *)&local_30);
            *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1 + (local_20 + 0x18) * 4 + 7);
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                *)&local_30);
            *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(param_1 + (local_20 + 0x1c) * 4 + 0xf);
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                *)&local_30);
            *(undefined2 *)(iVar5 + 0x14) = *(undefined2 *)(param_1 + (local_20 + 0x48) * 2 + 7);
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                *)&local_30);
            *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(param_1 + (local_20 + 0x28) * 4 + 3);
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                *)&local_30);
            *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(param_1 + (local_20 + 0x2c) * 4 + 0xb);
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                *)&local_30);
            *(undefined2 *)(iVar5 + 0x20) = *(undefined2 *)(param_1 + (local_20 + 0x68) * 2 + 3);
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                *)&local_30);
            *(Packet_Frame_Lag_Statistic_Result_Reload_Spec *)(iVar5 + 0x22) =
                 param_1[local_20 + 0xdf];
          }
          else {
            local_50 = *(undefined4 *)(param_1 + (local_20 + 0x10) * 4 + 3);
            local_4c._0_2_ = CONCAT11(param_1[local_20 + 0x61],param_1[local_20 + 0x5b]);
            local_48 = *(undefined4 *)(param_1 + (local_20 + 0x18) * 4 + 7);
            local_44 = *(undefined4 *)(param_1 + (local_20 + 0x1c) * 4 + 0xf);
            local_40 = CONCAT22(local_40._2_2_,*(undefined2 *)(param_1 + (local_20 + 0x48) * 2 + 7))
            ;
            local_3c = *(undefined4 *)(param_1 + (local_20 + 0x28) * 4 + 3);
            local_38 = *(undefined4 *)(param_1 + (local_20 + 0x2c) * 4 + 0xb);
            local_34._0_3_ =
                 CONCAT12(param_1[local_20 + 0xdf],
                          *(undefined2 *)(param_1 + (local_20 + 0x68) * 2 + 3));
            puVar4 = (undefined4 *)
                     std::
                     map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
                     ::operator[]((map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
                                   *)(this + 0x54),(int *)(param_1 + (local_20 + 4) * 4 + 3));
            *puVar4 = local_50;
            puVar4[1] = local_4c;
            puVar4[2] = local_48;
            puVar4[3] = local_44;
            puVar4[4] = local_40;
            puVar4[5] = local_3c;
            puVar4[6] = local_38;
            puVar4[7] = local_34;
          }
          FrameLagDataStruct::FrameLagDataStruct(local_298);
          puVar4 = (undefined4 *)
                   std::
                   map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
                   ::operator[]((map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
                                 *)(this + 0x70),(int *)(param_1 + (local_20 + 0x10) * 4 + 3));
          pFVar6 = local_298;
          for (iVar5 = 0x92; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar4 = *(undefined4 *)pFVar6;
            pFVar6 = pFVar6 + ((uint)bVar7 * -2 + 1) * 4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
          }
          local_20 = local_20 + 1;
        }
        iVar5 = std::map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>::size
                          ((map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>> *
                           )(this + 0x34));
        if (iVar5 == *(int *)(param_1 + 0xf)) {
          if (*(int *)(this + 0x4c) < *(int *)(this + 0x50)) {
            *(undefined4 *)(this + 0x4c) = *(undefined4 *)(this + 0x50);
          }
          puts("============ReloadSpec Complete!!!==========");
        }
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 276 行）：

```cpp
int FrameLagCollector::PushMonitoringSpecData(Packet_Frame_Lag_Statistic_Result_Reload_Spec* pkt)
{
    if (m_field4 != 2)
    {
        return 2;
    }
    if (m_field19 != *(char*)((char*)pkt + 0xa))
    {
        return 0;
    }
    int specId = *(int*)((char*)pkt + 0xb);
    if (m_map34.find(specId) == m_map34.end())
    {
        return 0;
    }
    m_map34[specId] = 1;
    for (int i = 0; i <= 5; i++)
    {
        int sid = *(int*)((char*)pkt + (i + 4) * 4 + 3);
        if (sid == -1)
        {
            break;
        }
        int ts = *(int*)((char*)pkt + (i + 8) * 4 + 0xb);
        if (m_field50 < ts)
        {
            m_field50 = ts;
        }
        std::map<int, MonitoringSpecCase>::iterator it = m_monitor.find(sid);
        if (it == m_monitor.end())
        {
            MonitoringSpecCase mc;
            *(int*)((char*)&mc + 0x0) = *(int*)((char*)pkt + (i + 0x10) * 4 + 3);
            *(int*)((char*)&mc + 0x4) = *(unsigned char*)((char*)pkt + 0x5b + i);
            *(int*)((char*)&mc + 0x8) = *(int*)((char*)pkt + (i + 0x18) * 4 + 7);
            *(int*)((char*)&mc + 0xc) = *(int*)((char*)pkt + (i + 0x1c) * 4 + 0xf);
            *(int*)((char*)&mc + 0x10) = *(unsigned short*)((char*)pkt + (i + 0x48) * 2 + 7);
            *(int*)((char*)&mc + 0x14) = *(int*)((char*)pkt + (i + 0x28) * 4 + 3);
            *(int*)((char*)&mc + 0x18) = *(int*)((char*)pkt + (i + 0x2c) * 4 + 0xb);
            *(int*)((char*)&mc + 0x1c) = *(unsigned short*)((char*)pkt + (i + 0x68) * 2 + 3);
            m_monitor[sid] = mc;
        }
        else
        {
            *(int*)((char*)&it->second + 0x4) = *(int*)((char*)pkt + (i + 0x10) * 4 + 3);
            *(char*)((char*)&it->second + 0x8) = *(char*)((char*)pkt + 0x5b + i);
            *(char*)((char*)&it->second + 0x9) = *(char*)((char*)pkt + 0x61 + i);
            *(int*)((char*)&it->second + 0xc) = *(int*)((char*)pkt + (i + 0x18) * 4 + 7);
            *(int*)((char*)&it->second + 0x10) = *(int*)((char*)pkt + (i + 0x1c) * 4 + 0xf);
            *(short*)((char*)&it->second + 0x14) = *(short*)((char*)pkt + (i + 0x48) * 2 + 7);
            *(int*)((char*)&it->second + 0x18) = *(int*)((char*)pkt + (i + 0x28) * 4 + 3);
            *(int*)((char*)&it->second + 0x1c) = *(int*)((char*)pkt + (i + 0x2c) * 4 + 0xb);
            *(short*)((char*)&it->second + 0x20) = *(short*)((char*)pkt + (i + 0x68) * 2 + 3);
            *(char*)((char*)&it->second + 0x22) = *(char*)((char*)pkt + 0xdf + i);
        }
        FrameLagDataStruct fd;
        m_data[*(int*)((char*)pkt + (i + 0x10) * 4 + 3)] = fd;
    }
    if ((int)m_map34.size() == *(int*)((char*)pkt + 0xf))
    {
        if (m_field4c < m_field50)
        {
            m_field4c = m_field50;
        }
        puts("============ReloadSpec Complete!!!==========");
    }
    return 0;
}
```
