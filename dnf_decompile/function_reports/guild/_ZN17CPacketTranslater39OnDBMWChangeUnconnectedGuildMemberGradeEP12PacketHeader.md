# _ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader

`CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807ea8a` | `0x47c` | `0x8075350` | `0x3b1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,282 +1,245 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0xcc,%esp
+sub    $0xbc,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x2c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x56>
 movl   $0x1036,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x471>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x3a6>
+mov    -0x2c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0xc7>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0xcb>
 movl   $0x103c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x28(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade : 0 == pclGuild(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x471>
-lea    -0x92(%ebp),%eax
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x3a6>
+lea    -0x86(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN41Packet_Monitor_Set_Sub_Guild_Master_ReplyC1Ev>
-movl   $0x0,-0x88(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
+movl   $0x0,-0x20(%ebp)
+mov    -0x2c(%ebp),%eax
+add    $0x30,%eax
+movzbl (%eax),%eax
 cmp    $0xff,%al
 jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0xf9>
-movl   $0x2,-0x88(%ebp)
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x25f>
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
+movl   $0x2,-0x20(%ebp)
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x266>
+mov    -0x2c(%ebp),%eax
+add    $0x30,%eax
+movzbl (%eax),%eax
 cmp    $0xfe,%al
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x113>
-movl   $0x66,-0x88(%ebp)
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x25f>
-mov    -0x20(%ebp),%eax
-movzbl 0x31(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x112>
+movl   $0x66,-0x20(%ebp)
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x266>
+mov    -0x2c(%ebp),%eax
+add    $0x31,%eax
+movzbl (%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x12d>
-movl   $0x58,-0x88(%ebp)
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x25f>
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%edx
-mov    -0x20(%ebp),%eax
-movzbl 0x31(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x12b>
+movl   $0x58,-0x20(%ebp)
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x266>
+mov    -0x2c(%ebp),%eax
+add    $0x30,%eax
+movzbl (%eax),%edx
+mov    -0x2c(%ebp),%eax
+add    $0x31,%eax
+movzbl (%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x14e>
-movl   $0x65,-0x88(%ebp)
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x25f>
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x14d>
+movl   $0x65,-0x20(%ebp)
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x266>
+mov    -0x2c(%ebp),%eax
+add    $0x30,%eax
+movzbl (%eax),%eax
 cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x1f7>
+jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x1fa>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild23GetCurSubGuildMasterCntEv>
 cmp    $0x4,%al
-seta   %al
+setbe  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x1c5>
+je     <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x1a9>
+mov    -0x2c(%ebp),%eax
+add    $0x32,%eax
+mov    (%eax),%eax
+movl   $0x1,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
+movl   $0x0,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x239>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild23GetCurSubGuildMasterCntEv>
 movzbl %al,%ebx
 movl   $0x105b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CRITICAL ERR sub guild master cnt over(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x59,-0x88(%ebp)
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x232>
-mov    -0x20(%ebp),%eax
-mov    0x32(%eax),%eax
-movl   $0x1,0x8(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x59,-0x20(%ebp)
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x239>
+mov    -0x2c(%ebp),%eax
+add    $0x31,%eax
+movzbl (%eax),%eax
+cmp    $0x2,%al
+jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x239>
+mov    -0x2c(%ebp),%eax
+add    $0x32,%eax
+mov    (%eax),%eax
+movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
 movl   $0x0,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x232>
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x266>
+mov    -0x2c(%ebp),%eax
+add    $0x30,%eax
+movzbl (%eax),%eax
+movzbl %al,%edx
+mov    -0x2c(%ebp),%eax
+add    $0x32,%eax
+mov    (%eax),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji>
+mov    -0x2c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x8c(%ebp)
+mov    -0x2c(%ebp),%eax
+add    $0x32,%eax
+mov    (%eax),%edi
+mov    -0x2c(%ebp),%eax
+add    $0x31,%eax
+movzbl (%eax),%eax
+movzbl %al,%esi
+mov    -0x2c(%ebp),%eax
+add    $0x30,%eax
+movzbl (%eax),%eax
+movzbl %al,%ebx
+movl   $0x1073,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x8c(%ebp),%eax
+mov    %eax,0x20(%esp)
+mov    %edi,0x1c(%esp)
 mov    -0x20(%ebp),%eax
-movzbl 0x31(%eax),%eax
-cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x232>
-mov    -0x20(%ebp),%eax
-mov    0x32(%eax),%eax
-movl   $0x0,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
-movl   $0x0,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-mov    -0x88(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x25f>
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-movzbl %al,%edx
-mov    -0x20(%ebp),%eax
-mov    0x32(%eax),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0xa4(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x32(%eax),%eax
-mov    %eax,-0xa0(%ebp)
-mov    -0x88(%ebp),%eax
-mov    %eax,-0x9c(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0x31(%eax),%eax
-movzbl %al,%edi
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-movzbl %al,%esi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x1073,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xa4(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    -0xa0(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0x9c(%ebp),%eax
 mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"Change Guild(%d) Grade(%d) Prev Grade(%d) result(%d) unconnected charNo(%d) RequestNo(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x2c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x470>
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+je     <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x3a6>
+lea    -0x86(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x20(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x86(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x84(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x86(%ebp),%eax
+lea    0x12(%eax),%ebx
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x80(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-mov    %al,-0x7c(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x86(%ebp),%eax
+lea    0x16(%eax),%edx
+mov    -0x2c(%ebp),%eax
+add    $0x30,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+mov    -0x2c(%ebp),%eax
 add    $0x12,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x92(%ebp),%eax
+lea    -0x86(%ebp),%eax
 add    $0x17,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0x92(%ebp),%eax
+lea    -0x86(%ebp),%eax
 movl   $0x3a,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x471>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x414>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x1084,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x40d>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x471>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x1089,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x469>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x471>
-nop
-add    $0xcc,%esp
+add    $0xbc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade(PacketHeader*) */

void CPacketTranslater::
     _ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  PacketHeader PVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  Packet_Monitor_Set_Sub_Guild_Master_Reply local_96 [10];
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  PacketHeader local_80;
  undefined1 auStack_7f [35];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [24];
  CUser *local_2c;
  CGuild *local_28;
  PacketHeader *local_24;
  
  local_24 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 0807eabb to 0807ee1c has its CatchHandler @ 0807ee22 */
    CMyFileLog::CMyFileLog(local_5c,"OnDBMWChangeUnconnectedGuildMemberGrade",0x1036);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_5c,"./log/GuildModify",
               "CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade : 0 == m_pclApp");
  }
  else {
    local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
    if (local_28 == (CGuild *)0x0) {
      uVar3 = *(undefined4 *)(local_24 + 10);
      CMyFileLog::CMyFileLog(local_54,"OnDBMWChangeUnconnectedGuildMemberGrade",0x103c);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_54,"./log/GuildModify",
                 "CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade : 0 == pclGuild(%d)",
                 uVar3);
    }
    else {
      Packet_Monitor_Set_Sub_Guild_Master_Reply::Packet_Monitor_Set_Sub_Guild_Master_Reply(local_96)
      ;
      local_8c = 0;
      if (local_24[0x30] == (PacketHeader)0xff) {
        local_8c = 2;
      }
      else if (local_24[0x30] == (PacketHeader)0xfe) {
        local_8c = 0x66;
      }
      else if (local_24[0x31] == (PacketHeader)0x1) {
        local_8c = 0x58;
      }
      else if (local_24[0x30] == local_24[0x31]) {
        local_8c = 0x65;
      }
      else {
        if (local_24[0x30] == (PacketHeader)0x2) {
          bVar7 = CGuild::GetCurSubGuildMasterCnt(local_28);
          if (bVar7 < 5) {
            CGuild::SetSubGuildMaster(local_28,*(uint *)(local_24 + 0x32),true);
            CGuild::SendGuildInfoToMembers(local_28,false);
          }
          else {
            uVar8 = CGuild::GetCurSubGuildMasterCnt(local_28);
            CMyFileLog::CMyFileLog(local_4c,"OnDBMWChangeUnconnectedGuildMemberGrade",0x105b);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_4c,"./log/GuildModify","CRITICAL ERR sub guild master cnt over(%d)",
                       uVar8 & 0xff);
            local_8c = 0x59;
          }
        }
        else if (local_24[0x31] == (PacketHeader)0x2) {
          CGuild::SetSubGuildMaster(local_28,*(uint *)(local_24 + 0x32),false);
          CGuild::SendGuildInfoToMembers(local_28,false);
        }
        if (local_8c == 0) {
          CGuild::ChangeUnconnectedGuildMemberGrade
                    (local_28,*(uint *)(local_24 + 0x32),(uint)(byte)local_24[0x30]);
        }
      }
      iVar6 = local_8c;
      uVar3 = *(undefined4 *)(local_24 + 0xe);
      uVar4 = *(undefined4 *)(local_24 + 0x32);
      PVar1 = local_24[0x31];
      PVar2 = local_24[0x30];
      uVar5 = *(undefined4 *)(local_24 + 10);
      CMyFileLog::CMyFileLog(local_44,"OnDBMWChangeUnconnectedGuildMemberGrade",0x1073);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_44,"./log/GuildModify",
                 "Change Guild(%d) Grade(%d) Prev Grade(%d) result(%d) unconnected charNo(%d) RequestNo(%d)"
                 ,uVar5,(uint)(byte)PVar2,(uint)(byte)PVar1,iVar6,uVar4,uVar3);
      local_2c = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
      if (local_2c != (CUser *)0x0) {
        local_88 = CUser::GetIdByChannel(local_2c);
        local_84 = CUser::GetUniqCharNo(local_2c);
        local_80 = local_24[0x30];
        memcpy(auStack_7f,local_24 + 0x12,0x1d);
        CUser::SendToGameserver(local_2c,(char *)local_96,0x3a);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3292 行）：

```cpp
void CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1036,"./log/GuildModify",
            "CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade : 0 == m_pclApp");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    CGuild* guild;
    if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x103c,"./log/GuildModify",
            "CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade : 0 == pclGuild(%d)",
            guildKey);
        return;
    }
    Packet_Monitor_Set_Sub_Guild_Master_Reply reply;
    int result = 0;
    if ((unsigned char)pb[0x30] == 0xff)
    {
        result = 2;
    }
    else if ((unsigned char)pb[0x30] == 0xfe)
    {
        result = 0x66;
    }
    else if ((unsigned char)pb[0x31] == 1)
    {
        result = 0x58;
    }
    else if ((unsigned char)pb[0x30] == (unsigned char)pb[0x31])
    {
        result = 0x65;
    }
    else
    {
        if ((unsigned char)pb[0x30] == 2)
        {
            if (guild->GetCurSubGuildMasterCnt() < 5)
            {
                guild->SetSubGuildMaster(*(unsigned int*)(pb + 0x32), true);
                guild->SendGuildInfoToMembers(false);
            }
            else
            {
                DNF_LOG_SCOPE_LINE(0x105b,"./log/GuildModify", "CRITICAL ERR sub guild master cnt over(%d)",
                    (unsigned int)guild->GetCurSubGuildMasterCnt() & 0xff);
                result = 0x59;
            }
        }
        else if ((unsigned char)pb[0x31] == 2)
        {
            guild->SetSubGuildMaster(*(unsigned int*)(pb + 0x32), false);
            guild->SendGuildInfoToMembers(false);
        }
        if (result == 0)
        {
            guild->ChangeUnconnectedGuildMemberGrade(*(unsigned int*)(pb + 0x32),
                                                     (unsigned char)pb[0x30]);
        }
    }
    {
        DNF_LOG_SCOPE_LINE(0x1073,"./log/GuildModify",
            "Change Guild(%d) Grade(%d) Prev Grade(%d) result(%d) unconnected charNo(%d) RequestNo(%d)",
            guildKey, (unsigned int)(unsigned char)pb[0x30],
            (unsigned int)(unsigned char)pb[0x31], result, *(unsigned int*)(pb + 0x32),
            *(unsigned int*)(pb + 0xe));
    }
    CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(*(unsigned int*)(pb + 0xe));
    if (user != 0)
    {
        *(unsigned int*)((char*)&reply + 0xa) = result;
        *(unsigned int*)((char*)&reply + 0xe) = user->GetIdByChannel();
        *(unsigned int*)((char*)&reply + 0x12) = user->GetUniqCharNo();
        *(unsigned char*)((char*)&reply + 0x16) = *(unsigned char*)(pb + 0x30);
        memcpy((char*)&reply + 0x17, pb + 0x12, 0x1d);
        user->SendToGameserver((char*)&reply, 0x3a);
    }
}
```
