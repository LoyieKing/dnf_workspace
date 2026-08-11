# _ZN12InterHandler27onINTER_SERVICE_UNAVAILABLEEPN3nsl8CMsgCellE

`InterHandler::onINTER_SERVICE_UNAVAILABLE(nsl::CMsgCell*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x807ac18` | `0x2ee` | `0x807a6e2` | `0x2ee` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,200 +1,200 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x7c,%esp
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onINTER_SERVICE_UNAVAILABLE",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell14GetInternalMsgEv>
 mov    %eax,-0x3c(%ebp)
 mov    -0x3c(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
 mov    %eax,%edi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %edi,0xc(%esp)
 movl   $"Reason %s",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 call   <T> <_Z6G_Zonev>
 mov    (%eax),%eax
 mov    %eax,-0x38(%ebp)
 movl   $0x0,0x4(%esp)
 mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6GSArea17SetServiceRunningEb>
 lea    -0x4e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34PCK_AUCTION_SERVICE_UNAVAILABLE_AGC1Ev>
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34PCK_AUCTION_SERVICE_UNAVAILABLE_PGC1Ev>
 mov    -0x38(%ebp),%edx
 lea    -0x64(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl5IArea12getBeginIterEv>
 sub    $0x4,%esp
 jmp    <T> <_ZN12InterHandler27onINTER_SERVICE_UNAVAILABLEEPN3nsl8CMsgCellE+0x1bc>
 mov    -0x38(%ebp),%eax
 mov    -0x64(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl5IArea16getValueFromIterESt17_Rb_tree_iteratorISt4pairIKjPNS_8ISessionEEE>
-mov    %eax,-0x34(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8ISession10getTCPUserEv>
 mov    %eax,-0x28(%ebp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl7TCPUser19isAboutToDisconnectEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12InterHandler27onINTER_SERVICE_UNAVAILABLEEPN3nsl8CMsgCellE+0x100>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl7TCPUser14isDisconnectedEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12InterHandler27onINTER_SERVICE_UNAVAILABLEEPN3nsl8CMsgCellE+0x100>
 mov    $0x1,%eax
 jmp    <T> <_ZN12InterHandler27onINTER_SERVICE_UNAVAILABLEEPN3nsl8CMsgCellE+0x105>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN12InterHandler27onINTER_SERVICE_UNAVAILABLEEPN3nsl8CMsgCellE+0x1b1>
-mov    -0x34(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8ISession10getTCPUserEv>
 mov    %eax,%edi
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    %edi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE>
 mov    %eax,-0x24(%ebp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x20(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN12InterHandler27onINTER_SERVICE_UNAVAILABLEEPN3nsl8CMsgCellE+0x17f>
 lea    -0x60(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
 jmp    <T> <_ZN12InterHandler27onINTER_SERVICE_UNAVAILABLEEPN3nsl8CMsgCellE+0x191>
 lea    -0x4e(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell3PADEv>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    -0x24(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
 lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN3nsl8ISessionEEEppEv>
 mov    -0x38(%ebp),%eax
 mov    -0x64(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl5IArea9isIterEndESt17_Rb_tree_iteratorISt4pairIKjPNS_8ISessionEEE>
 xor    $0x1,%eax
 test   %al,%al
 jne    <T> <_ZN12InterHandler27onINTER_SERVICE_UNAVAILABLEEPN3nsl8CMsgCellE+0xb2>
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    %eax,(%esp)
 call   <T> <_ZN12GameDataPool16createTimeEntityEv>
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
 mov    %eax,-0x30(%ebp)
 mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
 movl   $0x0,0x82c(%eax)
 mov    $"U됧S껋d�E�",%ebx
 mov    $0x0,%esi
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %ebx,0x14(%esp)
 mov    %esi,0x18(%esp)
 mov    %eax,0x10(%esp)
 movl   $0xffffffff,0xc(%esp)
 movl   $0x1388,0x8(%esp)
 movl   $0x20,0x4(%esp)
-mov    -0x30(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TE_EntityI14HandlerFor_TE_E6registEijjPvMS1_FmPNS_11InternalMsgEE>
-mov    -0x30(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN12InterHandler27onINTER_SERVICE_UNAVAILABLEEPN3nsl8CMsgCellE+0x2a2>
-mov    -0x30(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11ITimeEntity6getArgEv>
 mov    %eax,-0x1c(%ebp)
-mov    -0x30(%ebp),%ebx
+mov    -0x34(%ebp),%ebx
 mov    -0x1c(%ebp),%eax
 mov    0x82c(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x18,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl7Threads13getWorkThreadEi>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE>
 jmp    <T> <_ZN12InterHandler27onINTER_SERVICE_UNAVAILABLEEPN3nsl8CMsgCellE+0x2c1>
-mov    -0x30(%ebp),%ebx
+mov    -0x34(%ebp),%ebx
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads14getTimerThreadEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TimerThread16PushTimeReqEventEPNS_11ITimeEntityE>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out  onINTER_SERVICE_UNAVAILABLE",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: DWORD onINTER_SERVICE_UNAVAILABLE(InterHandler * this, CMsgCell *
   pCell) */

DWORD __thiscall
InterHandler::_ZN12InterHandler27onINTER_SERVICE_UNAVAILABLEEPN3nsl8CMsgCellE
          (InterHandler *this,CMsgCell *pCell)

{
  TE_Entity<HandlerFor_TE_> *pTVar1;
  bool bVar2;
  TraceLog *pTVar3;
  char *pcVar4;
  Zone *pZVar5;
  TCPUser *u;
  CommonDataPool *this_00;
  Auction *this_01;
  PAY_TYPE PVar6;
  GameDataPool *this_02;
  WorkThread *this_03;
  TimerThread *this_04;
  int in_GS_OFFSET;
  undefined1 local_68 [22];
  PACKET_HEADER local_52;
  INTERNALMSG_HEADER *local_40;
  GSArea *local_3c;
  ISession *local_38;
  TE_Entity<HandlerFor_TE_> *local_34;
  InternalMsg *local_30;
  TCPUser *local_2c;
  Message *local_28;
  CMsgCell *local_24;
  InternalMsg *local_20;
  
                    /* Unresolved local var: INTERNALMSG_SERVICE_UNAVAILABLE * pInterMsg@[???]
                       Unresolved local var: GSArea * pArea@[???]
                       Unresolved local var: Character * pCharacter@[???]
                       Unresolved local var: PCK_AUCTION_SERVICE_UNAVAILABLE_AG pck@[???]
                       Unresolved local var: PCK_AUCTION_SERVICE_UNAVAILABLE_PG pck_pg@[???]
                       Unresolved local var: MAP_OBJECTS_ITER iter@[???]
                       Unresolved local var: TE_Entity<HandlerFor_TE_> *
                       pTIME_AUCTION_TRY_SHUTDOWN@[???]
                       Unresolved local var: InternalMsg * pArg@[???] */
  pTVar3 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar3,5,"In  onINTER_SERVICE_UNAVAILABLE");
  local_40 = nsl::CMsgCell::GetInternalMsg(pCell);
  pcVar4 = nsl::GetErrorStr((int)local_40[1].pNextJob);
  pTVar3 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar3,5,"Reason %s",pcVar4);
  pZVar5 = G_Zone();
  local_3c = (GSArea *)pZVar5->mArea[0];
  GSArea::SetServiceRunning(local_3c,false);
  PCK_AUCTION_SERVICE_UNAVAILABLE_AG::PCK_AUCTION_SERVICE_UNAVAILABLE_AG
            ((PCK_AUCTION_SERVICE_UNAVAILABLE_AG *)&local_52);
  PCK_AUCTION_SERVICE_UNAVAILABLE_PG::PCK_AUCTION_SERVICE_UNAVAILABLE_PG
            ((PCK_AUCTION_SERVICE_UNAVAILABLE_PG *)(local_68 + 4));
  nsl::IArea::getBeginIter((IArea *)local_68);
  do {
    bVar2 = nsl::IArea::isIterEnd(&local_3c->super_IArea,(MAP_OBJECTS_ITER)local_68._0_4_);
    if (bVar2) {
      this_02 = (GameDataPool *)
                nsl::DataPools::getCommonDataPool
                          (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
      local_34 = GameDataPool::createTimeEntity(this_02);
      local_30 = nsl::ITimeEntity::getArg(&local_34->super_ITimeEntity);
      local_30->workIndex = 0;
      nsl::TE_Entity<HandlerFor_TE_>::regist
                (local_34,0x20,5000,0xffffffff,
                 (this->super_IInterHandler).super_IHandler.pTimeHandler,
                 (anon_struct_8_2_66589125)0x807a29a);
      pTVar1 = local_34;
      if ((local_34->super_ITimeEntity).check_period == 0) {
                    /* Unresolved local var: InternalMsg * pArg@[???] */
        local_20 = nsl::ITimeEntity::getArg(&local_34->super_ITimeEntity);
        pTVar1 = local_34;
        this_03 = nsl::Threads::getWorkThread(&nsl::pApp->super_Threads,local_20->workIndex);
        nsl::WorkThread::PushTransaction(this_03,(IMessageStruct *)pTVar1);
      }
      else {
        this_04 = nsl::Threads::getTimerThread(&nsl::pApp->super_Threads);
        nsl::TimerThread::PushTimeReqEvent(this_04,&pTVar1->super_ITimeEntity);
      }
      pTVar3 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar3,5,"Out  onINTER_SERVICE_UNAVAILABLE");
      return 0;
    }
                    /* Unresolved local var: TCPUser * pTcpUser@[???] */
    local_38 = nsl::IArea::getValueFromIter(&local_3c->super_IArea,(MAP_OBJECTS_ITER)local_68._0_4_)
    ;
    local_2c = nsl::ISession::getTCPUser(local_38);
    bVar2 = nsl::TCPUser::isAboutToDisconnect(local_2c);
    if (bVar2) {
LAB_0807ad18:
      bVar2 = false;
    }
    else {
      bVar2 = nsl::TCPUser::isDisconnected(local_2c);
      if (bVar2) goto LAB_0807ad18;
      bVar2 = true;
    }
    if (bVar2) {
                    /* Unresolved local var: Message * pNewMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
      u = nsl::ISession::getTCPUser(local_38);
      this_00 = nsl::DataPools::getCommonDataPool
                          (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
      local_28 = nsl::CommonDataPool::getSendMessage(this_00,u);
      local_24 = nsl::Message::getCellFromMessage(local_28);
      this_01 = G_Auction();
      PVar6 = Auction::GetPayType(this_01);
      if (PVar6 == PAY_TYPE_POINT) {
        nsl::CMsgCell::operator<<(local_24,(LPPACKET_HEADER)(local_68 + 4));
      }
      else {
        nsl::CMsgCell::operator<<(local_24,&local_52);
      }
      nsl::CMsgCell::PAD(local_24);
      nsl::TCPSendThread::PushSendMsg((this->super_IInterHandler).super_IHandler.sendTCP_,local_28);
    }
    std::_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::ISession*>_>::operator++
              ((_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::ISession*>_> *)local_68);
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/InterHandler.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/InterHandler.cpp)（约第 56 行）：

```cpp
unsigned int InterHandler::onINTER_SERVICE_UNAVAILABLE(nsl::CMsgCell* pCell)
{
    G_TraceLog()->sysLog(5, "In  onINTER_SERVICE_UNAVAILABLE");
    INTERNALMSG_SERVICE_UNAVAILABLE* pInterMsg =
        (INTERNALMSG_SERVICE_UNAVAILABLE*)pCell->GetInternalMsg();
    G_TraceLog()->sysLog(5, "Reason %s", nsl::GetErrorStr((int)pInterMsg->reason));

    GSArea* pArea = (GSArea*)G_Zone()->mArea[0];
    pArea->SetServiceRunning(false);

    PCK_AUCTION_SERVICE_UNAVAILABLE_AG pck;
    PCK_AUCTION_SERVICE_UNAVAILABLE_PG pck_pg;

    for (nsl::MAP_OBJECTS_ITER iter = pArea->getBeginIter(); !pArea->isIterEnd(iter); ++iter)
    {
        nsl::ISession* pSession = pArea->getValueFromIter(iter);
        nsl::TCPUser* pTcpUser = pSession->getTCPUser();
        if (!pTcpUser->isAboutToDisconnect() && !pTcpUser->isDisconnected())
        {
            nsl::Message* pNewMsg =
                pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId)->getSendMessage(pSession->getTCPUser());
            nsl::CMsgCell* pNewCell = pNewMsg->getCellFromMessage();
            if (G_Auction()->GetPayType() == PAY_TYPE_POINT)
            {
                *pNewCell << &pck_pg;
            }
            else
            {
                *pNewCell << &pck;
            }
            pNewCell->PAD();
            sendTCP_->PushSendMsg(pNewMsg);
        }
    }

    nsl::TE_Entity<HandlerFor_TE_>* pTIME_AUCTION_TRY_SHUTDOWN =
        ((GameDataPool*)pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId))->createTimeEntity();
    nsl::InternalMsg* pArg = pTIME_AUCTION_TRY_SHUTDOWN->getArg();
    pArg->workIndex = 0;
    pTIME_AUCTION_TRY_SHUTDOWN->regist(0x20, 5000, 0xffffffff, pTimeHandler,
                                       &HandlerFor_TE_::onTIME_AUCTION_TRY_SHUTDOWN);
    if (pTIME_AUCTION_TRY_SHUTDOWN->check_period == 0)
    {
        nsl::InternalMsg* pArg = pTIME_AUCTION_TRY_SHUTDOWN->getArg();
        pApp->super_Threads.getWorkThread(pArg->workIndex)
            ->PushTransaction((nsl::IMessageStruct*)pTIME_AUCTION_TRY_SHUTDOWN);
    }
    else
    {
        pApp->super_Threads.getTimerThread()->PushTimeReqEvent(pTIME_AUCTION_TRY_SHUTDOWN);
    }

    G_TraceLog()->sysLog(5, "Out  onINTER_SERVICE_UNAVAILABLE");
    return 0;
}
```
