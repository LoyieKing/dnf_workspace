# _ZN14HandlerFor_GP_20onAUCTION_BIDDING_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE

`HandlerFor_GP_::onAUCTION_BIDDING_GP(nsl::CMsgCell*, nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x807812e` | `0x3c9` | `0x8075f00` | `0x3c9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,240 +1,240 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xdc,%esp
-movl   $0x0,-0x30(%ebp)
+movl   $0x0,-0x28(%ebp)
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_BIDDING_GP",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_GP_13IsPointServerEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GP_20onAUCTION_BIDDING_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x69>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out  onAUCTION_BIDDING_GP:this is not point server",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x1,%eax
 jmp    <T> <_ZN14HandlerFor_GP_20onAUCTION_BIDDING_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x3be>
 call   <T> <_Z21G_StatisticsCollectorv>
 movl   $0x2,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19StatisticsCollector9IncTryCntEi>
-lea    -0xb2(%ebp),%eax
+lea    -0xaa(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN29PCK_AUCTION_BIDDING_RESULT_PGC1Ev>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
 mov    0x2b(%eax),%ebx
 mov    0x2f(%eax),%esi
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0x27(%eax),%eax
 mov    %eax,-0xc4(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0x16(%eax),%edi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x14(%esp)
 mov    %esi,0x18(%esp)
 mov    -0xc4(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %edi,0xc(%esp)
 movl   $"onAUCTION_BIDDING_GP(), before Bidding(), b_id : %d , price : %d, au_id : %llu",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-lea    -0x66(%ebp),%eax
+lea    -0x5e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26PCK_AUCTION_LOG_MESSAGE_PGC1Ev>
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0x12(%eax),%eax
-mov    %eax,-0x54(%ebp)
-movb   $0x2,-0x50(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x4c(%ebp)
+movb   $0x2,-0x48(%ebp)
+mov    -0x24(%ebp),%eax
 mov    0x16(%eax),%eax
-mov    %eax,-0x47(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0x27(%eax),%eax
-mov    %eax,-0x43(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x3f(%ebp)
+mov    -0x24(%ebp),%eax
+mov    0x27(%eax),%eax
+mov    %eax,-0x3b(%ebp)
+mov    -0x24(%ebp),%eax
 mov    0x2f(%eax),%edx
 mov    0x2b(%eax),%eax
-mov    %eax,-0x4f(%ebp)
-mov    %edx,-0x4b(%ebp)
+mov    %eax,-0x47(%ebp)
+mov    %edx,-0x43(%ebp)
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0xd,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12findIntValueEii>
 mov    %eax,%ebx
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads11getDBThreadEi>
 mov    0x3c(%eax),%eax
-cmp    %eax,%ebx
-setle  %al
+cmp    %ebx,%eax
+setge  %al
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GP_20onAUCTION_BIDDING_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x16d>
-movl   $0x31,-0x30(%ebp)
+movl   $0x31,-0x28(%ebp)
 jmp    <T> <_ZN14HandlerFor_GP_20onAUCTION_BIDDING_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x1e0>
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0x27(%eax),%eax
 mov    %eax,-0xc0(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0x2b(%eax),%ebx
 mov    0x2f(%eax),%esi
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 add    $0x1a,%eax
 mov    %eax,-0xbc(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0x16(%eax),%edi
 call   <T> <_Z9G_Auctionv>
 mov    %eax,%edx
-lea    -0xb2(%ebp),%eax
+lea    -0xaa(%ebp),%eax
 add    $0x48,%eax
 mov    %eax,0x1c(%esp)
-lea    -0xb2(%ebp),%eax
+lea    -0xaa(%ebp),%eax
 add    $0x28,%eax
 mov    %eax,0x18(%esp)
 mov    -0xc0(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    %ebx,0xc(%esp)
 mov    %esi,0x10(%esp)
 mov    -0xbc(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edi,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN7Auction7BiddingEiPKcyiPcRi>
-mov    %eax,-0x30(%ebp)
-call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    -0x30(%ebp),%edx
+mov    %eax,-0x28(%ebp)
+call   <T> <_ZN3nsl10G_TraceLogEv>
+mov    -0x28(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $"onAUCTION_BIDDING_GP return code : %d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-cmpl   $0x0,-0x30(%ebp)
+cmpl   $0x0,-0x28(%ebp)
 jne    <T> <_ZN14HandlerFor_GP_20onAUCTION_BIDDING_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x213>
-movb   $0x1,-0x94(%ebp)
+movb   $0x1,-0x8c(%ebp)
 jmp    <T> <_ZN14HandlerFor_GP_20onAUCTION_BIDDING_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x282>
-movb   $0x0,-0x94(%ebp)
-movb   $0x3,-0x50(%ebp)
-mov    -0x30(%ebp),%eax
+movb   $0x0,-0x8c(%ebp)
+movb   $0x3,-0x48(%ebp)
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"onAUCTION_BIDDING_GP, G_Auction()->Bidding() %s",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 call   <T> <_Z21G_StatisticsCollectorv>
-mov    -0x30(%ebp),%edx
+mov    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19StatisticsCollector10IncFailCntEii>
 call   <T> <_Z9G_Auctionv>
-mov    -0x30(%ebp),%edx
+mov    -0x28(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16TransErrToReasonEi>
-mov    %al,-0x93(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %al,-0x8b(%ebp)
+mov    -0x24(%ebp),%eax
 mov    0x12(%eax),%eax
-mov    %eax,-0xa0(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x98(%ebp)
+mov    -0x24(%ebp),%eax
 mov    0x16(%eax),%eax
-mov    %eax,-0x9c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x94(%ebp)
+mov    -0x24(%ebp),%eax
 mov    0x2f(%eax),%edx
 mov    0x2b(%eax),%eax
-mov    %eax,-0x92(%ebp)
-mov    %edx,-0x8e(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0x27(%eax),%eax
-mov    %eax,-0x98(%ebp)
+mov    %eax,-0x8a(%ebp)
+mov    %edx,-0x86(%ebp)
+mov    -0x24(%ebp),%eax
+mov    0x27(%eax),%eax
+mov    %eax,-0x90(%ebp)
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE>
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x1c(%ebp)
-lea    -0x66(%ebp),%eax
+lea    -0x5e(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell3PADEv>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE>
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x24(%ebp)
-lea    -0xb2(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+lea    -0xaa(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
-mov    -0x24(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell3PADEv>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
-mov    -0x28(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_BIDDING_GP",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 add    $0xdc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: DWORD onAUCTION_BIDDING_GP(HandlerFor_GP_ * this, CMsgCell * pCell,
   TCPUser * u) */

DWORD __thiscall
HandlerFor_GP_::_ZN14HandlerFor_GP_20onAUCTION_BIDDING_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE
          (HandlerFor_GP_ *this,CMsgCell *pCell,TCPUser *u)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int buyerId;
  __int64 auctionId;
  LPPACKET_HEADER pPVar5;
  bool bVar6;
  TraceLog *pTVar7;
  DWORD DVar8;
  StatisticsCollector *pSVar9;
  Script *this_00;
  int iVar10;
  NSLDBThread *pNVar11;
  char *pcVar12;
  Auction *pAVar13;
  CommonDataPool *pCVar14;
  int in_GS_OFFSET;
  PCK_AUCTION_BIDDING_RESULT_PG local_b6;
  PCK_AUCTION_LOG_MESSAGE_PG local_6a;
  int local_34;
  LPPACKET_HEADER local_30;
  Message *local_2c;
  CMsgCell *local_28;
  Message *local_24;
  CMsgCell *local_20;
  
                    /* Unresolved local var: int return_code@[???]
                       Unresolved local var: PCK_AUCTION_BIDDING_RESULT_PG packet@[???]
                       Unresolved local var: LPPCK_AUCTION_BIDDING_GP pPck@[???]
                       Unresolved local var: PCK_AUCTION_LOG_MESSAGE_PG log_packet@[???]
                       Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
  local_34 = 0;
  pTVar7 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar7,5,"In  onAUCTION_BIDDING_GP");
  bVar6 = IsPointServer(this);
  if (bVar6) {
    pSVar9 = G_StatisticsCollector();
    StatisticsCollector::IncTryCnt(pSVar9,2);
    PCK_AUCTION_BIDDING_RESULT_PG::PCK_AUCTION_BIDDING_RESULT_PG(&local_b6);
    local_30 = nsl::CMsgCell::GetPacket(pCell);
    uVar1 = *(undefined4 *)((int)&local_30[2].check_sum + 1);
    uVar2 = *(undefined4 *)((int)&local_30[2].sequence + 1);
    uVar3 = *(undefined4 *)((int)&local_30[2].sLength + 1);
    uVar4 = *(undefined4 *)((int)&local_30[1].sLength + 2);
    pTVar7 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog
              (pTVar7,5,
               "onAUCTION_BIDDING_GP(), before Bidding(), b_id : %d , price : %d, au_id : %llu",
               uVar4,uVar3,uVar1,uVar2);
    PCK_AUCTION_LOG_MESSAGE_PG::PCK_AUCTION_LOG_MESSAGE_PG(&local_6a);
    local_6a.char_idx = *(int *)(local_30 + 1);
    local_6a.auction_log_type = '\x02';
    local_6a.character_id = *(int *)((int)&local_30[1].sLength + 2);
    local_6a.price = *(int *)((int)&local_30[2].sLength + 1);
    local_6a.auction_id._4_4_ = *(undefined4 *)((int)&local_30[2].sequence + 1);
    local_6a.auction_id._0_4_ = *(undefined4 *)((int)&local_30[2].check_sum + 1);
    this_00 = nsl::G_Script();
    iVar10 = nsl::Script::findIntValue(this_00,1,0xd);
    pNVar11 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
    if (pNVar11->mQueueSize < iVar10) {
      iVar10 = *(int *)((int)&local_30[2].sLength + 1);
      auctionId = *(__int64 *)((int)&local_30[2].check_sum + 1);
      pPVar5 = local_30 + 1;
      buyerId = *(int *)((int)&local_30[1].sLength + 2);
      pAVar13 = G_Auction();
      local_34 = Auction::Bidding(pAVar13,buyerId,(char *)((int)&pPVar5->check_sum + 2),auctionId,
                                  iVar10,local_b6.owner_nexon_id,&local_b6.charge_point);
    }
    else {
      local_34 = 0x31;
    }
    pTVar7 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar7,7,"onAUCTION_BIDDING_GP return code : %d",local_34);
    if (local_34 == 0) {
      local_b6.bidding_result = '\x01';
    }
    else {
      local_b6.bidding_result = '\0';
      local_6a.auction_log_type = '\x03';
      pcVar12 = nsl::GetErrorStr(local_34);
      pTVar7 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar7,5,"onAUCTION_BIDDING_GP, G_Auction()->Bidding() %s",pcVar12);
      pSVar9 = G_StatisticsCollector();
      StatisticsCollector::IncFailCnt(pSVar9,2,local_34);
      pAVar13 = G_Auction();
      iVar10 = Auction::TransErrToReason(pAVar13,local_34);
      local_b6.result_because = (uchar)iVar10;
    }
    local_b6.char_idx = *(int *)(local_30 + 1);
    local_b6.buyer_id = *(int *)((int)&local_30[1].sLength + 2);
    local_b6.auction_id._4_4_ = *(undefined4 *)((int)&local_30[2].sequence + 1);
    local_b6.auction_id._0_4_ = *(undefined4 *)((int)&local_30[2].check_sum + 1);
    local_b6.price = *(int *)((int)&local_30[2].sLength + 1);
                    /* Unresolved local var: Message * newMsg@[???]
                       Unresolved local var: CMsgCell * newCell@[???] */
    pCVar14 = nsl::DataPools::getCommonDataPool
                        (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
    local_24 = nsl::CommonDataPool::getSendMessage(pCVar14,u);
    local_20 = nsl::Message::getCellFromMessage(local_24);
    nsl::CMsgCell::operator<<(local_20,&local_6a.super_PACKET_HEADER);
    nsl::CMsgCell::PAD(local_20);
    nsl::TCPSendThread::PushSendMsg((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_24);
    pCVar14 = nsl::DataPools::getCommonDataPool
                        (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
    local_2c = nsl::CommonDataPool::getSendMessage(pCVar14,u);
    local_28 = nsl::Message::getCellFromMessage(local_2c);
    nsl::CMsgCell::operator<<(local_28,&local_b6.super_PACKET_HEADER);
    nsl::CMsgCell::PAD(local_28);
    nsl::TCPSendThread::PushSendMsg((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_2c);
    pTVar7 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar7,5,"Out onAUCTION_BIDDING_GP");
    DVar8 = 0;
  }
  else {
    pTVar7 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar7,7,"Out  onAUCTION_BIDDING_GP:this is not point server");
    DVar8 = 1;
  }
  return DVar8;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GP_JPN.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GP_JPN.cpp)（约第 155 行）：

```cpp
unsigned int HandlerFor_GP_::onAUCTION_BIDDING_GP(nsl::CMsgCell* pCell, nsl::TCPUser* u)
{
    int return_code = 0;

    G_TraceLog()->sysLog(5, "In  onAUCTION_BIDDING_GP");
    if (!IsPointServer())
    {
        G_TraceLog()->sysLog(7, "Out  onAUCTION_BIDDING_GP:this is not point server");
        return 1;
    }

    G_StatisticsCollector()->IncTryCnt(2);
    PCK_AUCTION_BIDDING_RESULT_PG packet;
    PCK_AUCTION_BIDDING_GA* pPck = (PCK_AUCTION_BIDDING_GA*)pCell->GetPacket();
    G_TraceLog()->sysLog(5, "onAUCTION_BIDDING_GP(), before Bidding(), b_id : %d , price : %d, au_id : %llu",
                         pPck->buyer_id, pPck->price, pPck->auction_id);
    PCK_AUCTION_LOG_MESSAGE_PG log_packet;
    log_packet.char_idx = pPck->char_idx;
    log_packet.auction_log_type = 0x02;
    log_packet.character_id = pPck->buyer_id;
    log_packet.price = pPck->price;
    log_packet.auction_id = pPck->auction_id;
    {
        // ORIG：register maxQueue（ebx 常驻）
        register int maxQueue = G_Script()->findIntValue(1, 0xd);
        if (maxQueue <= pApp->super_Threads.getDBThread(0)->mQueueSize)
        {
            return_code = 0x31;
        }
        else
        {
            return_code = G_Auction()->Bidding(pPck->buyer_id, pPck->buyer_name,
                                               pPck->auction_id, pPck->price,
                                               packet.owner_nexon_id,
                                               packet.charge_point);
        }
    }
    G_TraceLog()->sysLog(7, "onAUCTION_BIDDING_GP return code : %d", return_code);
    // ORIG：if (return_code == 0) {success} else {fail} —— success 在 fall-through
    if (return_code == 0)
    {
        packet.bidding_result = 1;
    }
    else
    {
        packet.bidding_result = 0;
        log_packet.auction_log_type = 0x03;
        G_TraceLog()->sysLog(5, "onAUCTION_BIDDING_GP, G_Auction()->Bidding() %s",
                             GetErrorStr(return_code));
        G_StatisticsCollector()->IncFailCnt(2, return_code);
        packet.result_because =
            (unsigned char)G_Auction()->TransErrToReason(return_code);
    }
    packet.char_idx = pPck->char_idx;
    packet.buyer_id = pPck->buyer_id;
    packet.auction_id = pPck->auction_id;
    packet.price = pPck->price;
    // ORIG：getCommonDataPool 结果直喂 getSendMessage（无 pPool 命名局部）
    Message* msg = pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId)->getSendMessage(u);
    CMsgCell* cell = msg->getCellFromMessage();
    *cell << &log_packet;
    cell->PAD();
    sendTCP_->PushSendMsg(msg);
    msg = pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId)->getSendMessage(u);
    cell = msg->getCellFromMessage();
    *cell << &packet;
    cell->PAD();
    sendTCP_->PushSendMsg(msg);
    G_TraceLog()->sysLog(5, "Out onAUCTION_BIDDING_GP");
    return 0;
}
```
