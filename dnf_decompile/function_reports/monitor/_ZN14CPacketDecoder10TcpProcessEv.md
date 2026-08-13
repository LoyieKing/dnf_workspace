# _ZN14CPacketDecoder10TcpProcessEv

`CPacketDecoder::TcpProcess()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807cfd6` | `0x333` | `0x8068028` | `0x33e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,242 +1,250 @@
+mov    0xc(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN14CPacketDecoder10TcpProcessEv+0x269>
+mov    0x8(%ebp),%eax
+mov    0x10(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN14CPacketDecoder10TcpProcessEv+0x269>
+movl   $0x0,-0x28(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE5emptyEv>
+test   %al,%al
+jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x335>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE5frontEv>
+mov    (%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE3popEv>
+cmpl   $0x0,-0x28(%ebp)
+sete   %al
+test   %al,%al
+jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2c>
+mov    -0x28(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
+mov    %eax,-0x20(%ebp)
+call   <T> <_Z23CAppLoadCheckerInstancev>
+mov    %eax,-0x1c(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15CAppLoadChecker13CheckTcpRecvQEi>
+test   %al,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN14CPacketDecoder10TcpProcessEv+0xcc>
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    -0x20(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $0x1,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15CAppLoadChecker9RequestDBEP14CServerHandlerii>
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader>
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x134>
+mov    0x8(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CTcpRecvBufferdlEPv>
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x124>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2c>
+nop
+mov    0x8(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CTcpRecvBufferdlEPv>
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x172>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    -0x28(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,0x8(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+movl   $"[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",(%esp)
+call   <T> <printf>
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+lea    -0x31(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+lea    -0x38(%ebp),%esi
+movl   $0x8,(%esp)
+call   <T> <__cxa_allocate_exception>
+mov    %eax,%ebx
+mov    %ebx,%eax
+mov    %esi,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CDNFExceptionC1ERKSs>
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x214>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <__cxa_free_exception>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x20e>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x22b>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x22b>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x246>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x22b>
+call   <T> <_ZSt9terminatev>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
+movl   $&_ZTI13CDNFException,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <__cxa_throw>
+lea    -0x29(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+lea    -0x29(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"CPacketDecoder is Not Ready!\n",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+lea    -0x30(%ebp),%esi
+movl   $0x8,(%esp)
+call   <T> <__cxa_allocate_exception>
+mov    %eax,%ebx
+mov    %ebx,%eax
+mov    %esi,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CDNFExceptionC1ERKSs>
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2e0>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <__cxa_free_exception>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2da>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2f7>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2f7>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x312>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2f7>
+call   <T> <_ZSt9terminatev>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x29(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x29(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
+movl   $&_ZTI13CDNFException,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <__cxa_throw>
+nop
+add    $0x4c,%esp
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
+ret
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN14CPacketDecoder10TcpProcessEv+0x21>
-mov    0x8(%ebp),%eax
-mov    0x10(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xed>
-lea    -0x2d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-lea    -0x2d(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"CPacketDecoder is Not Ready!\n",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x34(%ebp),%esi
-movl   $0x8,(%esp)
-call   <T> <__cxa_allocate_exception>
-mov    %eax,%ebx
-mov    %ebx,%eax
-mov    %esi,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x98>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <__cxa_free_exception>
-mov    %edi,%eax
-mov    %esi,%edx
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x92>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xaf>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xaf>
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xca>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xaf>
-call   <T> <_ZSt9terminatev>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x2d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x2d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
-movl   $&_ZTI13CDNFException,0x4(%esp)
-mov    %ebx,(%esp)
-call   <T> <__cxa_throw>
-movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x312>
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE5frontEv>
-mov    (%eax),%eax
-mov    %eax,-0x24(%ebp)
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE3popEv>
-cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN14CPacketDecoder10TcpProcessEv+0x312>
-mov    -0x24(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
-mov    %eax,-0x1c(%ebp)
-call   <T> <_Z23CAppLoadCheckerInstancev>
-mov    -0x1c(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN15CAppLoadChecker13CheckTcpRecvQEi>
-test   %al,%al
-je     <T> <_ZN14CPacketDecoder10TcpProcessEv+0x179>
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%ebx
-call   <T> <_Z23CAppLoadCheckerInstancev>
-mov    -0x1c(%ebp),%edx
-mov    %edx,0xc(%esp)
-movl   $0x1,0x8(%esp)
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN15CAppLoadChecker9RequestDBEP14CServerHandlerii>
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2ca>
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-mov    %eax,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CTcpRecvBufferdlEPv>
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x1d3>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    -0x20(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%eax
-mov    %eax,0x8(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-movl   $"[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",(%esp)
-call   <T> <printf>
-lea    -0x25(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-lea    -0x25(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x2c(%ebp),%esi
-movl   $0x8,(%esp)
-call   <T> <__cxa_allocate_exception>
-mov    %eax,%ebx
-mov    %ebx,%eax
-mov    %esi,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x275>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <__cxa_free_exception>
-mov    %edi,%eax
-mov    %esi,%edx
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x26f>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x28c>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x28c>
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2a7>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x28c>
-call   <T> <_ZSt9terminatev>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x25(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x25(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
-movl   $&_ZTI13CDNFException,0x4(%esp)
-mov    %ebx,(%esp)
-call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-mov    %eax,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CTcpRecvBufferdlEPv>
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x307>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE5emptyEv>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xf9>
-add    $0x4c,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
-ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketDecoder::TcpProcess() */

void __thiscall CPacketDecoder::_ZN14CPacketDecoder10TcpProcessEv(CPacketDecoder *this)

{
  CServerHandler *pCVar1;
  char cVar2;
  CDNFException *pCVar3;
  int *piVar4;
  CAppLoadChecker *pCVar5;
  CMutex *pCVar6;
  CGuard<CMutex> local_40 [4];
  CGuard<CMutex> local_3c [4];
  string local_38 [7];
  allocator local_31;
  string local_30 [7];
  allocator local_29;
  CTcpRecvBuffer *local_28;
  CTcpRecvBuffer *local_24;
  int local_20;
  
  if ((*(int *)(this + 0xc) != 0) && (*(int *)(this + 0x10) != 0)) {
    local_28 = (CTcpRecvBuffer *)0x0;
    while( true ) {
      do {
        cVar2 = std::
                queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>::
                empty(*(queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>
                        **)(this + 0xc));
        if (cVar2 == '\x01') {
          return;
        }
        piVar4 = (int *)std::
                        queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>
                        ::front();
        local_28 = (CTcpRecvBuffer *)*piVar4;
        std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>::pop
                  (*(queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>
                     **)(this + 0xc));
      } while (local_28 == (CTcpRecvBuffer *)0x0);
      local_24 = local_28;
      local_20 = std::
                 queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>
                 ::size(*(queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>
                          **)(this + 0xc));
      pCVar5 = (CAppLoadChecker *)CAppLoadCheckerInstance();
      cVar2 = CAppLoadChecker::CheckTcpRecvQ(pCVar5,local_20);
      if (cVar2 != '\0') {
        pCVar1 = *(CServerHandler **)(this + 0x18);
        pCVar5 = (CAppLoadChecker *)CAppLoadCheckerInstance();
        CAppLoadChecker::RequestDB(pCVar5,pCVar1,1,local_20);
      }
      cVar2 = MsgDecode(this,(PacketHeader *)local_24);
      if (cVar2 != '\x01') break;
      pCVar6 = *(CMutex **)(this + 0x14);
      CGuard<CMutex>::CGuard(local_40,pCVar6);
                    /* try { // try from 0807d2bb to 0807d2bf has its CatchHandler @ 0807d2c2 */
      CTcpRecvBuffer::operator_delete(local_28,pCVar6);
      CGuard<CMutex>::~CGuard(local_40);
    }
    pCVar6 = *(CMutex **)(this + 0x14);
    CGuard<CMutex>::CGuard(local_3c,pCVar6);
                    /* try { // try from 0807d187 to 0807d18b has its CatchHandler @ 0807d18e */
    CTcpRecvBuffer::operator_delete(local_28,pCVar6);
    CGuard<CMutex>::~CGuard(local_3c);
    printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",local_24,
           (uint)*(ushort *)local_24);
    std::allocator<char>::allocator();
                    /* try { // try from 0807d1f4 to 0807d1f8 has its CatchHandler @ 0807d262 */
    std::string::string(local_30,
                        "CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!",
                        &local_29);
    pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807d213 to 0807d217 has its CatchHandler @ 0807d21a */
    CDNFException::CDNFException(pCVar3,local_30);
                    /* try { // try from 0807d251 to 0807d255 has its CatchHandler @ 0807d258 */
    std::string::~string(local_30);
    std::allocator<char>::~allocator((allocator<char> *)&local_29);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0807d017 to 0807d01b has its CatchHandler @ 0807d085 */
  std::string::string(local_38,"CPacketDecoder is Not Ready!\n",&local_31);
  pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807d036 to 0807d03a has its CatchHandler @ 0807d03d */
  CDNFException::CDNFException(pCVar3,local_38);
                    /* try { // try from 0807d074 to 0807d078 has its CatchHandler @ 0807d07b */
  std::string::~string(local_38);
  std::allocator<char>::~allocator((allocator<char> *)&local_31);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketDecoder.cpp](source/DNFServer/GameServer/Monitor/DNFPacketDecoder.cpp)（约第 200 行）：

```cpp
void CPacketDecoder::TcpProcess()
{
    if (m_net.m_parseQ != 0 && m_net.m_recvQ != 0)
    {
        CTcpRecvBuffer* buf = 0;
        while (true)
        {
            do
            {
                if (((std::queue<CTcpRecvBuffer*>*)m_net.m_parseQ)->empty())
                {
                    return;
                }
                buf = ((std::queue<CTcpRecvBuffer*>*)m_net.m_parseQ)->front();
                ((std::queue<CTcpRecvBuffer*>*)m_net.m_parseQ)->pop();
            } while (buf == 0);
            CTcpRecvBuffer* pkt = buf;
            int qsize = ((std::queue<CTcpRecvBuffer*>*)m_net.m_parseQ)->size();
            CAppLoadChecker* checker = CAppLoadCheckerInstance();
            if (checker->CheckTcpRecvQ(qsize))
            {
                checker->RequestDB((CServerHandler*)m_net.m_handler, 1, qsize);
            }
            if (MsgDecode((PacketHeader*)buf) != 1)
            {
                break;
            }
            {
                CGuard<CMutex> guard((CMutex*)m_net.m_bLock);
                delete buf;
            }
        }
        {
            CGuard<CMutex> guard((CMutex*)m_net.m_bLock);
            delete buf;
        }
        printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n", buf,
               *(unsigned short*)buf);
        throw CDNFException(
            "CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!");
    }
    throw CDNFException("CPacketDecoder is Not Ready!\n");
}
```
