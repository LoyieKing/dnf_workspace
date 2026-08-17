# _ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader

`CPacketTranslater::OnInnerPacketLogout(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8088fd4` | `0x29b` | `0x8074652` | `0x291` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,174 +1,171 @@
+pop    %ebx
+pop    %esi
+pop    %ebp
+ret
+nop
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x4c>
 movl   $0x1282,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInnerPacketLogout : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x294>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x28a>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetTcpDBServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer7GetSockEv>
-mov    %eax,%edx
-mov    -0x18(%ebp),%eax
-mov    0x6(%eax),%eax
-cmp    %eax,%edx
+mov    0x8(%ebp),%edx
+mov    0x6(%edx),%edx
+cmp    %edx,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0xa2>
+je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x9a>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetTcpDBServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer12DisConnectedEv>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x294>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x28a>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19GetTcpManagerServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer7GetSockEv>
-mov    %eax,%edx
-mov    -0x18(%ebp),%eax
-mov    0x6(%eax),%eax
-cmp    %eax,%edx
+mov    0x8(%ebp),%edx
+mov    0x6(%edx),%edx
+cmp    %edx,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0xf2>
+je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0xe8>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19GetTcpManagerServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer12DisConnectedEv>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x294>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x28a>
+mov    0x8(%ebp),%eax
 mov    0x6(%eax),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17FindTcpGameServerEj>
 mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication19OnTcpGameServerDownEP14CTcpGameServer>
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer12GetChannelNoEv>
 mov    %al,-0xd(%ebp)
 cmpb   $0x0,-0xd(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x151>
+je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x147>
 movzbl -0xd(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler18UnregistGameServerEj>
-mov    -0x18(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0x6(%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19DeleteTcpGameServerEj>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
 mov    %eax,%ebx
 movl   $0x12af,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"OnInnerPacketLogout : Network system (%x)",0x8(%esp)
 movl   $"./log/Tcp",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x294>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x28a>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x23a>
+jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x230>
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
 movl   $0x12b3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnInnerPacketLogout Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x233>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x229>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x294>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x28a>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x12b8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInnerPacketLogout Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x28f>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x285>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x40,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
-ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnInnerPacketLogout(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader
               (PacketHeader *param_1)

{
  CServerHandler *pCVar1;
  CTcpDBServer *pCVar2;
  int iVar3;
  CTcpManagerServer *pCVar4;
  undefined4 uVar5;
  uint uVar6;
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [24];
  PacketHeader *local_1c;
  CTcpGameServer *local_18;
  byte local_11;
  
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 08088ffb to 0808918c has its CatchHandler @ 08089192 */
    CMyFileLog::CMyFileLog(local_3c,"OnInnerPacketLogout",0x1282);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_3c,"./log/Except","CPacketTranslater::OnInnerPacketLogout : 0 == m_pclApp");
  }
  else {
    local_1c = param_1;
    pCVar1 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
    pCVar2 = (CTcpDBServer *)CServerHandler::GetTcpDBServer(pCVar1);
    iVar3 = CTcpDBServer::GetSock(pCVar2);
    if (iVar3 == *(int *)(local_1c + 6)) {
      pCVar1 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      pCVar2 = (CTcpDBServer *)CServerHandler::GetTcpDBServer(pCVar1);
      CTcpDBServer::DisConnected(pCVar2);
    }
    else {
      pCVar1 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      pCVar4 = (CTcpManagerServer *)
               CServerHandler::_ZN14CServerHandler19GetTcpManagerServerEv(pCVar1);
      iVar3 = CTcpManagerServer::GetSock(pCVar4);
      if (iVar3 == *(int *)(local_1c + 6)) {
        pCVar1 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
        pCVar4 = (CTcpManagerServer *)
                 CServerHandler::_ZN14CServerHandler19GetTcpManagerServerEv(pCVar1);
        CTcpManagerServer::DisConnected(pCVar4);
      }
      else {
        local_18 = (CTcpGameServer *)CApplication::FindTcpGameServer((uint)m_pclApp);
        CApplication::OnTcpGameServerDown(m_pclApp,local_18);
        local_11 = CTcpGameServer::GetChannelNo(local_18);
        if (local_11 != 0) {
          uVar6 = (uint)local_11;
          pCVar1 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
          CServerHandler::_ZN14CServerHandler18UnregistGameServerEj(pCVar1,uVar6);
        }
        uVar6 = CApplication::Get_ServerHandler(m_pclApp);
        CServerHandler::_ZN14CServerHandler19DeleteTcpGameServerEj(uVar6);
        uVar5 = CApplication::Get_TcpNetSystem(m_pclApp);
        CMyFileLog::CMyFileLog(local_34,"OnInnerPacketLogout",0x12af);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_34,"./log/Tcp","OnInnerPacketLogout : Network system (%x)",uVar5);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3363 行）：

```cpp
void CPacketTranslater::OnInnerPacketLogout(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1282, "./log/Except", "CPacketTranslater::OnInnerPacketLogout : 0 == m_pclApp");
        }
        else
        {
            if (m_pclApp->Get_ServerHandler()->GetTcpDBServer()->GetSock() == (int)pkt->m_connNo)
            {
                m_pclApp->Get_ServerHandler()->GetTcpDBServer()->DisConnected();
            }
            else
            {
                if (m_pclApp->Get_ServerHandler()->GetTcpManagerServer()->GetSock() == (int)pkt->m_connNo)
                {
                    m_pclApp->Get_ServerHandler()->GetTcpManagerServer()->DisConnected();
                }
                else
                {
                    CTcpGameServer* tcp = (CTcpGameServer*)m_pclApp->FindTcpGameServer(
                        pkt->m_connNo);
                    m_pclApp->OnTcpGameServerDown(tcp);
                    unsigned char channel = tcp->GetChannelNo();
                    if (channel != 0)
                    {
                        m_pclApp->Get_ServerHandler()->UnregistGameServer((unsigned int)channel);
                    }
                    m_pclApp->Get_ServerHandler()->DeleteTcpGameServer(pkt->m_connNo);
                    DNF_LOG_SCOPE_LINE(0x12af, "./log/Tcp", "OnInnerPacketLogout : Network system (%x)", m_pclApp->Get_TcpNetSystem());
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x12b3,"./log/Except", "CPacketTranslater::OnInnerPacketLogout Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x12b8, "./log/Except", "CPacketTranslater::OnInnerPacketLogout Exception Break\n");
    }
}
```
