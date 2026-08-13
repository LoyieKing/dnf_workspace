# _ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader

`CPacketTranslater::OnGameServerRegist(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8088152` | `0x25f` | `0x807d99c` | `0x25e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,156 +1,156 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x44,%esp
+sub    $0x54,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-movl   $0x16,(%esp)
-call   <T> <_Znwj>
-mov    %eax,-0x1c(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0xb(%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %dl,(%eax)
-mov    -0x20(%ebp),%eax
-movzbl 0xc(%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %dl,0x1(%eax)
-mov    -0x20(%ebp),%eax
-movzbl 0xa(%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %dl,0x2(%eax)
-mov    -0x20(%ebp),%eax
-movzwl 0x1d(%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %dx,0x14(%eax)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+movl   $0x16,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0x46(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
+mov    -0x18(%ebp),%eax
+add    $0xb,%eax
+movzbl (%eax),%eax
+mov    %al,-0x46(%ebp)
+mov    -0x18(%ebp),%eax
+add    $0xc,%eax
+movzbl (%eax),%eax
+mov    %al,-0x45(%ebp)
+mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
+mov    %al,-0x44(%ebp)
+lea    -0x46(%ebp),%eax
+lea    0x14(%eax),%edx
+mov    -0x18(%ebp),%eax
+add    $0x1d,%eax
+movzwl (%eax),%eax
+mov    %ax,(%edx)
+mov    -0x18(%ebp),%eax
 add    $0xd,%eax
-mov    %eax,%edx
-mov    -0x1c(%ebp),%eax
+movl   $0x10,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x46(%ebp),%eax
 add    $0x3,%eax
-movl   $0x10,0x8(%esp)
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strncpy>
-mov    -0x20(%ebp),%eax
-mov    0x6(%eax),%ebx
+mov    -0x18(%ebp),%eax
+add    $0x6,%eax
+mov    (%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetTcpGameServerEj>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
 je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x258>
-mov    -0x1c(%ebp),%eax
-movzbl 0x1(%eax),%eax
+movzbl -0x45(%ebp),%eax
 movzbl %al,%ebx
 movl   $0x1ec6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnGameServerRegistEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"Get Packet - OnGameServerRegist from Channel:%d",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer12GetChannelNoEv>
 test   %al,%al
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x259>
+je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x258>
 movl   $0xc,0x8(%esp)
 movl   $0x1f42,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
-mov    %eax,-0x14(%ebp)
-movl   $0x0,-0x10(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x12b>
-mov    -0x14(%ebp),%eax
 mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x258>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    -0x1c(%ebp),%edx
+lea    -0x46(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16RegistGameServerEP12stServerInfo>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x19e>
-mov    -0x10(%ebp),%eax
-movb   $0x1,0xb(%eax)
-mov    -0x1c(%ebp),%eax
-movzbl 0x1(%eax),%eax
-movzbl %al,%ebx
-movl   $0x1ede,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnGameServerRegistEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"Game server regist failed. Channel: %d is already exist.",0x8(%esp)
-movl   $"./log/GameServer",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x23d>
-mov    -0x20(%ebp),%eax
-movzbl 0xc(%eax),%eax
+je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x1f3>
+mov    -0x18(%ebp),%eax
+add    $0xc,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer12SetChannelNoEh>
-mov    -0x1c(%ebp),%eax
-movzbl 0x1(%eax),%eax
-movzbl %al,%ebx
+mov    -0x18(%ebp),%eax
+add    $0x6,%eax
+mov    (%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler13GetGameServerEj>
 mov    %eax,-0xc(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x6(%eax),%eax
+mov    -0x18(%ebp),%eax
+add    $0x6,%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer9SetSocketEj>
 mov    -0x10(%ebp),%eax
-movb   $0x0,0xb(%eax)
-mov    -0x1c(%ebp),%eax
-movzbl 0x1(%eax),%eax
+add    $0xb,%eax
+movb   $0x0,(%eax)
+movzbl -0x45(%ebp),%eax
 movzbl %al,%ebx
 movl   $0x1eeb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnGameServerRegistEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"Game server regist success. Channel: %d",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x23d>
 mov    -0x10(%ebp),%eax
-movb   $0x1,0xa(%eax)
+add    $0xb,%eax
+movb   $0x1,(%eax)
+movzbl -0x45(%ebp),%eax
+movzbl %al,%ebx
+movl   $0x1ede,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater18OnGameServerRegistEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0xc(%esp)
+movl   $"Game server regist failed. Channel: %d is already exist.",0x8(%esp)
+movl   $"./log/GameServer",0x4(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x10(%ebp),%eax
+add    $0xa,%eax
+movb   $0x1,(%eax)
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
-jmp    <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x259>
-nop
-add    $0x44,%esp
+add    $0x54,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGameServerRegist(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  stServerInfo sVar2;
  char cVar3;
  uint uVar4;
  CServerHandler *this;
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  PacketHeader *local_24;
  PacketHeader *local_20;
  CTcpGameServer *local_1c;
  char *local_18;
  char *local_14;
  CGameServer *local_10;
  
  local_24 = param_1;
  local_20 = operator_new(0x16);
  *local_20 = local_24[0xb];
  local_20[1] = local_24[0xc];
  local_20[2] = local_24[10];
  *(undefined2 *)(local_20 + 0x14) = *(undefined2 *)(local_24 + 0x1d);
  strncpy((char *)(local_20 + 3),(char *)(local_24 + 0xd),0x10);
  uVar4 = CApplication::Get_ServerHandler(m_pclApp);
  local_1c = (CTcpGameServer *)CServerHandler::_ZN14CServerHandler16GetTcpGameServerEj(uVar4);
  if (local_1c != (CTcpGameServer *)0x0) {
    PVar1 = local_20[1];
    CMyFileLog::CMyFileLog(local_3c,"OnGameServerRegist",0x1ec6);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_3c,"./log/GameServer","Get Packet - OnGameServerRegist from Channel:%d",
               (uint)(byte)PVar1);
    cVar3 = CTcpGameServer::GetChannelNo(local_1c);
    if (cVar3 == '\0') {
      local_18 = (char *)CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt
                                   (local_1c,0x1f42,0xc);
      local_14 = (char *)0x0;
      if (local_18 != (char *)0x0) {
        local_14 = local_18;
      }
      this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      cVar3 = CServerHandler::_ZN14CServerHandler16RegistGameServerEP12stServerInfo
                        (this,(stServerInfo *)local_20);
      if (cVar3 == '\x01') {
        CTcpGameServer::_ZN14CTcpGameServer12SetChannelNoEh(local_1c,(uchar)local_24[0xc]);
        uVar4 = CApplication::Get_ServerHandler(m_pclApp);
        local_10 = (CGameServer *)CServerHandler::GetGameServer(uVar4);
        CGameServer::_ZN11CGameServer9SetSocketEj(local_10,*(uint *)(local_24 + 6));
        local_14[0xb] = '\0';
        sVar2 = *(stServerInfo *)(local_20 + 1);
        CMyFileLog::CMyFileLog(local_2c,"OnGameServerRegist",0x1eeb);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_2c,"./log/GameServer","Game server regist success. Channel: %d",
                   (uint)(byte)sVar2);
      }
      else {
        local_14[0xb] = '\x01';
        sVar2 = *(stServerInfo *)(local_20 + 1);
        CMyFileLog::CMyFileLog(local_34,"OnGameServerRegist",0x1ede);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_34,"./log/GameServer",
                   "Game server regist failed. Channel: %d is already exist.",(uint)(byte)sVar2);
      }
      local_14[10] = '\x01';
      CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(local_1c,local_14);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5618 行）：

```cpp
void CPacketTranslater::OnGameServerRegist(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    stServerInfo info;
    memset(&info, 0, sizeof(info));
    info.m_group = (unsigned char)pb[0xb];
    info.m_field1 = (unsigned char)pb[0xc];
    info.m_field2 = (unsigned char)pb[10];
    *(unsigned short*)((char*)&info + 0x14) = *(unsigned short*)(pb + 0x1d);
    strncpy(info.m_name, pb + 0xd, 0x10);
    CTcpGameServer* tgs = m_pclApp->Get_ServerHandler()->GetTcpGameServer(*(unsigned int*)(pb + 6));
    if (tgs != 0)
    {
        DNF_LOG_SCOPE_LINE(0x1ec6,"./log/GameServer", "Get Packet - OnGameServerRegist from Channel:%d",
            (unsigned int)(unsigned char)info.m_field1);
        if (tgs->GetChannelNo() == 0)
        {
            char* reply = tgs->makePacketHeader(0x1f42, 0xc);
            if (reply != 0)
            {
                if (m_pclApp->Get_ServerHandler()->RegistGameServer(&info) == 1)
                {
                    tgs->SetChannelNo((unsigned char)pb[0xc]);
                    CGameServer* gs = m_pclApp->Get_ServerHandler()->GetGameServer(*(unsigned int*)(pb + 6));
                    gs->SetSocket(*(unsigned int*)(pb + 6));
                    reply[0xb] = 0;
                    DNF_LOG_SCOPE_LINE(0x1eeb,"./log/GameServer", "Game server regist success. Channel: %d",
                        (unsigned int)(unsigned char)info.m_field1);
                }
                else
                {
                    reply[0xb] = 1;
                    DNF_LOG_SCOPE_LINE(0x1ede,"./log/GameServer",
                        "Game server regist failed. Channel: %d is already exist.",
                        (unsigned int)(unsigned char)info.m_field1);
                }
                reply[10] = 1;
                tgs->SendToGameServer(reply);
            }
        }
    }
}
```
