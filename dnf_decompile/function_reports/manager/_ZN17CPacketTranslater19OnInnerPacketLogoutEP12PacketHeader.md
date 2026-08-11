# _ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader

`CPacketTranslater::OnInnerPacketLogout(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x80662ec` | `0x260` | `0x805ac9c` | `0x265` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,150 +1,152 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x60,%esp
+sub    $0x70,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x4c>
 movl   $0x20a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInnerPacketLogout : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x259>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x25e>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-mov    -0x18(%ebp),%eax
-mov    0x6(%eax),%ebx
+add    $0x6,%eax
+mov    (%eax),%eax
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
+jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0xc4>
 movl   $0x215,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnInnerPacketLogout Invalid Server Instance(sock:%d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x259>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x25e>
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTcpServer14GetServerIndexEv>
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
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x136>
-mov    -0x18(%ebp),%eax
-mov    0x6(%eax),%ebx
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x140>
 movl   $0x21d,0x8(%esp)
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
-movzbl -0xd(%ebp),%ebx
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x25e>
 movl   $0x221,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzbl -0xd(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnInnerPacketLogout DeleteTcpServer Success(TYPE:%d, sock:%d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x259>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x25e>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x1ff>
+jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x204>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0x225,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x225,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnInnerPacketLogout Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x1f8>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x1fd>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x259>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x25e>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x22a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInnerPacketLogout Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x254>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x259>
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
                    /* try { // try from 08066313 to 08066469 has its CatchHandler @ 0806646f */
    CMyFileLog::CMyFileLog(local_4c,"OnInnerPacketLogout",0x20a);
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
      CMyFileLog::CMyFileLog(local_44,"OnInnerPacketLogout",0x215);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_44,"./log/TcpServer",
                 "CPacketTranslater::OnInnerPacketLogout Invalid Server Instance(sock:%d)",uVar1);
    }
    else {
      bVar2 = CTcpServer::GetServerIndex(local_18);
      local_11 = bVar2;
      pCVar4 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      cVar3 = CServerHandler::_ZN14CServerHandler15DeleteTcpServerEh(pCVar4,bVar2);
      if (cVar3 == '\x01') {
        uVar1 = *(undefined4 *)(local_1c + 6);
        uVar5 = (uint)local_11;
        CMyFileLog::CMyFileLog(local_34,"OnInnerPacketLogout",0x221);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_34,"./log/TcpServer",
                   "CPacketTranslater::OnInnerPacketLogout DeleteTcpServer Success(TYPE:%d, sock:%d)"
                   ,uVar5,uVar1);
      }
      else {
        uVar1 = *(undefined4 *)(local_1c + 6);
        CMyFileLog::CMyFileLog(local_3c,"OnInnerPacketLogout",0x21d);
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

定义于 [source/DNFServer/GameServer/Manager/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Manager/DNFPacketTranslater.cpp)（约第 178 行）：

```cpp
void CPacketTranslater::OnInnerPacketLogout(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
        {
            CMyFileLog log(__FUNCTION__, 0x20a);
            log("./log/Except", "CPacketTranslater::OnInnerPacketLogout : 0 == m_pclApp");
            return;
        }
        int port = *(int*)((char*)header + 6);
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        CTcpServer* server = handler->GetTcpServer((unsigned int)port);
        if (!server)
        {
            CMyFileLog log(__FUNCTION__, 0x215);
            log("./log/TcpServer", "CPacketTranslater::OnInnerPacketLogout Invalid Server Instance(sock:%d)",
                port);
            return;
        }
        unsigned char idx = server->GetServerIndex();
        handler = m_pclApp->Get_ServerHandler();
        if (!handler->DeleteTcpServer(idx))
        {
            CMyFileLog log(__FUNCTION__, 0x21d);
            log("./log/TcpServer", "CPacketTranslater::OnInnerPacketLogout DeleteTcpServer fail(sock:%d)",
                port);
            return;
        }
        CMyFileLog log(__FUNCTION__, 0x221);
        log("./log/TcpServer",
            "CPacketTranslater::OnInnerPacketLogout DeleteTcpServer Success(TYPE:%d, sock:%d)",
            idx, port);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log(__FUNCTION__, 0x225);
        log("./log/Except", "CPacketTranslater::OnInnerPacketLogout Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x22a);
        log("./log/Except", "CPacketTranslater::OnInnerPacketLogout Exception Break\n");
    }
}
```
