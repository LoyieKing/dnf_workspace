# _ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE

`HandlerFor_GA_::onAUCTION_REGIST_CANCEL_GA(nsl::CMsgCell*, nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x8074d6c` | `0x299` | `0x8072d98` | `0x297` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,172 +1,171 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
-movl   $0x0,-0x2c(%ebp)
+movl   $0x0,-0x30(%ebp)
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_REGIST_CANCEL_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_GA_12IsGoldServerEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x66>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_REGIST_CANCEL_GA:this is not gold server",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x1,%eax
-jmp    <T> <_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x291>
+jmp    <T> <_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x28f>
 call   <T> <_Z21G_StatisticsCollectorv>
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19StatisticsCollector9IncTryCntEi>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    0x1a(%eax),%ebx
 mov    0x1e(%eax),%esi
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    0x16(%eax),%edi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x10(%esp)
 mov    %esi,0x14(%esp)
 mov    %edi,0xc(%esp)
 movl   $"onAUCTION_REGIST_CANCEL_GA(), before RegistCancel(), o_id : %d, au_id : %llu",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35PCK_AUCTION_REGIST_CANCEL_RESULT_AGC1Ev>
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    0x12(%eax),%eax
+mov    %eax,-0x3a(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    0x16(%eax),%eax
 mov    %eax,-0x36(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x32(%ebp)
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    0x1a(%eax),%ebx
 mov    0x1e(%eax),%esi
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    0x16(%eax),%edi
 call   <T> <_Z9G_Auctionv>
 mov    %ebx,0x8(%esp)
 mov    %esi,0xc(%esp)
 mov    %edi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction12RegistCancelEiy>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
+mov    %eax,-0x30(%ebp)
+cmpl   $0x0,-0x30(%ebp)
 je     <T> <_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x148>
-movb   $0x0,-0x2e(%ebp)
+movb   $0x0,-0x32(%ebp)
 call   <T> <_Z21G_StatisticsCollectorv>
-mov    -0x2c(%ebp),%edx
+mov    -0x30(%ebp),%edx
 mov    %edx,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19StatisticsCollector10IncFailCntEii>
 call   <T> <_Z9G_Auctionv>
-mov    -0x2c(%ebp),%edx
+mov    -0x30(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16TransErrToReasonEi>
-mov    %al,-0x2d(%ebp)
+mov    %al,-0x31(%ebp)
 jmp    <T> <_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x14c>
-movb   $0x1,-0x2e(%ebp)
+movb   $0x1,-0x32(%ebp)
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
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x24(%ebp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x20(%ebp)
-lea    -0x48(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell3PADEv>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
-mov    -0x24(%ebp),%edx
+mov    -0x28(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
-movl   $0x0,-0x1c(%ebp)
+movl   $0x0,-0x20(%ebp)
 jmp    <T> <_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x20d>
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    &_ZL6gmList(,%eax,4),%edx
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    0x16(%eax),%eax
 cmp    %eax,%edx
 jne    <T> <_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x209>
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    0x16(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x10(%esp)
 movl   $"ACK REGIST_ITEM_GA",0xc(%esp)
 movl   $"Trace Auction Delay, %s(%d)",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 jmp    <T> <_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x218>
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x4,-0x1c(%ebp)
+addl   $0x1,-0x20(%ebp)
+cmpl   $0x4,-0x20(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x1c4>
-cmpl   $0x0,-0x2c(%ebp)
-je     <T> <_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x26f>
-mov    -0x2c(%ebp),%eax
+cmpl   $0x0,-0x30(%ebp)
+je     <T> <_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x26d>
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
-mov    %eax,%edi
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    0x1a(%eax),%ebx
 mov    0x1e(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x4c(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    0x16(%eax),%edi
 call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    %edi,0x18(%esp)
+mov    -0x1c(%ebp),%edx
+mov    %edx,0x18(%esp)
 mov    %ebx,0x10(%esp)
 mov    %esi,0x14(%esp)
-mov    -0x4c(%ebp),%edx
-mov    %edx,0xc(%esp)
+mov    %edi,0xc(%esp)
 movl   $"Out onAUCTION_REGIST_CANCEL_GA, owner:%d, auId:%llu, %s",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x28c>
+jmp    <T> <_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x28a>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_REGIST_CANCEL_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: DWORD onAUCTION_REGIST_CANCEL_GA(HandlerFor_GA_ * this, CMsgCell *
   pCell, TCPUser * u) */

DWORD __thiscall
HandlerFor_GA_::_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE
          (HandlerFor_GA_ *this,CMsgCell *pCell,TCPUser *u)

{
  undefined4 uVar1;
  undefined4 uVar2;
  __int64 auctionId;
  bool bVar3;
  TraceLog *pTVar4;
  DWORD DVar5;
  StatisticsCollector *pSVar6;
  Auction *pAVar7;
  int iVar8;
  CommonDataPool *this_00;
  char *pcVar9;
  int in_GS_OFFSET;
  undefined4 uVar10;
  PCK_AUCTION_REGIST_CANCEL_RESULT_AG local_4c;
  int local_30;
  LPPACKET_HEADER local_2c;
  Message *local_28;
  CMsgCell *local_24;
  int local_20;
  
                    /* Unresolved local var: int return_code@[???]
                       Unresolved local var: LPPCK_AUCTION_REGIST_CANCEL_GA pPck@[???]
                       Unresolved local var: PCK_AUCTION_REGIST_CANCEL_RESULT_AG
                       cancel_result_packet@[???] */
  local_30 = 0;
  pTVar4 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar4,5,"In  onAUCTION_REGIST_CANCEL_GA");
  bVar3 = IsGoldServer(this);
  if (bVar3) {
    pSVar6 = G_StatisticsCollector();
    StatisticsCollector::IncTryCnt(pSVar6,1);
    local_2c = nsl::CMsgCell::GetPacket(pCell);
    uVar10 = *(undefined4 *)((int)&local_2c[1].check_sum + 2);
    uVar1 = *(undefined4 *)((int)&local_2c[1].sequence + 2);
    uVar2 = *(undefined4 *)((int)&local_2c[1].sLength + 2);
    pTVar4 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog
              (pTVar4,5,
               "onAUCTION_REGIST_CANCEL_GA(), before RegistCancel(), o_id : %d, au_id : %llu",uVar2,
               uVar10,uVar1);
    PCK_AUCTION_REGIST_CANCEL_RESULT_AG::PCK_AUCTION_REGIST_CANCEL_RESULT_AG(&local_4c);
    local_4c.char_idx = *(int *)(local_2c + 1);
    local_4c.owner_id = *(int *)((int)&local_2c[1].sLength + 2);
    pcVar9 = *(char **)((int)&local_2c[1].sequence + 2);
    auctionId = *(__int64 *)((int)&local_2c[1].check_sum + 2);
    iVar8 = *(int *)((int)&local_2c[1].sLength + 2);
    pAVar7 = G_Auction();
    local_30 = Auction::RegistCancel(pAVar7,iVar8,auctionId);
    if (local_30 == 0) {
      local_4c.cancel_result = '\x01';
    }
    else {
      local_4c.cancel_result = '\0';
      pSVar6 = G_StatisticsCollector();
      StatisticsCollector::IncFailCnt(pSVar6,1,local_30);
      pAVar7 = G_Auction();
      iVar8 = Auction::TransErrToReason(pAVar7,local_30);
      local_4c.result_because = (uchar)iVar8;
    }
                    /* Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
    this_00 = nsl::DataPools::getCommonDataPool
                        (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
    local_28 = nsl::CommonDataPool::getSendMessage(this_00,u);
    local_24 = nsl::Message::getCellFromMessage(local_28);
    nsl::CMsgCell::operator<<(local_24,&local_4c.super_PACKET_HEADER);
    nsl::CMsgCell::PAD(local_24);
    nsl::TCPSendThread::PushSendMsg((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_28);
                    /* Unresolved local var: int i@[???] */
    for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
      if (gmList[local_20] == *(int *)((int)&local_2c[1].sLength + 2)) {
        uVar10 = *(undefined4 *)((int)&local_2c[1].sLength + 2);
        pTVar4 = nsl::G_TraceLog();
        pcVar9 = "ACK REGIST_ITEM_GA";
        nsl::TraceLog::sysLog(pTVar4,5,"Trace Auction Delay, %s(%d)","ACK REGIST_ITEM_GA",uVar10);
        break;
      }
    }
    if (local_30 == 0) {
      pTVar4 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar4,5,"Out onAUCTION_REGIST_CANCEL_GA",pcVar9,uVar10);
    }
    else {
      pcVar9 = nsl::GetErrorStr(local_30);
      uVar1 = *(undefined4 *)((int)&local_2c[1].check_sum + 2);
      uVar2 = *(undefined4 *)((int)&local_2c[1].sequence + 2);
      uVar10 = *(undefined4 *)((int)&local_2c[1].sLength + 2);
      pTVar4 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog
                (pTVar4,5,"Out onAUCTION_REGIST_CANCEL_GA, owner:%d, auId:%llu, %s",uVar10,uVar1,
                 uVar2,pcVar9);
    }
    DVar5 = 0;
  }
  else {
    pTVar4 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar4,7,"Out onAUCTION_REGIST_CANCEL_GA:this is not gold server");
    DVar5 = 1;
  }
  return DVar5;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp)（约第 207 行）：

```cpp
unsigned int HandlerFor_GA_::onAUCTION_REGIST_CANCEL_GA(nsl::CMsgCell* pCell, nsl::TCPUser* u)
{
    int return_code = 0;

    G_TraceLog()->sysLog(5, "In  onAUCTION_REGIST_CANCEL_GA");
    if (!IsGoldServer())
    {
        G_TraceLog()->sysLog(7, "Out onAUCTION_REGIST_CANCEL_GA:this is not gold server");
        return 1;
    }
    G_StatisticsCollector()->IncTryCnt(1);
    PCK_AUCTION_REGIST_CANCEL_GA* pPck =
        (PCK_AUCTION_REGIST_CANCEL_GA*)pCell->GetPacket();
    G_TraceLog()->sysLog(5, "onAUCTION_REGIST_CANCEL_GA(), before RegistCancel(), o_id : %d, au_id : %llu",
                         pPck->owner_id, pPck->auction_id);
    PCK_AUCTION_REGIST_CANCEL_RESULT_AG cancel_result_packet;
    cancel_result_packet.char_idx = pPck->char_idx;
    cancel_result_packet.owner_id = pPck->owner_id;
    return_code = G_Auction()->RegistCancel(pPck->owner_id, pPck->auction_id);
    // ORIG：if (return_code != 0) {失败块} else {成功块} —— else 在 fall-through
    if (return_code != 0)
    {
        cancel_result_packet.cancel_result = 0;
        G_StatisticsCollector()->IncFailCnt(1, return_code);
        cancel_result_packet.result_because =
            (unsigned char)G_Auction()->TransErrToReason(return_code);
    }
    else
    {
        cancel_result_packet.cancel_result = 1;
    }
    // ORIG：getCommonDataPool 结果直喂 getSendMessage（无 pPool 命名局部）
    Message* msg = pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId)->getSendMessage(u);
    CMsgCell* cell = msg->getCellFromMessage();
    *cell << &cancel_result_packet;
    cell->PAD();
    sendTCP_->PushSendMsg(msg);
    for (int i = 0; i < 5; i = i + 1)
    {
        if (gmList[i] == pPck->owner_id)
        {
            G_TraceLog()->sysLog(5, "Trace Auction Delay, %s(%d)",
                                 "ACK REGIST_ITEM_GA", pPck->owner_id);
            break;
        }
    }
    if (return_code != 0)
    {
        const char* errStr = GetErrorStr(return_code);
        G_TraceLog()->sysLog(5, "Out onAUCTION_REGIST_CANCEL_GA, owner:%d, auId:%llu, %s",
                             pPck->owner_id, pPck->auction_id, errStr);
    }
    else
    {
        G_TraceLog()->sysLog(5, "Out onAUCTION_REGIST_CANCEL_GA");
    }
    // ORIG：直接 return 0（mov $0,%eax 直出，无 return_code 存储）
    return 0;
}
```
