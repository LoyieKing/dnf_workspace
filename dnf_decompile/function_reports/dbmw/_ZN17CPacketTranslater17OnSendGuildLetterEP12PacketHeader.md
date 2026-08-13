# _ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader

`CPacketTranslater::OnSendGuildLetter(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80967ee` | `0x335` | `0x80d02b6` | `0x33b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,207 +1,209 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xa0,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32a>
+je     <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32d>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0xf(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32b>
+je     <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x330>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
 mov    %eax,-0x10(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0x124(%eax),%eax
 cmp    $0x1,%eax
 jne    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0xf9>
 mov    -0x14(%ebp),%eax
 lea    0x13(%eax),%esi
 mov    -0x14(%ebp),%eax
 lea    0x113(%eax),%ebx
 mov    -0x14(%ebp),%eax
 mov    0xf(%eax),%edx
 mov    -0x14(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 add    $0x50,%ecx
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 movl   $0x1,0x14(%esp)
 movl   $0x0,0x10(%esp)
 movl   $0x1,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x1c8>
 mov    -0x14(%ebp),%eax
 mov    0xf(%eax),%ebx
 movl   $0x4da,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"AwardGuildItemByMail Err(%d) : return false",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x331>
 mov    -0x14(%ebp),%eax
 mov    0x124(%eax),%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x1c8>
 mov    -0x14(%ebp),%eax
 lea    0x13(%eax),%ebx
 mov    -0x14(%ebp),%eax
 mov    0xf(%eax),%edx
 mov    -0x14(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 add    $0x50,%ecx
 mov    %ebx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager15SendGuildLetterEijPc>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x18a>
 mov    -0x14(%ebp),%eax
 mov    0xf(%eax),%ebx
 movl   $0x4e2,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"OnSendGuildLetter Err(%d) : return false",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x331>
 lea    -0x4f(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_DBMW_Reply_Guild_MailC1Ev>
 mov    -0x14(%ebp),%eax
 mov    0xf(%eax),%eax
 mov    %eax,-0x41(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x45(%ebp)
 movb   $0x0,-0x3d(%ebp)
 movzwl -0x4d(%ebp),%eax
 movzwl %ax,%edx
 lea    -0x4f(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-lea    -0x82(%ebp),%eax
+lea    -0x86(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Notice_Guild_Mail_ArrivedC1Ev>
+movb   $0x1,-0x7c(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0xf(%eax),%eax
-mov    %eax,-0x77(%ebp)
-movb   $0x1,-0x78(%ebp)
-movzwl -0x80(%ebp),%eax
+mov    %eax,-0x7b(%ebp)
+movzwl -0x84(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x82(%ebp),%eax
+lea    -0x86(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
 mov    -0x14(%ebp),%eax
 lea    0x13(%eax),%esi
 mov    -0x14(%ebp),%eax
 mov    0xf(%eax),%ebx
 movl   $0x507,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Guild(%d) Message(%s)",0x8(%esp)
 movl   $"./log/GuildMail",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x331>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x2ce>
+jne    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x2d1>
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
 movl   $0x50c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnSendGuildLetter() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x2c7>
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x2ca>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x331>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x511,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSendGuildLetter() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x323>
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x326>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x331>
+nop
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x331>
 nop
 add    $0xa0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnSendGuildLetter(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader *pPVar1;
  undefined4 uVar2;
  char cVar3;
  Packet_Notice_Guild_Mail_Arrived local_86 [2];
  ushort local_84;
  undefined1 local_7c;
  undefined4 local_7b;
  Packet_DBMW_Reply_Guild_Mail local_53 [2];
  ushort local_51;
  undefined4 local_49;
  undefined4 local_45;
  undefined1 local_41;
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  PacketHeader *local_18;
  CGuildServer *local_14;
  
  if ((m_pclApp != 0) && (local_18 = param_1, *(int *)(param_1 + 0xf) != 0)) {
    local_14 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18))
    ;
    if (*(int *)(local_18 + 0x124) == 1) {
                    /* try { // try from 08096892 to 08096a3a has its CatchHandler @ 08096a40 */
      cVar3 = CDBManager::_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_
                        ((CDBManager *)(m_pclApp + 0x50),(uint)(byte)local_18[0xe],
                         *(uint *)(local_18 + 0xf),1,0,1,(char *)(local_18 + 0x113),
                         (char *)(local_18 + 0x13));
      if (cVar3 != '\x01') {
        uVar2 = *(undefined4 *)(local_18 + 0xf);
        CMyFileLog::CMyFileLog(local_40,"OnSendGuildLetter",0x4da);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_40,"./log/GuildModify","AwardGuildItemByMail Err(%d) : return false",uVar2)
        ;
        return;
      }
    }
    else if (*(int *)(local_18 + 0x124) == -1) {
      cVar3 = CDBManager::_ZN10CDBManager15SendGuildLetterEijPc
                        ((CDBManager *)(m_pclApp + 0x50),(uint)(byte)local_18[0xe],
                         *(uint *)(local_18 + 0xf),(char *)(local_18 + 0x13));
      if (cVar3 != '\x01') {
        uVar2 = *(undefined4 *)(local_18 + 0xf);
        CMyFileLog::CMyFileLog(local_38,"OnSendGuildLetter",0x4e2);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_38,"./log/GuildModify","OnSendGuildLetter Err(%d) : return false",uVar2);
        return;
      }
      Packet_DBMW_Reply_Guild_Mail::Packet_DBMW_Reply_Guild_Mail(local_53);
      local_45 = *(undefined4 *)(local_18 + 0xf);
      local_49 = *(undefined4 *)(local_18 + 10);
      local_41 = 0;
      CGuildServer::SendToServer(local_14,(char *)local_53,(uint)local_51);
    }
    Packet_Notice_Guild_Mail_Arrived::Packet_Notice_Guild_Mail_Arrived(local_86);
    local_7b = *(undefined4 *)(local_18 + 0xf);
    local_7c = 1;
    CGuildServer::SendToServer(local_14,(char *)local_86,(uint)local_84);
    pPVar1 = local_18 + 0x13;
    uVar2 = *(undefined4 *)(local_18 + 0xf);
    CMyFileLog::CMyFileLog(local_30,"OnSendGuildLetter",0x507);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_30,"./log/GuildMail","Guild(%d) Message(%s)",uVar2,pPVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 247 行）：

```cpp
void CPacketTranslater::OnSendGuildLetter(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        struct SendGuildLetterLocal
        {
            char m_pad[0xa];       // +0x0
            unsigned int m_fieldA;   // +0xa
            unsigned char m_serverId; // +0xe
            unsigned int m_guildId;  // +0xf
            char m_content[0x100];   // +0x13
            char m_subject[0x11];    // +0x113
            int m_flag;              // +0x124
        } __attribute__((packed));
        SendGuildLetterLocal* pkt = (SendGuildLetterLocal*)header;
        if (pkt->m_guildId == 0)
            return;
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        if (pkt->m_flag == 1)
        {
            if (!m_pclApp->m_dbManager.SendGuildCoinByMail(
                    pkt->m_serverId, pkt->m_guildId,
                    1, 0, 1, pkt->m_subject, pkt->m_content))
            {
                DNF_LOG_SCOPE_LINE(0x4da,
                    "./log/GuildModify",
                    "AwardGuildItemByMail Err(%d) : return false",
                    pkt->m_guildId
                );

                return;
            }
        }
        else if (pkt->m_flag == -1)
        {
            if (!m_pclApp->m_dbManager.SendGuildLetter(
                    pkt->m_serverId, pkt->m_guildId, pkt->m_content))
            {
                DNF_LOG_SCOPE_LINE(0x4e2,
                    "./log/GuildModify",
                    "OnSendGuildLetter Err(%d) : return false",
                    pkt->m_guildId
                );

                return;
            }
            Packet_DBMW_Reply_Guild_Mail reply;
            reply.m_fieldE = pkt->m_guildId;
            reply.m_fieldA = pkt->m_fieldA;
            reply.m_field12 = 0;
            gs->SendToServer((char*)&reply, reply.packetSize);
        }
        Packet_Notice_Guild_Mail_Arrived notice;
        notice.m_fieldA = 1;
        notice.m_guildId = pkt->m_guildId;
        gs->SendToServer((char*)&notice, notice.packetSize);
        DNF_LOG_SCOPE_LINE(0x507,
            "./log/GuildMail",
            "Guild(%d) Message(%s)",
            pkt->m_guildId,
            pkt->m_content
        );

    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnSendGuildLetter() Exception Break",
                  0x50c, 0x511);
}
```
