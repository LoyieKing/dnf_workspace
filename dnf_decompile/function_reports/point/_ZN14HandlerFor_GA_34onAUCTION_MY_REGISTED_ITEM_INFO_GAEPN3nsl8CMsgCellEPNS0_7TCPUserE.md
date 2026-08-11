# _ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE

`HandlerFor_GA_::onAUCTION_MY_REGISTED_ITEM_INFO_GA(nsl::CMsgCell*, nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x8075ae6` | `0x369` | `0x80737b2` | `0x356` |

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
 sub    $0xe20,%esp
+movl   $0x1e,-0x2c(%ebp)
 movl   $0x0,-0x28(%ebp)
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_MY_REGISTED_ITEM_INFO_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_GA_12IsGoldServerEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x68>
+je     <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x6f>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_MY_REGISTED_ITEM_INFO_GA:this is not gold server",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x1,%eax
-jmp    <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x35f>
+jmp    <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x34c>
 lea    -0xdfe(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN36PCK_AUCTION_MY_REGISTED_ITEM_INFO_AGC1Ev>
-movl   $0x1e,-0x2c(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,-0x24(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x16(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 lea    -0xdfe(%ebp),%edx
 add    $0x1c,%edx
 mov    %edx,0xc(%esp)
 lea    -0x2c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction21GetMyRegistedItemInfoEiPiP18MyRegistedItemInfo>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
 je     <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0xf7>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"Out onAUCTION_MY_REGISTED_ITEM_INFO_GA, %s",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
-jmp    <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x35f>
+jmp    <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x34c>
 mov    -0x24(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %eax,-0xdec(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x16(%eax),%eax
 mov    %eax,-0xde8(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 mov    %al,-0xde4(%ebp)
 mov    -0x2c(%ebp),%eax
 mov    %al,-0xde3(%ebp)
 movl   $0x0,-0x18(%ebp)
 jmp    <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x228>
 mov    -0x18(%ebp),%eax
 imul   $0x75,%eax,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 sub    $0xdd6,%eax
 mov    0x1b(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
 je     <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x224>
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
 je     <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x224>
 mov    -0x18(%ebp),%edx
 lea    -0xdfe(%ebp),%eax
 imul   $0x75,%edx,%edx
 add    $0x60,%edx
 add    %edx,%eax
 lea    0xf(%eax),%esi
 mov    -0x18(%ebp),%eax
 imul   $0x75,%eax,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
+lea    -0x8(%ebp),%edx
+lea    (%edx,%eax,1),%eax
 sub    $0xdd6,%eax
 mov    0x20(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction19GetAvatarEmblemInfoEiP20stAvatarEmblemInfo_t>
 mov    -0x18(%ebp),%edx
 lea    -0xdfe(%ebp),%eax
 imul   $0x75,%edx,%edx
 sub    $0xffffff80,%edx
 add    %edx,%eax
 lea    0xd(%eax),%esi
 mov    -0x18(%ebp),%eax
 imul   $0x75,%eax,%eax
 lea    -0x8(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 sub    $0xdd6,%eax
 mov    0x20(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction22GetAvatarExpansionInfoEiP23stAvatarExpansionInfo_t>
 mov    -0x18(%ebp),%eax
 imul   $0x75,%eax,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
+lea    -0x8(%ebp),%edx
+lea    (%edx,%eax,1),%eax
 sub    $0xdd6,%eax
 movl   $0x0,0x20(%eax)
 addl   $0x1,-0x18(%ebp)
 movzbl -0xde3(%ebp),%eax
 movzbl %al,%eax
 cmp    -0x18(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x137>
 mov    -0x2c(%ebp),%eax
-mov    $0x1e,%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-imul   $0x75,%eax,%eax
-mov    $0xdd2,%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+imul   $0x75,%eax,%eax
+add    $0x1c,%eax
 mov    %eax,0x4(%esp)
 lea    -0xdfe(%ebp),%eax
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
 lea    -0xdfe(%ebp),%eax
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
-jmp    <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x332>
+jmp    <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x31f>
 mov    -0xc(%ebp),%eax
 mov    &_ZL6gmList(,%eax,4),%edx
 mov    -0x24(%ebp),%eax
 mov    0x16(%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x32e>
+jne    <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x31b>
 mov    -0x24(%ebp),%eax
 mov    0x16(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x10(%esp)
 movl   $"ACK MY_REGISTED_ITEM_INFO_GA",0xc(%esp)
 movl   $"Trace Auction Delay, %s(%d)",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x33d>
+jmp    <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x32a>
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x4,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2e9>
+jne    <T> <_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2d6>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_MY_REGISTED_ITEM_INFO_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 add    $0xe20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* DWARF original prototype: DWORD onAUCTION_MY_REGISTED_ITEM_INFO_GA(HandlerFor_GA_ * this,
   CMsgCell * pCell, TCPUser * u) */

DWORD __thiscall
HandlerFor_GA_::
_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE
          (HandlerFor_GA_ *this,CMsgCell *pCell,TCPUser *u)

{
  int iVar1;
  ulong itemId;
  undefined4 uVar2;
  MyRegistedItemInfo *pMVar3;
  bool bVar4;
  TraceLog *pTVar5;
  DWORD DVar6;
  Auction *pAVar7;
  char *pcVar8;
  PAY_TYPE PVar9;
  CommonDataPool *this_00;
  int in_GS_OFFSET;
  PCK_AUCTION_MY_REGISTED_ITEM_INFO_AG local_e02;
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
                       Unresolved local var: PCK_AUCTION_MY_REGISTED_ITEM_INFO_AG packet@[???]
                       Unresolved local var: int packet_array_size@[???]
                       Unresolved local var: LPPCK_AUCTION_MY_REGISTED_ITEM_INFO_GA pPck@[???]
                       Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
  local_2c = 0;
  pTVar5 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar5,5,"In  onAUCTION_MY_REGISTED_ITEM_INFO_GA");
  bVar4 = IsGoldServer(this);
  if (bVar4) {
    PCK_AUCTION_MY_REGISTED_ITEM_INFO_AG::PCK_AUCTION_MY_REGISTED_ITEM_INFO_AG(&local_e02);
    local_30 = 0x1e;
    local_28 = nsl::CMsgCell::GetPacket(pCell);
    iVar1 = *(int *)((int)&local_28[1].sLength + 2);
    pAVar7 = G_Auction();
    pcVar8 = (char *)local_e02.my_registed_item_info;
    local_2c = Auction::GetMyRegistedItemInfo(pAVar7,iVar1,&local_30,(MyRegistedItemInfo *)pcVar8);
    if (local_2c == 0) {
      local_e02.char_idx = *(int *)(local_28 + 1);
      local_e02.owner_id = *(int *)((int)&local_28[1].sLength + 2);
      pAVar7 = G_Auction();
      PVar9 = Auction::GetPayType(pAVar7);
      local_e02.pay_type = (uchar)PVar9;
      local_e02.item_num = (uchar)local_30;
                    /* Unresolved local var: int i@[???] */
      for (local_1c = 0; local_1c < (int)(uint)local_e02.item_num; local_1c = local_1c + 1) {
                    /* Unresolved local var: STItemInfo * pItemInfo@[???] */
        itemId = local_e02.my_registed_item_info[local_1c].item_info.item_id;
        pAVar7 = G_Auction();
        local_18 = Auction::GetItemInfo(pAVar7,itemId);
        if (local_18 != (STItemInfo *)0x0) {
                    /* Unresolved local var: int item_category@[???] */
          local_14 = (uint)local_18->category_;
          pAVar7 = G_Auction();
          bVar4 = Auction::IsAvatarCategory(pAVar7,local_14);
          if (bVar4) {
            pMVar3 = local_e02.my_registed_item_info + local_1c;
            iVar1 = local_e02.my_registed_item_info[local_1c].item_info.add_info;
            pAVar7 = G_Auction();
            Auction::GetAvatarEmblemInfo(pAVar7,iVar1,&pMVar3->emblem_info);
            pMVar3 = local_e02.my_registed_item_info + local_1c;
            iVar1 = local_e02.my_registed_item_info[local_1c].item_info.add_info;
            pAVar7 = G_Auction();
            Auction::GetAvatarExpansionInfo(pAVar7,iVar1,&pMVar3->expansion);
            local_e02.my_registed_item_info[local_1c].item_info.add_info = 0;
          }
        }
      }
      nsl::PACKET_HEADER::setSize(&local_e02.super_PACKET_HEADER,(0x1e - local_30) * -0x75 + 0xdd2);
      this_00 = nsl::DataPools::getCommonDataPool
                          (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
      local_24 = nsl::CommonDataPool::getSendMessage(this_00,u);
      local_20 = nsl::Message::getCellFromMessage(local_24);
      nsl::CMsgCell::operator<<(local_20,&local_e02.super_PACKET_HEADER);
      nsl::CMsgCell::PAD(local_20);
      nsl::TCPSendThread::PushSendMsg
                ((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_24);
                    /* Unresolved local var: int i@[???] */
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        if (gmList[local_10] == *(int *)((int)&local_28[1].sLength + 2)) {
          uVar2 = *(undefined4 *)((int)&local_28[1].sLength + 2);
          pTVar5 = nsl::G_TraceLog();
          pcVar8 = "ACK MY_REGISTED_ITEM_INFO_GA";
          nsl::TraceLog::sysLog
                    (pTVar5,5,"Trace Auction Delay, %s(%d)","ACK MY_REGISTED_ITEM_INFO_GA",uVar2);
          break;
        }
      }
      pTVar5 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar5,5,"Out onAUCTION_MY_REGISTED_ITEM_INFO_GA",pcVar8);
      DVar6 = 0;
    }
    else {
      pcVar8 = nsl::GetErrorStr(local_2c);
      pTVar5 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar5,5,"Out onAUCTION_MY_REGISTED_ITEM_INFO_GA, %s",pcVar8);
      DVar6 = 0;
    }
  }
  else {
    pTVar5 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar5,7,"Out onAUCTION_MY_REGISTED_ITEM_INFO_GA:this is not gold server")
    ;
    DVar6 = 1;
  }
  return DVar6;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
