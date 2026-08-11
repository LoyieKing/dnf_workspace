# _ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE

`nsl::RecvBuffer::Parse(nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80ba458` | `0x349` | `0x808204c` | `0x358` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,236 +1,241 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 movb   $0x1,-0x25(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser15isBindedSessionEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x313>
+je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x322>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads19getLittleWorkThreadEv>
 mov    0xc(%ebp),%edx
 mov    %eax,0x34(%edx)
-jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x313>
+jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x322>
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-cmp    $0x11,%eax
-ja     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x6a>
+cmpl   $0x11,-0x24(%ebp)
+ja     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x68>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x38(%eax)
-jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x332>
+jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x341>
 mov    0x8(%ebp),%eax
 movl   $0x1,0x38(%eax)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%eax
 lea    (%edx,%eax,1),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13PACKET_HEADER7getSizeEv>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-jns    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0xc2>
+jns    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0xc0>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"ERR: msgsize < 0 ",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
-jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x341>
+jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x350>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser16GetMaxPacketSizeEv>
 cmp    -0x1c(%ebp),%eax
-jl     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0xf0>
-mov    0x8(%ebp),%eax
-mov    0x34(%eax),%eax
-mov    %eax,%edx
-add    -0x1c(%ebp),%edx
-mov    0x8(%ebp),%eax
-mov    0x3c(%eax),%ecx
+jl     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0xeb>
+mov    0x8(%ebp),%eax
+mov    0x3c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x44(%eax),%eax
-lea    (%ecx,%eax,1),%eax
-cmp    %eax,%edx
-jle    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0xf7>
+add    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    0x34(%eax),%eax
+add    -0x1c(%ebp),%eax
+cmp    %eax,%edx
+jge    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0xf2>
 mov    $0x1,%eax
-jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0xfc>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x10a>
-mov    $0x0,%eax
-jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x341>
+jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0xf7>
+mov    $0x0,%eax
+mov    %eax,%ebx
+test   %bl,%bl
+je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x107>
+mov    $0x0,%eax
+jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x350>
 mov    -0x24(%ebp),%eax
 cmp    -0x1c(%ebp),%eax
-jl     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x32e>
+jl     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x33d>
 mov    0xc(%ebp),%eax
 mov    0x34(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10WorkThread15createOrderPoolEv>
 mov    %eax,-0x2c(%ebp)
 mov    -0x2c(%ebp),%eax
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x168>
+je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x165>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"FAIL: Message allocation",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $0x3,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x332>
+jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x341>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser25isActiveCloseSyncByWorkerEv>
 test   %al,%al
-je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x1d7>
+je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x1e6>
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%edi
-mov    &_ZN3nsl7Message5identE,%ebx
-mov    &_ZN3nsl7Message5identE+0x4,%esi
+mov    &_ZN3nsl7Message5identE,%eax
+mov    &_ZN3nsl7Message5identE+0x4,%edx
+mov    %edx,%eax
+xor    %edx,%edx
+mov    %eax,%esi
+mov    &_ZN3nsl7Message5identE,%eax
+mov    &_ZN3nsl7Message5identE+0x4,%edx
+mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %edi,0x14(%esp)
+mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
-mov    %esi,0x10(%esp)
 movl   $"FAIL: Message From ActiveClose User - msg ident(%d) Qindex(%d)",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    -0x2c(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x331>
+je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x340>
 mov    -0x2c(%ebp),%edx
 mov    0xc(%ebp),%eax
 mov    0x34(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10WorkThread16destroyOrderPoolEPNS_7MessageE>
-jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x332>
+jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x341>
 mov    -0x2c(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message16setUserToMessageEPNS_7TCPUserE>
 mov    0x8(%ebp),%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%eax
 lea    (%edx,%eax,1),%ecx
 mov    -0x2c(%ebp),%eax
 mov    -0x1c(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message16setCellToMessageEPcii>
 mov    -0x2c(%ebp),%eax
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message6setUseEb>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl7MessageESaIS2_EE9push_backERKS2_>
 mov    -0x2c(%ebp),%eax
 mov    %eax,%edx
 mov    0xc(%ebp),%eax
 mov    0x34(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE>
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%eax
 mov    %eax,%edx
 add    -0x1c(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x34(%eax)
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%eax
 test   %eax,%eax
-jns    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x295>
+jns    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x2a4>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"ERR: mParseIdx < 0 ",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
-jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x341>
+jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x350>
+mov    0x8(%ebp),%eax
+mov    0x40(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0x34(%eax),%eax
+cmp    %eax,%edx
+jg     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x322>
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x40(%eax),%eax
-cmp    %eax,%edx
-jl     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x313>
-mov    0x8(%ebp),%eax
-mov    0x34(%eax),%edx
-mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 cmp    %eax,%edx
-je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x2c1>
+je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x2d0>
 movl   $"wtf",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 cmp    %eax,%edx
-je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x2f5>
+je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x304>
 movl   $"bool nsl::RecvBuffer::Parse(nsl::TCPUser*)",0xc(%esp)
 movl $L,0x8(%esp)
 movl   $"RecvBuffer.cpp",0x4(%esp)
 movl   $"mParseIdx == mRearIdx",(%esp)
 call   <T> <__assert_fail>
 mov    0x8(%ebp),%eax
 mov    0x2c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x313>
+je     <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x322>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x30(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x34(%eax)
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%eax
 cmp    %eax,%edx
 setg   %al
 test   %al,%al
 jne    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x3e>
-jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x332>
+jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x341>
 nop
-jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x332>
+jmp    <T> <_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE+0x341>
 nop
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10RecvBuffer13ClearUsedMsgsEv>
 movzbl -0x25(%ebp),%eax
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: bool Parse(RecvBuffer * this, TCPUser * pUser) */

bool __thiscall
nsl::RecvBuffer::_ZN3nsl10RecvBuffer5ParseEPNS_7TCPUserE(RecvBuffer *this,TCPUser *pUser)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  WorkThread *pWVar4;
  TraceLog *pTVar5;
  int iVar6;
  Message *local_30;
  undefined1 local_29;
  uint local_28;
  PACKET_HEADER *local_24;
  int local_20;
  
                    /* Unresolved local var: bool ret@[???] */
  local_29 = 1;
  bVar3 = TCPUser::isBindedSession(pUser);
  if (!bVar3) {
    pWVar4 = Threads::getLittleWorkThread(&pApp->super_Threads);
    pUser->pmWorkThread = pWVar4;
  }
  do {
    if (this->mRearIdx <= this->mParseIdx) {
LAB_080ba78a:
      _ZN3nsl10RecvBuffer13ClearUsedMsgsEv(this);
      return (bool)local_29;
    }
                    /* Unresolved local var: int parsableLength@[???] */
    local_28 = this->mRearIdx - this->mParseIdx;
    if (local_28 < 0x12) {
      this->mParseStatus = 0;
      goto LAB_080ba78a;
    }
                    /* Unresolved local var: LPPACKET_HEADER pHeader@[???]
                       Unresolved local var: int msgSize@[???] */
    this->mParseStatus = 1;
    local_24 = (PACKET_HEADER *)(this->mQueue + this->mParseIdx);
    local_20 = PACKET_HEADER::getSize(local_24);
    if (local_20 < 0) {
      pTVar5 = G_TraceLog();
      TraceLog::sysLog(pTVar5,7,"ERR: msgsize < 0 ");
      return false;
    }
    iVar6 = TCPUser::GetMaxPacketSize(pUser);
    if ((iVar6 < local_20) || (this->mQueueSize + this->mMaxPacketSize < this->mParseIdx + local_20)
       ) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      return false;
    }
    if ((int)local_28 < local_20) goto LAB_080ba78a;
                    /* Unresolved local var: Message * pMessage@[???] */
    local_30 = WorkThread::createOrderPool(pUser->pmWorkThread);
    if (local_30 == (Message *)0x0) {
      pTVar5 = G_TraceLog();
      TraceLog::sysLog(pTVar5,7,"FAIL: Message allocation");
      TCPUser::postDisconnected(pUser,3);
      goto LAB_080ba78a;
    }
    bVar3 = TCPUser::isActiveCloseSyncByWorker(pUser);
    uVar2 = Message::ident._4_4_;
    uVar1 = (undefined4)Message::ident;
    if (bVar3) {
      iVar6 = this->mParseIdx;
      pTVar5 = G_TraceLog();
      TraceLog::sysLog(pTVar5,7,"FAIL: Message From ActiveClose User - msg ident(%d) Qindex(%d)",
                       uVar1,uVar2,iVar6);
      if (local_30 != (Message *)0x0) {
        WorkThread::destroyOrderPool(pUser->pmWorkThread,local_30);
      }
      goto LAB_080ba78a;
    }
    Message::setUserToMessage(local_30,pUser);
    Message::setCellToMessage(local_30,this->mQueue + this->mParseIdx,local_20,local_20);
    Message::setUse(local_30,true);
    std::deque<nsl::Message*,_std::allocator<nsl::Message*>_>::push_back(&this->mRecvMsgs,&local_30)
    ;
    WorkThread::PushTransaction(pUser->pmWorkThread,&local_30->super_IMessageStruct);
    this->mParseIdx = this->mParseIdx + local_20;
    if (this->mParseIdx < 0) {
      pTVar5 = G_TraceLog();
      TraceLog::sysLog(pTVar5,7,"ERR: mParseIdx < 0 ");
      return false;
    }
    if (this->mPartialQueueSize <= this->mParseIdx) {
      if (this->mParseIdx != this->mRearIdx) {
        puts("wtf");
      }
      if (this->mParseIdx != this->mRearIdx) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("mParseIdx == mRearIdx","RecvBuffer.cpp",0xf9,
                      "bool nsl::RecvBuffer::Parse(nsl::TCPUser*)");
      }
      if (this->mFrontIdx != 0) {
        this->mRearIdx = 0;
        this->mParseIdx = 0;
      }
    }
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/RecvBuffer.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/RecvBuffer.cpp)（约第 44 行）：

```cpp
    if ((mFrontIdx == 0 && mParseIdx > mPartialQueueSize) || (mFrontIdx - mRearIdx == 1))
    {
        return true;
    }
```
