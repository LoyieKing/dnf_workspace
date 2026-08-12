# _ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader

`CPacketTranslater::OnInnerPacketLogout(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809c066` | `0x260` | `0x80dab9c` | `0x25e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,150 +1,150 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x60,%esp
+sub    $0x70,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x4c>
 movl   $0xc14,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInnerPacketLogout : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x259>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x257>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-mov    -0x18(%ebp),%eax
-mov    0x6(%eax),%ebx
+mov    0x6(%eax),%eax
+mov    %eax,-0x1c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x18(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler12GetTcpServerEj>
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0xbf>
-mov    -0x18(%ebp),%eax
-mov    0x6(%eax),%ebx
+jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0xc2>
 movl   $0xc1f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnInnerPacketLogout Invalid Server Instance(sock:%d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x259>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x257>
 mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CTcpServer13GetServerTypeEv>
+movzbl (%eax),%eax
 mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x18(%ebp)
+movzbl -0xd(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler15DeleteTcpServerEh>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x136>
-mov    -0x18(%ebp),%eax
-mov    0x6(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x137>
 movl   $0xc27,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnInnerPacketLogout DeleteTcpServer fail(sock:%d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x259>
-mov    -0x18(%ebp),%eax
-mov    0x6(%eax),%esi
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x257>
 movzbl -0xd(%ebp),%ebx
 movl   $0xc2b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnInnerPacketLogout DeleteTcpServer Success(TYPE:%d, sock:%d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x259>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x257>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x1ff>
+jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x1fd>
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
 movl   $0xc2f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnInnerPacketLogout Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x1f8>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x1f6>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x259>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x257>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xc34,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInnerPacketLogout Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x254>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x252>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x60,%esp
+add    $0x70,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnInnerPacketLogout(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  CServerHandler *pCVar4;
  uint uVar5;
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [24];
  PacketHeader *local_1c;
  CTcpServer *local_18;
  byte local_11;
  
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 0809c08d to 0809c1e3 has its CatchHandler @ 0809c1e9 */
    CMyFileLog::CMyFileLog(local_4c,"OnInnerPacketLogout",0xc14);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_4c,"./log/Except","CPacketTranslater::OnInnerPacketLogout : 0 == m_pclApp");
  }
  else {
    local_1c = param_1;
    uVar5 = *(uint *)(param_1 + 6);
    pCVar4 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
    local_18 = (CTcpServer *)CServerHandler::GetTcpServer(pCVar4,uVar5);
    if (local_18 == (CTcpServer *)0x0) {
      uVar1 = *(undefined4 *)(local_1c + 6);
      CMyFileLog::CMyFileLog(local_44,"OnInnerPacketLogout",0xc1f);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_44,"./log/TcpServer",
                 "CPacketTranslater::OnInnerPacketLogout Invalid Server Instance(sock:%d)",uVar1);
    }
    else {
      bVar2 = CTcpServer::GetServerType(local_18);
      local_11 = bVar2;
      pCVar4 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      cVar3 = CServerHandler::_ZN14CServerHandler15DeleteTcpServerEh(pCVar4,bVar2);
      if (cVar3 == '\x01') {
        uVar1 = *(undefined4 *)(local_1c + 6);
        uVar5 = (uint)local_11;
        CMyFileLog::CMyFileLog(local_34,"OnInnerPacketLogout",0xc2b);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_34,"./log/TcpServer",
                   "CPacketTranslater::OnInnerPacketLogout DeleteTcpServer Success(TYPE:%d, sock:%d)"
                   ,uVar5,uVar1);
      }
      else {
        uVar1 = *(undefined4 *)(local_1c + 6);
        CMyFileLog::CMyFileLog(local_3c,"OnInnerPacketLogout",0xc27);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_3c,"./log/TcpServer",
                   "CPacketTranslater::OnInnerPacketLogout DeleteTcpServer fail(sock:%d)",uVar1);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2610 行）：

```cpp
void CPacketTranslater::OnInnerPacketLogout(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
        {
            DNF_LOG_SCOPE_LINE(0xc14,
                "./log/Except",
                "CPacketTranslater::OnInnerPacketLogout : 0 == m_pclApp"
            );

            return;
        }
        Packet_InnerPakcet_Logout* pkt = (Packet_InnerPakcet_Logout*)header;
        CTcpServer* server =
            m_pclApp->Get_ServerHandler()->GetTcpServer(pkt->reversed2);
        if (!server)
        {
            DNF_LOG_SCOPE_LINE(0xc1f,
                "./log/TcpServer",
                "CPacketTranslater::OnInnerPacketLogout Invalid Server Instance(sock:%d)",
                pkt->reversed2
            );

            return;
        }
        unsigned char idx = server->GetServerType();
        if (!m_pclApp->Get_ServerHandler()->DeleteTcpServer(idx))
        {
            DNF_LOG_SCOPE_LINE(0xc27,
                "./log/TcpServer",
                "CPacketTranslater::OnInnerPacketLogout DeleteTcpServer fail(sock:%d)",
                pkt->reversed2
            );

            return;
        }
        DNF_LOG_SCOPE_LINE(0xc2b,
            "./log/TcpServer",
            "CPacketTranslater::OnInnerPacketLogout DeleteTcpServer Success(TYPE:%d, sock:%d)", idx,
            pkt->reversed2
        );

    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::OnInnerPacketLogout Exception Break",
                  0xc2f, 0xc34);
}
```
