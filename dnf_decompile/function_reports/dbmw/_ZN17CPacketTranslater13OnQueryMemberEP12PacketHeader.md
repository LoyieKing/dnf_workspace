# _ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader

`CPacketTranslater::OnQueryMember(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80940b4` | `0x21b` | `0x8080432` | `0x206` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,140 +1,133 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x200,%esp
 lea    -0x1f5(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_DB_Reply_Query_MemberC1Ev>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader+0x210>
+je     <T> <_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader+0x1fc>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x18(%ebp)
 mov    -0x18(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x1ea(%ebp)
 mov    -0x18(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x50(%edx),%ecx
 lea    -0x1f5(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader+0xa4>
-mov    -0x18(%ebp),%eax
-mov    0xa(%eax),%ebx
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader+0x1fc>
 movl   $0x117,0x8(%esp)
 movl   $"OnQueryMember",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x18(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnQueryMember() Error, member_id(%d)",0x8(%esp)
 movl   $"./log/QueryErr",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
 mov    %eax,-0x14(%ebp)
-movzbl -0x1b7(%ebp),%eax
-movzbl %al,%edx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-sub    %dx,%ax
+lea    -0x1f5(%ebp),%eax
+add    $0x3e,%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+imul   $0x27,%eax,%eax
 add    $0x3f,%eax
-mov    %ax,-0x1f3(%ebp)
-movzwl -0x1f3(%ebp),%eax
-movzwl %ax,%eax
 mov    %eax,-0x10(%ebp)
 lea    -0x1f5(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader+0x211>
+jmp    <T> <_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader+0x1fc>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader+0x1a8>
+jne    <T> <_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader+0x196>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnQueryMember() Exception Break : %s\n",(%esp)
 call   <T> <printf>
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
 movl   $0x124,0x8(%esp)
 movl   $"OnQueryMember",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnQueryMember() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader+0x1a1>
+jmp    <T> <_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader+0x18f>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader+0x211>
+jmp    <T> <_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader+0x1fc>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnQueryMember() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x12a,0x8(%esp)
 movl   $"OnQueryMember",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnQueryMember() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader+0x209>
+jmp    <T> <_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader+0x1f7>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader+0x211>
-nop
 add    $0x200,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnQueryMember(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader(PacketHeader *param_1)

{
  undefined4 uVar1;
  char cVar2;
  Packet_DB_Reply_Query_Member local_1f9 [2];
  ushort local_1f7;
  undefined4 local_1ee;
  byte local_1bb;
  CMyFileLog local_34 [24];
  PacketHeader *local_1c;
  CMonitorServer *local_18;
  uint local_14;
  
  Packet_DB_Reply_Query_Member::Packet_DB_Reply_Query_Member(local_1f9);
  if (m_pclApp != 0) {
    local_1c = param_1;
    local_1ee = *(undefined4 *)(param_1 + 10);
                    /* try { // try from 0809410c to 080941b4 has its CatchHandler @ 080941ba */
    cVar2 = CDBManager::_ZN10CDBManager11QueryMemberEjR28Packet_DB_Reply_Query_Member
                      ((CDBManager *)(m_pclApp + 0x50),*(uint *)(param_1 + 10),local_1f9);
    if (cVar2 != '\x01') {
      uVar1 = *(undefined4 *)(local_1c + 10);
      CMyFileLog::CMyFileLog(local_34,"OnQueryMember",0x117);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_34,"./log/QueryErr","CPacketTranslater::OnQueryMember() Error, member_id(%d)"
                 ,uVar1);
    }
    local_18 = (CMonitorServer *)
               CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
    local_1f7 = (((ushort)local_1bb * 4 + (ushort)local_1bb) * 8 - (ushort)local_1bb) + 0x3f;
    local_14 = (uint)local_1f7;
    CMonitorServer::SendToServer(local_18,(char *)local_1f9,local_14);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 938 行）：

```cpp
void CPacketTranslater::OnQueryMember(PacketHeader* header)
{
    try
    {
        Packet_DB_Reply_Query_Member reply;
        if (m_pclApp)
        {
            Packet_DBMW_Query_Member* pkt = (Packet_DBMW_Query_Member*)header;
            reply.m_fieldB = pkt->m_characNo;
            if (!m_pclApp->m_dbManager.QueryMember(
                    pkt->m_characNo, reply))
            {
                CMyFileLog log("OnQueryMember", 0x117);
                log("./log/QueryErr",
                    "CPacketTranslater::OnQueryMember() Error, member_id(%d)",
                    pkt->m_characNo);
                CMonitorServer* ms =
                    m_pclApp->m_serverHandler->GetMonitorServer();
                int size =
                    *(unsigned char*)((char*)&reply + 0x3e) * 0x27 + 0x3f;
                ms->SendToServer((char*)&reply, size);
            }
        }
    }
    DNF_CATCH_LOG_PRINTF("./log/Except",
                         "CPacketTranslater::OnQueryMember() Exception Break",
                         0x124, 0x12a);
}
```
