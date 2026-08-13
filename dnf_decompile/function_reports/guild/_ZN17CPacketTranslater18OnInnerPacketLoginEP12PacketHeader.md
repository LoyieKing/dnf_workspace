# _ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader

`CPacketTranslater::OnInnerPacketLogin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808109c` | `0x25a` | `0x807782e` | `0x23b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,159 +1,152 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x50,%esp
+sub    $0x40,%esp
+mov    0x8(%ebp),%eax
+mov    %eax,-0x20(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x4c>
+jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x52>
 movl   $0x1455,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInnerPacketLogin : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x253>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x234>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetTcpDBServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7GetSockEv>
-mov    %eax,%edx
-mov    -0x20(%ebp),%eax
-mov    0x6(%eax),%eax
-cmp    %eax,%edx
+mov    -0x20(%ebp),%edx
+add    $0x6,%edx
+mov    (%edx),%edx
+cmp    %edx,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0xa2>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x9e>
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetTcpDBServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer9ConnectedEv>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x253>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x234>
 mov    -0x20(%ebp),%eax
-mov    0x6(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %ebx,0x4(%esp)
+add    $0x6,%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19CreateTcpGameServerEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x24f>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x234>
 movl   $0xc,0x8(%esp)
 movl   $0x1f40,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x252>
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-mov    -0x18(%ebp),%eax
-movb   $0x1,0xa(%eax)
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x116>
+mov    -0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x1,(%eax)
+mov    -0x14(%ebp),%eax
+lea    0xb(%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    -0x18(%ebp),%edx
-mov    %al,0xb(%edx)
+mov    %al,(%ebx)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
 movl   $0xb,0x8(%esp)
 movl   $0x3ea,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
-mov    %eax,-0x14(%ebp)
-movl   $0x0,-0x10(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x159>
-mov    -0x14(%ebp),%eax
 mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x234>
 mov    -0x10(%ebp),%eax
-movb   $0xcb,0xa(%eax)
+add    $0xa,%eax
+movb   $0xcb,(%eax)
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x253>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x234>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x1f3>
+jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x1da>
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
 movl   $0x1489,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnInnerPacketLogin Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x1ec>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x1d3>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x253>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x234>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x148e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInnerPacketLogin Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x248>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x22f>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x253>
-nop
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x253>
-nop
-add    $0x50,%esp
+add    $0x40,%esp
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
  char cVar2;
  CServerHandler *pCVar3;
  CTcpDBServer *pCVar4;
  int iVar5;
  CMyFileLog local_40 [24];
  CTcpGameServer *local_28;
  PacketHeader *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 080810c3 to 0808120d has its CatchHandler @ 08081213 */
    CMyFileLog::CMyFileLog(local_40,"OnInnerPacketLogin",0x1455);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/Except","CPacketTranslater::OnInnerPacketLogin : 0 == m_pclApp");
  }
  else {
    local_24 = param_1;
    pCVar3 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
    pCVar4 = (CTcpDBServer *)CServerHandler::GetTcpDBServer(pCVar3);
    iVar5 = CTcpDBServer::GetSock(pCVar4);
    if (iVar5 == *(int *)(local_24 + 6)) {
      pCVar3 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      pCVar4 = (CTcpDBServer *)CServerHandler::GetTcpDBServer(pCVar3);
      CTcpDBServer::_ZN12CTcpDBServer9ConnectedEv(pCVar4);
    }
    else {
      uVar1 = *(uint *)(local_24 + 6);
      pCVar3 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      local_28 = (CTcpGameServer *)
                 CServerHandler::_ZN14CServerHandler19CreateTcpGameServerEj(pCVar3,uVar1);
      if ((local_28 != (CTcpGameServer *)0x0) &&
         (local_20 = (char *)CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt
                                       (local_28,8000,0xc), local_20 != (char *)0x0)) {
        local_20[10] = '\x01';
        local_1c = local_20;
        cVar2 = CApplication::_ZN12CApplication15Get_ServerGroupEv(m_pclApp);
        local_1c[0xb] = cVar2;
        CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(local_28,local_1c);
        local_18 = (char *)CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt
                                     (local_28,0x3ea,0xb);
        local_14 = (char *)0x0;
        if (local_18 != (char *)0x0) {
          local_14 = local_18;
        }
        local_14[10] = -0x35;
        CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(local_28,local_14);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3729 行）：

```cpp
void CPacketTranslater::OnInnerPacketLogin(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1455, "./log/Except", "CPacketTranslater::OnInnerPacketLogin : 0 == m_pclApp");
        return;
    }
    try
    {
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        if (handler->GetTcpDBServer()->GetSock() == *(int*)(pb + 6))
        {
            handler->GetTcpDBServer()->Connected();
        }
        else
        {
            CTcpGameServer* tgs = handler->CreateTcpGameServer(*(unsigned int*)(pb + 6));
            if (tgs != 0)
            {
                char* buf = tgs->makePacketHeader(8000, 0xc);
                if (buf != 0)
                {
                    buf[10] = 1;
                    buf[11] = m_pclApp->Get_ServerGroup();
                    tgs->SendToGameServer(buf);
                }
                char* buf2 = tgs->makePacketHeader(0x3ea, 0xb);
                if (buf2 != 0)
                {
                    buf2[10] = 0xcb;
                    tgs->SendToGameServer(buf2);
                }
            }
        }
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnInnerPacketLogin Exception Break", 0x1489, 0x148e);
}
```
