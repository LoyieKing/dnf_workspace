# _ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader

`CPacketTranslater::OnInnerPacketLogin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8088c44` | `0x38f` | `0x80743e8` | `0x3a9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,234 +1,240 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x50,%esp
+sub    $0x60,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x4c>
 movl   $0x11d2,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInnerPacketLogin : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x3a2>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,-0x38(%ebp)
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetTcpDBServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7GetSockEv>
-mov    %eax,%edx
-mov    -0x24(%ebp),%eax
-mov    0x6(%eax),%eax
-cmp    %eax,%edx
+mov    0x8(%ebp),%edx
+mov    0x6(%edx),%edx
+cmp    %edx,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0xa2>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0xa6>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,-0x38(%ebp)
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetTcpDBServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer9ConnectedEv>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x3a2>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,-0x38(%ebp)
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19GetTcpManagerServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer7GetSockEv>
-mov    %eax,%edx
-mov    -0x24(%ebp),%eax
-mov    0x6(%eax),%eax
-cmp    %eax,%edx
+mov    0x8(%ebp),%edx
+mov    0x6(%edx),%edx
+cmp    %edx,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x106>
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x118>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-movzbl %al,%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %al,-0x31(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,-0x38(%ebp)
+movzbl -0x31(%ebp),%ebx
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19GetTcpManagerServerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer9ConnectedEh>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
-mov    -0x24(%ebp),%eax
-mov    0x6(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %ebx,0x4(%esp)
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x3a2>
+mov    0x8(%ebp),%eax
+mov    0x6(%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,-0x38(%ebp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19CreateTcpGameServerEj>
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x3a2>
+movl   $0xc,0x8(%esp)
+movl   $0x1f40,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x381>
-movl   $0xc,0x8(%esp)
-movl   $0x1f40,0x4(%esp)
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x3a2>
 mov    -0x28(%ebp),%eax
+add    $0xa,%eax
+movb   $0x0,(%eax)
+mov    -0x28(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+lea    0xb(%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_ServerGroupEv>
+mov    %al,(%ebx)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
+movl   $0xb,0x8(%esp)
+movl   $0x3ea,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
 mov    %eax,-0x20(%ebp)
+movl   $0x0,-0x1c(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x384>
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x1df>
 mov    -0x20(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
-movb   $0x0,0xa(%eax)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    -0x1c(%ebp),%edx
-mov    %al,0xb(%edx)
+add    $0xa,%eax
+movb   $0xc9,(%eax)
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
-movl   $0xb,0x8(%esp)
-movl   $0x3ea,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
 mov    %eax,-0x18(%ebp)
-movl   $0x0,-0x14(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x1bd>
+movl   $0x123e,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x18(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
-movb   $0xc9,0xa(%eax)
-mov    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
-mov    %eax,%ebx
-movl   $0x123e,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"OnInnerPacketLogin : Network system (%x)",0x8(%esp)
 movl   $"./log/Tcp",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x7ef,0x8(%esp)
 movl   $0x1004,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x387>
-mov    -0x18(%ebp),%eax
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x3a2>
+mov    -0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x1,(%eax)
+mov    -0x14(%ebp),%eax
 mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-movb   $0x1,0xa(%eax)
+mov    -0x10(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
-mov    -0x10(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK20CItemLimitEditionMgr35makeItemLimitEditionSellStartPacketER36Packet_Item_Limit_Edition_Sell_Start>
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
 movl   $0x12,0x8(%esp)
 movl   $0x1b6a,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x3a2>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x325>
+jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x348>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x126d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnInnerPacketLogin Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x31e>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x341>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x3a2>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1272,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInnerPacketLogin Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x37a>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x39d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
-nop
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
-nop
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
-nop
-add    $0x50,%esp
+add    $0x60,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnInnerPacketLogin(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader
               (PacketHeader *param_1)

{
  uint uVar1;
  uchar uVar2;
  char cVar3;
  CServerHandler *pCVar4;
  CTcpDBServer *pCVar5;
  int iVar6;
  CTcpManagerServer *pCVar7;
  undefined4 uVar8;
  CItemLimitEditionMgr *this;
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [24];
  CTcpGameServer *local_2c;
  PacketHeader *local_28;
  char *local_24;
  char *local_20;
  Packet_Item_Limit_Edition_Sell_Start *local_1c;
  char *local_18;
  Packet_Item_Limit_Edition_Sell_Start *local_14;
  
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 08088c6b to 08088ee0 has its CatchHandler @ 08088eed */
    CMyFileLog::CMyFileLog(local_4c,"OnInnerPacketLogin",0x11d2);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_4c,"./log/Except","CPacketTranslater::OnInnerPacketLogin : 0 == m_pclApp");
  }
  else {
    local_28 = param_1;
    pCVar4 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
    pCVar5 = (CTcpDBServer *)CServerHandler::GetTcpDBServer(pCVar4);
    iVar6 = CTcpDBServer::GetSock(pCVar5);
    if (iVar6 == *(int *)(local_28 + 6)) {
      pCVar4 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      pCVar5 = (CTcpDBServer *)CServerHandler::GetTcpDBServer(pCVar4);
      CTcpDBServer::Connected(pCVar5);
    }
    else {
      pCVar4 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      pCVar7 = (CTcpManagerServer *)
               CServerHandler::_ZN14CServerHandler19GetTcpManagerServerEv(pCVar4);
      iVar6 = CTcpManagerServer::GetSock(pCVar7);
      if (iVar6 == *(int *)(local_28 + 6)) {
        uVar2 = CApplication::Get_ServerGroup(m_pclApp);
        pCVar4 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
        pCVar7 = (CTcpManagerServer *)
                 CServerHandler::_ZN14CServerHandler19GetTcpManagerServerEv(pCVar4);
        CTcpManagerServer::Connected(pCVar7,uVar2);
      }
      else {
        uVar1 = *(uint *)(local_28 + 6);
        pCVar4 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
        local_2c = (CTcpGameServer *)
                   CServerHandler::_ZN14CServerHandler19CreateTcpGameServerEj(pCVar4,uVar1);
        if ((local_2c != (CTcpGameServer *)0x0) &&
           (local_24 = (char *)CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt
                                         (local_2c,8000,0xc), local_24 != (char *)0x0)) {
          local_24[10] = '\0';
          local_20 = local_24;
          cVar3 = CApplication::Get_ServerGroup(m_pclApp);
          local_20[0xb] = cVar3;
          CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(local_2c,local_20);
          local_1c = (Packet_Item_Limit_Edition_Sell_Start *)
                     CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt(local_2c,0x3ea,0xb);
          local_18 = (char *)0x0;
          if (local_1c != (Packet_Item_Limit_Edition_Sell_Start *)0x0) {
            local_18 = (char *)local_1c;
          }
          local_18[10] = -0x37;
          CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(local_2c,local_18);
          uVar8 = CApplication::Get_TcpNetSystem(m_pclApp);
          CMyFileLog::CMyFileLog(local_44,"OnInnerPacketLogin",0x123e);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_44,"./log/Tcp","OnInnerPacketLogin : Network system (%x)",uVar8);
          local_1c = (Packet_Item_Limit_Edition_Sell_Start *)
                     CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt(local_2c,0x1004,0x7ef)
          ;
          if (local_1c != (Packet_Item_Limit_Edition_Sell_Start *)0x0) {
            local_1c[10] = (Packet_Item_Limit_Edition_Sell_Start)0x1;
            local_14 = local_1c;
            this = (CItemLimitEditionMgr *)
                   CApplication::_ZN12CApplication22getItemLimitEditionMgrEv(m_pclApp);
            CItemLimitEditionMgr::makeItemLimitEditionSellStartPacket(this,local_14);
            CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(local_2c,(char *)local_14);
            CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt(local_2c,0x1b6a,0x12);
          }
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3318 行）：

```cpp
void CPacketTranslater::OnInnerPacketLogin(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x11d2, "./log/Except", "CPacketTranslater::OnInnerPacketLogin : 0 == m_pclApp");
        }
        else
        {
            CServerHandler* handler = m_pclApp->Get_ServerHandler();
            if (handler->GetTcpDBServer()->GetSock() == (int)pkt->m_connNo)
            {
                handler = m_pclApp->Get_ServerHandler();
                handler->GetTcpDBServer()->Connected();
            }
            else
            {
                handler = m_pclApp->Get_ServerHandler();
                if (handler->GetTcpManagerServer()->GetSock() == (int)pkt->m_connNo)
                {
                    unsigned char group = m_pclApp->Get_ServerGroup();
                    handler = m_pclApp->Get_ServerHandler();
                    handler->GetTcpManagerServer()->Connected(group);
                }
                else
                {
                    unsigned int sock = pkt->m_connNo;
                    handler = m_pclApp->Get_ServerHandler();
                    CTcpGameServer* tcp = handler->CreateTcpGameServer(sock);
                    if (tcp != 0)
                    {
                        char* buf = tcp->makePacketHeader(8000, 0xc);
                        if (buf != 0)
                        {
                            buf[10] = 0;
                            char* out = buf;
                            out[0xb] = (char)m_pclApp->Get_ServerGroup();
                            tcp->SendToGameServer(out);
                            char* out2 = tcp->makePacketHeader(0x3ea, 0xb);
                            char* out3 = 0;
                            if (out2 != 0)
                            {
                                out3 = out2;
                            }
                            out3[10] = -0x37;
                            tcp->SendToGameServer(out3);
                            void* net = m_pclApp->Get_TcpNetSystem();
                            DNF_LOG_SCOPE_LINE(0x123e, "./log/Tcp", "OnInnerPacketLogin : Network system (%x)", net);
                            char* out4 = tcp->makePacketHeader(0x1004, 0x7ef);
                            if (out4 != 0)
                            {
                                out4[10] = 1;
                                char* out5 = out4;
                                m_pclApp->getItemLimitEditionMgr()
                                    ->makeItemLimitEditionSellStartPacket(
                                        *(Packet_Item_Limit_Edition_Sell_Start*)out5);
                                tcp->SendToGameServer(out5);
                                tcp->makePacketHeader(0x1b6a, 0x12);
                            }
                        }
                    }
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x126d,"./log/Except", "CPacketTranslater::OnInnerPacketLogin Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1272, "./log/Except", "CPacketTranslater::OnInnerPacketLogin Exception Break\n");
    }
}
```
