# _ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader

`CPacketTranslater::OnGuildSecede(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8097542` | `0x2cd` | `0x80d2844` | `0x2bb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,184 +1,182 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xac,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2c1>
+je     <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2ac>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
 mov    0xa(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2c2>
-lea    -0x85(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2af>
+lea    -0x81(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_DB_Reply_Guild_SecedeC1Ev>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x7b(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x77(%ebp)
+mov    -0x20(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,-0x77(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x73(%ebp)
+mov    -0x20(%ebp),%eax
 movzbl 0x12(%eax),%eax
-mov    %al,-0x6b(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %al,-0x67(%ebp)
+mov    -0x20(%ebp),%eax
 mov    0x13(%eax),%eax
-mov    %eax,-0x6a(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x66(%ebp)
+mov    -0x20(%ebp),%eax
 add    $0x17,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x85(%ebp),%eax
+lea    -0x81(%ebp),%eax
 add    $0x1f,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
-lea    -0x85(%ebp),%eax
+lea    -0x81(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,0x10(%esp)
-lea    -0x85(%ebp),%eax
+lea    -0x81(%ebp),%eax
 add    $0x3d,%eax
 mov    %eax,0xc(%esp)
-lea    -0x85(%ebp),%eax
+lea    -0x81(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,0x8(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x146>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 movzbl 0x12(%eax),%eax
 movsbl %al,%eax
-mov    %eax,-0x94(%ebp)
-mov    -0x6f(%ebp),%edi
-mov    -0x73(%ebp),%esi
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x90(%ebp)
+mov    -0x6b(%ebp),%edi
+mov    -0x6f(%ebp),%esi
+mov    -0x20(%ebp),%eax
 add    $0x17,%eax
-mov    %eax,-0x90(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x8c(%ebp)
+mov    -0x20(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x5e1,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater13OnGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x94(%ebp),%eax
+mov    -0x90(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    %edi,0x18(%esp)
 mov    %esi,0x14(%esp)
-mov    -0x90(%ebp),%eax
+mov    -0x8c(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"::OnGuildSecede Err g(%d) n(%s) c(%d) r(%d) f(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movzwl -0x7f(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x81(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
-mov    %eax,-0x20(%ebp)
-movzwl -0x83(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x85(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-mov    -0x24(%ebp),%eax
-movzbl 0x12(%eax),%eax
-movsbl %al,%eax
-mov    %eax,-0x8c(%ebp)
-mov    -0x6f(%ebp),%edi
-mov    -0x73(%ebp),%esi
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
 movl   $0x5ed,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater13OnGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x8c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x20(%ebp),%eax
+movzbl 0x12(%eax),%eax
+movsbl %al,%ebx
+mov    -0x6b(%ebp),%ecx
+mov    -0x6f(%ebp),%edx
+mov    -0x20(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"::OnGuildSecede g(%d) c(%d) r(%d) f(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2c2>
+jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2b0>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x265>
+jne    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x250>
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
 movl   $0x5f6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater13OnGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildSecede() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x25e>
+jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x249>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2c2>
+jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2b0>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x5fb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater13OnGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildSecede() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2ba>
+jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2a5>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2c2>
+jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2b0>
+nop
+jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2b0>
 nop
 add    $0xac,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildSecede(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader(PacketHeader *param_1)

{
  Packet_DB_Request_Guild_Secede PVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  Packet_DB_Request_Guild_Secede *pPVar6;
  Packet_DB_Reply_Guild_Secede local_89 [2];
  ushort local_87;
  undefined4 local_7f;
  undefined4 local_7b;
  uint local_77;
  uint local_73;
  PacketHeader local_6f;
  undefined4 local_6e;
  undefined1 auStack_6a [30];
  uint uStack_4c;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  CGuildServer *local_24;
  
  if ((m_pclApp != 0) && (local_28 = param_1, *(int *)(param_1 + 10) != 0)) {
    Packet_DB_Reply_Guild_Secede::Packet_DB_Reply_Guild_Secede(local_89);
    local_7f = *(undefined4 *)(local_28 + 10);
    local_7b = *(undefined4 *)(local_28 + 0xe);
    local_6f = local_28[0x12];
    local_6e = *(undefined4 *)(local_28 + 0x13);
    memcpy(auStack_6a,local_28 + 0x17,0x1d);
                    /* try { // try from 080975fe to 08097725 has its CatchHandler @ 0809772b */
    cVar5 = CDBManager::_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_
                      ((CDBManager *)(m_pclApp + 0x50),(Packet_DB_Request_Guild_Secede *)local_28,
                       &local_77,&uStack_4c,&local_73);
    uVar4 = local_73;
    uVar3 = local_77;
    if (cVar5 != '\x01') {
      PVar1 = *(Packet_DB_Request_Guild_Secede *)(local_28 + 0x12);
      pPVar6 = (Packet_DB_Request_Guild_Secede *)(local_28 + 0x17);
      uVar2 = *(undefined4 *)(local_28 + 10);
      CMyFileLog::CMyFileLog(local_48,"OnGuildSecede",0x5e1);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_48,"./log/GuildModify","::OnGuildSecede Err g(%d) n(%s) c(%d) r(%d) f(%d)",
                 uVar2,pPVar6,uVar3,uVar4,(int)(char)PVar1);
    }
    local_24 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18))
    ;
    CGuildServer::SendToServer(local_24,(char *)local_89,(uint)local_87);
    PVar1 = *(Packet_DB_Request_Guild_Secede *)(local_28 + 0x12);
    uVar2 = *(undefined4 *)(local_28 + 10);
    CMyFileLog::CMyFileLog(local_40,"OnGuildSecede",0x5ed);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/GuildModify","::OnGuildSecede g(%d) c(%d) r(%d) f(%d)",uVar2,local_77
               ,local_73,(int)(char)PVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 841 行）：

```cpp
void CPacketTranslater::OnGuildSecede(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DB_Request_Guild_Secede* pkt =
            (Packet_DB_Request_Guild_Secede*)header;
        if (pkt->m_guildId == 0)
            return;
        Packet_DB_Reply_Guild_Secede reply;
        reply.m_fieldA = pkt->m_guildId;
        reply.m_fieldE = pkt->m_characNo;
        reply.m_field1A = pkt->m_grade;
        reply.m_field1B = pkt->m_secedeType;
        memcpy((char*)&reply + 0x1f, pkt->m_characName, 0x1d);
        if (!m_pclApp->m_dbManager.GuildSecede(
                pkt,
                *(unsigned int*)((char*)&reply + 0x12),
                *(unsigned int*)((char*)&reply + 0x3d),
                *(unsigned int*)((char*)&reply + 0x16)))
        {
            DNF_LOG_SCOPE_LINE(0x5e1,
                "./log/GuildModify",
                "::OnGuildSecede Err g(%d) n(%s) c(%d) r(%d) f(%d)",
                pkt->m_guildId,
                pkt->m_characName,
                reply.m_field12,
                reply.m_field16,
                pkt->m_grade
            );

        }
        m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
            (char*)&reply, reply.packetSize);
        CMyFileLog log2(__FUNCTION__, 0x5ed);
        log2("./log/GuildModify", "::OnGuildSecede g(%d) c(%d) r(%d) f(%d)",
             pkt->m_guildId,
             reply.m_field12,
             reply.m_field16,
             pkt->m_grade);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnGuildSecede() Exception Break",
                  0x5f6, 0x5fb);
}
```
