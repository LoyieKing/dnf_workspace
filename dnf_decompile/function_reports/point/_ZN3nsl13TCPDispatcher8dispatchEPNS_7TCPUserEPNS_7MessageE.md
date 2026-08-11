# _ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE

`nsl::TCPDispatcher::dispatch(nsl::TCPUser*, nsl::Message*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80adb88` | `0x250` | `0x80ac904` | `0x24e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,167 +1,169 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x30(%ebp)
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
 mov    %eax,-0x2c(%ebp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13PACKET_HEADER11getPacketIDEv>
 mov    %eax,-0x28(%ebp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13PACKET_HEADER11getCategoryEv>
 mov    %eax,-0x24(%ebp)
 movl   $0x0,-0x20(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser17setLastAccessTimeEv>
 cmpl   $0xffffffff,-0x24(%ebp)
 jne    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x69>
 cmpl   $0x0,-0x28(%ebp)
 jne    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x69>
 mov    $0x0,%eax
-jmp    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x245>
-cmpl   $0x0,-0x24(%ebp)
-js     <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x79>
+jmp    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x243>
+mov    -0x24(%ebp),%eax
+test   %eax,%eax
+js     <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x7c>
+mov    -0x24(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-cmp    -0x24(%ebp),%eax
-jg     <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x83>
+cmp    %eax,%edx
+jl     <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x86>
 mov    $0x1,%eax
-jmp    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x245>
-mov    &_ZN3nsl4pAppE,%eax
-lea    0xbc(%eax),%edx
+jmp    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x243>
 mov    -0x24(%ebp),%eax
+mov    &_ZN3nsl4pAppE,%edx
+add    $0xbc,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9IHandlers17getNetWorkHandlerEi>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x1a6>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0xc,%eax
-mov    (%eax),%ecx
-lea    -0x38(%ebp),%eax
-mov    -0x28(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    -0x1c(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   *%ecx
-sub    $0x4,%esp
-mov    -0x38(%ebp),%eax
-test   %eax,%eax
-je     <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x171>
-mov    &_ZN3nsl4pAppE,%eax
-lea    0xbc(%eax),%edx
-mov    -0x24(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN3nsl9IHandlers17getNetWorkHandlerEi>
-mov    %eax,%edx
-mov    -0x38(%ebp),%eax
-and    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x113>
-mov    -0x34(%ebp),%eax
-lea    (%edx,%eax,1),%eax
-mov    (%eax),%ecx
-mov    -0x38(%ebp),%eax
-sub    $0x1,%eax
-lea    (%ecx,%eax,1),%eax
-mov    (%eax),%eax
-jmp    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x116>
-mov    -0x38(%ebp),%eax
-mov    -0x34(%ebp),%ecx
-lea    (%edx,%ecx,1),%ecx
-mov    0xc(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    -0x30(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %ecx,(%esp)
-call   *%eax
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x240>
-call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    -0x20(%ebp),%edx
-mov    %edx,0x10(%esp)
-mov    -0x28(%ebp),%edx
-mov    %edx,0xc(%esp)
-movl   $"TCP : '%d' 처리에 실패 하였습니다. Error: %d",0x8(%esp)
-movl   $0x7,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    $0x1,%eax
-jmp    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x245>
-call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    -0x28(%ebp),%edx
-mov    %edx,0x10(%esp)
-mov    -0x24(%ebp),%edx
-mov    %edx,0xc(%esp)
-movl   $"TCP : could not find handler for Category :'%d' Protocol: '%d'.",0x8(%esp)
-movl   $0x7,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    $0x1,%eax
-jmp    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x245>
+jne    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x14b>
 mov    0xc(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket11getPeerAdrsEv>
 add    $0x3,%eax
 movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x3c(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket11getPeerAdrsEv>
 add    $0x2,%eax
 movzbl (%eax),%eax
 movzbl %al,%edi
 mov    0xc(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket11getPeerAdrsEv>
 add    $0x1,%eax
 movzbl (%eax),%eax
 movzbl %al,%esi
 mov    0xc(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket11getPeerAdrsEv>
 movzbl (%eax),%eax
 movzbl %al,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    -0x3c(%ebp),%edx
 mov    %edx,0x1c(%esp)
 mov    %edi,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    -0x24(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $"TCP : '%d' <- protocol category 가 범위를 벗어났습니다, ip:%d.%d.%d.%d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x1,%eax
-jmp    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x245>
+jmp    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x243>
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0xc,%eax
+mov    (%eax),%ecx
+mov    -0x28(%ebp),%edx
+lea    -0x38(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    -0x1c(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   *%ecx
+sub    $0x4,%esp
+mov    -0x38(%ebp),%eax
+test   %eax,%eax
+jne    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x1aa>
+call   <T> <_ZN3nsl10G_TraceLogEv>
+mov    -0x28(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    -0x24(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $"TCP : could not find handler for Category :'%d' Protocol: '%d'.",0x8(%esp)
+movl   $0x7,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
+mov    $0x1,%eax
+jmp    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x243>
+mov    -0x24(%ebp),%eax
+mov    &_ZN3nsl4pAppE,%edx
+add    $0xbc,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN3nsl9IHandlers17getNetWorkHandlerEi>
+mov    %eax,-0x1c(%ebp)
+mov    -0x38(%ebp),%eax
+and    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x1e7>
+mov    -0x34(%ebp),%eax
+add    -0x1c(%ebp),%eax
+mov    (%eax),%edx
+mov    -0x38(%ebp),%eax
+sub    $0x1,%eax
+lea    (%edx,%eax,1),%eax
+mov    (%eax),%eax
+jmp    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x1ea>
+mov    -0x38(%ebp),%eax
+mov    -0x34(%ebp),%edx
+add    -0x1c(%ebp),%edx
+mov    0xc(%ebp),%ecx
+mov    %ecx,0x8(%esp)
+mov    -0x30(%ebp),%ecx
+mov    %ecx,0x4(%esp)
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x213>
 mov    $0x0,%eax
+jmp    <T> <_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE+0x243>
+call   <T> <_ZN3nsl10G_TraceLogEv>
+mov    -0x20(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    -0x28(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $"TCP : '%d' 처리덧 실패 하뉘습니다. Error: %d",0x8(%esp)
+movl   $0x7,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
+mov    $0x1,%eax
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: bool dispatch(TCPDispatcher * this, TCPUser * u, Message * msg) */

bool __thiscall
nsl::TCPDispatcher::_ZN3nsl13TCPDispatcher8dispatchEPNS_7TCPUserEPNS_7MessageE
          (TCPDispatcher *this,TCPUser *u,Message *msg)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  INetWorkHandler *pIVar6;
  TraceLog *pTVar7;
  uchar *puVar8;
  byte *pbVar9;
  code *local_3c;
  int local_38;
  CMsgCell *local_34;
  PACKET_HEADER *local_30;
  DWORD local_2c;
  DWORD local_28;
  int local_24;
  INetWorkHandler *local_20;
  
                    /* Unresolved local var: CMsgCell * pMsg@[???]
                       Unresolved local var: LPPACKET_HEADER pPCK@[???]
                       Unresolved local var: int nProtoID@[???]
                       Unresolved local var: int nCategory@[???]
                       Unresolved local var: DWORD ret@[???]
                       Unresolved local var: INetWorkHandler * netWorkHandler@[???] */
  local_34 = Message::getCellFromMessage(msg);
  local_30 = CMsgCell::GetPacket(local_34);
  local_2c = PACKET_HEADER::getPacketID(local_30);
  local_28 = PACKET_HEADER::getCategory(local_30);
  local_24 = 0;
  TCPUser::setLastAccessTime(u);
  if ((local_28 == 0xffffffff) && (local_2c == 0)) {
    bVar5 = false;
  }
  else if (((int)local_28 < 0) || (this->MaxCategory <= (int)local_28)) {
    bVar5 = true;
  }
  else {
    local_20 = IHandlers::getNetWorkHandler(&pApp->super_IHandlers,local_28);
    if (local_20 == (INetWorkHandler *)0x0) {
      puVar8 = TCPSocket::getPeerAdrs(u->pSock_);
      bVar1 = puVar8[3];
      puVar8 = TCPSocket::getPeerAdrs(u->pSock_);
      bVar2 = puVar8[2];
      puVar8 = TCPSocket::getPeerAdrs(u->pSock_);
      bVar3 = puVar8[1];
      pbVar9 = TCPSocket::getPeerAdrs(u->pSock_);
      bVar4 = *pbVar9;
      pTVar7 = G_TraceLog();
      TraceLog::sysLog(pTVar7,7,&DAT_08160754,local_28,(uint)bVar4,(uint)bVar3,(uint)bVar2,
                       (uint)bVar1);
      bVar5 = true;
    }
    else {
                    /* Unresolved local var: networkFuncType handle@[???] */
      (*(local_20->super_IHandler)._vptr_IHandler[3])(&local_3c,local_20,local_2c);
      if (local_3c == (code *)0x0) {
        pTVar7 = G_TraceLog();
        TraceLog::sysLog(pTVar7,7,
                         "TCP : could not find handler for Category :\'%d\' Protocol: \'%d\'.",
                         local_28,local_2c);
        bVar5 = true;
      }
      else {
        pIVar6 = IHandlers::getNetWorkHandler(&pApp->super_IHandlers,local_28);
        if (((uint)local_3c & 1) != 0) {
          local_3c = *(code **)(local_3c +
                               *(int *)((int)&(pIVar6->super_IHandler)._vptr_IHandler + local_38) +
                               -1);
        }
        local_24 = (*local_3c)((int)&(pIVar6->super_IHandler)._vptr_IHandler + local_38,local_34,u);
        if (local_24 == 0) {
          bVar5 = false;
        }
        else {
          pTVar7 = G_TraceLog();
          TraceLog::sysLog(pTVar7,7,&DAT_081606e4,local_2c,local_24);
          bVar5 = true;
        }
      }
    }
  }
  return bVar5;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPDispatcher.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
