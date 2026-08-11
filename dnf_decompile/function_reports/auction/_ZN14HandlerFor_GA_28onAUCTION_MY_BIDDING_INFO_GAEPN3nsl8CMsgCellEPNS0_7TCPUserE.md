# _ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE

`HandlerFor_GA_::onAUCTION_MY_BIDDING_INFO_GA(nsl::CMsgCell*, nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x8075e50` | `0x36a` | `0x8073b0a` | `0x357` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,221 +1,214 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x1db0,%esp
 movl   $0x0,-0x28(%ebp)
-call   <T> <_ZN3nsl10G_TraceLogEv>
-movl   $"In  onAUCTION_MY_BIDDING_INFO_GA",0x8(%esp)
-movl   $0x5,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14HandlerFor_GA_12IsGoldServerEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x68>
-call   <T> <_ZN3nsl10G_TraceLogEv>
-movl   $"Out onAUCTION_MY_BIDDING_INFO_GA:this is not gold server",0x8(%esp)
-movl   $0x7,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    $0x1,%eax
-jmp    <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x360>
 lea    -0x1d95(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN30PCK_AUCTION_MY_BIDDING_INFO_AGC1Ev>
 movl   $0x3c,-0x2c(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,-0x24(%ebp)
+call   <T> <_ZN3nsl10G_TraceLogEv>
+movl   $"In  onAUCTION_MY_BIDDING_INFO_GA",0x8(%esp)
+movl   $0x5,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14HandlerFor_GA_12IsGoldServerEv>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x8b>
+call   <T> <_ZN3nsl10G_TraceLogEv>
+movl   $"Out onAUCTION_MY_BIDDING_INFO_GA:this is not gold server",0x8(%esp)
+movl   $0x7,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
+mov    $0x1,%eax
+jmp    <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x34d>
 mov    -0x24(%ebp),%eax
 mov    0x16(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 lea    -0x1d95(%ebp),%edx
 add    $0x1d,%edx
 mov    %edx,0xc(%esp)
 lea    -0x2c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16GetMyBiddingInfoEiPiP17MyBiddingItemInfo>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
 je     <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0xf7>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"Out onAUCTION_MY_BIDDING_INFO_GA, %s",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x360>
+jmp    <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x34d>
 mov    -0x24(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %eax,-0x1d83(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x16(%eax),%eax
 mov    %eax,-0x1d7f(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 mov    %al,-0x1d7b(%ebp)
 mov    -0x2c(%ebp),%eax
 mov    %ax,-0x1d7a(%ebp)
 movl   $0x0,-0x18(%ebp)
 jmp    <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x229>
 mov    -0x18(%ebp),%eax
 imul   $0x7d,%eax,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 sub    $0x1d5d,%eax
 mov    0x14(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
 je     <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x225>
 mov    -0x14(%ebp),%eax
 movzwl 0x20(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x10(%ebp)
-call   <T> <_Z9G_Auctionv>
-mov    -0x10(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    -0x10(%ebp),%ebx
+call   <T> <_Z9G_Auctionv>
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x225>
 mov    -0x18(%ebp),%edx
 lea    -0x1d95(%ebp),%eax
 imul   $0x7d,%edx,%edx
 add    $0x60,%edx
 add    %edx,%eax
 lea    0x18(%eax),%esi
 mov    -0x18(%ebp),%eax
 imul   $0x7d,%eax,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
+lea    -0x8(%ebp),%edx
+lea    (%edx,%eax,1),%eax
 sub    $0x1d5d,%eax
 mov    0x19(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction19GetAvatarEmblemInfoEiP20stAvatarEmblemInfo_t>
 mov    -0x18(%ebp),%edx
 lea    -0x1d95(%ebp),%eax
 imul   $0x7d,%edx,%edx
 sub    $0xffffff80,%edx
 add    %edx,%eax
 lea    0x16(%eax),%esi
 mov    -0x18(%ebp),%eax
 imul   $0x7d,%eax,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 sub    $0x1d5d,%eax
 mov    0x19(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction22GetAvatarExpansionInfoEiP23stAvatarExpansionInfo_t>
 mov    -0x18(%ebp),%eax
 imul   $0x7d,%eax,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
+lea    -0x8(%ebp),%edx
+lea    (%edx,%eax,1),%eax
 sub    $0x1d5d,%eax
 movl   $0x0,0x19(%eax)
 addl   $0x1,-0x18(%ebp)
 movzwl -0x1d7a(%ebp),%eax
 movzwl %ax,%eax
 cmp    -0x18(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x138>
 mov    -0x2c(%ebp),%eax
-mov    $0x3c,%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-imul   $0x7d,%eax,%eax
-mov    $0x1d69,%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+imul   $0x7d,%eax,%eax
+add    $0x1d,%eax
 mov    %eax,0x4(%esp)
 lea    -0x1d95(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13PACKET_HEADER7setSizeEi>
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
 lea    -0x1d95(%ebp),%eax
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
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x333>
+jmp    <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x320>
 mov    -0xc(%ebp),%eax
 mov    &_ZL6gmList(,%eax,4),%edx
 mov    -0x24(%ebp),%eax
 mov    0x16(%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x32f>
+jne    <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x31c>
 mov    -0x24(%ebp),%eax
 mov    0x16(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x10(%esp)
 movl   $"ACK MY_BIDDING_INFO_GA",0xc(%esp)
 movl   $"Trace Auction Delay, %s(%d)",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x33e>
+jmp    <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x32b>
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x4,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2ea>
+jne    <T> <_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2d7>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_MY_BIDDING_INFO_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 add    $0x1db0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* DWARF original prototype: DWORD onAUCTION_MY_BIDDING_INFO_GA(HandlerFor_GA_ * this, CMsgCell *
   pCell, TCPUser * u) */

DWORD __thiscall
HandlerFor_GA_::_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE
          (HandlerFor_GA_ *this,CMsgCell *pCell,TCPUser *u)

{
  int iVar1;
  ulong itemId;
  undefined4 uVar2;
  MyBiddingItemInfo *pMVar3;
  bool bVar4;
  TraceLog *pTVar5;
  DWORD DVar6;
  Auction *pAVar7;
  char *pcVar8;
  PAY_TYPE PVar9;
  CommonDataPool *this_00;
  int in_GS_OFFSET;
  PCK_AUCTION_MY_BIDDING_INFO_AG local_1d99;
  int local_30;
  int local_2c;
  LPPACKET_HEADER local_28;
  Message *local_24;
  CMsgCell *local_20;
  int local_1c;
  STItemInfo *local_18;
  uint local_14;
  int local_10;
  
                    /* Unresolved local var: int return_code@[???]
                       Unresolved local var: PCK_AUCTION_MY_BIDDING_INFO_AG packet@[???]
                       Unresolved local var: int packet_array_size@[???]
                       Unresolved local var: LPPCK_AUCTION_MY_BIDDING_INFO_GA pPck@[???]
                       Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
  local_2c = 0;
  pTVar5 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar5,5,"In  onAUCTION_MY_BIDDING_INFO_GA");
  bVar4 = IsGoldServer(this);
  if (bVar4) {
    PCK_AUCTION_MY_BIDDING_INFO_AG::PCK_AUCTION_MY_BIDDING_INFO_AG(&local_1d99);
    local_30 = 0x3c;
    local_28 = nsl::CMsgCell::GetPacket(pCell);
    iVar1 = *(int *)((int)&local_28[1].sLength + 2);
    pAVar7 = G_Auction();
    pcVar8 = (char *)local_1d99.my_bidding_item_info;
    local_2c = Auction::GetMyBiddingInfo(pAVar7,iVar1,&local_30,(MyBiddingItemInfo *)pcVar8);
    if (local_2c == 0) {
      local_1d99.char_idx = *(int *)(local_28 + 1);
      local_1d99.buyer_id = *(int *)((int)&local_28[1].sLength + 2);
      pAVar7 = G_Auction();
      PVar9 = Auction::GetPayType(pAVar7);
      local_1d99.pay_type = (uchar)PVar9;
      local_1d99.item_num = (ushort)local_30;
                    /* Unresolved local var: int i@[???] */
      for (local_1c = 0; local_1c < (int)(uint)local_1d99.item_num; local_1c = local_1c + 1) {
                    /* Unresolved local var: STItemInfo * pItemInfo@[???] */
        itemId = local_1d99.my_bidding_item_info[local_1c].item_info.item_id;
        pAVar7 = G_Auction();
        local_18 = Auction::GetItemInfo(pAVar7,itemId);
        if (local_18 != (STItemInfo *)0x0) {
                    /* Unresolved local var: int item_category@[???] */
          local_14 = (uint)local_18->category_;
          pAVar7 = G_Auction();
          bVar4 = Auction::IsAvatarCategory(pAVar7,local_14);
          if (bVar4) {
            pMVar3 = local_1d99.my_bidding_item_info + local_1c;
            iVar1 = local_1d99.my_bidding_item_info[local_1c].item_info.add_info;
            pAVar7 = G_Auction();
            Auction::GetAvatarEmblemInfo(pAVar7,iVar1,&pMVar3->emblem_info);
            pMVar3 = local_1d99.my_bidding_item_info + local_1c;
            iVar1 = local_1d99.my_bidding_item_info[local_1c].item_info.add_info;
            pAVar7 = G_Auction();
            Auction::GetAvatarExpansionInfo(pAVar7,iVar1,&pMVar3->expansion);
            local_1d99.my_bidding_item_info[local_1c].item_info.add_info = 0;
          }
        }
      }
      nsl::PACKET_HEADER::setSize
                (&local_1d99.super_PACKET_HEADER,(0x3c - local_30) * -0x7d + 0x1d69);
      this_00 = nsl::DataPools::getCommonDataPool
                          (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
      local_24 = nsl::CommonDataPool::getSendMessage(this_00,u);
      local_20 = nsl::Message::getCellFromMessage(local_24);
      nsl::CMsgCell::operator<<(local_20,&local_1d99.super_PACKET_HEADER);
      nsl::CMsgCell::PAD(local_20);
      nsl::TCPSendThread::PushSendMsg
                ((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_24);
                    /* Unresolved local var: int i@[???] */
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        if (gmList[local_10] == *(int *)((int)&local_28[1].sLength + 2)) {
          uVar2 = *(undefined4 *)((int)&local_28[1].sLength + 2);
          pTVar5 = nsl::G_TraceLog();
          pcVar8 = "ACK MY_BIDDING_INFO_GA";
          nsl::TraceLog::sysLog
                    (pTVar5,5,"Trace Auction Delay, %s(%d)","ACK MY_BIDDING_INFO_GA",uVar2);
          break;
        }
      }
      pTVar5 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar5,5,"Out onAUCTION_MY_BIDDING_INFO_GA",pcVar8);
      DVar6 = 0;
    }
    else {
      pcVar8 = nsl::GetErrorStr(local_2c);
      pTVar5 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar5,5,"Out onAUCTION_MY_BIDDING_INFO_GA, %s",pcVar8);
      DVar6 = 0;
    }
  }
  else {
    pTVar5 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar5,7,"Out onAUCTION_MY_BIDDING_INFO_GA:this is not gold server");
    DVar6 = 1;
  }
  return DVar6;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Character.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/GameDataPool.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/IState.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/StatisticsCollector.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Zone.h 等 526 个文件*
