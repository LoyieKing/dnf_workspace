# _ZN17CUdpNetworkThread8dispatchEPv

`CUdpNetworkThread::dispatch(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x806b180` | `0x8eb` | `0x80556f2` | `0x8d0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,632 +1,638 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x13c,%esp
+sub    $0x12c,%esp
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
-lea    -0x69(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x69(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"NetworkThread is Not Ready!\n",0x4(%esp)
-lea    -0x70(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x70(%ebp),%esi
+lea    -0x48(%ebp),%esi
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
-lea    -0x70(%ebp),%eax
+lea    -0x48(%ebp),%eax
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
-lea    -0x70(%ebp),%eax
+lea    -0x48(%ebp),%eax
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
-lea    -0x69(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b8>
-lea    -0x69(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x69d>
+lea    -0x41(%ebp),%eax
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
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CUdpHandler15GetServerSocketEv>
-mov    %eax,-0x38(%ebp)
+mov    %eax,-0x30(%ebp)
 movl   $0x0,0x8(%esp)
 movl   $0x3,0x4(%esp)
-mov    -0x38(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fcntl>
-mov    %eax,-0x30(%ebp)
-mov    -0x30(%ebp),%eax
-or     $0x8,%ah
+mov    %eax,-0x2c(%ebp)
+orl    $0x800,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x4,0x4(%esp)
-mov    -0x38(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fcntl>
-mov    %eax,-0x34(%ebp)
-cmpl   $0x0,-0x34(%ebp)
-jns    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a0>
+shr    $0x1f,%eax
+test   %al,%al
+je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x67b>
 movl   $"fcntl error!",(%esp)
 call   <T> <puts>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x8e0>
-lea    -0x120(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x1bb>
-mov    -0x24(%ebp),%edx
-mov    -0x20(%ebp),%eax
-movl   $0x0,(%eax,%edx,4)
-addl   $0x1,-0x24(%ebp)
-cmpl   $0x1f,-0x24(%ebp)
-setbe  %al
-test   %al,%al
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x1aa>
-movl   $0x1,-0x88(%ebp)
-movl   $0x0,-0x84(%ebp)
-mov    -0x38(%ebp),%eax
-shr    $0x5,%eax
+mov    $0x0,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x8c5>
+mov    $0x0,%eax
+mov    $0x20,%ecx
+lea    -0x118(%ebp),%edx
+mov    %edx,%edi
+cld
+rep stos %eax,%es:(%edi)
+mov    %edi,%edx
+mov    %ecx,-0x24(%ebp)
+mov    %edx,-0x20(%ebp)
+mov    -0x30(%ebp),%eax
+lea    0x1f(%eax),%edx
+test   %eax,%eax
+cmovs  %edx,%eax
+sar    $0x5,%eax
+mov    %eax,%ebx
+mov    -0x118(%ebp,%eax,4),%esi
+mov    -0x30(%ebp),%eax
 mov    %eax,%edx
-mov    -0x120(%ebp,%eax,4),%eax
-mov    -0x38(%ebp),%ecx
-and    $0x1f,%ecx
-mov    $0x1,%ebx
-mov    %ebx,%esi
-shl    %cl,%esi
-mov    %esi,%ecx
-or     %ecx,%eax
-mov    %eax,-0x120(%ebp,%edx,4)
-mov    -0x38(%ebp),%eax
-add    $0x1,%eax
-mov    %eax,-0x2c(%ebp)
-lea    -0x88(%ebp),%eax
+sar    $0x1f,%edx
+shr    $0x1b,%edx
+add    %edx,%eax
+and    $0x1f,%eax
+sub    %edx,%eax
+mov    $0x1,%edx
+mov    %edx,%edi
+mov    %eax,%ecx
+shl    %cl,%edi
+mov    %edi,%eax
+or     %esi,%eax
+mov    %eax,-0x118(%ebp,%ebx,4)
+movl   $0x1,-0x50(%ebp)
+movl   $0x0,-0x4c(%ebp)
+mov    -0x30(%ebp),%eax
+lea    0x1(%eax),%edx
+lea    -0x50(%ebp),%eax
 mov    %eax,0x10(%esp)
 movl   $0x0,0xc(%esp)
 movl   $0x0,0x8(%esp)
-lea    -0x120(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
+lea    -0x118(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <select>
-mov    %eax,-0x34(%ebp)
-cmpl   $0x0,-0x34(%ebp)
-js     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x69c>
-mov    -0x38(%ebp),%eax
-shr    $0x5,%eax
-mov    -0x120(%ebp,%eax,4),%edx
-mov    -0x38(%ebp),%eax
+shr    $0x1f,%eax
+test   %al,%al
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x677>
+mov    -0x30(%ebp),%eax
+lea    0x1f(%eax),%edx
+test   %eax,%eax
+cmovs  %edx,%eax
+sar    $0x5,%eax
+mov    -0x118(%ebp,%eax,4),%ebx
+mov    -0x30(%ebp),%eax
+mov    %eax,%edx
+sar    $0x1f,%edx
+shr    $0x1b,%edx
+add    %edx,%eax
 and    $0x1f,%eax
-mov    %edx,%ebx
-mov    %eax,%ecx
-sar    %cl,%ebx
-mov    %ebx,%eax
+sub    %edx,%eax
+mov    %ebx,%edi
+mov    %eax,%ecx
+sar    %cl,%edi
+mov    %edi,%eax
 and    $0x1,%eax
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x69f>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x67a>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x8c(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 movl   $0x1804,(%esp)
 call   <T> <_ZN14CUdpRecvBuffernwEj>
-mov    %eax,-0x74(%ebp)
-lea    -0x8c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-movl   $0x1800,-0x78(%ebp)
-movw   $0x0,-0x7a(%ebp)
-movl   $0x0,-0x80(%ebp)
-mov    -0x74(%ebp),%eax
+mov    %eax,-0x54(%ebp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x2cd>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x69d>
+movl   $0x1800,-0x58(%ebp)
+movl   $0x0,-0x5c(%ebp)
+movw   $0x0,-0x5e(%ebp)
+mov    -0x54(%ebp),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-lea    -0x7a(%ebp),%ecx
+lea    -0x5e(%ebp),%ecx
 mov    %ecx,0x10(%esp)
-lea    -0x80(%ebp),%ecx
+lea    -0x5c(%ebp),%ecx
 mov    %ecx,0xc(%esp)
-lea    -0x78(%ebp),%ecx
+lea    -0x58(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x307>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x8c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b8>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x365>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x362>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x90(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x74(%ebp),%eax
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x352>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x90(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b8>
-lea    -0x90(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a0>
-mov    -0x74(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%edx
-mov    -0x78(%ebp),%eax
-cmp    %eax,%edx
-je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x42f>
-mov    -0x28(%ebp),%eax
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x67b>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x69d>
+mov    -0x54(%ebp),%eax
+add    $0x2,%eax
 movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x78(%ebp),%esi
-mov    -0x28(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
+mov    %ax,-0x26(%ebp)
+mov    -0x58(%ebp),%eax
+cmp    -0x26(%ebp),%ax
+je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x41c>
 movl   $0xb5,0x8(%esp)
 movl   $"dispatch",0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzwl -0x26(%ebp),%ecx
+mov    -0x58(%ebp),%edx
+mov    -0x54(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
 movl   $"./log/recvErr",0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x94(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x74(%ebp),%eax
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x41c>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x94(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b8>
-lea    -0x94(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a0>
-mov    -0x28(%ebp),%eax
-movzwl 0x2(%eax),%eax
-cmp    $0x17ff,%ax
-jbe    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4ef>
-mov    -0x28(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x78(%ebp),%esi
-mov    -0x28(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x40c>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x69d>
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x67b>
+cmpw   $0x17ff,-0x26(%ebp)
+jbe    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4c8>
 movl   $0xc0,0x8(%esp)
 movl   $"dispatch",0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x7c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzwl -0x26(%ebp),%ecx
+mov    -0x58(%ebp),%edx
+mov    -0x54(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
 movl   $"./log/recvErr",0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x7c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x98(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x74(%ebp),%eax
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4dc>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x98(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b8>
-lea    -0x98(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a0>
-mov    -0x78(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b8>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x69d>
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x67b>
+mov    -0x58(%ebp),%eax
 cmp    $0x1800,%eax
-jbe    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5ac>
-mov    -0x28(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x78(%ebp),%esi
-mov    -0x28(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
+jle    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x585>
 movl   $0xcc,0x8(%esp)
 movl   $"dispatch",0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzwl -0x26(%ebp),%ecx
+mov    -0x58(%ebp),%edx
+mov    -0x54(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
 movl   $"./log/recvErr",0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x9c(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x74(%ebp),%eax
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x599>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x9c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b8>
-lea    -0x9c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a0>
-mov    -0x80(%ebp),%edx
-mov    -0x28(%ebp),%eax
-mov    %edx,0x6(%eax)
-movzwl -0x7a(%ebp),%edx
-mov    -0x28(%ebp),%eax
-mov    %dx,0x4(%eax)
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x572>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x69d>
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x67b>
+mov    -0x54(%ebp),%eax
+lea    0x6(%eax),%edx
+mov    -0x5c(%ebp),%eax
+mov    %eax,(%edx)
+mov    -0x54(%ebp),%eax
+lea    0x4(%eax),%edx
+movzwl -0x5e(%ebp),%eax
+mov    %ax,(%edx)
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0xa0(%ebp),%eax
+lea    -0x90(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
-lea    -0x74(%ebp),%edx
+lea    -0x54(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4pushERKS1_>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
 cmp    $0x64,%eax
 seta   %al
 test   %al,%al
-je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x68c>
-mov    -0x28(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%edi
-mov    -0x28(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%esi
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
-mov    %eax,%ebx
+je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x667>
 movl   $0xe0,0x8(%esp)
 movl   $"dispatch",0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzwl -0x26(%ebp),%esi
+mov    -0x54(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%ebx
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"buffer(%d) ,id(%d), size(%d) \n",0x8(%esp)
 movl   $"./log/recv",0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x68c>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0xa0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b8>
-lea    -0xa0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a0>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x667>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x69d>
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x67b>
 nop
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a0>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x67b>
 nop
 mov    0x8(%ebp),%eax
 movzbl 0x8(%eax),%eax
 test   %al,%al
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x198>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x8e0>
+setne  %al
+test   %al,%al
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x19f>
+mov    $0x0,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x8c5>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x7dd>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x7c2>
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
-lea    -0x41(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x41(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x48(%ebp),%esi
+lea    -0x40(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x76d>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x752>
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
-lea    -0x48(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x767>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x74c>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x78c>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x771>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x78c>
-lea    -0x48(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x771>
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x7a1>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x786>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x78c>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x771>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x41(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x7c8>
-lea    -0x41(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x7ad>
+lea    -0x39(%ebp),%eax
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
 movl   $"CNetworkThread::dispatch() Exception Break",(%esp)
 call   <T> <puts>
-lea    -0x39(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
+lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x870>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x855>
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
-lea    -0x40(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x86a>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x84f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x88f>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x874>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x88f>
-lea    -0x40(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x874>
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x8a4>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x889>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x88f>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x874>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x39(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x8cb>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x8b0>
+lea    -0x31(%ebp),%eax
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
-add    $0x13c,%esp
+add    $0x12c,%esp
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
  char cVar3;
  CDNFException *this;
  uint uVar4;
  undefined4 uVar5;
  CMutex *pCVar6;
  fd_set local_124;
  CGuard<CMutex> local_a4 [4];
  CGuard<CMutex> local_a0 [4];
  CGuard<CMutex> local_9c [4];
  CGuard<CMutex> local_98 [4];
  CGuard<CMutex> local_94 [4];
  CGuard<CMutex> local_90 [4];
  timeval local_8c;
  uint local_84;
  ushort local_7e;
  uint local_7c;
  CUdpRecvBuffer *local_78;
  string local_74 [7];
  allocator local_6d;
  CMyFileLog local_6c [8];
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [24];
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  CUdpRecvBuffer *local_2c;
  uint local_28;
  fd_set *local_24;
  
  if (((*(int *)((int)param_1 + 0xc) != 0) && (*(int *)((int)param_1 + 0x10) != 0)) &&
     (*(int *)((int)param_1 + 0x14) != 0)) {
    DNFFLib::Sleep_Ext(5,0);
    puts("Network Thread Start!");
    *(undefined1 *)((int)param_1 + 8) = 1;
    local_3c = CUdpHandler::GetServerSocket(*(CUdpHandler **)((int)param_1 + 0x10));
    local_34 = fcntl(local_3c,3,0);
    local_38 = fcntl(local_3c,4,local_34 | 0x800);
    if (local_38 < 0) {
      puts("fcntl error!");
    }
    else {
      while (*(char *)((int)param_1 + 8) != '\0') {
        local_24 = &local_124;
        for (local_28 = 0; local_28 < 0x20; local_28 = local_28 + 1) {
          local_124.fds_bits[local_28] = 0;
        }
        local_8c.tv_sec = 1;
        local_8c.tv_usec = 0;
        local_124.fds_bits[local_3c >> 5] =
             local_124.fds_bits[local_3c >> 5] | 1 << ((byte)local_3c & 0x1f);
        local_30 = local_3c + 1;
        local_38 = select(local_30,&local_124,(fd_set *)0x0,(fd_set *)0x0,&local_8c);
        if ((-1 < local_38) &&
           (((byte)(local_124.fds_bits[local_3c >> 5] >> ((byte)local_3c & 0x1f)) & 1) == 1)) {
          pCVar6 = *(CMutex **)((int)param_1 + 0x18);
          CGuard<CMutex>::CGuard(local_90,pCVar6);
                    /* try { // try from 0806b410 to 0806b414 has its CatchHandler @ 0806b468 */
          local_78 = CUdpRecvBuffer::operator_new((CUdpRecvBuffer *)0x1804,(uint)pCVar6);
          CGuard<CMutex>::~CGuard(local_90);
          local_7c = 0x1800;
          local_7e = 0;
          local_84 = 0;
                    /* try { // try from 0806b461 to 0806b465 has its CatchHandler @ 0806b834 */
          cVar3 = CUdpHandler::RecvFromClient
                            (*(CUdpHandler **)((int)param_1 + 0x10),(char *)local_78,
                             (int *)&local_7c,&local_84,&local_7e);
          uVar4 = local_7c;
          if (cVar3 == '\x01') {
            local_2c = local_78;
            if (*(ushort *)(local_78 + 2) == local_7c) {
              if (*(ushort *)(local_78 + 2) < 0x1800) {
                if (local_7c < 0x1801) {
                  *(uint *)(local_78 + 6) = local_84;
                  *(ushort *)(local_78 + 4) = local_7e;
                  CGuard<CMutex>::CGuard(local_a4,*(CMutex **)((int)param_1 + 0x14));
                    /* try { // try from 0806b768 to 0806b7ed has its CatchHandler @ 0806b7f0 */
                  std::
                  queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                  ::push(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                           **)((int)param_1 + 0xc),&local_78);
                  uVar4 = std::
                          queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                          ::size(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                                   **)((int)param_1 + 0xc));
                  if (100 < uVar4) {
                    uVar1 = *(ushort *)(local_2c + 2);
                    uVar2 = *(ushort *)local_2c;
                    uVar5 = std::
                            queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                            ::size(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                                     **)((int)param_1 + 0xc));
                    CMyFileLog::CMyFileLog(local_54,"dispatch",0xe0);
                    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                              (local_54,"./log/recv","buffer(%d) ,id(%d), size(%d) \n",uVar5,
                               (uint)uVar2,(uint)uVar1);
                  }
                  CGuard<CMutex>::~CGuard(local_a4);
                }
                else {
                  uVar1 = *(ushort *)local_78;
                  uVar2 = *(ushort *)(local_78 + 2);
                    /* try { // try from 0806b6a9 to 0806b6d4 has its CatchHandler @ 0806b834 */
                  CMyFileLog::CMyFileLog(local_5c,"dispatch",0xcc);
                  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                            (local_5c,"./log/recvErr",
                             "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                             (uint)uVar2,uVar4,(uint)uVar1);
                  pCVar6 = *(CMutex **)((int)param_1 + 0x18);
                  CGuard<CMutex>::CGuard(local_a0,pCVar6);
                    /* try { // try from 0806b6f3 to 0806b6f7 has its CatchHandler @ 0806b6fa */
                  CUdpRecvBuffer::operator_delete(local_78,pCVar6);
                  CGuard<CMutex>::~CGuard(local_a0);
                }
              }
              else {
                uVar1 = *(ushort *)local_78;
                uVar2 = *(ushort *)(local_78 + 2);
                    /* try { // try from 0806b5ec to 0806b617 has its CatchHandler @ 0806b834 */
                CMyFileLog::CMyFileLog(local_64,"dispatch",0xc0);
                CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                          (local_64,"./log/recvErr",
                           "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                           (uint)uVar2,uVar4,(uint)uVar1);
                pCVar6 = *(CMutex **)((int)param_1 + 0x18);
                CGuard<CMutex>::CGuard(local_9c,pCVar6);
                    /* try { // try from 0806b636 to 0806b63a has its CatchHandler @ 0806b63d */
                CUdpRecvBuffer::operator_delete(local_78,pCVar6);
                CGuard<CMutex>::~CGuard(local_9c);
              }
            }
            else {
              uVar1 = *(ushort *)local_78;
              uVar2 = *(ushort *)(local_78 + 2);
                    /* try { // try from 0806b52c to 0806b557 has its CatchHandler @ 0806b834 */
              CMyFileLog::CMyFileLog(local_6c,"dispatch",0xb5);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_6c,"./log/recvErr",
                         "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n"
                         ,(uint)uVar2,uVar4,(uint)uVar1);
              pCVar6 = *(CMutex **)((int)param_1 + 0x18);
              CGuard<CMutex>::CGuard(local_98,pCVar6);
                    /* try { // try from 0806b576 to 0806b57a has its CatchHandler @ 0806b57d */
              CUdpRecvBuffer::operator_delete(local_78,pCVar6);
              CGuard<CMutex>::~CGuard(local_98);
            }
          }
          else {
            pCVar6 = *(CMutex **)((int)param_1 + 0x18);
            CGuard<CMutex>::CGuard(local_94,pCVar6);
                    /* try { // try from 0806b4ac to 0806b4b0 has its CatchHandler @ 0806b4b3 */
            CUdpRecvBuffer::operator_delete(local_78,pCVar6);
            CGuard<CMutex>::~CGuard(local_94);
          }
        }
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0806b1ce to 0806b1d2 has its CatchHandler @ 0806b248 */
  std::string::string(local_74,"NetworkThread is Not Ready!\n",&local_6d);
  this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0806b1ed to 0806b1f1 has its CatchHandler @ 0806b1f4 */
  CDNFException::CDNFException(this,local_74);
                    /* try { // try from 0806b233 to 0806b237 has its CatchHandler @ 0806b23a */
  std::string::~string(local_74);
  std::allocator<char>::~allocator((allocator<char> *)&local_6d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0806b282 to 0806b3ba has its CatchHandler @ 0806b834 */
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
