# _ZN14HandlerFor_GA_34onAUCTION_ASK_REGISTED_ITEM_NUM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE

`HandlerFor_GA_::onAUCTION_ASK_REGISTED_ITEM_NUM_GA(nsl::CMsgCell*, nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x807453e` | `0x26c` | `0x8072b2c` | `0x26c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,163 +1,163 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x84,%esp
 movl   $0x0,-0x1c(%ebp)
 lea    -0x5b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN36PCK_AUCTION_ASK_REGISTED_ITEM_NUM_AGC1Ev>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_ASK_REGISTED_ITEM_NUM_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_GA_12IsGoldServerEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GA_34onAUCTION_ASK_REGISTED_ITEM_NUM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x72>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_ASK_REGISTED_ITEM_NUM_GA:this is not gold server",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x1,%eax
 jmp    <T> <_ZN14HandlerFor_GA_34onAUCTION_ASK_REGISTED_ITEM_NUM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x263>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,-0x18(%ebp)
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
 je     <T> <_ZN14HandlerFor_GA_34onAUCTION_ASK_REGISTED_ITEM_NUM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0xcb>
 movw   $0xffff,-0x41(%ebp)
 jmp    <T> <_ZN14HandlerFor_GA_34onAUCTION_ASK_REGISTED_ITEM_NUM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0xe6>
 mov    -0x18(%ebp),%eax
 mov    0x16(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction21GetNowRegistedItemNumEi>
 mov    %ax,-0x41(%ebp)
 mov    -0x18(%ebp),%eax
 mov    0x1d(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 test   %eax,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GA_34onAUCTION_ASK_REGISTED_ITEM_NUM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x10c>
 movw   $0xfffe,-0x41(%ebp)
 mov    -0x18(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %eax,-0x49(%ebp)
 mov    -0x18(%ebp),%eax
 mov    0x16(%eax),%eax
 mov    %eax,-0x45(%ebp)
 mov    -0x18(%ebp),%eax
 movzbl 0x1a(%eax),%eax
 mov    %al,-0x3f(%ebp)
 mov    -0x18(%ebp),%eax
 movzwl 0x1b(%eax),%eax
 mov    %ax,-0x3e(%ebp)
 mov    -0x18(%ebp),%eax
 mov    0x1d(%eax),%eax
 mov    %eax,-0x3c(%ebp)
 mov    -0x18(%ebp),%eax
 mov    0x21(%eax),%eax
 mov    %eax,-0x38(%ebp)
 mov    -0x18(%ebp),%eax
 mov    0x25(%eax),%eax
 mov    %eax,-0x34(%ebp)
 mov    -0x18(%ebp),%eax
 mov    0x29(%eax),%eax
 mov    %eax,-0x30(%ebp)
 mov    -0x18(%ebp),%eax
 mov    0x2d(%eax),%eax
 mov    %eax,-0x2c(%ebp)
 mov    -0x18(%ebp),%eax
 mov    0x31(%eax),%edx
 mov    %edx,-0x28(%ebp)
 mov    0x35(%eax),%edx
 mov    %edx,-0x24(%ebp)
 mov    0x39(%eax),%eax
 mov    %eax,-0x20(%ebp)
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
 mov    %eax,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x10(%ebp)
 lea    -0x5b(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell3PADEv>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
 movl   $0x0,-0xc(%ebp)
 jmp    <T> <_ZN14HandlerFor_GA_34onAUCTION_ASK_REGISTED_ITEM_NUM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x236>
 mov    -0xc(%ebp),%eax
 mov    &_ZL6gmList(,%eax,4),%edx
 mov    -0x18(%ebp),%eax
 mov    0x16(%eax),%eax
 cmp    %eax,%edx
 jne    <T> <_ZN14HandlerFor_GA_34onAUCTION_ASK_REGISTED_ITEM_NUM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x232>
 mov    -0x18(%ebp),%eax
 mov    0x16(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x10(%esp)
 movl   $"ACK ASK_REGISTED_ITEM_NUM_GA",0xc(%esp)
 movl   $"Trace Auction Delay, %s(%d)",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 jmp    <T> <_ZN14HandlerFor_GA_34onAUCTION_ASK_REGISTED_ITEM_NUM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x241>
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x4,-0xc(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN14HandlerFor_GA_34onAUCTION_ASK_REGISTED_ITEM_NUM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x1ed>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_ASK_REGISTED_ITEM_NUM_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 add    $0x84,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* DWARF original prototype: DWORD onAUCTION_ASK_REGISTED_ITEM_NUM_GA(HandlerFor_GA_ * this,
   CMsgCell * pCell, TCPUser * u) */

DWORD __thiscall
HandlerFor_GA_::
_ZN14HandlerFor_GA_34onAUCTION_ASK_REGISTED_ITEM_NUM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE
          (HandlerFor_GA_ *this,CMsgCell *pCell,TCPUser *u)

{
  ulong itemId;
  undefined4 uVar1;
  bool bVar2;
  TraceLog *pTVar3;
  DWORD DVar4;
  Script *this_00;
  int iVar5;
  NSLDBThread *pNVar6;
  Auction *pAVar7;
  STItemInfo *pSVar8;
  CommonDataPool *this_01;
  int in_GS_OFFSET;
  PCK_AUCTION_ASK_REGISTED_ITEM_NUM_AG local_5f;
  undefined4 local_20;
  LPPACKET_HEADER local_1c;
  Message *local_18;
  CMsgCell *local_14;
  int local_10;
  
                    /* Unresolved local var: int return_code@[???]
                       Unresolved local var: PCK_AUCTION_ASK_REGISTED_ITEM_NUM_AG packet@[???]
                       Unresolved local var: LPPCK_AUCTION_ASK_REGISTED_ITEM_NUM_GA pPck@[???]
                       Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
  local_20 = 0;
  PCK_AUCTION_ASK_REGISTED_ITEM_NUM_AG::PCK_AUCTION_ASK_REGISTED_ITEM_NUM_AG(&local_5f);
  pTVar3 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar3,5,"In  onAUCTION_ASK_REGISTED_ITEM_NUM_GA");
  bVar2 = IsGoldServer(this);
  if (bVar2) {
    local_1c = nsl::CMsgCell::GetPacket(pCell);
    this_00 = nsl::G_Script();
    iVar5 = nsl::Script::findIntValue(this_00,1,0xd);
    pNVar6 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
    if (pNVar6->mQueueSize < iVar5) {
      iVar5 = *(int *)((int)&local_1c[1].sLength + 2);
      pAVar7 = G_Auction();
      iVar5 = Auction::GetNowRegistedItemNum(pAVar7,iVar5);
      local_5f.now_registed_num = (short)iVar5;
    }
    else {
      local_5f.now_registed_num = -1;
    }
    itemId = *(ulong *)((int)&local_1c[1].sequence + 1);
    pAVar7 = G_Auction();
    pSVar8 = Auction::GetItemInfo(pAVar7,itemId);
    if (pSVar8 == (STItemInfo *)0x0) {
      local_5f.now_registed_num = -2;
    }
    local_5f.char_idx = *(int *)(local_1c + 1);
    local_5f.character_id = *(int *)((int)&local_1c[1].sLength + 2);
    local_5f.inven_type = *(uchar *)((int)&local_1c[1].check_sum + 2);
    local_5f.slot_no = *(ushort *)((int)&local_1c[1].check_sum + 3);
    local_5f.item_id = *(ulong *)((int)&local_1c[1].sequence + 1);
    local_5f.add_info = *(int *)((int)&local_1c[1].ack + 1);
    local_5f.price = *(int *)&local_1c[2].msg_no;
    local_5f.instant_price = *(int *)((int)&local_1c[2].sLength + 3);
    local_5f.unit_price = *(int *)((int)&local_1c[2].check_sum + 3);
    local_5f.ROI_Category_Key.field_0._high_category_key._0_4_ =
         *(undefined4 *)((int)&local_1c[2].sequence + 3);
    local_5f.ROI_Category_Key.field_0._high_category_key._4_4_ =
         *(undefined4 *)((int)&local_1c[2].ack + 3);
    local_5f.ROI_Category_Key.field_1 =
         *(anon_union_4_2_d690c82b_for_ROI_Category_3 *)((int)&local_1c[3].sLength + 1);
    this_01 = nsl::DataPools::getCommonDataPool
                        (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
    local_18 = nsl::CommonDataPool::getSendMessage(this_01,u);
    local_14 = nsl::Message::getCellFromMessage(local_18);
    nsl::CMsgCell::operator<<(local_14,&local_5f.super_PACKET_HEADER);
    nsl::CMsgCell::PAD(local_14);
    nsl::TCPSendThread::PushSendMsg((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_18);
                    /* Unresolved local var: int i@[???] */
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      if (gmList[local_10] == *(int *)((int)&local_1c[1].sLength + 2)) {
        uVar1 = *(undefined4 *)((int)&local_1c[1].sLength + 2);
        pTVar3 = nsl::G_TraceLog();
        nsl::TraceLog::sysLog
                  (pTVar3,5,"Trace Auction Delay, %s(%d)","ACK ASK_REGISTED_ITEM_NUM_GA",uVar1);
        break;
      }
    }
    pTVar3 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar3,5,"Out onAUCTION_ASK_REGISTED_ITEM_NUM_GA");
    DVar4 = 0;
  }
  else {
    pTVar3 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar3,7,"Out onAUCTION_ASK_REGISTED_ITEM_NUM_GA:this is not gold server")
    ;
    DVar4 = 1;
  }
  return DVar4;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Character.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/GameDataPool.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/IState.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/StatisticsCollector.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Zone.h 等 526 个文件*
