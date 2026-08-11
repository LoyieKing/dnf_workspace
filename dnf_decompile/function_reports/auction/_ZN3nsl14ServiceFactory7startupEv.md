# _ZN3nsl14ServiceFactory7startupEv

`nsl::ServiceFactory::startup()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80a98bc` | `0x780` | `0x809d2d2` | `0x789` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,494 +1,491 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x5c,%esp
 movl   $&data#5f6abba0(.rodata),(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 add    $0xd4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiPN3nsl13IInterHandlerESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 mov    %eax,0x4(%esp)
 movl   $"%d\n",(%esp)
 call   <T> <printf>
-movl   $0x0,-0x24(%ebp)
+movl   $0x0,-0x30(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x169(%eax),%esi
 mov    0x8(%ebp),%eax
 lea    0x154(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog4initEPcS1_>
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZN3nsl14ServiceFactory7startupEv+0x78>
-mov    -0x24(%ebp),%eax
-jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x775>
+mov    %eax,-0x30(%ebp)
+cmpl   $0x0,-0x30(%ebp)
+js     <T> <_ZN3nsl14ServiceFactory7startupEv+0x77b>
 movl   $0x2c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPoolC1Ev>
-jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0xaa>
+jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0xa2>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x5c(%eax)
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0x5,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12findIntValueEii>
 mov    0x8(%ebp),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl8PortInfo10setUDPPortEi>
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0x4,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12findIntValueEii>
 mov    0x8(%ebp),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl8PortInfo10setTCPPortEi>
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0xa,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12findIntValueEii>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket14SetRecvBufSizeEi>
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0xb,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12findIntValueEii>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket14SetSendBufSizeEi>
 mov    0x8(%ebp),%eax
 add    $0xd4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiPN3nsl13IInterHandlerESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 mov    %eax,0x4(%esp)
 movl   $"%d\n",(%esp)
 call   <T> <printf>
 movl   $0x8c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThreadC1Ev>
-jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x1a6>
+jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x19e>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x48(%eax)
 movl   $"TCPSendThread 객체 완료...",(%esp)
 call   <T> <puts>
 movl   $0x74,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl16ActiveConManagerC1Ev>
-jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x1ec>
+jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x1e4>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xb8(%eax)
 movl   $"TimerThread 객체 생성...",(%esp)
 call   <T> <puts>
 movl   $0x8c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TimerThreadC1Ev>
-jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x235>
+jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x22d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x20(%eax)
 movl   $"TimerThread 객체 완료...",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x4c(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog16setLogSendThreadEPNS_13LogSendThreadE>
 movl   $"TCPThread 객체 생성...",(%esp)
 call   <T> <puts>
 movl   $0x18,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPThreadC1Ev>
-jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x29e>
+jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x296>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x18(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl8PortInfo10getTCPPortEv>
 mov    0x8(%ebp),%edx
 mov    0x18(%edx),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9TCPThread7setPortEi>
 movl   $"TCPThread 객체 완료...",(%esp)
 call   <T> <puts>
 movl   $"NSLDBThread 객체 생성...",(%esp)
 call   <T> <puts>
 movl   $0xbc,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11NSLDBThreadC1Ev>
-jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x30d>
+jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x305>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x38(%eax)
 movl   $"NSLDBThread 객체 완료...",(%esp)
 call   <T> <puts>
 movl   $0x8,(%esp)
 call   <T> <_Znwj>
-mov    %eax,%ebx
-mov    %ebx,%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPDispatcherC1Ev>
-mov    %ebx,%edx
-mov    0x8(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    -0x2c(%ebp),%edx
 mov    %edx,0xc(%eax)
 movl   $"TCPDispatcher has been created...",(%esp)
 call   <T> <puts>
 movl   $0x1,(%esp)
 call   <T> <_Znwj>
-mov    %eax,%ebx
-mov    %ebx,%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15InterDispatcherC1Ev>
-mov    %ebx,%edx
-mov    0x8(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    -0x28(%ebp),%edx
 mov    %edx,0x10(%eax)
 movl   $"InterDispatcher has been created...",(%esp)
 call   <T> <puts>
 movl   $0x1,(%esp)
 call   <T> <_Znwj>
-mov    %eax,%ebx
-mov    %ebx,%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBDispatcherC1Ev>
-mov    %ebx,%edx
-mov    0x8(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    -0x24(%ebp),%edx
 mov    %edx,0x14(%eax)
 movl   $"DBDispatcher 객체 완료...",(%esp)
 call   <T> <puts>
 movl   $&data#2a39e182(.rodata),(%esp)
 call   <T> <puts>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $&data#2a39e182(.rodata),0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 movl   $0x1,0x58(%eax)
 movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x455>
+jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x456>
 movl   $0xc8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10WorkThreadC1Ei>
-jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x41a>
+jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x41b>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    -0x20(%ebp),%ecx
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 add    $0x4,%ecx
 mov    %edx,0x14(%eax,%ecx,4)
 mov    -0x20(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0x4,%edx
 mov    0x14(%eax,%edx,4),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Thread5beginEv>
 mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"%d번 workThread 구동 성공\n",(%esp)
 call   <T> <printf>
 addl   $0x1,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x58(%eax),%eax
 cmp    -0x20(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN3nsl14ServiceFactory7startupEv+0x3e1>
+jne    <T> <_ZN3nsl14ServiceFactory7startupEv+0x3e2>
 movl   $0x7d0,(%esp)
 call   <T> <_ZN3nsl7TSystemINS_11LinuxSystemEE5sleepEi>
 mov    0x8(%ebp),%eax
 mov    0x38(%eax),%eax
 mov    %eax,0x4(%esp)
 movl   $"NSLDBThread 0 번 구동 시작-%p\n",(%esp)
 call   <T> <printf>
 mov    0x8(%ebp),%eax
 mov    0x38(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Thread5beginEv>
 mov    0x8(%ebp),%eax
 mov    0x38(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"NSLDBThread 0 번 구동 성공-%p",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    0x48(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Thread5beginEv>
 mov    0x8(%ebp),%eax
 mov    0x48(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"TCPSendThread 0 번 구동 성공-%p",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Thread5beginEv>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,0x4(%esp)
 movl   $"TimerThread 구동 성공-%p\n",(%esp)
 call   <T> <printf>
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN3nsl15INetWorkHandlerEEEC1Ev>
 mov    0x8(%ebp),%eax
 lea    0xbc(%eax),%edx
-lea    -0x3c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiPN3nsl15INetWorkHandlerESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 sub    $0x4,%esp
-mov    -0x3c(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x56c>
-lea    -0x2c(%ebp),%eax
+mov    -0x4c(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x56d>
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN3nsl15INetWorkHandlerEEEptEv>
 mov    0x4(%eax),%eax
 mov    (%eax),%edx
 add    $0x8,%edx
 mov    (%edx),%edx
 mov    %eax,(%esp)
 call   *%edx
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN3nsl15INetWorkHandlerEEEppEv>
 mov    0x8(%ebp),%eax
 lea    0xbc(%eax),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiPN3nsl15INetWorkHandlerESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN3nsl15INetWorkHandlerEEEneERKS6_>
 test   %al,%al
-jne    <T> <_ZN3nsl14ServiceFactory7startupEv+0x547>
-lea    -0x30(%ebp),%eax
+jne    <T> <_ZN3nsl14ServiceFactory7startupEv+0x548>
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN3nsl10IDBHandlerEEEC1Ev>
 mov    0x8(%ebp),%eax
 lea    0xec(%eax),%edx
-lea    -0x3c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiPN3nsl10IDBHandlerESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 sub    $0x4,%esp
-mov    -0x3c(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-lea    -0x30(%ebp),%eax
+mov    -0x4c(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN3nsl10IDBHandlerEEEptEv>
 mov    0x4(%eax),%eax
 mov    (%eax),%edx
 add    $0x8,%edx
 mov    (%edx),%edx
 mov    %eax,(%esp)
 call   *%edx
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN3nsl13IInterHandlerEEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xd4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiPN3nsl13IInterHandlerESt4lessIiESaISt4pairIKiS2_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN3nsl14ServiceFactory7startupEv+0x640>
+je     <T> <_ZN3nsl14ServiceFactory7startupEv+0x641>
 mov    0x8(%ebp),%eax
 lea    0xd4(%eax),%edx
-lea    -0x3c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiPN3nsl13IInterHandlerESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 sub    $0x4,%esp
-mov    -0x3c(%ebp),%eax
-mov    %eax,-0x34(%ebp)
-lea    -0x34(%ebp),%eax
+mov    -0x4c(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN3nsl13IInterHandlerEEEptEv>
 mov    0x4(%eax),%eax
 mov    (%eax),%edx
 add    $0x8,%edx
 mov    (%edx),%edx
 mov    %eax,(%esp)
 call   *%edx
 movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x673>
+jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x67c>
 mov    -0x1c(%ebp),%edx
 mov    0x8(%ebp),%eax
-add    $0x3c,%edx
+add    $0x4,%edx
 mov    0x14(%eax,%edx,4),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%ecx
 mov    0x8(%ebp),%eax
-add    $0x3c,%ecx
+add    $0x4,%ecx
 mov    0x14(%eax,%ecx,4),%eax
+movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   *%edx
 addl   $0x1,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x130(%eax),%eax
 cmp    -0x1c(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN3nsl14ServiceFactory7startupEv+0x649>
+jne    <T> <_ZN3nsl14ServiceFactory7startupEv+0x64a>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Thread5beginEv>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
 movl   $"TCPThread 구동 성공-%p\n",(%esp)
 call   <T> <printf>
 movl   $"------------------------------------------",(%esp)
 call   <T> <puts>
 movl   $"-\t\tServer Frame Start Ver1.0       -",(%esp)
 call   <T> <puts>
 movl   $"------------------------------------------",(%esp)
 call   <T> <puts>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"----------------------------------------------------------",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"-\t\tServer Frame Start Ver1.0 \t\t\t\t    -",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"----------------------------------------------------------",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog14checkLogServerEv>
 test   %al,%al
-je     <T> <_ZN3nsl14ServiceFactory7startupEv+0x755>
+je     <T> <_ZN3nsl14ServiceFactory7startupEv+0x75e>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"checkLogServer(), write_to_logserver is true",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x772>
+jmp    <T> <_ZN3nsl14ServiceFactory7startupEv+0x77b>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"checkLogServer(), write_to_logserver is false",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    -0x24(%ebp),%eax
+mov    -0x30(%ebp),%eax
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

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: int startup(ServiceFactory * this) */

int __thiscall nsl::ServiceFactory::_ZN3nsl14ServiceFactory7startupEv(ServiceFactory *this)

{
  LogSendThread *pLogSendThread;
  bool bVar1;
  size_t sVar2;
  TraceLog *pTVar3;
  DataPool *this_00;
  Script *pSVar4;
  int iVar5;
  TCPSendThread *pTVar6;
  ActiveConManager *this_01;
  TimerThread *this_02;
  TCPThread *this_03;
  NSLDBThread *pNVar7;
  TCPDispatcher *this_04;
  InterDispatcher *this_05;
  DBDispatcher *this_06;
  WorkThread *this_07;
  pair<const_int,_nsl::INetWorkHandler*> *ppVar8;
  pair<const_int,_nsl::IDBHandler*> *ppVar9;
  pair<const_int,_nsl::IInterHandler*> *ppVar10;
  map<int,_nsl::IDBHandler*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::IDBHandler*>_>_>
  *pmVar11;
  map<int,_nsl::IInterHandler*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::IInterHandler*>_>_>
  *pmVar12;
  _Base_ptr local_40 [2];
  _Rb_tree_iterator<std::pair<const_int,_nsl::IInterHandler*>_> local_38;
  _Rb_tree_iterator<std::pair<const_int,_nsl::IDBHandler*>_> local_34;
  _Rb_tree_iterator<std::pair<const_int,_nsl::INetWorkHandler*>_> local_30;
  map<int,_nsl::INetWorkHandler*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::INetWorkHandler*>_>_>
  local_2c;
  
                    /* Unresolved local var: int ret@[???] */
  puts(&DAT_0815fecc);
  sVar2 = std::
          map<int,_nsl::IInterHandler*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::IInterHandler*>_>_>
          ::size(&(this->super_IHandlers).mInterHandlers);
  printf("%d\n",sVar2);
  local_2c._M_t._M_impl._M_header._M_color = _S_red;
  pTVar3 = G_TraceLog();
  local_2c._M_t._M_impl._M_header._M_color =
       TraceLog::init(pTVar3,this->ServiceFactoryName,this->ServiceConfigName);
  if (-1 < (int)local_2c._M_t._M_impl._M_header._M_color) {
    this_00 = operator_new(0x2c);
                    /* try { // try from 080a9947 to 080a994b has its CatchHandler @ 080a994e */
    DataPool::DataPool(this_00);
    (this->super_DataPools).dataPool_ = this_00;
    pSVar4 = G_Script();
    iVar5 = Script::findIntValue(pSVar4,0,5);
    PortInfo::setUDPPort(&this->super_PortInfo,iVar5);
    pSVar4 = G_Script();
    iVar5 = Script::findIntValue(pSVar4,0,4);
    PortInfo::setTCPPort(&this->super_PortInfo,iVar5);
    pSVar4 = G_Script();
    iVar5 = Script::findIntValue(pSVar4,0,10);
    TCPSocket::SetRecvBufSize(iVar5);
    pSVar4 = G_Script();
    iVar5 = Script::findIntValue(pSVar4,0,0xb);
    TCPSocket::SetSendBufSize(iVar5);
    sVar2 = std::
            map<int,_nsl::IInterHandler*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::IInterHandler*>_>_>
            ::size(&(this->super_IHandlers).mInterHandlers);
    printf("%d\n",sVar2);
    pTVar6 = operator_new(0x8c);
                    /* try { // try from 080a9a43 to 080a9a47 has its CatchHandler @ 080a9a4a */
    TCPSendThread::_ZN3nsl13TCPSendThreadC2Ev(pTVar6);
    (this->super_Threads).threadTCPSend_[0] = pTVar6;
    puts(&DAT_0815feed);
    this_01 = operator_new(0x74);
                    /* try { // try from 080a9a89 to 080a9a8d has its CatchHandler @ 080a9a90 */
    ActiveConManager::ActiveConManager(this_01);
    (this->super_IActiveConManager).activeConManager_ = this_01;
    puts(&DAT_0815ff08);
    this_02 = operator_new(0x8c);
                    /* try { // try from 080a9ad2 to 080a9ad6 has its CatchHandler @ 080a9ad9 */
    TimerThread::_ZN3nsl11TimerThreadC2Ev(this_02);
    (this->super_Threads).threadTimer_ = this_02;
    puts(&DAT_0815ff21);
    pLogSendThread = (this->super_Threads).logSendThread_;
    pTVar3 = G_TraceLog();
    TraceLog::setLogSendThread(pTVar3,pLogSendThread);
    puts(&DAT_0815ff3a);
    this_03 = operator_new(0x18);
                    /* try { // try from 080a9b3b to 080a9b3f has its CatchHandler @ 080a9b42 */
    TCPThread::TCPThread(this_03);
    (this->super_Threads).threadTCP_ = this_03;
    iVar5 = PortInfo::getTCPPort(&this->super_PortInfo);
    TCPThread::setPort((this->super_Threads).threadTCP_,iVar5);
    puts(&DAT_0815ff51);
    puts(&DAT_0815ff68);
    pNVar7 = operator_new(0xbc);
                    /* try { // try from 080a9baa to 080a9bae has its CatchHandler @ 080a9bb1 */
    NSLDBThread::_ZN3nsl11NSLDBThreadC2Ev(pNVar7);
    (this->super_Threads).threadDB_[0] = pNVar7;
    puts(&DAT_0815ff81);
    this_04 = operator_new(8);
    TCPDispatcher::TCPDispatcher(this_04);
    (this->super_Dispatchers).dispatcherTCP = this_04;
    puts("TCPDispatcher has been created...");
    this_05 = operator_new(1);
    InterDispatcher::InterDispatcher(this_05);
    (this->super_Dispatchers).mpInterDispatcher = this_05;
    puts("InterDispatcher has been created...");
    this_06 = operator_new(1);
    DBDispatcher::DBDispatcher(this_06);
    (this->super_Dispatchers).dispatcherDB = this_06;
    puts(&DAT_0815ffe4);
    puts(&DAT_0815fffe);
    pTVar3 = G_TraceLog();
    TraceLog::sysLog(pTVar3,0,&DAT_0815fffe);
    (this->super_Threads).mWorkThreadNum = 1;
                    /* Unresolved local var: int i@[???] */
    for (local_2c._M_t._M_impl._M_header._M_parent = (_Base_ptr)0x0;
        (int)local_2c._M_t._M_impl._M_header._M_parent < (this->super_Threads).mWorkThreadNum;
        local_2c._M_t._M_impl._M_header._M_parent =
             (_Base_ptr)((int)&(local_2c._M_t._M_impl._M_header._M_parent)->_M_color + 1)) {
      this_07 = operator_new(200);
                    /* try { // try from 080a9cb7 to 080a9cbb has its CatchHandler @ 080a9cbe */
      WorkThread::_ZN3nsl10WorkThreadC2Ei(this_07,(int)local_2c._M_t._M_impl._M_header._M_parent);
      (this->super_Threads).threadWork_[(int)local_2c._M_t._M_impl._M_header._M_parent] = this_07;
      Thread::begin(&(this->super_Threads).threadWork_
                     [(int)local_2c._M_t._M_impl._M_header._M_parent]->super_Thread);
      printf(&DAT_08160016,local_2c._M_t._M_impl._M_header._M_parent);
    }
    TSystem<nsl::LinuxSystem>::sleep(2000);
    printf(&DAT_08160034,(this->super_Threads).threadDB_[0]);
    Thread::begin(&(this->super_Threads).threadDB_[0]->super_Thread);
    pNVar7 = (this->super_Threads).threadDB_[0];
    pTVar3 = G_TraceLog();
    TraceLog::sysLog(pTVar3,0,&DAT_08160053,pNVar7);
    Thread::begin(&(this->super_Threads).threadTCPSend_[0]->super_Thread);
    pTVar6 = (this->super_Threads).threadTCPSend_[0];
    pTVar3 = G_TraceLog();
    TraceLog::sysLog(pTVar3,0,&DAT_08160074,pTVar6);
    Thread::begin(&((this->super_Threads).threadTimer_)->super_Thread);
    printf(&DAT_08160094,(this->super_Threads).threadTimer_);
                    /* Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_int,_nsl::INetWorkHandler*>_> iter@[???] */
    std::_Rb_tree_iterator<std::pair<const_int,_nsl::INetWorkHandler*>_>::_Rb_tree_iterator
              (&local_30);
    std::
    map<int,_nsl::INetWorkHandler*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::INetWorkHandler*>_>_>
    ::begin((map<int,_nsl::INetWorkHandler*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::INetWorkHandler*>_>_>
             *)local_40);
    local_30._M_node = local_40[0];
    while( true ) {
      std::
      map<int,_nsl::INetWorkHandler*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::INetWorkHandler*>_>_>
      ::end(&local_2c);
      bVar1 = std::_Rb_tree_iterator<std::pair<const_int,_nsl::INetWorkHandler*>_>::operator!=
                        (&local_30,
                         (_Rb_tree_iterator<std::pair<const_int,_nsl::INetWorkHandler*>_> *)
                         &local_2c);
      if (!bVar1) break;
      ppVar8 = std::_Rb_tree_iterator<std::pair<const_int,_nsl::INetWorkHandler*>_>::operator->
                         (&local_30);
      (*(ppVar8->second->super_IHandler)._vptr_IHandler[2])(ppVar8->second);
      std::_Rb_tree_iterator<std::pair<const_int,_nsl::INetWorkHandler*>_>::operator++(&local_30);
    }
                    /* Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_int,_nsl::IDBHandler*>_> iter@[???] */
    std::_Rb_tree_iterator<std::pair<const_int,_nsl::IDBHandler*>_>::_Rb_tree_iterator(&local_34);
    pmVar11 = &(this->super_IHandlers).mDBHandlers;
    std::
    map<int,_nsl::IDBHandler*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::IDBHandler*>_>_>
    ::begin((map<int,_nsl::IDBHandler*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::IDBHandler*>_>_>
             *)local_40);
    local_34._M_node = local_40[0];
    ppVar9 = std::_Rb_tree_iterator<std::pair<const_int,_nsl::IDBHandler*>_>::operator->(&local_34);
    (*(ppVar9->second->super_IHandler)._vptr_IHandler[2])(ppVar9->second,pmVar11);
                    /* Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_int,_nsl::IInterHandler*>_> iter@[???] */
    std::_Rb_tree_iterator<std::pair<const_int,_nsl::IInterHandler*>_>::_Rb_tree_iterator(&local_38)
    ;
    bVar1 = std::
            map<int,_nsl::IInterHandler*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::IInterHandler*>_>_>
            ::empty(&(this->super_IHandlers).mInterHandlers);
    if (!bVar1) {
      pmVar12 = &(this->super_IHandlers).mInterHandlers;
      std::
      map<int,_nsl::IInterHandler*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::IInterHandler*>_>_>
      ::begin((map<int,_nsl::IInterHandler*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::IInterHandler*>_>_>
               *)local_40);
      local_38._M_node = local_40[0];
      ppVar10 = std::_Rb_tree_iterator<std::pair<const_int,_nsl::IInterHandler*>_>::operator->
                          (&local_38);
      (*(ppVar10->second->super_IHandler)._vptr_IHandler[2])(ppVar10->second,pmVar12);
    }
                    /* Unresolved local var: int i@[???] */
    for (local_2c._M_t._M_impl._M_header._M_left = (_Base_ptr)0x0;
        (int)local_2c._M_t._M_impl._M_header._M_left < (this->super_IHandlers).mTimeHandlerNum;
        local_2c._M_t._M_impl._M_header._M_left =
             (_Base_ptr)((int)&(local_2c._M_t._M_impl._M_header._M_left)->_M_color + 1)) {
      (*((this->super_Threads).threadWork_[(int)&local_2c._M_t._M_impl._M_header._M_left[3]._M_left]
        ->super_Thread)._vptr_Thread[2])
                ((this->super_Threads).threadWork_
                 [(int)&local_2c._M_t._M_impl._M_header._M_left[3]._M_left]);
    }
    Thread::begin(&((this->super_Threads).threadTCP_)->super_Thread);
    printf(&DAT_081600ae,(this->super_Threads).threadTCP_);
    puts("------------------------------------------");
    puts("-\t\tServer Frame Start Ver1.0       -");
    puts("------------------------------------------");
    pTVar3 = G_TraceLog();
    TraceLog::sysLog(pTVar3,5,"----------------------------------------------------------");
    pTVar3 = G_TraceLog();
    TraceLog::sysLog(pTVar3,5,"-\t\tServer Frame Start Ver1.0 \t\t\t\t    -");
    pTVar3 = G_TraceLog();
    TraceLog::sysLog(pTVar3,5,"----------------------------------------------------------");
    pTVar3 = G_TraceLog();
    bVar1 = TraceLog::checkLogServer(pTVar3);
    if (bVar1) {
      pTVar3 = G_TraceLog();
      TraceLog::sysLog(pTVar3,0,"checkLogServer(), write_to_logserver is true");
    }
    else {
      pTVar3 = G_TraceLog();
      TraceLog::sysLog(pTVar3,0,"checkLogServer(), write_to_logserver is false");
    }
  }
  return local_2c._M_t._M_impl._M_header._M_color;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/Reactor.h](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/Reactor.h)（约第 40 行）：

```cpp
    void startup()
    {
        if (this->max_client_ < 1)
        {
            throw Exception(-1, "[EpollReactor< TSession >::Init] Invalid parameter : max_client(%d)\n", this->max_client_);
        }
        this->epoll_fd_ = epoll_create(this->max_client_);
        if (this->epoll_fd_ == -1)
        {
            printf("[EpollReactor< TSession >::Init] Can't create epoll device : max_client(%d)\n", this->max_client_);
        }
        this->events_ = new epoll_event[this->max_client_];
        if (this->events_ == NULL)
        {
            printf("[EpollReactor< TSession >::Init] Can't allocate epoll repository : max_client(%d)\n", this->max_client_);
        }
    }
```
