# _ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader

`CPacketTranslater::OnSetGuildMemberGrade(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80755fc` | `0x7c3` | `0x806b98e` | `0x772` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,520 +1,506 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0xec,%esp
+sub    $0xfc,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0xe2>
 lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x4d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnSetGuildMemberGrade : 0 == m_pclApp",0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x54(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0xa7>
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x6e2>
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x693>
 lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-lea    -0xd4(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN41Packet_Monitor_Set_Sub_Guild_Master_ReplyC1Ev>
-mov    -0x20(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x3c(%ebp)
+cmpl   $0x0,-0x3c(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x164>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x150>
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x5f3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnSetGuildMemberGrade : no pclRequester(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x7b8>
-mov    -0x28(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x767>
+lea    -0xe5(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN41Packet_Monitor_Set_Sub_Guild_Master_ReplyC1Ev>
+mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0xc6(%ebp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0xc2(%ebp)
-movl   $0x0,-0xca(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-mov    %al,-0xbe(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0xdb(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0xd7(%ebp)
+movl   $0x0,-0x38(%ebp)
+mov    0x8(%ebp),%eax
 add    $0x12,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0xd4(%ebp),%eax
+lea    -0xe5(%ebp),%eax
 add    $0x17,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x20(%ebp),%eax
+mov    0x8(%ebp),%eax
+movzbl 0x30(%eax),%eax
+mov    %al,-0x31(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x1f1>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    %eax,-0x30(%ebp)
+movl   $0x0,-0x2c(%ebp)
+cmpl   $0x0,-0x30(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x1ed>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x1f8>
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
+jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x1f4>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x1fd>
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x1f9>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x22d>
-movl   $0x64,-0xca(%ebp)
-lea    -0xd4(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x226>
+movl   $0x64,-0x38(%ebp)
+lea    -0xe5(%ebp),%eax
 movl   $0x3a,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x7b8>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x767>
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13IsGuildMasterEj>
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x24e>
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16IsSubGuildMasterEv>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x255>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x25a>
+mov    $0x0,%eax
+mov    %al,-0x25(%ebp)
+movzbl -0x25(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x26f>
+movl   $0x56,-0x38(%ebp)
+cmpb   $0x1,-0x31(%ebp)
+jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x27c>
+movl   $0x58,-0x38(%ebp)
+cmpb   $0x2,-0x31(%ebp)
+jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x2c2>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild23GetCurSubGuildMasterCntEv>
+cmp    $0x4,%al
+setbe  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x2bb>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x262>
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16IsSubGuildMasterEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x262>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x267>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x275>
-movl   $0x56,-0xca(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x28a>
-movl   $0x58,-0xca(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x2db>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild23GetCurSubGuildMasterCntEv>
-cmp    $0x4,%al
-seta   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x2b5>
-movl   $0x59,-0xca(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x2db>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13IsGuildMasterEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x2db>
-movl   $0x66,-0xca(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x2c2>
+movl   $0x66,-0x38(%ebp)
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x2c2>
+movl   $0x59,-0x38(%ebp)
 lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x20(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0x12(%eax),%edx
 lea    -0x3d(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x10(%eax),%edx
 lea    -0x44(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-sete   %bl
+mov    %eax,-0x24(%ebp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x35d>
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x33d>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x345>
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x325>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x6e2>
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x693>
 lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x423>
-mov    -0xca(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x6c0>
-lea    -0x9a(%ebp),%eax
+cmpl   $0x0,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x41f>
+cmpl   $0x0,-0x38(%ebp)
+jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x668>
+lea    -0xab(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN54Packet_Monitor_DB_Change_Unconnected_GuildMember_GradeC1Ev>
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface10GetGroupNoEv>
-mov    %al,-0x90(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x8f(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-mov    %al,-0x68(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x8b(%ebp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-movzbl 0x15(%eax),%eax
-mov    %al,-0x87(%ebp)
-mov    -0x20(%ebp),%eax
-add    $0x12,%eax
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x9a(%ebp),%eax
-add    $0x14,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x9a(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x7b8>
-mov    -0xca(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x6c0>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13IsGuildMasterEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x45e>
-movl   $0x57,-0xca(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x6c0>
-mov    -0x2c(%ebp),%eax
-cmp    -0x28(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x475>
-movl   $0x55,-0xca(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x6c0>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-movzbl 0x15(%eax),%eax
-movzbl %al,%edx
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-movsbl %al,%eax
-cmp    %eax,%edx
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x4a9>
-movl   $0x65,-0xca(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x6c0>
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x547>
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-movzbl 0x15(%eax),%eax
-cmp    $0x1,%al
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x4df>
-movl   $0x66,-0xca(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x5be>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-movl   $0x1,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-movb   $0x2,0x15(%eax)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-movl   $0x2,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji>
-movl   $0x0,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x5be>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x5be>
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-movzbl 0x15(%eax),%eax
-cmp    $0x1,%al
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x589>
-movl   $0x66,-0xca(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x5be>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-movl   $0x0,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
-movl   $0x0,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-mov    -0xca(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x6c0>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-movzbl 0x15(%eax),%eax
-mov    %al,-0x9f(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x9e(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-movzbl %al,%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser22ChangeGuildMemberGradeEh>
-lea    -0x67(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN38Packet_Monitor_Notify_GuildMemberGradeC1Ev>
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-mov    %al,-0x55(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x59(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x5d(%ebp)
-movzwl -0x65(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x67(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-mov    -0x2c(%ebp),%eax
+movb   $0x0,-0x1d(%ebp)
+mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x6b6>
+je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x398>
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface10GetGroupNoEv>
+mov    %al,-0x1d(%ebp)
+movzbl -0x1d(%ebp),%eax
+mov    %al,-0xa1(%ebp)
+mov    -0x30(%ebp),%eax
+mov    %eax,-0xa0(%ebp)
+movzbl -0x31(%ebp),%eax
+mov    %al,-0x9c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x9b(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
+add    $0x15,%eax
+movzbl (%eax),%eax
+mov    %al,-0x97(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0xab(%ebp),%eax
+add    $0x15,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0xab(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x767>
+cmpl   $0x0,-0x38(%ebp)
+jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x668>
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13IsGuildMasterEj>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x661>
+mov    -0x24(%ebp),%eax
+cmp    -0x3c(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x462>
+movl   $0x55,-0x38(%ebp)
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x668>
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
+add    $0x15,%eax
+movzbl (%eax),%eax
+cmp    -0x31(%ebp),%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x489>
+movl   $0x65,-0x38(%ebp)
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x668>
+cmpb   $0x2,-0x31(%ebp)
+jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x520>
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
+add    $0x15,%eax
+movzbl (%eax),%eax
+cmp    $0x1,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x517>
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+movl   $0x1,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
+add    $0x15,%eax
+movb   $0x2,(%eax)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+movl   $0x2,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji>
+movl   $0x0,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x596>
+movl   $0x66,-0x38(%ebp)
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x596>
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x596>
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
+add    $0x15,%eax
+movzbl (%eax),%eax
+cmp    $0x1,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x58f>
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+movl   $0x0,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
+movl   $0x0,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x596>
+movl   $0x66,-0x38(%ebp)
+cmpl   $0x0,-0x38(%ebp)
+jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x668>
+movzbl -0x31(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser22ChangeGuildMemberGradeEh>
+lea    -0x67(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN38Packet_Monitor_Notify_GuildMemberGradeC1Ev>
+movzbl -0x31(%ebp),%eax
+mov    %al,-0x55(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x5d(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x59(%ebp)
+lea    -0x67(%ebp),%eax
+movl   $0x13,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x618>
+movl   $0x3,-0x38(%ebp)
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x668>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,%ebx
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface10GetGroupNoEv>
 movzbl %al,%eax
 movl   $0x3,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17DBGuildMemberSaveEP5CUserhP14CServerHandlerh>
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x6c0>
-movl   $0x3,-0xca(%ebp)
-lea    -0xd4(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x668>
+movl   $0x57,-0x38(%ebp)
+mov    -0x38(%ebp),%eax
+mov    %eax,-0xd3(%ebp)
+lea    -0xe5(%ebp),%eax
 movl   $0x3a,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x7b8>
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x767>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x75e>
+jne    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x70d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0x680,0x8(%esp)
+movl   $"OnSetGuildMemberGrade",0x4(%esp)
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x680,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnSetGuildMemberGrade() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x757>
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x706>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x7b8>
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x767>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x685,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSetGuildMemberGrade() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x7b3>
+jmp    <T> <_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader+0x762>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0xec,%esp
+add    $0xfc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnSetGuildMemberGrade(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  uchar uVar4;
  CDNFException *this;
  CServerInterface *pCVar5;
  int iVar6;
  CServerHandler *pCVar7;
  uint uVar8;
  bool bVar9;
  Packet_Monitor_Set_Sub_Guild_Master_Reply local_d8 [10];
  int local_ce;
  undefined4 local_ca;
  undefined4 local_c6;
  PacketHeader local_c2;
  undefined1 auStack_c1 [30];
  undefined1 local_a3;
  undefined4 local_a2;
  Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade local_9e [10];
  undefined1 local_94;
  undefined4 local_93;
  undefined4 local_8f;
  undefined1 local_8b;
  undefined1 auStack_8a [30];
  PacketHeader local_6c;
  Packet_Monitor_Notify_GuildMemberGrade local_6b [2];
  ushort local_69;
  undefined4 local_61;
  undefined4 local_5d;
  PacketHeader local_59;
  string local_58 [7];
  allocator local_51;
  CMyFileLog local_50 [8];
  string local_48 [7];
  allocator local_41 [17];
  CUser *local_30;
  CUser *local_2c;
  CGuild *local_28;
  PacketHeader *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08075635 to 08075639 has its CatchHandler @ 080756a3 */
    std::string::string(local_58,"CPacketTranslater::OnSetGuildMemberGrade : 0 == m_pclApp",
                        &local_51);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08075654 to 08075658 has its CatchHandler @ 0807565b */
    CDNFException::CDNFException(this,local_58);
                    /* try { // try from 08075692 to 08075696 has its CatchHandler @ 08075699 */
    std::string::~string(local_58);
    std::allocator<char>::~allocator((allocator<char> *)&local_51);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080756d9 to 080758c5 has its CatchHandler @ 08075cde */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  Packet_Monitor_Set_Sub_Guild_Master_Reply::Packet_Monitor_Set_Sub_Guild_Master_Reply(local_d8);
  local_2c = (CUser *)CUserManager::FindUser_CharNo((uint)(m_pclApp + 0x10));
  if (local_2c != (CUser *)0x0) {
    local_ca = CUser::GetIdByChannel(local_2c);
    local_c6 = CUser::GetUniqCharNo(local_2c);
    local_ce = 0;
    local_c2 = local_24[0x30];
    memcpy(auStack_c1,local_24 + 0x12,0x1d);
    if ((*(int *)(local_24 + 0xe) == 0) ||
       (local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290))
       , local_28 == (CGuild *)0x0)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if (!bVar9) {
      cVar2 = CGuild::IsGuildMaster(local_28,*(uint *)(local_24 + 10));
      if ((cVar2 == '\x01') || (cVar2 = CUser::IsSubGuildMaster(local_2c), cVar2 == '\x01')) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) {
        local_ce = 0x56;
      }
      if (local_24[0x30] == (PacketHeader)0x1) {
        local_ce = 0x58;
      }
      if (local_24[0x30] == (PacketHeader)0x2) {
        bVar3 = CGuild::GetCurSubGuildMasterCnt(local_28);
        if (bVar3 < 5) {
          cVar2 = CGuild::IsGuildMaster(local_28,*(uint *)(local_24 + 10));
          if (cVar2 != '\x01') {
            local_ce = 0x66;
          }
        }
        else {
          local_ce = 0x59;
        }
      }
      std::allocator<char>::allocator();
                    /* try { // try from 080758f9 to 080758fd has its CatchHandler @ 08075941 */
      std::string::string(local_48,(char *)(local_24 + 0x12),local_41);
                    /* try { // try from 08075910 to 08075914 has its CatchHandler @ 0807592c */
      local_30 = (CUser *)CUserManager::FindUser_CharName(m_pclApp + 0x10,local_48);
      bVar9 = local_30 == (CUser *)0x0;
                    /* try { // try from 08075925 to 08075929 has its CatchHandler @ 08075941 */
      std::string::~string(local_48);
      std::allocator<char>::~allocator((allocator<char> *)local_41);
      if (bVar9) {
        if (local_ce == 0) {
          Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade::
          Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade(local_9e);
          pCVar5 = (CServerInterface *)CUser::GetGameServer(local_2c);
                    /* try { // try from 08075996 to 08075cd8 has its CatchHandler @ 08075cde */
          local_94 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(pCVar5);
          local_93 = *(undefined4 *)(local_24 + 0xe);
          local_6c = local_24[0x30];
          local_8f = *(undefined4 *)(local_24 + 10);
          iVar6 = CUser::GetGuildMemDBInfo(local_2c);
          local_8b = *(undefined1 *)(iVar6 + 0x15);
          memcpy(auStack_8a,local_24 + 0x12,0x1d);
          pCVar7 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
          CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader
                    (pCVar7,(PacketHeader *)local_9e);
          return;
        }
      }
      else if (local_ce == 0) {
        uVar8 = CUser::GetUniqCharNo(local_30);
        cVar2 = CGuild::IsGuildMaster(local_28,uVar8);
        if (cVar2 == '\0') {
          if (local_30 == local_2c) {
            local_ce = 0x55;
          }
          else {
            iVar6 = CUser::GetGuildMemDBInfo(local_30);
            if ((uint)*(byte *)(iVar6 + 0x15) == (int)(char)local_24[0x30]) {
              local_ce = 0x65;
            }
            else {
              if (local_24[0x30] == (PacketHeader)0x2) {
                iVar6 = CUser::GetGuildMemDBInfo(local_2c);
                if (*(char *)(iVar6 + 0x15) == '\x01') {
                  uVar8 = CUser::GetUniqCharNo(local_30);
                  CGuild::SetSubGuildMaster(local_28,uVar8,true);
                  iVar6 = CUser::GetGuildMemDBInfo(local_30);
                  *(undefined1 *)(iVar6 + 0x15) = 2;
                  uVar8 = CUser::GetUniqCharNo(local_30);
                  CGuild::ChangeUnconnectedGuildMemberGrade(local_28,uVar8,2);
                  CGuild::SendGuildInfoToMembers(local_28,false);
                }
                else {
                  local_ce = 0x66;
                }
              }
              else {
                uVar8 = CUser::GetUniqCharNo(local_30);
                cVar2 = CGuild::IsSubGuildMaster(local_28,uVar8);
                if (cVar2 != '\0') {
                  iVar6 = CUser::GetGuildMemDBInfo(local_2c);
                  if (*(char *)(iVar6 + 0x15) == '\x01') {
                    uVar8 = CUser::GetUniqCharNo(local_30);
                    CGuild::SetSubGuildMaster(local_28,uVar8,false);
                    CGuild::SendGuildInfoToMembers(local_28,false);
                  }
                  else {
                    local_ce = 0x66;
                  }
                }
              }
              if (local_ce == 0) {
                iVar6 = CUser::GetGuildMemDBInfo(local_30);
                local_a3 = *(undefined1 *)(iVar6 + 0x15);
                local_a2 = CUser::GetUniqCharNo(local_30);
                CUser::ChangeGuildMemberGrade(local_30,(uchar)local_24[0x30]);
                Packet_Monitor_Notify_GuildMemberGrade::Packet_Monitor_Notify_GuildMemberGrade
                          (local_6b);
                local_59 = local_24[0x30];
                local_5d = CUser::GetUniqCharNo(local_30);
                local_61 = CUser::GetIdByChannel(local_30);
                CUser::SendToGameserver(local_30,(char *)local_6b,(uint)local_69);
                iVar6 = CUser::GetGameServer(local_30);
                if (iVar6 == 0) {
                  local_ce = 3;
                }
                else {
                  pCVar7 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
                  pCVar5 = (CServerInterface *)CUser::GetGameServer(local_30);
                  uVar4 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(pCVar5);
                  CGuild::DBGuildMemberSave(local_28,local_30,uVar4,pCVar7,'\x03');
                }
              }
            }
          }
        }
        else {
          local_ce = 0x57;
        }
      }
      CUser::SendToGameserver(local_2c,(char *)local_d8,0x3a);
      return;
    }
    local_ce = 100;
    CUser::SendToGameserver(local_2c,(char *)local_d8,0x3a);
    return;
  }
  uVar1 = *(undefined4 *)(local_24 + 10);
  CMyFileLog::CMyFileLog(local_50,"OnSetGuildMemberGrade",0x5f3);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_50,"./log/GuildModify",
             "CPacketTranslater::OnSetGuildMemberGrade : no pclRequester(%d)",uVar1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1582 行）：

```cpp
void CPacketTranslater::OnSetGuildMemberGradeFromWeb(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnSetGuildMemberGradeFromWeb : 0 == m_pclApp");
    unsigned int guildKey = ((PTL_SetGuildMemberGradeFromWebPkt*)pkt)->m_guildKey;
    unsigned int masterCharNo = ((PTL_SetGuildMemberGradeFromWebPkt*)pkt)->m_masterCharNo;
    unsigned char newGrade = ((PTL_SetGuildMemberGradeFromWebPkt*)pkt)->m_newGrade;
    unsigned int targetCharNo = ((PTL_SetGuildMemberGradeFromWebPkt*)pkt)->m_targetCharNo;
    if (guildKey == 0)
    {
        DNF_LOG_SCOPE_LINE(0x515,"./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : 0 == packet->m_uGuildKey(%d)",
            (unsigned int)(guildKey == 0));
        return;
    }
    CGuild* guild;
    if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x51a,"./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : no guild(%d)", masterCharNo);
        return;
    }
    if (!guild->IsGuildMaster(masterCharNo) && !guild->IsSubGuildMaster(masterCharNo))
    {
        DNF_LOG_SCOPE_LINE(0x520,"./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : no guild master(%d)", masterCharNo);
        return;
    }
    if (newGrade == 1)
    {
        DNF_LOG_SCOPE_LINE(0x526,"./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change guild master(%d)",
            (int)(char)newGrade);
        return;
    }
    if (newGrade == 2)
    {
        if (4 < guild->GetCurSubGuildMasterCnt())
        {
            DNF_LOG_SCOPE_LINE(0x52e,"./log/GuildModify",
                "CPacketTranslater::OnSetGuildMemberGradeFromWeb : over sub guild master count");
            return;
        }
        if (!guild->IsGuildMaster(masterCharNo))
        {
            DNF_LOG_SCOPE_LINE(0x535,"./log/GuildModify",
                "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change sub guild master except master");
            return;
        }
    }
    if (guild->IsGuildMaster(targetCharNo))
    {
        DNF_LOG_SCOPE_LINE(0x53d,"./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change guild master(%d)",
            (int)(char)newGrade);
        return;
    }
    if (targetCharNo == masterCharNo)
    {
        DNF_LOG_SCOPE_LINE(0x542,"./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change myself(%d)", targetCharNo);
        return;
    }
    if (newGrade == 2)
    {
        if (!guild->IsGuildMaster(masterCharNo))
        {
            DNF_LOG_SCOPE_LINE(0x54c,"./log/GuildModify",
                "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change sub guild master except guild master(%d)",
                masterCharNo);
            return;
        }
        guild->SetSubGuildMaster(targetCharNo, true);
        guild->SendGuildInfoToMembers(false);
    }
    else if (guild->IsSubGuildMaster(targetCharNo))
    {
        if (!guild->IsGuildMaster(masterCharNo))
        {
            DNF_LOG_SCOPE_LINE(0x55c,"./log/GuildModify",
                "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change sub guild master except guild master(%d)",
                masterCharNo);
            return;
        }
        guild->SetSubGuildMaster(targetCharNo, false);
        guild->SendGuildInfoToMembers(false);
    }
    guild->ChangeUnconnectedGuildMemberGrade(targetCharNo, (int)(char)newGrade);
    CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(targetCharNo);
    if (user != 0)
    {
        user->ChangeGuildMemberGrade(newGrade);
        Packet_Monitor_Notify_GuildMemberGrade notify;
        notify.m_fieldA = user->GetIdByChannel();
        notify.m_fieldE = user->GetUniqCharNo();
        notify.m12 = newGrade;
        user->SendToGameserver((char*)&notify, notify.packetSize);
    }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnSetGuildMemberGradeFromWeb", 0x578);
        log("./log/Except", "CPacketTranslater::OnSetGuildMemberGrade() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x57d);
        log("./log/Except", "CPacketTranslater::OnSetGuildMemberGrade() Exception Break\n");
    }
}
```
