# _ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader

`CPacketTranslater::OnChangeGuildName(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80814f8` | `0x44a` | `0x8077766` | `0x419` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,284 +1,260 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x19c,%esp
+sub    $0x1a0,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x50>
+jne    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x4f>
 movl   $0x14dc,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangeGuildName : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x43f>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x40f>
+lea    -0x7a(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN30Packet_Reply_Change_Guild_NameC1Ev>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-lea    -0x86(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN30Packet_Reply_Change_Guild_NameC1Ev>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,-0x7c(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x70(%ebp)
+mov    -0x1c(%ebp),%eax
 add    $0x12,%eax
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x86(%ebp),%eax
+lea    -0x7a(%ebp),%eax
 add    $0x17,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0xf4>
+je     <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0xed>
 movl   $0x14e7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangeGuildName : 0 == pclRequestUser",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x43f>
-mov    -0x28(%ebp),%eax
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x40f>
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x74(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x6c(%ebp)
+movl   $0x0,-0x14(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    0xa(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x133>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
 jne    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x13a>
 mov    $0x1,%eax
 jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x13f>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x197>
+je     <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x194>
 movl   $0x14ef,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangeGuildName : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0x64,-0x70(%ebp)
-lea    -0x86(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movb   $0x64,-0x64(%ebp)
+lea    -0x7a(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x43f>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x40f>
+mov    -0x1c(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x21b>
-mov    -0x20(%ebp),%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x2d4>
+mov    -0x1c(%ebp),%eax
+add    $0x12,%eax
+movl   $0x1,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild15ChangeGuildNameEPci>
+movb   $0x0,-0xd(%ebp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x1fc>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface10GetGroupNoEv>
+mov    %al,-0xd(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+movzbl -0xd(%ebp),%edx
+movl   $0x0,0xc(%esp)
+mov    %eax,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild11DBGuildSaveEhP14CServerHandlerj>
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild28SendGuildNameChangeToMembersEv>
+mov    -0x1c(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x6c(%ebp)
+movb   $0x0,-0x64(%ebp)
+lea    -0x7a(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+movl   $0x100,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0x17a(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
+mov    -0x1c(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,0x8(%esp)
+movl   $"�뀶�쐝�릫葉긷럴溫딀쎍�궨 %s���",0x4(%esp)
+lea    -0x17a(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <sprintf>
+mov    -0x1c(%ebp),%eax
+mov    0xa(%eax),%ebx
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+movzbl -0xd(%ebp),%edx
+movl   $0xffffffff,0x14(%esp)
+lea    -0x17a(%ebp),%ecx
+mov    %ecx,0x10(%esp)
+movl   $&_ZL11LETTER_TEXT,0xc(%esp)
+mov    %ebx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN17CPacketTranslater19SendPacketGuildMailEhjjPKcS1_j>
+jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x40f>
+mov    -0x1c(%ebp),%eax
 mov    0xa(%eax),%esi
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0xe(%eax),%ebx
 movl   $0x14f7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnChangeGuildName : %d is not guild master or sub master(g:%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0x56,-0x70(%ebp)
-lea    -0x86(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movb   $0x56,-0x64(%ebp)
+lea    -0x7a(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x43f>
-mov    -0x20(%ebp),%eax
-add    $0x12,%eax
-movl   $0x1,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild15ChangeGuildNameEPci>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,%ebx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface10GetGroupNoEv>
-movzbl %al,%eax
-movl   $0x0,0xc(%esp)
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild11DBGuildSaveEhP14CServerHandlerj>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild28SendGuildNameChangeToMembersEv>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x78(%ebp)
-movb   $0x0,-0x70(%ebp)
-lea    -0x86(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-lea    -0x186(%ebp),%edx
-mov    $0x100,%ebx
-mov    $0x0,%eax
-mov    %edx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x2c7>
-mov    %ax,(%edx)
-add    $0x2,%edx
-sub    $0x2,%ebx
-mov    %ebx,%ecx
-shr    $0x2,%ecx
-mov    %edx,%edi
-rep stos %eax,%es:(%edi)
-mov    %edi,%edx
-mov    %ebx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x2e1>
-mov    %ax,(%edx)
-add    $0x2,%edx
-mov    %ebx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x2ef>
-mov    %al,(%edx)
-add    $0x1,%edx
-mov    -0x20(%ebp),%eax
-lea    0x12(%eax),%edx
-mov    $"�뀶�쐝�릫葉긷럴溫딀쎍�궨 %s���",%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x186(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <sprintf>
-mov    $&_ZL11LETTER_TEXT,%edi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface10GetGroupNoEv>
-movzbl %al,%eax
-movl   $0xffffffff,0x14(%esp)
-lea    -0x186(%ebp),%edx
-mov    %edx,0x10(%esp)
-mov    %edi,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater19SendPacketGuildMailEhjjPKcS1_j>
-jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x43f>
+jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x40f>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x3e5>
+jne    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x3b5>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x1527,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnChangeGuildName Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x3de>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x3ae>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x43f>
+jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x40f>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x152c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangeGuildName Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x43a>
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader+0x40a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x19c,%esp
+add    $0x1a0,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x080817e2) */
/* CPacketTranslater::OnChangeGuildName(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  uchar uVar4;
  CServerHandler *pCVar5;
  CServerInterface *pCVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_18a [256];
  Packet_Reply_Change_Guild_Name local_8a [10];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 auStack_73 [23];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [24];
  CUser *local_2c;
  CGuild *local_28;
  PacketHeader *local_24;
  
  bVar11 = 0;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 08081523 to 0808185b has its CatchHandler @ 08081861 */
    CMyFileLog::CMyFileLog(local_5c,"OnChangeGuildName",0x14dc);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_5c,"./log/Except","CPacketTranslater::OnChangeGuildName : 0 == m_pclApp");
  }
  else {
    local_24 = param_1;
    Packet_Reply_Change_Guild_Name::Packet_Reply_Change_Guild_Name(local_8a);
    local_80 = *(undefined4 *)(local_24 + 0xe);
    memcpy(auStack_73,local_24 + 0x12,0x16);
    local_2c = (CUser *)CUserManager::FindUser_CharNo((uint)(m_pclApp + 0x10));
    if (local_2c == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_54,"OnChangeGuildName",0x14e7);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_54,"./log/GuildModify",
                 "CPacketTranslater::OnChangeGuildName : 0 == pclRequestUser");
    }
    else {
      local_78 = CUser::GetIdByChannel(local_2c);
      if ((*(int *)(local_24 + 10) == 0) ||
         (local_28 = (CGuild *)
                     CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290)),
         local_28 == (CGuild *)0x0)) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        CMyFileLog::CMyFileLog(local_4c,"OnChangeGuildName",0x14ef);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_4c,"./log/GuildModify",
                   "CPacketTranslater::OnChangeGuildName : 0 == pclGuild");
        local_74 = 100;
        CUser::SendTcpGameserver(local_2c,(PacketHeader *)local_8a);
      }
      else {
        cVar3 = CGuild::IsGuildMaster(local_28,*(uint *)(local_24 + 0xe));
        if (cVar3 == '\x01') {
          CGuild::ChangeGuildName(local_28,(char *)(local_24 + 0x12),1);
          pCVar5 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
          pCVar6 = (CServerInterface *)CUser::GetGameServer(local_2c);
          uVar4 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(pCVar6);
          CGuild::DBGuildSave(local_28,uVar4,pCVar5,0);
          CGuild::SendGuildNameChangeToMembers(local_28);
          local_7c = *(undefined4 *)(local_24 + 10);
          local_74 = 0;
          CUser::SendTcpGameserver(local_2c,(PacketHeader *)local_8a);
          pcVar8 = local_18a;
          uVar9 = 0x100;
          bVar10 = ((uint)pcVar8 & 2) != 0;
          if (bVar10) {
            local_18a[0] = '\0';
            local_18a[1] = '\0';
            pcVar8 = local_18a + 2;
            uVar9 = 0xfe;
          }
          for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            pcVar8[0] = '\0';
            pcVar8[1] = '\0';
            pcVar8[2] = '\0';
            pcVar8[3] = '\0';
            pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
          }
          if (bVar10) {
            pcVar8[0] = '\0';
            pcVar8[1] = '\0';
          }
          sprintf(local_18a,LETTER_TEXT + 0xff,local_24 + 0x12);
          uVar9 = *(uint *)(local_24 + 10);
          uVar7 = CUser::GetUniqCharNo(local_2c);
          pCVar6 = (CServerInterface *)CUser::GetGameServer(local_2c);
          uVar4 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(pCVar6);
          SendPacketGuildMail(uVar4,uVar7,uVar9,LETTER_TEXT,local_18a,0xffffffff);
        }
        else {
          uVar1 = *(undefined4 *)(local_24 + 10);
          uVar2 = *(undefined4 *)(local_24 + 0xe);
          CMyFileLog::CMyFileLog(local_44,"OnChangeGuildName",0x14f7);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_44,"./log/GuildModify",
                     "CPacketTranslater::OnChangeGuildName : %d is not guild master or sub master(g:%d)"
                     ,uVar2,uVar1);
          local_74 = 0x56;
          CUser::SendTcpGameserver(local_2c,(PacketHeader *)local_8a);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3733 行）：

```cpp
void CPacketTranslater::OnChangeGuildName(PacketHeader* pkt)
{
    try
    {
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x14dc, "./log/Except", "CPacketTranslater::OnChangeGuildName : 0 == m_pclApp");
        return;
    }
    Packet_Reply_Change_Guild_Name reply;
    Packet_Change_Guild_Name* pb = (Packet_Change_Guild_Name*)pkt;
    reply.m_charNo = pb->m_charNo;
    memcpy(reply.m_name, pb->m_name, 0x16);
    CUser* user;
    if ((user = (&m_pclApp->m_userManager)->FindUser_CharNo(
             pb->m_charNo)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x14e7, "./log/GuildModify", "CPacketTranslater::OnChangeGuildName : 0 == pclRequestUser");
        return;
    }
    reply.m_guildKey = user->GetIdByChannel();
    CGuild* guild = 0;
    if (pb->m_guildKey == 0 ||
        (guild = (&m_pclApp->m_guildManager)->FindGuild(pb->m_guildKey)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x14ef, "./log/GuildModify", "CPacketTranslater::OnChangeGuildName : 0 == pclGuild");
        reply.m_result = 100;
        user->SendTcpGameserver(&reply);
        return;
    }
    if (guild->IsGuildMaster(pb->m_charNo) == 1)
    {
        guild->ChangeGuildName(pb->m_name, 1);
        unsigned char group = 0;
        if (user->GetGameServer() != 0)
        {
            group = user->GetGameServer()->GetGroupNo();
        }
        guild->DBGuildSave(group, m_pclApp->Get_ServerHandler(), 0);
        guild->SendGuildNameChangeToMembers();
        reply.m_guildKey = pb->m_guildKey;
        reply.m_result = 0;
        user->SendTcpGameserver(&reply);
        char mailContent[0x100];
        memset(mailContent, 0, sizeof(mailContent));
        sprintf(mailContent, LETTER_TEXT + 0xff,
                pb->m_name);
        SendPacketGuildMail(group, user->GetUniqCharNo(), pb->m_guildKey, LETTER_TEXT,
                            mailContent, 0xffffffff);
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x14f7,"./log/GuildModify",
            "CPacketTranslater::OnChangeGuildName : %d is not guild master or sub master(g:%d)",
            pb->m_charNo,
            pb->m_guildKey);
        reply.m_result = 0x56;
        user->SendTcpGameserver(&reply);
    }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1527, "./log/Except", "CPacketTranslater::OnChangeGuildName Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x152c, "./log/Except", "CPacketTranslater::OnChangeGuildName Exception Break\n");
    }
}
```
