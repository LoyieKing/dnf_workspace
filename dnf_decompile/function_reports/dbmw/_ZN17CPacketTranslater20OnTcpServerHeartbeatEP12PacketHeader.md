# _ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader

`CPacketTranslater::OnTcpServerHeartbeat(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809c7ae` | `0x18a` | `0x80db110` | `0x190` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,106 +1,108 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x50,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x182>
+je     <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x188>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
 movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+mov    %al,-0x15(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x14(%ebp)
+movzbl -0x15(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler12GetTcpServerEh>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x9a>
-mov    -0x14(%ebp),%eax
-mov    0x6(%eax),%esi
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+jne    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0xa0>
+mov    -0x1c(%ebp),%eax
+mov    0x6(%eax),%eax
+mov    %eax,%esi
+movzbl -0x15(%ebp),%ebx
 movl   $0xc98,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnTcpServerHeartbeat Invalid Server Instance(TYPE:%d, sock:%d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x183>
+jmp    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x189>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTcpServer15NotifyHeartbeatEv>
-jmp    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x183>
+jmp    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x189>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x126>
+jne    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x12c>
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
 movl   $0xca4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnTcpServerHeartbeat Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x11f>
+jmp    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x125>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x183>
+jmp    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x189>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xca9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnTcpServerHeartbeat Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x17b>
+jmp    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x181>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x183>
+jmp    <T> <_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader+0x189>
 nop
 add    $0x50,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnTcpServerHeartbeat(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  undefined4 uVar2;
  uchar uVar3;
  CMyFileLog local_30 [24];
  PacketHeader *local_18;
  CTcpServer *local_14;
  
  if (m_pclApp != (CApplication *)0x0) {
    local_18 = param_1;
    uVar3 = CApplication::Get_ServerHandler(m_pclApp);
                    /* try { // try from 0809c7e7 to 0809c852 has its CatchHandler @ 0809c858 */
    local_14 = (CTcpServer *)CServerHandler::GetTcpServer(uVar3);
    if (local_14 == (CTcpServer *)0x0) {
      uVar2 = *(undefined4 *)(local_18 + 6);
      PVar1 = local_18[10];
      CMyFileLog::CMyFileLog(local_30,"OnTcpServerHeartbeat",0xc98);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/TcpServer",
                 "CPacketTranslater::OnTcpServerHeartbeat Invalid Server Instance(TYPE:%d, sock:%d)"
                 ,(uint)(byte)PVar1,uVar2);
    }
    else {
      CTcpServer::NotifyHeartbeat(local_14);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2738 行）：

```cpp
void CPacketTranslater::OnTcpServerHeartbeat(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        Packet_Tcp_Server_Heartbeat* pkt =
            (Packet_Tcp_Server_Heartbeat*)header;
        unsigned char idx = pkt->m_idx;
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        CTcpServer* server = handler->GetTcpServer(idx);
        if (!server)
        {
            DNF_LOG_SCOPE_LINE(0xc98,
                "./log/TcpServer",
                "CPacketTranslater::OnTcpServerHeartbeat Invalid Server Instance(TYPE:%d, sock:%d)", idx,
                (int)pkt->reversed2
            );

            return;
        }
        server->NotifyHeartbeat();
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::OnTcpServerHeartbeat Exception Break",
                  0xca4, 0xca9);
}
```
