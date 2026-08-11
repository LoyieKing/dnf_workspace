# _ZN17ChannelServiceApp7TCPUser7onRead_Ev

`ChannelServiceApp::TCPUser::onRead_()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| bridge | DIFF | `0x805f0bc` | `0x65a` | `0x8054a20` | `0x8b0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,379 +1,541 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0xa0058,%esp
-mov    0x8(%ebp),%eax
-mov    0x44(%eax),%eax
+push   %esi
+push   %ebx
+sub    $0xa00c0,%esp
+mov    0x8(%ebp),%eax
+mov    0x44(%eax),%edx
 movl   $0xa0000,0x8(%esp)
-lea    -0xa0038(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+lea    -0xa0040(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN9TCPSocket4recvEPci>
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x24(%ebp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"TCPUser.cpp",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $" read=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
-mov    -0x2c(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+mov    %eax,%edx
+mov    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
-cmpl   $0x0,-0x2c(%ebp)
-jle    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0xdd>
+cmpl   $0x0,-0x24(%ebp)
+jle    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0xe1>
 mov    0x8(%ebp),%eax
 lea    0x48(%eax),%edx
 movl   $0x96,0x10(%esp)
 movl   $"TCPUser.cpp",0xc(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,0x8(%esp)
-lea    -0xa0038(%ebp),%eax
+lea    -0xa0040(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN20TCircularQueueBufferILj655360EE4pushEPciS1_i>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-jns    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0xfb>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jns    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0xff>
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x658>
-cmpl   $0x0,-0x2c(%ebp)
-jns    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0xfb>
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x8a6>
+cmpl   $0x0,-0x24(%ebp)
+jns    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0xff>
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x658>
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x8a6>
 mov    0x8(%ebp),%eax
 add    $0x48,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK20TCircularQueueBufferILj655360EE17getPopLengthToEndEv>
 cmp    $0xa,%eax
 seta   %al
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x3d0>
+je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x4fa>
 mov    0x8(%ebp),%eax
 add    $0x48,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN20TCircularQueueBufferILj655360EE7peekPopEv>
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15tagPacketHeader7getSizeEv>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0xa0000,-0x1c(%ebp)
-jg     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x14b>
-cmpl   $0x0,-0x1c(%ebp)
-jg     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x163>
+mov    %eax,-0x14(%ebp)
+cmpl   $0xa0000,-0x14(%ebp)
+jg     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x14f>
+cmpl   $0x0,-0x14(%ebp)
+jg     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x167>
 movl   $0x2,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x658>
-cmpl   $0x0,-0x1c(%ebp)
-jle    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x37c>
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x8a6>
+cmpl   $0x0,-0x14(%ebp)
+jle    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x4a6>
 mov    0x8(%ebp),%eax
 lea    0x48(%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN20TCircularQueueBufferILj655360EE13isPopStraightEi>
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x23a>
+je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x240>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN17ChannelServiceApp14ChannelServiceEE10getManagerEv>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp8Handlers18getTCPHandlerRelayEv>
-mov    (%eax),%edx
-mov    (%edx),%ecx
+mov    %eax,%edx
+mov    (%edx),%eax
+mov    (%eax),%ecx
 movl   $0x0,0x10(%esp)
-mov    -0x1c(%ebp),%edx
-mov    %edx,0xc(%esp)
-mov    -0x24(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    0x8(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   *%ecx
 mov    0x8(%ebp),%eax
 lea    0x48(%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN20TCircularQueueBufferILj655360EE3popEi>
 shr    $0x1f,%eax
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x63a>
-movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
-call   <T> <_ZN11TDebugTraceIcE4LockEv>
-movl   $"1.여기서 pop error 가 떨어지면 안된다.",0x4(%esp)
+je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x888>
+movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
+call   <T> <_ZN11TDebugTraceIcE4LockEv>
+movl   $"1.여기서 pop error  가 떨어지면 안된다.",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $0x3,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x658>
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x8a6>
 mov    0x8(%ebp),%eax
 add    $0x48,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK20TCircularQueueBufferILj655360EE15getPushedLengthEv>
-cmp    -0x1c(%ebp),%eax
+cmp    -0x14(%ebp),%eax
 setge  %al
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x32c>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x456>
+mov    %esp,%eax
+mov    %eax,%esi
+mov    -0x14(%ebp),%eax
+lea    -0x1(%eax),%ecx
+mov    %ecx,-0x34(%ebp)
+mov    %ecx,%eax
+mov    $0x0,%edx
+mov    %eax,%ebx
+and    $0xff,%bh
+mov    %ebx,-0xa0050(%ebp)
+mov    %edx,%ebx
+and    $0xf,%ebx
+mov    %ebx,-0xa004c(%ebp)
+mov    -0xa0050(%ebp),%eax
+mov    -0xa004c(%ebp),%edx
+add    $0x1,%eax
+adc    $0x0,%edx
+mov    %eax,%ebx
+and    $0xff,%bh
+mov    %ebx,-0xa0058(%ebp)
+mov    %edx,%ebx
+and    $0xf,%ebx
+mov    %ebx,-0xa0054(%ebp)
+mov    -0xa0058(%ebp),%eax
+mov    -0xa0054(%ebp),%edx
+shld   $0x3,%eax,%edx
+shl    $0x3,%eax
+mov    %eax,%ebx
+and    $0xff,%bh
+mov    %ebx,-0xa0060(%ebp)
+mov    %edx,%ebx
+and    $0xf,%ebx
+mov    %ebx,-0xa005c(%ebp)
+mov    -0xa0060(%ebp),%eax
+mov    -0xa005c(%ebp),%edx
+mov    %ecx,%eax
+mov    $0x0,%edx
+mov    %eax,%ebx
+and    $0xff,%bh
+mov    %ebx,-0xa0068(%ebp)
+mov    %edx,%ebx
+and    $0xf,%ebx
+mov    %ebx,-0xa0064(%ebp)
+mov    -0xa0068(%ebp),%eax
+mov    -0xa0064(%ebp),%edx
+add    $0x1,%eax
+adc    $0x0,%edx
+mov    %eax,%ebx
+and    $0xff,%bh
+mov    %ebx,-0xa0070(%ebp)
+mov    %edx,%ebx
+and    $0xf,%ebx
+mov    %ebx,-0xa006c(%ebp)
+mov    -0xa0070(%ebp),%eax
+mov    -0xa006c(%ebp),%edx
+shld   $0x3,%eax,%edx
+shl    $0x3,%eax
+mov    %eax,%ebx
+and    $0xff,%bh
+mov    %ebx,-0xa0078(%ebp)
+mov    %edx,%ebx
+and    $0xf,%ebx
+mov    %ebx,-0xa0074(%ebp)
+mov    -0xa0078(%ebp),%eax
+mov    -0xa0074(%ebp),%edx
+mov    %ecx,%eax
+add    $0x1,%eax
 add    $0xf,%eax
 add    $0xf,%eax
 shr    $0x4,%eax
 shl    $0x4,%eax
 sub    %eax,%esp
 lea    0x14(%esp),%eax
 add    $0xf,%eax
 shr    $0x4,%eax
 shl    $0x4,%eax
-mov    %eax,-0x18(%ebp)
-mov    0x8(%ebp),%eax
-lea    0x48(%eax),%edx
-mov    -0x18(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%edx
+mov    0x8(%ebp),%eax
+lea    0x48(%eax),%ecx
+mov    %edx,0x8(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
 call   <T> <_ZN20TCircularQueueBufferILj655360EE7popCopyEiPc>
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x2d8>
+je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x3e0>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN17ChannelServiceApp14ChannelServiceEE10getManagerEv>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp8Handlers18getTCPHandlerRelayEv>
-mov    (%eax),%edx
-mov    (%edx),%ecx
+mov    %eax,%ecx
+mov    (%ecx),%eax
+mov    (%eax),%ebx
+mov    -0x30(%ebp),%edx
 movl   $0x0,0x10(%esp)
-mov    -0x1c(%ebp),%edx
-mov    %edx,0xc(%esp)
-mov    -0x18(%ebp),%edx
+mov    -0x14(%ebp),%eax
+mov    %eax,0xc(%esp)
 mov    %edx,0x8(%esp)
-mov    0x8(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
+call   *%ebx
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x436>
+movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
+call   <T> <_ZN11TDebugTraceIcE4LockEv>
+movl   $"1.여기서 pop error  가 떨어지면 안된다.",0x4(%esp)
+movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
+call   <T> <_ZN11TDebugTraceIcElsEPKc>
+movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
+movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
+call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
+movl   $0x4,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17ChannelServiceApp7TCPUser16postDisconnectedEi>
+mov    $0x0,%eax
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x447>
+mov    $0x1,%eax
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x447>
+mov    %esi,%esp
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %esi,%esp
+test   %eax,%eax
+je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x8a6>
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x888>
+movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
+call   <T> <_ZN11TDebugTraceIcE4LockEv>
+movl   $"0.need more body data : messagesize=",0x4(%esp)
+movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
+call   <T> <_ZN11TDebugTraceIcElsEPKc>
+mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   *%ecx
-jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x63a>
-movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
-call   <T> <_ZN11TDebugTraceIcE4LockEv>
-movl   $"1.여기서 pop error 가 떨어지면 안된다.",0x4(%esp)
-movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
-call   <T> <_ZN11TDebugTraceIcElsEPKc>
-movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
-movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
-call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
-movl   $0x4,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17ChannelServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x658>
-movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
-call   <T> <_ZN11TDebugTraceIcE4LockEv>
-movl   $"0.need more body data : messagesize=",0x4(%esp)
-movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
-call   <T> <_ZN11TDebugTraceIcElsEPKc>
-mov    -0x1c(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
-jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x658>
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x8a6>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"recv critical error occure!",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $0x5,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x658>
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x8a6>
 mov    0x8(%ebp),%eax
 add    $0x48,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK20TCircularQueueBufferILj655360EE15getPushedLengthEv>
 cmp    $0xa,%eax
 setbe  %al
 test   %al,%al
-jne    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x657>
+jne    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x8a5>
 mov    0x8(%ebp),%eax
 lea    0x48(%eax),%edx
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0xb,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN20TCircularQueueBufferILj655360EE8peekCopyEiPc>
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x5e9>
-lea    -0x38(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x837>
+lea    -0x40(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15tagPacketHeader7getSizeEv>
-mov    %eax,-0x10(%ebp)
-cmpl   $0xa0000,-0x10(%ebp)
-jg     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x434>
-cmpl   $0x0,-0x10(%ebp)
-jg     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x44c>
+mov    %eax,-0xc(%ebp)
+cmpl   $0xa0000,-0xc(%ebp)
+jg     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x55e>
+cmpl   $0x0,-0xc(%ebp)
+jg     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x576>
 movl   $0x6,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x658>
-cmpl   $0x0,-0x10(%ebp)
-jle    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x598>
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x8a6>
+cmpl   $0x0,-0xc(%ebp)
+jle    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x7e6>
 mov    0x8(%ebp),%eax
 add    $0x48,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK20TCircularQueueBufferILj655360EE15getPushedLengthEv>
-cmp    -0x10(%ebp),%eax
+cmp    -0xc(%ebp),%eax
 setge  %al
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x548>
-mov    -0x10(%ebp),%eax
+je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x796>
+mov    %esp,%eax
+mov    %eax,%esi
+mov    -0xc(%ebp),%eax
+lea    -0x1(%eax),%ecx
+mov    %ecx,-0x2c(%ebp)
+mov    %ecx,%eax
+mov    $0x0,%edx
+mov    %eax,%ebx
+and    $0xff,%bh
+mov    %ebx,-0xa0080(%ebp)
+mov    %edx,%ebx
+and    $0xf,%ebx
+mov    %ebx,-0xa007c(%ebp)
+mov    -0xa0080(%ebp),%eax
+mov    -0xa007c(%ebp),%edx
+add    $0x1,%eax
+adc    $0x0,%edx
+mov    %eax,%ebx
+and    $0xff,%bh
+mov    %ebx,-0xa0088(%ebp)
+mov    %edx,%ebx
+and    $0xf,%ebx
+mov    %ebx,-0xa0084(%ebp)
+mov    -0xa0088(%ebp),%eax
+mov    -0xa0084(%ebp),%edx
+shld   $0x3,%eax,%edx
+shl    $0x3,%eax
+mov    %eax,%ebx
+and    $0xff,%bh
+mov    %ebx,-0xa0090(%ebp)
+mov    %edx,%ebx
+and    $0xf,%ebx
+mov    %ebx,-0xa008c(%ebp)
+mov    -0xa0090(%ebp),%eax
+mov    -0xa008c(%ebp),%edx
+mov    %ecx,%eax
+mov    $0x0,%edx
+mov    %eax,%ebx
+and    $0xff,%bh
+mov    %ebx,-0xa0098(%ebp)
+mov    %edx,%ebx
+and    $0xf,%ebx
+mov    %ebx,-0xa0094(%ebp)
+mov    -0xa0098(%ebp),%eax
+mov    -0xa0094(%ebp),%edx
+add    $0x1,%eax
+adc    $0x0,%edx
+mov    %eax,%ebx
+and    $0xff,%bh
+mov    %ebx,-0xa00a0(%ebp)
+mov    %edx,%ebx
+and    $0xf,%ebx
+mov    %ebx,-0xa009c(%ebp)
+mov    -0xa00a0(%ebp),%eax
+mov    -0xa009c(%ebp),%edx
+shld   $0x3,%eax,%edx
+shl    $0x3,%eax
+mov    %eax,%ebx
+and    $0xff,%bh
+mov    %ebx,-0xa00a8(%ebp)
+mov    %edx,%ebx
+and    $0xf,%ebx
+mov    %ebx,-0xa00a4(%ebp)
+mov    -0xa00a8(%ebp),%eax
+mov    -0xa00a4(%ebp),%edx
+mov    %ecx,%eax
+add    $0x1,%eax
 add    $0xf,%eax
 add    $0xf,%eax
 shr    $0x4,%eax
 shl    $0x4,%eax
 sub    %eax,%esp
 lea    0x14(%esp),%eax
 add    $0xf,%eax
 shr    $0x4,%eax
 shl    $0x4,%eax
-mov    %eax,-0xc(%ebp)
-mov    0x8(%ebp),%eax
-lea    0x48(%eax),%edx
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%edx
+mov    0x8(%ebp),%eax
+lea    0x48(%eax),%ecx
+mov    %edx,0x8(%esp)
 mov    -0xc(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
 call   <T> <_ZN20TCircularQueueBufferILj655360EE7popCopyEiPc>
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x4f4>
+je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x720>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN17ChannelServiceApp14ChannelServiceEE10getManagerEv>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp8Handlers18getTCPHandlerRelayEv>
-mov    (%eax),%edx
-mov    (%edx),%ecx
+mov    %eax,%ecx
+mov    (%ecx),%eax
+mov    (%eax),%ebx
+mov    -0x28(%ebp),%edx
 movl   $0x0,0x10(%esp)
-mov    -0x10(%ebp),%edx
-mov    %edx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    %edx,0x8(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
+call   *%ebx
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x776>
+movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
+call   <T> <_ZN11TDebugTraceIcE4LockEv>
+movl   $"1.여기서 pop error  가 떨어지면 안된다.",0x4(%esp)
+movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
+call   <T> <_ZN11TDebugTraceIcElsEPKc>
+movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
+movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
+call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
+movl   $0x7,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17ChannelServiceApp7TCPUser16postDisconnectedEi>
+mov    $0x0,%eax
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x787>
+mov    $0x1,%eax
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x787>
+mov    %esi,%esp
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %esi,%esp
+test   %eax,%eax
+je     <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x8a6>
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x888>
+movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
+call   <T> <_ZN11TDebugTraceIcE4LockEv>
+movl   $"2.need more body data : messagesize=",0x4(%esp)
+movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
+call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    -0xc(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   *%ecx
-jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x63a>
-movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
-call   <T> <_ZN11TDebugTraceIcE4LockEv>
-movl   $"1.여기서 pop error 가 떨어지면 안된다.",0x4(%esp)
-movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
-call   <T> <_ZN11TDebugTraceIcElsEPKc>
-movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
-movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
-call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
-movl   $0x7,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17ChannelServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x658>
-movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
-call   <T> <_ZN11TDebugTraceIcE4LockEv>
-movl   $"2.need more body data : messagesize=",0x4(%esp)
-movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
-call   <T> <_ZN11TDebugTraceIcElsEPKc>
-mov    -0x10(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
-jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x658>
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x8a6>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"2.recv critical error occure!",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $0x8,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x658>
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x8a6>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"3.recv critical error occure!",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $0x9,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x658>
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x8a6>
 mov    0x8(%ebp),%eax
 add    $0x48,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK20TCircularQueueBufferILj655360EE7isEmptyEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-jne    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0xfb>
-jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x658>
+jne    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0xff>
+jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onRead_Ev+0x8a6>
 nop
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

/* DWARF original prototype: void onRead_(TCPUser * this) */

void __thiscall ChannelServiceApp::TCPUser::_ZN17ChannelServiceApp7TCPUser7onRead_Ev(TCPUser *this)

{
  _func_int_varargs *p_Var1;
  bool bVar2;
  TDebugTrace<char> *pTVar3;
  uint uVar4;
  ChannelService *pCVar5;
  TCPHandlerRelay *pTVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  char acStack_a003c [655360];
  undefined1 local_3c [12];
  int local_30;
  int local_2c;
  char *local_28;
  char *local_24;
  int local_20;
  uint local_1c;
  undefined1 *local_18;
  int local_14;
  uint local_10;
  
  piVar8 = (int *)&stack0xfff5ffa4;
                    /* Unresolved local var: char[655360] buf@[???]
                       Unresolved local var: int nRead@[???] */
  local_30 = TCPSocket::recv(this->pSock_,acStack_a003c,0xa0000);
  TDebugTrace<char>::Lock(&gFileLogInfo);
  pTVar3 = TDebugTrace<char>::operator<<(&gFileLogInfo,"TCPUser.cpp");
  pTVar3 = TDebugTrace<char>::operator<<(pTVar3," read=");
  pTVar3 = TDebugTrace<char>::operator<<(pTVar3,local_30);
  TDebugTrace<char>::operator<<(pTVar3,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  if (local_30 < 1) {
    if (local_30 < 0) {
      _ZN17ChannelServiceApp7TCPUser16postDisconnectedEi(this,1);
      return;
    }
  }
  else {
                    /* Unresolved local var: int nRet@[???] */
    local_2c = TCircularQueueBuffer<655360u>::push
                         (&this->bufferRecv_,acStack_a003c,local_30,"TCPUser.cpp",0x96);
    piVar8 = (int *)&stack0xfff5ffa4;
    if (local_2c < 0) {
      _ZN17ChannelServiceApp7TCPUser16postDisconnectedEi(this,0);
      return;
    }
  }
  do {
    *piVar8 = (int)&this->bufferRecv_;
    piVar8[-1] = 0x805f1c5;
    uVar4 = TCircularQueueBuffer<655360u>::getPopLengthToEnd
                      ((TCircularQueueBuffer<655360u> *)*piVar8);
    if (uVar4 < 0xb) {
                    /* Unresolved local var: char[12] s@[???] */
      *piVar8 = (int)&this->bufferRecv_;
      piVar8[-1] = 0x805f49a;
      uVar4 = TCircularQueueBuffer<655360u>::getPushedLength
                        ((TCircularQueueBuffer<655360u> *)*piVar8);
      if (uVar4 < 0xb) {
        return;
      }
      piVar8[2] = (int)local_3c;
      piVar8[1] = 0xb;
      *piVar8 = (int)&this->bufferRecv_;
      piVar8[-1] = 0x805f4c5;
      bVar2 = TCircularQueueBuffer<655360u>::peekCopy
                        ((TCircularQueueBuffer<655360u> *)*piVar8,piVar8[1],(char *)piVar8[2]);
      if (!bVar2) {
        *piVar8 = (int)&gFileLogInfo;
        piVar8[-1] = 0x805f6b1;
        TDebugTrace<char>::Lock((TDebugTrace<char> *)*piVar8);
        piVar8[1] = (int)"3.recv critical error occure!";
        *piVar8 = (int)&gFileLogInfo;
        piVar8[-1] = 0x805f6c5;
        pTVar3 = TDebugTrace<char>::operator<<((TDebugTrace<char> *)*piVar8,(char *)piVar8[1]);
        piVar8[1] = (int)endl<char>;
        *piVar8 = (int)pTVar3;
        piVar8[-1] = 0x805f6d5;
        TDebugTrace<char>::operator<<
                  ((TDebugTrace<char> *)*piVar8,
                   (_func_TDebugTrace<char>_ptr_TDebugTrace<char>_ptr *)piVar8[1]);
        *piVar8 = (int)&gFileLogInfo;
        piVar8[-1] = 0x805f6e1;
        TDebugTrace<char>::Unlock((TDebugTrace<char> *)*piVar8);
        piVar8[1] = 9;
        *piVar8 = (int)this;
        piVar8[-1] = 0x805f6f4;
        _ZN17ChannelServiceApp7TCPUser16postDisconnectedEi((TCPUser *)*piVar8,piVar8[1]);
        return;
      }
                    /* Unresolved local var: LPPACKET_HEADER hdr@[???]
                       Unresolved local var: int nMessageSize@[???] */
      local_18 = local_3c;
      *piVar8 = (int)local_18;
      piVar8[-1] = 0x805f4de;
      local_14 = tagPacketHeader::getSize((tagPacketHeader *)*piVar8);
      if ((0xa0000 < local_14) || (local_14 < 1)) {
        piVar8[1] = 6;
        *piVar8 = (int)this;
        piVar8[-1] = 0x805f503;
        _ZN17ChannelServiceApp7TCPUser16postDisconnectedEi((TCPUser *)*piVar8,piVar8[1]);
        return;
      }
      if (local_14 < 1) {
        *piVar8 = (int)&gFileLogInfo;
        piVar8[-1] = 0x805f660;
        TDebugTrace<char>::Lock((TDebugTrace<char> *)*piVar8);
        piVar8[1] = (int)"2.recv critical error occure!";
        *piVar8 = (int)&gFileLogInfo;
        piVar8[-1] = 0x805f674;
        pTVar3 = TDebugTrace<char>::operator<<((TDebugTrace<char> *)*piVar8,(char *)piVar8[1]);
        piVar8[1] = (int)endl<char>;
        *piVar8 = (int)pTVar3;
        piVar8[-1] = 0x805f684;
        TDebugTrace<char>::operator<<
                  ((TDebugTrace<char> *)*piVar8,
                   (_func_TDebugTrace<char>_ptr_TDebugTrace<char>_ptr *)piVar8[1]);
        *piVar8 = (int)&gFileLogInfo;
        piVar8[-1] = 0x805f690;
        TDebugTrace<char>::Unlock((TDebugTrace<char> *)*piVar8);
        piVar8[1] = 8;
        *piVar8 = (int)this;
        piVar8[-1] = 0x805f6a3;
        _ZN17ChannelServiceApp7TCPUser16postDisconnectedEi((TCPUser *)*piVar8,piVar8[1]);
        return;
      }
      *piVar8 = (int)&this->bufferRecv_;
      piVar8[-1] = 0x805f520;
      iVar7 = TCircularQueueBuffer<655360u>::getPushedLength
                        ((TCircularQueueBuffer<655360u> *)*piVar8);
      if (iVar7 < local_14) {
        *piVar8 = (int)&gFileLogInfo;
        piVar8[-1] = 0x805f610;
        TDebugTrace<char>::Lock((TDebugTrace<char> *)*piVar8);
        piVar8[1] = (int)"2.need more body data : messagesize=";
        *piVar8 = (int)&gFileLogInfo;
        piVar8[-1] = 0x805f624;
        pTVar3 = TDebugTrace<char>::operator<<((TDebugTrace<char> *)*piVar8,(char *)piVar8[1]);
        piVar8[1] = local_14;
        *piVar8 = (int)pTVar3;
        piVar8[-1] = 0x805f633;
        pTVar3 = TDebugTrace<char>::operator<<((TDebugTrace<char> *)*piVar8,piVar8[1]);
        piVar8[1] = (int)endl<char>;
        *piVar8 = (int)pTVar3;
        piVar8[-1] = 0x805f643;
        TDebugTrace<char>::operator<<
                  ((TDebugTrace<char> *)*piVar8,
                   (_func_TDebugTrace<char>_ptr_TDebugTrace<char>_ptr *)piVar8[1]);
        *piVar8 = (int)&gFileLogInfo;
        piVar8[-1] = 0x805f64f;
        TDebugTrace<char>::Unlock((TDebugTrace<char> *)*piVar8);
        return;
      }
                    /* Unresolved local var: char * szBuf@[???] */
      iVar7 = -(local_14 + 0x1eU & 0xfffffff0);
      piVar9 = (int *)((int)piVar8 + iVar7);
      local_10 = (int)piVar8 + iVar7 + 0x23 & 0xfffffff0;
      *(uint *)((int)piVar8 + iVar7 + 8) = local_10;
      *(int *)((int)piVar8 + iVar7 + 4) = local_14;
      *(BufferType **)((int)piVar8 + iVar7) = &this->bufferRecv_;
      *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f56b;
      bVar2 = TCircularQueueBuffer<655360u>::popCopy
                        (*(TCircularQueueBuffer<655360u> **)((int)piVar8 + iVar7),
                         *(int *)((int)piVar8 + iVar7 + 4),*(char **)((int)piVar8 + iVar7 + 8));
      if (!bVar2) {
        *(DebugTrace **)((int)piVar8 + iVar7) = &gFileLogInfo;
        *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f5bc;
        TDebugTrace<char>::Lock(*(TDebugTrace<char> **)((int)piVar8 + iVar7));
        *(undefined **)((int)piVar8 + iVar7 + 4) = &DAT_08123728;
        *(DebugTrace **)((int)piVar8 + iVar7) = &gFileLogInfo;
        *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f5d0;
        pTVar3 = TDebugTrace<char>::operator<<
                           (*(TDebugTrace<char> **)((int)piVar8 + iVar7),
                            *(char **)((int)piVar8 + iVar7 + 4));
        *(code **)((int)piVar8 + iVar7 + 4) = endl<char>;
        *(TDebugTrace<char> **)((int)piVar8 + iVar7) = pTVar3;
        *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f5e0;
        TDebugTrace<char>::operator<<
                  (*(TDebugTrace<char> **)((int)piVar8 + iVar7),
                   *(_func_TDebugTrace<char>_ptr_TDebugTrace<char>_ptr **)((int)piVar8 + iVar7 + 4))
        ;
        *(DebugTrace **)((int)piVar8 + iVar7) = &gFileLogInfo;
        *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f5ec;
        TDebugTrace<char>::Unlock(*(TDebugTrace<char> **)((int)piVar8 + iVar7));
        *(undefined4 *)((int)piVar8 + iVar7 + 4) = 7;
        *(TCPUser **)((int)piVar8 + iVar7) = this;
        *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f5ff;
        _ZN17ChannelServiceApp7TCPUser16postDisconnectedEi
                  (*(TCPUser **)((int)piVar8 + iVar7),*(int *)((int)piVar8 + iVar7 + 4));
        return;
      }
      *(TCPUser **)((int)piVar8 + iVar7) = this;
      *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f57a;
      pCVar5 = TManager<ChannelServiceApp::ChannelService>::getManager
                         (*(TManager<ChannelServiceApp::ChannelService> **)((int)piVar8 + iVar7));
      *(Handlers **)((int)piVar8 + iVar7) = &pCVar5->super_Handlers;
      *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f585;
      pTVar6 = Handlers::getTCPHandlerRelay(*(Handlers **)((int)piVar8 + iVar7));
      p_Var1 = *(pTVar6->super_TCPHandler)._vptr_TCPHandler;
      *(undefined4 *)((int)piVar8 + iVar7 + 0x10) = 0;
      *(int *)((int)piVar8 + iVar7 + 0xc) = local_14;
      *(uint *)((int)piVar8 + iVar7 + 8) = local_10;
      *(TCPUser **)((int)piVar8 + iVar7 + 4) = this;
      *(TCPHandlerRelay **)((int)piVar8 + iVar7) = pTVar6;
      *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f5ab;
      (*p_Var1)();
    }
    else {
                    /* Unresolved local var: char * s@[???]
                       Unresolved local var: LPPACKET_HEADER hdr@[???]
                       Unresolved local var: int nMessageSize@[???] */
      *piVar8 = (int)&this->bufferRecv_;
      piVar8[-1] = 0x805f1e1;
      local_28 = TCircularQueueBuffer<655360u>::peekPop((TCircularQueueBuffer<655360u> *)*piVar8);
      *piVar8 = (int)local_28;
      piVar8[-1] = 0x805f1f5;
      local_24 = local_28;
      local_20 = tagPacketHeader::getSize((tagPacketHeader *)*piVar8);
      if ((0xa0000 < local_20) || (local_20 < 1)) {
        piVar8[1] = 2;
        *piVar8 = (int)this;
        piVar8[-1] = 0x805f21a;
        _ZN17ChannelServiceApp7TCPUser16postDisconnectedEi((TCPUser *)*piVar8,piVar8[1]);
        return;
      }
      if (local_20 < 1) {
        *piVar8 = (int)&gFileLogInfo;
        piVar8[-1] = 0x805f444;
        TDebugTrace<char>::Lock((TDebugTrace<char> *)*piVar8);
        piVar8[1] = (int)"recv critical error occure!";
        *piVar8 = (int)&gFileLogInfo;
        piVar8[-1] = 0x805f458;
        pTVar3 = TDebugTrace<char>::operator<<((TDebugTrace<char> *)*piVar8,(char *)piVar8[1]);
        piVar8[1] = (int)endl<char>;
        *piVar8 = (int)pTVar3;
        piVar8[-1] = 0x805f468;
        TDebugTrace<char>::operator<<
                  ((TDebugTrace<char> *)*piVar8,
                   (_func_TDebugTrace<char>_ptr_TDebugTrace<char>_ptr *)piVar8[1]);
        *piVar8 = (int)&gFileLogInfo;
        piVar8[-1] = 0x805f474;
        TDebugTrace<char>::Unlock((TDebugTrace<char> *)*piVar8);
        piVar8[1] = 5;
        *piVar8 = (int)this;
        piVar8[-1] = 0x805f487;
        _ZN17ChannelServiceApp7TCPUser16postDisconnectedEi((TCPUser *)*piVar8,piVar8[1]);
        return;
      }
      piVar8[1] = local_20;
      *piVar8 = (int)&this->bufferRecv_;
      piVar8[-1] = 0x805f23e;
      bVar2 = TCircularQueueBuffer<655360u>::isPopStraight
                        ((TCircularQueueBuffer<655360u> *)*piVar8,piVar8[1]);
      if (bVar2) {
        *piVar8 = (int)this;
        piVar8[-1] = 0x805f251;
        pCVar5 = TManager<ChannelServiceApp::ChannelService>::getManager
                           ((TManager<ChannelServiceApp::ChannelService> *)*piVar8);
        *piVar8 = (int)&pCVar5->super_Handlers;
        piVar8[-1] = 0x805f25c;
        pTVar6 = Handlers::getTCPHandlerRelay((Handlers *)*piVar8);
        p_Var1 = *(pTVar6->super_TCPHandler)._vptr_TCPHandler;
        piVar8[4] = 0;
        piVar8[3] = local_20;
        piVar8[2] = (int)local_28;
        piVar8[1] = (int)this;
        *piVar8 = (int)pTVar6;
        piVar8[-1] = 0x805f282;
        (*p_Var1)();
        piVar8[1] = local_20;
        *piVar8 = (int)&this->bufferRecv_;
        piVar8[-1] = 0x805f297;
        iVar7 = TCircularQueueBuffer<655360u>::pop
                          ((TCircularQueueBuffer<655360u> *)*piVar8,piVar8[1]);
        piVar9 = piVar8;
        if (iVar7 < 0) {
          *piVar8 = (int)&gFileLogInfo;
          piVar8[-1] = 0x805f2ae;
          TDebugTrace<char>::Lock((TDebugTrace<char> *)*piVar8);
          piVar8[1] = (int)&DAT_08123728;
          *piVar8 = (int)&gFileLogInfo;
          piVar8[-1] = 0x805f2c2;
          pTVar3 = TDebugTrace<char>::operator<<((TDebugTrace<char> *)*piVar8,(char *)piVar8[1]);
          piVar8[1] = (int)endl<char>;
          *piVar8 = (int)pTVar3;
          piVar8[-1] = 0x805f2d2;
          TDebugTrace<char>::operator<<
                    ((TDebugTrace<char> *)*piVar8,
                     (_func_TDebugTrace<char>_ptr_TDebugTrace<char>_ptr *)piVar8[1]);
          *piVar8 = (int)&gFileLogInfo;
          piVar8[-1] = 0x805f2de;
          TDebugTrace<char>::Unlock((TDebugTrace<char> *)*piVar8);
          piVar8[1] = 3;
          *piVar8 = (int)this;
          piVar8[-1] = 0x805f2f1;
          _ZN17ChannelServiceApp7TCPUser16postDisconnectedEi((TCPUser *)*piVar8,piVar8[1]);
          return;
        }
      }
      else {
        *piVar8 = (int)&this->bufferRecv_;
        piVar8[-1] = 0x805f304;
        iVar7 = TCircularQueueBuffer<655360u>::getPushedLength
                          ((TCircularQueueBuffer<655360u> *)*piVar8);
        if (iVar7 < local_20) {
          *piVar8 = (int)&gFileLogInfo;
          piVar8[-1] = 0x805f3f4;
          TDebugTrace<char>::Lock((TDebugTrace<char> *)*piVar8);
          piVar8[1] = (int)"0.need more body data : messagesize=";
          *piVar8 = (int)&gFileLogInfo;
          piVar8[-1] = 0x805f408;
          pTVar3 = TDebugTrace<char>::operator<<((TDebugTrace<char> *)*piVar8,(char *)piVar8[1]);
          piVar8[1] = local_20;
          *piVar8 = (int)pTVar3;
          piVar8[-1] = 0x805f417;
          pTVar3 = TDebugTrace<char>::operator<<((TDebugTrace<char> *)*piVar8,piVar8[1]);
          piVar8[1] = (int)endl<char>;
          *piVar8 = (int)pTVar3;
          piVar8[-1] = 0x805f427;
          TDebugTrace<char>::operator<<
                    ((TDebugTrace<char> *)*piVar8,
                     (_func_TDebugTrace<char>_ptr_TDebugTrace<char>_ptr *)piVar8[1]);
          *piVar8 = (int)&gFileLogInfo;
          piVar8[-1] = 0x805f433;
          TDebugTrace<char>::Unlock((TDebugTrace<char> *)*piVar8);
          return;
        }
                    /* Unresolved local var: char * szBuf@[???] */
        iVar7 = -(local_20 + 0x1eU & 0xfffffff0);
        piVar9 = (int *)((int)piVar8 + iVar7);
        local_1c = (int)piVar8 + iVar7 + 0x23 & 0xfffffff0;
        *(uint *)((int)piVar8 + iVar7 + 8) = local_1c;
        *(int *)((int)piVar8 + iVar7 + 4) = local_20;
        *(BufferType **)((int)piVar8 + iVar7) = &this->bufferRecv_;
        *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f34f;
        bVar2 = TCircularQueueBuffer<655360u>::popCopy
                          (*(TCircularQueueBuffer<655360u> **)((int)piVar8 + iVar7),
                           *(int *)((int)piVar8 + iVar7 + 4),*(char **)((int)piVar8 + iVar7 + 8));
        if (!bVar2) {
          *(DebugTrace **)((int)piVar8 + iVar7) = &gFileLogInfo;
          *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f3a0;
          TDebugTrace<char>::Lock(*(TDebugTrace<char> **)((int)piVar8 + iVar7));
          *(undefined **)((int)piVar8 + iVar7 + 4) = &DAT_08123728;
          *(DebugTrace **)((int)piVar8 + iVar7) = &gFileLogInfo;
          *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f3b4;
          pTVar3 = TDebugTrace<char>::operator<<
                             (*(TDebugTrace<char> **)((int)piVar8 + iVar7),
                              *(char **)((int)piVar8 + iVar7 + 4));
          *(code **)((int)piVar8 + iVar7 + 4) = endl<char>;
          *(TDebugTrace<char> **)((int)piVar8 + iVar7) = pTVar3;
          *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f3c4;
          TDebugTrace<char>::operator<<
                    (*(TDebugTrace<char> **)((int)piVar8 + iVar7),
                     *(_func_TDebugTrace<char>_ptr_TDebugTrace<char>_ptr **)
                      ((int)piVar8 + iVar7 + 4));
          *(DebugTrace **)((int)piVar8 + iVar7) = &gFileLogInfo;
          *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f3d0;
          TDebugTrace<char>::Unlock(*(TDebugTrace<char> **)((int)piVar8 + iVar7));
          *(undefined4 *)((int)piVar8 + iVar7 + 4) = 4;
          *(TCPUser **)((int)piVar8 + iVar7) = this;
          *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f3e3;
          _ZN17ChannelServiceApp7TCPUser16postDisconnectedEi
                    (*(TCPUser **)((int)piVar8 + iVar7),*(int *)((int)piVar8 + iVar7 + 4));
          return;
        }
        *(TCPUser **)((int)piVar8 + iVar7) = this;
        *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f35e;
        pCVar5 = TManager<ChannelServiceApp::ChannelService>::getManager
                           (*(TManager<ChannelServiceApp::ChannelService> **)((int)piVar8 + iVar7));
        *(Handlers **)((int)piVar8 + iVar7) = &pCVar5->super_Handlers;
        *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f369;
        pTVar6 = Handlers::getTCPHandlerRelay(*(Handlers **)((int)piVar8 + iVar7));
        p_Var1 = *(pTVar6->super_TCPHandler)._vptr_TCPHandler;
        *(undefined4 *)((int)piVar8 + iVar7 + 0x10) = 0;
        *(int *)((int)piVar8 + iVar7 + 0xc) = local_20;
        *(uint *)((int)piVar8 + iVar7 + 8) = local_1c;
        *(TCPUser **)((int)piVar8 + iVar7 + 4) = this;
        *(TCPHandlerRelay **)((int)piVar8 + iVar7) = pTVar6;
        *(undefined4 *)((int)piVar8 + iVar7 + -4) = 0x805f38f;
        (*p_Var1)();
      }
    }
    *piVar9 = (int)&this->bufferRecv_;
    piVar9[-1] = 0x805f704;
    iVar7 = TCircularQueueBuffer<655360u>::isEmpty((TCircularQueueBuffer<655360u> *)*piVar9);
    piVar8 = piVar9;
    if (iVar7 != 0) {
      return;
    }
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/TCPUser.cpp](source/ChannelOld/DNFChannelBridge/TCPUser.cpp)（约第 115 行）：

```cpp
void ChannelServiceApp::TCPUser::onRead_()
{
    char buf[0xa0000];
    int nRead = pSock_->recv(buf, 0xa0000);
    GLOG(ChannelServiceApp::gFileLogInfo, "TCPUser.cpp" << " read=" << nRead);
    if (nRead >= 1)
    {
        int nRet = bufferRecv_.push(buf, nRead, "TCPUser.cpp", 0x96);
        if (nRet < 0)
        {
            postDisconnected(0);
            return;
        }
    }
    else if (nRead < 0)
    {
        postDisconnected(1);
        return;
    }
    do
    {
        if ((unsigned int)bufferRecv_.getPopLengthToEnd() > 0xa)
        {
            char* s = (char*)bufferRecv_.peekPop();
            tagPacketHeader* hdr = (tagPacketHeader*)s;
            int nMessageSize = hdr->getSize();
            if ((0xa0000 < nMessageSize) || (nMessageSize < 1))
            {
                postDisconnected(2);
                return;
            }
            if (nMessageSize >= 1)
            {
                if (bufferRecv_.isPopStraight(nMessageSize))
                {
                    TManager<ChannelService>::getManager()->getTCPHandlerRelay()->dispatch(this, s, nMessageSize, 0);
                    if (bufferRecv_.pop(nMessageSize) < 0)
                    {
                        GLOG(ChannelServiceApp::gFileLogInfo, "1.\xbf\xa9\xb1\xe2\xbc\xad pop error \x20\xb0\xa1 \xb6\xb3\xbe\xee\xc1\xf6\xb8\xe9 \xbe\xc8\xb5\xc8\xb4\xd9.");
                        postDisconnected(3);
                        return;
                    }
                }
                else
                {
                    if (bufferRecv_.getPushedLength() >= nMessageSize)
                    {
                        char szBuf[nMessageSize];
                        if (bufferRecv_.popCopy(nMessageSize, szBuf))
                        {
                            TManager<ChannelService>::getManager()->getTCPHandlerRelay()->dispatch(this, szBuf, nMessageSize, 0);
                        }
                        else
                        {
                            GLOG(ChannelServiceApp::gFileLogInfo, "1.\xbf\xa9\xb1\xe2\xbc\xad pop error \x20\xb0\xa1 \xb6\xb3\xbe\xee\xc1\xf6\xb8\xe9 \xbe\xc8\xb5\xc8\xb4\xd9.");
                            postDisconnected(4);
                            return;
                        }
                    }
                    else
                    {
                        GLOG(ChannelServiceApp::gFileLogInfo, "0.need more body data : messagesize=" << nMessageSize);
                        return;
                    }
                }
            }
            else
            {
                GLOG(ChannelServiceApp::gFileLogInfo, "recv critical error occure!");
                postDisconnected(5);
                return;
            }
        }
        else
        {
            if ((unsigned int)bufferRecv_.getPushedLength() < 0xb)
            {
                return;
            }
            char s[12];
            if (bufferRecv_.peekCopy(0xb, s))
            {
                tagPacketHeader* hdr = (tagPacketHeader*)s;
                int nMessageSize = hdr->getSize();
                if ((0xa0000 < nMessageSize) || (nMessageSize < 1))
                {
                    postDisconnected(6);
                    return;
                }
                if (nMessageSize >= 1)
                {
                    if (bufferRecv_.getPushedLength() >= nMessageSize)
                    {
                        char szBuf[nMessageSize];
                        if (bufferRecv_.popCopy(nMessageSize, szBuf))
                        {
                            TManager<ChannelService>::getManager()->getTCPHandlerRelay()->dispatch(this, szBuf, nMessageSize, 0);
                        }
                        else
                        {
                            GLOG(ChannelServiceApp::gFileLogInfo, "1.\xbf\xa9\xb1\xe2\xbc\xad pop error \x20\xb0\xa1 \xb6\xb3\xbe\xee\xc1\xf6\xb8\xe9 \xbe\xc8\xb5\xc8\xb4\xd9.");
                            postDisconnected(7);
                            return;
                        }
                    }
                    else
                    {
                        GLOG(ChannelServiceApp::gFileLogInfo, "2.need more body data : messagesize=" << nMessageSize);
                        return;
                    }
                }
                else
                {
                    GLOG(ChannelServiceApp::gFileLogInfo, "2.recv critical error occure!");
                    postDisconnected(8);
                    return;
                }
            }
            else
            {
                GLOG(ChannelServiceApp::gFileLogInfo, "3.recv critical error occure!");
                postDisconnected(9);
                return;
            }
        }
    } while (!bufferRecv_.isEmpty());
}
```
