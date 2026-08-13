# _ZN17CUdpNetworkThread8dispatchEPv

`CUdpNetworkThread::dispatch(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808bea0` | `0x6fe` | `0x8064d24` | `0x70c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,524 +1,524 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x9c,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x2e>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x2e>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x107>
-lea    -0x4d(%ebp),%eax
+lea    -0x55(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x4d(%ebp),%eax
+lea    -0x55(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"NetworkThread is Not Ready!\n",0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x54(%ebp),%esi
+lea    -0x5c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0xad>
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
-lea    -0x54(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0xa7>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0xcc>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0xcc>
-lea    -0x54(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0xe4>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0xcc>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x4d(%ebp),%eax
+lea    -0x55(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
-lea    -0x4d(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4d9>
+lea    -0x55(%ebp),%eax
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
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b3>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4c1>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 movl   $0x1804,(%esp)
 call   <T> <_ZN14CUdpRecvBuffernwEj>
-mov    %eax,-0x58(%ebp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-movl   $0x1800,-0x5c(%ebp)
-movw   $0x0,-0x5e(%ebp)
-movl   $0x0,-0x64(%ebp)
-mov    -0x58(%ebp),%eax
-mov    %eax,%edx
+mov    %eax,-0x2c(%ebp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+movl   $0x1800,-0x60(%ebp)
+movw   $0x0,-0x62(%ebp)
+movl   $0x0,-0x68(%ebp)
+mov    -0x2c(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-lea    -0x5e(%ebp),%ecx
+lea    -0x62(%ebp),%ecx
 mov    %ecx,0x10(%esp)
-lea    -0x64(%ebp),%ecx
+lea    -0x68(%ebp),%ecx
 mov    %ecx,0xc(%esp)
-lea    -0x5c(%ebp),%ecx
+lea    -0x60(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x1c0>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x215>
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%eax
-mov    %eax,0x4(%esp)
+mov    %al,-0x25(%ebp)
+mov    -0x60(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpb   $0x1,-0x25(%ebp)
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x472>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x1d1>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
 lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x205>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b3>
-mov    -0x58(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4d9>
+mov    -0x2c(%ebp),%eax
+mov    %eax,-0x70(%ebp)
+mov    -0x70(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
-mov    -0x5c(%ebp),%eax
+mov    -0x60(%ebp),%eax
 cmp    %eax,%edx
-je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x2d6>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x292>
+mov    -0x70(%ebp),%eax
 movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x5c(%ebp),%esi
-mov    -0x20(%ebp),%eax
+movzwl %ax,%esi
+mov    -0x70(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%ebx
 movl   $0x66,0x8(%esp)
 movl   $&_ZZN17CUdpNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
+mov    %esi,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
 movl   $"./log/recvErr",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x70(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x58(%ebp),%eax
+mov    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x2c6>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b3>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x282>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4d9>
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4c1>
+mov    -0x70(%ebp),%eax
 movzwl 0x2(%eax),%eax
 cmp    $0x17ff,%ax
-jbe    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x38d>
-mov    -0x20(%ebp),%eax
+ja     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x3d2>
+mov    -0x60(%ebp),%eax
+cmp    $0x1800,%eax
+jle    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x357>
+mov    -0x70(%ebp),%eax
 movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x5c(%ebp),%esi
-mov    -0x20(%ebp),%eax
+movzwl %ax,%esi
+mov    -0x70(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%ebx
+movl   $0x7d,0x8(%esp)
+movl   $&_ZZN17CUdpNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
+movl   $"./log/recvErr",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,0x4(%esp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CUdpRecvBufferdlEPv>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x347>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4d9>
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4c1>
+mov    -0x70(%ebp),%eax
+mov    -0x68(%ebp),%edx
+mov    %edx,0x6(%eax)
+mov    -0x70(%ebp),%eax
+movzwl -0x62(%ebp),%edx
+mov    %dx,0x4(%eax)
+mov    0x8(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,0x4(%esp)
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+lea    -0x70(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4pushERKS1_>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
+mov    %eax,-0x20(%ebp)
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4c1>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4d9>
+mov    -0x70(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%esi
+mov    -0x70(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%ebx
 movl   $0x71,0x8(%esp)
 movl   $&_ZZN17CUdpNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
+mov    %esi,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
 movl   $"./log/recvErr",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x58(%ebp),%eax
+mov    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x37d>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x465>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4d9>
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4c1>
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,0x4(%esp)
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CUdpRecvBufferdlEPv>
 jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b3>
-mov    -0x5c(%ebp),%eax
-cmp    $0x1800,%eax
-jbe    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x43e>
-mov    -0x20(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x5c(%ebp),%esi
-mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
-movl   $0x7d,0x8(%esp)
-movl   $&_ZZN17CUdpNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
-movl   $"./log/recvErr",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%eax
-mov    %eax,0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x431>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b3>
-mov    -0x64(%ebp),%edx
-mov    -0x20(%ebp),%eax
-mov    %edx,0x6(%eax)
-movzwl -0x5e(%ebp),%edx
-mov    -0x20(%ebp),%eax
-mov    %dx,0x4(%eax)
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-mov    %eax,0x4(%esp)
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-lea    -0x58(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4pushERKS1_>
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
-mov    %eax,-0x24(%ebp)
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b3>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4d9>
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    0x8(%ebp),%eax
 movzbl 0x8(%eax),%eax
 test   %al,%al
 jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x133>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6f3>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x701>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5f0>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5fe>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,0x4(%esp)
 movl   $"CUdpNetworkThread::dispatch() 예외 발생 : %s\n",(%esp)
 call   <T> <printf>
-lea    -0x2d(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x2d(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $"CNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
-lea    -0x34(%ebp),%eax
+movl   $"CUdpNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x34(%ebp),%esi
+lea    -0x3c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x580>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x58e>
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
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x57a>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x588>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x59f>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5ad>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x59f>
-lea    -0x34(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5ad>
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5b4>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5c2>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x59f>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5ad>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x2d(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5db>
-lea    -0x2d(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5e9>
+lea    -0x35(%ebp),%eax
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
 movl   $"CUdpNetworkThread::dispatch() 예외 발생",(%esp)
 call   <T> <puts>
-lea    -0x25(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x25(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $"CNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+movl   $"CUdpNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x2c(%ebp),%esi
+lea    -0x34(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x683>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x691>
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
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x67d>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x68b>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a2>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b0>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a2>
-lea    -0x2c(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b0>
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b7>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6c5>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a2>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b0>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x25(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6de>
-lea    -0x25(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6ec>
+lea    -0x2d(%ebp),%eax
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

/* CUdpNetworkThread::dispatch(void*) */

void CUdpNetworkThread::_ZN17CUdpNetworkThread8dispatchEPv(void *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  CDNFException *this;
  CMutex *pCVar5;
  CGuard<CMutex> local_80 [4];
  CGuard<CMutex> local_7c [4];
  CGuard<CMutex> local_78 [4];
  CGuard<CMutex> local_74 [4];
  CGuard<CMutex> local_70 [4];
  CGuard<CMutex> local_6c [4];
  uint local_68;
  ushort local_62;
  uint local_60;
  CUdpRecvBuffer *local_5c;
  string local_58 [7];
  allocator local_51;
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  undefined4 local_28;
  CUdpRecvBuffer *local_24;
  
  if (((*(int *)((int)param_1 + 0xc) != 0) && (*(int *)((int)param_1 + 0x10) != 0)) &&
     (*(int *)((int)param_1 + 0x14) != 0)) {
    DNFFLib::Sleep_Ext(5,0);
    puts("Network Thread Start!");
    *(undefined1 *)((int)param_1 + 8) = 1;
    while (*(char *)((int)param_1 + 8) != '\0') {
      pCVar5 = *(CMutex **)((int)param_1 + 0x18);
      CGuard<CMutex>::CGuard(local_6c,pCVar5);
                    /* try { // try from 0808bfef to 0808bff3 has its CatchHandler @ 0808c044 */
      local_5c = CUdpRecvBuffer::operator_new((CUdpRecvBuffer *)0x1804,(uint)pCVar5);
      CGuard<CMutex>::~CGuard(local_6c);
      local_60 = 0x1800;
      local_62 = 0;
      local_68 = 0;
                    /* try { // try from 0808c03d to 0808c041 has its CatchHandler @ 0808c367 */
      cVar4 = CUdpHandler::RecvFromClient
                        (*(CUdpHandler **)((int)param_1 + 0x10),(char *)local_5c,(int *)&local_60,
                         &local_68,&local_62);
      uVar3 = local_60;
      if (cVar4 == '\x01') {
        local_24 = local_5c;
        if (*(ushort *)(local_5c + 2) == local_60) {
          if (*(ushort *)(local_5c + 2) < 0x1800) {
            if (local_60 < 0x1801) {
              *(uint *)(local_5c + 6) = local_68;
              *(ushort *)(local_5c + 4) = local_62;
              CGuard<CMutex>::CGuard(local_80,*(CMutex **)((int)param_1 + 0x14));
                    /* try { // try from 0808c317 to 0808c329 has its CatchHandler @ 0808c33a */
              std::
              queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>::
              push(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                     **)((int)param_1 + 0xc),&local_5c);
              local_28 = std::
                         queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                         ::size(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                                  **)((int)param_1 + 0xc));
              CGuard<CMutex>::~CGuard(local_80);
            }
            else {
              uVar1 = *(ushort *)local_5c;
              uVar2 = *(ushort *)(local_5c + 2);
                    /* try { // try from 0808c267 to 0808c292 has its CatchHandler @ 0808c367 */
              CMyFileLog::CMyFileLog(local_40,"dispatch",0x7d);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_40,"./log/recvErr",
                         "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                         (uint)uVar2,uVar3,(uint)uVar1);
              pCVar5 = *(CMutex **)((int)param_1 + 0x18);
              CGuard<CMutex>::CGuard(local_7c,pCVar5);
                    /* try { // try from 0808c2ae to 0808c2b2 has its CatchHandler @ 0808c2b5 */
              CUdpRecvBuffer::operator_delete(local_5c,pCVar5);
              CGuard<CMutex>::~CGuard(local_7c);
            }
          }
          else {
            uVar1 = *(ushort *)local_5c;
            uVar2 = *(ushort *)(local_5c + 2);
                    /* try { // try from 0808c1b3 to 0808c1de has its CatchHandler @ 0808c367 */
            CMyFileLog::CMyFileLog(local_48,"dispatch",0x71);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_48,"./log/recvErr",
                       "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                       (uint)uVar2,uVar3,(uint)uVar1);
            pCVar5 = *(CMutex **)((int)param_1 + 0x18);
            CGuard<CMutex>::CGuard(local_78,pCVar5);
                    /* try { // try from 0808c1fa to 0808c1fe has its CatchHandler @ 0808c201 */
            CUdpRecvBuffer::operator_delete(local_5c,pCVar5);
            CGuard<CMutex>::~CGuard(local_78);
          }
        }
        else {
          uVar1 = *(ushort *)local_5c;
          uVar2 = *(ushort *)(local_5c + 2);
                    /* try { // try from 0808c0fc to 0808c127 has its CatchHandler @ 0808c367 */
          CMyFileLog::CMyFileLog(local_50,"dispatch",0x66);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_50,"./log/recvErr",
                     "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                     (uint)uVar2,uVar3,(uint)uVar1);
          pCVar5 = *(CMutex **)((int)param_1 + 0x18);
          CGuard<CMutex>::CGuard(local_74,pCVar5);
                    /* try { // try from 0808c143 to 0808c147 has its CatchHandler @ 0808c14a */
          CUdpRecvBuffer::operator_delete(local_5c,pCVar5);
          CGuard<CMutex>::~CGuard(local_74);
        }
      }
      else {
        pCVar5 = *(CMutex **)((int)param_1 + 0x18);
        CGuard<CMutex>::CGuard(local_70,pCVar5);
                    /* try { // try from 0808c082 to 0808c086 has its CatchHandler @ 0808c089 */
        CUdpRecvBuffer::operator_delete(local_5c,pCVar5);
        CGuard<CMutex>::~CGuard(local_70);
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0808beee to 0808bef2 has its CatchHandler @ 0808bf68 */
  std::string::string(local_58,"NetworkThread is Not Ready!\n",&local_51);
  this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808bf0d to 0808bf11 has its CatchHandler @ 0808bf14 */
  CDNFException::CDNFException(this,local_58);
                    /* try { // try from 0808bf53 to 0808bf57 has its CatchHandler @ 0808bf5a */
  std::string::~string(local_58);
  std::allocator<char>::~allocator((allocator<char> *)&local_51);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808bfa2 to 0808bfc6 has its CatchHandler @ 0808c367 */
  __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFNetworkThread.cpp](source/DNFServer/GameServer/Guild/DNFNetworkThread.cpp)（约第 85 行）：

```cpp
void CUdpNetworkThread::dispatch(void* param)
{
    try
    {
        if (m_queue == 0 || m_handler == 0 || m_lock == 0)
        {
            throw CDNFException("NetworkThread is Not Ready!\n");
        }
        DNFFLib::Sleep_Ext(5, 0);
        puts("Network Thread Start!");
        m_running = true;
        while (m_running)
        {
            CUdpRecvBuffer* buf;
            {
                CGuard<CMutex> g((CMutex*)m_bLock);
                buf = (CUdpRecvBuffer*)CUdpRecvBuffer::operator new(0x1804);
            }
            int len = 0x1800;
            unsigned short port = 0;
            unsigned int ip = 0;
            char ok = ((CUdpHandler*)m_handler)->RecvFromClient((char*)buf, &len, &ip, &port);
            unsigned int recvByte = (unsigned int)len;
            if (ok == 1)
            {
                CUdpRecvBuffer* buf2 = buf;
                if (((PacketHeader*)buf2)->packetSize != len)
                {
                    DNF_LOG_SCOPE_LINE(0x66,"./log/recvErr",
                        "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                        ((PacketHeader*)buf2)->packetSize, recvByte,
                        ((PacketHeader*)buf2)->packetId);
                    {
                        CGuard<CMutex> g((CMutex*)m_bLock);
                        CUdpRecvBuffer::operator delete(buf2);
                    }
                }
                else
                {
                    if (((PacketHeader*)buf2)->packetSize < 0x1800)
                    {
                        if (len >= 0x1801)
                        {
                            DNF_LOG_SCOPE_LINE(0x7d,"./log/recvErr",
                                "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                                ((PacketHeader*)buf2)->packetSize, recvByte,
                                ((PacketHeader*)buf2)->packetId);
                            {
                                CGuard<CMutex> g((CMutex*)m_bLock);
                                CUdpRecvBuffer::operator delete(buf2);
                            }
                        }
                        else
                        {
                            ((PacketHeader*)buf2)->reversed2 = ip;
                            ((PacketHeader*)buf2)->reversed1 = port;
                            {
                                CGuard<CMutex> g((CMutex*)m_lock);
                                ((std::queue<CUdpRecvBuffer*>*)m_queue)->push(buf2);
                                unsigned int qsize =
                                    ((std::queue<CUdpRecvBuffer*>*)m_queue)->size();
                            }
                        }
                    }
                    else
                    {
                        DNF_LOG_SCOPE_LINE(0x71,"./log/recvErr",
                            "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                            ((PacketHeader*)buf2)->packetSize, recvByte,
                            ((PacketHeader*)buf2)->packetId);
                        {
                            CGuard<CMutex> g((CMutex*)m_bLock);
                            CUdpRecvBuffer::operator delete(buf2);
                        }
                    }
                }
            }
            else
            {
                {
                    CGuard<CMutex> g((CMutex*)m_bLock);
                    CUdpRecvBuffer::operator delete(buf);
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        printf("CUdpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd : %s\n", e.what());
        throw CDNFException("CUdpNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
    catch (...)
    {
        puts("CUdpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd");
        throw CDNFException("CUdpNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
}
```
