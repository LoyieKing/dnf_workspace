# _ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader

`CPacketTranslater::OnQueryGuildMember(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8093a98` | `0x204` | `0x80d4074` | `0x201` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,138 +1,136 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x8c,%esp
 lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34Packet_DB_Reply_Query_Guild_MemberC1Ev>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x1f8>
+je     <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x1f6>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x24(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0xb(%eax),%eax
 mov    %eax,-0x5a(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0xb(%eax),%edx
 mov    -0x24(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 lea    0x50(%ecx),%ebx
 lea    -0x69(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0xbc>
 mov    -0x5e(%ebp),%edi
 mov    -0x24(%ebp),%eax
 mov    0xb(%eax),%esi
 movzbl -0x5f(%ebp),%eax
 movzbl %al,%ebx
 movl   $0x98,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnQueryGuildMember() Query Error : %d, Char No : %d, Guild Id : %d",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
 mov    %eax,-0x20(%ebp)
 lea    -0x69(%ebp),%eax
 movl   $0x2d,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x1f9>
+jmp    <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x1f6>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x190>
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
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnQueryGuildMember() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0xa8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnQueryGuildMember() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x189>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x1f9>
+jmp    <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x1f6>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnQueryGuildMember() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0xae,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnQueryGuildMember() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x1f1>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x1f9>
-nop
 add    $0x8c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnQueryGuildMember(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  char cVar2;
  Packet_DB_Reply_Query_Guild_Member local_6d [10];
  byte local_63;
  undefined4 local_62;
  undefined4 local_5e;
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  CGuildServer *local_24;
  
  Packet_DB_Reply_Query_Guild_Member::Packet_DB_Reply_Query_Guild_Member(local_6d);
  if (m_pclApp != 0) {
    local_28 = param_1;
    local_5e = *(undefined4 *)(param_1 + 0xb);
                    /* try { // try from 08093af6 to 08093b80 has its CatchHandler @ 08093b86 */
    cVar2 = CDBManager::_ZN10CDBManager16QueryGuildMemberEhjR34Packet_DB_Reply_Query_Guild_Member
                      ((CDBManager *)(m_pclApp + 0x50),(uchar)param_1[10],*(uint *)(param_1 + 0xb),
                       local_6d);
    if (cVar2 != '\x01') {
      uVar1 = *(undefined4 *)(local_28 + 0xb);
      CMyFileLog::CMyFileLog(local_40,"OnQueryGuildMember",0x98);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_40,"./log/Except",
                 "CPacketTranslater::OnQueryGuildMember() Query Error : %d, Char No : %d, Guild Id : %d"
                 ,(uint)local_63,uVar1,local_62);
    }
    local_24 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18))
    ;
    CGuildServer::SendToServer(local_24,(char *)local_6d,0x2d);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1131 行）：

```cpp
void CPacketTranslater::OnQueryGuildMember(PacketHeader* header)
{
    try
    {
        Packet_DB_Reply_Query_Guild_Member reply;
        if (m_pclApp)
        {
            Packet_DBMW_Query_Guild_Member* pkt =
                (Packet_DBMW_Query_Guild_Member*)header;
            reply.m_characNo = pkt->m_characNo;
            if (!m_pclApp->m_dbManager.QueryGuildMember(
                    pkt->m_serverId, pkt->m_characNo,
                    reply))
            {
                DNF_LOG_SCOPE_LINE(0x98,
                "./log/Except",
                "CPacketTranslater::OnQueryGuildMember() Query Error : %d, Char No : %d, Guild Id : %d", (unsigned char)reply.m_flag, pkt->m_characNo,
                reply.m_guildId
            );
            }
            CGuildServer* gs =
                m_pclApp->m_serverHandler->GetGuildServer();
            gs->SendToServer((char*)&reply, 0x2d);
        }
    }
    DNF_CATCH_LOG_PRINTF("./log/Except",
                         "CPacketTranslater::OnQueryGuildMember() Exception Break",
                         0xa8, 0xae);
}
```
