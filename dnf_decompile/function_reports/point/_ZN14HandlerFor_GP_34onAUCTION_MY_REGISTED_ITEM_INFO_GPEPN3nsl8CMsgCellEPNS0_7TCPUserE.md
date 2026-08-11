# _ZN14HandlerFor_GP_34onAUCTION_MY_REGISTED_ITEM_INFO_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE

`HandlerFor_GP_::onAUCTION_MY_REGISTED_ITEM_INFO_GP(nsl::CMsgCell*, nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x8078a5a` | `0x2c7` | `0x807681e` | `0x2b4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,181 +1,174 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xe10,%esp
 movl   $0x0,-0x24(%ebp)
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_MY_REGISTED_ITEM_INFO_GP",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_GP_13IsPointServerEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GP_34onAUCTION_MY_REGISTED_ITEM_INFO_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x68>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out  onAUCTION_MY_REGISTED_ITEM_INFO_GP:this is not point server",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x1,%eax
-jmp    <T> <_ZN14HandlerFor_GP_34onAUCTION_MY_REGISTED_ITEM_INFO_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2bd>
+jmp    <T> <_ZN14HandlerFor_GP_34onAUCTION_MY_REGISTED_ITEM_INFO_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2aa>
 lea    -0xdfa(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN36PCK_AUCTION_MY_REGISTED_ITEM_INFO_PGC1Ev>
 movl   $0x1e,-0x28(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0x16(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 lea    -0xdfa(%ebp),%edx
 add    $0x1c,%edx
 mov    %edx,0xc(%esp)
 lea    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction21GetMyRegistedItemInfoEiPiP18MyRegistedItemInfo>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 je     <T> <_ZN14HandlerFor_GP_34onAUCTION_MY_REGISTED_ITEM_INFO_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0xf7>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"Out onAUCTION_MY_REGISTED_ITEM_INFO_GP, %s",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_GP_34onAUCTION_MY_REGISTED_ITEM_INFO_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2bd>
+jmp    <T> <_ZN14HandlerFor_GP_34onAUCTION_MY_REGISTED_ITEM_INFO_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2aa>
 mov    -0x20(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %eax,-0xde8(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0x16(%eax),%eax
 mov    %eax,-0xde4(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 mov    %al,-0xde0(%ebp)
 mov    -0x28(%ebp),%eax
 mov    %al,-0xddf(%ebp)
 movl   $0x0,-0x14(%ebp)
 jmp    <T> <_ZN14HandlerFor_GP_34onAUCTION_MY_REGISTED_ITEM_INFO_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x1e3>
 mov    -0x14(%ebp),%eax
 imul   $0x75,%eax,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 sub    $0xdd2,%eax
 mov    0x1b(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 je     <T> <_ZN14HandlerFor_GP_34onAUCTION_MY_REGISTED_ITEM_INFO_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x1df>
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
 je     <T> <_ZN14HandlerFor_GP_34onAUCTION_MY_REGISTED_ITEM_INFO_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x1df>
 mov    -0x14(%ebp),%edx
 lea    -0xdfa(%ebp),%eax
 imul   $0x75,%edx,%edx
 add    $0x60,%edx
 add    %edx,%eax
 lea    0xf(%eax),%esi
 mov    -0x14(%ebp),%eax
 imul   $0x75,%eax,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
+lea    -0x8(%ebp),%edx
+lea    (%edx,%eax,1),%eax
 sub    $0xdd2,%eax
 mov    0x20(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction19GetAvatarEmblemInfoEiP20stAvatarEmblemInfo_t>
 mov    -0x14(%ebp),%eax
 imul   $0x75,%eax,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 sub    $0xdd2,%eax
 movl   $0x0,0x20(%eax)
 addl   $0x1,-0x14(%ebp)
 movzbl -0xddf(%ebp),%eax
 movzbl %al,%eax
 cmp    -0x14(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN14HandlerFor_GP_34onAUCTION_MY_REGISTED_ITEM_INFO_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x137>
 mov    -0x28(%ebp),%eax
-mov    $0x1e,%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
 imul   $0x75,%eax,%eax
-mov    $0xdd2,%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+add    $0x1c,%eax
 mov    %eax,0x4(%esp)
 lea    -0xdfa(%ebp),%eax
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
 lea    -0xdfa(%ebp),%eax
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
 movl   $"Out onAUCTION_MY_REGISTED_ITEM_INFO_GP",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 add    $0xe10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* DWARF original prototype: DWORD onAUCTION_MY_REGISTED_ITEM_INFO_GP(HandlerFor_GP_ * this,
   CMsgCell * pCell, TCPUser * u) */

DWORD __thiscall
HandlerFor_GP_::
_ZN14HandlerFor_GP_34onAUCTION_MY_REGISTED_ITEM_INFO_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE
          (HandlerFor_GP_ *this,CMsgCell *pCell,TCPUser *u)

{
  int iVar1;
  ulong itemId;
  MyRegistedItemInfo *pMVar2;
  bool bVar3;
  TraceLog *pTVar4;
  DWORD DVar5;
  Auction *pAVar6;
  char *pcVar7;
  PAY_TYPE PVar8;
  CommonDataPool *this_00;
  int in_GS_OFFSET;
  PCK_AUCTION_MY_REGISTED_ITEM_INFO_PG local_dfe;
  int local_2c;
  int local_28;
  LPPACKET_HEADER local_24;
  Message *local_20;
  CMsgCell *local_1c;
  int local_18;
  STItemInfo *local_14;
  uint local_10;
  
                    /* Unresolved local var: int return_code@[???]
                       Unresolved local var: PCK_AUCTION_MY_REGISTED_ITEM_INFO_PG packet@[???]
                       Unresolved local var: int packet_array_size@[???]
                       Unresolved local var: LPPCK_AUCTION_MY_REGISTED_ITEM_INFO_GP pPck@[???]
                       Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
  local_28 = 0;
  pTVar4 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar4,5,"In  onAUCTION_MY_REGISTED_ITEM_INFO_GP");
  bVar3 = IsPointServer(this);
  if (bVar3) {
    PCK_AUCTION_MY_REGISTED_ITEM_INFO_PG::PCK_AUCTION_MY_REGISTED_ITEM_INFO_PG(&local_dfe);
    local_2c = 0x1e;
    local_24 = nsl::CMsgCell::GetPacket(pCell);
    iVar1 = *(int *)((int)&local_24[1].sLength + 2);
    pAVar6 = G_Auction();
    local_28 = Auction::GetMyRegistedItemInfo
                         (pAVar6,iVar1,&local_2c,local_dfe.my_registed_item_info);
    if (local_28 == 0) {
      local_dfe.char_idx = *(int *)(local_24 + 1);
      local_dfe.owner_id = *(int *)((int)&local_24[1].sLength + 2);
      pAVar6 = G_Auction();
      PVar8 = Auction::GetPayType(pAVar6);
      local_dfe.pay_type = (uchar)PVar8;
      local_dfe.item_num = (uchar)local_2c;
                    /* Unresolved local var: int i@[???] */
      for (local_18 = 0; local_18 < (int)(uint)local_dfe.item_num; local_18 = local_18 + 1) {
                    /* Unresolved local var: STItemInfo * pItemInfo@[???] */
        itemId = local_dfe.my_registed_item_info[local_18].item_info.item_id;
        pAVar6 = G_Auction();
        local_14 = Auction::GetItemInfo(pAVar6,itemId);
        if (local_14 != (STItemInfo *)0x0) {
                    /* Unresolved local var: int item_category@[???] */
          local_10 = (uint)local_14->category_;
          pAVar6 = G_Auction();
          bVar3 = Auction::IsAvatarCategory(pAVar6,local_10);
          if (bVar3) {
            pMVar2 = local_dfe.my_registed_item_info + local_18;
            iVar1 = local_dfe.my_registed_item_info[local_18].item_info.add_info;
            pAVar6 = G_Auction();
            Auction::GetAvatarEmblemInfo(pAVar6,iVar1,&pMVar2->emblem_info);
            local_dfe.my_registed_item_info[local_18].item_info.add_info = 0;
          }
        }
      }
      nsl::PACKET_HEADER::setSize(&local_dfe.super_PACKET_HEADER,(0x1e - local_2c) * -0x75 + 0xdd2);
      this_00 = nsl::DataPools::getCommonDataPool
                          (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
      local_20 = nsl::CommonDataPool::getSendMessage(this_00,u);
      local_1c = nsl::Message::getCellFromMessage(local_20);
      nsl::CMsgCell::operator<<(local_1c,&local_dfe.super_PACKET_HEADER);
      nsl::CMsgCell::PAD(local_1c);
      nsl::TCPSendThread::PushSendMsg
                ((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_20);
      pTVar4 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar4,5,"Out onAUCTION_MY_REGISTED_ITEM_INFO_GP");
      DVar5 = 0;
    }
    else {
      pcVar7 = nsl::GetErrorStr(local_28);
      pTVar4 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar4,5,"Out onAUCTION_MY_REGISTED_ITEM_INFO_GP, %s",pcVar7);
      DVar5 = 0;
    }
  }
  else {
    pTVar4 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog
              (pTVar4,7,"Out  onAUCTION_MY_REGISTED_ITEM_INFO_GP:this is not point server");
    DVar5 = 1;
  }
  return DVar5;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GP_JPN.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
