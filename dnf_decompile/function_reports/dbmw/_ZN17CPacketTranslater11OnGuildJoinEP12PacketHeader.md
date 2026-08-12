# _ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader

`CPacketTranslater::OnGuildJoin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8096dae` | `0x32e` | `0x80d0564` | `0x32f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,211 +1,213 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xbc,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x322>
+je     <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x320>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
 mov    0xb(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x323>
-lea    -0x5e(%ebp),%eax
+lea    -0x52(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33Packet_DBMW_Save_Guild_Join_ReplyC1Ev>
-mov    -0x24(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    %eax,-0x54(%ebp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x48(%ebp)
+mov    -0x20(%ebp),%eax
 mov    0x13(%eax),%eax
-mov    %eax,-0x50(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x44(%ebp)
+mov    -0x20(%ebp),%eax
 mov    0x17(%eax),%eax
-mov    %eax,-0x4c(%ebp)
+mov    %eax,-0x40(%ebp)
 movl   $0x3c,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x9c(%ebp),%eax
+lea    -0xa8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 movzbl 0xa(%eax),%eax
-mov    %al,-0x9c(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xb(%eax),%eax
+mov    %al,-0xa8(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0xa4(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0xf(%eax),%eax
+mov    %eax,-0xa0(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0x13(%eax),%eax
+mov    %eax,-0x9c(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0x17(%eax),%eax
 mov    %eax,-0x98(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xf(%eax),%eax
-mov    %eax,-0x94(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x13(%eax),%eax
-mov    %eax,-0x90(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x17(%eax),%eax
-mov    %eax,-0x8c(%ebp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 add    $0x1b,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x9c(%ebp),%eax
+lea    -0xa8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
+movzbl 0x38(%eax),%eax
+mov    %al,-0x76(%ebp)
+mov    -0x20(%ebp),%eax
 movzbl 0x39(%eax),%eax
-mov    %al,-0x6a(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %al,-0x75(%ebp)
+mov    -0x20(%ebp),%eax
 movzbl 0x3a(%eax),%eax
-mov    %al,-0x69(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %al,-0x74(%ebp)
+mov    -0x20(%ebp),%eax
 movzbl 0x3b(%eax),%eax
-mov    %al,-0x68(%ebp)
-mov    -0x24(%ebp),%eax
-movzbl 0x3c(%eax),%eax
-mov    %al,-0x67(%ebp)
-mov    -0x24(%ebp),%eax
-add    $0x3d,%eax
+mov    %al,-0x73(%ebp)
+mov    -0x20(%ebp),%eax
+add    $0x3c,%eax
 movl   $0x3,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x9c(%ebp),%eax
+lea    -0xa8(%ebp),%eax
 add    $0x36,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
-lea    -0x5e(%ebp),%eax
+lea    -0x52(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,0x8(%esp)
-lea    -0x9c(%ebp),%eax
+lea    -0xa8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x198>
-mov    -0x48(%ebp),%edi
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x1f2>
+mov    -0x3c(%ebp),%edi
+mov    -0x20(%ebp),%eax
 mov    0x17(%eax),%esi
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    0xb(%eax),%ebx
 movl   $0x56a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnGuildJoinEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
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
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x48(%ebp),%eax
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x3c(%ebp),%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x1c4>
-mov    -0x8c(%ebp),%edx
-mov    -0x98(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x1c8>
+mov    -0x20(%ebp),%eax
+mov    0xb(%eax),%edx
+mov    -0x20(%ebp),%eax
+mov    0x17(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 add    $0x50,%ecx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager22DeleteJoinListByInviteEjj>
+movzwl -0x50(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x52(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
-mov    %eax,-0x20(%ebp)
-movzwl -0x5c(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x5e(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-mov    -0x48(%ebp),%edi
-mov    -0x24(%ebp),%eax
-mov    0x17(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xb(%eax),%ebx
 movl   $0x576,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnGuildJoinEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x3c(%ebp),%ecx
+mov    -0x20(%ebp),%eax
+mov    0x17(%eax),%edx
+mov    -0x20(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"::OnGuildJoin g(%d) c(%d) r(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x323>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x324>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x2c6>
+jne    <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x2c4>
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
 movl   $0x57b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnGuildJoinEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildJoin() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x2bf>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x2bd>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x323>
+jmp    <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x324>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x580,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnGuildJoinEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildJoin() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x31b>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x319>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x323>
+jmp    <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x324>
+nop
+jmp    <T> <_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader+0x324>
 nop
 add    $0xbc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildJoin(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader(PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  PacketHeader local_a0 [4];
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90;
  char acStack_8c [30];
  PacketHeader local_6e;
  PacketHeader local_6d;
  PacketHeader local_6c;
  PacketHeader local_6b;
  undefined1 auStack_6a [8];
  Packet_DBMW_Save_Guild_Join_Reply local_62 [2];
  ushort local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  CGuildServer *local_24;
  
  if ((m_pclApp != 0) && (local_28 = param_1, *(int *)(param_1 + 0xb) != 0)) {
    Packet_DBMW_Save_Guild_Join_Reply::Packet_DBMW_Save_Guild_Join_Reply(local_62);
    local_58 = *(undefined4 *)(local_28 + 0xb);
    local_54 = *(undefined4 *)(local_28 + 0x13);
    local_50 = *(undefined4 *)(local_28 + 0x17);
    memset(local_a0,0,0x3c);
    local_a0[0] = local_28[10];
    local_9c = *(uint *)(local_28 + 0xb);
    local_98 = *(undefined4 *)(local_28 + 0xf);
    local_94 = *(undefined4 *)(local_28 + 0x13);
    local_90 = *(uint *)(local_28 + 0x17);
    strncpy(acStack_8c,(char *)(local_28 + 0x1b),0x1d);
    local_6e = local_28[0x39];
    local_6d = local_28[0x3a];
    local_6c = local_28[0x3b];
    local_6b = local_28[0x3c];
    memcpy(auStack_6a,local_28 + 0x3d,3);
                    /* try { // try from 08096ee9 to 08096ff2 has its CatchHandler @ 08096ff8 */
    cVar4 = CDBManager::_ZN10CDBManager9GuildJoinEP15STGuildJoinInfoRj
                      ((CDBManager *)(m_pclApp + 0x50),(STGuildJoinInfo *)local_a0,&local_4c);
    uVar3 = local_4c;
    if (cVar4 != '\x01') {
      uVar1 = *(undefined4 *)(local_28 + 0x17);
      uVar2 = *(undefined4 *)(local_28 + 0xb);
      CMyFileLog::CMyFileLog(local_48,"OnGuildJoin",0x56a);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_48,"./log/GuildModify","OnGuildJoin Err(g:%d,c:%d,r:%d) : return false",uVar2
                 ,uVar1,uVar3);
    }
    if (local_4c == 0) {
      CDBManager::_ZN10CDBManager22DeleteJoinListByInviteEjj
                ((CDBManager *)(m_pclApp + 0x50),local_9c,local_90);
    }
    local_24 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18))
    ;
    CGuildServer::SendToServer(local_24,(char *)local_62,(uint)local_60);
    uVar1 = *(undefined4 *)(local_28 + 0x17);
    uVar2 = *(undefined4 *)(local_28 + 0xb);
    CMyFileLog::CMyFileLog(local_40,"OnGuildJoin",0x576);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/GuildModify","::OnGuildJoin g(%d) c(%d) r(%d)",uVar2,uVar1,local_4c);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 279 行）：

```cpp
void CPacketTranslater::OnGuildJoin(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Request_Guild_Join* pkt =
            (Packet_DBMW_Request_Guild_Join*)header;
        if (pkt->m_guildId == 0)
            return;
        Packet_DBMW_Save_Guild_Join_Reply reply;
        reply.m_fieldA = pkt->m_guildId;
        reply.m_fieldE = pkt->m_field13;
        reply.m_field12 = pkt->m_characNo;
        STGuildJoinInfo join;
        memset(&join, 0, 0x3c);
        join.m_serverId = pkt->m_serverId;
        join.m_guildId = pkt->m_guildId;
        join.m_id = pkt->m_id;
        join.m_fieldC = pkt->m_field13;
        join.m_characNo = pkt->m_characNo;
        strncpy(join.m_characName, pkt->m_characName, 0x1d);
        join.m_lev = pkt->m_lev;
        join.m_growType = pkt->m_growType;
        join.m_job = pkt->m_job;
        join.m_sex = pkt->m_sex;
        memcpy(join.m_bornYear, pkt->m_bornYear, 3);
        if (!m_pclApp->m_dbManager.GuildJoin(
                &join, *(unsigned int*)((char*)&reply + 0x16)))
        {
            DNF_LOG_SCOPE_LINE(0x56a,
                "./log/GuildModify",
                "OnGuildJoin Err(g:%d, c:%d, r:%d) : return false", pkt->m_guildId, pkt->m_characNo,
                reply.m_field16
            );

            if (reply.m_field16 == 0)
                m_pclApp->m_dbManager.DeleteJoinListByInvite(
                    pkt->m_characNo, pkt->m_guildId);
            m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
                (char*)&reply, reply.packetSize);
        }
        CMyFileLog log2(__FUNCTION__, 0x576);
        log2("./log/GuildModify", "::OnGuildJoin g(%d) c(%d) r(%d)",
             pkt->m_guildId, pkt->m_characNo,
             reply.m_field16);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnGuildJoin() Exception Break",
                  0x57b, 0x580);
}
```
