# _ZN14CPacketDecoder10TcpProcessEv

`CPacketDecoder::TcpProcess()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8063a34` | `0x358` | `0x805960e` | `0x369` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,251 +1,260 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN14CPacketDecoder10TcpProcessEv+0x20>
+je     <T> <_ZN14CPacketDecoder10TcpProcessEv+0x360>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xec>
-lea    -0x35(%ebp),%eax
+jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x346>
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
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x97>
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x9b>
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
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x91>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xae>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xae>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xc9>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xae>
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
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x95>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xb2>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xb2>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xcd>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xb2>
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
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x338>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE5frontEv>
 mov    (%eax),%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE3popEv>
-cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN14CPacketDecoder10TcpProcessEv+0x338>
-mov    -0x24(%ebp),%eax
-mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN14CPacketDecoder10TcpProcessEv+0x345>
+mov    -0x20(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0xa,-0x1c(%ebp)
-jle    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x19f>
-mov    -0x20(%ebp),%eax
-mov    0x6(%eax),%edi
-mov    -0x20(%ebp),%eax
+cmp    $0xa,%eax
+seta   %al
+test   %al,%al
+je     <T> <_ZN14CPacketDecoder10TcpProcessEv+0x1a8>
+movl   $0xe7,0x8(%esp)
+movl   $"TcpProcess",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x20(%ebp),%eax
+add    $0x6,%eax
+movzbl (%eax),%eax
+movsbl %al,%edi
+mov    -0x1c(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%esi
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%ebx
-movl   $0xe7,0x8(%esp)
-movl   $"TcpProcess",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
 mov    %edi,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
-mov    -0x1c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"cnt(%)id(%d)size(%d)ip(%d)",0x8(%esp)
 movl   $"./log/TcpRecv",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2f0>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2fb>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpRecvBufferdlEPv>
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x1f9>
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
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x204>
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
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x29b>
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2a6>
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
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x295>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2b2>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2b2>
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2cd>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2b2>
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
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2a0>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2bd>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2bd>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2d8>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x2bd>
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
 mov    0x8(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpRecvBufferdlEPv>
-jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x32d>
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
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x338>
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
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x346>
+nop
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xf8>
+jne    <T> <_ZN14CPacketDecoder10TcpProcessEv+0xf0>
+jmp    <T> <_ZN14CPacketDecoder10TcpProcessEv+0x361>
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

/* CPacketDecoder::TcpProcess() */

void __thiscall CPacketDecoder::_ZN14CPacketDecoder10TcpProcessEv(CPacketDecoder *this)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  char cVar4;
  CDNFException *pCVar5;
  undefined4 *puVar6;
  CMutex *pCVar7;
  CGuard<CMutex> local_48 [4];
  CGuard<CMutex> local_44 [4];
  string local_40 [7];
  allocator local_39;
  CMyFileLog local_38 [8];
  string local_30 [7];
  allocator local_29;
  CTcpRecvBuffer *local_28;
  CTcpRecvBuffer *local_24;
  int local_20;
  
  if ((*(int *)this != 0) && (*(int *)(this + 4) != 0)) {
    local_28 = (CTcpRecvBuffer *)0x0;
    while( true ) {
      do {
        cVar4 = std::
                queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>::
                empty(*(queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>
                        **)this);
        if (cVar4 == '\x01') {
          return;
        }
        puVar6 = (undefined4 *)
                 std::
                 queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>
                 ::front();
        local_28 = (CTcpRecvBuffer *)*puVar6;
        std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>::pop
                  (*(queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>
                     **)this);
      } while (local_28 == (CTcpRecvBuffer *)0x0);
      local_24 = local_28;
      local_20 = std::
                 queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>
                 ::size(*(queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>
                          **)this);
      if (10 < local_20) {
        uVar3 = *(undefined4 *)(local_24 + 6);
        uVar1 = *(ushort *)(local_24 + 2);
        uVar2 = *(ushort *)local_24;
        CMyFileLog::CMyFileLog(local_38,"TcpProcess",0xe7);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_38,"./log/TcpRecv","cnt(%)id(%d)size(%d)ip(%d)",local_20,(uint)uVar2,
                   (uint)uVar1,uVar3);
      }
      cVar4 = MsgDecode(this,(PacketHeader *)local_24);
      if (cVar4 != '\x01') break;
      pCVar7 = *(CMutex **)(this + 8);
      CGuard<CMutex>::CGuard(local_48,pCVar7);
                    /* try { // try from 08063d3f to 08063d43 has its CatchHandler @ 08063d46 */
      CTcpRecvBuffer::operator_delete(local_28,pCVar7);
      CGuard<CMutex>::~CGuard(local_48);
    }
    pCVar7 = *(CMutex **)(this + 8);
    CGuard<CMutex>::CGuard(local_44,pCVar7);
                    /* try { // try from 08063c0b to 08063c0f has its CatchHandler @ 08063c12 */
    CTcpRecvBuffer::operator_delete(local_28,pCVar7);
    CGuard<CMutex>::~CGuard(local_44);
    printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",local_24,
           (uint)*(ushort *)local_24);
    std::allocator<char>::allocator();
                    /* try { // try from 08063c78 to 08063c7c has its CatchHandler @ 08063ce6 */
    std::string::string(local_30,
                        "CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!",
                        &local_29);
    pCVar5 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08063c97 to 08063c9b has its CatchHandler @ 08063c9e */
    CDNFException::CDNFException(pCVar5,local_30);
                    /* try { // try from 08063cd5 to 08063cd9 has its CatchHandler @ 08063cdc */
    std::string::~string(local_30);
    std::allocator<char>::~allocator((allocator<char> *)&local_29);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar5,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08063a74 to 08063a78 has its CatchHandler @ 08063ae2 */
  std::string::string(local_40,"CPacketDecoder is Not Ready!\n",&local_39);
  pCVar5 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08063a93 to 08063a97 has its CatchHandler @ 08063a9a */
  CDNFException::CDNFException(pCVar5,local_40);
                    /* try { // try from 08063ad1 to 08063ad5 has its CatchHandler @ 08063ad8 */
  std::string::~string(local_40);
  std::allocator<char>::~allocator((allocator<char> *)&local_39);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pCVar5,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketDecoder.cpp](source/DNFServer/GameServer/DBMW/DNFPacketDecoder.cpp)（约第 173 行）：

```cpp
void CPacketDecoder::TcpProcess()
{
    if (!m_tcpQueue || !m_tcpRecvQLock)
        throw CDNFException("CPacketDecoder is Not Ready!\n");
    while (!m_tcpQueue->empty())
    {
        CTcpRecvBuffer* buf = m_tcpQueue->front();
        m_tcpQueue->pop();
        if (!buf)
            continue;
        PacketHeader* p = (PacketHeader*)buf;
        int size = m_tcpQueue->size();
        if (CAppLoadCheckerInstance()->CheckTcpRecvQ(size))
        {
            CAppLoadCheckerInstance()->RequestDB(m_serverHandler, 1, size);
        }
        if (!MsgDecode(p))
        {
            {
                CGuard<CMutex> guard(m_tcpRecvBLock);
                delete buf;
            }
            printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",
                   p, p->packetId);
            throw CDNFException(
                "CPacketDecode::MsgDecode() Undefined Packet Arrived Exception Break!");
        }
        {
            CGuard<CMutex> guard(m_tcpRecvBLock);
            delete buf;
        }
    }
}
```
