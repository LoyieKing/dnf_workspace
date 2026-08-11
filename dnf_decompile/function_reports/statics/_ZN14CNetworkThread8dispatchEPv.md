# _ZN14CNetworkThread8dispatchEPv

`CNetworkThread::dispatch(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8061d00` | `0x752` | `0x80531e8` | `0x75d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,543 +1,549 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x9c,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN14CNetworkThread8dispatchEPv+0x2e>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN14CNetworkThread8dispatchEPv+0x2e>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x107>
-lea    -0x51(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x51(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"NetworkThread is Not Ready!\n",0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x58(%ebp),%esi
+lea    -0x38(%ebp),%esi
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
-lea    -0x58(%ebp),%eax
+lea    -0x38(%ebp),%eax
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
-lea    -0x58(%ebp),%eax
+lea    -0x38(%ebp),%eax
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
-lea    -0x51(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x51f>
-lea    -0x51(%ebp),%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x52a>
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
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
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x507>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x50d>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 movl   $0x1804,(%esp)
 call   <T> <_ZN14CUdpRecvBuffernwEj>
-mov    %eax,-0x5c(%ebp)
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-movl   $0x1800,-0x60(%ebp)
-movw   $0x0,-0x62(%ebp)
-movl   $0x0,-0x68(%ebp)
-mov    -0x5c(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x180>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x52a>
+movl   $0x1800,-0x40(%ebp)
+movw   $0x0,-0x42(%ebp)
+movl   $0x0,-0x48(%ebp)
+mov    -0x3c(%ebp),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-lea    -0x62(%ebp),%ecx
+lea    -0x42(%ebp),%ecx
 mov    %ecx,0x10(%esp)
-lea    -0x68(%ebp),%ecx
+lea    -0x48(%ebp),%ecx
 mov    %ecx,0xc(%esp)
-lea    -0x60(%ebp),%ecx
+lea    -0x40(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x1c0>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
+cmp    $0x1,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN14CNetworkThread8dispatchEPv+0x4c7>
+mov    -0x3c(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
+movzwl %ax,%edx
+mov    -0x40(%ebp),%eax
+cmp    %eax,%edx
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x425>
+mov    -0x3c(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
+cmp    $0x17ff,%ax
+ja     <T> <_ZN14CNetworkThread8dispatchEPv+0x37d>
+mov    -0x40(%ebp),%eax
+cmp    $0x1800,%eax
+jg     <T> <_ZN14CNetworkThread8dispatchEPv+0x2d5>
+mov    -0x3c(%ebp),%eax
+lea    0x6(%eax),%edx
+mov    -0x48(%ebp),%eax
+mov    %eax,(%edx)
+mov    -0x3c(%ebp),%eax
+lea    0x4(%eax),%edx
+movzwl -0x42(%ebp),%eax
+mov    %ax,(%edx)
+mov    0x8(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+lea    -0x3c(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4pushERKS1_>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x64,-0x20(%ebp)
+jbe    <T> <_ZN14CNetworkThread8dispatchEPv+0x2c5>
+movl   $0xb2,0x8(%esp)
+movl   $"dispatch",0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
+mov    %eax,0xc(%esp)
+movl   $"cnt(%d)\n",0x8(%esp)
+movl   $"./log/recv",0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x2c5>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x52a>
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x50d>
+movl   $0x8d,0x8(%esp)
+movl   $"dispatch",0x4(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x3c(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%ecx
+mov    -0x40(%ebp),%edx
+mov    -0x3c(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
+movl   $"Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
+movl   $"./log/recvErr",0x4(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,0x4(%esp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CUdpRecvBufferdlEPv>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x36d>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x52a>
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x50d>
+movl   $0x81,0x8(%esp)
+movl   $"dispatch",0x4(%esp)
 lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x51f>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN14CNetworkThread8dispatchEPv+0x215>
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x3c(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%ecx
+mov    -0x40(%ebp),%edx
+mov    -0x3c(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
+movl   $"Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
+movl   $"./log/recvErr",0x4(%esp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x5c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x205>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x415>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x51f>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x52a>
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x507>
-mov    -0x5c(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%edx
-mov    -0x60(%ebp),%eax
-cmp    %eax,%edx
-je     <T> <_ZN14CNetworkThread8dispatchEPv+0x2d6>
-mov    -0x20(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x60(%ebp),%esi
-mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x50d>
 movl   $0x76,0x8(%esp)
 movl   $"dispatch",0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x3c(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%ecx
+mov    -0x40(%ebp),%edx
+mov    -0x3c(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
 movl   $"./log/recvErr",0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x7c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x5c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x2c6>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x51f>
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x507>
-mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-cmp    $0x17ff,%ax
-jbe    <T> <_ZN14CNetworkThread8dispatchEPv+0x38d>
-mov    -0x20(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x60(%ebp),%esi
-mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
-movl   $0x81,0x8(%esp)
-movl   $"dispatch",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
-movl   $"./log/recvErr",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4ba>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x52a>
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x50d>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x78(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x5c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x37d>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x51f>
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x507>
-mov    -0x60(%ebp),%eax
-cmp    $0x1800,%eax
-jbe    <T> <_ZN14CNetworkThread8dispatchEPv+0x441>
-mov    -0x20(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x60(%ebp),%esi
-mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
-movl   $0x8d,0x8(%esp)
-movl   $"dispatch",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
-movl   $"./log/recvErr",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%eax
-mov    %eax,0x4(%esp)
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x431>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x51f>
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x507>
-mov    -0x68(%ebp),%edx
-mov    -0x20(%ebp),%eax
-mov    %edx,0x6(%eax)
-movzwl -0x62(%ebp),%edx
-mov    -0x20(%ebp),%eax
-mov    %dx,0x4(%eax)
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-mov    %eax,0x4(%esp)
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x502>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
 lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-lea    -0x5c(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4pushERKS1_>
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
-cmp    $0x64,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN14CNetworkThread8dispatchEPv+0x4fc>
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
-mov    %eax,%ebx
-movl   $0xb2,0x8(%esp)
-movl   $"dispatch",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"cnt(%d)\n",0x8(%esp)
-movl   $"./log/recv",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4fc>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x80(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x51f>
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x52a>
 lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    0x8(%ebp),%eax
 movzbl 0x8(%eax),%eax
 test   %al,%al
+setne  %al
+test   %al,%al
 jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x133>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x747>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x752>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x644>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x64f>
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
 movl   $"CNetworkThread::dispatch() 예외 발생 : %s\n",(%esp)
 call   <T> <printf>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x30(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x5d4>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x5df>
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
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x5ce>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x5d9>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x5f3>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x5fe>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x5f3>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x5fe>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x608>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x613>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x5f3>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x5fe>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x62f>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x63a>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
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
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x28(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x6d7>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x6e2>
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
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x6d1>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x6dc>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x6f6>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x701>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x6f6>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x701>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x70b>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x716>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x6f6>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x701>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x732>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x73d>
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
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
  CGuard<CMutex> local_84 [4];
  CGuard<CMutex> local_80 [4];
  CGuard<CMutex> local_7c [4];
  CGuard<CMutex> local_78 [4];
  CGuard<CMutex> local_74 [4];
  CGuard<CMutex> local_70 [4];
  uint local_6c;
  ushort local_66;
  uint local_64;
  CUdpRecvBuffer *local_60;
  string local_5c [7];
  allocator local_55;
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [24];
  CUdpRecvBuffer *local_24;
  
  if (((*(int *)((int)param_1 + 0xc) != 0) && (*(int *)((int)param_1 + 0x10) != 0)) &&
     (*(int *)((int)param_1 + 0x14) != 0)) {
    DNFFLib::Sleep_Ext(5,0);
    puts("Network Thread Start!");
    *(undefined1 *)((int)param_1 + 8) = 1;
    while (*(char *)((int)param_1 + 8) != '\0') {
      pCVar6 = *(CMutex **)((int)param_1 + 0x18);
      CGuard<CMutex>::CGuard(local_70,pCVar6);
                    /* try { // try from 08061e4f to 08061e53 has its CatchHandler @ 08061ea4 */
      local_60 = CUdpRecvBuffer::operator_new((CUdpRecvBuffer *)0x1804,(uint)pCVar6);
      CGuard<CMutex>::~CGuard(local_70);
      local_64 = 0x1800;
      local_66 = 0;
      local_6c = 0;
                    /* try { // try from 08061e9d to 08061ea1 has its CatchHandler @ 0806221b */
      cVar3 = CUdpHandler::RecvFromClient
                        (*(CUdpHandler **)((int)param_1 + 0x10),(char *)local_60,(int *)&local_64,
                         &local_6c,&local_66);
      uVar4 = local_64;
      if (cVar3 == '\x01') {
        local_24 = local_60;
        if (*(ushort *)(local_60 + 2) == local_64) {
          if (*(ushort *)(local_60 + 2) < 0x1800) {
            if (local_64 < 0x1801) {
              *(uint *)(local_60 + 6) = local_6c;
              *(ushort *)(local_60 + 4) = local_66;
              CGuard<CMutex>::CGuard(local_84,*(CMutex **)((int)param_1 + 0x14));
                    /* try { // try from 0806217a to 080621e0 has its CatchHandler @ 080621e3 */
              std::
              queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>::
              push(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                     **)((int)param_1 + 0xc),&local_60);
              uVar4 = std::
                      queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                      ::size(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                               **)((int)param_1 + 0xc));
              if (100 < uVar4) {
                uVar5 = std::
                        queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                        ::size(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                                 **)((int)param_1 + 0xc));
                CMyFileLog::CMyFileLog(local_3c,"dispatch",0xb2);
                CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_3c,"./log/recv","cnt(%d)\n",uVar5);
              }
              CGuard<CMutex>::~CGuard(local_84);
            }
            else {
              uVar1 = *(ushort *)local_60;
              uVar2 = *(ushort *)(local_60 + 2);
                    /* try { // try from 080620c7 to 080620f2 has its CatchHandler @ 0806221b */
              CMyFileLog::CMyFileLog(local_44,"dispatch",0x8d);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_44,"./log/recvErr",
                         "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                         (uint)uVar2,uVar4,(uint)uVar1);
              pCVar6 = *(CMutex **)((int)param_1 + 0x18);
              CGuard<CMutex>::CGuard(local_80,pCVar6);
                    /* try { // try from 0806210e to 08062112 has its CatchHandler @ 08062115 */
              CUdpRecvBuffer::operator_delete(local_60,pCVar6);
              CGuard<CMutex>::~CGuard(local_80);
            }
          }
          else {
            uVar1 = *(ushort *)local_60;
            uVar2 = *(ushort *)(local_60 + 2);
                    /* try { // try from 08062013 to 0806203e has its CatchHandler @ 0806221b */
            CMyFileLog::CMyFileLog(local_4c,"dispatch",0x81);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_4c,"./log/recvErr",
                       "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                       (uint)uVar2,uVar4,(uint)uVar1);
            pCVar6 = *(CMutex **)((int)param_1 + 0x18);
            CGuard<CMutex>::CGuard(local_7c,pCVar6);
                    /* try { // try from 0806205a to 0806205e has its CatchHandler @ 08062061 */
            CUdpRecvBuffer::operator_delete(local_60,pCVar6);
            CGuard<CMutex>::~CGuard(local_7c);
          }
        }
        else {
          uVar1 = *(ushort *)local_60;
          uVar2 = *(ushort *)(local_60 + 2);
                    /* try { // try from 08061f5c to 08061f87 has its CatchHandler @ 0806221b */
          CMyFileLog::CMyFileLog(local_54,"dispatch",0x76);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_54,"./log/recvErr",
                     "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                     (uint)uVar2,uVar4,(uint)uVar1);
          pCVar6 = *(CMutex **)((int)param_1 + 0x18);
          CGuard<CMutex>::CGuard(local_78,pCVar6);
                    /* try { // try from 08061fa3 to 08061fa7 has its CatchHandler @ 08061faa */
          CUdpRecvBuffer::operator_delete(local_60,pCVar6);
          CGuard<CMutex>::~CGuard(local_78);
        }
      }
      else {
        pCVar6 = *(CMutex **)((int)param_1 + 0x18);
        CGuard<CMutex>::CGuard(local_74,pCVar6);
                    /* try { // try from 08061ee2 to 08061ee6 has its CatchHandler @ 08061ee9 */
        CUdpRecvBuffer::operator_delete(local_60,pCVar6);
        CGuard<CMutex>::~CGuard(local_74);
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08061d4e to 08061d52 has its CatchHandler @ 08061dc8 */
  std::string::string(local_5c,"NetworkThread is Not Ready!\n",&local_55);
  this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08061d6d to 08061d71 has its CatchHandler @ 08061d74 */
  CDNFException::CDNFException(this,local_5c);
                    /* try { // try from 08061db3 to 08061db7 has its CatchHandler @ 08061dba */
  std::string::~string(local_5c);
  std::allocator<char>::~allocator((allocator<char> *)&local_55);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08061e02 to 08061e26 has its CatchHandler @ 0806221b */
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
        if (m_queues != 0 && m_udp != 0 && m_locks != 0)
        {
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
                if (((CUdpHandler*)m_udp)->RecvFromClient((char*)buf, &len, &ip, &port) == 1)
                {
                    if (*(unsigned short*)((char*)buf + 2) == len)
                    {
                        if (*(unsigned short*)((char*)buf + 2) < 0x200)
                        {
                            if (len < 0x201)
                            {
                                if (*(int*)((char*)buf + 6) == 0)
                                {
                                    printf("id(%d), m_id(%d)", *(unsigned short*)buf,
                                           *(int*)((char*)buf + 6));
                                }
                                unsigned int idx = *(unsigned int*)((char*)buf + 6) % 10;
                                {
                                    CGuard<CMutex> g((CMutex*)m_locks[idx]);
                                    ((std::queue<CUdpRecvBuffer*>*)m_queues[idx])->push(buf);
                                    unsigned int qsize =
                                        ((std::queue<CUdpRecvBuffer*>*)m_queues[idx])->size();
                                    if (100 < qsize)
                                    {
                                        DNF_LOG_SCOPE_LINE(0xa3,"./log/recv", "idx(%d) cnt(%d)", idx,
                                            ((std::queue<CUdpRecvBuffer*>*)m_queues[idx])->size());
                                    }
                                }
                            }
                            else
                            {
                                DNF_LOG_SCOPE_LINE(0x86,"./log/recvErr",
                                    "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                                    *(unsigned short*)((char*)buf + 2), len,
                                    *(unsigned short*)buf);
                                {
                                    CGuard<CMutex> g((CMutex*)m_bLock);
                                    CUdpRecvBuffer::operator delete(buf);
                                }
                            }
                        }
                        else
                        {
                            DNF_LOG_SCOPE_LINE(0x7a,"./log/recvErr",
                                "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                                *(unsigned short*)((char*)buf + 2), len, *(unsigned short*)buf);
                            {
                                CGuard<CMutex> g((CMutex*)m_bLock);
                                CUdpRecvBuffer::operator delete(buf);
                            }
                        }
                    }
                    else
                    {
                        DNF_LOG_SCOPE_LINE(0x6f,"./log/recvErr",
                            "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                            *(unsigned short*)((char*)buf + 2), len, *(unsigned short*)buf);
                        {
                            CGuard<CMutex> g((CMutex*)m_bLock);
                            CUdpRecvBuffer::operator delete(buf);
                        }
                    }
                }
                else
                {
                    CGuard<CMutex> g((CMutex*)m_bLock);
                    CUdpRecvBuffer::operator delete(buf);
                }
            }
            return;
        }
        throw CDNFException("NetworkThread is Not Ready!\n");
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
