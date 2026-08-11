# _ZN14CPacketDecoder10UdpProcessEv

`CPacketDecoder::UdpProcess()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x80636d4` | `0x360` | `0x8059978` | `0x35f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,252 +1,255 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x21>
+je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x356>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xed>
-lea    -0x35(%ebp),%eax
+jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x33b>
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketDecoder is Not Ready!\n",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x3c(%ebp),%esi
+lea    -0x30(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x98>
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x9c>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x92>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xaf>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xaf>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xca>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xaf>
-call   <T> <_ZSt9terminatev>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x35(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x35(%ebp),%eax
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x96>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xb3>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xb3>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xce>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xb3>
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
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x33f>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE5frontEv>
 mov    (%eax),%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE3popEv>
-cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x33f>
-mov    -0x24(%ebp),%eax
-mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x33a>
+mov    -0x20(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x64,-0x1c(%ebp)
-jle    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x1a6>
-mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%edi
-mov    -0x20(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%esi
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
-mov    %eax,%ebx
+cmp    $0x64,%eax
+seta   %al
+test   %al,%al
+je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x19d>
 movl   $0x91,0x8(%esp)
 movl   $"UdpProcess",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%esi
+mov    -0x1c(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%ebx
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"cnt(%d)id(%d)size(%d)",0x8(%esp)
 movl   $"./log/UdpRecv",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2f0>
+mov    0x8(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2f7>
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-mov    %eax,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x200>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x1f9>
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
+mov    -0x1c(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %eax,0x8(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",(%esp)
 call   <T> <printf>
-lea    -0x25(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x25(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x2c(%ebp),%esi
+lea    -0x28(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2a2>
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x29b>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x29c>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2b9>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2b9>
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2d4>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2b9>
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
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x295>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2b2>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2b2>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2cd>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2b2>
+call   <T> <_ZSt9terminatev>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x21(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x334>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x32d>
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
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x33b>
+nop
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xf9>
+jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xf1>
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x357>
+nop
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketDecoder::UdpProcess() */

void __thiscall CPacketDecoder::_ZN14CPacketDecoder10UdpProcessEv(CPacketDecoder *this)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  CDNFException *pCVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  CMutex *pCVar7;
  CGuard<CMutex> local_48 [4];
  CGuard<CMutex> local_44 [4];
  string local_40 [7];
  allocator local_39;
  CMyFileLog local_38 [8];
  string local_30 [7];
  allocator local_29;
  CUdpRecvBuffer *local_28;
  CUdpRecvBuffer *local_24;
  int local_20;
  
  if ((*(int *)(this + 0xc) != 0) && (*(int *)(this + 0x10) != 0)) {
    local_28 = (CUdpRecvBuffer *)0x0;
    while( true ) {
      do {
        cVar3 = std::
                queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>::
                empty(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                        **)(this + 0xc));
        if (cVar3 == '\x01') {
          return;
        }
        puVar5 = (undefined4 *)
                 std::
                 queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                 ::front();
        local_28 = (CUdpRecvBuffer *)*puVar5;
        std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>::pop
                  (*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                     **)(this + 0xc));
      } while (local_28 == (CUdpRecvBuffer *)0x0);
      local_24 = local_28;
      local_20 = std::
                 queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                 ::size(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                          **)(this + 0xc));
      if (100 < local_20) {
        uVar1 = *(ushort *)(local_24 + 2);
        uVar2 = *(ushort *)local_24;
        uVar6 = std::
                queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>::
                size(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                       **)(this + 0xc));
        CMyFileLog::CMyFileLog(local_38,"UdpProcess",0x91);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_38,"./log/UdpRecv","cnt(%d)id(%d)size(%d)",uVar6,(uint)uVar2,(uint)uVar1);
      }
      cVar3 = MsgDecode(this,(PacketHeader *)local_24);
      if (cVar3 != '\x01') break;
      pCVar7 = *(CMutex **)(this + 0x14);
      CGuard<CMutex>::CGuard(local_48,pCVar7);
                    /* try { // try from 080639e6 to 080639ea has its CatchHandler @ 080639ed */
      CUdpRecvBuffer::operator_delete(local_28,pCVar7);
      CGuard<CMutex>::~CGuard(local_48);
    }
    pCVar7 = *(CMutex **)(this + 0x14);
    CGuard<CMutex>::CGuard(local_44,pCVar7);
                    /* try { // try from 080638b2 to 080638b6 has its CatchHandler @ 080638b9 */
    CUdpRecvBuffer::operator_delete(local_28,pCVar7);
    CGuard<CMutex>::~CGuard(local_44);
    printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",local_24,
           (uint)*(ushort *)local_24);
    std::allocator<char>::allocator();
                    /* try { // try from 0806391f to 08063923 has its CatchHandler @ 0806398d */
    std::string::string(local_30,
                        "CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!",
                        &local_29);
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0806393e to 08063942 has its CatchHandler @ 08063945 */
    CDNFException::CDNFException(pCVar4,local_30);
                    /* try { // try from 0806397c to 08063980 has its CatchHandler @ 08063983 */
    std::string::~string(local_30);
    std::allocator<char>::~allocator((allocator<char> *)&local_29);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08063715 to 08063719 has its CatchHandler @ 08063783 */
  std::string::string(local_40,"CPacketDecoder is Not Ready!\n",&local_39);
  pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08063734 to 08063738 has its CatchHandler @ 0806373b */
  CDNFException::CDNFException(pCVar4,local_40);
                    /* try { // try from 08063772 to 08063776 has its CatchHandler @ 08063779 */
  std::string::~string(local_40);
  std::allocator<char>::~allocator((allocator<char> *)&local_39);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketDecoder.cpp](source/DNFServer/GameServer/DBMW/DNFPacketDecoder.cpp)（约第 206 行）：

```cpp
void CPacketDecoder::UdpProcess()
{
    if (!m_udpQueue || !m_udpQLock)
        throw CDNFException("CPacketDecoder is Not Ready!\n");
    while (!m_udpQueue->empty())
    {
        CUdpRecvBuffer* buf = m_udpQueue->front();
        m_udpQueue->pop();
        if (!buf)
            continue;
        PacketHeader* p = (PacketHeader*)buf;
        int size = m_udpQueue->size();
        if (CAppLoadCheckerInstance()->CheckUdpRecvQ(size))
        {
            CAppLoadCheckerInstance()->RequestDB(m_serverHandler, 2, size);
        }
        if (!MsgDecode(p))
        {
            {
                CGuard<CMutex> guard(m_udpBLock);
                delete buf;
            }
            printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",
                   p, p->packetId);
            throw CDNFException(
                "CPacketDecoder::MsgDecode() Undefined Packet Arrive Exception Break!");
        }
        {
            CGuard<CMutex> guard(m_udpBLock);
            delete buf;
        }
    }
}
```
