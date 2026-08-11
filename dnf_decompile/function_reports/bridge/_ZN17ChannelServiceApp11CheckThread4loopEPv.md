# _ZN17ChannelServiceApp11CheckThread4loopEPv

`ChannelServiceApp::CheckThread::loop(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| bridge | DIFF | `0x806268e` | `0xf2e` | `0x805e67a` | `0xeed` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,907 +1,889 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x10c,%esp
 movl   $"Start up CheckThread",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN17ChannelServiceApp14ChannelServiceEE10getManagerEv>
 mov    %eax,-0x40(%ebp)
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x38(%ebp)
+mov    %eax,-0x3c(%ebp)
 mov    -0x40(%ebp),%eax
 add    $0x3804ce8,%eax
 mov    %eax,0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TScopedLockI11TThreadLockI16ThreadLock_linuxEEC1ERS2_>
-movl   $0x0,-0x34(%ebp)
-jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x71d>
-movl   $0x0,-0x3c(%ebp)
-mov    -0x34(%ebp),%eax
+movl   $0x0,-0x38(%ebp)
+jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x6db>
+mov    -0x38(%ebp),%eax
 mov    -0x40(%ebp),%edx
 imul   $0x3804c,%eax,%eax
 lea    (%edx,%eax,1),%eax
 add    $0xc0,%eax
 movzbl 0xc(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x8a>
-movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
-call   <T> <_ZN11TDebugTraceIcE4LockEv>
-mov    -0x34(%ebp),%eax
+je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xda>
+movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
+call   <T> <_ZN11TDebugTraceIcE4LockEv>
+mov    -0x38(%ebp),%eax
 mov    -0x40(%ebp),%edx
 imul   $0x3804c,%eax,%eax
 lea    (%edx,%eax,1),%eax
 add    $0xc0,%eax
 movzbl 0xc(%eax),%eax
 movzbl %al,%ebx
 movl   $"AAAAA=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEb>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
-mov    -0x34(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    -0x40(%ebp),%edx
 imul   $0x3804c,%eax,%eax
 lea    (%edx,%eax,1),%eax
 add    $0xc0,%eax
 movzbl 0xc(%eax),%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x715>
-movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
-call   <T> <_ZN11TDebugTraceIcE4LockEv>
-mov    -0x34(%ebp),%eax
+test   %al,%al
+je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x6d7>
+movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
+call   <T> <_ZN11TDebugTraceIcE4LockEv>
+mov    -0x38(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0xd0,%eax
 add    -0x40(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiPN17ChannelServiceApp11tServerInfoESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 mov    %eax,%ebx
 movl   $"BBBBB=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEj>
 movl   $", i = ",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
-mov    -0x34(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11TDebugTraceIcElsEi>
-movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
-movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
-call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
-mov    -0x34(%ebp),%eax
+mov    -0x38(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11TDebugTraceIcElsEi>
+movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
+movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
+call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
+mov    -0x38(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0xd0,%eax
 add    -0x40(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiPN17ChannelServiceApp11tServerInfoESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x21f>
-mov    -0x34(%ebp),%eax
+je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x215>
+mov    -0x38(%ebp),%eax
 mov    -0x40(%ebp),%edx
 imul   $0x3804c,%eax,%eax
 lea    (%edx,%eax,1),%eax
 add    $0xc0,%eax
 movb   $0x0,0xc(%eax)
 mov    -0x40(%ebp),%eax
 movl   $0x0,0x3804ccc(%eax)
 movl   $0x0,-0x30(%ebp)
-jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x211>
+jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x207>
 mov    -0x30(%ebp),%eax
 mov    -0x40(%ebp),%edx
 imul   $0x3804c,%eax,%eax
 lea    (%edx,%eax,1),%eax
 add    $0xc0,%eax
 movzbl 0xc(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x20d>
+je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x203>
 mov    -0x40(%ebp),%eax
 mov    0x3804ccc(%eax),%eax
 lea    0x1(%eax),%edx
 mov    -0x40(%ebp),%eax
 mov    %edx,0x3804ccc(%eax)
 addl   $0x1,-0x30(%ebp)
 cmpl   $0xff,-0x30(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x1dc>
-movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
-call   <T> <_ZN11TDebugTraceIcE4LockEv>
-mov    -0x34(%ebp),%eax
+jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x1d2>
+movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
+call   <T> <_ZN11TDebugTraceIcE4LockEv>
+mov    -0x38(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0xd0,%eax
 add    -0x40(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiPN17ChannelServiceApp11tServerInfoESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 mov    %eax,%ebx
 movl   $"Start=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEj>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEC1Ev>
-mov    -0x34(%ebp),%eax
-imul   $0x3804c,%eax,%eax
-add    $0xd0,%eax
-add    -0x40(%ebp),%eax
-add    $0x14,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt3mapIiPN17ChannelServiceApp11tServerInfoESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
-test   %eax,%eax
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x718>
-mov    -0x34(%ebp),%eax
+movl   $0x0,-0x34(%ebp)
+mov    -0x38(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0xd0,%eax
 add    -0x40(%ebp),%eax
 lea    0x14(%eax),%edx
-lea    -0xfc(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiPN17ChannelServiceApp11tServerInfoESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 sub    $0x4,%esp
-mov    -0xfc(%ebp),%eax
-mov    %eax,-0x58(%ebp)
-jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x5b2>
+jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x576>
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x24(%eax),%eax
-mov    -0x38(%ebp),%edx
+mov    -0x3c(%ebp),%edx
 mov    %edx,%edi
 sub    %eax,%edi
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x24(%eax),%ebx
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x1c(%eax),%esi
 movl   $"gc_no=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $", Cur=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
-mov    -0x38(%ebp),%edx
+mov    -0x3c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $", tic=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $", result=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %edi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 movzbl 0x20(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x591>
+je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x3c2>
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x24(%eax),%eax
-mov    -0x38(%ebp),%edx
+mov    -0x3c(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x14,%eax
-setg   %al
-test   %al,%al
-je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x591>
+jle    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x3c2>
+mov    $0x1,%eax
+jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x3c7>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x555>
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x24(%eax),%eax
-mov    -0x38(%ebp),%edx
+mov    -0x3c(%ebp),%edx
 mov    %edx,%esi
 sub    %eax,%esi
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x1c(%eax),%ebx
 movl   $"delete gc_no=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $", tic=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $0x0,-0x2c(%ebp)
-jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x540>
-mov    -0x34(%ebp),%ebx
+jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x504>
+mov    -0x38(%ebp),%ebx
 mov    -0x2c(%ebp),%eax
 mov    -0x40(%ebp),%ecx
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%ebx,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ecx,%eax,1),%eax
 add    $0x130,%eax
 mov    (%eax),%ebx
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x1c(%eax),%eax
 cmp    %eax,%ebx
 sete   %al
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x53c>
-mov    -0x34(%ebp),%ebx
+je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x500>
+mov    -0x38(%ebp),%ebx
 mov    -0x2c(%ebp),%eax
 mov    -0x40(%ebp),%ecx
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%ebx,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ecx,%eax,1),%eax
 add    $0x120,%eax
 movb   $0x0,0x14(%eax)
-mov    -0x34(%ebp),%ebx
+mov    -0x38(%ebp),%ebx
 mov    -0x2c(%ebp),%eax
 mov    -0x40(%ebp),%ecx
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%ebx,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ecx,%eax,1),%eax
 add    $0x130,%eax
 movl   $0xffffffff,(%eax)
 addl   $0x1,-0x2c(%ebp)
 cmpl   $0xfff,-0x2c(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x4a4>
-mov    -0x34(%ebp),%eax
+jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x468>
+mov    -0x38(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0xd0,%eax
 add    -0x40(%ebp),%eax
 lea    0x14(%eax),%edx
 mov    -0x58(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIiPN17ChannelServiceApp11tServerInfoESt4lessIiESaISt4pairIKiS2_EEE5eraseESt17_Rb_tree_iteratorIS7_E>
-mov    -0x34(%ebp),%eax
+mov    -0x38(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0xc0,%eax
 add    -0x40(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp11ServerGroup18decreseServerCountEv>
 lea    -0x4c(%ebp),%eax
 movl   $0x0,0x8(%esp)
 lea    -0x58(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEppEi>
 sub    $0x4,%esp
-addl   $0x1,-0x3c(%ebp)
-mov    -0x34(%ebp),%eax
+addl   $0x1,-0x34(%ebp)
+mov    -0x38(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0xd0,%eax
 add    -0x40(%ebp),%eax
 lea    0x14(%eax),%edx
 lea    -0x50(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiPN17ChannelServiceApp11tServerInfoESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x50(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEneERKS6_>
 test   %al,%al
-jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x2f0>
+jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x2ad>
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"End",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"ABCD *************************************************************",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
-mov    -0x3c(%ebp),%eax
+mov    -0x34(%ebp),%eax
 lea    0x1(%eax),%ebx
 movl   $"ABCD * ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
-mov    -0x34(%ebp),%edx
+mov    -0x38(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&data#508fa1e1(.rodata),0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"ABCD *************************************************************",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
-jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x719>
-nop
-jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x719>
-nop
-addl   $0x1,-0x34(%ebp)
-cmpl   $0xff,-0x34(%ebp)
+addl   $0x1,-0x38(%ebp)
+cmpl   $0xff,-0x38(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x5b>
-jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x74c>
+jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x70a>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TScopedLockI11TThreadLockI16ThreadLock_linuxEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TScopedLockI11TThreadLockI16ThreadLock_linuxEED1Ev>
 movl   $0x0,-0x28(%ebp)
-jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xeca>
+jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xe89>
 mov    -0x28(%ebp),%edx
 mov    -0x40(%ebp),%eax
 add    $0x1c0268,%edx
 shl    $0x5,%edx
 add    %edx,%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x79c>
+je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x75a>
 mov    -0x28(%ebp),%edx
 mov    -0x40(%ebp),%eax
 shl    $0x5,%edx
 add    %edx,%eax
 add    $0x3804d20,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17ChannelServiceApp7TCPUser14isDisconnectedEv>
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x7a3>
+je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x761>
 mov    $0x1,%eax
-jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x7a8>
+jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x766>
 mov    $0x0,%eax
 test   %al,%al
-jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xec5>
+jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xe84>
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 mov    -0x28(%ebp),%edx
 mov    -0x40(%ebp),%eax
 shl    $0x5,%edx
 add    %edx,%eax
 add    $0x3804d1c,%eax
 mov    (%eax),%eax
-mov    -0x38(%ebp),%edx
+mov    -0x3c(%ebp),%edx
 mov    %edx,%esi
 sub    %eax,%esi
 mov    -0x28(%ebp),%edx
 mov    -0x40(%ebp),%eax
 add    $0x1c0268,%edx
 shl    $0x5,%edx
 add    %edx,%eax
 add    $0x4,%eax
 mov    (%eax),%ebx
 movl   $"12345 START Send Channel Index = ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $"tic=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    -0x28(%ebp),%edx
 mov    -0x40(%ebp),%eax
 shl    $0x5,%edx
 add    %edx,%eax
 add    $0x3804d1c,%eax
 mov    (%eax),%eax
-mov    -0x38(%ebp),%edx
+mov    -0x3c(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0xc8,%eax
-jle    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x8d1>
-mov    -0x40(%ebp),%eax
-add    $0x3804ce8,%eax
-mov    %eax,0x4(%esp)
+jg     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xe1b>
+movl   $0x0,-0x24(%ebp)
+jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xda9>
 lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN11TScopedLockI11TThreadLockI16ThreadLock_linuxEEC1ERS2_>
-mov    -0x28(%ebp),%edx
-mov    -0x40(%ebp),%eax
-add    $0x1c0268,%edx
-shl    $0x5,%edx
-add    %edx,%eax
-add    $0x4,%eax
-movl   $0xffffffff,(%eax)
-mov    -0x40(%ebp),%eax
-mov    0x3804d00(%eax),%eax
-lea    -0x1(%eax),%edx
-mov    -0x40(%ebp),%eax
-mov    %edx,0x3804d00(%eax)
-mov    -0x28(%ebp),%edx
-mov    -0x40(%ebp),%eax
-shl    $0x5,%edx
-add    %edx,%eax
-add    $0x3804d20,%eax
-movl   $0x0,(%eax)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN11TScopedLockI11TThreadLockI16ThreadLock_linuxEED1Ev>
-jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xec6>
-movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xe53>
-lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEC1Ev>
 mov    -0x24(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0xd0,%eax
 add    -0x40(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiPN17ChannelServiceApp11tServerInfoESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x919>
+je     <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x86f>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 mov    -0x24(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0xd0,%eax
 add    -0x40(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiPN17ChannelServiceApp11tServerInfoESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 mov    %eax,%ebx
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $" th Number of Channel : ",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEj>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    -0x24(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0xd0,%eax
 add    -0x40(%ebp),%eax
 lea    0x14(%eax),%edx
 lea    -0xfc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiPN17ChannelServiceApp11tServerInfoESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 sub    $0x4,%esp
 mov    -0xfc(%ebp),%eax
-mov    %eax,-0x60(%ebp)
-jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xe0f>
+mov    %eax,-0x5c(%ebp)
+jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xd65>
 lea    -0x93(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25tagCS_UPDATE_CHANNEL_INFOC1Ev>
 lea    -0xec(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi64EEC1Ev>
 lea    -0xec(%ebp),%eax
 mov    %eax,-0x20(%ebp)
-lea    -0x60(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x1c(%eax),%eax
 mov    %eax,-0x88(%ebp)
 movl   $0x0,-0x84(%ebp)
-lea    -0x60(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x34(%eax),%eax
 mov    %eax,-0x80(%ebp)
-lea    -0x60(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    (%eax),%eax
 mov    %eax,-0x7c(%ebp)
-lea    -0x60(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x4(%eax),%eax
 mov    %eax,-0x78(%ebp)
-lea    -0x60(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 add    $0x8,%eax
 mov    %eax,0x4(%esp)
 lea    -0x93(%ebp),%eax
 add    $0x1f,%eax
 mov    %eax,(%esp)
 call   <T> <strcpy>
-lea    -0x60(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x18(%eax),%eax
 mov    %eax,-0x64(%ebp)
 lea    -0x93(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCelllsEP15tagPacketHeader>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell3PADEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"------------------------------------------------------",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"INDEX=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    -0x28(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 mov    -0x28(%ebp),%edx
 mov    -0x40(%ebp),%eax
 shl    $0x5,%edx
 add    %edx,%eax
 add    $0x3804d20,%eax
 mov    (%eax),%eax
 mov    %eax,%ebx
 movl   $"TCP USER=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 mov    -0x28(%ebp),%edx
 mov    -0x40(%ebp),%eax
 shl    $0x5,%edx
 add    %edx,%eax
 add    $0x3804d20,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser9getSocketEv>
 mov    %eax,%ebx
 movl   $"TCP SOCK=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"------------------------------------------------------",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    -0x28(%ebp),%edx
 mov    -0x40(%ebp),%eax
 shl    $0x5,%edx
 add    %edx,%eax
 add    $0x3804d20,%eax
 mov    (%eax),%eax
 mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser14onWrite2BufferEP8CMsgCell>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-jns    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xcc9>
+jns    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xc1f>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,%ebx
 movl   $"Update Send Fail=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $", error=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $"Update Send Fail",(%esp)
 call   <T> <printf>
 cmpl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xcdb>
+jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xc61>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"ret = 0",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 mov    -0x28(%ebp),%edx
 mov    -0x40(%ebp),%eax
 shl    $0x5,%edx
 add    %edx,%eax
 add    $0x3804d18,%eax
 mov    (%eax),%ebx
 mov    -0x28(%ebp),%eax
 add    $0x1c0268,%eax
 shl    $0x5,%eax
 add    -0x40(%ebp),%eax
 lea    0x8(%eax),%edi
 mov    -0x88(%ebp),%esi
 movl   $&data#9f6bebf5(.rodata),0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $"gc_no=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $", IP=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %edi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPc>
 movl   $", PORT=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
-jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xde4>
+lea    -0x44(%ebp),%eax
+movl   $0x0,0x8(%esp)
+lea    -0x5c(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEppEi>
+sub    $0x4,%esp
+lea    -0xec(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN8TMsgCellILi64EED1Ev>
+jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xd65>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xec(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi64EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0xec(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN8TMsgCellILi64EED1Ev>
-lea    -0x44(%ebp),%eax
-movl   $0x0,0x8(%esp)
-lea    -0x60(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEppEi>
-sub    $0x4,%esp
 mov    -0x24(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0xd0,%eax
 add    -0x40(%ebp),%eax
 lea    0x14(%eax),%edx
 lea    -0x48(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiPN17ChannelServiceApp11tServerInfoESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x48(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEneERKS6_>
 test   %al,%al
-jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x9b9>
+jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x90f>
 addl   $0x1,-0x24(%ebp)
 cmpl   $0xff,-0x24(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x8dd>
+jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x833>
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 mov    -0x28(%ebp),%edx
 mov    -0x40(%ebp),%eax
 add    $0x1c0268,%edx
 shl    $0x5,%edx
 add    %edx,%eax
 add    $0x4,%eax
 mov    (%eax),%ebx
 movl   $"12345 END Send Channel Index = ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
-jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xec6>
+jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xe85>
+mov    -0x40(%ebp),%eax
+add    $0x3804ce8,%eax
+mov    %eax,0x4(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11TScopedLockI11TThreadLockI16ThreadLock_linuxEEC1ERS2_>
+mov    -0x28(%ebp),%edx
+mov    -0x40(%ebp),%eax
+add    $0x1c0268,%edx
+shl    $0x5,%edx
+add    %edx,%eax
+add    $0x4,%eax
+movl   $0xffffffff,(%eax)
+mov    -0x40(%ebp),%eax
+mov    0x3804d00(%eax),%eax
+lea    -0x1(%eax),%edx
+mov    -0x40(%ebp),%eax
+mov    %edx,0x3804d00(%eax)
+mov    -0x28(%ebp),%edx
+mov    -0x40(%ebp),%eax
+shl    $0x5,%edx
+add    %edx,%eax
+add    $0x3804d20,%eax
+movl   $0x0,(%eax)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11TScopedLockI11TThreadLockI16ThreadLock_linuxEED1Ev>
+jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0xe85>
 nop
 addl   $0x1,-0x28(%ebp)
 mov    -0x40(%ebp),%eax
 mov    0x3804d00(%eax),%eax
 cmp    -0x28(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x763>
+jne    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x721>
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"12345 LOOP END ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp11gFileLogCriE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $0x2dc6c0,(%esp)
 call   <T> <usleep>
 jmp    <T> <_ZN17ChannelServiceApp11CheckThread4loopEPv+0x29>
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void loop(CheckThread * this, void * temp) */

void __thiscall
ChannelServiceApp::CheckThread::_ZN17ChannelServiceApp11CheckThread4loopEPv
          (CheckThread *this,void *temp)

{
  int iVar1;
  TCPUser *in_Val;
  tChannelServer *ptVar2;
  bool bVar3;
  size_t sVar4;
  pair<const_int,_ChannelServiceApp::tServerInfo*> *ppVar5;
  TCPSocket *in_Val_00;
  int *piVar6;
  char *in_Str;
  TDebugTrace<char> *pTVar7;
  int iVar8;
  int in_Val_01;
  ThreadLock *in_lock_;
  code *pcVar9;
  _Base_ptr local_100 [4];
  TMsgCell<64> local_f0;
  tagCS_UPDATE_CHANNEL_INFO local_97;
  _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_> local_64;
  TScopedLock<TThreadLock<ThreadLock_linux>_> local_60;
  _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_> local_5c;
  TScopedLock<TThreadLock<ThreadLock_linux>_> local_58;
  undefined1 local_54 [12];
  _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_> local_48;
  ChannelService *local_44;
  size_t local_40;
  time_t local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  TMsgCell<64> *local_24;
  int local_20;
  
                    /* Unresolved local var: ChannelService * pApp@[???]
                       Unresolved local var: int count@[???] */
  puts("Start up CheckThread");
  local_44 = TManager<ChannelServiceApp::ChannelService>::getManager
                       (&this->super_TManager<ChannelServiceApp::ChannelService>);
  do {
                    /* Unresolved local var: int cur_time@[???] */
    local_3c = time((time_t *)0x0);
                    /* Unresolved local var: TScopedLock<TThreadLock<ThreadLock_linux>_> slock@[???]
                        */
    pcVar9 = (code *)&(local_44->super_Channel).LockChannel;
    TScopedLock<TThreadLock<ThreadLock_linux>_>::TScopedLock
              (&local_58,(TThreadLock<ThreadLock_linux> *)pcVar9);
                    /* Unresolved local var: int i@[???] */
    for (local_38 = 0; local_38 < 0x100; local_38 = local_38 + 1) {
                    /* Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                       it@[???] */
      local_40 = 0;
      if ((local_44->super_Channel).Servers[local_38].use != false) {
                    /* try { // try from 08062713 to 08062da0 has its CatchHandler @ 08062dbf */
        TDebugTrace<char>::Lock(&gFileLogCri);
      }
      bVar3 = (local_44->super_Channel).Servers[local_38].use;
      pTVar7 = TDebugTrace<char>::operator<<(&gFileLogCri,"AAAAA=");
      pTVar7 = TDebugTrace<char>::operator<<(pTVar7,bVar3);
      pcVar9 = endl<char>;
      TDebugTrace<char>::operator<<(pTVar7,endl<char>);
      TDebugTrace<char>::Unlock(&gFileLogCri);
      if ((local_44->super_Channel).Servers[local_38].use == true) {
        TDebugTrace<char>::Lock(&gFileLogCri);
        sVar4 = std::
                map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
                ::size(&(local_44->super_Channel).Servers[local_38].listServerInfo_);
        pTVar7 = TDebugTrace<char>::operator<<(&gFileLogCri,"BBBBB=");
        pTVar7 = TDebugTrace<char>::operator<<(pTVar7,sVar4);
        pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", i = ");
        pTVar7 = TDebugTrace<char>::operator<<(pTVar7,local_38);
        TDebugTrace<char>::operator<<(pTVar7,endl<char>);
        TDebugTrace<char>::Unlock(&gFileLogCri);
        sVar4 = std::
                map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
                ::size(&(local_44->super_Channel).Servers[local_38].listServerInfo_);
        if (sVar4 == 0) {
          (local_44->super_Channel).Servers[local_38].use = false;
          (local_44->super_Channel).ServerGroupCount = 0;
                    /* Unresolved local var: int j@[???] */
          for (local_34 = 0; local_34 < 0x100; local_34 = local_34 + 1) {
            if ((local_44->super_Channel).Servers[local_34].use != false) {
              (local_44->super_Channel).ServerGroupCount =
                   (local_44->super_Channel).ServerGroupCount + 1;
            }
          }
        }
        TDebugTrace<char>::Lock(&gFileLogCri);
        sVar4 = std::
                map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
                ::size(&(local_44->super_Channel).Servers[local_38].listServerInfo_);
        pTVar7 = TDebugTrace<char>::operator<<(&gFileLogCri,"Start=");
        pTVar7 = TDebugTrace<char>::operator<<(pTVar7,sVar4);
        pcVar9 = endl<char>;
        TDebugTrace<char>::operator<<(pTVar7,endl<char>);
        TDebugTrace<char>::Unlock(&gFileLogCri);
        std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
        _Rb_tree_iterator(&local_5c);
        sVar4 = std::
                map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
                ::size(&(local_44->super_Channel).Servers[local_38].listServerInfo_);
        if (sVar4 != 0) {
          std::
          map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
          ::begin((map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
                   *)local_100);
          local_5c._M_node = local_100[0];
          while( true ) {
            std::
            map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
            ::end((map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
                   *)local_54);
            bVar3 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                    operator!=(&local_5c,
                               (_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                                *)local_54);
            if (!bVar3) break;
            TDebugTrace<char>::Lock(&gFileLogCri);
            ppVar5 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                     ::operator*(&local_5c);
            in_Val_01 = local_3c - ppVar5->second->tic;
            ppVar5 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                     ::operator*(&local_5c);
            iVar1 = ppVar5->second->tic;
            ppVar5 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                     ::operator*(&local_5c);
            iVar8 = ppVar5->second->gc_no;
            pTVar7 = TDebugTrace<char>::operator<<(&gFileLogCri,"gc_no=");
            pTVar7 = TDebugTrace<char>::operator<<(pTVar7,iVar8);
            pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", Cur=");
            pTVar7 = TDebugTrace<char>::operator<<(pTVar7,local_3c);
            pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", tic=");
            pTVar7 = TDebugTrace<char>::operator<<(pTVar7,iVar1);
            pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", result=");
            pTVar7 = TDebugTrace<char>::operator<<(pTVar7,in_Val_01);
            TDebugTrace<char>::operator<<(pTVar7,endl<char>);
            TDebugTrace<char>::Unlock(&gFileLogCri);
            ppVar5 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                     ::operator*(&local_5c);
            if ((ppVar5->second->use != false) &&
               (ppVar5 = std::
                         _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                         operator*(&local_5c), 0x14 < local_3c - ppVar5->second->tic)) {
              TDebugTrace<char>::Lock(&gFileLogCri);
              ppVar5 = std::
                       _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                       operator*(&local_5c);
              iVar8 = local_3c - ppVar5->second->tic;
              ppVar5 = std::
                       _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                       operator*(&local_5c);
              iVar1 = ppVar5->second->gc_no;
              pTVar7 = TDebugTrace<char>::operator<<(&gFileLogCri,"delete gc_no=");
              pTVar7 = TDebugTrace<char>::operator<<(pTVar7,iVar1);
              pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", tic=");
              pTVar7 = TDebugTrace<char>::operator<<(pTVar7,iVar8);
              TDebugTrace<char>::operator<<(pTVar7,endl<char>);
              TDebugTrace<char>::Unlock(&gFileLogCri);
                    /* Unresolved local var: int k@[???] */
              for (local_30 = 0; local_30 < 0x1000; local_30 = local_30 + 1) {
                iVar1 = (local_44->super_Channel).Servers[local_38].ServerInfo[local_30].gc_no;
                ppVar5 = std::
                         _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                         operator*(&local_5c);
                if (iVar1 == ppVar5->second->gc_no) {
                  (local_44->super_Channel).Servers[local_38].ServerInfo[local_30].use = false;
                  (local_44->super_Channel).Servers[local_38].ServerInfo[local_30].gc_no = -1;
                }
              }
              std::
              map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
              ::erase(&(local_44->super_Channel).Servers[local_38].listServerInfo_,local_5c);
              ServerGroup::decreseServerCount((local_44->super_Channel).Servers + local_38);
            }
            std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
            operator++((_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_> *)
                       (local_54 + 4),(int)&local_5c);
            local_40 = local_40 + 1;
          }
          TDebugTrace<char>::Lock(&gFileLogCri);
          pTVar7 = TDebugTrace<char>::operator<<(&gFileLogCri,"End");
          TDebugTrace<char>::operator<<(pTVar7,endl<char>);
          TDebugTrace<char>::Unlock(&gFileLogCri);
          TDebugTrace<char>::Lock(&gFileLogInfo);
          pTVar7 = TDebugTrace<char>::operator<<
                             (&gFileLogInfo,
                              "ABCD *************************************************************");
          TDebugTrace<char>::operator<<(pTVar7,endl<char>);
          TDebugTrace<char>::Unlock(&gFileLogInfo);
          TDebugTrace<char>::Lock(&gFileLogInfo);
          iVar1 = local_40 + 1;
          pTVar7 = TDebugTrace<char>::operator<<(&gFileLogInfo,"ABCD * ");
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,local_38);
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,&DAT_08124073);
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,iVar1);
          TDebugTrace<char>::operator<<(pTVar7,endl<char>);
          TDebugTrace<char>::Unlock(&gFileLogInfo);
          TDebugTrace<char>::Lock(&gFileLogInfo);
          pTVar7 = TDebugTrace<char>::operator<<
                             (&gFileLogInfo,
                              "ABCD *************************************************************");
          pcVar9 = endl<char>;
          TDebugTrace<char>::operator<<(pTVar7,endl<char>);
          TDebugTrace<char>::Unlock(&gFileLogInfo);
        }
      }
    }
    TScopedLock<TThreadLock<ThreadLock_linux>_>::~TScopedLock(&local_58,(int)pcVar9);
                    /* Unresolved local var: int k@[???] */
    for (local_2c = 0; local_2c < (local_44->super_ChannelServer).ChannelServerNumber;
        local_2c = local_2c + 1) {
      if (((local_44->super_ChannelServer).CServers[local_2c].id == -1) ||
         (bVar3 = TCPUser::isDisconnected((local_44->super_ChannelServer).CServers[local_2c].uTCP),
         bVar3)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) {
        TDebugTrace<char>::Lock(&gFileLogCri);
        iVar8 = local_3c - (local_44->super_ChannelServer).CServers[local_2c].tic;
        iVar1 = (local_44->super_ChannelServer).CServers[local_2c].id;
        pTVar7 = TDebugTrace<char>::operator<<(&gFileLogCri,"12345 START Send Channel Index = ");
        pTVar7 = TDebugTrace<char>::operator<<(pTVar7,iVar1);
        pTVar7 = TDebugTrace<char>::operator<<(pTVar7,"tic=");
        pTVar7 = TDebugTrace<char>::operator<<(pTVar7,iVar8);
        TDebugTrace<char>::operator<<(pTVar7,endl<char>);
        TDebugTrace<char>::Unlock(&gFileLogCri);
        if (local_3c - (local_44->super_ChannelServer).CServers[local_2c].tic < 0xc9) {
                    /* Unresolved local var: int i@[???] */
          for (local_28 = 0; local_28 < 0x100; local_28 = local_28 + 1) {
                    /* Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                       it@[???] */
            std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
            _Rb_tree_iterator(&local_64);
            sVar4 = std::
                    map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
                    ::size(&(local_44->super_Channel).Servers[local_28].listServerInfo_);
            if (sVar4 != 0) {
              TDebugTrace<char>::Lock(&gFileLogInfo);
            }
            sVar4 = std::
                    map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
                    ::size(&(local_44->super_Channel).Servers[local_28].listServerInfo_);
            pTVar7 = TDebugTrace<char>::operator<<(&gFileLogInfo,local_28);
            pTVar7 = TDebugTrace<char>::operator<<(pTVar7," th Number of Channel : ");
            pTVar7 = TDebugTrace<char>::operator<<(pTVar7,sVar4);
            TDebugTrace<char>::operator<<(pTVar7,endl<char>);
            TDebugTrace<char>::Unlock(&gFileLogInfo);
            std::
            map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
            ::begin((map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
                     *)local_100);
            local_64._M_node = local_100[0];
            while( true ) {
              std::
              map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
              ::end((map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
                     *)(local_54 + 8));
              bVar3 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                      ::operator!=(&local_64,
                                   (_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                                    *)(local_54 + 8));
              if (!bVar3) break;
                    /* Unresolved local var: PCK_CS_UPDATE_CHANNEL_INFO pck@[???]
                       Unresolved local var: CMsgCell * pMsg@[???]
                       Unresolved local var: MSGCELL64 buffer@[???]
                       Unresolved local var: int ret@[???] */
              tagCS_UPDATE_CHANNEL_INFO::tagCS_UPDATE_CHANNEL_INFO(&local_97);
              TMsgCell<64>::TMsgCell(&local_f0);
              local_24 = &local_f0;
              ppVar5 = std::
                       _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                       operator*(&local_64);
              local_97.gc_no = ppVar5->second->gc_no;
              local_97.group = 0;
              ppVar5 = std::
                       _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                       operator*(&local_64);
              local_97.channel_no = ppVar5->second->channel_no;
              ppVar5 = std::
                       _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                       operator*(&local_64);
              local_97.max_user_num = ppVar5->second->nMaxUserCount_;
              ppVar5 = std::
                       _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                       operator*(&local_64);
              local_97.cur_user_num = ppVar5->second->nCurrentUserCount_;
              ppVar5 = std::
                       _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                       operator*(&local_64);
              strcpy(local_97.server_ip,ppVar5->second->IP);
              ppVar5 = std::
                       _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                       operator*(&local_64);
              local_97.port = ppVar5->second->port;
              CMsgCell::operator<<(&local_24->super_CMsgCell,&local_97.super_tagPacketHeader);
              CMsgCell::PAD(&local_24->super_CMsgCell);
                    /* try { // try from 08063129 to 08063451 has its CatchHandler @ 08063454 */
              TDebugTrace<char>::Lock(&gFileLogInfo);
              pTVar7 = TDebugTrace<char>::operator<<
                                 (&gFileLogInfo,
                                  "------------------------------------------------------");
              TDebugTrace<char>::operator<<(pTVar7,endl<char>);
              TDebugTrace<char>::Unlock(&gFileLogInfo);
              TDebugTrace<char>::Lock(&gFileLogInfo);
              pTVar7 = TDebugTrace<char>::operator<<(&gFileLogInfo,"INDEX=");
              pTVar7 = TDebugTrace<char>::operator<<(pTVar7,local_2c);
              TDebugTrace<char>::operator<<(pTVar7,endl<char>);
              TDebugTrace<char>::Unlock(&gFileLogInfo);
              TDebugTrace<char>::Lock(&gFileLogInfo);
              in_Val = (local_44->super_ChannelServer).CServers[local_2c].uTCP;
              pTVar7 = TDebugTrace<char>::operator<<(&gFileLogInfo,"TCP USER=");
              pTVar7 = TDebugTrace<char>::operator<<(pTVar7,(int)in_Val);
              TDebugTrace<char>::operator<<(pTVar7,endl<char>);
              TDebugTrace<char>::Unlock(&gFileLogInfo);
              TDebugTrace<char>::Lock(&gFileLogInfo);
              in_Val_00 = TCPUser::getSocket((local_44->super_ChannelServer).CServers[local_2c].uTCP
                                            );
              pTVar7 = TDebugTrace<char>::operator<<(&gFileLogInfo,"TCP SOCK=");
              pTVar7 = TDebugTrace<char>::operator<<(pTVar7,(int)in_Val_00);
              TDebugTrace<char>::operator<<(pTVar7,endl<char>);
              TDebugTrace<char>::Unlock(&gFileLogInfo);
              TDebugTrace<char>::Lock(&gFileLogInfo);
              pTVar7 = TDebugTrace<char>::operator<<
                                 (&gFileLogInfo,
                                  "------------------------------------------------------");
              TDebugTrace<char>::operator<<(pTVar7,endl<char>);
              TDebugTrace<char>::Unlock(&gFileLogInfo);
              local_20 = TCPUser::onWrite2Buffer
                                   ((local_44->super_ChannelServer).CServers[local_2c].uTCP,
                                    &local_24->super_CMsgCell);
              if (local_20 < 0) {
                TDebugTrace<char>::Lock(&gFileLogInfo);
                piVar6 = __errno_location();
                in_Str = strerror(*piVar6);
                pTVar7 = TDebugTrace<char>::operator<<(&gFileLogInfo,"Update Send Fail=");
                pTVar7 = TDebugTrace<char>::operator<<(pTVar7,local_20);
                pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", error=");
                pTVar7 = TDebugTrace<char>::operator<<(pTVar7,in_Str);
                TDebugTrace<char>::operator<<(pTVar7,endl<char>);
                TDebugTrace<char>::Unlock(&gFileLogInfo);
                printf("Update Send Fail");
              }
              if (local_20 == 0) {
                TDebugTrace<char>::Lock(&gFileLogInfo);
              }
              pTVar7 = TDebugTrace<char>::operator<<(&gFileLogInfo,"ret = 0");
              TDebugTrace<char>::operator<<(pTVar7,endl<char>);
              TDebugTrace<char>::Unlock(&gFileLogInfo);
              TDebugTrace<char>::Lock(&gFileLogInfo);
              iVar8 = local_97.gc_no;
              iVar1 = (local_44->super_ChannelServer).CServers[local_2c].port;
              ptVar2 = (local_44->super_ChannelServer).CServers + local_2c;
              pTVar7 = TDebugTrace<char>::operator<<(&gFileLogInfo,&DAT_0812414e);
              pTVar7 = TDebugTrace<char>::operator<<(pTVar7,"gc_no=");
              pTVar7 = TDebugTrace<char>::operator<<(pTVar7,iVar8);
              pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", IP=");
              pTVar7 = TDebugTrace<char>::operator<<(pTVar7,ptVar2->IP);
              pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", PORT=");
              pTVar7 = TDebugTrace<char>::operator<<(pTVar7,iVar1);
              pcVar9 = endl<char>;
              TDebugTrace<char>::operator<<(pTVar7,endl<char>);
              TDebugTrace<char>::Unlock(&gFileLogInfo);
              TMsgCell<64>::~TMsgCell(&local_f0,(int)pcVar9);
              std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
              operator++(&local_48,(int)&local_64);
            }
          }
          TDebugTrace<char>::Lock(&gFileLogCri);
          iVar1 = (local_44->super_ChannelServer).CServers[local_2c].id;
          pTVar7 = TDebugTrace<char>::operator<<(&gFileLogCri,"12345 END Send Channel Index = ");
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,iVar1);
          TDebugTrace<char>::operator<<(pTVar7,endl<char>);
          TDebugTrace<char>::Unlock(&gFileLogCri);
        }
        else {
                    /* Unresolved local var: TScopedLock<TThreadLock<ThreadLock_linux>_> slock@[???]
                        */
          in_lock_ = &(local_44->super_Channel).LockChannel;
          TScopedLock<TThreadLock<ThreadLock_linux>_>::TScopedLock(&local_60,in_lock_);
          (local_44->super_ChannelServer).CServers[local_2c].id = -1;
          (local_44->super_ChannelServer).ChannelServerNumber =
               (local_44->super_ChannelServer).ChannelServerNumber + -1;
          (local_44->super_ChannelServer).CServers[local_2c].uTCP = (TCPUser *)0x0;
          TScopedLock<TThreadLock<ThreadLock_linux>_>::~TScopedLock(&local_60,(int)in_lock_);
        }
      }
    }
    TDebugTrace<char>::Lock(&gFileLogCri);
    pTVar7 = TDebugTrace<char>::operator<<(&gFileLogCri,"12345 LOOP END ");
    TDebugTrace<char>::operator<<(pTVar7,endl<char>);
    TDebugTrace<char>::Unlock(&gFileLogCri);
    usleep(3000000);
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/CheckThread.cpp](source/ChannelOld/DNFChannelBridge/CheckThread.cpp)（约第 201 行）：

```cpp
void ChannelServiceApp::CheckThread::loop(void* temp)
{
    puts("Start up CheckThread");
    ChannelService* pApp = getManager();
    do
    {
        time_t cur_time = time(NULL);
        {
            TScopedLock<TThreadLock<ThreadLock_linux> > slock(pApp->LockChannel);
            for (int i = 0; i < 0x100; i++)
            {
                if (pApp->Servers[i].use != false)
                {
                    gFileLogCri.Lock();
                    gFileLogCri << "AAAAA=" << pApp->Servers[i].use << endl;
                    gFileLogCri.Unlock();
                }
                if (pApp->Servers[i].use == true)
                {
                    gFileLogCri.Lock();
                    gFileLogCri << "BBBBB=" << pApp->Servers[i].listServerInfo_.size() << ", i = " << i << endl;
                    gFileLogCri.Unlock();
                    if (pApp->Servers[i].listServerInfo_.size() == 0)
                    {
                        pApp->Servers[i].use = false;
                        pApp->ServerGroupCount = 0;
                        for (int j = 0; j < 0x100; j++)
                        {
                            if (pApp->Servers[j].use != false)
                            {
                                pApp->ServerGroupCount = pApp->ServerGroupCount + 1;
                            }
                        }
                    }
                    gFileLogCri.Lock();
                    gFileLogCri << "Start=" << pApp->Servers[i].listServerInfo_.size() << endl;
                    gFileLogCri.Unlock();
                    int count = 0;
                    std::map<int, tServerInfo*>::iterator it = pApp->Servers[i].listServerInfo_.begin();
                    while (it != pApp->Servers[i].listServerInfo_.end())
                    {
                        gFileLogCri.Lock();
                        gFileLogCri << "gc_no=" << (*it).second->gc_no << ", Cur=" << (int)cur_time
                                    << ", tic=" << (int)(*it).second->tic << ", result=" << (int)(cur_time - (*it).second->tic) << endl;
                        gFileLogCri.Unlock();
                        if (((*it).second->use != false) && (0x14 < cur_time - (*it).second->tic))
                        {
                            gFileLogCri.Lock();
                            gFileLogCri << "delete gc_no=" << (*it).second->gc_no << ", tic="
                                        << (int)(cur_time - (*it).second->tic) << endl;
                            gFileLogCri.Unlock();
                            for (int k = 0; k < 0x1000; k++)
                            {
                                if (pApp->Servers[i].ServerInfo[k].gc_no == (*it).second->gc_no)
                                {
                                    pApp->Servers[i].ServerInfo[k].use = false;
                                    pApp->Servers[i].ServerInfo[k].gc_no = -1;
                                }
                            }
                            pApp->Servers[i].listServerInfo_.erase(it);
                            pApp->Servers[i].decreseServerCount();
                        }
                        it++;
                        count = count + 1;
                    }
                    gFileLogCri.Lock();
                    gFileLogCri << "End" << endl;
                    gFileLogCri.Unlock();
                    GLOG(gFileLogInfo, "ABCD *************************************************************");
                    GLOG(gFileLogInfo, "ABCD * " << i << "\xbc\xad\xb9\xf6\xb1\xba, \xbc\xad\xb9\xf6 \xb0\xb3\xbc\xf6 =" << (count + 1));
                    GLOG(gFileLogInfo, "ABCD *************************************************************");
                }
            }
        }
        for (int k = 0; k < pApp->ChannelServerNumber; k++)
        {
            if ((pApp->CServers[k].id == -1) || (pApp->CServers[k].uTCP->isDisconnected()))
            {
                continue;
            }
            gFileLogCri.Lock();
            gFileLogCri << "12345 START Send Channel Index = " << pApp->CServers[k].id
                        << "tic=" << (int)(cur_time - pApp->CServers[k].tic) << endl;
            gFileLogCri.Unlock();
            if (cur_time - pApp->CServers[k].tic < 0xc9)
            {
                for (int i = 0; i < 0x100; i++)
                {
                    std::map<int, tServerInfo*>::iterator it;
                    if (pApp->Servers[i].listServerInfo_.size() != 0)
                    {
                        gFileLogInfo.Lock();
                    }
                    gFileLogInfo << i << " th Number of Channel : " << pApp->Servers[i].listServerInfo_.size() << endl;
                    gFileLogInfo.Unlock();
                    it = pApp->Servers[i].listServerInfo_.begin();
                    while (it != pApp->Servers[i].listServerInfo_.end())
                    {
                        tagCS_UPDATE_CHANNEL_INFO pck;
                        TMsgCell<64> buffer;
                        CMsgCell* pMsg = &buffer;
                        pck.gc_no = (*it).second->gc_no;
                        pck.group = 0;
                        pck.channel_no = (*it).second->channel_no;
                        pck.max_user_num = (*it).second->nMaxUserCount_;
                        pck.cur_user_num = (*it).second->nCurrentUserCount_;
                        strcpy(pck.server_ip, (*it).second->IP);
                        pck.port = (*it).second->port;
                        *pMsg << (LPPACKET_HEADER)&pck;
                        pMsg->PAD();
                        GLOG(gFileLogInfo, "------------------------------------------------------");
                        GLOG(gFileLogInfo, "INDEX=" << k);
                        GLOG(gFileLogInfo, "TCP USER=" << (int)pApp->CServers[k].uTCP);
                        GLOG(gFileLogInfo, "TCP SOCK=" << (int)pApp->CServers[k].uTCP->getSocket());
                        GLOG(gFileLogInfo, "------------------------------------------------------");
                        int ret = pApp->CServers[k].uTCP->onWrite2Buffer(pMsg);
                        if (ret < 0)
                        {
                            GLOG(gFileLogInfo, "Update Send Fail=" << ret << ", error=" << strerror(errno));
                            printf("Update Send Fail");
                        }
                        if (ret == 0)
                        {
                            GLOG(gFileLogInfo, "ret = 0");
                        }
                        GLOG(gFileLogInfo, "\xc3\xa4\xb3\xce \xbc\xad\xb9\xf6\xbf\xa1 \xbe\xcb\xb8\xb0\xb4\xd9. "
                            << "gc_no=" << pck.gc_no << ", IP=" << pApp->CServers[k].IP
                            << ", PORT=" << pApp->CServers[k].port);
                        it++;
                    }
                }
                gFileLogCri.Lock();
                gFileLogCri << "12345 END Send Channel Index = " << pApp->CServers[k].id << endl;
                gFileLogCri.Unlock();
            }
            else
            {
                TScopedLock<TThreadLock<ThreadLock_linux> > slock(pApp->LockChannel);
                pApp->CServers[k].id = -1;
                pApp->ChannelServerNumber = pApp->ChannelServerNumber + -1;
                pApp->CServers[k].uTCP = NULL;
            }
        }
        gFileLogCri.Lock();
        gFileLogCri << "12345 LOOP END " << endl;
        gFileLogCri.Unlock();
        usleep(3000000);
    } while (true);
}
```
