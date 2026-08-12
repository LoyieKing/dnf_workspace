# _ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader

`CPacketTranslater::OnQueryGuild(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80936ea` | `0x3ae` | `0x80d8dc0` | `0x3ac` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,229 +1,231 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x1a0,%esp
-lea    -0x179(%ebp),%eax
+lea    -0x181(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN27Packet_DB_Reply_Query_GuildC1Ev>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x3a3>
+je     <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x3a1>
 mov    0x8(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    0xf(%eax),%eax
 mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    %eax,-0x16e(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xf(%eax),%eax
-mov    %eax,-0x16a(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xb(%eax),%edx
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
-lea    0x50(%ecx),%ebx
-lea    -0x179(%ebp),%ecx
-mov    %ecx,0xc(%esp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ebx,(%esp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x50(%edx),%ecx
+lea    -0x181(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x18(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0xcc>
-movzbl -0x16f(%ebp),%eax
-movzbl %al,%esi
-mov    -0x16e(%ebp),%ebx
+je     <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0xc5>
+movzbl -0x177(%ebp),%eax
+movsbl %al,%ebx
 movl   $0x56,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnQueryGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x10(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnQueryGuild()\tGuild Id : %d, \t Query Result : %d\n",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x3a2>
+mov    -0x1c(%ebp),%eax
+movzbl 0xa(%eax),%eax
+movzbl %al,%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x50(%edx),%ecx
+lea    -0x181(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x18(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
+call   <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x14c>
+movzbl -0x177(%ebp),%eax
+movsbl %al,%ebx
+movl   $0x5b,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater12OnQueryGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnQueryGuild()\tGuild Id : %d,\t Query Result : %d\n",0x8(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnQueryGuild()\tGuild Id : %d, \t Query Result : %d\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x14(%ebp),%eax
-mov    0xb(%eax),%edx
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
-lea    0x50(%ecx),%ebx
-lea    -0x179(%ebp),%ecx
-mov    %ecx,0xc(%esp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ebx,(%esp)
-call   <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x154>
-movzbl -0x16f(%ebp),%eax
-movzbl %al,%esi
-mov    -0x16e(%ebp),%ebx
-movl   $0x5b,0x8(%esp)
+jmp    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x3a2>
+mov    -0x1c(%ebp),%eax
+add    $0xbe,%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x50(%edx),%ecx
+lea    -0x181(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x18(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
+call   <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x1d7>
+movzbl -0x177(%ebp),%eax
+movsbl %al,%ebx
+movl   $0x60,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnQueryGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnQueryGuild()\tGuild Id : %d,\t Query Result : %d\n",0x8(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnQueryGuild()\tGuild Id : %d, \t Query Result : %d\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x14(%ebp),%eax
-mov    0xb(%eax),%edx
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
-lea    0x50(%ecx),%ebx
-lea    -0x179(%ebp),%ecx
-mov    %ecx,0xc(%esp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ebx,(%esp)
-call   <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x1dc>
-movzbl -0x16f(%ebp),%eax
-movzbl %al,%esi
-mov    -0x16e(%ebp),%ebx
-movl   $0x60,0x8(%esp)
+jmp    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x3a2>
+mov    -0x1c(%ebp),%eax
+add    $0xbe,%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x50(%edx),%ecx
+lea    -0x181(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x18(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
+call   <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x262>
+movzbl -0x177(%ebp),%eax
+movsbl %al,%ebx
+movl   $0x65,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnQueryGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnQueryGuild()\tGuild Id : %d,\t Query Result : %d\n",0x8(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnQueryGuild()\tGuild Id : %d, \t Query Result : %d\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x14(%ebp),%eax
-mov    0xb(%eax),%edx
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
-lea    0x50(%ecx),%ebx
-lea    -0x179(%ebp),%ecx
-mov    %ecx,0xc(%esp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ebx,(%esp)
-call   <T> <_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x264>
-movzbl -0x16f(%ebp),%eax
-movzbl %al,%esi
-mov    -0x16e(%ebp),%ebx
-movl   $0x65,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater12OnQueryGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnQueryGuild()\tGuild Id : %d,\t Query Result : %d\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x3a2>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
 mov    %eax,-0x10(%ebp)
-lea    -0x179(%ebp),%eax
+lea    -0x181(%ebp),%eax
 movl   $0x135,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x3a4>
+jmp    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x3a2>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x33b>
+jne    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x339>
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
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnQueryGuild() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x74,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnQueryGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnQueryGuild() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x334>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x332>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x3a4>
+jmp    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x3a2>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnQueryGuild() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x7a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnQueryGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnQueryGuild() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x39c>
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x39a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x3a4>
+jmp    <T> <_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader+0x3a2>
 nop
 add    $0x1a0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnQueryGuild(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader(PacketHeader *param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  Packet_DB_Reply_Query_Guild local_17d [10];
  byte local_173;
  undefined4 local_172;
  undefined4 local_16e;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  PacketHeader *local_18;
  CGuildServer *local_14;
  
  Packet_DB_Reply_Query_Guild::Packet_DB_Reply_Query_Guild(local_17d);
  if (m_pclApp != 0) {
    local_18 = param_1;
    local_172 = *(undefined4 *)(param_1 + 0xb);
    local_16e = *(undefined4 *)(param_1 + 0xf);
                    /* try { // try from 0809375c to 0809397d has its CatchHandler @ 08093983 */
    cVar2 = CDBManager::_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild
                      ((CDBManager *)(m_pclApp + 0x50),(uchar)param_1[10],*(uint *)(param_1 + 0xb),
                       local_17d);
    uVar1 = local_172;
    if (cVar2 != '\x01') {
      uVar3 = (uint)local_173;
      CMyFileLog::CMyFileLog(local_48,"OnQueryGuild",0x56);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_48,"./log/Except",
                 "CPacketTranslater::OnQueryGuild()\tGuild Id : %d,\t Query Result : %d\n",uVar1,
                 uVar3);
    }
    cVar2 = CDBManager::_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild
                      ((CDBManager *)(m_pclApp + 0x50),(uchar)local_18[10],*(uint *)(local_18 + 0xb)
                       ,local_17d);
    uVar1 = local_172;
    if (cVar2 != '\x01') {
      uVar3 = (uint)local_173;
      CMyFileLog::CMyFileLog(local_40,"OnQueryGuild",0x5b);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_40,"./log/Except",
                 "CPacketTranslater::OnQueryGuild()\tGuild Id : %d,\t Query Result : %d\n",uVar1,
                 uVar3);
    }
    cVar2 = CDBManager::_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild
                      ((CDBManager *)(m_pclApp + 0x50),(uchar)local_18[10],*(uint *)(local_18 + 0xb)
                       ,local_17d);
    uVar1 = local_172;
    if (cVar2 != '\x01') {
      uVar3 = (uint)local_173;
      CMyFileLog::CMyFileLog(local_38,"OnQueryGuild",0x60);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_38,"./log/Except",
                 "CPacketTranslater::OnQueryGuild()\tGuild Id : %d,\t Query Result : %d\n",uVar1,
                 uVar3);
    }
    cVar2 = CDBManager::_ZN10CDBManager21QueryGuildNotiMessageEhjR27Packet_DB_Reply_Query_Guild
                      ((CDBManager *)(m_pclApp + 0x50),(uchar)local_18[10],*(uint *)(local_18 + 0xb)
                       ,local_17d);
    uVar1 = local_172;
    if (cVar2 != '\x01') {
      CMyFileLog::CMyFileLog(local_30,"OnQueryGuild",0x65);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/Except",
                 "CPacketTranslater::OnQueryGuild()\tGuild Id : %d,\t Query Result : %d\n",uVar1,
                 (uint)local_173);
    }
    local_14 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18))
    ;
    CGuildServer::SendToServer(local_14,(char *)local_17d,0x135);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1021 行）：

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
            reply.m_fieldF = pkt->m_guildId;
            if (!m_pclApp->m_dbManager.QueryGuildMember(
                    pkt->m_serverId, pkt->m_guildId,
                    reply))
            {
                DNF_LOG_SCOPE_LINE(0x98,
                    "./log/Except",
                    "CPacketTranslater::OnQueryGuildMember() Query Error : %d, Char No : %d, Guild Id : %d", reply.m_fieldB, pkt->m_guildId,
                    reply.m_flag
                );

                m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
                    (char*)&reply, 0x2d);
            }
        }
    }
    DNF_CATCH_LOG_PRINTF("./log/Except",
                         "CPacketTranslater::OnQueryGuildMember() Exception Break",
                         0xa8, 0xae);
}
```
