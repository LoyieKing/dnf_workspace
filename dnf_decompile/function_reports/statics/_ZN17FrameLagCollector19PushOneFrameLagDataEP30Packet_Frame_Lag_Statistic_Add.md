# _ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add

`FrameLagCollector::PushOneFrameLagData(Packet_Frame_Lag_Statistic_Add*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80668ee` | `0x51d` | `0x805fb20` | `0x4e8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,388 +1,391 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x44,%esp
+sub    $0x34,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0x2,%eax
 je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1c>
 mov    $0x2,%eax
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x518>
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x4e3>
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
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x42>
 mov    $0x4,%eax
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x518>
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x4e3>
 mov    0x8(%ebp),%eax
 mov    0x6c(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x6c(%eax)
 mov    0xc(%ebp),%eax
 mov    0x1b(%eax),%eax
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
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0xca>
+mov    0xc(%ebp),%eax
+mov    -0x14(%ebp),%edx
+add    $0xbd,%edx
+add    %edx,%edx
+add    %edx,%eax
+movzwl (%eax),%eax
 movswl %ax,%ebx
-mov    -0xc(%ebp),%eax
-mov    0xc(%ebp),%edx
-movzbl 0x174(%edx,%eax,1),%eax
+mov    0xc(%ebp),%eax
+mov    -0x14(%ebp),%edx
+add    $0x174,%edx
+add    %edx,%eax
+movzbl (%eax),%eax
 movsbl %al,%ecx
-mov    -0xc(%ebp),%edx
+mov    -0x14(%ebp),%edx
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
+addl   $0x1,-0x14(%ebp)
+cmpl   $0x5,-0x14(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x72>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEC1Ev>
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEC1Ev>
+jne    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x75>
 mov    0x8(%ebp),%eax
 lea    0x54(%eax),%edx
-lea    -0x2c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18MonitoringSpecCaseESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 sub    $0x4,%esp
-mov    -0x2c(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x4e1>
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x4ac>
 movb   $0x1,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-cmp    $0x1,%eax
-jne    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x38b>
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
 movzbl 0x8(%eax),%eax
 cmp    $0xff,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x14b>
-lea    -0x1c(%ebp),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x12a>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
 movzbl 0x8(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0xf(%eax),%eax
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
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x12a>
+mov    $0x1,%eax
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x12f>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x137>
+movb   $0x0,-0xd(%ebp)
+cmpb   $0x0,-0xd(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x171>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
 movzbl 0x9(%eax),%eax
 cmp    $0xff,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x191>
-lea    -0x1c(%ebp),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x171>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
 movzbl 0x9(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0xe(%eax),%eax
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
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x171>
+mov    $0x1,%eax
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x176>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x17e>
+movb   $0x0,-0xd(%ebp)
+cmpb   $0x0,-0xd(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1b6>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
 mov    0xc(%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1d5>
-lea    -0x1c(%ebp),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1b6>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
 mov    0xc(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
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
+jle    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1b6>
+mov    $0x1,%eax
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1bb>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1c3>
+movb   $0x0,-0xd(%ebp)
+cmpb   $0x0,-0xd(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1fb>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
 mov    0x10(%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x219>
-lea    -0x1c(%ebp),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1fb>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
 mov    0x10(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
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
-cmp    $0xffff,%ax
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x262>
-lea    -0x1c(%ebp),%eax
+jg     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x1fb>
+mov    $0x1,%eax
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x200>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x208>
+movb   $0x0,-0xd(%ebp)
+cmpb   $0x0,-0xd(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x23b>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
 movzwl 0x14(%eax),%edx
 mov    0xc(%ebp),%eax
 movzwl 0x18(%eax),%eax
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
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x23b>
+mov    $0x1,%eax
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x240>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x248>
+movb   $0x0,-0xd(%ebp)
+cmpb   $0x0,-0xd(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x286>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
 mov    0x18(%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2aa>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    0x18(%eax),%edx
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x286>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
+mov    0x18(%eax),%eax
+mov    %eax,%edx
 mov    0xc(%ebp),%eax
 movzwl 0x12(%eax),%eax
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
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x286>
+mov    $0x1,%eax
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x28b>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x293>
+movb   $0x0,-0xd(%ebp)
+cmpb   $0x0,-0xd(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2d1>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
 mov    0x1c(%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2f2>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    0x1c(%eax),%edx
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2d1>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
+mov    0x1c(%eax),%eax
+mov    %eax,%edx
 mov    0xc(%ebp),%eax
 movzwl 0x14(%eax),%eax
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
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-movzwl 0x20(%eax),%eax
-cmp    $0xffff,%ax
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x33b>
-lea    -0x1c(%ebp),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2d1>
+mov    $0x1,%eax
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2d6>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x2de>
+movb   $0x0,-0xd(%ebp)
+cmpb   $0x0,-0xd(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x311>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
 movzwl 0x20(%eax),%edx
 mov    0xc(%ebp),%eax
 movzwl 0x16(%eax),%eax
 cmp    %ax,%dx
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x33b>
-mov    $0x1,%eax
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x340>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x34a>
-movb   $0x0,-0xd(%ebp)
-jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x38b>
-lea    -0x1c(%ebp),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x311>
+mov    $0x1,%eax
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x316>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x31e>
+movb   $0x0,-0xd(%ebp)
+cmpb   $0x0,-0xd(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x358>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
 movzbl 0x22(%eax),%eax
 cmp    $0xff,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x37e>
-lea    -0x1c(%ebp),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x358>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
 movzbl 0x22(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0x1a(%eax),%eax
 cmp    %al,%dl
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
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x358>
+mov    $0x1,%eax
+jmp    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x35d>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x365>
+movb   $0x0,-0xd(%ebp)
+cmpb   $0x0,-0xd(%ebp)
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x4a1>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+lea    0x70(%eax),%ecx
+lea    -0x24(%ebp),%eax
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
+lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18FrameLagDataStructESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x4d6>
-lea    -0x20(%ebp),%eax
+je     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x4a1>
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0x4(%eax),%edx
+add    $0x4,%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    (%edx),%edx
 add    $0x1,%edx
-mov    %edx,0x4(%eax)
+mov    %edx,(%eax)
 mov    0xc(%ebp),%eax
 movzbl 0x1f(%eax),%eax
 test   %al,%al
-js     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x453>
+js     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x430>
 mov    0xc(%ebp),%eax
 movzbl 0x1f(%eax),%eax
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
-movsbl %dl,%edx
-add    $0x8,%edx
-movzwl 0x10(%eax,%edx,2),%edx
-lea    0x1(%edx),%ecx
-lea    0x8(%ebx),%edx
-mov    %cx,0x10(%eax,%edx,2)
+jg     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x430>
+mov    -0xc(%ebp),%edx
+mov    0xc(%ebp),%eax
+movzbl 0x1f(%eax),%eax
+movsbl %al,%eax
+add    $0xe,%eax
+add    %eax,%eax
+add    %eax,%edx
+mov    -0xc(%ebp),%ecx
+mov    0xc(%ebp),%eax
+movzbl 0x1f(%eax),%eax
+movsbl %al,%eax
+add    $0xe,%eax
+add    %eax,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl (%eax),%eax
+add    $0x1,%eax
+mov    %ax,(%edx)
 mov    0xc(%ebp),%eax
 movzwl 0x20(%eax),%eax
 test   %ax,%ax
-js     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x4af>
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0x34(%eax),%ecx
-mov    0xc(%ebp),%edx
-movzwl 0x20(%edx),%edx
-movswl %dx,%edx
-lea    (%ecx,%edx,1),%edx
-mov    %edx,0x34(%eax)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0x38(%eax),%ecx
-mov    0xc(%ebp),%edx
-movzwl 0x22(%edx),%edx
-movswl %dx,%edx
-lea    (%ecx,%edx,1),%edx
-mov    %edx,0x38(%eax)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0x30(%eax),%edx
+js     <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x485>
+mov    -0xc(%ebp),%eax
+lea    0x30(%eax),%edx
+mov    -0xc(%ebp),%eax
+add    $0x30,%eax
+mov    (%eax),%ecx
+mov    0xc(%ebp),%eax
+movzwl 0x20(%eax),%eax
+cwtl
+lea    (%ecx,%eax,1),%eax
+mov    %eax,(%edx)
+mov    -0xc(%ebp),%eax
+lea    0x34(%eax),%edx
+mov    -0xc(%ebp),%eax
+add    $0x34,%eax
+mov    (%eax),%ecx
+mov    0xc(%ebp),%eax
+movzwl 0x22(%eax),%eax
+cwtl
+lea    (%ecx,%eax,1),%eax
+mov    %eax,(%edx)
+mov    -0xc(%ebp),%eax
+add    $0x2c,%eax
+mov    -0xc(%ebp),%edx
+add    $0x2c,%edx
+mov    (%edx),%edx
 add    $0x1,%edx
-mov    %edx,0x30(%eax)
-mov    0xc(%ebp),%eax
-lea    0x24(%eax),%ebx
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-add    $0x4,%eax
-mov    %ebx,0x8(%esp)
+mov    %edx,(%eax)
+mov    0xc(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,0x8(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEppEv>
+mov    0x8(%ebp),%eax
+lea    0x54(%eax),%edx
 lea    -0x1c(%ebp),%eax
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
 lea    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0x106>
+jne    <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add+0xf2>
 mov    $0x0,%eax
 mov    -0x4(%ebp),%ebx
 leave
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

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 152 行）：

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
    m_directx.add_cnt(((FrameLagPktHeader*)pkt)->m_directx);
    for (int i = 0; i < 6; i++)
    {
        m_memory[i].SetUsedMemory((char)*(char*)((char*)pkt + i + 0x174),
                                  *(short*)((char*)pkt + (i + 0xb8) * 2 + 10));
    }
    for (std::map<int, MonitoringSpecCase>::iterator it = m_monitor.begin();
         it != m_monitor.end(); ++it)
    {
        char match = 1;
        if (!(it->second.m_field4 == -1 || it->second.m_field4 == ((FrameLagPktHeader*)pkt)->m_field_f))
            match = 0;
        if (match && !(it->second.m_field5 == -1 || it->second.m_field5 == ((FrameLagPktHeader*)pkt)->m_field_e))
            match = 0;
        if (match && !(it->second.m_field8 == -1 || it->second.m_field8 <= ((FrameLagPktHeader*)pkt)->m_min))
            match = 0;
        if (match && !(it->second.m_fieldc == -1 || it->second.m_fieldc > ((FrameLagPktHeader*)pkt)->m_min))
            match = 0;
        if (match && !(it->second.m_field10 == -1 || it->second.m_field10 == ((FrameLagPktHeader*)pkt)->m_field_18))
            match = 0;
        if (match && !(it->second.m_field14 == -1 || (unsigned int)it->second.m_field14 == (unsigned int)((FrameLagPktHeader*)pkt)->m_field_12))
            match = 0;
        if (match && !(it->second.m_field18 == -1 || (unsigned int)it->second.m_field18 == (unsigned int)((FrameLagPktHeader*)pkt)->m_field_14))
            match = 0;
        if (match && !(it->second.m_field1c == -1 || it->second.m_field1c == ((FrameLagPktHeader*)pkt)->m_field_16))
            match = 0;
        if (match && !(it->second.m_field1e == -1 || it->second.m_field1e == ((FrameLagPktHeader*)pkt)->m_field_1a))
            match = 0;
        if (match)
        {
            std::map<int, FrameLagDataStruct>::iterator fd = m_data.find(it->first);
            if (fd != m_data.end())
            {
                FrameLagDataStruct* v = &fd->second;
                *(int*)((char*)v + 0) = *(int*)((char*)v + 0) + 1;
                if (-1 < (char)((FrameLagPktHeader*)pkt)->m_module &&
                    (char)((FrameLagPktHeader*)pkt)->m_module < 8)
                {
                    *(short*)((char*)v + 0x0c + ((char)((FrameLagPktHeader*)pkt)->m_module + 8) * 2) += 1;
                }
                if (-1 < ((FrameLagPktHeader*)pkt)->m_sum1)
                {
                    *(int*)((char*)v + 0x30) += (int)((FrameLagPktHeader*)pkt)->m_sum1;
                    *(int*)((char*)v + 0x34) += (int)((FrameLagPktHeader*)pkt)->m_sum2;
                    *(int*)((char*)v + 0x2c) += 1;
                }
                accFrameLagStruct(*v, (FrameLagStruct*)((char*)pkt + 0x24));
            }
        }
    }
    return 0;
}
```
