# _ZN3nsl13TCPSendThread4loopEPv

`nsl::TCPSendThread::loop(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80ae304` | `0x2fa` | `0x80ad0ba` | `0x30f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,190 +1,197 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x80060,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Start up TCPSendThread-%p\n",(%esp)
 call   <T> <printf>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Start up TCPSendThread",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-lea    -0x80040(%ebp),%eax
+lea    -0x8003c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi524288EEC1Ev>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread10PopSendMsgEv>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getUserFromMessageEv>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl7TCPUser19isAboutToDisconnectEv>
 test   %al,%al
 jne    <T> <_ZN3nsl13TCPSendThread4loopEPv+0x83>
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl7TCPUser14isDisconnectedEv>
 test   %al,%al
 je     <T> <_ZN3nsl13TCPSendThread4loopEPv+0x8a>
 mov    $0x1,%eax
 jmp    <T> <_ZN3nsl13TCPSendThread4loopEPv+0x8f>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN3nsl13TCPSendThread4loopEPv+0xae>
-mov    -0x10(%ebp),%eax
+je     <T> <_ZN3nsl13TCPSendThread4loopEPv+0xb1>
+mov    -0x18(%ebp),%eax
 mov    %eax,0x8(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread16SendDataPoolFreeEPNS_7MessageEPNS_7TCPUserE>
-jmp    <T> <_ZN3nsl13TCPSendThread4loopEPv+0x49>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN3nsl13TCPSendThread4loopEPv+0x2ec>
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x88(%eax),%eax
 mov    %eax,0xa(%edx)
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x88(%eax)
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    0x30(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    -0x10(%ebp),%edx
+mov    -0x18(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"SEND MSG who id=%d, add=%p",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13PACKET_HEADER11getCategoryEv>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"SEND PCK ct    =%d",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13PACKET_HEADER11getPacketIDEv>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"SEND PCK id    =%d",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
-mov    0x2(%eax),%ebx
+mov    0x2(%eax),%eax
+mov    %eax,-0x10(%ebp)
 call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    %ebx,0xc(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"SEND PCK size  =%d",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $0x2,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message15getDataTypeMaskEi>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-jne    <T> <_ZN3nsl13TCPSendThread4loopEPv+0x2b7>
+jne    <T> <_ZN3nsl13TCPSendThread4loopEPv+0x2c6>
 call   <T> <_ZN3nsl10G_TraceLogEv>
-movl   $&data#ebeb7030(.rodata),0x8(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $"size=%d",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser13onWriteByCMsgEPNS_8CMsgCellE>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN3nsl13TCPSendThread4loopEPv+0x290>
+je     <T> <_ZN3nsl13TCPSendThread4loopEPv+0x29d>
 movl   $0x0,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18setOffDataTypeMaskEi>
 movl   $0x0,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message17setOnDataTypeMaskEi>
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl8CMsgCell7GetSizeEv>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
-movl   $"Would block 이므로 다시 큐에 넣는다. size=%d",0x8(%esp)
+movl   $"Would block ... size=%d",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message13SetWouldBlockEv>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
-jmp    <T> <_ZN3nsl13TCPSendThread4loopEPv+0x49>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN3nsl13TCPSendThread4loopEPv+0x2ec>
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser17GetPendingSendNumEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN3nsl13TCPSendThread4loopEPv+0x2b7>
+je     <T> <_ZN3nsl13TCPSendThread4loopEPv+0x2c7>
 movl   $0x0,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser10SetSendingEb>
+jmp    <T> <_ZN3nsl13TCPSendThread4loopEPv+0x2c7>
+nop
 movl   $0x0,-0xc(%ebp)
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0x8(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread16SendDataPoolFreeEPNS_7MessageEPNS_7TCPUserE>
 jmp    <T> <_ZN3nsl13TCPSendThread4loopEPv+0x49>
+jmp    <T> <_ZN3nsl13TCPSendThread4loopEPv+0x49>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x80040(%ebp),%eax
+lea    -0x8003c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi524288EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void loop(TCPSendThread * this, void * temp) */

void __thiscall nsl::TCPSendThread::_ZN3nsl13TCPSendThread4loopEPv(TCPSendThread *this,void *temp)

{
  bool bVar1;
  TraceLog *pTVar2;
  Message *this_00;
  TCPUser *this_01;
  CMsgCell *this_02;
  LPPACKET_HEADER pPVar3;
  CMsgCell *pCVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  TMsgCell<524288> TStack_80044;
  
                    /* Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???]
                       Unresolved local var: CMsgCell * encMsg@[???]
                       Unresolved local var: MSGCELL512K tmpbuffer@[???]
                       Unresolved local var: CMsgCell * zipMsg@[???]
                       Unresolved local var: TCPUser * pUser@[???]
                       Unresolved local var: int CompressLen@[???] */
  printf("Start up TCPSendThread-%p\n",temp);
  pTVar2 = G_TraceLog();
  TraceLog::sysLog(pTVar2,8,"Start up TCPSendThread");
  TMsgCell<524288>::TMsgCell(&TStack_80044);
LAB_080ae34d:
  do {
                    /* try { // try from 080ae353 to 080ae5da has its CatchHandler @ 080ae5e0 */
    this_00 = _ZN3nsl13TCPSendThread10PopSendMsgEv(this);
    this_01 = Message::getUserFromMessage(this_00);
    bVar1 = TCPUser::isAboutToDisconnect(this_01);
    if (bVar1) {
LAB_080ae387:
      bVar1 = true;
    }
    else {
      bVar1 = TCPUser::isDisconnected(this_01);
      if (bVar1) goto LAB_080ae387;
      bVar1 = false;
    }
    if (bVar1) {
      _ZN3nsl13TCPSendThread16SendDataPoolFreeEPNS_7MessageEPNS_7TCPUserE(this,this_00,this_01);
      goto LAB_080ae34d;
    }
    this_02 = Message::getCellFromMessage(this_00);
    pPVar3 = CMsgCell::GetPacket(this_02);
    uVar7 = this->sequence;
    pPVar3->sequence = uVar7;
    this->sequence = uVar7 + 1;
    uVar7 = this_01->mUserId;
    pTVar2 = G_TraceLog();
    TraceLog::sysLog(pTVar2,8,"SEND MSG who id=%d, add=%p",uVar7,this_01);
    pCVar4 = Message::getCellFromMessage(this_00);
    pPVar3 = CMsgCell::GetPacket(pCVar4);
    DVar5 = PACKET_HEADER::getCategory(pPVar3);
    pTVar2 = G_TraceLog();
    TraceLog::sysLog(pTVar2,8,"SEND PCK ct    =%d",DVar5);
    pCVar4 = Message::getCellFromMessage(this_00);
    pPVar3 = CMsgCell::GetPacket(pCVar4);
    DVar5 = PACKET_HEADER::getPacketID(pPVar3);
    pTVar2 = G_TraceLog();
    TraceLog::sysLog(pTVar2,8,"SEND PCK id    =%d",DVar5);
    pCVar4 = Message::getCellFromMessage(this_00);
    pPVar3 = CMsgCell::GetPacket(pCVar4);
    uVar7 = pPVar3->sLength;
    pTVar2 = G_TraceLog();
    TraceLog::sysLog(pTVar2,8,"SEND PCK size  =%d",uVar7);
    iVar6 = Message::getDataTypeMask(this_00,2);
    if (iVar6 == 0) {
      pTVar2 = G_TraceLog();
      TraceLog::sysLog(pTVar2,8,&DAT_0816097b,uVar7);
      iVar6 = TCPUser::onWriteByCMsg(this_01,this_02);
      if (iVar6 == 0) {
        Message::setOffDataTypeMask(this_00,0);
        Message::setOnDataTypeMask(this_00,0);
        iVar6 = CMsgCell::GetSize(this_02);
        pTVar2 = G_TraceLog();
        TraceLog::sysLog(pTVar2,8,&DAT_08160984,iVar6);
        Message::SetWouldBlock(this_00);
        _ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE(this,this_00);
        goto LAB_080ae34d;
      }
      uVar7 = TCPUser::GetPendingSendNum(this_01);
      if (uVar7 == 0) {
        TCPUser::SetSending(this_01,false);
      }
    }
    _ZN3nsl13TCPSendThread16SendDataPoolFreeEPNS_7MessageEPNS_7TCPUserE(this,this_00,this_01);
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPSendThread.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPSendThread.cpp)（约第 94 行）：

```cpp
void TCPSendThread::loop(void* temp)
{
    printf("Start up TCPSendThread-%p\n", temp);
    G_TraceLog()->sysLog(8, "Start up TCPSendThread");
    TMsgCell<524288> tmpbuffer;
    while (true)
    {
        Message* msg = PopSendMsg();
        TCPUser* pUser = msg->getUserFromMessage();
        if ((pUser->isAboutToDisconnect()) || (pUser->isDisconnected()))
        {
            SendDataPoolFree(msg, pUser);
            continue;
        }
        CMsgCell* cell = msg->getCellFromMessage();
        // ORIG: GetPacket() result stays in edx; post-inc sequence
        cell->GetPacket()->sequence = sequence++;
        G_TraceLog()->sysLog(8, "SEND MSG who id=%d, add=%p", pUser->mUserId, pUser);
        // ORIG re-gets cell/packet for each log (no stored pPCK for ct/id)
        G_TraceLog()->sysLog(8, "SEND PCK ct    =%d", msg->getCellFromMessage()->GetPacket()->getCategory());
        G_TraceLog()->sysLog(8, "SEND PCK id    =%d", msg->getCellFromMessage()->GetPacket()->getPacketID());
        {
            unsigned int sLength = msg->getCellFromMessage()->GetPacket()->sLength;
            G_TraceLog()->sysLog(8, "SEND PCK size  =%d", sLength);
            // ORIG: setne/jne — if mask != 0 skip write path
            if (msg->getDataTypeMask(2) != 0)
                goto do_free;
            G_TraceLog()->sysLog(8, "size=%d", sLength);
        }
        if (pUser->onWriteByCMsg(cell) == 0)
        {
            msg->setOffDataTypeMask(0);
            msg->setOnDataTypeMask(0);
            G_TraceLog()->sysLog(8, "Would block ... size=%d", cell->GetSize());
            msg->SetWouldBlock();
            PushSendMsg(msg);
            continue;
        }
        if (pUser->GetPendingSendNum() == 0)
        {
            pUser->SetSending(false);
        }
    do_free:
        {
            int ret = 0;
            (void)ret;
            SendDataPoolFree(msg, pUser);
        }
    }
}
```
