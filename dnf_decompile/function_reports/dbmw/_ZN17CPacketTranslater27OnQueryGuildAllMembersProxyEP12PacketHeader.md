# _ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader

`CPacketTranslater::OnQueryGuildAllMembersProxy(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8095a80` | `0x3d4` | `0x80d9f16` | `0x3d5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,255 +1,256 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x181c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c8>
+je     <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c9>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x34(%ebp)
 lea    -0x1807(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33Packet_DB_Reply_Guild_All_MembersC1Ev>
 mov    -0x34(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x17fd(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,-0x17f9(%ebp)
 movw   $0x0,-0x56(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x288(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager27GetArrayTempGuildMemberListEv>
 mov    %eax,-0x30(%ebp)
 movl   $0x4c2c,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    -0x34(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x50(%edx),%ecx
 lea    -0x56(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    -0x30(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0xfb>
 mov    -0x34(%ebp),%eax
 mov    0xe(%eax),%esi
 mov    -0x34(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x362,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Query All Guild Member List Error g(%d), c(%d)\n",0x8(%esp)
 movl   $"./log/GuildMemberErr",0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c9>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3ca>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
 mov    %eax,-0x2c(%ebp)
 movzwl -0x56(%ebp),%eax
 movzwl %ax,%edx
 imul   $0x6059,%edx,%edx
 shr    $0x10,%edx
 sub    %dx,%ax
 shr    $1,%ax
 add    %edx,%eax
 shr    $0x6,%ax
 movzwl %ax,%eax
 mov    %eax,-0x28(%ebp)
 movzwl -0x56(%ebp),%ecx
 movzwl %cx,%eax
 imul   $0x6059,%eax,%eax
 shr    $0x10,%eax
 mov    %ecx,%edx
 sub    %ax,%dx
 shr    $1,%dx
 lea    (%edx,%eax,1),%eax
 mov    %eax,%edx
 shr    $0x6,%dx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 mov    %eax,%edx
 shl    $0x5,%edx
 sub    %ax,%dx
 mov    %ecx,%eax
 sub    %dx,%ax
 mov    %eax,%edx
 movzwl %dx,%eax
 mov    %eax,-0x24(%ebp)
 movl   $0x0,-0x20(%ebp)
 jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x206>
 cmpl   $0x0,-0x20(%ebp)
 jne    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x187>
 movb   $0x0,-0x17f5(%ebp)
 jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x18e>
 movb   $0x1,-0x17f5(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 jne    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x1af>
 mov    -0x20(%ebp),%eax
 add    $0x1,%eax
 imul   $0x5d,%eax,%edx
 movzwl -0x56(%ebp),%eax
 movzwl %ax,%eax
 cmp    %eax,%edx
 jne    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x1af>
 movb   $0x2,-0x17f5(%ebp)
 movb   $0x5d,-0x17f4(%ebp)
 mov    -0x20(%ebp),%eax
 imul   $0x179d,%eax,%eax
 add    -0x30(%ebp),%eax
+lea    -0x1807(%ebp),%edx
+add    $0x14,%edx
 movl   $0x179d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x1807(%ebp),%eax
-add    $0x14,%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <memcpy>
 movzwl -0x1805(%ebp),%eax
 movzwl %ax,%edx
 lea    -0x1807(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
 addl   $0x1,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 cmp    -0x28(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x178>
 cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x296>
+je     <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x297>
 movb   $0x2,-0x17f5(%ebp)
 mov    -0x24(%ebp),%eax
 mov    %al,-0x17f4(%ebp)
 mov    -0x24(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
-lea    (%eax,%edx,1),%edx
+add    %edx,%eax
+mov    %eax,%edx
 mov    -0x20(%ebp),%eax
 imul   $0x179d,%eax,%eax
 add    -0x30(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x1807(%ebp),%eax
-add    $0x14,%eax
-mov    %eax,(%esp)
+lea    -0x1807(%ebp),%ecx
+add    $0x14,%ecx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
 call   <T> <memcpy>
 mov    -0x24(%ebp),%eax
 mov    %eax,%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    $0x14,%eax
 mov    %ax,-0x1805(%ebp)
 movzwl -0x1805(%ebp),%eax
 movzwl %ax,%edx
 lea    -0x1807(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
 movzwl -0x56(%ebp),%eax
 movzwl %ax,%edi
 mov    -0x34(%ebp),%eax
 mov    0xe(%eax),%esi
 mov    -0x34(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x38b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Query All Guild Member List g(%d), c(%d), tot(%d)\n",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c9>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3ca>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x36c>
+jne    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x36d>
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
 movl   $0x38f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnQueryGuildAllMembersProxy() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x365>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x366>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c9>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3ca>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x394,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnQueryGuildAllMembersProxy() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c1>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c2>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c9>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3ca>
 nop
 add    $0x181c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnQueryGuildAllMembersProxy(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  Packet_DB_Reply_Guild_All_Members local_180b [2];
  ushort local_1809;
  undefined4 local_1801;
  undefined4 local_17fd;
  undefined1 local_17f9;
  undefined1 local_17f8;
  undefined1 auStack_17f7 [6045];
  ushort local_5a;
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [24];
  PacketHeader *local_38;
  STGuildMemberProxy *local_34;
  CGuildServer *local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  
  if (m_pclApp != 0) {
    local_38 = param_1;
    Packet_DB_Reply_Guild_All_Members::Packet_DB_Reply_Guild_All_Members(local_180b);
    local_1801 = *(undefined4 *)(local_38 + 10);
    local_17fd = *(undefined4 *)(local_38 + 0xe);
    local_5a = 0;
    local_34 = (STGuildMemberProxy *)
               CGuildManager::GetArrayTempGuildMemberList(*(CGuildManager **)(m_pclApp + 0x288));
    memset(local_34,0,0x4c2c);
                    /* try { // try from 08095b20 to 08095d6a has its CatchHandler @ 08095d70 */
    cVar3 = CDBManager::_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt
                      ((CDBManager *)(m_pclApp + 0x50),*(uint *)(local_38 + 10),local_34,&local_5a);
    if (cVar3 == '\x01') {
      local_30 = (CGuildServer *)
                 CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18));
      local_2c = (uint)(local_5a / 0x5d);
      local_28 = (uint)(ushort)(local_5a +
                               ((ushort)((uint)((ushort)(local_5a -
                                                        (short)((uint)local_5a * 0x6059 >> 0x10)) >>
                                               1) + ((uint)local_5a * 0x6059 >> 0x10)) >> 6) * -0x5d
                               );
      for (local_24 = 0; local_24 < (int)local_2c; local_24 = local_24 + 1) {
        local_17f9 = local_24 != 0;
        if ((local_28 == 0) && ((local_24 + 1) * 0x5d - (uint)local_5a == 0)) {
          local_17f9 = 2;
        }
        local_17f8 = 0x5d;
        memcpy(auStack_17f7,local_34 + local_24 * 0x179d,0x179d);
        CGuildServer::SendToServer(local_30,(char *)local_180b,(uint)local_1809);
      }
      if (local_28 != 0) {
        local_17f9 = 2;
        local_17f8 = (undefined1)local_28;
        memcpy(auStack_17f7,local_34 + local_24 * 0x179d,local_28 * 0x41);
        local_1809 = (short)(local_28 << 6) + (short)local_28 + 0x14;
        CGuildServer::SendToServer(local_30,(char *)local_180b,(uint)local_1809);
      }
      uVar4 = (uint)local_5a;
      uVar1 = *(undefined4 *)(local_38 + 0xe);
      uVar2 = *(undefined4 *)(local_38 + 10);
      CMyFileLog::CMyFileLog(local_50,"OnQueryGuildAllMembersProxy",0x38b);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_50,"./log/GuildModify","Query All Guild Member List g(%d), c(%d), tot(%d)\n",
                 uVar2,uVar1,uVar4);
    }
    else {
      uVar1 = *(undefined4 *)(local_38 + 0xe);
      uVar2 = *(undefined4 *)(local_38 + 10);
      CMyFileLog::CMyFileLog(local_58,"OnQueryGuildAllMembersProxy",0x362);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_58,"./log/GuildMemberErr","Query All Guild Member List Error g(%d), c(%d)\n",
                 uVar2,uVar1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2535 行）：

```cpp
void CPacketTranslater::OnQueryGuildAllMembersProxy(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        Packet_DB_Call_Guild_All_Members* pkt =
            (Packet_DB_Call_Guild_All_Members*)header;
        Packet_DB_Reply_Guild_All_Members reply;
        reply.m_fieldA = pkt->m_fieldA;
        reply.m_fieldE = pkt->m_fieldE;
        unsigned short tot = 0;
        STGuildMemberProxy* temp = m_pclApp->m_guildManager->GetArrayTempGuildMemberList();
        memset(temp, 0, 0x4c2c);
        if (!m_pclApp->m_dbManager.QueryGuildAllMembersProxy(pkt->m_fieldA, temp, tot))
        {
            DNF_LOG_SCOPE_LINE(0x362,
                "./log/GuildMemberErr",
                "Query All Guild Member List Error g(%d), c(%d)\n", pkt->m_fieldA,
                pkt->m_fieldE
            );

            return;
        }
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        int pages = tot / 0x5d;
        int remain = tot % 0x5d;
        int i = 0;
        for (; i < pages; i++)
        {
            if (i == 0)
                reply.m_flag = 0;
            else
                reply.m_flag = 1;
            if (remain == 0 && (i + 1) * 0x5d == (int)tot)
                reply.m_flag = 2;
            reply.m_count = 0x5d;
            memcpy((char*)&reply + 0x14, (char*)temp + i * 0x179d, 0x179d);
            gs->SendToServer((char*)&reply, reply.packetSize);
        }
        if (remain != 0)
        {
            reply.m_flag = 2;
            reply.m_count = (unsigned char)remain;
            memcpy((char*)&reply + 0x14, (char*)temp + i * 0x179d,
                   remain * 0x41);
            reply.packetSize = (unsigned short)(remain * 0x41 + 0x14);
            gs->SendToServer((char*)&reply, reply.packetSize);
        }
        DNF_LOG_SCOPE_LINE(0x38b,
            "./log/GuildModify",
            "Query All Guild Member List g(%d), c(%d), tot(%d)\n", pkt->m_fieldA,
            pkt->m_fieldE,
            tot
        );

    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnQueryGuildAllMembersProxy() Exception Break",
                  0x38f, 0x394);
}
```
