# _ZN14CNetworkThread8dispatchEPv

`CNetworkThread::dispatch(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x8059544` | `0x7b6` | `0x80518fa` | `0x7b4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,573 +1,572 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x9c,%esp
 mov    0x8(%ebp),%eax
 add    $0x10,%eax
 test   %eax,%eax
 je     <T> <_ZN14CNetworkThread8dispatchEPv+0x2e>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN14CNetworkThread8dispatchEPv+0x2e>
 mov    0x8(%ebp),%eax
 add    $0x38,%eax
 test   %eax,%eax
 jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x107>
 lea    -0x55(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x55(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"NetworkThread is Not Ready!\n",0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x5c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0xad>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0xa7>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CNetworkThread8dispatchEPv+0xcc>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0xcc>
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0xe4>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CNetworkThread8dispatchEPv+0xcc>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x55(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x583>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x581>
 lea    -0x55(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $0x0,0x4(%esp)
 movl   $0x5,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
 movl   $"Network Thread Start!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x8(%eax)
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x56b>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x569>
 mov    0x8(%ebp),%eax
 mov    0x60(%eax),%eax
 mov    %eax,0x4(%esp)
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 movl   $0x204,(%esp)
 call   <T> <_ZN14CUdpRecvBuffernwEj>
 mov    %eax,-0x60(%ebp)
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 movl   $0x200,-0x64(%ebp)
 movw   $0x0,-0x66(%ebp)
 movl   $0x0,-0x6c(%ebp)
 mov    -0x60(%ebp),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 lea    -0x66(%ebp),%ecx
 mov    %ecx,0x10(%esp)
 lea    -0x6c(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 lea    -0x64(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x1c0>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x583>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14CNetworkThread8dispatchEPv+0x215>
+je     <T> <_ZN14CNetworkThread8dispatchEPv+0x213>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x1c7>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x581>
 mov    0x8(%ebp),%eax
 mov    0x60(%eax),%eax
 mov    %eax,0x4(%esp)
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x205>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x583>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x569>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x56b>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x581>
 mov    -0x60(%ebp),%eax
 mov    %eax,-0x24(%ebp)
 mov    -0x24(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
 mov    -0x64(%ebp),%eax
 cmp    %eax,%edx
-je     <T> <_ZN14CNetworkThread8dispatchEPv+0x2d6>
+je     <T> <_ZN14CNetworkThread8dispatchEPv+0x2d4>
 mov    -0x24(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%edi
 mov    -0x64(%ebp),%esi
 mov    -0x24(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%ebx
 movl   $0x6f,0x8(%esp)
 movl   $&_ZZN14CNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
 movl   $"./log/recvErr",0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x60(%eax),%eax
 mov    %eax,0x4(%esp)
 lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x2c6>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x2c4>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x583>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x581>
 lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x56b>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x569>
 mov    -0x24(%ebp),%eax
 movzwl 0x2(%eax),%eax
 cmp    $0x1ff,%ax
-jbe    <T> <_ZN14CNetworkThread8dispatchEPv+0x38d>
+jbe    <T> <_ZN14CNetworkThread8dispatchEPv+0x38b>
 mov    -0x24(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%edi
 mov    -0x64(%ebp),%esi
 mov    -0x24(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%ebx
 movl   $0x7a,0x8(%esp)
 movl   $&_ZZN14CNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
 movl   $"./log/recvErr",0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x60(%eax),%eax
 mov    %eax,0x4(%esp)
 lea    -0x7c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x37d>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x37b>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x7c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x583>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x581>
 lea    -0x7c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x56b>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x569>
 mov    -0x64(%ebp),%eax
 cmp    $0x200,%eax
-jbe    <T> <_ZN14CNetworkThread8dispatchEPv+0x441>
+jbe    <T> <_ZN14CNetworkThread8dispatchEPv+0x43f>
 mov    -0x24(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%edi
 mov    -0x64(%ebp),%esi
 mov    -0x24(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%ebx
 movl   $0x86,0x8(%esp)
 movl   $&_ZZN14CNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
 movl   $"./log/recvErr",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x60(%eax),%eax
 mov    %eax,0x4(%esp)
 lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x431>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x42f>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x583>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x581>
 lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x56b>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x569>
 mov    -0x24(%ebp),%eax
 mov    0x6(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x46e>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x46c>
 mov    -0x24(%ebp),%eax
 mov    0x6(%eax),%edx
 mov    -0x24(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"id(%d), m_id(%d)",(%esp)
 call   <T> <printf>
 mov    -0x24(%ebp),%eax
 mov    0x6(%eax),%ecx
 mov    $0xcccccccd,%edx
 mov    %ecx,%eax
 mul    %edx
 shr    $0x3,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 mov    %edx,-0x20(%ebp)
 mov    -0x20(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0xc,%edx
 mov    0x8(%eax,%edx,4),%eax
 mov    %eax,0x4(%esp)
 lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    -0x20(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0x4,%edx
 mov    (%eax,%edx,4),%eax
 lea    -0x60(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4pushERKS1_>
 mov    -0x20(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0x4,%edx
 mov    (%eax,%edx,4),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
 cmp    $0x64,%eax
 seta   %al
 test   %al,%al
-je     <T> <_ZN14CNetworkThread8dispatchEPv+0x55d>
+je     <T> <_ZN14CNetworkThread8dispatchEPv+0x55b>
 mov    -0x20(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0x4,%edx
 mov    (%eax,%edx,4),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
 mov    %eax,%ebx
 movl   $0xa3,0x8(%esp)
 movl   $&_ZZN14CNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x10(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"idx(%d) cnt(%d)",0x8(%esp)
 movl   $"./log/recv",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x55d>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x55b>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x583>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x581>
 lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    0x8(%ebp),%eax
 movzbl 0x8(%eax),%eax
 test   %al,%al
 jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x133>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x7ab>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x7a9>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x6a8>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x6a6>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,0x4(%esp)
 movl   $"CNetworkThread::dispatch() 예외 발생 : %s\n",(%esp)
 call   <T> <printf>
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x34(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x638>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x636>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x632>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x630>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x657>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x655>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x657>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x655>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x66c>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x66a>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x657>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x655>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x693>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x691>
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CNetworkThread::dispatch() 예외 발생",(%esp)
 call   <T> <puts>
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x25(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x2c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x73b>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x739>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x735>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x733>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x75a>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x758>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x75a>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x758>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x76f>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x76d>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x75a>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x758>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x796>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x794>
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 add    $0x9c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CNetworkThread::dispatch(void*) */

void CNetworkThread::_ZN14CNetworkThread8dispatchEPv(void *param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  CDNFException *this;
  uint uVar4;
  undefined4 uVar5;
  CMutex *pCVar6;
  CGuard<CMutex> local_88 [4];
  CGuard<CMutex> local_84 [4];
  CGuard<CMutex> local_80 [4];
  CGuard<CMutex> local_7c [4];
  CGuard<CMutex> local_78 [4];
  CGuard<CMutex> local_74 [4];
  uint local_70;
  ushort local_6a;
  uint local_68;
  CUdpRecvBuffer *local_64;
  string local_60 [7];
  allocator local_59;
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  CUdpRecvBuffer *local_28;
  uint local_24;
  
  if (((param_1 != (void *)0xfffffff0) && (*(int *)((int)param_1 + 0xc) != 0)) &&
     (param_1 != (void *)0xffffffc8)) {
    DNFFLib::Sleep_Ext(5,0);
    puts("Network Thread Start!");
    *(undefined1 *)((int)param_1 + 8) = 1;
    while (*(char *)((int)param_1 + 8) != '\0') {
      pCVar6 = *(CMutex **)((int)param_1 + 0x60);
      CGuard<CMutex>::CGuard(local_74,pCVar6);
                    /* try { // try from 08059693 to 08059697 has its CatchHandler @ 080596e8 */
      local_64 = CUdpRecvBuffer::operator_new((CUdpRecvBuffer *)0x204,(uint)pCVar6);
      CGuard<CMutex>::~CGuard(local_74);
      local_68 = 0x200;
      local_6a = 0;
      local_70 = 0;
                    /* try { // try from 080596e1 to 080596e5 has its CatchHandler @ 08059ac3 */
      cVar3 = CUdpHandler::RecvFromClient
                        (*(CUdpHandler **)((int)param_1 + 0xc),(char *)local_64,(int *)&local_68,
                         &local_70,&local_6a);
      uVar4 = local_68;
      if (cVar3 == '\x01') {
        local_28 = local_64;
        if (*(ushort *)(local_64 + 2) == local_68) {
          if (*(ushort *)(local_64 + 2) < 0x200) {
            if (local_68 < 0x201) {
              if (*(int *)(local_64 + 6) == 0) {
                    /* try { // try from 080599ad to 080599b1 has its CatchHandler @ 08059ac3 */
                printf("id(%d), m_id(%d)",(uint)*(ushort *)local_64,*(undefined4 *)(local_64 + 6));
              }
              local_24 = *(uint *)(local_28 + 6) % 10;
              CGuard<CMutex>::CGuard(local_88,*(CMutex **)((int)param_1 + (local_24 + 0xc) * 4 + 8))
              ;
                    /* try { // try from 08059a09 to 08059a82 has its CatchHandler @ 08059a85 */
              std::
              queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>::
              push(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                     **)((int)param_1 + (local_24 + 4) * 4),&local_64);
              uVar4 = std::
                      queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                      ::size(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                               **)((int)param_1 + (local_24 + 4) * 4));
              if (100 < uVar4) {
                uVar5 = std::
                        queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                        ::size(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                                 **)((int)param_1 + (local_24 + 4) * 4));
                CMyFileLog::CMyFileLog(local_40,"dispatch",0xa3);
                CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                          (local_40,"./log/recv","idx(%d) cnt(%d)",local_24,uVar5);
              }
              CGuard<CMutex>::~CGuard(local_88);
            }
            else {
              uVar1 = *(ushort *)local_64;
              uVar2 = *(ushort *)(local_64 + 2);
                    /* try { // try from 0805990b to 08059936 has its CatchHandler @ 08059ac3 */
              CMyFileLog::CMyFileLog(local_48,"dispatch",0x86);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_48,"./log/recvErr",
                         "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                         (uint)uVar2,uVar4,(uint)uVar1);
              pCVar6 = *(CMutex **)((int)param_1 + 0x60);
              CGuard<CMutex>::CGuard(local_84,pCVar6);
                    /* try { // try from 08059952 to 08059956 has its CatchHandler @ 08059959 */
              CUdpRecvBuffer::operator_delete(local_64,pCVar6);
              CGuard<CMutex>::~CGuard(local_84);
            }
          }
          else {
            uVar1 = *(ushort *)local_64;
            uVar2 = *(ushort *)(local_64 + 2);
                    /* try { // try from 08059857 to 08059882 has its CatchHandler @ 08059ac3 */
            CMyFileLog::CMyFileLog(local_50,"dispatch",0x7a);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_50,"./log/recvErr",
                       "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                       (uint)uVar2,uVar4,(uint)uVar1);
            pCVar6 = *(CMutex **)((int)param_1 + 0x60);
            CGuard<CMutex>::CGuard(local_80,pCVar6);
                    /* try { // try from 0805989e to 080598a2 has its CatchHandler @ 080598a5 */
            CUdpRecvBuffer::operator_delete(local_64,pCVar6);
            CGuard<CMutex>::~CGuard(local_80);
          }
        }
        else {
          uVar1 = *(ushort *)local_64;
          uVar2 = *(ushort *)(local_64 + 2);
                    /* try { // try from 080597a0 to 080597cb has its CatchHandler @ 08059ac3 */
          CMyFileLog::CMyFileLog(local_58,"dispatch",0x6f);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_58,"./log/recvErr",
                     "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                     (uint)uVar2,uVar4,(uint)uVar1);
          pCVar6 = *(CMutex **)((int)param_1 + 0x60);
          CGuard<CMutex>::CGuard(local_7c,pCVar6);
                    /* try { // try from 080597e7 to 080597eb has its CatchHandler @ 080597ee */
          CUdpRecvBuffer::operator_delete(local_64,pCVar6);
          CGuard<CMutex>::~CGuard(local_7c);
        }
      }
      else {
        pCVar6 = *(CMutex **)((int)param_1 + 0x60);
        CGuard<CMutex>::CGuard(local_78,pCVar6);
                    /* try { // try from 08059726 to 0805972a has its CatchHandler @ 0805972d */
        CUdpRecvBuffer::operator_delete(local_64,pCVar6);
        CGuard<CMutex>::~CGuard(local_78);
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08059592 to 08059596 has its CatchHandler @ 0805960c */
  std::string::string(local_60,"NetworkThread is Not Ready!\n",&local_59);
  this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080595b1 to 080595b5 has its CatchHandler @ 080595b8 */
  CDNFException::CDNFException(this,local_60);
                    /* try { // try from 080595f7 to 080595fb has its CatchHandler @ 080595fe */
  std::string::~string(local_60);
  std::allocator<char>::~allocator((allocator<char> *)&local_59);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08059646 to 0805966a has its CatchHandler @ 08059ac3 */
  __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFNetworkThread.cpp](source/DNFServer/GameServer/COServer/DNFNetworkThread.cpp)（约第 35 行）：

```cpp
void CNetworkThread::dispatch(void* param)
{
    try
    {
        if (m_queues == 0 || m_udp == 0 || m_locks == 0)
        {
            throw CDNFException("NetworkThread is Not Ready!\n");
        }
        DNFFLib::Sleep_Ext(5, 0);
        puts("Network Thread Start!");
        m_running = 1;
        while (m_running != 0)
        {
            CUdpRecvBuffer* buf;
            {
                CGuard<CMutex> g((CMutex*)m_bLock);
                buf = (CUdpRecvBuffer*)CUdpRecvBuffer::operator new(0x204);
            }
            int len = 0x200;
            unsigned short port = 0;
            unsigned int ip = 0;
            if (!((CUdpHandler*)m_udp)->RecvFromClient((char*)buf, &len, &ip, &port))
            {
                CGuard<CMutex> g((CMutex*)m_bLock);
                CUdpRecvBuffer::operator delete(buf);
                continue;
            }
            PacketHeader* ph = (PacketHeader*)buf;
            if (ph->packetSize != len)
            {
                DNF_LOG_SCOPE_LINE(0x6f,"./log/recvErr",
                    "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                    ph->packetSize, len, ph->packetId);
                {
                    CGuard<CMutex> g((CMutex*)m_bLock);
                    CUdpRecvBuffer::operator delete(buf);
                }
            }
            else if (ph->packetSize >= 0x200)
            {
                DNF_LOG_SCOPE_LINE(0x7a,"./log/recvErr",
                    "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                    ph->packetSize, len, ph->packetId);
                {
                    CGuard<CMutex> g((CMutex*)m_bLock);
                    CUdpRecvBuffer::operator delete(buf);
                }
            }
            else if ((unsigned int)len > 0x200)
            {
                DNF_LOG_SCOPE_LINE(0x86,"./log/recvErr",
                    "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                    ph->packetSize, len, ph->packetId);
                {
                    CGuard<CMutex> g((CMutex*)m_bLock);
                    CUdpRecvBuffer::operator delete(buf);
                }
            }
            else
            {
                if (ph->reversed2 == 0)
                {
                    printf("id(%d), m_id(%d)", ph->packetId, ph->reversed2);
                }
                int idx = ph->reversed2 % 10;
                {
                    CGuard<CMutex> g((CMutex*)m_locks[idx]);
                    ((std::queue<CUdpRecvBuffer*>*)m_queues[idx])->push(buf);
                    if (100 < ((std::queue<CUdpRecvBuffer*>*)m_queues[idx])->size())
                    {
                        DNF_LOG_SCOPE_LINE(0xa3,"./log/recv", "idx(%d) cnt(%d)", idx,
                            ((std::queue<CUdpRecvBuffer*>*)m_queues[idx])->size());
                    }
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        printf("CNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd : %s\n", e.what());
        throw CDNFException("CNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
    catch (...)
    {
        puts("CNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd");
        throw CDNFException("CNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
}
```
