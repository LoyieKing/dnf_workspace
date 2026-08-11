# _ZN14HandlerFor_GP_34onAUCTION_ASK_REGISTED_ITEM_NUM_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE

`HandlerFor_GP_::onAUCTION_ASK_REGISTED_ITEM_NUM_GP(nsl::CMsgCell*, nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80777f6` | `0x1eb` | `0x8077240` | `0x1eb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,130 +1,130 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x54,%esp
 movl   $0x0,-0x18(%ebp)
 lea    -0x47(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN36PCK_AUCTION_ASK_REGISTED_ITEM_NUM_PGC1Ev>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_ASK_REGISTED_ITEM_NUM_GP",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_GP_13IsPointServerEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GP_34onAUCTION_ASK_REGISTED_ITEM_NUM_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x6f>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out  onAUCTION_ASK_REGISTED_ITEM_NUM_GP:this is not point server",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x1,%eax
 jmp    <T> <_ZN14HandlerFor_GP_34onAUCTION_ASK_REGISTED_ITEM_NUM_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x1e5>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,-0x14(%ebp)
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
 je     <T> <_ZN14HandlerFor_GP_34onAUCTION_ASK_REGISTED_ITEM_NUM_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0xc8>
 movw   $0xffff,-0x2d(%ebp)
 jmp    <T> <_ZN14HandlerFor_GP_34onAUCTION_ASK_REGISTED_ITEM_NUM_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0xe3>
 mov    -0x14(%ebp),%eax
 mov    0x16(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction21GetNowRegistedItemNumEi>
 mov    %ax,-0x2d(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0x1d(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 test   %eax,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GP_34onAUCTION_ASK_REGISTED_ITEM_NUM_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x109>
 movw   $0xfffe,-0x2d(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %eax,-0x35(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0x16(%eax),%eax
 mov    %eax,-0x31(%ebp)
 mov    -0x14(%ebp),%eax
 movzbl 0x1a(%eax),%eax
 mov    %al,-0x2b(%ebp)
 mov    -0x14(%ebp),%eax
 movzwl 0x1b(%eax),%eax
 mov    %ax,-0x2a(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0x1d(%eax),%eax
 mov    %eax,-0x28(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0x21(%eax),%eax
 mov    %eax,-0x24(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0x25(%eax),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0x29(%eax),%eax
 mov    %eax,-0x1c(%ebp)
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
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0xc(%ebp)
 lea    -0x47(%ebp),%eax
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
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_ASK_REGISTED_ITEM_NUM_GP",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 add    $0x54,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* DWARF original prototype: DWORD onAUCTION_ASK_REGISTED_ITEM_NUM_GP(HandlerFor_GP_ * this,
   CMsgCell * pCell, TCPUser * u) */

DWORD __thiscall
HandlerFor_GP_::
_ZN14HandlerFor_GP_34onAUCTION_ASK_REGISTED_ITEM_NUM_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE
          (HandlerFor_GP_ *this,CMsgCell *pCell,TCPUser *u)

{
  ulong itemId;
  bool bVar1;
  TraceLog *pTVar2;
  DWORD DVar3;
  Script *this_00;
  int iVar4;
  NSLDBThread *pNVar5;
  Auction *pAVar6;
  STItemInfo *pSVar7;
  CommonDataPool *this_01;
  int in_GS_OFFSET;
  PCK_AUCTION_ASK_REGISTED_ITEM_NUM_PG local_4b;
  undefined4 local_1c;
  LPPACKET_HEADER local_18;
  Message *local_14;
  CMsgCell *local_10;
  
                    /* Unresolved local var: int return_code@[???]
                       Unresolved local var: PCK_AUCTION_ASK_REGISTED_ITEM_NUM_PG packet@[???]
                       Unresolved local var: LPPCK_AUCTION_ASK_REGISTED_ITEM_NUM_GP pPck@[???]
                       Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
  local_1c = 0;
  PCK_AUCTION_ASK_REGISTED_ITEM_NUM_PG::PCK_AUCTION_ASK_REGISTED_ITEM_NUM_PG(&local_4b);
  pTVar2 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar2,5,"In  onAUCTION_ASK_REGISTED_ITEM_NUM_GP");
  bVar1 = IsPointServer(this);
  if (bVar1) {
    local_18 = nsl::CMsgCell::GetPacket(pCell);
    this_00 = nsl::G_Script();
    iVar4 = nsl::Script::findIntValue(this_00,1,0xd);
    pNVar5 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
    if (pNVar5->mQueueSize < iVar4) {
      iVar4 = *(int *)((int)&local_18[1].sLength + 2);
      pAVar6 = G_Auction();
      iVar4 = Auction::GetNowRegistedItemNum(pAVar6,iVar4);
      local_4b.now_registed_num = (short)iVar4;
    }
    else {
      local_4b.now_registed_num = -1;
    }
    itemId = *(ulong *)((int)&local_18[1].sequence + 1);
    pAVar6 = G_Auction();
    pSVar7 = Auction::GetItemInfo(pAVar6,itemId);
    if (pSVar7 == (STItemInfo *)0x0) {
      local_4b.now_registed_num = -2;
    }
    local_4b.char_idx = *(int *)(local_18 + 1);
    local_4b.character_id = *(int *)((int)&local_18[1].sLength + 2);
    local_4b.inven_type = *(uchar *)((int)&local_18[1].check_sum + 2);
    local_4b.slot_no = *(ushort *)((int)&local_18[1].check_sum + 3);
    local_4b.item_id = *(ulong *)((int)&local_18[1].sequence + 1);
    local_4b.add_info = *(int *)((int)&local_18[1].ack + 1);
    local_4b.price = *(int *)&local_18[2].msg_no;
    local_4b.instant_price = *(int *)((int)&local_18[2].sLength + 3);
    this_01 = nsl::DataPools::getCommonDataPool
                        (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
    local_14 = nsl::CommonDataPool::getSendMessage(this_01,u);
    local_10 = nsl::Message::getCellFromMessage(local_14);
    nsl::CMsgCell::operator<<(local_10,&local_4b.super_PACKET_HEADER);
    nsl::CMsgCell::PAD(local_10);
    nsl::TCPSendThread::PushSendMsg((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_14);
    pTVar2 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar2,5,"Out onAUCTION_ASK_REGISTED_ITEM_NUM_GP");
    DVar3 = 0;
  }
  else {
    pTVar2 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog
              (pTVar2,7,"Out  onAUCTION_ASK_REGISTED_ITEM_NUM_GP:this is not point server");
    DVar3 = 1;
  }
  return DVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GP_JPN.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
