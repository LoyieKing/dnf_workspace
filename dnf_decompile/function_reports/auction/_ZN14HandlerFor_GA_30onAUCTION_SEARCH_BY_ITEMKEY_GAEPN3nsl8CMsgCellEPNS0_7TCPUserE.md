# _ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE

`HandlerFor_GA_::onAUCTION_SEARCH_BY_ITEMKEY_GA(nsl::CMsgCell*, nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x8075438` | `0x35c` | `0x8073462` | `0x352` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,215 +1,210 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x2080,%esp
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_SEARCH_BY_ITEMKEY_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_GA_12IsGoldServerEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x61>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_SEARCH_BY_ITEMKEY_GA:this is not gold server",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x1,%eax
-jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x352>
+jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x348>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,-0x24(%ebp)
 lea    -0x2065(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN24PCK_AUCTION_ITEM_LIST_AGC1Ev>
 mov    -0x24(%ebp),%eax
 lea    0x31(%eax),%esi
 mov    -0x24(%ebp),%eax
 lea    0x1a(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 lea    -0x2065(%ebp),%edx
 add    $0x21,%edx
 mov    %edx,0x14(%esp)
 lea    -0x2065(%ebp),%edx
 add    $0x1f,%edx
 mov    %edx,0x10(%esp)
 lea    -0x2065(%ebp),%edx
 add    $0x1b,%edx
 mov    %edx,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction14SearchByItemIdEP16TSearchByItemId_PmPjPtP15AuctionItemInfo>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0xd6>
-mov    -0x28(%ebp),%eax
-jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x352>
+jne    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x345>
 mov    -0x24(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %eax,-0x2053(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x16(%eax),%eax
 mov    %eax,-0x204f(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 mov    %al,-0x204b(%ebp)
 movl   $0x0,-0x18(%ebp)
-jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x213>
+jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x20f>
 mov    -0x18(%ebp),%eax
 imul   $0x89,%eax,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 sub    $0x201d,%eax
 mov    0xc(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x20f>
+je     <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x20b>
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
-je     <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x20f>
+je     <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x20b>
 mov    -0x18(%ebp),%edx
 lea    -0x2065(%ebp),%eax
 imul   $0x89,%edx,%edx
 add    $0x70,%edx
 add    %edx,%eax
 lea    0x10(%eax),%esi
 mov    -0x18(%ebp),%eax
 imul   $0x89,%eax,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x201d,%eax
 mov    0x11(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction19GetAvatarEmblemInfoEiP20stAvatarEmblemInfo_t>
 mov    -0x18(%ebp),%edx
 lea    -0x2065(%ebp),%eax
 imul   $0x89,%edx,%edx
 add    $0x90,%edx
 add    %edx,%eax
 lea    0xe(%eax),%esi
 mov    -0x18(%ebp),%eax
 imul   $0x89,%eax,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 sub    $0x201d,%eax
 mov    0x11(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction22GetAvatarExpansionInfoEiP23stAvatarExpansionInfo_t>
 mov    -0x18(%ebp),%eax
 imul   $0x89,%eax,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x201d,%eax
 movl   $0x0,0x11(%eax)
 addl   $0x1,-0x18(%ebp)
 movzwl -0x2046(%ebp),%eax
 movzwl %ax,%eax
 cmp    -0x18(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x10d>
+jne    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x109>
 movzwl -0x2046(%ebp),%eax
 movzwl %ax,%eax
 mov    $0x3c,%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-imul   $0x89,%eax,%eax
-mov    $0x203d,%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+imul   $0xffffff77,%eax,%eax
+add    $0x203d,%eax
 mov    %eax,0x4(%esp)
 lea    -0x2065(%ebp),%eax
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
 lea    -0x2065(%ebp),%eax
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
-jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x327>
+jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x31d>
 mov    -0xc(%ebp),%eax
 mov    &_ZL6gmList(,%eax,4),%edx
 mov    -0x24(%ebp),%eax
 mov    0x16(%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x323>
+jne    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x319>
 mov    -0x24(%ebp),%eax
 mov    0x16(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x10(%esp)
 movl   $"ACK SEARCH_BY_ITEMKEY_GA",0xc(%esp)
 movl   $"Trace Auction Delay, %s(%d)",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x332>
+jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x328>
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x4,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2de>
+jne    <T> <_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2d4>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_SEARCH_BY_ITEMKEY_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    -0x28(%ebp),%eax
 add    $0x2080,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* DWARF original prototype: DWORD onAUCTION_SEARCH_BY_ITEMKEY_GA(HandlerFor_GA_ * this, CMsgCell *
   pCell, TCPUser * u) */

DWORD __thiscall
HandlerFor_GA_::_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE
          (HandlerFor_GA_ *this,CMsgCell *pCell,TCPUser *u)

{
  ulong itemId;
  int iVar1;
  LPPACKET_HEADER pPVar2;
  LPPACKET_HEADER pPVar3;
  AuctionItemInfo *pAVar4;
  bool bVar5;
  TraceLog *pTVar6;
  Auction *pAVar7;
  PAY_TYPE PVar8;
  CommonDataPool *this_00;
  int in_GS_OFFSET;
  char *pTotalNumberOfFound;
  ushort *pNumberOfFound;
  PCK_AUCTION_ITEM_LIST_AG local_2069;
  DWORD local_2c;
  LPPACKET_HEADER local_28;
  Message *local_24;
  CMsgCell *local_20;
  int local_1c;
  STItemInfo *local_18;
  uint local_14;
  int local_10;
  
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: LPPCK_AUCTION_SEARCH_BY_ITEMKEY_GA pPck@[???]
                       Unresolved local var: PCK_AUCTION_ITEM_LIST_AG packet@[???]
                       Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
  pTVar6 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar6,5,"In  onAUCTION_SEARCH_BY_ITEMKEY_GA");
  bVar5 = IsGoldServer(this);
  if (bVar5) {
    local_28 = nsl::CMsgCell::GetPacket(pCell);
    PCK_AUCTION_ITEM_LIST_AG::PCK_AUCTION_ITEM_LIST_AG(&local_2069);
    pPVar2 = local_28 + 2;
    pPVar3 = local_28 + 1;
    pAVar7 = G_Auction();
    pNumberOfFound = &local_2069.item_num;
    pTotalNumberOfFound = (char *)&local_2069.total_item_num;
    local_2c = Auction::SearchByItemId
                         (pAVar7,(PSearchByItemId)((int)&pPVar3->check_sum + 2),
                          (ulong *)((int)&pPVar2->sequence + 3),(uint *)pTotalNumberOfFound,
                          pNumberOfFound,local_2069.item_info);
    if (local_2c == 0) {
      local_2069.char_idx = *(int *)(local_28 + 1);
      local_2069.character_id = *(int *)((int)&local_28[1].sLength + 2);
      pAVar7 = G_Auction();
      PVar8 = Auction::GetPayType(pAVar7);
      local_2069.pay_type = (uchar)PVar8;
                    /* Unresolved local var: int i@[???] */
      for (local_1c = 0; local_1c < (int)(uint)local_2069.item_num; local_1c = local_1c + 1) {
                    /* Unresolved local var: STItemInfo * pItemInfo@[???] */
        itemId = local_2069.item_info[local_1c].item_info.item_id;
        pAVar7 = G_Auction();
        local_18 = Auction::GetItemInfo(pAVar7,itemId);
        if (local_18 != (STItemInfo *)0x0) {
                    /* Unresolved local var: int item_category@[???] */
          local_14 = (uint)local_18->category_;
          pAVar7 = G_Auction();
          bVar5 = Auction::IsAvatarCategory(pAVar7,local_14);
          if (bVar5) {
            pAVar4 = local_2069.item_info + local_1c;
            iVar1 = local_2069.item_info[local_1c].item_info.add_info;
            pAVar7 = G_Auction();
            Auction::GetAvatarEmblemInfo(pAVar7,iVar1,&pAVar4->emblem_info);
            pAVar4 = local_2069.item_info + local_1c;
            iVar1 = local_2069.item_info[local_1c].item_info.add_info;
            pAVar7 = G_Auction();
            Auction::GetAvatarExpansionInfo(pAVar7,iVar1,&pAVar4->expansion);
            local_2069.item_info[local_1c].item_info.add_info = 0;
          }
        }
      }
      nsl::PACKET_HEADER::setSize
                (&local_2069.super_PACKET_HEADER,(0x3c - (uint)local_2069.item_num) * -0x89 + 0x203d
                );
      this_00 = nsl::DataPools::getCommonDataPool
                          (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
      local_24 = nsl::CommonDataPool::getSendMessage(this_00,u);
      local_20 = nsl::Message::getCellFromMessage(local_24);
      nsl::CMsgCell::operator<<(local_20,&local_2069.super_PACKET_HEADER);
      nsl::CMsgCell::PAD(local_20);
      nsl::TCPSendThread::PushSendMsg
                ((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_24);
                    /* Unresolved local var: int i@[???] */
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        if (gmList[local_10] == *(int *)((int)&local_28[1].sLength + 2)) {
          pNumberOfFound = *(ushort **)((int)&local_28[1].sLength + 2);
          pTVar6 = nsl::G_TraceLog();
          pTotalNumberOfFound = "ACK SEARCH_BY_ITEMKEY_GA";
          nsl::TraceLog::sysLog
                    (pTVar6,5,"Trace Auction Delay, %s(%d)","ACK SEARCH_BY_ITEMKEY_GA",
                     pNumberOfFound);
          break;
        }
      }
      pTVar6 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog
                (pTVar6,5,"Out onAUCTION_SEARCH_BY_ITEMKEY_GA",pTotalNumberOfFound,pNumberOfFound);
    }
  }
  else {
    pTVar6 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar6,7,"Out onAUCTION_SEARCH_BY_ITEMKEY_GA:this is not gold server");
    local_2c = 1;
  }
  return local_2c;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Character.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/GameDataPool.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/IState.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/StatisticsCollector.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Zone.h 等 526 个文件*
