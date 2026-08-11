# _ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader

`CPacketTranslater::OnGameServerRegist(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808d0dc` | `0x2ae` | `0x8078730` | `0x2bc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,176 +1,185 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x54,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
 movl   $0x16,(%esp)
 call   <T> <_Znwj>
 mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
-movzbl 0xb(%eax),%edx
 mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%edx
+add    $0xb,%edx
+movzbl (%edx),%edx
 mov    %dl,(%eax)
-mov    -0x28(%ebp),%eax
-movzbl 0xc(%eax),%edx
 mov    -0x24(%ebp),%eax
-mov    %dl,0x1(%eax)
-mov    -0x28(%ebp),%eax
-movzbl 0xa(%eax),%edx
+lea    0x1(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0xc,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
 mov    -0x24(%ebp),%eax
-mov    %dl,0x2(%eax)
-mov    -0x28(%ebp),%eax
-movzwl 0x1d(%eax),%edx
+lea    0x2(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
 mov    -0x24(%ebp),%eax
-mov    %dx,0x14(%eax)
-mov    -0x28(%ebp),%eax
-add    $0xd,%eax
-mov    %eax,%edx
+lea    0x14(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x1d,%eax
+movzwl (%eax),%eax
+mov    %ax,(%edx)
+mov    0x8(%ebp),%eax
+lea    0xd(%eax),%edx
 mov    -0x24(%ebp),%eax
 add    $0x3,%eax
 movl   $0x10,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strncpy>
-mov    -0x28(%ebp),%eax
-mov    0x6(%eax),%ebx
+mov    0x8(%ebp),%eax
+add    $0x6,%eax
+mov    (%eax),%eax
+mov    %eax,-0x20(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %ebx,0x4(%esp)
+mov    -0x20(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetTcpGameServerEj>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x2a7>
-mov    -0x24(%ebp),%eax
-movzbl 0x1(%eax),%eax
-movzbl %al,%ebx
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x2b6>
 movl   $0x190c,0x8(%esp)
 movl   $"OnGameServerRegist",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x24(%ebp),%eax
+add    $0x1,%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+mov    %eax,0xc(%esp)
 movl   $"Get Packet - OnGameServerRegist from Channel:%d",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer12GetChannelNoEv>
 test   %al,%al
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x256>
+je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x26b>
 movl   $0xc,0x8(%esp)
 movl   $0x1f42,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
-mov    %eax,-0x18(%ebp)
-movl   $0x0,-0x14(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x12b>
-mov    -0x18(%ebp),%eax
 mov    %eax,-0x14(%ebp)
+movl   $0x0,-0x10(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x13b>
+mov    -0x14(%ebp),%eax
+mov    %eax,-0x10(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    -0x24(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16RegistGameServerEP12stServerInfo>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x19e>
-mov    -0x14(%ebp),%eax
-movb   $0x1,0xb(%eax)
-mov    -0x24(%ebp),%eax
-movzbl 0x1(%eax),%eax
-movzbl %al,%ebx
-movl   $0x1923,0x8(%esp)
-movl   $"OnGameServerRegist",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"Game server regist failed. Channel: %d is already exist.",0x8(%esp)
-movl   $"./log/GameServer",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x23d>
-mov    -0x28(%ebp),%eax
-movzbl 0xc(%eax),%eax
+je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x201>
+mov    0x8(%ebp),%eax
+add    $0xc,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer12SetChannelNoEh>
-mov    -0x24(%ebp),%eax
-movzbl 0x1(%eax),%eax
-movzbl %al,%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %ebx,0x4(%esp)
+mov    -0x20(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler13GetGameServerEj>
-mov    %eax,-0x10(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0x6(%eax),%eax
+mov    %eax,-0xc(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x6,%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer9SetSocketEj>
-mov    -0x14(%ebp),%eax
-movb   $0x0,0xb(%eax)
-mov    -0x24(%ebp),%eax
-movzbl 0x1(%eax),%eax
-movzbl %al,%ebx
+mov    -0x10(%ebp),%eax
+add    $0xb,%eax
+movb   $0x0,(%eax)
 movl   $0x1930,0x8(%esp)
 movl   $"OnGameServerRegist",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x24(%ebp),%eax
+add    $0x1,%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+mov    %eax,0xc(%esp)
 movl   $"Game server regist success. Channel: %d",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x14(%ebp),%eax
-movb   $0x0,0xa(%eax)
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x250>
+mov    -0x10(%ebp),%eax
+add    $0xb,%eax
+movb   $0x1,(%eax)
+movl   $0x1923,0x8(%esp)
+movl   $"OnGameServerRegist",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x24(%ebp),%eax
+add    $0x1,%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+mov    %eax,0xc(%esp)
+movl   $"Game server regist failed. Channel: %d is already exist.",0x8(%esp)
+movl   $"./log/GameServer",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x10(%ebp),%eax
+add    $0xa,%eax
+movb   $0x0,(%eax)
+mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
 movl   $0xe,0x8(%esp)
 movl   $0x27f8,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x2a8>
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x2b6>
+mov    -0x18(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CApplication16getMiniCraneSeedEv>
-mov    -0xc(%ebp),%edx
-mov    %eax,0xa(%edx)
-mov    -0xc(%ebp),%eax
+mov    %eax,(%ebx)
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
-jmp    <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x2a8>
-nop
 add    $0x54,%esp
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
  char cVar2;
  uint uVar3;
  CServerHandler *this;
  undefined4 uVar4;
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  PacketHeader *local_2c;
  PacketHeader *local_28;
  CTcpGameServer *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  CGameServer *local_14;
  char *local_10;
  
  local_2c = param_1;
  local_28 = operator_new(0x16);
  *local_28 = local_2c[0xb];
  local_28[1] = local_2c[0xc];
  local_28[2] = local_2c[10];
  *(undefined2 *)(local_28 + 0x14) = *(undefined2 *)(local_2c + 0x1d);
  strncpy((char *)(local_28 + 3),(char *)(local_2c + 0xd),0x10);
  uVar3 = CApplication::Get_ServerHandler(m_pclApp);
  local_24 = (CTcpGameServer *)CServerHandler::GetTcpGameServer(uVar3);
  if (local_24 != (CTcpGameServer *)0x0) {
    PVar1 = local_28[1];
    CMyFileLog::CMyFileLog(local_44,"OnGameServerRegist",0x190c);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/GameServer","Get Packet - OnGameServerRegist from Channel:%d",
               (uint)(byte)PVar1);
    cVar2 = CTcpGameServer::GetChannelNo(local_24);
    if (cVar2 == '\0') {
      local_1c = (char *)CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt
                                   (local_24,0x1f42,0xc);
      local_18 = (char *)0x0;
      if (local_1c != (char *)0x0) {
        local_18 = local_1c;
      }
      this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      cVar2 = CServerHandler::_ZN14CServerHandler16RegistGameServerEP12stServerInfo
                        (this,(stServerInfo *)local_28);
      if (cVar2 == '\x01') {
        CTcpGameServer::SetChannelNo(local_24,(uchar)local_2c[0xc]);
        uVar3 = CApplication::Get_ServerHandler(m_pclApp);
        local_14 = (CGameServer *)CServerHandler::_ZN14CServerHandler13GetGameServerEj(uVar3);
        CGameServer::SetSocket(local_14,*(uint *)(local_2c + 6));
        local_18[0xb] = '\0';
        PVar1 = local_28[1];
        CMyFileLog::CMyFileLog(local_34,"OnGameServerRegist",0x1930);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_34,"./log/GameServer","Game server regist success. Channel: %d",
                   (uint)(byte)PVar1);
      }
      else {
        local_18[0xb] = '\x01';
        PVar1 = local_28[1];
        CMyFileLog::CMyFileLog(local_3c,"OnGameServerRegist",0x1923);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_3c,"./log/GameServer",
                   "Game server regist failed. Channel: %d is already exist.",(uint)(byte)PVar1);
      }
      local_18[10] = '\0';
      CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(local_24,local_18);
    }
    local_20 = (char *)CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt(local_24,0x27f8,0xe)
    ;
    if (local_20 != (char *)0x0) {
      local_10 = local_20;
      uVar4 = CApplication::getMiniCraneSeed(m_pclApp);
      *(undefined4 *)(local_10 + 10) = uVar4;
      CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(local_24,local_10);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5254 行）：

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
    CServerHandler* handler = m_pclApp->Get_ServerHandler();
    CTcpGameServer* tgs = handler->GetTcpGameServer(*(unsigned int*)(pb + 6));
    if (tgs != 0)
    {
        DNF_LOG_SCOPE_LINE(0x1ec6,"./log/GameServer", "Get Packet - OnGameServerRegist from Channel:%d",
            (unsigned int)(unsigned char)info.m_field1);
        if (tgs->GetChannelNo() == 0)
        {
            char* reply = tgs->makePacketHeader(0x1f42, 0xc);
            if (reply != 0)
            {
                if (handler->RegistGameServer(&info) == 1)
                {
                    tgs->SetChannelNo((unsigned char)pb[0xc]);
                    CGameServer* gs = handler->GetGameServer(*(unsigned int*)(pb + 6));
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
