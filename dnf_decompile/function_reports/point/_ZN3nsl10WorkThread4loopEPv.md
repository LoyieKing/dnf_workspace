# _ZN3nsl10WorkThread4loopEPv

`nsl::WorkThread::loop(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80b70ca` | `0x4fc` | `0x80b6bdc` | `0x51b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,328 +1,338 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x80080,%esp
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Start up WorkThread",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10WorkThread11GetThreadIdEv>
 mov    %eax,%gs:0xfffffffc
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11Dispatchers16getTCPDispatcherEv>
 mov    %eax,-0x2c(%ebp)
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11Dispatchers18GetInterDispatcherEv>
 mov    %eax,-0x28(%ebp)
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads14getTimerThreadEv>
 mov    %eax,-0x24(%ebp)
 movl   $0x3c00,-0x1c(%ebp)
 lea    -0x80064(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi524288EEC1Ev>
 movl   $0x80000,(%esp)
 call   <T> <_ZN3nsl16GetMessageBufferEi>
 mov    %eax,-0x18(%ebp)
 movl   $0x80000,(%esp)
 call   <T> <_ZN3nsl16GetMessageBufferEi>
 mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10WorkThread14PopTransactionEv>
 mov    %eax,-0x44(%ebp)
 cmpl   $0x0,-0x44(%ebp)
 jne    <T> <_ZN3nsl10WorkThread4loopEPv+0xbc>
 nop
 jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0xa5>
 movl   $0x0,-0x10(%ebp)
 mov    -0x44(%ebp),%eax
 movzbl 0x6(%eax),%eax
 movsbl %al,%eax
 cmp    $0x2,%eax
 je     <T> <_ZN3nsl10WorkThread4loopEPv+0x190>
 cmp    $0x3,%eax
-je     <T> <_ZN3nsl10WorkThread4loopEPv+0x4ba>
+je     <T> <_ZN3nsl10WorkThread4loopEPv+0x4d9>
 cmp    $0x1,%eax
-jne    <T> <_ZN3nsl10WorkThread4loopEPv+0x284>
+jne    <T> <_ZN3nsl10WorkThread4loopEPv+0x281>
 mov    -0x44(%ebp),%eax
 mov    %eax,-0x38(%ebp)
 mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell14GetInternalMsgEv>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 movzbl 0x15(%eax),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl10WorkThread4loopEPv+0x15a>
 mov    -0x38(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15InterDispatcher8dispatchEPNS_7MessageE>
 mov    -0xc(%ebp),%eax
 movb   $0x1,0x15(%eax)
 mov    -0xc(%ebp),%eax
 mov    0x16(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x18,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl7Threads13getWorkThreadEi>
 mov    -0x44(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE>
-jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4c4>
+jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4e3>
 mov    -0xc(%ebp),%eax
 movb   $0x0,0x15(%eax)
 mov    %gs:0xfffffffc,%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    -0x38(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool14destroyMessageEPNS_7MessageE>
-jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4c4>
+jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4e3>
 mov    -0x44(%ebp),%eax
 mov    %eax,-0x40(%ebp)
 mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11ITimeEntity12isTerminatedEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN3nsl10WorkThread4loopEPv+0x251>
+je     <T> <_ZN3nsl10WorkThread4loopEPv+0x24e>
 mov    -0x40(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN3nsl10WorkThread4loopEPv+0x1fa>
+je     <T> <_ZN3nsl10WorkThread4loopEPv+0x1f5>
 mov    -0x40(%ebp),%eax
 mov    0x8(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    -0x10(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Fail: TIME : failed to handle '%d', error_code('%d').",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    -0x40(%ebp),%eax
 mov    0x10(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN3nsl10WorkThread4loopEPv+0x4bd>
+je     <T> <_ZN3nsl10WorkThread4loopEPv+0x4dc>
 mov    -0x40(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN3nsl10WorkThread4loopEPv+0x4c0>
-mov    -0x40(%ebp),%eax
-mov    0x10(%eax),%eax
-lea    -0x1(%eax),%edx
-mov    -0x40(%ebp),%eax
+je     <T> <_ZN3nsl10WorkThread4loopEPv+0x4df>
+mov    -0x40(%ebp),%eax
+mov    -0x40(%ebp),%edx
+mov    0x10(%edx),%edx
+sub    $0x1,%edx
 mov    %edx,0x10(%eax)
 mov    -0x40(%ebp),%eax
 mov    0x10(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN3nsl10WorkThread4loopEPv+0x4c3>
-mov    -0x40(%ebp),%eax
-movb   $0x0,0x14(%eax)
+jne    <T> <_ZN3nsl10WorkThread4loopEPv+0x4e2>
+mov    -0x40(%ebp),%eax
+add    $0x14,%eax
+movb   $0x0,(%eax)
 mov    -0x40(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TimerThread16PushTimeReqEventEPNS_11ITimeEntityE>
-jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4c4>
+jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4e3>
 mov    %gs:0xfffffffc,%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    (%eax),%edx
 add    $0x8,%edx
 mov    (%edx),%ecx
 mov    -0x40(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ecx
-jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4c4>
+jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4e3>
 mov    -0x44(%ebp),%eax
 mov    %eax,-0x3c(%ebp)
 mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getUserFromMessageEv>
 mov    %eax,-0x34(%ebp)
 mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl7TCPUser19isAboutToDisconnectEv>
 test   %al,%al
-jne    <T> <_ZN3nsl10WorkThread4loopEPv+0x2b6>
+jne    <T> <_ZN3nsl10WorkThread4loopEPv+0x2b3>
 mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl7TCPUser14isDisconnectedEv>
 test   %al,%al
-je     <T> <_ZN3nsl10WorkThread4loopEPv+0x2bd>
+je     <T> <_ZN3nsl10WorkThread4loopEPv+0x2ba>
 mov    $0x1,%eax
-jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x2c2>
+jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x2bf>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN3nsl10WorkThread4loopEPv+0x34d>
+je     <T> <_ZN3nsl10WorkThread4loopEPv+0x35c>
 movl   $0x0,0x4(%esp)
 mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser10SetWorkingEb>
-mov    &_ZN3nsl7Message5identE,%ebx
-mov    &_ZN3nsl7Message5identE+0x4,%esi
-call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    %ebx,0xc(%esp)
+mov    &_ZN3nsl7Message5identE,%eax
+mov    &_ZN3nsl7Message5identE+0x4,%edx
+mov    %eax,%ebx
+mov    &_ZN3nsl7Message5identE,%eax
+mov    &_ZN3nsl7Message5identE+0x4,%edx
+mov    %edx,%eax
+xor    %edx,%edx
+mov    %eax,%esi
+call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
 movl   $"끊긴 유저가 worker로 들어왔다. msg-%d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $0x0,0x4(%esp)
 mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message6setUseEb>
 movl   $0x1,0x4(%esp)
 mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser21setActiveSyncByWorkerEb>
 call   <T> <_ZN3nsl16G_ActiveNetCloseEv>
 mov    -0x34(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14ActiveNetClose15pushActiveCloseEPNS_7TCPUserE>
 jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0xa5>
 mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x30(%ebp)
 mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser15getRecvDataTypeEv>
 mov    %eax,-0x20(%ebp)
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13PACKET_HEADER11getCategoryEv>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"RECV PCK ct    =%d",0x8(%esp)
 movl   $0x4,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13PACKET_HEADER11getPacketIDEv>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"RECV PCK id    =%d",0x8(%esp)
 movl   $0x4,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    0xa(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"RECV PCK seq   =%u",0x8(%esp)
 movl   $0x4,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
-mov    -0x20(%ebp),%eax
-cmp    $0x4,%eax
-jne    <T> <_ZN3nsl10WorkThread4loopEPv+0x46a>
+cmpl   $0x4,-0x20(%ebp)
+jne    <T> <_ZN3nsl10WorkThread4loopEPv+0x477>
 mov    -0x3c(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0x34(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE>
 movl   $0x0,0x4(%esp)
 mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message6setUseEb>
 mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser17GetPendingWorkNumEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN3nsl10WorkThread4loopEPv+0x46a>
+je     <T> <_ZN3nsl10WorkThread4loopEPv+0x477>
 movl   $0x0,0x4(%esp)
 mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser10SetWorkingEb>
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell5ClearEv>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell5ClearEv>
 movl   $0x3c00,-0x1c(%ebp)
-mov    &_ZN3nsl7Message5identE,%ebx
-mov    &_ZN3nsl7Message5identE+0x4,%esi
-call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    %ebx,0xc(%esp)
+mov    &_ZN3nsl7Message5identE,%eax
+mov    &_ZN3nsl7Message5identE+0x4,%edx
+mov    %eax,%ebx
+mov    &_ZN3nsl7Message5identE,%eax
+mov    &_ZN3nsl7Message5identE+0x4,%edx
+mov    %edx,%eax
+xor    %edx,%edx
+mov    %eax,%esi
+call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
 movl   $"work ended id=%d",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4c4>
-nop
-jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4c4>
-nop
-jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4c4>
-nop
-jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4c4>
+jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4e3>
+nop
+jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4e3>
+nop
+jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4e3>
+nop
+jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0x4e3>
 nop
 mov    0x8(%ebp),%eax
 mov    0xc4(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc4(%eax)
 jmp    <T> <_ZN3nsl10WorkThread4loopEPv+0xa5>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x80064(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi524288EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: void loop(WorkThread * this, void * temp) */

void __thiscall nsl::WorkThread::_ZN3nsl10WorkThread4loopEPv(WorkThread *this,void *temp)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  TraceLog *pTVar6;
  uint uVar7;
  TCPDispatcher *this_00;
  InterDispatcher *this_01;
  TimerThread *this_02;
  CMsgCell *this_03;
  CMsgCell *this_04;
  Message *this_05;
  CMsgCell *pCVar8;
  INTERNALMSG_HEADER *pIVar9;
  WorkThread *this_06;
  CommonDataPool *pCVar10;
  int iVar11;
  TCPUser *this_07;
  ActiveNetClose *this_08;
  ENUM_DATA_TYPE EVar12;
  LPPACKET_HEADER pPVar13;
  DWORD DVar14;
  int in_GS_OFFSET;
  TMsgCell<524288> TStack_80068;
  
                    /* Unresolved local var: IMessageStruct * recvMessage@[???]
                       Unresolved local var: ITimeEntity * teMsg@[???]
                       Unresolved local var: Message * pkMsg@[???]
                       Unresolved local var: Message * pMsg@[???]
                       Unresolved local var: TCPUser * pUser@[???]
                       Unresolved local var: CMsgCell * recvMsg@[???]
                       Unresolved local var: TCPDispatcher * handlerTCP@[???]
                       Unresolved local var: InterDispatcher * pInterHandler@[???]
                       Unresolved local var: TimerThread * timerThread@[???]
                       Unresolved local var: int DataType@[???]
                       Unresolved local var: int CompressLen@[???]
                       Unresolved local var: MSGCELL512K tmpBuffer@[???]
                       Unresolved local var: CMsgCell * encMsg@[???]
                       Unresolved local var: CMsgCell * zipMsg@[???] */
  pTVar6 = G_TraceLog();
  TraceLog::sysLog(pTVar6,8,"Start up WorkThread");
  uVar7 = GetThreadId(temp);
  *(uint *)(in_GS_OFFSET + -4) = uVar7;
  this_00 = Dispatchers::getTCPDispatcher(&pApp->super_Dispatchers);
  this_01 = Dispatchers::GetInterDispatcher(&pApp->super_Dispatchers);
  this_02 = Threads::getTimerThread(&pApp->super_Threads);
  TMsgCell<524288>::TMsgCell(&TStack_80068);
                    /* try { // try from 080b7158 to 080b7581 has its CatchHandler @ 080b75a8 */
  this_03 = GetMessageBuffer(0x80000);
  this_04 = GetMessageBuffer(0x80000);
  do {
    while( true ) {
      do {
                    /* Unresolved local var: int return_code@[???] */
        this_05 = (Message *)_ZN3nsl10WorkThread14PopTransactionEv(this);
      } while (this_05 == (Message *)0x0);
      cVar1 = (this_05->super_IMessageStruct).mMsgType;
      if (cVar1 != '\x02') break;
      bVar5 = ITimeEntity::isTerminated((ITimeEntity *)this_05);
      if (bVar5) {
        pCVar10 = DataPools::getCommonDataPool(&pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
        (*pCVar10->_vptr_CommonDataPool[2])(pCVar10,this_05);
      }
      else {
        iVar11 = (*(this_05->super_IMessageStruct)._vptr_IMessageStruct[2])(this_05);
        if (iVar11 != 0) {
          iVar2 = this_05->mOwnerWorkId;
          pTVar6 = G_TraceLog();
          TraceLog::sysLog(pTVar6,7,"Fail: TIME : failed to handle \'%d\', error_code(\'%d\').",
                           iVar2,iVar11);
        }
        if (((this_05->acUser != (TCPUser *)0x0) && (this_05->mBufferType != BUFFER_TYPE_NOT_SETTED)
            ) && (this_05->acUser = (TCPUser *)&this_05->acUser[-1].field_0xff,
                 this_05->acUser == (TCPUser *)0x0)) {
          *(undefined1 *)&this_05->mpSendBuffer = 0;
          TimerThread::PushTimeReqEvent(this_02,(ITimeEntity *)this_05);
        }
      }
LAB_080b758e:
      this->mTransactionCntPerSec = this->mTransactionCntPerSec + 1;
    }
    if (cVar1 == '\x03') goto LAB_080b758e;
    if (cVar1 == '\x01') {
                    /* Unresolved local var: INTERNALMSG_HEADER * pInterMsg@[???] */
      pCVar8 = Message::getCellFromMessage(this_05);
      pIVar9 = CMsgCell::GetInternalMsg(pCVar8);
      if (pIVar9->bWillDelete == true) {
        pIVar9->bWillDelete = false;
        pCVar10 = DataPools::getCommonDataPool(&pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
        CommonDataPool::destroyMessage(pCVar10,this_05);
      }
      else {
        InterDispatcher::dispatch(this_01,this_05);
        pIVar9->bWillDelete = true;
        this_06 = Threads::getWorkThread(&pApp->super_Threads,pIVar9->mOwnerWorkId);
        _ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE
                  (this_06,(IMessageStruct *)this_05);
      }
      goto LAB_080b758e;
    }
    this_07 = Message::getUserFromMessage(this_05);
    bVar5 = TCPUser::isAboutToDisconnect(this_07);
    if ((bVar5) || (bVar5 = TCPUser::isDisconnected(this_07), bVar5)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) {
      pCVar8 = Message::getCellFromMessage(this_05);
      EVar12 = TCPUser::getRecvDataType(this_07);
      pPVar13 = CMsgCell::GetPacket(pCVar8);
      DVar14 = PACKET_HEADER::getCategory(pPVar13);
      pTVar6 = G_TraceLog();
      TraceLog::sysLog(pTVar6,4,"RECV PCK ct    =%d",DVar14);
      pPVar13 = CMsgCell::GetPacket(pCVar8);
      DVar14 = PACKET_HEADER::getPacketID(pPVar13);
      pTVar6 = G_TraceLog();
      TraceLog::sysLog(pTVar6,4,"RECV PCK id    =%d",DVar14);
      pPVar13 = CMsgCell::GetPacket(pCVar8);
      uVar7 = pPVar13->sequence;
      pTVar6 = G_TraceLog();
      TraceLog::sysLog(pTVar6,4,"RECV PCK seq   =%u",uVar7);
      CMsgCell::GetPacket(pCVar8);
      if (EVar12 == RECV_DATA_NORMAL) {
        TCPDispatcher::dispatch(this_00,this_07,this_05);
        Message::setUse(this_05,false);
        uVar7 = TCPUser::GetPendingWorkNum(this_07);
        if (uVar7 == 0) {
          TCPUser::SetWorking(this_07,false);
        }
      }
      CMsgCell::Clear(this_04);
      CMsgCell::Clear(this_03);
      uVar4 = Message::ident._4_4_;
      uVar3 = (undefined4)Message::ident;
      pTVar6 = G_TraceLog();
      TraceLog::sysLog(pTVar6,8,"work ended id=%d",uVar3,uVar4);
      goto LAB_080b758e;
    }
    TCPUser::SetWorking(this_07,false);
    uVar4 = Message::ident._4_4_;
    uVar3 = (undefined4)Message::ident;
    pTVar6 = G_TraceLog();
    TraceLog::sysLog(pTVar6,7,&DAT_08161d20,uVar3,uVar4);
    Message::setUse(this_05,false);
    TCPUser::setActiveSyncByWorker(this_07,true);
    this_08 = G_ActiveNetClose();
    ActiveNetClose::pushActiveClose(this_08,this_07);
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/WorkThread.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/WorkThread.cpp)（约第 136 行）：

```cpp
void WorkThread::loop(void* temp)
{
    G_TraceLog()->sysLog(8, "Start up WorkThread");
    // proxyLoop passes Thread* as temp (== this); ORIG loads arg@0xc for GetThreadId
    tlsThreadId = ((WorkThread*)temp)->GetThreadId();
    // ORIG 局部声明序（DWARF decl_line 375/377/378/380/382/383/390/393/398/404/405/411/413/414）
    IMessageStruct* recvMessage;
    ITimeEntity* teMsg;
    Message* pkMsg;
    Message* pMsg;
    TCPUser* pUser;
    CMsgCell* recvMsg;
    TCPDispatcher* handlerTCP = pApp->super_Dispatchers.getTCPDispatcher();
    InterDispatcher* pInterHandler = pApp->super_Dispatchers.GetInterDispatcher();
    TimerThread* timerThread = pApp->super_Threads.getTimerThread();
    TCPUser::ENUM_DATA_TYPE DataType;
    int CompressLen = 0x3c00;
    TMsgCell<524288> tmpBuffer;
    CMsgCell* encMsg = GetMessageBuffer(0x80000);
    CMsgCell* zipMsg = GetMessageBuffer(0x80000);
    while (true)
    {
    RETRY_MSG:
        recvMessage = PopTransaction();
        // ORIG: cmpl/jne process; nop; jmp top（while(true)+continue 复现；null 不递增 mTransactionCntPerSec）
        if (recvMessage == NULL)
        {
            continue;
        }

        int return_code = 0;
        switch (recvMessage->mMsgType)
        {
        case 1:
        {
            pMsg = (Message*)recvMessage;
            INTERNALMSG_HEADER* pInterMsg = pMsg->getCellFromMessage()->GetInternalMsg();
            if (!pInterMsg->bWillDelete)
            {
                pInterHandler->dispatch(pMsg);
                pInterMsg->bWillDelete = true;
                pApp->super_Threads.getWorkThread(pInterMsg->mOwnerWorkId)
                    ->PushTransaction(recvMessage);
            }
            else
            {
                pInterMsg->bWillDelete = false;
                pApp->super_DataPools.getCommonDataPool(tlsThreadId)->destroyMessage(pMsg);
            }
            break;
        }
        case 2:
        {
            teMsg = (ITimeEntity*)recvMessage;
            if (!teMsg->isTerminated())
            {
                return_code = teMsg->operator()();
                if (return_code != 0)
                {
                    G_TraceLog()->sysLog(7, "Fail: TIME : failed to handle '%d', error_code('%d').",
                                         teMsg->proc_id, return_code);
                }
                // ORIG：acUser 检查直接复用 teMsg（无独立 pkMsg 槽）
                if (((Message*)teMsg)->acUser != NULL)
                {
                    if (((Message*)teMsg)->mBufferType != BUFFER_TYPE_NOT_SETTED)
                    {
                        // acUser is a refcount stored in a pointer-sized field (integer -1, not element ptr arith)
                        ((Message*)teMsg)->acUser = (TCPUser*)((char*)((Message*)teMsg)->acUser - 1);
                        if (((Message*)teMsg)->acUser == NULL)
                        {
                            *(char*)&((Message*)teMsg)->mpSendBuffer = 0;
                            timerThread->PushTimeReqEvent(teMsg);
                        }
                    }
                }
            }
            else
            {
                // virtual destroyTimeEntity — leave as direct call for vtable *%reg form
                pApp->super_DataPools.getCommonDataPool(tlsThreadId)->destroyTimeEntity(teMsg);
            }
            break;
        }
        case 3:
            break;
        default:
        {
            pkMsg = (Message*)recvMessage;
            pUser = pkMsg->getUserFromMessage();
            if (pUser->isAboutToDisconnect() || pUser->isDisconnected())
            {
                pUser->SetWorking(false);
                register unsigned int idLo = (unsigned int)Message::ident;
                register unsigned int idHi = (unsigned int)(Message::ident >> 32);
                G_TraceLog()->sysLog(7, "\xb2\xf7\xb1\xe4 \xc0\xaf\xc0\xfa\xb0\xa1 worker\xb7\xce \xb5\xe9\xbe\xee\xbf\xd4\xb4\xd9. msg-%d", (int)idLo, (int)idHi);
                pkMsg->setUse(false);
                pUser->setActiveSyncByWorker(true);
                G_ActiveNetClose()->pushActiveClose(pUser);
                // ORIG: disconnect path skips mTransactionCntPerSec++ and re-pops
                goto RETRY_MSG;
            }
            else
            {
                recvMsg = pkMsg->getCellFromMessage();
                DataType = pUser->getRecvDataType();
                // ORIG：GetPacket() 结果直用，无 pHeader 局部（避免多一个栈槽）
                G_TraceLog()->sysLog(4, "RECV PCK ct    =%d", recvMsg->GetPacket()->getCategory());
                G_TraceLog()->sysLog(4, "RECV PCK id    =%d", recvMsg->GetPacket()->getPacketID());
                G_TraceLog()->sysLog(4, "RECV PCK seq   =%u", recvMsg->GetPacket()->sequence);
                recvMsg->GetPacket();
                if (DataType == TCPUser::RECV_DATA_NORMAL)
                {
                    handlerTCP->dispatch(pUser, pkMsg);
                    pkMsg->setUse(false);
                    if (pUser->GetPendingWorkNum() == 0)
                    {
                        pUser->SetWorking(false);
                    }
                }
                zipMsg->Clear();
                encMsg->Clear();
                CompressLen = 0x3c00;
                register unsigned int idLo = (unsigned int)Message::ident;
                register unsigned int idHi = (unsigned int)(Message::ident >> 32);
                G_TraceLog()->sysLog(8, "work ended id=%d", (int)idLo, (int)idHi);
            }
            break;
        }
        }
        mTransactionCntPerSec = mTransactionCntPerSec + 1;
    }
}
```
