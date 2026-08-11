# _ZN14HandlerFor_GP_30onAUCTION_SEARCH_BY_ITEMKEY_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE

`HandlerFor_GP_::onAUCTION_SEARCH_BY_ITEMKEY_GP(nsl::CMsgCell*, nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80784f8` | `0x2b5` | `0x80762c8` | `0x2af` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,175 +1,172 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x2080,%esp
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_SEARCH_BY_ITEMKEY_GP",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_GP_13IsPointServerEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GP_30onAUCTION_SEARCH_BY_ITEMKEY_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x61>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out  onAUCTION_SEARCH_BY_ITEMKEY_GP:this is not point server",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x1,%eax
-jmp    <T> <_ZN14HandlerFor_GP_30onAUCTION_SEARCH_BY_ITEMKEY_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2ab>
+jmp    <T> <_ZN14HandlerFor_GP_30onAUCTION_SEARCH_BY_ITEMKEY_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2a5>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,-0x20(%ebp)
 lea    -0x2061(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN24PCK_AUCTION_ITEM_LIST_PGC1Ev>
 mov    -0x20(%ebp),%eax
 lea    0x31(%eax),%esi
 mov    -0x20(%ebp),%eax
 lea    0x1a(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 lea    -0x2061(%ebp),%edx
 add    $0x21,%edx
 mov    %edx,0x14(%esp)
 lea    -0x2061(%ebp),%edx
 add    $0x1f,%edx
 mov    %edx,0x10(%esp)
 lea    -0x2061(%ebp),%edx
 add    $0x1b,%edx
 mov    %edx,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction14SearchByItemIdEP16TSearchByItemId_PmPjPtP15AuctionItemInfo>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 je     <T> <_ZN14HandlerFor_GP_30onAUCTION_SEARCH_BY_ITEMKEY_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0xd6>
 mov    -0x24(%ebp),%eax
-jmp    <T> <_ZN14HandlerFor_GP_30onAUCTION_SEARCH_BY_ITEMKEY_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2ab>
+jmp    <T> <_ZN14HandlerFor_GP_30onAUCTION_SEARCH_BY_ITEMKEY_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2a5>
 mov    -0x20(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %eax,-0x204f(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0x16(%eax),%eax
 mov    %eax,-0x204b(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 mov    %al,-0x2047(%ebp)
 movl   $0x0,-0x14(%ebp)
 jmp    <T> <_ZN14HandlerFor_GP_30onAUCTION_SEARCH_BY_ITEMKEY_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x1c9>
 mov    -0x14(%ebp),%eax
 imul   $0x89,%eax,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 sub    $0x2019,%eax
 mov    0xc(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 je     <T> <_ZN14HandlerFor_GP_30onAUCTION_SEARCH_BY_ITEMKEY_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x1c5>
 mov    -0x10(%ebp),%eax
 movzwl 0x20(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0xc(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GP_30onAUCTION_SEARCH_BY_ITEMKEY_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x1c5>
 mov    -0x14(%ebp),%edx
 lea    -0x2061(%ebp),%eax
 imul   $0x89,%edx,%edx
 add    $0x70,%edx
 add    %edx,%eax
 lea    0x10(%eax),%esi
 mov    -0x14(%ebp),%eax
 imul   $0x89,%eax,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x2019,%eax
 mov    0x11(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction19GetAvatarEmblemInfoEiP20stAvatarEmblemInfo_t>
 mov    -0x14(%ebp),%eax
 imul   $0x89,%eax,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 sub    $0x2019,%eax
 movl   $0x0,0x11(%eax)
 addl   $0x1,-0x14(%ebp)
 movzwl -0x2042(%ebp),%eax
 movzwl %ax,%eax
 cmp    -0x14(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN14HandlerFor_GP_30onAUCTION_SEARCH_BY_ITEMKEY_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x10d>
 movzwl -0x2042(%ebp),%eax
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
 lea    -0x2061(%ebp),%eax
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
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x18(%ebp)
 lea    -0x2061(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell3PADEv>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_SEARCH_BY_ITEMKEY_GP",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    -0x24(%ebp),%eax
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
/* DWARF original prototype: DWORD onAUCTION_SEARCH_BY_ITEMKEY_GP(HandlerFor_GP_ * this, CMsgCell *
   pCell, TCPUser * u) */

DWORD __thiscall
HandlerFor_GP_::_ZN14HandlerFor_GP_30onAUCTION_SEARCH_BY_ITEMKEY_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE
          (HandlerFor_GP_ *this,CMsgCell *pCell,TCPUser *u)

{
  ulong itemId;
  int uiId;
  LPPACKET_HEADER pPVar1;
  LPPACKET_HEADER pPVar2;
  AuctionItemInfo *pAVar3;
  bool bVar4;
  TraceLog *pTVar5;
  Auction *pAVar6;
  PAY_TYPE PVar7;
  CommonDataPool *this_00;
  int in_GS_OFFSET;
  PCK_AUCTION_ITEM_LIST_PG local_2065;
  DWORD local_28;
  LPPACKET_HEADER local_24;
  Message *local_20;
  CMsgCell *local_1c;
  int local_18;
  STItemInfo *local_14;
  uint local_10;
  
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: LPPCK_AUCTION_SEARCH_BY_ITEMKEY_GP pPck@[???]
                       Unresolved local var: PCK_AUCTION_ITEM_LIST_PG packet@[???]
                       Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
  pTVar5 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar5,5,"In  onAUCTION_SEARCH_BY_ITEMKEY_GP");
  bVar4 = IsPointServer(this);
  if (bVar4) {
    local_24 = nsl::CMsgCell::GetPacket(pCell);
    PCK_AUCTION_ITEM_LIST_PG::PCK_AUCTION_ITEM_LIST_PG(&local_2065);
    pPVar1 = local_24 + 2;
    pPVar2 = local_24 + 1;
    pAVar6 = G_Auction();
    local_28 = Auction::SearchByItemId
                         (pAVar6,(PSearchByItemId)((int)&pPVar2->check_sum + 2),
                          (ulong *)((int)&pPVar1->sequence + 3),&local_2065.total_item_num,
                          &local_2065.item_num,local_2065.item_info);
    if (local_28 == 0) {
      local_2065.char_idx = *(int *)(local_24 + 1);
      local_2065.character_id = *(int *)((int)&local_24[1].sLength + 2);
      pAVar6 = G_Auction();
      PVar7 = Auction::GetPayType(pAVar6);
      local_2065.pay_type = (uchar)PVar7;
                    /* Unresolved local var: int i@[???] */
      for (local_18 = 0; local_18 < (int)(uint)local_2065.item_num; local_18 = local_18 + 1) {
                    /* Unresolved local var: STItemInfo * pItemInfo@[???] */
        itemId = local_2065.item_info[local_18].item_info.item_id;
        pAVar6 = G_Auction();
        local_14 = Auction::GetItemInfo(pAVar6,itemId);
        if (local_14 != (STItemInfo *)0x0) {
                    /* Unresolved local var: int item_category@[???] */
          local_10 = (uint)local_14->category_;
          pAVar6 = G_Auction();
          bVar4 = Auction::IsAvatarCategory(pAVar6,local_10);
          if (bVar4) {
            pAVar3 = local_2065.item_info + local_18;
            uiId = local_2065.item_info[local_18].item_info.add_info;
            pAVar6 = G_Auction();
            Auction::GetAvatarEmblemInfo(pAVar6,uiId,&pAVar3->emblem_info);
            local_2065.item_info[local_18].item_info.add_info = 0;
          }
        }
      }
      nsl::PACKET_HEADER::setSize
                (&local_2065.super_PACKET_HEADER,(0x3c - (uint)local_2065.item_num) * -0x89 + 0x203d
                );
      this_00 = nsl::DataPools::getCommonDataPool
                          (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
      local_20 = nsl::CommonDataPool::getSendMessage(this_00,u);
      local_1c = nsl::Message::getCellFromMessage(local_20);
      nsl::CMsgCell::operator<<(local_1c,&local_2065.super_PACKET_HEADER);
      nsl::CMsgCell::PAD(local_1c);
      nsl::TCPSendThread::PushSendMsg
                ((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_20);
      pTVar5 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar5,5,"Out onAUCTION_SEARCH_BY_ITEMKEY_GP");
    }
  }
  else {
    pTVar5 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar5,7,"Out  onAUCTION_SEARCH_BY_ITEMKEY_GP:this is not point server");
    local_28 = 1;
  }
  return local_28;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GP_JPN.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
