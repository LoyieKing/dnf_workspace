# _ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add

`FrameLagCollector::PushOneFrameLagData(Packet_Frame_Lag_Statistic_Add*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80668ee` | `0x51d` | `0x805fc28` | `0x462` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,388 +1,369 @@
 push   %ebp
 mov    %esp,%ebp
+push   %esi
 push   %ebx
-sub    $0x44,%esp
+sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0x2,%eax
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1c>
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1d>
 mov    $0x2,%eax
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x518>
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x458>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x3f>
+cmp    $0x1,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x43>
 mov    $0x4,%eax
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x518>
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x458>
 mov    0x8(%ebp),%eax
 mov    0x6c(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x6c(%eax)
 mov    0xc(%ebp),%eax
-mov    0x1b(%eax),%eax
+add    $0x6c,%eax
+mov    (%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0xa4,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0xc2>
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0xb8,%edx
-movzwl 0xa(%eax,%edx,2),%eax
+movl   $0x0,-0x18(%ebp)
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0xeb>
+mov    0xc(%ebp),%edx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x170,%eax
+lea    (%edx,%eax,1),%eax
+movzwl (%eax),%eax
 movswl %ax,%ebx
-mov    -0xc(%ebp),%eax
-mov    0xc(%ebp),%edx
-movzbl 0x174(%edx,%eax,1),%eax
+mov    0xc(%ebp),%edx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%esi
+sub    %eax,%esi
+mov    %esi,%eax
+add    $0x174,%eax
+lea    (%edx,%eax,1),%eax
+movzbl (%eax),%eax
 movsbl %al,%ecx
-mov    -0xc(%ebp),%edx
+mov    -0x18(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x4,%eax
 add    $0xc0,%eax
 add    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %ebx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollector16UsedMemoryStruct13SetUsedMemoryEcs>
-addl   $0x1,-0xc(%ebp)
-cmpl   $0x5,-0xc(%ebp)
+addl   $0x1,-0x18(%ebp)
+cmpl   $0x5,-0x18(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x72>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEC1Ev>
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEC1Ev>
+jne    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x78>
 mov    0x8(%ebp),%eax
 lea    0x54(%eax),%edx
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18MonitoringSpecCaseESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 sub    $0x4,%esp
-mov    -0x2c(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x4e1>
-movb   $0x1,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-cmp    $0x1,%eax
-jne    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x38b>
-lea    -0x1c(%ebp),%eax
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x421>
+movb   $0x1,-0x11(%ebp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-movzbl 0x8(%eax),%eax
+add    $0x4,%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+add    $0x8,%eax
+movzbl (%eax),%eax
 cmp    $0xff,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x14b>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-movzbl 0x8(%eax),%edx
-mov    0xc(%ebp),%eax
-movzbl 0xf(%eax),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x14f>
+mov    -0x10(%ebp),%eax
+add    $0x8,%eax
+movzbl (%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0x3c,%eax
+movzbl (%eax),%eax
 cmp    %al,%dl
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x14b>
-mov    $0x1,%eax
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x150>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x15d>
-movb   $0x0,-0xd(%ebp)
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x38b>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-movzbl 0x9(%eax),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x14f>
+movb   $0x0,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x17c>
+mov    -0x10(%ebp),%eax
+add    $0x9,%eax
+movzbl (%eax),%eax
 cmp    $0xff,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x191>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-movzbl 0x9(%eax),%edx
-mov    0xc(%ebp),%eax
-movzbl 0xe(%eax),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x17c>
+mov    -0x10(%ebp),%eax
+add    $0x9,%eax
+movzbl (%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0x38,%eax
+movzbl (%eax),%eax
 cmp    %al,%dl
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x191>
-mov    $0x1,%eax
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x196>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1a3>
-movb   $0x0,-0xd(%ebp)
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x38b>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    0xc(%eax),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x17c>
+movb   $0x0,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1a7>
+mov    -0x10(%ebp),%eax
+add    $0xc,%eax
+mov    (%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1d5>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    0xc(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1a7>
+mov    0xc(%ebp),%eax
+add    $0x28,%eax
+mov    (%eax),%edx
+mov    -0x10(%ebp),%eax
+add    $0xc,%eax
+mov    (%eax),%eax
 cmp    %eax,%edx
-jle    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1d5>
-mov    $0x1,%eax
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1da>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1e7>
-movb   $0x0,-0xd(%ebp)
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x38b>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    0x10(%eax),%eax
+jl     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1a7>
+movb   $0x0,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1d2>
+mov    -0x10(%ebp),%eax
+add    $0x10,%eax
+mov    (%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x219>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    0x10(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1d2>
+mov    -0x10(%ebp),%eax
+add    $0x10,%eax
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0x28,%eax
+mov    (%eax),%eax
 cmp    %eax,%edx
-jg     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x219>
-mov    $0x1,%eax
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x21e>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x22b>
-movb   $0x0,-0xd(%ebp)
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x38b>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-movzwl 0x14(%eax),%eax
+jle    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1d2>
+movb   $0x0,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x202>
+mov    -0x10(%ebp),%eax
+add    $0x14,%eax
+movzwl (%eax),%eax
 cmp    $0xffff,%ax
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x262>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-movzwl 0x14(%eax),%edx
-mov    0xc(%ebp),%eax
-movzwl 0x18(%eax),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x202>
+mov    -0x10(%ebp),%eax
+add    $0x14,%eax
+movzwl (%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0x60,%eax
+movzwl (%eax),%eax
 cmp    %ax,%dx
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x262>
-mov    $0x1,%eax
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x267>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x274>
-movb   $0x0,-0xd(%ebp)
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x38b>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    0x18(%eax),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x202>
+movb   $0x0,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x231>
+mov    -0x10(%ebp),%eax
+add    $0x18,%eax
+mov    (%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2aa>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    0x18(%eax),%edx
-mov    0xc(%ebp),%eax
-movzwl 0x12(%eax),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x231>
+mov    -0x10(%ebp),%eax
+add    $0x18,%eax
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0x48,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 cmp    %eax,%edx
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2aa>
-mov    $0x1,%eax
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2af>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2bc>
-movb   $0x0,-0xd(%ebp)
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x38b>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    0x1c(%eax),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x231>
+movb   $0x0,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x260>
+mov    -0x10(%ebp),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2f2>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    0x1c(%eax),%edx
-mov    0xc(%ebp),%eax
-movzwl 0x14(%eax),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x260>
+mov    -0x10(%ebp),%eax
+add    $0x1c,%eax
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0x50,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 cmp    %eax,%edx
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2f2>
-mov    $0x1,%eax
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2f7>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x304>
-movb   $0x0,-0xd(%ebp)
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x38b>
-lea    -0x1c(%ebp),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x260>
+movb   $0x0,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x290>
+mov    -0x10(%ebp),%eax
+add    $0x20,%eax
+movzwl (%eax),%eax
+cmp    $0xffff,%ax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x290>
+mov    -0x10(%ebp),%eax
+add    $0x20,%eax
+movzwl (%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0x58,%eax
+movzwl (%eax),%eax
+cmp    %ax,%dx
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x290>
+movb   $0x0,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2bd>
+mov    -0x10(%ebp),%eax
+add    $0x22,%eax
+movzbl (%eax),%eax
+cmp    $0xff,%al
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2bd>
+mov    -0x10(%ebp),%eax
+add    $0x22,%eax
+movzbl (%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0x68,%eax
+movzbl (%eax),%eax
+cmp    %al,%dl
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2bd>
+movb   $0x0,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x416>
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-movzwl 0x20(%eax),%eax
-cmp    $0xffff,%ax
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x33b>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-movzwl 0x20(%eax),%edx
-mov    0xc(%ebp),%eax
-movzwl 0x16(%eax),%eax
-cmp    %ax,%dx
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x33b>
-mov    $0x1,%eax
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x340>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x34a>
-movb   $0x0,-0xd(%ebp)
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x38b>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-movzbl 0x22(%eax),%eax
-cmp    $0xff,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x37e>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-movzbl 0x22(%eax),%edx
-mov    0xc(%ebp),%eax
-movzbl 0x1a(%eax),%eax
-cmp    %al,%dl
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x37e>
-mov    $0x1,%eax
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x383>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x38b>
-movb   $0x0,-0xd(%ebp)
-cmpb   $0x0,-0xd(%ebp)
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x4d6>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-lea    0x4(%eax),%ecx
-mov    0x8(%ebp),%eax
-lea    0x70(%eax),%edx
-lea    -0x2c(%ebp),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+lea    0x70(%eax),%ecx
+lea    -0x28(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18FrameLagDataStructESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 sub    $0x4,%esp
-mov    -0x2c(%ebp),%eax
-mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x70(%eax),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18FrameLagDataStructESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x4d6>
-lea    -0x20(%ebp),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x416>
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0x4(%eax),%edx
+add    $0x4,%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+add    $0x4,%eax
+mov    -0xc(%ebp),%edx
+add    $0x4,%edx
+mov    (%edx),%edx
 add    $0x1,%edx
-mov    %edx,0x4(%eax)
-mov    0xc(%ebp),%eax
-movzbl 0x1f(%eax),%eax
-test   %al,%al
-js     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x453>
-mov    0xc(%ebp),%eax
-movzbl 0x1f(%eax),%eax
+mov    %edx,(%eax)
+mov    0xc(%ebp),%eax
+add    $0x7c,%eax
+movzbl (%eax),%eax
+test   %al,%al
+js     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x396>
+mov    0xc(%ebp),%eax
+add    $0x7c,%eax
+movzbl (%eax),%eax
 cmp    $0x7,%al
-jg     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x453>
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0xc(%ebp),%edx
-movzbl 0x1f(%edx),%edx
-movsbl %dl,%ebx
-mov    0xc(%ebp),%edx
-movzbl 0x1f(%edx),%edx
+jg     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x396>
+mov    -0xc(%ebp),%eax
+mov    0xc(%ebp),%edx
+add    $0x7c,%edx
+movzbl (%edx),%edx
 movsbl %dl,%edx
-add    $0x8,%edx
-movzwl 0x10(%eax,%edx,2),%edx
-lea    0x1(%edx),%ecx
-lea    0x8(%ebx),%edx
-mov    %cx,0x10(%eax,%edx,2)
-mov    0xc(%ebp),%eax
-movzwl 0x20(%eax),%eax
+add    $0x10,%edx
+add    %edx,%edx
+lea    (%eax,%edx,1),%edx
+mov    -0xc(%ebp),%eax
+mov    0xc(%ebp),%ecx
+add    $0x7c,%ecx
+movzbl (%ecx),%ecx
+movsbl %cl,%ecx
+add    $0x10,%ecx
+add    %ecx,%ecx
+add    %ecx,%eax
+movzwl (%eax),%eax
+add    $0x1,%eax
+mov    %ax,(%edx)
+mov    0xc(%ebp),%eax
+sub    $0xffffff80,%eax
+movzwl (%eax),%eax
 test   %ax,%ax
-js     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x4af>
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0x34(%eax),%ecx
-mov    0xc(%ebp),%edx
-movzwl 0x20(%edx),%edx
+js     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x3f8>
+mov    -0xc(%ebp),%eax
+add    $0x34,%eax
+mov    -0xc(%ebp),%edx
+add    $0x34,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+sub    $0xffffff80,%edx
+movzwl (%edx),%edx
 movswl %dx,%edx
 lea    (%ecx,%edx,1),%edx
-mov    %edx,0x34(%eax)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0x38(%eax),%ecx
-mov    0xc(%ebp),%edx
-movzwl 0x22(%edx),%edx
+mov    %edx,(%eax)
+mov    -0xc(%ebp),%eax
+add    $0x38,%eax
+mov    -0xc(%ebp),%edx
+add    $0x38,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+add    $0x88,%edx
+movzwl (%edx),%edx
 movswl %dx,%edx
 lea    (%ecx,%edx,1),%edx
-mov    %edx,0x38(%eax)
+mov    %edx,(%eax)
+mov    -0xc(%ebp),%eax
+add    $0x30,%eax
+mov    -0xc(%ebp),%edx
+add    $0x30,%edx
+mov    (%edx),%edx
+add    $0x1,%edx
+mov    %edx,(%eax)
+mov    0xc(%ebp),%eax
+add    $0x90,%eax
+mov    %eax,0x8(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct>
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEppEv>
+mov    0x8(%ebp),%eax
+lea    0x54(%eax),%edx
 lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0x30(%eax),%edx
-add    $0x1,%edx
-mov    %edx,0x30(%eax)
-mov    0xc(%ebp),%eax
-lea    0x24(%eax),%ebx
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-add    $0x4,%eax
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEppEv>
-mov    0x8(%ebp),%eax
-lea    0x54(%eax),%edx
-lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18MonitoringSpecCaseESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x106>
+jne    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x113>
 mov    $0x0,%eax
-mov    -0x4(%ebp),%ebx
-leave
+lea    -0x8(%ebp),%esp
+add    $0x0,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::PushOneFrameLagData(Packet_Frame_Lag_Statistic_Add*) */

undefined4 __thiscall
FrameLagCollector::_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add
          (FrameLagCollector *this,Packet_Frame_Lag_Statistic_Add *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int local_30 [3];
  int local_24;
  int local_20;
  map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
  local_1c [4];
  map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
  local_18 [7];
  char local_11;
  int local_10;
  
  if (*(int *)(this + 4) == 2) {
    cVar2 = is_valid_statistic_packet(this,param_1);
    if (cVar2 == '\x01') {
      *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 1;
      DirectxVersionStruct::add_cnt((DirectxVersionStruct *)(this + 0xa4),*(uint *)(param_1 + 0x1b))
      ;
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        UsedMemoryStruct::_ZN17FrameLagCollector16UsedMemoryStruct13SetUsedMemoryEcs
                  ((UsedMemoryStruct *)(this + local_10 * 0x30 + 0xc4),
                   (char)param_1[local_10 + 0x174],*(short *)(param_1 + (local_10 + 0xb8) * 2 + 10))
        ;
      }
      std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
      _Rb_tree_iterator((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                         *)&local_20);
      std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
      _Rb_tree_iterator((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                         *)&local_24);
      std::
      map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
      ::begin((map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
               *)local_30);
      local_20 = local_30[0];
      while( true ) {
        std::
        map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
        ::end(local_1c);
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
                operator!=((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                            *)&local_20,(_Rb_tree_iterator *)local_1c);
        if (cVar2 == '\0') break;
        local_11 = '\x01';
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
                operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                            *)&local_20);
        if ((*(char *)(iVar4 + 8) == -1) ||
           (iVar4 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                *)&local_20),
           *(Packet_Frame_Lag_Statistic_Add *)(iVar4 + 8) == param_1[0xf])) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_11 = '\0';
        }
        else {
          iVar4 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                *)&local_20);
          if ((*(char *)(iVar4 + 9) == -1) ||
             (iVar4 = std::
                      _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                    *)&local_20),
             *(Packet_Frame_Lag_Statistic_Add *)(iVar4 + 9) == param_1[0xe])) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            local_11 = '\0';
          }
          else {
            iVar4 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                *)&local_20);
            if ((*(int *)(iVar4 + 0xc) == -1) ||
               (iVar4 = std::
                        _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                        ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                      *)&local_20), *(int *)(iVar4 + 0xc) <= *(int *)(param_1 + 10))
               ) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              local_11 = '\0';
            }
            else {
              iVar4 = std::
                      _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                    *)&local_20);
              if ((*(int *)(iVar4 + 0x10) == -1) ||
                 (iVar4 = std::
                          _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                          ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                        *)&local_20),
                 *(int *)(param_1 + 10) < *(int *)(iVar4 + 0x10))) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                local_11 = '\0';
              }
              else {
                iVar4 = std::
                        _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                        ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                      *)&local_20);
                if ((*(short *)(iVar4 + 0x14) == -1) ||
                   (iVar4 = std::
                            _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                            ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                          *)&local_20),
                   *(short *)(iVar4 + 0x14) == *(short *)(param_1 + 0x18))) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  local_11 = '\0';
                }
                else {
                  iVar4 = std::
                          _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                          ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                        *)&local_20);
                  if ((*(int *)(iVar4 + 0x18) == -1) ||
                     (iVar4 = std::
                              _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                              ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                            *)&local_20),
                     *(uint *)(iVar4 + 0x18) == (uint)*(ushort *)(param_1 + 0x12))) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    local_11 = '\0';
                  }
                  else {
                    iVar4 = std::
                            _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                            ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                          *)&local_20);
                    if ((*(int *)(iVar4 + 0x1c) == -1) ||
                       (iVar4 = std::
                                _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                              *)&local_20),
                       *(uint *)(iVar4 + 0x1c) == (uint)*(ushort *)(param_1 + 0x14))) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (bVar1) {
                      local_11 = '\0';
                    }
                    else {
                      iVar4 = std::
                              _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                              ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                            *)&local_20);
                      if ((*(short *)(iVar4 + 0x20) == -1) ||
                         (iVar4 = std::
                                  _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                                *)&local_20),
                         *(short *)(iVar4 + 0x20) == *(short *)(param_1 + 0x16))) {
                        bVar1 = false;
                      }
                      else {
                        bVar1 = true;
                      }
                      if (bVar1) {
                        local_11 = '\0';
                      }
                      else {
                        iVar4 = std::
                                _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                              *)&local_20);
                        if ((*(char *)(iVar4 + 0x22) == -1) ||
                           (iVar4 = std::
                                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                    ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                                                  *)&local_20),
                           *(Packet_Frame_Lag_Statistic_Add *)(iVar4 + 0x22) == param_1[0x1a])) {
                          bVar1 = false;
                        }
                        else {
                          bVar1 = true;
                        }
                        if (bVar1) {
                          local_11 = '\0';
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (local_11 != '\0') {
          std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
          operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                      *)&local_20);
          std::
          map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
          ::find(local_30);
          local_24 = local_30[0];
          std::
          map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
          ::end(local_18);
          cVar2 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator!=((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_24,(_Rb_tree_iterator *)local_18);
          if (cVar2 != '\0') {
            iVar4 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_24);
            *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
            if ((-1 < (char)param_1[0x1f]) && ((char)param_1[0x1f] < '\b')) {
              iVar4 = std::
                      _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                    *)&local_24);
              *(short *)(iVar4 + 0x10 + ((char)param_1[0x1f] + 8) * 2) =
                   *(short *)(iVar4 + 0x10 + ((char)param_1[0x1f] + 8) * 2) + 1;
            }
            if (-1 < *(short *)(param_1 + 0x20)) {
              iVar4 = std::
                      _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                    *)&local_24);
              *(int *)(iVar4 + 0x34) = *(int *)(iVar4 + 0x34) + (int)*(short *)(param_1 + 0x20);
              iVar4 = std::
                      _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                    *)&local_24);
              *(int *)(iVar4 + 0x38) = *(int *)(iVar4 + 0x38) + (int)*(short *)(param_1 + 0x22);
              iVar4 = std::
                      _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                    *)&local_24);
              *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
            }
            iVar4 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_24);
            _ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct
                      (this,(FrameLagDataStruct *)(iVar4 + 4),(FrameLagStruct *)(param_1 + 0x24));
          }
        }
        std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
        operator++((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>> *)
                   &local_20);
      }
      uVar3 = 0;
    }
    else {
      uVar3 = 4;
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 135 行）：

```cpp
int FrameLagCollector::PushOneFrameLagData(Packet_Frame_Lag_Statistic_Add* pkt)
{
    if (m_field4 != 2)
    {
        return 2;
    }
    if (is_valid_statistic_packet(pkt) != 1)
    {
        return 4;
    }
    m_field6c++;
    m_directx.add_cnt(*(unsigned int*)((char*)pkt + 0x6c));
    for (int i = 0; i < 6; i++)
    {
        m_memory[i].SetUsedMemory((char)*(char*)((char*)pkt + i * 0x38 + 0x174),
                                  *(short*)((char*)pkt + i * 0x38 + 0x170));
    }
    for (std::map<int, MonitoringSpecCase>::iterator it = m_monitor.begin();
         it != m_monitor.end(); ++it)
    {
        char match = 1;
        char* s = (char*)&it->second;
        if (!(*(char*)(s + 0x8) == -1 || *(char*)(s + 0x8) == *(char*)((char*)pkt + 0x3c)))
            match = 0;
        if (match && !(*(char*)(s + 0x9) == -1 || *(char*)(s + 0x9) == *(char*)((char*)pkt + 0x38)))
            match = 0;
        if (match && !(*(int*)(s + 0xc) == -1 || *(int*)((char*)pkt + 0x28) < *(int*)(s + 0xc)))
            match = 0;
        if (match && !(*(int*)(s + 0x10) == -1 || *(int*)(s + 0x10) <= *(int*)((char*)pkt + 0x28)))
            match = 0;
        if (match && !(*(short*)(s + 0x14) == -1 || *(short*)(s + 0x14) == *(short*)((char*)pkt + 0x60)))
            match = 0;
        if (match && !(*(int*)(s + 0x18) == -1 || *(unsigned int*)(s + 0x18) == (unsigned int)*(unsigned short*)((char*)pkt + 0x48)))
            match = 0;
        if (match && !(*(int*)(s + 0x1c) == -1 || *(unsigned int*)(s + 0x1c) == (unsigned int)*(unsigned short*)((char*)pkt + 0x50)))
            match = 0;
        if (match && !(*(short*)(s + 0x20) == -1 || *(short*)(s + 0x20) == *(short*)((char*)pkt + 0x58)))
            match = 0;
        if (match && !(*(char*)(s + 0x22) == -1 || *(char*)(s + 0x22) == *(char*)((char*)pkt + 0x68)))
            match = 0;
        if (match)
        {
            std::map<int, FrameLagDataStruct>::iterator fd = m_data.find(it->first);
            if (fd != m_data.end())
            {
                FrameLagDataStruct* v = &fd->second;
                *(int*)((char*)v + 4) = *(int*)((char*)v + 4) + 1;
                if (-1 < (char)*(char*)((char*)pkt + 0x7c) &&
                    (char)*(char*)((char*)pkt + 0x7c) < 8)
                {
                    *(short*)((char*)v + 0x10 + ((char)*(char*)((char*)pkt + 0x7c) + 8) * 2) += 1;
                }
                if (-1 < *(short*)((char*)pkt + 0x80))
                {
                    *(int*)((char*)v + 0x34) += (int)*(short*)((char*)pkt + 0x80);
                    *(int*)((char*)v + 0x38) += (int)*(short*)((char*)pkt + 0x88);
                    *(int*)((char*)v + 0x30) += 1;
                }
                accFrameLagStruct(*v, (FrameLagStruct*)((char*)pkt + 0x90));
            }
        }
    }
    return 0;
}
```
