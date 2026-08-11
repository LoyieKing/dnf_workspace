# _ZN14HandlerFor_TE_27onTIME_AUCTION_TRY_SHUTDOWNEPN3nsl11InternalMsgE

`HandlerFor_TE_::onTIME_AUCTION_TRY_SHUTDOWN(nsl::InternalMsg*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x807a29a` | `0x23a` | `0x80786fa` | `0x230` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,145 +1,142 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x64,%esp
 movl   $0x0,-0x28(%ebp)
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onTIME_AUCTION_TRY_SHUTDOWN",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN14HandlerFor_TE_27onTIME_AUCTION_TRY_SHUTDOWNEPN3nsl11InternalMsgE+0x66>
+movl   $0x0,-0x18(%ebp)
+jmp    <T> <_ZN14HandlerFor_TE_27onTIME_AUCTION_TRY_SHUTDOWNEPN3nsl11InternalMsgE+0x61>
 mov    &_ZN3nsl4pAppE,%eax
 lea    0x18(%eax),%edx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl7Threads13getWorkThreadEi>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10WorkThread18GetQueueSizeNoLockEv>
-mov    -0x24(%ebp),%edx
-add    %edx,%eax
-mov    %eax,-0x24(%ebp)
-addl   $0x1,-0x14(%ebp)
+add    %eax,-0x24(%ebp)
+addl   $0x1,-0x18(%ebp)
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads16getWorkThreadNumEv>
-cmp    -0x14(%ebp),%eax
+cmp    -0x18(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN14HandlerFor_TE_27onTIME_AUCTION_TRY_SHUTDOWNEPN3nsl11InternalMsgE+0x3b>
 movl   $0x0,-0x20(%ebp)
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads11getDBThreadEi>
 mov    0x3c(%eax),%eax
 mov    %eax,-0x20(%ebp)
+mov    -0x24(%ebp),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    -0x20(%ebp),%edx
 mov    %edx,0x10(%esp)
-mov    -0x24(%ebp),%edx
-mov    %edx,0xc(%esp)
+mov    %ebx,0xc(%esp)
 movl   $"work queue size: %d, db queue size: %d",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 call   <T> <_Z6G_Zonev>
 mov    (%eax),%eax
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN14HandlerFor_TE_27onTIME_AUCTION_TRY_SHUTDOWNEPN3nsl11InternalMsgE+0x138>
+jne    <T> <_ZN14HandlerFor_TE_27onTIME_AUCTION_TRY_SHUTDOWNEPN3nsl11InternalMsgE+0x12e>
 cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN14HandlerFor_TE_27onTIME_AUCTION_TRY_SHUTDOWNEPN3nsl11InternalMsgE+0x138>
+jne    <T> <_ZN14HandlerFor_TE_27onTIME_AUCTION_TRY_SHUTDOWNEPN3nsl11InternalMsgE+0x12e>
 movl   $0x3e8,(%esp)
 call   <T> <_ZN3nsl7TSystemINS_11LinuxSystemEE5sleepEi>
+mov    -0x24(%ebp),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    -0x20(%ebp),%edx
 mov    %edx,0x10(%esp)
-mov    -0x24(%ebp),%edx
-mov    %edx,0xc(%esp)
+mov    %ebx,0xc(%esp)
 movl   $"These two should be 0, work queue size: %d, db queue size: %d",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 call   <T> <_ZN3nsl12LinuxService11getInstanceEv>
 mov    (%eax),%edx
 add    $0x20,%edx
 mov    (%edx),%edx
 mov    %eax,(%esp)
 call   *%edx
-mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_TE_27onTIME_AUCTION_TRY_SHUTDOWNEPN3nsl11InternalMsgE+0x235>
+jmp    <T> <_ZN14HandlerFor_TE_27onTIME_AUCTION_TRY_SHUTDOWNEPN3nsl11InternalMsgE+0x226>
 lea    -0x3a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34PCK_AUCTION_SERVICE_UNAVAILABLE_AGC1Ev>
+lea    -0x40(%ebp),%eax
 mov    -0x1c(%ebp),%edx
-lea    -0x40(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl5IArea12getBeginIterEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN14HandlerFor_TE_27onTIME_AUCTION_TRY_SHUTDOWNEPN3nsl11InternalMsgE+0x1f6>
+jmp    <T> <_ZN14HandlerFor_TE_27onTIME_AUCTION_TRY_SHUTDOWNEPN3nsl11InternalMsgE+0x1ec>
+mov    -0x40(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
-mov    -0x40(%ebp),%edx
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl5IArea16getValueFromIterESt17_Rb_tree_iteratorISt4pairIKjPNS_8ISessionEEE>
-mov    %eax,-0x18(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8ISession10getTCPUserEv>
 mov    %eax,%ebx
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE>
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0xc(%ebp)
 lea    -0x3a(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell3PADEv>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN3nsl8ISessionEEEppEv>
+mov    -0x40(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
-mov    -0x40(%ebp),%edx
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl5IArea9isIterEndESt17_Rb_tree_iteratorISt4pairIKjPNS_8ISessionEEE>
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN14HandlerFor_TE_27onTIME_AUCTION_TRY_SHUTDOWNEPN3nsl11InternalMsgE+0x15d>
+jne    <T> <_ZN14HandlerFor_TE_27onTIME_AUCTION_TRY_SHUTDOWNEPN3nsl11InternalMsgE+0x153>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out  onTIME_AUCTION_TRY_SHUTDOWN",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* WARNING: Struct "LinuxService": ignoring overlapping field "isTerminated_" */
/* DWARF original prototype: DWORD onTIME_AUCTION_TRY_SHUTDOWN(HandlerFor_TE_ * this, InternalMsg *
   pArg) */

DWORD __thiscall
HandlerFor_TE_::_ZN14HandlerFor_TE_27onTIME_AUCTION_TRY_SHUTDOWNEPN3nsl11InternalMsgE
          (HandlerFor_TE_ *this,InternalMsg *pArg)

{
  bool bVar1;
  TraceLog *pTVar2;
  WorkThread *this_00;
  size_t sVar3;
  int iVar4;
  NSLDBThread *pNVar5;
  Zone *pZVar6;
  LinuxService *pLVar7;
  TCPUser *u;
  CommonDataPool *this_01;
  int in_GS_OFFSET;
  undefined1 local_44 [24];
  size_t local_2c;
  MAP_OBJECTS_ITER local_28;
  int local_24;
  IArea *local_20;
  ISession *local_1c;
  int local_18;
  Message *local_14;
  CMsgCell *local_10;
  
                    /* Unresolved local var: int return_code@[???]
                       Unresolved local var: int pendingWorkNumSum@[???]
                       Unresolved local var: int pendingDbNum@[???]
                       Unresolved local var: GSArea * pArea@[???]
                       Unresolved local var: Character * pCharacter@[???]
                       Unresolved local var: PCK_AUCTION_SERVICE_UNAVAILABLE_AG pck@[???]
                       Unresolved local var: MAP_OBJECTS_ITER iter@[???] */
  local_2c = 0;
  pTVar2 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar2,7,"In  onTIME_AUCTION_TRY_SHUTDOWN");
  local_28._M_node = (_Base_ptr)0x0;
                    /* Unresolved local var: int i@[???] */
  local_18 = 0;
  while( true ) {
    iVar4 = nsl::Threads::getWorkThreadNum(&nsl::pApp->super_Threads);
    if (iVar4 <= local_18) break;
    this_00 = nsl::Threads::getWorkThread(&nsl::pApp->super_Threads,local_18);
    sVar3 = nsl::WorkThread::GetQueueSizeNoLock(this_00);
    local_28._M_node = (_Base_ptr)((int)&(local_28._M_node)->_M_color + sVar3);
    local_18 = local_18 + 1;
  }
  local_24 = 0;
  pNVar5 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
  local_24 = pNVar5->mQueueSize;
  pTVar2 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar2,5,"work queue size: %d, db queue size: %d",local_28._M_node,local_24)
  ;
  pZVar6 = G_Zone();
  local_20 = pZVar6->mArea[0];
  if ((local_28._M_node == (_Base_ptr)0x0) && (local_24 == 0)) {
    nsl::TSystem<nsl::LinuxSystem>::sleep(1000);
    pTVar2 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog
              (pTVar2,5,"These two should be 0, work queue size: %d, db queue size: %d",
               local_28._M_node,local_24);
    pLVar7 = nsl::LinuxService::getInstance();
    (*(pLVar7->super_IPlatform)._vptr_IPlatform[8])(pLVar7);
  }
  else {
    PCK_AUCTION_SERVICE_UNAVAILABLE_AG::PCK_AUCTION_SERVICE_UNAVAILABLE_AG
              ((PCK_AUCTION_SERVICE_UNAVAILABLE_AG *)(local_44 + 6));
    nsl::IArea::getBeginIter((IArea *)local_44);
    while( true ) {
      bVar1 = nsl::IArea::isIterEnd(local_20,(MAP_OBJECTS_ITER)local_44._0_4_);
      if (bVar1) break;
                    /* Unresolved local var: Message * pNewMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
      local_1c = nsl::IArea::getValueFromIter(local_20,(MAP_OBJECTS_ITER)local_44._0_4_);
      u = nsl::ISession::getTCPUser(local_1c);
      this_01 = nsl::DataPools::getCommonDataPool
                          (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
      local_14 = nsl::CommonDataPool::getSendMessage(this_01,u);
      local_10 = nsl::Message::getCellFromMessage(local_14);
      nsl::CMsgCell::operator<<(local_10,(LPPACKET_HEADER)(local_44 + 6));
      nsl::CMsgCell::PAD(local_10);
      nsl::TCPSendThread::PushSendMsg((this->super_ITimeHandler).super_IHandler.sendTCP_,local_14);
      std::_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::ISession*>_>::operator++
                ((_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::ISession*>_> *)local_44);
    }
    pTVar2 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar2,7,"Out  onTIME_AUCTION_TRY_SHUTDOWN");
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_TE_.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_TE_.cpp)（约第 203 行）：

```cpp
unsigned long HandlerFor_TE_::onTIME_AUCTION_TRY_SHUTDOWN(nsl::InternalMsg* pArg)
{
    unsigned long result = 0;
    G_TraceLog()->sysLog(7, "In  onTIME_AUCTION_TRY_SHUTDOWN");
    size_t pendingWorkNumSum = 0;
    for (int i = 0; i < pApp->super_Threads.getWorkThreadNum(); i = i + 1)
    {
        // No intermediate temp: ORIG does load-sum / add / store-sum
        pendingWorkNumSum = pendingWorkNumSum + pApp->super_Threads.getWorkThread(i)->GetQueueSizeNoLock();
    }
    int pendingDbNum = 0;
    pendingDbNum = pApp->super_Threads.getDBThread(0)->mQueueSize;
    G_TraceLog()->sysLog(5, "work queue size: %d, db queue size: %d", (int)pendingWorkNumSum, pendingDbNum);
    nsl::IArea* pArea = G_Zone()->mArea[0];
    if ((pendingWorkNumSum == 0) && (pendingDbNum == 0))
    {
        nsl::TSystem<nsl::LinuxSystem>::sleep(1000);
        G_TraceLog()->sysLog(5, "These two should be 0, work queue size: %d, db queue size: %d", (int)pendingWorkNumSum, pendingDbNum);
        nsl::LinuxService::getInstance()->controlStop();
    }
    else
    {
        PCK_AUCTION_SERVICE_UNAVAILABLE_AG pck;
        nsl::MAP_OBJECTS_ITER iter = pArea->getBeginIter();
        while (!pArea->isIterEnd(iter))
        {
            nsl::ISession* pCharacter = pArea->getValueFromIter(iter);
            nsl::Message* pNewMsg =
                pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId)
                    ->getSendMessage(pCharacter->getTCPUser());
            nsl::CMsgCell* pNewCell = pNewMsg->getCellFromMessage();
            *pNewCell << &pck;
            pNewCell->PAD();
            sendTCP_->PushSendMsg(pNewMsg);
            ++iter;
        }
        G_TraceLog()->sysLog(7, "Out  onTIME_AUCTION_TRY_SHUTDOWN");
    }
    return 0;
}
```
