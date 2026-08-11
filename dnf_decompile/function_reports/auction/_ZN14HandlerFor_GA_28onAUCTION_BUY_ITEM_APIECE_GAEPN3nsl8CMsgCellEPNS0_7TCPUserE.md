# _ZN14HandlerFor_GA_28onAUCTION_BUY_ITEM_APIECE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE

`HandlerFor_GA_::onAUCTION_BUY_ITEM_APIECE_GA(nsl::CMsgCell*, nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80764c6` | `0x390` | `0x807416e` | `0x390` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,237 +1,237 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xbc,%esp
 movl   $0x0,-0x34(%ebp)
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_BUY_ITEM_APIECE_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 call   <T> <_Z21G_StatisticsCollectorv>
 movl   $0x2,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19StatisticsCollector9IncTryCntEi>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,-0x30(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0x26(%eax),%eax
 mov    %eax,-0xa8(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0x1e(%eax),%ebx
 mov    0x22(%eax),%esi
 mov    -0x30(%ebp),%eax
 mov    0x1a(%eax),%eax
 mov    %eax,-0xa4(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0x16(%eax),%edi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    -0xa8(%ebp),%edx
 mov    %edx,0x1c(%esp)
 mov    %ebx,0x14(%esp)
 mov    %esi,0x18(%esp)
 mov    -0xa4(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %edi,0xc(%esp)
 movl   $"onAUCTION_BUY_ITEM_APIECE_GA(), before Bidding(), b_id : %d , price : %d, au_id : %llu, count : %d",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN30PCK_AUCTION_BUY_ITEM_APIECE_AGC1Ev>
 mov    -0x30(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %eax,-0x4a(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0x16(%eax),%eax
 mov    %eax,-0x46(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0x22(%eax),%edx
 mov    0x1e(%eax),%eax
 mov    %eax,-0x3c(%ebp)
 mov    %edx,-0x38(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0x1a(%eax),%eax
 mov    %eax,-0x42(%ebp)
 movb   $0x1,-0x3e(%ebp)
 lea    -0x93(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26PCK_AUCTION_LOG_MESSAGE_AGC1Ev>
 mov    -0x30(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %eax,-0x81(%ebp)
 movb   $0x4,-0x7d(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0x1a(%eax),%eax
 mov    %eax,-0x70(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0x22(%eax),%edx
 mov    0x1e(%eax),%eax
 mov    %eax,-0x7c(%ebp)
 mov    %edx,-0x78(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0x26(%eax),%eax
 mov    %eax,-0x67(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0x22(%eax),%edx
 mov    0x1e(%eax),%eax
 mov    %eax,%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction17GetAuctionDicDataEm>
 mov    %eax,-0x2c(%ebp)
 cmpl   $0x0,-0x2c(%ebp)
 je     <T> <_ZN14HandlerFor_GA_28onAUCTION_BUY_ITEM_APIECE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x170>
 mov    -0x2c(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x74(%ebp)
 mov    -0x2c(%ebp),%eax
 mov    0x15(%eax),%eax
 mov    %eax,-0x6c(%ebp)
 mov    -0x2c(%ebp),%eax
 movzbl 0x19(%eax),%eax
 mov    %al,-0x68(%ebp)
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
 je     <T> <_ZN14HandlerFor_GA_28onAUCTION_BUY_ITEM_APIECE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x1bc>
 movl   $0x31,-0x34(%ebp)
 jmp    <T> <_ZN14HandlerFor_GA_28onAUCTION_BUY_ITEM_APIECE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x213>
 mov    -0x30(%ebp),%eax
 mov    0x26(%eax),%eax
 mov    %eax,-0xa0(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0x1a(%eax),%eax
 mov    %eax,-0x9c(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0x16(%eax),%edi
 mov    -0x30(%ebp),%eax
 mov    0x1e(%eax),%ebx
 mov    0x22(%eax),%esi
 call   <T> <_Z9G_Auctionv>
 mov    -0xa0(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    -0x9c(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %edi,0xc(%esp)
 mov    %ebx,0x4(%esp)
 mov    %esi,0x8(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction13BuyItemApieceEyiii>
 mov    %eax,-0x34(%ebp)
 cmpl   $0x0,-0x34(%ebp)
 je     <T> <_ZN14HandlerFor_GA_28onAUCTION_BUY_ITEM_APIECE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x282>
 movb   $0x0,-0x3e(%ebp)
 movb   $0x3,-0x7d(%ebp)
 mov    -0x34(%ebp),%eax
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
 mov    -0x34(%ebp),%edx
 mov    %edx,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19StatisticsCollector10IncFailCntEii>
 call   <T> <_Z9G_Auctionv>
 mov    -0x34(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16TransErrToReasonEi>
 mov    %al,-0x3d(%ebp)
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
 mov    %eax,-0x28(%ebp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x24(%ebp)
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
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
+mov    %eax,-0x1c(%ebp)
 lea    -0x93(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl8CMsgCell3PADEv>
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    -0x20(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
+lea    -0x5c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell3PADEv>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    -0x28(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
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
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x1c(%ebp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl8CMsgCell3PADEv>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_BUY_ITEM_APIECE_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 add    $0xbc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: DWORD onAUCTION_BUY_ITEM_APIECE_GA(HandlerFor_GA_ * this, CMsgCell *
   pCell, TCPUser * u) */

DWORD __thiscall
HandlerFor_GA_::_ZN14HandlerFor_GA_28onAUCTION_BUY_ITEM_APIECE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE
          (HandlerFor_GA_ *this,CMsgCell *pCell,TCPUser *u)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong itemId;
  int buyerId;
  __int64 auctionId;
  TraceLog *pTVar6;
  StatisticsCollector *pSVar7;
  Auction *pAVar8;
  Script *this_00;
  int iVar9;
  NSLDBThread *pNVar10;
  char *pcVar11;
  CommonDataPool *pCVar12;
  int in_GS_OFFSET;
  PCK_AUCTION_LOG_MESSAGE_AG local_97;
  PCK_AUCTION_BUY_ITEM_APIECE_AG local_60;
  int local_38;
  LPPACKET_HEADER local_34;
  AuctionDictionaryData *local_30;
  Message *local_2c;
  CMsgCell *local_28;
  Message *local_24;
  CMsgCell *local_20;
  
                    /* Unresolved local var: int return_code@[???]
                       Unresolved local var: LPPCK_AUCTION_BUY_ITEM_APIECE_GA pPck@[???]
                       Unresolved local var: PCK_AUCTION_BUY_ITEM_APIECE_AG packet@[???]
                       Unresolved local var: PCK_AUCTION_LOG_MESSAGE_AG log_packet@[???]
                       Unresolved local var: AuctionDictionaryData * ptr_data@[???] */
  local_38 = 0;
  pTVar6 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar6,5,"In  onAUCTION_BUY_ITEM_APIECE_GA");
  pSVar7 = G_StatisticsCollector();
  StatisticsCollector::IncTryCnt(pSVar7,2);
  local_34 = nsl::CMsgCell::GetPacket(pCell);
  uVar1 = local_34[2].sLength;
  uVar2 = *(undefined4 *)((int)&local_34[1].sequence + 2);
  uVar3 = *(undefined4 *)((int)&local_34[1].ack + 2);
  uVar4 = *(undefined4 *)((int)&local_34[1].check_sum + 2);
  uVar5 = *(undefined4 *)((int)&local_34[1].sLength + 2);
  pTVar6 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog
            (pTVar6,5,
             "onAUCTION_BUY_ITEM_APIECE_GA(), before Bidding(), b_id : %d , price : %d, au_id : %llu, count : %d"
             ,uVar5,uVar4,uVar2,uVar3,uVar1);
  PCK_AUCTION_BUY_ITEM_APIECE_AG::PCK_AUCTION_BUY_ITEM_APIECE_AG(&local_60);
  local_60.char_idx = *(int *)(local_34 + 1);
  local_60.buyer_id = *(int *)((int)&local_34[1].sLength + 2);
  local_60.auction_id._4_4_ = *(undefined4 *)((int)&local_34[1].ack + 2);
  local_60.auction_id._0_4_ = *(undefined4 *)((int)&local_34[1].sequence + 2);
  local_60.price = *(int *)((int)&local_34[1].check_sum + 2);
  local_60.bidding_result = '\x01';
  PCK_AUCTION_LOG_MESSAGE_AG::PCK_AUCTION_LOG_MESSAGE_AG(&local_97);
  local_97.char_idx = *(int *)(local_34 + 1);
  local_97.auction_log_type = '\x04';
  local_97.price = *(int *)((int)&local_34[1].check_sum + 2);
  local_97.auction_id._4_4_ = *(undefined4 *)((int)&local_34[1].ack + 2);
  local_97.auction_id._0_4_ = *(undefined4 *)((int)&local_34[1].sequence + 2);
  local_97.add_info = local_34[2].sLength;
  itemId = *(ulong *)((int)&local_34[1].sequence + 2);
  pAVar8 = G_Auction();
  local_30 = Auction::GetAuctionDicData(pAVar8,itemId);
  if (local_30 != (AuctionDictionaryData *)0x0) {
    local_97.character_id = local_30->owner_id;
    local_97.item_id = (local_30->item_info).item_id;
    local_97.uniItemAttr = *(uchar *)&(local_30->item_info).field_2;
  }
  this_00 = nsl::G_Script();
  iVar9 = nsl::Script::findIntValue(this_00,1,0xd);
  pNVar10 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
  if (pNVar10->mQueueSize < iVar9) {
    uVar1 = local_34[2].sLength;
    iVar9 = *(int *)((int)&local_34[1].check_sum + 2);
    buyerId = *(int *)((int)&local_34[1].sLength + 2);
    auctionId = *(__int64 *)((int)&local_34[1].sequence + 2);
    pAVar8 = G_Auction();
    local_38 = Auction::BuyItemApiece(pAVar8,auctionId,buyerId,iVar9,uVar1);
  }
  else {
    local_38 = 0x31;
  }
  if (local_38 != 0) {
    local_60.bidding_result = '\0';
    local_97.auction_log_type = '\x03';
    pcVar11 = nsl::GetErrorStr(local_38);
    pTVar6 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar6,5,"onAUCTION_BIDDING_GA, G_Auction()->Bidding() %s",pcVar11);
    pSVar7 = G_StatisticsCollector();
    StatisticsCollector::IncFailCnt(pSVar7,2,local_38);
    pAVar8 = G_Auction();
    iVar9 = Auction::TransErrToReason(pAVar8,local_38);
    local_60.result_because = (uchar)iVar9;
  }
                    /* Unresolved local var: Message * newMsg@[???]
                       Unresolved local var: CMsgCell * newCell@[???] */
  pCVar12 = nsl::DataPools::getCommonDataPool
                      (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
  local_2c = nsl::CommonDataPool::getSendMessage(pCVar12,u);
  local_28 = nsl::Message::getCellFromMessage(local_2c);
  nsl::CMsgCell::operator<<(local_28,&local_97.super_PACKET_HEADER);
  nsl::CMsgCell::PAD(local_28);
  nsl::TCPSendThread::PushSendMsg((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_2c);
                    /* Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
  pCVar12 = nsl::DataPools::getCommonDataPool
                      (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
  local_24 = nsl::CommonDataPool::getSendMessage(pCVar12,u);
  local_20 = nsl::Message::getCellFromMessage(local_24);
  nsl::CMsgCell::operator<<(local_20,&local_60.super_PACKET_HEADER);
  nsl::CMsgCell::PAD(local_20);
  nsl::TCPSendThread::PushSendMsg((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_24);
  pTVar6 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar6,5,"Out onAUCTION_BUY_ITEM_APIECE_GA");
  return 0;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Character.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/GameDataPool.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/IState.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/StatisticsCollector.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Zone.h 等 526 个文件*
