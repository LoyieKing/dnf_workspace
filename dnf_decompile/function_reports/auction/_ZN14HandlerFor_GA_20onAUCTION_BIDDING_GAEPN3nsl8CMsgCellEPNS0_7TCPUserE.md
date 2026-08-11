# _ZN14HandlerFor_GA_20onAUCTION_BIDDING_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE

`HandlerFor_GA_::onAUCTION_BIDDING_GA(nsl::CMsgCell*, nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x8075006` | `0x431` | `0x8073030` | `0x431` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,269 +1,269 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xec,%esp
 movl   $0x0,-0x38(%ebp)
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_BIDDING_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_GA_12IsGoldServerEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GA_20onAUCTION_BIDDING_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x69>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_BIDDING_GA:this is not gold server",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x1,%eax
 jmp    <T> <_ZN14HandlerFor_GA_20onAUCTION_BIDDING_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x426>
 call   <T> <_Z21G_StatisticsCollectorv>
 movl   $0x2,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19StatisticsCollector9IncTryCntEi>
 lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN29PCK_AUCTION_BIDDING_RESULT_AGC1Ev>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,-0x34(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x2b(%eax),%ebx
 mov    0x2f(%eax),%esi
 mov    -0x34(%ebp),%eax
 mov    0x27(%eax),%eax
 mov    %eax,-0xd4(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x16(%eax),%edi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x14(%esp)
 mov    %esi,0x18(%esp)
 mov    -0xd4(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %edi,0xc(%esp)
 movl   $"onAUCTION_BIDDING_GA(), before Bidding(), b_id : %d , price : %d, au_id : %llu",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 lea    -0xbb(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26PCK_AUCTION_LOG_MESSAGE_AGC1Ev>
 mov    -0x34(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %eax,-0xa9(%ebp)
 movb   $0x2,-0xa5(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x27(%eax),%eax
 mov    %eax,-0x98(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x2f(%eax),%edx
 mov    0x2b(%eax),%eax
 mov    %eax,-0xa4(%ebp)
 mov    %edx,-0xa0(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x2f(%eax),%edx
 mov    0x2b(%eax),%eax
 mov    %eax,%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction17GetAuctionDicDataEm>
 mov    %eax,-0x30(%ebp)
 cmpl   $0x0,-0x30(%ebp)
 je     <T> <_ZN14HandlerFor_GA_20onAUCTION_BIDDING_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x167>
 mov    -0x30(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x9c(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0x15(%eax),%eax
 mov    %eax,-0x94(%ebp)
 movl   $0x0,-0x3c(%ebp)
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
 je     <T> <_ZN14HandlerFor_GA_20onAUCTION_BIDDING_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x1ba>
 movl   $0x31,-0x38(%ebp)
 jmp    <T> <_ZN14HandlerFor_GA_20onAUCTION_BIDDING_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x221>
 mov    -0x34(%ebp),%eax
 mov    0x27(%eax),%eax
 mov    %eax,-0xd0(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x2b(%eax),%ebx
 mov    0x2f(%eax),%esi
 mov    -0x34(%ebp),%eax
 add    $0x1a,%eax
 mov    %eax,-0xcc(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x16(%eax),%edi
 call   <T> <_Z9G_Auctionv>
 mov    %eax,%edx
 lea    -0x3c(%ebp),%eax
 mov    %eax,0x1c(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    -0xd0(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    %ebx,0xc(%esp)
 mov    %esi,0x10(%esp)
 mov    -0xcc(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edi,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN7Auction7BiddingEiPKcyiPcRi>
 mov    %eax,-0x38(%ebp)
 cmpl   $0x0,-0x38(%ebp)
 jne    <T> <_ZN14HandlerFor_GA_20onAUCTION_BIDDING_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x22d>
 movb   $0x1,-0x66(%ebp)
 jmp    <T> <_ZN14HandlerFor_GA_20onAUCTION_BIDDING_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x299>
 movb   $0x0,-0x66(%ebp)
 movb   $0x3,-0xa5(%ebp)
 mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"onAUCTION_BIDDING_GA, G_Auction()->Bidding() %s",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 call   <T> <_Z21G_StatisticsCollectorv>
 mov    -0x38(%ebp),%edx
 mov    %edx,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19StatisticsCollector10IncFailCntEii>
 call   <T> <_Z9G_Auctionv>
 mov    -0x38(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16TransErrToReasonEi>
 mov    %al,-0x65(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %eax,-0x72(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x16(%eax),%eax
 mov    %eax,-0x6e(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x2f(%eax),%edx
 mov    0x2b(%eax),%eax
 mov    %eax,-0x64(%ebp)
 mov    %edx,-0x60(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x27(%eax),%eax
 mov    %eax,-0x6a(%ebp)
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
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
+mov    %eax,-0x28(%ebp)
+mov    $0xfffffffc,%eax
+mov    %gs:(%eax),%eax
+mov    &_ZN3nsl4pAppE,%edx
+add    $0x5c,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
+mov    0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE>
 mov    %eax,-0x24(%ebp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x20(%ebp)
 lea    -0xbb(%ebp),%eax
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
-mov    $0xfffffffc,%eax
-mov    %gs:(%eax),%eax
-mov    &_ZN3nsl4pAppE,%edx
-add    $0x5c,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
-mov    0x10(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE>
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x28(%ebp)
 lea    -0x84(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell3PADEv>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    -0x2c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
 movl   $0x0,-0x1c(%ebp)
 jmp    <T> <_ZN14HandlerFor_GA_20onAUCTION_BIDDING_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x3f9>
 mov    -0x1c(%ebp),%eax
 mov    &_ZL6gmList(,%eax,4),%edx
 mov    -0x34(%ebp),%eax
 mov    0x16(%eax),%eax
 cmp    %eax,%edx
 jne    <T> <_ZN14HandlerFor_GA_20onAUCTION_BIDDING_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x3f5>
 mov    -0x34(%ebp),%eax
 mov    0x16(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x10(%esp)
 movl   $"ACK BIDDING_GA",0xc(%esp)
 movl   $"Trace Auction Delay, %s(%d)",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 jmp    <T> <_ZN14HandlerFor_GA_20onAUCTION_BIDDING_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x404>
 addl   $0x1,-0x1c(%ebp)
 cmpl   $0x4,-0x1c(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN14HandlerFor_GA_20onAUCTION_BIDDING_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x3b0>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_BIDDING_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 add    $0xec,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: DWORD onAUCTION_BIDDING_GA(HandlerFor_GA_ * this, CMsgCell * pCell,
   TCPUser * u) */

DWORD __thiscall
HandlerFor_GA_::_ZN14HandlerFor_GA_20onAUCTION_BIDDING_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE
          (HandlerFor_GA_ *this,CMsgCell *pCell,TCPUser *u)

{
  __int64 *p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong itemId;
  int buyerId;
  __int64 auctionId;
  LPPACKET_HEADER pPVar4;
  bool bVar5;
  TraceLog *pTVar6;
  DWORD DVar7;
  StatisticsCollector *pSVar8;
  Auction *pAVar9;
  Script *this_00;
  int iVar10;
  NSLDBThread *pNVar11;
  CommonDataPool *pCVar12;
  int in_GS_OFFSET;
  char *pcVar13;
  undefined4 uVar14;
  PCK_AUCTION_LOG_MESSAGE_AG local_bf;
  PCK_AUCTION_BIDDING_RESULT_AG local_88;
  char local_60 [32];
  int local_40;
  int local_3c;
  LPPACKET_HEADER local_38;
  AuctionDictionaryData *local_34;
  Message *local_30;
  CMsgCell *local_2c;
  Message *local_28;
  CMsgCell *local_24;
  int local_20;
  
                    /* Unresolved local var: int return_code@[???]
                       Unresolved local var: PCK_AUCTION_BIDDING_RESULT_AG packet@[???]
                       Unresolved local var: LPPCK_AUCTION_BIDDING_GA pPck@[???]
                       Unresolved local var: PCK_AUCTION_LOG_MESSAGE_AG log_packet@[???]
                       Unresolved local var: AuctionDictionaryData * ptr_data@[???]
                       Unresolved local var: int temp_result_price@[???]
                       Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
  local_3c = 0;
  pTVar6 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar6,5,"In  onAUCTION_BIDDING_GA");
  bVar5 = IsGoldServer(this);
  if (bVar5) {
    pSVar8 = G_StatisticsCollector();
    StatisticsCollector::IncTryCnt(pSVar8,2);
    PCK_AUCTION_BIDDING_RESULT_AG::PCK_AUCTION_BIDDING_RESULT_AG(&local_88);
    local_38 = nsl::CMsgCell::GetPacket(pCell);
    uVar2 = *(undefined4 *)((int)&local_38[2].check_sum + 1);
    uVar3 = *(undefined4 *)((int)&local_38[2].sequence + 1);
    uVar14 = *(undefined4 *)((int)&local_38[2].sLength + 1);
    pcVar13 = *(char **)((int)&local_38[1].sLength + 2);
    pTVar6 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog
              (pTVar6,5,
               "onAUCTION_BIDDING_GA(), before Bidding(), b_id : %d , price : %d, au_id : %llu",
               pcVar13,uVar14,uVar2,uVar3);
    PCK_AUCTION_LOG_MESSAGE_AG::PCK_AUCTION_LOG_MESSAGE_AG(&local_bf);
    local_bf.char_idx = *(int *)(local_38 + 1);
    local_bf.auction_log_type = '\x02';
    local_bf.price = *(int *)((int)&local_38[2].sLength + 1);
    local_bf.auction_id._4_4_ = *(undefined4 *)((int)&local_38[2].sequence + 1);
    local_bf.auction_id._0_4_ = *(undefined4 *)((int)&local_38[2].check_sum + 1);
    itemId = *(ulong *)((int)&local_38[2].check_sum + 1);
    pAVar9 = G_Auction();
    local_34 = Auction::GetAuctionDicData(pAVar9,itemId);
    if (local_34 != (AuctionDictionaryData *)0x0) {
      local_bf.character_id = local_34->owner_id;
      local_bf.item_id = (local_34->item_info).item_id;
    }
    local_40 = 0;
    this_00 = nsl::G_Script();
    iVar10 = nsl::Script::findIntValue(this_00,1,0xd);
    pNVar11 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
    if (pNVar11->mQueueSize < iVar10) {
                    /* Unresolved local var: char[32] temp_id@[???] */
      iVar10 = *(int *)((int)&local_38[2].sLength + 1);
      p_Var1 = (__int64 *)((int)&local_38[2].check_sum + 1);
      pcVar13 = *(char **)p_Var1;
      uVar14 = *(undefined4 *)((int)&local_38[2].sequence + 1);
      auctionId = *p_Var1;
      pPVar4 = local_38 + 1;
      buyerId = *(int *)((int)&local_38[1].sLength + 2);
      pAVar9 = G_Auction();
      local_3c = Auction::Bidding(pAVar9,buyerId,(char *)((int)&pPVar4->check_sum + 2),auctionId,
                                  iVar10,local_60,&local_40);
    }
    else {
      local_3c = 0x31;
    }
    if (local_3c == 0) {
      local_88.bidding_result = '\x01';
    }
    else {
      local_88.bidding_result = '\0';
      local_bf.auction_log_type = '\x03';
      pcVar13 = nsl::GetErrorStr(local_3c);
      pTVar6 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar6,5,"onAUCTION_BIDDING_GA, G_Auction()->Bidding() %s",pcVar13);
      pSVar8 = G_StatisticsCollector();
      StatisticsCollector::IncFailCnt(pSVar8,2,local_3c);
      pAVar9 = G_Auction();
      iVar10 = Auction::TransErrToReason(pAVar9,local_3c);
      local_88.result_because = (uchar)iVar10;
    }
    local_88.char_idx = *(int *)(local_38 + 1);
    local_88.buyer_id = *(int *)((int)&local_38[1].sLength + 2);
    local_88.auction_id._4_4_ = *(undefined4 *)((int)&local_38[2].sequence + 1);
    local_88.auction_id._0_4_ = *(undefined4 *)((int)&local_38[2].check_sum + 1);
    local_88.price = *(int *)((int)&local_38[2].sLength + 1);
                    /* Unresolved local var: Message * newMsg@[???]
                       Unresolved local var: CMsgCell * newCell@[???] */
    pCVar12 = nsl::DataPools::getCommonDataPool
                        (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
    local_28 = nsl::CommonDataPool::getSendMessage(pCVar12,u);
    local_24 = nsl::Message::getCellFromMessage(local_28);
    nsl::CMsgCell::operator<<(local_24,&local_bf.super_PACKET_HEADER);
    nsl::CMsgCell::PAD(local_24);
    nsl::TCPSendThread::PushSendMsg((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_28);
    pCVar12 = nsl::DataPools::getCommonDataPool
                        (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
    local_30 = nsl::CommonDataPool::getSendMessage(pCVar12,u);
    local_2c = nsl::Message::getCellFromMessage(local_30);
    nsl::CMsgCell::operator<<(local_2c,&local_88.super_PACKET_HEADER);
    nsl::CMsgCell::PAD(local_2c);
    nsl::TCPSendThread::PushSendMsg((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_30);
                    /* Unresolved local var: int i@[???] */
    for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
      if (gmList[local_20] == *(int *)((int)&local_38[1].sLength + 2)) {
        uVar14 = *(undefined4 *)((int)&local_38[1].sLength + 2);
        pTVar6 = nsl::G_TraceLog();
        pcVar13 = "ACK BIDDING_GA";
        nsl::TraceLog::sysLog(pTVar6,5,"Trace Auction Delay, %s(%d)","ACK BIDDING_GA",uVar14);
        break;
      }
    }
    pTVar6 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar6,5,"Out onAUCTION_BIDDING_GA",pcVar13,uVar14);
    DVar7 = 0;
  }
  else {
    pTVar6 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar6,7,"Out onAUCTION_BIDDING_GA:this is not gold server");
    DVar7 = 1;
  }
  return DVar7;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp)（约第 267 行）：

```cpp
unsigned int HandlerFor_GA_::onAUCTION_BIDDING_GA(nsl::CMsgCell* pCell, nsl::TCPUser* u)
{
    // ORIG DWARF 声明序：return_code, packet, pPck, log_packet, ptr_data,
    // temp_result_price, temp_id(块), newMsg/newCell(块), msg/cell, i
    int return_code = 0;
    int temp_result_price;

    G_TraceLog()->sysLog(5, "In  onAUCTION_BIDDING_GA");
    if (!IsGoldServer())
    {
        G_TraceLog()->sysLog(7, "Out onAUCTION_BIDDING_GA:this is not gold server");
        return 1;
    }
    G_StatisticsCollector()->IncTryCnt(2);
    PCK_AUCTION_BIDDING_RESULT_AG packet;
    PCK_AUCTION_BIDDING_GA* pPck = (PCK_AUCTION_BIDDING_GA*)pCell->GetPacket();
    G_TraceLog()->sysLog(5, "onAUCTION_BIDDING_GA(), before Bidding(), b_id : %d , price : %d, au_id : %llu",
                         pPck->buyer_id, pPck->price, pPck->auction_id);
    PCK_AUCTION_LOG_MESSAGE_AG log_packet;
    AuctionDictionary::AuctionDictionaryData* ptr_data;
    log_packet.char_idx = pPck->char_idx;
    log_packet.auction_log_type = 0x02;
    log_packet.price = pPck->price;
    log_packet.auction_id = pPck->auction_id;
    ptr_data = G_Auction()->GetAuctionDicData(pPck->auction_id);
    if (ptr_data != NULL)
    {
        log_packet.character_id = ptr_data->owner_id;
        log_packet.item_id = ptr_data->item_info.item_id;
    }
    temp_result_price = 0;
    {
        char temp_id[32];
        // ORIG：register limit（ebx 常驻）；条件反置 limit <= mQueueSize
        // （setle 物化，0x31 块 fall-through，Bidding 在跳转目标）
        register int limit = G_Script()->findIntValue(1, 0xd);
        if (limit <= pApp->super_Threads.getDBThread(0)->mQueueSize)
        {
            return_code = 0x31;
        }
        else
        {
            return_code = G_Auction()->Bidding(pPck->buyer_id, pPck->buyer_name,
                                               pPck->auction_id, pPck->price,
                                               temp_id, temp_result_price);
        }
    }
    if (return_code == 0)
    {
        packet.bidding_result = 1;
    }
    else
    {
        packet.bidding_result = 0;
        log_packet.auction_log_type = 0x03;
        G_TraceLog()->sysLog(5, "onAUCTION_BIDDING_GA, G_Auction()->Bidding() %s",
                             GetErrorStr(return_code));
        G_StatisticsCollector()->IncFailCnt(2, return_code);
        packet.result_because =
            (unsigned char)G_Auction()->TransErrToReason(return_code);
    }
    packet.char_idx = pPck->char_idx;
    packet.buyer_id = pPck->buyer_id;
    packet.auction_id = pPck->auction_id;
    packet.price = pPck->price;
    // ORIG DWARF：newMsg/newCell 先声明（槽位 -0x2c/-0x28），msg/cell 后声明（-0x24/-0x20）；
    // 执行序仍是 log_packet 先发（msg/cell）、packet 后发（newMsg/newCell）
    Message* newMsg =
        pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId)->getSendMessage(u);
    CMsgCell* newCell = newMsg->getCellFromMessage();
    Message* msg = pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId)->getSendMessage(u);
    CMsgCell* cell = msg->getCellFromMessage();
    *cell << &log_packet;
    cell->PAD();
    sendTCP_->PushSendMsg(msg);
    *newCell << &packet;
    newCell->PAD();
    sendTCP_->PushSendMsg(newMsg);
    for (int i = 0; i < 5; i = i + 1)
    {
        if (gmList[i] == pPck->buyer_id)
        {
            G_TraceLog()->sysLog(5, "Trace Auction Delay, %s(%d)",
                                 "ACK BIDDING_GA", pPck->buyer_id);
            break;
        }
    }
    G_TraceLog()->sysLog(5, "Out onAUCTION_BIDDING_GA");
    // ORIG：直接 return 0（mov $0 直出）
    return 0;
}
```
