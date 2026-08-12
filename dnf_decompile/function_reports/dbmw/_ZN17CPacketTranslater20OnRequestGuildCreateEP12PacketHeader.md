# _ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader

`CPacketTranslater::OnRequestGuildCreate(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8097b46` | `0x1e5` | `0x80d4118` | `0x1d9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,131 +1,129 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x8c,%esp
+sub    $0x7c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1d9>
+je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1d0>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-lea    -0x69(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+lea    -0x65(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN30Packet_DBMW_Reply_Guild_CreateC1Ev>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    0xf(%eax),%eax
-mov    %eax,-0x5f(%ebp)
+mov    %eax,-0x5b(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
-lea    -0x69(%ebp),%eax
+lea    -0x65(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,0xc(%esp)
-lea    -0x69(%ebp),%eax
+lea    -0x65(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,0x8(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 add    $0x38,%eax
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x69(%ebp),%eax
+lea    -0x65(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
+movzwl -0x63(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x65(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
-mov    %eax,-0x20(%ebp)
-movzwl -0x67(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x69(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
 mov    -0x57(%ebp),%edi
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    0xf(%eax),%esi
-mov    -0x5b(%ebp),%ebx
+mov    -0x53(%ebp),%ebx
 movl   $0x65f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"::OnRequestGuildCreate g(%d) c(%d) r(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1da>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1d1>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x17d>
+jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x174>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x663,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestGuildCreate() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x176>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x16d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1da>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1d1>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x668,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestGuildCreate() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1d2>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1c9>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1da>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1d1>
 nop
-add    $0x8c,%esp
+add    $0x7c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRequestGuildCreate(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  Packet_DBMW_Reply_Guild_Create local_6d [2];
  ushort local_6b;
  undefined4 local_63;
  uint local_5f;
  uint local_5b;
  undefined1 auStack_57 [23];
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  CGuildServer *local_24;
  
  if (m_pclApp != 0) {
    local_28 = param_1;
    Packet_DBMW_Reply_Guild_Create::Packet_DBMW_Reply_Guild_Create(local_6d);
    local_63 = *(undefined4 *)(local_28 + 0xf);
                    /* try { // try from 08097b9f to 08097c41 has its CatchHandler @ 08097c47 */
    CDBManager::_ZN10CDBManager16QueryGuildCreateEP32Packet_DBMW_Request_Guild_CreateRjS2_
              ((CDBManager *)(m_pclApp + 0x50),(Packet_DBMW_Request_Guild_Create *)local_28,
               &local_5f,&local_5b);
    memcpy(auStack_57,(Packet_DBMW_Request_Guild_Create *)(local_28 + 0x38),0x16);
    local_24 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18))
    ;
    CGuildServer::SendToServer(local_24,(char *)local_6d,(uint)local_6b);
    uVar1 = *(undefined4 *)(local_28 + 0xf);
    CMyFileLog::CMyFileLog(local_40,"OnRequestGuildCreate",0x65f);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/GuildModify","::OnRequestGuildCreate g(%d) c(%d) r(%d)",local_5f,
               uVar1,local_5b);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1070 行）：

```cpp
void CPacketTranslater::OnRequestGuildCreate(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Request_Guild_Create* pkt =
            (Packet_DBMW_Request_Guild_Create*)header;
        Packet_DBMW_Reply_Guild_Create reply;
        reply.m_fieldA = pkt->m_characNo;
        m_pclApp->m_dbManager.QueryGuildCreate(
            pkt,
            *(unsigned int*)((char*)&reply + 0xe),
            *(unsigned int*)((char*)&reply + 0x12));
        memcpy((char*)&reply + 0x16, pkt->m_guildName, 0x16);
        m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
            (char*)&reply, reply.packetSize);
        DNF_LOG_SCOPE_LINE(0x65f,
            "./log/GuildModify",
            "::OnRequestGuildCreate g(%d) c(%d) r(%d)",
            reply.m_field12,
            pkt->m_characNo,
            reply.m_fieldE
        );

    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnRequestGuildCreate() Exception Break",
                  0x663, 0x668);
}
```
