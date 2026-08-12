# _ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader

`CPacketTranslater::OnTcpServerLogout(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809c540` | `0x26e` | `0x80dae88` | `0x24d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,160 +1,150 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x50,%esp
+sub    $0x60,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x266>
+je     <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x245>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
 movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+mov    %al,-0x15(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    0x6(%eax),%eax
+mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x10(%ebp)
+movzbl -0x15(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler12GetTcpServerEh>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x9a>
-mov    -0x10(%ebp),%eax
-mov    0x6(%eax),%esi
-mov    -0x10(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+je     <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0xa4>
+movzbl -0x15(%ebp),%ebx
 movl   $0xc74,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnTcpServerLogout Invalid Server Instance(TYPE:%d, sock:%d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x267>
+jmp    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x246>
+movzbl -0x15(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler15DeleteTcpServerEh>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x117>
-mov    -0x10(%ebp),%eax
-mov    0x6(%eax),%esi
-mov    -0x10(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+je     <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x108>
+movzbl -0x15(%ebp),%ebx
 movl   $0xc7a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnTcpServerLogout DeleteTcpServer fail(TYPE:%d, sock:%d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x267>
-mov    -0x10(%ebp),%eax
-mov    0x6(%eax),%edx
-mov    -0x10(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%eax
+jmp    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x246>
+movzbl -0x15(%ebp),%eax
+mov    -0x14(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnTcpServerLogout(TYPE:%d, sock:%d)",(%esp)
 call   <T> <printf>
-mov    -0x10(%ebp),%eax
-mov    0x6(%eax),%esi
-mov    -0x10(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+movzbl -0x15(%ebp),%ebx
 movl   $0xc7e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnTcpServerLogout(TYPE:%d, sock:%d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x267>
+jmp    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x246>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x20a>
+jne    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x1e9>
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
 movl   $0xc82,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnTcpServerLogout Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x203>
+jmp    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x1e2>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x267>
+jmp    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x246>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xc87,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnTcpServerLogout Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x25f>
+jmp    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x23e>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x267>
+jmp    <T> <_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader+0x246>
 nop
-add    $0x50,%esp
+add    $0x60,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnTcpServerLogout(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  undefined4 uVar2;
  uchar uVar3;
  char cVar4;
  int iVar5;
  CServerHandler *this;
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [24];
  PacketHeader *local_14;
  
  if (m_pclApp != (CApplication *)0x0) {
    local_14 = param_1;
    uVar3 = CApplication::Get_ServerHandler(m_pclApp);
                    /* try { // try from 0809c579 to 0809c6c8 has its CatchHandler @ 0809c6ce */
    iVar5 = CServerHandler::GetTcpServer(uVar3);
    if (iVar5 == 0) {
      uVar2 = *(undefined4 *)(local_14 + 6);
      PVar1 = local_14[10];
      CMyFileLog::CMyFileLog(local_3c,"OnTcpServerLogout",0xc74);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_3c,"./log/TcpServer",
                 "CPacketTranslater::OnTcpServerLogout Invalid Server Instance(TYPE:%d, sock:%d)",
                 (uint)(byte)PVar1,uVar2);
    }
    else {
      PVar1 = local_14[10];
      this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      cVar4 = CServerHandler::_ZN14CServerHandler15DeleteTcpServerEh(this,(uchar)PVar1);
      if (cVar4 == '\x01') {
        printf("CPacketTranslater::OnTcpServerLogout(TYPE:%d, sock:%d)",(uint)(byte)local_14[10],
               *(undefined4 *)(local_14 + 6));
        uVar2 = *(undefined4 *)(local_14 + 6);
        PVar1 = local_14[10];
        CMyFileLog::CMyFileLog(local_2c,"OnTcpServerLogout",0xc7e);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_2c,"./log/TcpServer",
                   "CPacketTranslater::OnTcpServerLogout(TYPE:%d, sock:%d)",(uint)(byte)PVar1,uVar2)
        ;
      }
      else {
        uVar2 = *(undefined4 *)(local_14 + 6);
        PVar1 = local_14[10];
        CMyFileLog::CMyFileLog(local_34,"OnTcpServerLogout",0xc7a);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_34,"./log/TcpServer",
                   "CPacketTranslater::OnTcpServerLogout DeleteTcpServer fail(TYPE:%d, sock:%d)",
                   (uint)(byte)PVar1,uVar2);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2703 行）：

```cpp
void CPacketTranslater::OnTcpServerLogout(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        Packet_Tcp_Server_Logout* pkt = (Packet_Tcp_Server_Logout*)header;
        unsigned char idx = pkt->m_idx;
        int port = (int)pkt->reversed2;
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        if (!handler->GetTcpServer(idx))
        {
            DNF_LOG_SCOPE_LINE(0xc74,
                "./log/TcpServer",
                "CPacketTranslater::OnTcpServerLogout Invalid Server Instance(TYPE:%d, sock:%d)", idx,
                port
            );

            return;
        }
        if (!handler->DeleteTcpServer(idx))
        {
            DNF_LOG_SCOPE_LINE(0xc7a,
                "./log/TcpServer",
                "CPacketTranslater::OnTcpServerLogout DeleteTcpServer fail(TYPE:%d, sock:%d)", idx,
                port
            );

            return;
        }
        printf("CPacketTranslater::OnTcpServerLogout(TYPE:%d, sock:%d)", idx, port);
        DNF_LOG_SCOPE_LINE(0xc7e,
            "./log/TcpServer",
            "CPacketTranslater::OnTcpServerLogout(TYPE:%d, sock:%d)", idx,
            port
        );

    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::OnTcpServerLogout Exception Break",
                  0xc82, 0xc87);
}
```
