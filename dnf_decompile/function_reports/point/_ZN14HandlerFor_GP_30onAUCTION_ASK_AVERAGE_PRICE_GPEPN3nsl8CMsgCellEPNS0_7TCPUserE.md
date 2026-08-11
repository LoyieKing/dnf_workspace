# _ZN14HandlerFor_GP_30onAUCTION_ASK_AVERAGE_PRICE_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE

`HandlerFor_GP_::onAUCTION_ASK_AVERAGE_PRICE_GP(nsl::CMsgCell*, nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x8077664` | `0x192` | `0x8075b30` | `0x192` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,108 +1,108 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x7c,%esp
 movl   $0x0,-0x30(%ebp)
 lea    -0x4e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32PCK_AUCTION_ASK_AVERAGE_PRICE_PGC1Ev>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_ASK_AVERAGE_PRICE_GP",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_GP_13IsPointServerEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GP_30onAUCTION_ASK_AVERAGE_PRICE_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x71>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out  onAUCTION_ASK_AVERAGE_PRICE_GP:this is not point server",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x1,%eax
 jmp    <T> <_ZN14HandlerFor_GP_30onAUCTION_ASK_AVERAGE_PRICE_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x18a>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,-0x2c(%ebp)
-lea    -0x68(%ebp),%eax
+lea    -0x66(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14ROI_AverageKeyC1Ev>
 movb   $0x0,-0x25(%ebp)
 movl   $0x0,-0x24(%ebp)
 movzbl -0x25(%ebp),%eax
 movzbl %al,%edi
 mov    -0x2c(%ebp),%eax
 movzbl 0x1e(%eax),%eax
 movzbl %al,%esi
 mov    -0x2c(%ebp),%eax
 mov    0x1a(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 lea    -0x4e(%ebp),%edx
 add    $0x1a,%edx
 mov    %edx,0x14(%esp)
 mov    %edi,0x10(%esp)
-lea    -0x68(%ebp),%edx
+lea    -0x66(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction15GetAveragePriceEmhRK14ROI_AverageKeyhPi>
 mov    %eax,-0x30(%ebp)
 mov    -0x34(%ebp),%eax
 test   %eax,%eax
 jns    <T> <_ZN14HandlerFor_GP_30onAUCTION_ASK_AVERAGE_PRICE_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE+0xe7>
 movl   $0x0,-0x34(%ebp)
 mov    -0x2c(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %eax,-0x3c(%ebp)
 mov    -0x2c(%ebp),%eax
 mov    0x16(%eax),%eax
 mov    %eax,-0x38(%ebp)
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
 lea    -0x4e(%ebp),%eax
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
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_ASK_AVERAGE_PRICE_GP",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 add    $0x7c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: DWORD onAUCTION_ASK_AVERAGE_PRICE_GP(HandlerFor_GP_ * this, CMsgCell *
   pCell, TCPUser * u) */

DWORD __thiscall
HandlerFor_GP_::_ZN14HandlerFor_GP_30onAUCTION_ASK_AVERAGE_PRICE_GPEPN3nsl8CMsgCellEPNS0_7TCPUserE
          (HandlerFor_GP_ *this,CMsgCell *pCell,TCPUser *u)

{
  uchar itemUpgradeValue;
  ulong itemId;
  bool bVar1;
  TraceLog *pTVar2;
  DWORD DVar3;
  Auction *this_00;
  CommonDataPool *this_01;
  int in_GS_OFFSET;
  ROI_AverageKey local_6c;
  PCK_AUCTION_ASK_AVERAGE_PRICE_PG local_52;
  int local_34;
  LPPACKET_HEADER local_30;
  undefined1 local_29;
  undefined4 local_28;
  Message *local_24;
  CMsgCell *local_20;
  
                    /* Unresolved local var: int return_code@[???]
                       Unresolved local var: PCK_AUCTION_ASK_AVERAGE_PRICE_PG packet@[???]
                       Unresolved local var: LPPCK_AUCTION_ASK_AVERAGE_PRICE_GP pPck@[???]
                       Unresolved local var: ROI_AverageKey roiAverageKey@[???]
                       Unresolved local var: char itemRefineValue@[???]
                       Unresolved local var: int AvePrice@[???]
                       Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
  local_34 = 0;
  PCK_AUCTION_ASK_AVERAGE_PRICE_PG::PCK_AUCTION_ASK_AVERAGE_PRICE_PG(&local_52);
  pTVar2 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar2,5,"In  onAUCTION_ASK_AVERAGE_PRICE_GP");
  bVar1 = IsPointServer(this);
  if (bVar1) {
    local_30 = nsl::CMsgCell::GetPacket(pCell);
    ROI_AverageKey::ROI_AverageKey(&local_6c);
    local_29 = 0;
    local_28 = 0;
    itemUpgradeValue = *(uchar *)((int)&local_30[1].sequence + 2);
    itemId = *(ulong *)((int)&local_30[1].check_sum + 2);
    this_00 = G_Auction();
    local_34 = Auction::GetAveragePrice
                         (this_00,itemId,itemUpgradeValue,&local_6c,'\0',&local_52.average_price);
    if (local_52.average_price < 0) {
      local_52.average_price = 0;
    }
    local_52.char_idx = *(int *)(local_30 + 1);
    local_52.character_id = *(int *)((int)&local_30[1].sLength + 2);
    this_01 = nsl::DataPools::getCommonDataPool
                        (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
    local_24 = nsl::CommonDataPool::getSendMessage(this_01,u);
    local_20 = nsl::Message::getCellFromMessage(local_24);
    nsl::CMsgCell::operator<<(local_20,&local_52.super_PACKET_HEADER);
    nsl::CMsgCell::PAD(local_20);
    nsl::TCPSendThread::PushSendMsg((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_24);
    pTVar2 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar2,5,"Out onAUCTION_ASK_AVERAGE_PRICE_GP");
    DVar3 = 0;
  }
  else {
    pTVar2 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar2,7,"Out  onAUCTION_ASK_AVERAGE_PRICE_GP:this is not point server");
    DVar3 = 1;
  }
  return DVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GP_JPN.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
