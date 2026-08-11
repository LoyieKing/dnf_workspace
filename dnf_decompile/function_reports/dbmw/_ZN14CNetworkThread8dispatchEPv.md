# _ZN14CNetworkThread8dispatchEPv

`CNetworkThread::dispatch(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8064210` | `0x6d6` | `0x80c9652` | `0x6d3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,513 +1,512 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x8c,%esp
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
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x107>
-lea    -0x49(%ebp),%eax
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x10a>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x49(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"NetworkThread is Not Ready!\n",0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x50(%ebp),%esi
+lea    -0x34(%ebp),%esi
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
-lea    -0x50(%ebp),%eax
+lea    -0x34(%ebp),%eax
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
-lea    -0x50(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0xe4>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0xe7>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CNetworkThread8dispatchEPv+0xcc>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x49(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4a3>
-lea    -0x49(%ebp),%eax
+mov    %ecx,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x2d(%ebp),%eax
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
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x48b>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x488>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x64(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 movl   $0x1804,(%esp)
 call   <T> <_ZN14CUdpRecvBuffernwEj>
-mov    %eax,-0x54(%ebp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-movl   $0x1800,-0x58(%ebp)
-movw   $0x0,-0x5a(%ebp)
-movl   $0x0,-0x60(%ebp)
-mov    -0x54(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x183>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4a0>
+movl   $0x1800,-0x3c(%ebp)
+movl   $0x0,-0x40(%ebp)
+movw   $0x0,-0x42(%ebp)
+mov    -0x38(%ebp),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-lea    -0x5a(%ebp),%ecx
+lea    -0x42(%ebp),%ecx
 mov    %ecx,0x10(%esp)
-lea    -0x60(%ebp),%ecx
+lea    -0x40(%ebp),%ecx
 mov    %ecx,0xc(%esp)
-lea    -0x58(%ebp),%ecx
+lea    -0x3c(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x1c0>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4a3>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14CNetworkThread8dispatchEPv+0x215>
+je     <T> <_ZN14CNetworkThread8dispatchEPv+0x218>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x54(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x205>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4a3>
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x48b>
-mov    -0x54(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x208>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4a0>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x488>
+mov    -0x38(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
-mov    -0x58(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 cmp    %eax,%edx
-je     <T> <_ZN14CNetworkThread8dispatchEPv+0x2d6>
-mov    -0x20(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x58(%ebp),%esi
-mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
+je     <T> <_ZN14CNetworkThread8dispatchEPv+0x2d3>
 movl   $0x6c,0x8(%esp)
 movl   $&_ZZN14CNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x38(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%ecx
+mov    -0x3c(%ebp),%edx
+mov    -0x38(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
 movl   $"./log/recvErr",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x54(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x2c6>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4a3>
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x48b>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x2c3>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4a0>
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x488>
+mov    -0x38(%ebp),%eax
 movzwl 0x2(%eax),%eax
 cmp    $0x17ff,%ax
-jbe    <T> <_ZN14CNetworkThread8dispatchEPv+0x38d>
-mov    -0x20(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x58(%ebp),%esi
-mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
+jbe    <T> <_ZN14CNetworkThread8dispatchEPv+0x38a>
 movl   $0x77,0x8(%esp)
 movl   $&_ZZN14CNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x38(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%ecx
+mov    -0x3c(%ebp),%edx
+mov    -0x38(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
 movl   $"./log/recvErr",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x70(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x54(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x37d>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4a3>
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x48b>
-mov    -0x58(%ebp),%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x37a>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4a0>
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x488>
+mov    -0x3c(%ebp),%eax
 cmp    $0x1800,%eax
-jbe    <T> <_ZN14CNetworkThread8dispatchEPv+0x43b>
-mov    -0x20(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x58(%ebp),%esi
-mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
+jle    <T> <_ZN14CNetworkThread8dispatchEPv+0x438>
 movl   $0x83,0x8(%esp)
 movl   $&_ZZN14CNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x38(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%ecx
+mov    -0x3c(%ebp),%edx
+mov    -0x38(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
 movl   $"./log/recvErr",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CUdpRecvBufferdlEPv>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x42b>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4a0>
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x488>
+mov    0x8(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,0x4(%esp)
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x42e>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+lea    -0x38(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4pushERKS1_>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x47d>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4a3>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4a0>
 lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x48b>
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-mov    %eax,0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-lea    -0x54(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4pushERKS1_>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x480>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4a3>
-lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    0x8(%ebp),%eax
 movzbl 0x8(%eax),%eax
 test   %al,%al
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x133>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x6cb>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x136>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x6c8>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x5c8>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x5c5>
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
 movl   $"CNetworkThread::dispatch() Exception Break : %s\n",(%esp)
 call   <T> <printf>
-lea    -0x29(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x29(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x30(%ebp),%esi
+lea    -0x2c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x558>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x555>
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
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x552>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x54f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x577>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x574>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x577>
-lea    -0x30(%ebp),%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x574>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x58c>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x589>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x577>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x574>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x29(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x5b3>
-lea    -0x29(%ebp),%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x5b0>
+lea    -0x25(%ebp),%eax
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
 movl   $"CNetworkThread::dispatch() Exception Break",(%esp)
 call   <T> <puts>
-lea    -0x21(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x21(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x28(%ebp),%esi
+lea    -0x24(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x65b>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x658>
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
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x655>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x652>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x67a>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x677>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x67a>
-lea    -0x28(%ebp),%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x677>
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x68f>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x68c>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x67a>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x677>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x21(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x6b6>
-lea    -0x21(%ebp),%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x6b3>
+lea    -0x1d(%ebp),%eax
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
 add    $0x8c,%esp
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
  uint uVar3;
  char cVar4;
  CDNFException *this;
  CMutex *pCVar5;
  CGuard<CMutex> local_7c [4];
  CGuard<CMutex> local_78 [4];
  CGuard<CMutex> local_74 [4];
  CGuard<CMutex> local_70 [4];
  CGuard<CMutex> local_6c [4];
  CGuard<CMutex> local_68 [4];
  uint local_64;
  ushort local_5e;
  uint local_5c;
  CUdpRecvBuffer *local_58;
  string local_54 [7];
  allocator local_4d;
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
      pCVar5 = *(CMutex **)((int)param_1 + 0x18);
      CGuard<CMutex>::CGuard(local_68,pCVar5);
                    /* try { // try from 0806435f to 08064363 has its CatchHandler @ 080643b4 */
      local_58 = CUdpRecvBuffer::operator_new((CUdpRecvBuffer *)0x1804,(uint)pCVar5);
      CGuard<CMutex>::~CGuard(local_68);
      local_5c = 0x1800;
      local_5e = 0;
      local_64 = 0;
                    /* try { // try from 080643ad to 080643b1 has its CatchHandler @ 080646af */
      cVar4 = CUdpHandler::RecvFromClient
                        (*(CUdpHandler **)((int)param_1 + 0x10),(char *)local_58,(int *)&local_5c,
                         &local_64,&local_5e);
      uVar3 = local_5c;
      if (cVar4 == '\x01') {
        local_24 = local_58;
        if (*(ushort *)(local_58 + 2) == local_5c) {
          if (*(ushort *)(local_58 + 2) < 0x1800) {
            if (local_5c < 0x1801) {
              CGuard<CMutex>::CGuard(local_7c,*(CMutex **)((int)param_1 + 0x14));
                    /* try { // try from 08064670 to 08064674 has its CatchHandler @ 08064677 */
              std::
              queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>::
              push(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                     **)((int)param_1 + 0xc),&local_58);
              CGuard<CMutex>::~CGuard(local_7c);
            }
            else {
              uVar1 = *(ushort *)local_58;
              uVar2 = *(ushort *)(local_58 + 2);
                    /* try { // try from 080645d7 to 08064602 has its CatchHandler @ 080646af */
              CMyFileLog::CMyFileLog(local_3c,"dispatch",0x83);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_3c,"./log/recvErr",
                         "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                         (uint)uVar2,uVar3,(uint)uVar1);
              pCVar5 = *(CMutex **)((int)param_1 + 0x18);
              CGuard<CMutex>::CGuard(local_78,pCVar5);
                    /* try { // try from 0806461e to 08064622 has its CatchHandler @ 08064625 */
              CUdpRecvBuffer::operator_delete(local_58,pCVar5);
              CGuard<CMutex>::~CGuard(local_78);
            }
          }
          else {
            uVar1 = *(ushort *)local_58;
            uVar2 = *(ushort *)(local_58 + 2);
                    /* try { // try from 08064523 to 0806454e has its CatchHandler @ 080646af */
            CMyFileLog::CMyFileLog(local_44,"dispatch",0x77);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_44,"./log/recvErr",
                       "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                       (uint)uVar2,uVar3,(uint)uVar1);
            pCVar5 = *(CMutex **)((int)param_1 + 0x18);
            CGuard<CMutex>::CGuard(local_74,pCVar5);
                    /* try { // try from 0806456a to 0806456e has its CatchHandler @ 08064571 */
            CUdpRecvBuffer::operator_delete(local_58,pCVar5);
            CGuard<CMutex>::~CGuard(local_74);
          }
        }
        else {
          uVar1 = *(ushort *)local_58;
          uVar2 = *(ushort *)(local_58 + 2);
                    /* try { // try from 0806446c to 08064497 has its CatchHandler @ 080646af */
          CMyFileLog::CMyFileLog(local_4c,"dispatch",0x6c);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_4c,"./log/recvErr",
                     "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                     (uint)uVar2,uVar3,(uint)uVar1);
          pCVar5 = *(CMutex **)((int)param_1 + 0x18);
          CGuard<CMutex>::CGuard(local_70,pCVar5);
                    /* try { // try from 080644b3 to 080644b7 has its CatchHandler @ 080644ba */
          CUdpRecvBuffer::operator_delete(local_58,pCVar5);
          CGuard<CMutex>::~CGuard(local_70);
        }
      }
      else {
        pCVar5 = *(CMutex **)((int)param_1 + 0x18);
        CGuard<CMutex>::CGuard(local_6c,pCVar5);
                    /* try { // try from 080643f2 to 080643f6 has its CatchHandler @ 080643f9 */
        CUdpRecvBuffer::operator_delete(local_58,pCVar5);
        CGuard<CMutex>::~CGuard(local_6c);
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0806425e to 08064262 has its CatchHandler @ 080642d8 */
  std::string::string(local_54,"NetworkThread is Not Ready!\n",&local_4d);
  this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0806427d to 08064281 has its CatchHandler @ 08064284 */
  CDNFException::CDNFException(this,local_54);
                    /* try { // try from 080642c3 to 080642c7 has its CatchHandler @ 080642ca */
  std::string::~string(local_54);
  std::allocator<char>::~allocator((allocator<char> *)&local_4d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08064312 to 08064336 has its CatchHandler @ 080646af */
  __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFNetworkThread.cpp](source/DNFServer/GameServer/DBMW/DNFNetworkThread.cpp)（约第 48 行）：

```cpp
void CNetworkThread::dispatch(void* param)
{
    if (!m_udpQueue || !m_udpHandler || !m_udpQLock)
        throw CDNFException("NetworkThread is Not Ready!\n");
    DNFFLib::Sleep_Ext(5, 0);
    puts("Network Thread Start!");
    m_stop = 1;
    try
    {
        while (m_stop)
        {
            CUdpRecvBuffer* buf;
            {
                CGuard<CMutex> guard(m_udpBLock);
                buf = new CUdpRecvBuffer;
            }
            int size = 0x1800;
            unsigned int addr = 0;
            unsigned short port = 0;
            if (((CUdpHandler*)m_udpHandler)->RecvFromClient(
                    (char*)buf, &size, &addr, &port) != 1)
            {
                {
                    CGuard<CMutex> guard(m_udpBLock);
                    delete buf;
                }
                continue;
            }
            if (((PacketHeader*)buf)->packetSize != size)
            {
                CMyFileLog log(__FUNCTION__, 0x6c);
                log("./log/recvErr",
                    "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                    ((PacketHeader*)buf)->packetSize, size,
                    ((PacketHeader*)buf)->packetId);
                {
                    CGuard<CMutex> guard(m_udpBLock);
                    delete buf;
                }
                continue;
            }
            if (((PacketHeader*)buf)->packetSize > 0x17ff)
            {
                CMyFileLog log(__FUNCTION__, 0x77);
                log("./log/recvErr",
                    "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                    ((PacketHeader*)buf)->packetSize, size,
                    ((PacketHeader*)buf)->packetId);
                {
                    CGuard<CMutex> guard(m_udpBLock);
                    delete buf;
                }
                continue;
            }
            if (size > 0x1800)
            {
                CMyFileLog log(__FUNCTION__, 0x83);
                log("./log/recvErr",
                    "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                    ((PacketHeader*)buf)->packetSize, size,
                    ((PacketHeader*)buf)->packetId);
                {
                    CGuard<CMutex> guard(m_udpBLock);
                    delete buf;
                }
                continue;
            }
            {
                CGuard<CMutex> guard(m_udpQLock);
                m_udpQueue->push(buf);
            }
        }
    }
    catch (CDNFException& e)
    {
        printf("CNetworkThread::dispatch() Exception Break : %s\n", e.what());
        throw CDNFException("CNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
    catch (...)
    {
        puts("CNetworkThread::dispatch() Exception Break");
        throw CDNFException("CNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
}
```
