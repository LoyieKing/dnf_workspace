# _ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader

`CPacketTranslater::OnChangeUnconnectedGuildMemberGrade(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809634e` | `0x368` | `0x80649c4` | `0x34e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,243 +1,244 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x9c,%esp
+sub    $0x8c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x35c>
+je     <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x342>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x24(%ebp)
 lea    -0x76(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN54Packet_DB_Monitor_Change_Unconnected_GuildMember_GradeC1Ev>
 mov    -0x24(%ebp),%eax
-mov    0xb(%eax),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x35d>
+je     <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x78>
 mov    -0x24(%ebp),%eax
 add    $0x14,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x76(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    -0x24(%ebp),%eax
-mov    0xb(%eax),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
 mov    %eax,-0x6c(%ebp)
 mov    -0x24(%ebp),%eax
-movzbl 0x32(%eax),%eax
+add    $0x32,%eax
+movzbl (%eax),%eax
 mov    %al,-0x46(%ebp)
 mov    -0x24(%ebp),%eax
-mov    0xf(%eax),%eax
+add    $0xf,%eax
+mov    (%eax),%eax
 mov    %eax,-0x68(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
 mov    %eax,-0x20(%ebp)
-movl   $0x0,-0x40(%ebp)
+movl   $0x0,-0x38(%ebp)
+lea    -0x76(%ebp),%eax
+lea    0x32(%eax),%edi
 mov    -0x24(%ebp),%eax
 lea    0x14(%eax),%esi
 mov    -0x24(%ebp),%eax
-mov    0xb(%eax),%edx
-mov    -0x24(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xb,%eax
+mov    (%eax),%edx
+mov    -0x24(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 lea    0x50(%ecx),%ebx
-lea    -0x40(%ebp),%ecx
+lea    -0x38(%ebp),%ecx
 mov    %ecx,0x18(%esp)
-lea    -0x76(%ebp),%ecx
-add    $0x32,%ecx
-mov    %ecx,0x14(%esp)
+mov    %edi,0x14(%esp)
 lea    -0x76(%ebp),%ecx
 add    $0x31,%ecx
 mov    %ecx,0x10(%esp)
 mov    %esi,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x109>
+je     <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x111>
 movb   $0xff,-0x46(%ebp)
 movzwl -0x74(%ebp),%eax
 movzwl %ax,%edx
 lea    -0x76(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x35d>
+jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x343>
 movzbl -0x45(%ebp),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x133>
-movzwl -0x74(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x76(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x35d>
+jne    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x13b>
+movzwl -0x74(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x76(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CGuildServer12SendToServerEPci>
+jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x343>
 movzbl -0x45(%ebp),%eax
 cmp    $0x2,%al
-je     <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x146>
-mov    -0x24(%ebp),%eax
-movzbl 0x32(%eax),%eax
+je     <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x1dd>
+mov    -0x24(%ebp),%eax
+add    $0x32,%eax
+movzbl (%eax),%eax
 cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x177>
-mov    -0x24(%ebp),%eax
-movzbl 0x13(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x161>
+mov    -0x24(%ebp),%eax
+add    $0x13,%eax
+movzbl (%eax),%eax
 cmp    $0x1,%al
-je     <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x177>
-movb   $0xfe,-0x46(%ebp)
-movzwl -0x74(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x76(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x35d>
-mov    -0x24(%ebp),%eax
-movzbl 0x32(%eax),%edx
-movzbl -0x45(%ebp),%eax
-cmp    %al,%dl
-jne    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x1a8>
-movzwl -0x74(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x76(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x35d>
+jne    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x1b7>
 mov    -0x24(%ebp),%eax
 lea    0x14(%eax),%esi
 mov    -0x24(%ebp),%eax
-movzbl 0x32(%eax),%eax
+add    $0x32,%eax
+movzbl (%eax),%eax
 movzbl %al,%ecx
 mov    -0x24(%ebp),%eax
-mov    0xb(%eax),%edx
-mov    -0x24(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xb,%eax
+mov    (%eax),%edx
+mov    -0x24(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ebx
 add    $0x50,%ebx
 mov    %esi,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN10CDBManager22ChangeGuildMemberGradeEhjhPc>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x1f9>
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x1e0>
 movb   $0xff,-0x46(%ebp)
-jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x35d>
-movzwl -0x74(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x76(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CGuildServer12SendToServerEPci>
-movzbl -0x45(%ebp),%eax
-movzbl %al,%edi
-mov    -0x24(%ebp),%eax
-movzbl 0x32(%eax),%eax
-movzbl %al,%esi
-mov    -0x24(%ebp),%eax
-add    $0x14,%eax
-mov    %eax,-0x7c(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xb(%eax),%ebx
+jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x1e1>
+movb   $0xfe,-0x46(%ebp)
+movzwl -0x74(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x76(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CGuildServer12SendToServerEPci>
+jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x343>
+nop
+jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x1e1>
+nop
+movzwl -0x74(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x76(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CGuildServer12SendToServerEPci>
 movl   $0x495,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    -0x7c(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzbl -0x45(%ebp),%eax
+movzbl %al,%ecx
+mov    -0x24(%ebp),%eax
+add    $0x32,%eax
+movzbl (%eax),%eax
+movzbl %al,%edx
+mov    -0x24(%ebp),%eax
+lea    0x14(%eax),%ebx
+mov    -0x24(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
+mov    %ecx,0x18(%esp)
+mov    %edx,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"::OnChangeUnconnectedGuildMemberGrade GRADE_CHANGE Guild(%d) UnConnected Name(%s) Grade(%d) Prev(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x35d>
+jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x343>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x300>
+jne    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x2e6>
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
 movl   $0x49a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnChangeUnconnectedGuildMemberGrade() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x2f9>
+jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x2df>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x35d>
+jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x343>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x49f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangeUnconnectedGuildMemberGrade() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x355>
+jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x33b>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x35d>
+jmp    <T> <_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x343>
 nop
-add    $0x9c,%esp
+add    $0x8c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnChangeUnconnectedGuildMemberGrade(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  undefined4 uVar2;
  char cVar3;
  PacketHeader *pPVar4;
  Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade local_7a [2];
  ushort local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [30];
  PacketHeader local_4a;
  PacketHeader local_49;
  uint auStack_48 [2];
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  CGuildServer *local_24;
  
  if (m_pclApp != 0) {
    local_28 = param_1;
    Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade::
    Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade(local_7a);
    if (*(int *)(local_28 + 0xb) != 0) {
      memcpy(auStack_68,local_28 + 0x14,0x1d);
      local_70 = *(undefined4 *)(local_28 + 0xb);
      local_4a = local_28[0x32];
      local_6c = *(undefined4 *)(local_28 + 0xf);
      local_24 = (CGuildServer *)
                 CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18));
      auStack_48[1] = 0;
                    /* try { // try from 08096425 to 080965cc has its CatchHandler @ 080965d2 */
      cVar3 = CDBManager::_ZN10CDBManager27QueryGuildMemberGradeByNameEhjPcRhRjS2_
                        ((CDBManager *)(m_pclApp + 0x50),(uchar)local_28[10],
                         *(uint *)(local_28 + 0xb),(char *)(local_28 + 0x14),(uchar *)&local_49,
                         auStack_48,auStack_48 + 1);
      if (cVar3 == '\x01') {
        if (local_49 == (PacketHeader)0x1) {
          CGuildServer::SendToServer(local_24,(char *)local_7a,(uint)local_78);
        }
        else if (((local_49 == (PacketHeader)0x2) || (local_28[0x32] == (PacketHeader)0x2)) &&
                (local_28[0x13] != (PacketHeader)0x1)) {
          local_4a = (PacketHeader)0xfe;
          CGuildServer::SendToServer(local_24,(char *)local_7a,(uint)local_78);
        }
        else if (local_28[0x32] == local_49) {
          CGuildServer::SendToServer(local_24,(char *)local_7a,(uint)local_78);
        }
        else {
          cVar3 = CDBManager::_ZN10CDBManager22ChangeGuildMemberGradeEhjhPc
                            ((CDBManager *)(m_pclApp + 0x50),(uchar)local_28[10],
                             *(uint *)(local_28 + 0xb),(uchar)local_28[0x32],
                             (char *)(local_28 + 0x14));
          if (cVar3 == '\x01') {
            CGuildServer::SendToServer(local_24,(char *)local_7a,(uint)local_78);
            PVar1 = local_28[0x32];
            pPVar4 = local_28 + 0x14;
            uVar2 = *(undefined4 *)(local_28 + 0xb);
            CMyFileLog::CMyFileLog(local_40,"OnChangeUnconnectedGuildMemberGrade",0x495);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_40,"./log/GuildModify",
                       "::OnChangeUnconnectedGuildMemberGrade GRADE_CHANGE Guild(%d) UnConnected Name(%s) Grade(%d) Prev(%d)"
                       ,uVar2,pPVar4,(uint)(byte)PVar1,(uint)(byte)local_49);
          }
        }
      }
      else {
        local_4a = (PacketHeader)0xff;
        CGuildServer::SendToServer(local_24,(char *)local_7a,(uint)local_78);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 6614 行）：

```cpp
void CPacketTranslater::OnChangeUnconnectedGuildMemberGrade(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade pkt;
        if (*(int*)(h + 0xb) != 0)
        {
            memcpy(pkt.m_pad, h + 0x14, 0x1d);
            pkt.m_fieldA = *(int*)(h + 0xb);
            pkt.m_field30 = *(unsigned char*)(h + 0x32);
            pkt.m_fieldE = *(int*)(h + 0xf);
        }
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        unsigned int result = 0;
        if (!m_pclApp->m_dbManager.QueryGuildMemberGradeByName(
                *(unsigned char*)(h + 0xa), *(unsigned int*)(h + 0xb),
                h + 0x14, pkt.m_field31,
                *(unsigned int*)((char*)&pkt + 0x32), result))
        {
            pkt.m_field30 = 0xff;
            gs->SendToServer((char*)&pkt, pkt.packetSize);
            return;
        }
        if (pkt.m_field31 == 1)
        {
            gs->SendToServer((char*)&pkt, pkt.packetSize);
            return;
        }
        if (pkt.m_field31 == 2)
            goto sendlog;
        if (*(unsigned char*)(h + 0x32) != 2 ||
            *(unsigned char*)(h + 0x13) == 1)
        {
            if (!m_pclApp->m_dbManager.ChangeGuildMemberGrade(
                    *(unsigned char*)(h + 0xa), *(unsigned int*)(h + 0xb),
                    *(unsigned char*)(h + 0x32), h + 0x14))
                pkt.m_field30 = 0xff;
        }
        else
        {
            pkt.m_field30 = 0xfe;
            gs->SendToServer((char*)&pkt, pkt.packetSize);
            return;
        }
    sendlog:
        gs->SendToServer((char*)&pkt, pkt.packetSize);
        CMyFileLog log(__FUNCTION__, 0x495);
        log("./log/GuildModify",
            "::OnChangeUnconnectedGuildMemberGrade GRADE_CHANGE Guild(%d) UnConnected Name(%s) Grade(%d) Prev(%d)",
            *(unsigned int*)(h + 0xb), h + 0x14,
            *(unsigned char*)(h + 0x32),
            pkt.m_field31);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnChangeUnconnectedGuildMemberGrade() Exception Break",
                  0x49a, 0x49f);
}
```
