# _ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader

`CPacketTranslater::OnGuildMasterDelegate(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8097810` | `0x336` | `0x80cfe28` | `0x32a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,212 +1,212 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xbc,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x32a>
+je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31b>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x24(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x32b>
+je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31e>
 lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37Packet_DB_Reply_Guild_Master_DelegateC1Ev>
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x7a(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,-0x76(%ebp)
 mov    -0x24(%ebp),%eax
 add    $0x13,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x84(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 movb   $0x0,-0x45(%ebp)
 movl   $0x0,-0x4c(%ebp)
 mov    -0x24(%ebp),%eax
 lea    0x13(%eax),%esi
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%edx
 mov    -0x24(%ebp),%eax
 movzbl 0x12(%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 lea    0x50(%ecx),%ebx
 lea    -0x4c(%ebp),%ecx
 mov    %ecx,0x18(%esp)
 lea    -0x84(%ebp),%ecx
 add    $0x12,%ecx
 mov    %ecx,0x14(%esp)
 lea    -0x45(%ebp),%ecx
 mov    %ecx,0x10(%esp)
 mov    %esi,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_>
+movl   $0x0,-0x20(%ebp)
 movzbl -0x45(%ebp),%eax
 cmp    $0x2,%al
-je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0xdd>
-movl   $0x56,-0x50(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b0>
+jne    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1a9>
 mov    -0x72(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0xeb>
+je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0xea>
 mov    -0x4c(%ebp),%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0xf7>
-movl   $0x22,-0x50(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b0>
+movl   $0x22,-0x20(%ebp)
+nop
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b3>
 mov    -0x24(%ebp),%eax
 add    $0x13,%eax
-mov    %eax,-0x90(%ebp)
+mov    %eax,-0x8c(%ebp)
 mov    -0x72(%ebp),%edi
 mov    -0x4c(%ebp),%esi
 mov    -0x24(%ebp),%eax
 mov    0xe(%eax),%ebx
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%ecx
 mov    -0x24(%ebp),%eax
 movzbl 0x12(%eax),%eax
 movzbl %al,%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x50,%eax
 mov    %eax,-0x9c(%ebp)
-mov    -0x90(%ebp),%eax
+mov    -0x8c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    -0x9c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager19GuildMasterDelegateEijjjjPc>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1a9>
+je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b2>
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x628,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"OnGuildMasterDelegate Err(%d) : return false",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x2,-0x50(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b0>
-movl   $0x0,-0x50(%ebp)
+movl   $0x2,-0x20(%ebp)
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b3>
+movl   $0x56,-0x20(%ebp)
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b3>
+nop
+movzwl -0x82(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x84(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
-mov    %eax,-0x20(%ebp)
-movzwl -0x82(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x84(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-mov    -0x50(%ebp),%edi
-mov    -0x24(%ebp),%eax
-add    $0x13,%eax
-mov    %eax,-0x8c(%ebp)
+mov    -0x24(%ebp),%eax
+lea    0x13(%eax),%edi
 mov    -0x24(%ebp),%eax
 mov    0xe(%eax),%esi
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x636,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x18(%esp)
-mov    -0x8c(%ebp),%eax
-mov    %eax,0x14(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"::OnGuildMasterDelegate g(%d) delegater(%d) delegatee(%s) r(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31f>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x2ce>
+jne    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x2bf>
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
 movl   $0x63b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildMasterDelegate() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x2c7>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x2b8>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31f>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x640,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildMasterDelegate() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x323>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x314>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31f>
+nop
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31f>
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

/* CPacketTranslater::OnGuildMasterDelegate(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  PacketHeader *pPVar5;
  Packet_DB_Reply_Guild_Master_Delegate local_88 [2];
  ushort local_86;
  undefined4 local_7e;
  undefined4 local_7a;
  uint local_76;
  undefined1 auStack_72 [30];
  undefined4 local_54;
  uint local_50;
  uchar local_49;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  CGuildServer *local_24;
  
  if ((m_pclApp != 0) && (local_28 = param_1, *(int *)(param_1 + 10) != 0)) {
    Packet_DB_Reply_Guild_Master_Delegate::Packet_DB_Reply_Guild_Master_Delegate(local_88);
    local_7e = *(undefined4 *)(local_28 + 10);
    local_7a = *(undefined4 *)(local_28 + 0xe);
    memcpy(auStack_72,local_28 + 0x13,0x1d);
    local_49 = '\0';
    local_50 = 0;
                    /* try { // try from 080978d4 to 08097a5c has its CatchHandler @ 08097a62 */
    CDBManager::_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_
              ((CDBManager *)(m_pclApp + 0x50),(uchar)local_28[0x12],*(uint *)(local_28 + 10),
               (char *)(local_28 + 0x13),&local_49,&local_76,&local_50);
    if (local_49 == '\x02') {
      if ((local_76 == 0) || (local_50 == 0)) {
        local_54 = 0x22;
      }
      else {
        cVar4 = CDBManager::_ZN10CDBManager19GuildMasterDelegateEijjjjPc
                          ((CDBManager *)(m_pclApp + 0x50),(uint)(byte)local_28[0x12],
                           *(uint *)(local_28 + 10),*(uint *)(local_28 + 0xe),local_50,local_76,
                           (char *)(local_28 + 0x13));
        if (cVar4 == '\x01') {
          local_54 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(local_28 + 10);
          CMyFileLog::CMyFileLog(local_48,"OnGuildMasterDelegate",0x628);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_48,"./log/GuildModify","OnGuildMasterDelegate Err(%d) : return false",
                     uVar1);
          local_54 = 2;
        }
      }
    }
    else {
      local_54 = 0x56;
    }
    local_24 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18))
    ;
    CGuildServer::SendToServer(local_24,(char *)local_88,(uint)local_86);
    uVar3 = local_54;
    pPVar5 = local_28 + 0x13;
    uVar1 = *(undefined4 *)(local_28 + 0xe);
    uVar2 = *(undefined4 *)(local_28 + 10);
    CMyFileLog::CMyFileLog(local_40,"OnGuildMasterDelegate",0x636);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/GuildModify",
               "::OnGuildMasterDelegate g(%d) delegater(%d) delegatee(%s) r(%d)",uVar2,uVar1,pPVar5,
               uVar3);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 203 行）：

```cpp
void CPacketTranslater::OnGuildMasterDelegate(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DB_Request_Guild_Master_Delegate_View* pkt =
            (Packet_DB_Request_Guild_Master_Delegate_View*)header;
        if (pkt->m_guildId == 0)
            return;
        Packet_DB_Reply_Guild_Master_Delegate reply;
        reply.m_fieldA = pkt->m_guildId;
        reply.m_fieldE = pkt->m_oldMasterNo;
        memcpy((char*)&reply + 0x16, pkt->m_name, 0x1d);
        unsigned char grade = 0;
        unsigned int result = 0;
        m_pclApp->m_dbManager.QueryGuildMemberGradeByName(
            pkt->m_serverId, pkt->m_guildId, pkt->m_name,
            grade, *(unsigned int*)((char*)&reply + 0x12), result);
        int resultCode = 0;
        if (grade == 2)
        {
            if (reply.m_field12 == 0 || result == 0)
            {
                resultCode = 0x22;
            }
            else if (!m_pclApp->m_dbManager.GuildMasterDelegate(
                         (unsigned int)pkt->m_serverId,
                         pkt->m_guildId, pkt->m_oldMasterNo,
                         result, reply.m_field12,
                         pkt->m_name))
            {
                DNF_LOG_SCOPE_LINE(0x628,
                    "./log/GuildModify",
                    "OnGuildMasterDelegate Err(%d) : return false",
                    pkt->m_guildId
                );

                resultCode = 2;
            }
        }
        else
        {
            resultCode = 0x56;
        }
        m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
            (char*)&reply, reply.packetSize);
        DNF_LOG_SCOPE_LINE(0x636,
            "./log/GuildModify",
            "::OnGuildMasterDelegate g(%d) delegater(%d) delegatee(%s) r(%d)",
            pkt->m_guildId,
            pkt->m_oldMasterNo,
            pkt->m_name,
            resultCode
        );

    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnGuildMasterDelegate() Exception Break",
                  0x63b, 0x640);
}
```
