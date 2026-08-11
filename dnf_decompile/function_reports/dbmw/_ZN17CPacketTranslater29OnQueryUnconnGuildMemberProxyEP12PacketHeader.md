# _ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader

`CPacketTranslater::OnQueryUnconnGuildMemberProxy(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8095e54` | `0x1d8` | `0x80d9c74` | `0x1d0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,128 +1,126 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xa0,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x1cd>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x1c5>
 lea    -0x7f(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_DB_Reply_Unconn_Guild_MemberC1Ev>
+mov    0x8(%ebp),%eax
+mov    %eax,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x75(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,-0x71(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    -0x71(%ebp),%eax
+mov    %eax,%edx
+mov    -0x75(%ebp),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 add    $0x50,%ecx
 lea    -0x7f(%ebp),%ebx
 add    $0x12,%ebx
 mov    %ebx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0xc0>
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%ebx
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0xb8>
+mov    -0x71(%ebp),%esi
+mov    -0x75(%ebp),%ebx
 movl   $0x3ae,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Query Guild Member List Error g(%d), c(%d)\n",0x8(%esp)
 movl   $"./log/GuildMemberErr",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x1ce>
+jmp    <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x1c6>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
 mov    %eax,-0x10(%ebp)
 movzwl -0x7d(%ebp),%eax
 movzwl %ax,%edx
 lea    -0x7f(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x1ce>
+jmp    <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x1c6>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x171>
+jne    <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x169>
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
 movl   $0x3b7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnQueryGuildAllMembersProxy() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x16a>
+jmp    <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x162>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x1ce>
+jmp    <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x1c6>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x3bc,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnQueryGuildAllMembersProxy() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x1c6>
+jmp    <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x1be>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x1ce>
+jmp    <T> <_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader+0x1c6>
 nop
 add    $0xa0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnQueryUnconnGuildMemberProxy(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  Packet_DB_Reply_Unconn_Guild_Member local_83 [2];
  ushort local_81;
  undefined4 local_79;
  undefined4 local_75;
  STGuildMemberProxy aSStack_71 [65];
  CMyFileLog local_30 [24];
  PacketHeader *local_18;
  CGuildServer *local_14;
  
  if (m_pclApp != 0) {
    local_18 = param_1;
    Packet_DB_Reply_Unconn_Guild_Member::Packet_DB_Reply_Unconn_Guild_Member(local_83);
    local_79 = *(undefined4 *)(local_18 + 10);
    local_75 = *(undefined4 *)(local_18 + 0xe);
                    /* try { // try from 08095eb9 to 08095f43 has its CatchHandler @ 08095f49 */
    cVar3 = CDBManager::_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy
                      ((CDBManager *)(m_pclApp + 0x50),*(uint *)(local_18 + 10),
                       *(uint *)(local_18 + 0xe),aSStack_71);
    if (cVar3 == '\x01') {
      local_14 = (CGuildServer *)
                 CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18));
      CGuildServer::SendToServer(local_14,(char *)local_83,(uint)local_81);
    }
    else {
      uVar1 = *(undefined4 *)(local_18 + 0xe);
      uVar2 = *(undefined4 *)(local_18 + 10);
      CMyFileLog::CMyFileLog(local_30,"OnQueryUnconnGuildMemberProxy",0x3ae);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/GuildMemberErr","Query Guild Member List Error g(%d), c(%d)\n",
                 uVar2,uVar1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2407 行）：

```cpp
void CPacketTranslater::OnQueryUnconnGuildMemberProxy(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        Packet_DB_Reply_Unconn_Guild_Member reply;
        Packet_DB_Call_Unconn_Guild_Member* pkt =
            (Packet_DB_Call_Unconn_Guild_Member*)header;
        reply.m_fieldA = pkt->m_fieldA;
        reply.m_fieldE = pkt->m_fieldE;
        if (!m_pclApp->m_dbManager.QueryGuildMemberProxy(
                reply.m_fieldA, reply.m_fieldE, reply.m_proxy))
        {
            DNF_LOG_SCOPE_LINE(0x3ae,
                "./log/GuildMemberErr",
                "Query Guild Member List Error g(%d), c(%d)\n", reply.m_fieldA,
                reply.m_fieldE
            );

            return;
        }
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        gs->SendToServer((char*)&reply, reply.packetSize);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnQueryGuildAllMembersProxy() Exception Break",
                  0x3b7, 0x3bc);
}
```
