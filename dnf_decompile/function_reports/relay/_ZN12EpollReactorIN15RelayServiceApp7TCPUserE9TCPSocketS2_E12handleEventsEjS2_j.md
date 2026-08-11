# _ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j

`EpollReactor<RelayServiceApp::TCPUser, TCPSocket, TCPSocket>::handleEvents(unsigned int, TCPSocket, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805c158` | `0x5cf` | `0x804fca4` | `0x5d8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,443 +1,441 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x50,%esp
-movl   $0x1,-0x34(%ebp)
+sub    $0x64,%esp
+movl   $0x1,-0x38(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
-mov    %eax,-0x30(%ebp)
+mov    %eax,-0x34(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 mov    0x8(%ebp),%edx
 mov    0x1c(%edx),%edx
-lea    -0x34(%ebp),%ecx
+lea    -0x38(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <epoll_ctl>
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4c>
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b>
 nop
 movl   $0x1,(%esp)
 call   <T> <_ZN7TSystemI11LinuxSystemE6usleepEi>
 mov    0xc(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    0x24(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    %ebx,0xc(%esp)
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <epoll_wait>
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp12RelayService7setTickEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp12RelayService7makeLogEv>
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4c3>
-cmpl   $0x0,-0x1c(%ebp)
-jns    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0xbd>
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4cd>
+cmpl   $0x0,-0x20(%ebp)
+jns    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0xbc>
 nop
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4c>
-mov    $0x0,%ebx
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b3>
-mov    0x8(%ebp),%eax
-mov    0x24(%eax),%ecx
-mov    %ebx,%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-mov    0x4(%eax),%esi
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b>
+movl   $0x0,-0x18(%ebp)
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4bc>
+mov    0x8(%ebp),%eax
+mov    0x24(%eax),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x4(%eax),%ebx
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
-cmp    %eax,%esi
+cmp    %eax,%ebx
 sete   %al
 test   %al,%al
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x343>
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x345>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0xf4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp9UserPools15createTCPSocketEv>
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
-jne    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x128>
+jne    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x12a>
 movl   $"[CRITICAL] Reactor.inl: createTCPSocket() Error",(%esp)
 call   <T> <_Z8WriteLogPKc>
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b0>
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b8>
 mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket6acceptERS_>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x172>
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x174>
 movl   $"Reactor.inl: listenSocket.accept() Error",(%esp)
 call   <T> <_Z8WriteLogPKc>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 lea    0xf4(%eax),%edx
 mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN15RelayServiceApp9UserPools16destroyTCPSocketEP9TCPSocket>
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b0>
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b8>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0x24,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp5Users12getUserCountEv>
-mov    %eax,%esi
+mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0x24,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp5Users15getMaxUserCountEv>
-cmp    %eax,%esi
+cmp    %eax,%ebx
 setge  %al
 test   %al,%al
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x1d9>
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x1db>
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket5closeEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 lea    0xf4(%eax),%edx
 mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN15RelayServiceApp9UserPools16destroyTCPSocketEP9TCPSocket>
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b0>
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b8>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0xf4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp9UserPools13createTCPUserEv>
-mov    %eax,-0x44(%ebp)
-mov    -0x44(%ebp),%eax
+mov    %eax,-0x48(%ebp)
+mov    -0x48(%ebp),%eax
 test   %eax,%eax
-jne    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x237>
+jne    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x239>
 movl   $"Reactor.inl: createTCPUser() Error",(%esp)
 call   <T> <_Z8WriteLogPKc>
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket5closeEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 lea    0xf4(%eax),%edx
 mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN15RelayServiceApp9UserPools16destroyTCPSocketEP9TCPSocket>
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b0>
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b8>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0x24,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp5Users17increaseUserCountEv>
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket14setOptNonBlockEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
-mov    -0x44(%ebp),%edx
+mov    -0x48(%ebp),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10setManagerEPS1_>
-mov    -0x44(%ebp),%eax
+mov    -0x48(%ebp),%eax
 mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser9setSocketEP9TCPSocket>
-mov    -0x44(%ebp),%eax
+mov    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser21startupAfterSetSocketEv>
-mov    -0x44(%ebp),%eax
+mov    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser17setLastAccessTimeEv>
-mov    -0x44(%ebp),%eax
+mov    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser8onAcceptEv>
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E20getNativeEventFilterEj>
+mov    %eax,-0x44(%ebp)
+mov    -0x48(%ebp),%eax
 mov    %eax,-0x40(%ebp)
-mov    -0x44(%ebp),%eax
-mov    %eax,-0x3c(%ebp)
-mov    -0x44(%ebp),%eax
+mov    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser9getHandleEv>
 mov    0x8(%ebp),%edx
 mov    0x1c(%edx),%edx
-lea    -0x40(%ebp),%ecx
+lea    -0x44(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <epoll_ctl>
 shr    $0x1f,%eax
 test   %al,%al
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x303>
-mov    -0x44(%ebp),%eax
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x305>
+mov    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser7onCloseEv>
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b0>
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b8>
 mov    0x8(%ebp),%eax
 add    $0x28,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TThreadLockI16ThreadLock_linuxE4lockEv>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%ecx
-lea    -0x28(%ebp),%eax
-lea    -0x44(%ebp),%edx
+lea    -0x2c(%ebp),%eax
+lea    -0x48(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3setIPN15RelayServiceApp7TCPUserESt4lessIS2_ESaIS2_EE6insertERKS2_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 add    $0x28,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TThreadLockI16ThreadLock_linuxE6unlockEv>
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b0>
-mov    0x8(%ebp),%eax
-mov    0x24(%eax),%ecx
-mov    %ebx,%edx
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b8>
+mov    0x8(%ebp),%eax
+mov    0x24(%eax),%ecx
+mov    -0x18(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    0x4(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
-cmp    %eax,%esi
+mov    %eax,%ebx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
+cmp    %eax,%ebx
 setne  %al
 test   %al,%al
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x3a9>
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x3ad>
 movl   $"[CRITICAL] Reactor.inl: abnormal connection",(%esp)
 call   <T> <_Z8WriteLogPKc>
 mov    0x8(%ebp),%eax
 mov    0x24(%eax),%ecx
-mov    %ebx,%edx
+mov    -0x18(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <close>
 mov    0x8(%ebp),%eax
 mov    0x24(%eax),%ecx
-mov    %ebx,%edx
+mov    -0x18(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x8,%eax
 test   %eax,%eax
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x3d6>
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x3db>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser7onCloseEv>
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b0>
-mov    0x8(%ebp),%eax
-mov    0x24(%eax),%ecx
-mov    %ebx,%edx
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b8>
+mov    0x8(%ebp),%eax
+mov    0x24(%eax),%ecx
+mov    -0x18(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x10,%eax
 test   %eax,%eax
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x403>
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x409>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser7onCloseEv>
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b0>
-mov    0x8(%ebp),%eax
-mov    0x24(%eax),%ecx
-mov    %ebx,%edx
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b8>
+mov    0x8(%ebp),%eax
+mov    0x24(%eax),%ecx
+mov    -0x18(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x43a>
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x441>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser6onReadEv>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser14isDisconnectedEv>
 test   %al,%al
-jne    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4ac>
-mov    0x8(%ebp),%eax
-mov    0x24(%eax),%ecx
-mov    %ebx,%edx
+jne    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b4>
+mov    0x8(%ebp),%eax
+mov    0x24(%eax),%ecx
+mov    -0x18(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x46d>
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x475>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser9isToWriteEv>
 test   %al,%al
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x46d>
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x475>
 mov    $0x1,%eax
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x472>
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x47a>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x490>
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x498>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser7onWriteEv>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser14isDisconnectedEv>
 test   %al,%al
-jne    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4af>
+jne    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b7>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser19isAboutToDisconnectEv>
 test   %al,%al
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b0>
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b8>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser7onCloseEv>
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b0>
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b8>
 nop
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b0>
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b8>
 nop
-add    $0x1,%ebx
-cmp    -0x1c(%ebp),%ebx
+addl   $0x1,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
+cmp    -0x20(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0xc7>
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4c4>
-nop
+jne    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0xc8>
 mov    0x8(%ebp),%eax
 add    $0x28,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TThreadLockI16ThreadLock_linuxE4lockEv>
-movb   $0x1,-0x15(%ebp)
+movb   $0x1,-0x19(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3setIPN15RelayServiceApp7TCPUserESt4lessIS2_ESaIS2_EE4sizeEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x5b2>
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x5bb>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3setIPN15RelayServiceApp7TCPUserESt4lessIS2_ESaIS2_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x57d>
-lea    -0x48(%ebp),%eax
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x586>
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorIPN15RelayServiceApp7TCPUserEEdeEv>
 mov    (%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x5b1>
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x5ba>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser19isAboutToDisconnectEv>
 test   %al,%al
-jne    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x543>
+jne    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x54c>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser6isIdleEv>
 test   %al,%al
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x54a>
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x553>
 mov    $0x1,%eax
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x54f>
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x558>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x572>
-movb   $0x0,-0x15(%ebp)
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x57b>
+movb   $0x0,-0x19(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x28,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TThreadLockI16ThreadLock_linuxE6unlockEv>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser7onCloseEv>
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x5b2>
-lea    -0x48(%ebp),%eax
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x5bb>
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorIPN15RelayServiceApp7TCPUserEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3setIPN15RelayServiceApp7TCPUserESt4lessIS2_ESaIS2_EE3endEv>
 sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorIPN15RelayServiceApp7TCPUserEEneERKS3_>
 test   %al,%al
-jne    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x50b>
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x5b2>
+jne    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x514>
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x5bb>
 nop
-cmpb   $0x0,-0x15(%ebp)
-je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b>
+cmpb   $0x0,-0x19(%ebp)
+je     <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4a>
 mov    0x8(%ebp),%eax
 add    $0x28,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TThreadLockI16ThreadLock_linuxE6unlockEv>
-jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4c>
+jmp    <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j+0x4b>
```
## 2. Ghidra 反编译 C

```c

/* EpollReactor<RelayServiceApp::TCPUser, TCPSocket, TCPSocket>::handleEvents(unsigned int,
   TCPSocket, unsigned int) */

void __thiscall
EpollReactor<RelayServiceApp::TCPUser,TCPSocket,TCPSocket>::
_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j
          (EpollReactor<RelayServiceApp::TCPUser,TCPSocket,TCPSocket> *this,int param_1,
          TCPSocket *param_3,uint param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RelayService *pRVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  set<RelayServiceApp::TCPUser*,std::less<RelayServiceApp::TCPUser*>,std::allocator<RelayServiceApp::TCPUser*>>
  local_4c [4];
  TManager<RelayServiceApp::RelayService> *local_48;
  epoll_event local_44;
  epoll_event local_38;
  TCPUser *local_2c [2];
  set<RelayServiceApp::TCPUser*,std::less<RelayServiceApp::TCPUser*>,std::allocator<RelayServiceApp::TCPUser*>>
  local_24 [4];
  int local_20;
  char local_19;
  TCPSocket *local_18;
  TManager<RelayServiceApp::RelayService> *local_14;
  TCPUser *local_10;
  
  local_38.events = 1;
  local_38.data.ptr = (void *)TCPSocket::getHandle(param_3);
  iVar3 = TCPSocket::getHandle(param_3);
  epoll_ctl(*(int *)(this + 0x1c),1,iVar3,&local_38);
LAB_0805c1a4:
  TSystem<LinuxSystem>::usleep(1);
  local_20 = epoll_wait(*(int *)(this + 0x1c),*(epoll_event **)(this + 0x24),*(int *)(this + 0x20),
                        param_1);
  pRVar4 = (RelayService *)
           TManager<RelayServiceApp::RelayService>::getManager
                     ((TManager<RelayServiceApp::RelayService> *)this);
  RelayServiceApp::RelayService::setTick(pRVar4);
  pRVar4 = (RelayService *)
           TManager<RelayServiceApp::RelayService>::getManager
                     ((TManager<RelayServiceApp::RelayService> *)this);
  RelayServiceApp::RelayService::makeLog(pRVar4);
  if (local_20 != 0) goto code_r0x0805c20c;
  goto LAB_0805c61c;
code_r0x0805c20c:
  if (-1 < local_20) {
    for (iVar3 = 0; iVar3 < local_20; iVar3 = iVar3 + 1) {
      iVar6 = *(int *)(*(int *)(this + 0x24) + iVar3 * 0xc + 4);
      iVar5 = TCPSocket::getHandle(param_3);
      if (iVar6 == iVar5) {
        iVar6 = TManager<RelayServiceApp::RelayService>::getManager
                          ((TManager<RelayServiceApp::RelayService> *)this);
        local_18 = (TCPSocket *)
                   RelayServiceApp::UserPools::createTCPSocket((UserPools *)(iVar6 + 0xf4));
        if (local_18 == (TCPSocket *)0x0) {
          WriteLog("[CRITICAL] Reactor.inl: createTCPSocket() Error");
        }
        else {
          cVar2 = TCPSocket::accept(param_3,local_18);
          if (cVar2 == '\x01') {
            iVar6 = TManager<RelayServiceApp::RelayService>::getManager
                              ((TManager<RelayServiceApp::RelayService> *)this);
            iVar6 = RelayServiceApp::Users::getUserCount((Users *)(iVar6 + 0x24));
            iVar5 = TManager<RelayServiceApp::RelayService>::getManager
                              ((TManager<RelayServiceApp::RelayService> *)this);
            iVar5 = RelayServiceApp::Users::getMaxUserCount((Users *)(iVar5 + 0x24));
            if (iVar6 < iVar5) {
              iVar6 = TManager<RelayServiceApp::RelayService>::getManager
                                ((TManager<RelayServiceApp::RelayService> *)this);
              local_48 = (TManager<RelayServiceApp::RelayService> *)
                         RelayServiceApp::UserPools::createTCPUser((UserPools *)(iVar6 + 0xf4));
              if (local_48 == (TManager<RelayServiceApp::RelayService> *)0x0) {
                WriteLog("Reactor.inl: createTCPUser() Error");
                TCPSocket::close(local_18);
                iVar6 = TManager<RelayServiceApp::RelayService>::getManager
                                  ((TManager<RelayServiceApp::RelayService> *)this);
                RelayServiceApp::UserPools::destroyTCPSocket((UserPools *)(iVar6 + 0xf4),local_18);
              }
              else {
                iVar6 = TManager<RelayServiceApp::RelayService>::getManager
                                  ((TManager<RelayServiceApp::RelayService> *)this);
                RelayServiceApp::Users::increaseUserCount((Users *)(iVar6 + 0x24));
                TCPSocket::setOptNonBlock(local_18);
                pRVar4 = (RelayService *)
                         TManager<RelayServiceApp::RelayService>::getManager
                                   ((TManager<RelayServiceApp::RelayService> *)this);
                TManager<RelayServiceApp::RelayService>::setManager(local_48,pRVar4);
                RelayServiceApp::TCPUser::setSocket((TCPUser *)local_48,local_18);
                RelayServiceApp::TCPUser::startupAfterSetSocket((TCPUser *)local_48);
                RelayServiceApp::TCPUser::setLastAccessTime((TCPUser *)local_48);
                RelayServiceApp::TCPUser::onAccept((TCPUser *)local_48);
                local_44.events = getNativeEventFilter(this,param_4);
                local_44.data.ptr = local_48;
                iVar6 = RelayServiceApp::TCPUser::getHandle((TCPUser *)local_48);
                iVar6 = epoll_ctl(*(int *)(this + 0x1c),1,iVar6,&local_44);
                if (iVar6 < 0) {
                  RelayServiceApp::TCPUser::onClose((TCPUser *)local_48);
                }
                else {
                  TThreadLock<ThreadLock_linux>::lock
                            ((TThreadLock<ThreadLock_linux> *)(this + 0x28));
                  std::
                  set<RelayServiceApp::TCPUser*,std::less<RelayServiceApp::TCPUser*>,std::allocator<RelayServiceApp::TCPUser*>>
                  ::insert(local_2c);
                  TThreadLock<ThreadLock_linux>::unlock
                            ((TThreadLock<ThreadLock_linux> *)(this + 0x28));
                }
              }
            }
            else {
              TCPSocket::close(local_18);
              iVar6 = TManager<RelayServiceApp::RelayService>::getManager
                                ((TManager<RelayServiceApp::RelayService> *)this);
              RelayServiceApp::UserPools::destroyTCPSocket((UserPools *)(iVar6 + 0xf4),local_18);
            }
          }
          else {
            WriteLog("Reactor.inl: listenSocket.accept() Error");
            iVar6 = TManager<RelayServiceApp::RelayService>::getManager
                              ((TManager<RelayServiceApp::RelayService> *)this);
            RelayServiceApp::UserPools::destroyTCPSocket((UserPools *)(iVar6 + 0xf4),local_18);
          }
        }
      }
      else {
        local_14 = *(TManager<RelayServiceApp::RelayService> **)
                    (*(int *)(this + 0x24) + iVar3 * 0xc + 4);
        iVar6 = TManager<RelayServiceApp::RelayService>::getManager(local_14);
        iVar5 = TManager<RelayServiceApp::RelayService>::getManager
                          ((TManager<RelayServiceApp::RelayService> *)this);
        if (iVar6 != iVar5) {
          WriteLog("[CRITICAL] Reactor.inl: abnormal connection");
          close(*(int *)(*(int *)(this + 0x24) + iVar3 * 0xc + 4));
        }
        if ((*(uint *)(*(int *)(this + 0x24) + iVar3 * 0xc) & 8) == 0) {
          if ((*(uint *)(*(int *)(this + 0x24) + iVar3 * 0xc) & 0x10) == 0) {
            if ((*(uint *)(*(int *)(this + 0x24) + iVar3 * 0xc) & 1) != 0) {
              RelayServiceApp::TCPUser::onRead((TCPUser *)local_14);
              cVar2 = RelayServiceApp::TCPUser::isDisconnected((TCPUser *)local_14);
              if (cVar2 != '\0') goto LAB_0805c608;
            }
            if (((*(uint *)(*(int *)(this + 0x24) + iVar3 * 0xc) & 4) == 0) ||
               (cVar2 = RelayServiceApp::TCPUser::isToWrite((TCPUser *)local_14), cVar2 == '\0')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              RelayServiceApp::TCPUser::onWrite((TCPUser *)local_14);
              cVar2 = RelayServiceApp::TCPUser::isDisconnected((TCPUser *)local_14);
              if (cVar2 != '\0') goto LAB_0805c608;
            }
            cVar2 = RelayServiceApp::TCPUser::isAboutToDisconnect((TCPUser *)local_14);
            if (cVar2 != '\0') {
              RelayServiceApp::TCPUser::onClose((TCPUser *)local_14);
            }
          }
          else {
            RelayServiceApp::TCPUser::onClose((TCPUser *)local_14);
          }
        }
        else {
          RelayServiceApp::TCPUser::onClose((TCPUser *)local_14);
        }
      }
LAB_0805c608:
    }
LAB_0805c61c:
    TThreadLock<ThreadLock_linux>::lock((TThreadLock<ThreadLock_linux> *)(this + 0x28));
    local_19 = '\x01';
    iVar3 = std::
            set<RelayServiceApp::TCPUser*,std::less<RelayServiceApp::TCPUser*>,std::allocator<RelayServiceApp::TCPUser*>>
            ::size((set<RelayServiceApp::TCPUser*,std::less<RelayServiceApp::TCPUser*>,std::allocator<RelayServiceApp::TCPUser*>>
                    *)(this + 4));
    if (iVar3 != 0) {
      std::
      set<RelayServiceApp::TCPUser*,std::less<RelayServiceApp::TCPUser*>,std::allocator<RelayServiceApp::TCPUser*>>
      ::begin(local_4c);
      while( true ) {
        std::
        set<RelayServiceApp::TCPUser*,std::less<RelayServiceApp::TCPUser*>,std::allocator<RelayServiceApp::TCPUser*>>
        ::end(local_24);
        cVar2 = std::_Rb_tree_const_iterator<RelayServiceApp::TCPUser*>::operator!=
                          ((_Rb_tree_const_iterator<RelayServiceApp::TCPUser*> *)local_4c,
                           (_Rb_tree_const_iterator *)local_24);
        if (cVar2 == '\0') break;
        puVar7 = (undefined4 *)
                 std::_Rb_tree_const_iterator<RelayServiceApp::TCPUser*>::operator*
                           ((_Rb_tree_const_iterator<RelayServiceApp::TCPUser*> *)local_4c);
        local_10 = (TCPUser *)*puVar7;
        if (local_10 == (TCPUser *)0x0) break;
        cVar2 = RelayServiceApp::TCPUser::isAboutToDisconnect(local_10);
        if ((cVar2 == '\0') && (cVar2 = RelayServiceApp::TCPUser::isIdle(local_10), cVar2 == '\0'))
        {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_19 = '\0';
          TThreadLock<ThreadLock_linux>::unlock((TThreadLock<ThreadLock_linux> *)(this + 0x28));
          RelayServiceApp::TCPUser::onClose(local_10);
          break;
        }
        std::_Rb_tree_const_iterator<RelayServiceApp::TCPUser*>::operator++
                  ((_Rb_tree_const_iterator<RelayServiceApp::TCPUser*> *)local_4c);
      }
    }
    if (local_19 != '\0') {
      TThreadLock<ThreadLock_linux>::unlock((TThreadLock<ThreadLock_linux> *)(this + 0x28));
    }
  }
  goto LAB_0805c1a4;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/ChannelOld/DNFChannelServer/Reactor.cpp, source/DNFServer/GameServer/Relay/Reactor.cpp, source/ChannelOld/DNFChannelServer/ChannelService.h, source/ChannelOld/DNFChannelServer/ChannelServiceApp.h, source/ChannelOld/DNFChannelServer/CheckThread.h, source/ChannelOld/DNFChannelServer/CommandLineParser.h, source/ChannelOld/DNFChannelServer/DebugLog.h, source/ChannelOld/DNFChannelServer/DNFChannelServer.h 等 280 个文件*
