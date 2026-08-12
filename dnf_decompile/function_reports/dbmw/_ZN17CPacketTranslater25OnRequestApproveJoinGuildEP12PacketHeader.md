# _ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader

`CPacketTranslater::OnRequestApproveJoinGuild(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8096b24` | `0x28a` | `0x80d46aa` | `0x29c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,162 +1,168 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0xbc,%esp
+sub    $0xcc,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x27e>
+je     <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x290>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-lea    -0x9a(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+lea    -0x96(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37Packet_DB_Response_Approve_Join_GuildC1Ev>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x8c(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x88(%ebp)
+mov    -0x20(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,-0x88(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x84(%ebp)
+mov    -0x20(%ebp),%eax
 mov    0x12(%eax),%eax
-mov    %eax,-0x84(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%ebx
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%ecx
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x80(%ebp)
+lea    -0x96(%ebp),%eax
+add    $0xa,%eax
+mov    %eax,-0x9c(%ebp)
+lea    -0x96(%ebp),%eax
+lea    0x1a(%eax),%edi
+mov    -0x20(%ebp),%eax
+mov    0x12(%eax),%esi
+mov    -0x20(%ebp),%eax
+mov    0xe(%eax),%ebx
+mov    -0x20(%ebp),%eax
 movzbl 0x16(%eax),%eax
-movsbl %al,%edx
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%esi
-add    $0x50,%esi
-lea    -0x9a(%ebp),%edi
-add    $0xa,%edi
-mov    %edi,0x18(%esp)
-lea    -0x9a(%ebp),%edi
-add    $0x1a,%edi
+movsbl %al,%ecx
+mov    -0x20(%ebp),%eax
+mov    0xa(%eax),%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x50,%eax
+mov    %eax,-0xac(%ebp)
+mov    -0x9c(%ebp),%eax
+mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %ecx,0xc(%esp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %esi,(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    -0xac(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x117>
-mov    -0x90(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x291>
+mov    -0x8c(%ebp),%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0xc3>
-movl   $0x1,-0x90(%ebp)
-mov    -0x90(%ebp),%edi
-mov    -0x84(%ebp),%esi
+jne    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0xdb>
+movl   $0x1,-0x8c(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0xa(%eax),%edi
+mov    -0x20(%ebp),%eax
+mov    0x12(%eax),%esi
 mov    -0x8c(%ebp),%ebx
 movl   $0x52a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
-movl   $"OnGuildJoin Err(g:%d,c:%d,r:%d) : return false",0x8(%esp)
+movl   $"OnGuildJoin Err(g:%d, c:%d, r:%d) : return false",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movzwl -0x94(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x96(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
-mov    %eax,-0x20(%ebp)
-movzwl -0x98(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x9a(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-mov    -0x90(%ebp),%edi
-mov    -0x84(%ebp),%esi
-mov    -0x8c(%ebp),%ebx
 movl   $0x530,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x20(%ebp),%eax
+mov    0xa(%eax),%ecx
+mov    -0x20(%ebp),%eax
+mov    0x12(%eax),%edx
+mov    -0x8c(%ebp),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"::OnGuildJoin g(%d) c(%d) r(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x291>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x222>
+jne    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x234>
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
 movl   $0x534,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildJoin() Exception Break : %s\n",0x8(%esp)
+movl   $"CPacketTranslater::OnRequestApproveJoinGuild() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x21b>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x22d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x291>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x539,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnGuildJoin() Exception Break\n",0x8(%esp)
+movl   $"CPacketTranslater::OnRequestApproveJoinGuild() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x277>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x289>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x291>
 nop
-add    $0xbc,%esp
+add    $0xcc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRequestApproveJoinGuild(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader
               (PacketHeader *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  Packet_DB_Response_Approve_Join_Guild local_9e [2];
  ushort local_9c;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  STGuildJoinInfo aSStack_84 [60];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  CGuildServer *local_24;
  
  if (m_pclApp != 0) {
    local_28 = param_1;
    Packet_DB_Response_Approve_Join_Guild::Packet_DB_Response_Approve_Join_Guild(local_9e);
    local_90 = *(undefined4 *)(local_28 + 10);
    local_8c = *(undefined4 *)(local_28 + 0xe);
    local_88 = *(undefined4 *)(local_28 + 0x12);
                    /* try { // try from 08096bc7 to 08096cc4 has its CatchHandler @ 08096cca */
    cVar4 = CDBManager::_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj
                      ((CDBManager *)(m_pclApp + 0x50),*(uint *)(local_28 + 10),(char)local_28[0x16]
                       ,*(uint *)(local_28 + 0xe),*(uint *)(local_28 + 0x12),aSStack_84,&local_94);
    uVar3 = local_88;
    uVar2 = local_90;
    if (cVar4 != '\x01') {
      if (local_94 == 0) {
        local_94 = 1;
      }
      uVar1 = local_94;
      CMyFileLog::CMyFileLog(local_48,"OnRequestApproveJoinGuild",0x52a);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_48,"./log/GuildModify","OnGuildJoin Err(g:%d,c:%d,r:%d) : return false",uVar2
                 ,uVar3,uVar1);
    }
    local_24 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18))
    ;
    CGuildServer::SendToServer(local_24,(char *)local_9e,(uint)local_9c);
    uVar3 = local_88;
    uVar2 = local_90;
    uVar1 = local_94;
    CMyFileLog::CMyFileLog(local_40,"OnRequestApproveJoinGuild",0x530);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/GuildModify","::OnGuildJoin g(%d) c(%d) r(%d)",uVar2,uVar3,uVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1138 行）：

```cpp
void CPacketTranslater::OnRequestApproveJoinGuild(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Request_Approve_Join_Guild* pkt =
            (Packet_DBMW_Request_Approve_Join_Guild*)header;
        Packet_DB_Response_Approve_Join_Guild reply;
        reply.m_fieldE = pkt->m_guildId;
        reply.m_field12 = pkt->m_id;
        reply.m_field16 = pkt->m_characNo;
        if (!m_pclApp->m_dbManager.OnGuildJoinByListApprove(
                pkt->m_guildId, pkt->m_serverId,
                pkt->m_id, pkt->m_characNo,
                *(STGuildJoinInfo*)((char*)&reply + 0x1a),
                *(unsigned int*)((char*)&reply + 0xa)))
        {
            if (reply.m_fieldA == 0)
                reply.m_fieldA = 1;
            DNF_LOG_SCOPE_LINE(0x52a,
                "./log/GuildModify",
                "OnGuildJoin Err(g:%d, c:%d, r:%d) : return false", reply.m_fieldA, pkt->m_characNo,
                pkt->m_guildId
            );

            m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
                (char*)&reply, reply.packetSize);
            CMyFileLog log2(__FUNCTION__, 0x530);
            log2("./log/GuildModify", "::OnGuildJoin g(%d) c(%d) r(%d)",
                 reply.m_fieldA,
                 pkt->m_characNo, pkt->m_guildId);
        }
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnRequestApproveJoinGuild() Exception Break",
                  0x534, 0x539);
}
```
