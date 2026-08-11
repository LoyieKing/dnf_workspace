# _ZN15RelayServiceApp7TCPUser13onPacketParseEv

`RelayServiceApp::TCPUser::onPacketParse()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805d02e` | `0x536` | `0x805c576` | `0x531` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,381 +1,383 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x94,%esp
+sub    $0x84,%esp
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0xd>
+nop
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 movl   $0xc,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi>
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x2dd>
+je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x2dc>
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE7peekPopEv>
 mov    %eax,-0x5c(%ebp)
 mov    -0x5c(%ebp),%eax
 mov    %eax,-0x58(%ebp)
 mov    -0x58(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x54(%ebp)
 mov    -0x58(%ebp),%eax
 movzwl (%eax),%eax
 test   %ax,%ax
-je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x7b>
+je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x7e>
 mov    -0x58(%ebp),%eax
 movzwl (%eax),%eax
 cmp    $0x1,%ax
-je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x7b>
-movl   $0x1,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
+je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x7e>
+movl   $0x1,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
 cmpl   $0x0,-0x54(%ebp)
-jle    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x2c5>
+jg     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x9c>
+movl   $0x1,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
 mov    0x8(%ebp),%eax
 lea    0x20(%eax),%edx
 mov    -0x54(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE13isPopStraightEi>
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x178>
+je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x18f>
 call   <T> <_Z11get_ms_tickv>
 mov    %eax,-0x50(%ebp)
 mov    %edx,-0x4c(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp8Handlers18getTCPHandlerRelayEv>
 mov    (%eax),%edx
 mov    (%edx),%ecx
 mov    -0x54(%ebp),%edx
 mov    %edx,0x10(%esp)
 movl   $0x0,0xc(%esp)
 mov    -0x5c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ecx
 mov    -0x58(%ebp),%eax
 movzwl (%eax),%eax
 test   %ax,%ax
-jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x10a>
+jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x121>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser8getACCIDEv>
 test   %eax,%eax
-jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x10a>
+jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x121>
 mov    $0x1,%eax
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x10f>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x126>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x12b>
-movl   $0x1,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
+je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x142>
+movl   $0x1,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
 mov    0x8(%ebp),%eax
 lea    0x20(%eax),%edx
 mov    -0x54(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE3popEi>
 call   <T> <_Z11get_ms_tickv>
 mov    %eax,-0x48(%ebp)
 mov    %edx,-0x44(%ebp)
 mov    -0x48(%ebp),%edx
 mov    -0x50(%ebp),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0x24,%eax
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp5Users15setDispatchTimeEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x4f1>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x4ec>
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE15getPushedLengthEv>
 cmp    -0x54(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x51d>
+jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x518>
 mov    -0x54(%ebp),%eax
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <calloc>
 mov    %eax,-0x40(%ebp)
 cmpl   $0x0,-0x40(%ebp)
-je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x520>
+je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x51b>
 mov    0x8(%ebp),%eax
 lea    0x20(%eax),%edx
 mov    -0x40(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0x54(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE7popCopyEiPc>
 mov    %al,-0x39(%ebp)
 movzbl -0x39(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x1ee>
+je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x205>
 mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <free>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
 call   <T> <_Z11get_ms_tickv>
 mov    %eax,-0x38(%ebp)
 mov    %edx,-0x34(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp8Handlers18getTCPHandlerRelayEv>
 mov    (%eax),%edx
 mov    (%edx),%ecx
 mov    -0x54(%ebp),%edx
 mov    %edx,0x10(%esp)
 movl   $0x0,0xc(%esp)
 mov    -0x40(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ecx
 mov    -0x58(%ebp),%eax
 movzwl (%eax),%eax
 test   %ax,%ax
-jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x256>
+jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x26d>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser8getACCIDEv>
 test   %eax,%eax
-jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x256>
+jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x26d>
 mov    $0x1,%eax
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x25b>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x272>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x282>
+je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x299>
 mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <free>
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
 call   <T> <_Z11get_ms_tickv>
 mov    %eax,-0x30(%ebp)
 mov    %edx,-0x2c(%ebp)
 mov    -0x30(%ebp),%edx
 mov    -0x38(%ebp),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0x24,%eax
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp5Users15setDispatchTimeEi>
 mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <free>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x4f1>
-movl   $0x1,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x4ec>
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE15getPushedLengthEv>
 cmp    $0xb,%eax
 setbe  %al
 test   %al,%al
-jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x523>
-mov    0x8(%ebp),%eax
-lea    0x20(%eax),%edx
-lea    -0x69(%ebp),%eax
+jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x51e>
+mov    0x8(%ebp),%eax
+lea    0x20(%eax),%edx
+lea    -0x68(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0xc,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekCopyEiPc>
-test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x4dc>
-lea    -0x69(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x334>
+movl   $0x1,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
+lea    -0x68(%ebp),%eax
 mov    %eax,-0x28(%ebp)
 mov    -0x28(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x24(%ebp)
 mov    -0x28(%ebp),%eax
 movzwl (%eax),%eax
 test   %ax,%ax
-je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x360>
+je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x376>
 mov    -0x28(%ebp),%eax
 movzwl (%eax),%eax
 cmp    $0x1,%ax
-je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x360>
-movl   $0x1,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
+je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x376>
+movl   $0x1,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
 cmpl   $0x0,-0x24(%ebp)
-jle    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x4c7>
+jg     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x394>
+movl   $0x1,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE15getPushedLengthEv>
 cmp    -0x24(%ebp),%eax
-setge  %al
-test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x526>
+setl   %al
+test   %al,%al
+jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x521>
 mov    -0x24(%ebp),%eax
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <calloc>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x529>
+je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x524>
 mov    0x8(%ebp),%eax
 lea    0x20(%eax),%edx
 mov    -0x20(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE7popCopyEiPc>
 mov    %al,-0x19(%ebp)
 movzbl -0x19(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x3f3>
+je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x41d>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <free>
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
 call   <T> <_Z11get_ms_tickv>
 mov    %eax,-0x18(%ebp)
 mov    %edx,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp8Handlers18getTCPHandlerRelayEv>
 mov    (%eax),%edx
 mov    (%edx),%ecx
 mov    -0x24(%ebp),%edx
 mov    %edx,0x10(%esp)
 movl   $0x0,0xc(%esp)
 mov    -0x20(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ecx
 mov    -0x28(%ebp),%eax
 movzwl (%eax),%eax
 test   %ax,%ax
-jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x45b>
+jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x485>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser8getACCIDEv>
 test   %eax,%eax
-jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x45b>
+jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x485>
 mov    $0x1,%eax
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x460>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x48a>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x487>
+je     <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x4ae>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <free>
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
 call   <T> <_Z11get_ms_tickv>
 mov    %eax,-0x10(%ebp)
 mov    %edx,-0xc(%ebp)
 mov    -0x10(%ebp),%edx
 mov    -0x18(%ebp),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0x24,%eax
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp5Users15setDispatchTimeEi>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <free>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x4f1>
-movl   $0x1,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
-movl   $0x1,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser19isAboutToDisconnectEv>
 test   %al,%al
-jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52c>
+jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x527>
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE7isEmptyEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0xa>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
-nop
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
-nop
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
-nop
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
-nop
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
-nop
-jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x52d>
-nop
-add    $0x94,%esp
+jne    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0xc>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
+nop
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
+nop
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
+nop
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
+nop
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
+nop
+jmp    <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv+0x528>
+nop
+add    $0x84,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::TCPUser::onPacketParse() */

void __thiscall
RelayServiceApp::TCPUser::_ZN15RelayServiceApp7TCPUser13onPacketParseEv(TCPUser *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  short local_6d;
  ushort local_6b;
  short *local_60;
  short *local_5c;
  uint local_58;
  undefined8 local_54;
  undefined8 local_4c;
  char *local_44;
  char local_3d;
  undefined8 local_3c;
  undefined8 local_34;
  short *local_2c;
  uint local_28;
  char *local_24;
  char local_1d;
  undefined8 local_1c;
  undefined8 local_14;
  
  do {
    cVar2 = TDoubleCircularQueueBuffer<51200u>::isPopStraight
                      ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x20),0xc);
    if (cVar2 == '\0') {
      uVar5 = TDoubleCircularQueueBuffer<51200u>::getPushedLength
                        ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x20));
      if (uVar5 < 0xc) {
        return;
      }
      cVar2 = TDoubleCircularQueueBuffer<51200u>::peekCopy
                        ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x20),0xc,(char *)&local_6d);
      if (cVar2 == '\0') {
        postDisconnected(this,1);
        return;
      }
      local_2c = &local_6d;
      local_28 = (uint)local_6b;
      if ((local_6d != 0) && (local_6d != 1)) {
        postDisconnected(this,1);
        return;
      }
      if (local_28 == 0) {
        postDisconnected(this,1);
        return;
      }
      iVar3 = TDoubleCircularQueueBuffer<51200u>::getPushedLength
                        ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x20));
      if (iVar3 < (int)local_28) {
        return;
      }
      local_24 = calloc(local_28,1);
      if (local_24 == (char *)0x0) {
        return;
      }
      local_1d = TDoubleCircularQueueBuffer<51200u>::popCopy
                           ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x20),local_28,local_24);
      if (local_1d != '\x01') {
        free(local_24);
        postDisconnected(this,1);
        return;
      }
      uVar7 = get_ms_tick();
      local_1c = uVar7;
      iVar3 = TManager<RelayServiceApp::RelayService>::getManager
                        ((TManager<RelayServiceApp::RelayService> *)this);
      puVar4 = (undefined4 *)Handlers::getTCPHandlerRelay((Handlers *)(iVar3 + 0x18));
      (**(code **)*puVar4)(puVar4,this,local_24,0,local_28);
      if (*local_2c == 0) {
        iVar3 = getACCID(this);
        if (iVar3 != 0) goto LAB_0805d489;
        bVar1 = true;
      }
      else {
LAB_0805d489:
        bVar1 = false;
      }
      if (bVar1) {
        free(local_24);
        postDisconnected(this,1);
        return;
      }
      uVar7 = get_ms_tick();
      iVar6 = (int)uVar7 - (int)local_1c;
      local_14 = uVar7;
      iVar3 = TManager<RelayServiceApp::RelayService>::getManager
                        ((TManager<RelayServiceApp::RelayService> *)this);
      Users::setDispatchTime((Users *)(iVar3 + 0x24),iVar6);
      free(local_24);
    }
    else {
      local_60 = (short *)TDoubleCircularQueueBuffer<51200u>::peekPop
                                    ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x20));
      local_58 = (uint)(ushort)local_60[1];
      local_5c = local_60;
      if ((*local_60 != 0) && (*local_60 != 1)) {
        postDisconnected(this,1);
        return;
      }
      if (local_58 == 0) {
        postDisconnected(this,1);
        return;
      }
      cVar2 = TDoubleCircularQueueBuffer<51200u>::isPopStraight
                        ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x20),local_58);
      if (cVar2 == '\0') {
        iVar3 = TDoubleCircularQueueBuffer<51200u>::getPushedLength
                          ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x20));
        if (iVar3 < (int)local_58) {
          return;
        }
        local_44 = calloc(local_58,1);
        if (local_44 == (char *)0x0) {
          return;
        }
        local_3d = TDoubleCircularQueueBuffer<51200u>::popCopy
                             ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x20),local_58,local_44)
        ;
        if (local_3d != '\x01') {
          free(local_44);
          return;
        }
        uVar7 = get_ms_tick();
        local_3c = uVar7;
        iVar3 = TManager<RelayServiceApp::RelayService>::getManager
                          ((TManager<RelayServiceApp::RelayService> *)this);
        puVar4 = (undefined4 *)Handlers::getTCPHandlerRelay((Handlers *)(iVar3 + 0x18));
        (**(code **)*puVar4)(puVar4,this,local_44,0,local_58);
        if (*local_5c == 0) {
          iVar3 = getACCID(this);
          if (iVar3 != 0) goto LAB_0805d284;
          bVar1 = true;
        }
        else {
LAB_0805d284:
          bVar1 = false;
        }
        if (bVar1) {
          free(local_44);
          postDisconnected(this,1);
          return;
        }
        uVar7 = get_ms_tick();
        iVar6 = (int)uVar7 - (int)local_3c;
        local_34 = uVar7;
        iVar3 = TManager<RelayServiceApp::RelayService>::getManager
                          ((TManager<RelayServiceApp::RelayService> *)this);
        Users::setDispatchTime((Users *)(iVar3 + 0x24),iVar6);
        free(local_44);
      }
      else {
        uVar7 = get_ms_tick();
        local_54 = uVar7;
        iVar3 = TManager<RelayServiceApp::RelayService>::getManager
                          ((TManager<RelayServiceApp::RelayService> *)this);
        puVar4 = (undefined4 *)Handlers::getTCPHandlerRelay((Handlers *)(iVar3 + 0x18));
        (**(code **)*puVar4)(puVar4,this,local_60,0,local_58);
        if (*local_5c == 0) {
          iVar3 = getACCID(this);
          if (iVar3 != 0) goto LAB_0805d138;
          bVar1 = true;
        }
        else {
LAB_0805d138:
          bVar1 = false;
        }
        if (bVar1) {
          postDisconnected(this,1);
          return;
        }
        TDoubleCircularQueueBuffer<51200u>::pop
                  ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x20),local_58);
        uVar7 = get_ms_tick();
        iVar6 = (int)uVar7 - (int)local_54;
        local_4c = uVar7;
        iVar3 = TManager<RelayServiceApp::RelayService>::getManager
                          ((TManager<RelayServiceApp::RelayService> *)this);
        Users::setDispatchTime((Users *)(iVar3 + 0x24),iVar6);
      }
    }
    cVar2 = isAboutToDisconnect(this);
    if (cVar2 != '\0') {
      return;
    }
    iVar3 = TDoubleCircularQueueBuffer<51200u>::isEmpty
                      ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x20));
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/TCPUser.cpp](source/DNFServer/GameServer/Relay/TCPUser.cpp)（约第 287 行）：

```cpp
void TCPUser::onPacketParse()
{
    for (;;)
    {
        if (m_recvQueue.isPopStraight(0xc))
        {
            char* p = m_recvQueue.peekPop();
            PacketHeader* pkt = (PacketHeader*)p;
            int size = pkt->m_size;
            if ((pkt->m_type != 0) && (pkt->m_type != 1))
            {
                postDisconnected(1);
                return;
            }
            if (size <= 0)
            {
                postDisconnected(1);
                return;
            }
            if (m_recvQueue.isPopStraight(size))
            {
                long long t1 = get_ms_tick();
                getManager()->m_handlers.getTCPHandlerRelay()->dispatch(this, p, 0, size);
                if (pkt->m_type == 0 && getACCID() == 0)
                {
                    postDisconnected(1);
                    return;
                }
                m_recvQueue.pop(size);
                long long t2 = get_ms_tick();
                getManager()->m_users.setDispatchTime((int)(t2 - t1));
            }
            else
            {
                if ((int)m_recvQueue.getPushedLength() < size)
                {
                    return;
                }
                char* buf = (char*)calloc(size, 1);
                if (buf == 0)
                {
                    return;
                }
                bool ok = m_recvQueue.popCopy(size, buf);
                if (!ok)
                {
                    free(buf);
                    return;
                }
                long long t1 = get_ms_tick();
                getManager()->m_handlers.getTCPHandlerRelay()->dispatch(this, buf, 0, size);
                if (pkt->m_type == 0 && getACCID() == 0)
                {
                    free(buf);
                    postDisconnected(1);
                    return;
                }
                long long t2 = get_ms_tick();
                getManager()->m_users.setDispatchTime((int)(t2 - t1));
                free(buf);
            }
        }
        else
        {
            if (m_recvQueue.getPushedLength() <= 0xb)
            {
                return;
            }
            char header[0xc];
            if (!m_recvQueue.peekCopy(0xc, header))
            {
                postDisconnected(1);
                return;
            }
            char* p = header;
            int size = ((PacketHeader*)p)->m_size;
            if ((((PacketHeader*)p)->m_type != 0) && (((PacketHeader*)p)->m_type != 1))
            {
                postDisconnected(1);
                return;
            }
            if (size <= 0)
            {
                postDisconnected(1);
                return;
            }
            if ((int)m_recvQueue.getPushedLength() < size)
            {
                return;
            }
            char* buf = (char*)calloc(size, 1);
            if (buf == 0)
            {
                return;
            }
            bool ok = m_recvQueue.popCopy(size, buf);
            if (!ok)
            {
                free(buf);
                postDisconnected(1);
                return;
            }
            long long t1 = get_ms_tick();
            getManager()->m_handlers.getTCPHandlerRelay()->dispatch(this, buf, 0, size);
            if (((PacketHeader*)p)->m_type == 0 && getACCID() == 0)
            {
                free(buf);
                postDisconnected(1);
                return;
            }
            long long t2 = get_ms_tick();
            getManager()->m_users.setDispatchTime((int)(t2 - t1));
            free(buf);
        }
        if (isAboutToDisconnect())
        {
            return;
        }
        if (m_recvQueue.isEmpty() == 0)
        {
            continue;
        }
        return;
    }
}
```
