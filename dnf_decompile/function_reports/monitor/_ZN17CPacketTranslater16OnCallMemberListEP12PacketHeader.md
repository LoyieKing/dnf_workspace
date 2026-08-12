# _ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader

`CPacketTranslater::OnCallMemberList(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8082106` | `0x498` | `0x806df78` | `0x48a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,341 +1,322 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x240,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x487>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
+je     <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x480>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x38(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x2d0,%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x38(%ebp)
-cmpl   $0x0,-0x38(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x48a>
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager10FindMemberEj>
 mov    %eax,-0x30(%ebp)
 cmpl   $0x0,-0x30(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x48d>
-lea    -0x229(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x480>
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager10FindMemberEj>
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
+je     <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x480>
+lea    -0x232(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN38Packet_Monitor_Call_Member_List_ToUserC1Ev>
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x228(%ebp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x224(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember15GetMemberDBInfoEv>
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
 mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x21f(%ebp)
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x21b(%ebp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember15GetMemberDBInfoEv>
-mov    %eax,-0x20(%ebp)
-lea    -0x229(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,-0x1c(%ebp)
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x34(%ebp)
-cmpl   $0x0,-0x34(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0xfd>
-mov    -0x1c(%ebp),%eax
-movb   $0xff,(%eax)
-jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x156>
-mov    -0x34(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0xe8>
+movb   $0xff,-0x220(%ebp)
+jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x148>
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x105>
+movb   $0xff,-0x220(%ebp)
+jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x148>
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11IsBlackUserEj>
+test   %al,%al
 setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x150>
+je     <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x12f>
+movb   $0x1,-0x200(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+mov    %al,-0x220(%ebp)
+mov    -0x28(%ebp),%eax
+add    $0x4,%eax
+movzbl (%eax),%eax
+mov    %al,-0x21f(%ebp)
+mov    -0x28(%ebp),%eax
+add    $0x5,%eax
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x232(%ebp),%eax
+add    $0x14,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    -0x28(%ebp),%eax
+add    $0x23,%eax
+mov    (%eax),%eax
+mov    %eax,-0x1fe(%ebp)
+mov    -0x1fe(%ebp),%eax
+mov    %eax,-0x4c(%ebp)
+mov    -0x1fa(%ebp),%eax
+mov    %eax,-0x50(%ebp)
+movzbl -0x1ff(%ebp),%eax
+mov    %al,-0x51(%ebp)
+lea    -0x51(%ebp),%eax
+mov    %eax,0xc(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager33GetMemberExpNextLevelNeedExpLevelERjS0_Rh>
+mov    -0x4c(%ebp),%eax
+mov    %eax,-0x1fe(%ebp)
+mov    -0x50(%ebp),%eax
+mov    %eax,-0x1fa(%ebp)
+movzbl -0x51(%ebp),%eax
+mov    %al,-0x1ff(%ebp)
+mov    -0x28(%ebp),%eax
+add    $0x27,%eax
+movzbl (%eax),%eax
+mov    %al,-0x1f6(%ebp)
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x328>
+mov    -0x1c(%ebp),%edx
+lea    -0x232(%ebp),%eax
+imul   $0x2a,%edx,%edx
+add    $0x30,%edx
+add    %edx,%eax
+add    $0xd,%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x1c(%ebp),%eax
+imul   $0x27,%eax,%eax
+add    $0x28,%eax
+add    -0x28(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x246>
+mov    -0x18(%ebp),%eax
+movb   $0xff,(%eax)
+jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x2a8>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x262>
+mov    -0x18(%ebp),%eax
+movb   $0xff,(%eax)
+jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x2a8>
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11IsBlackUserEj>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x136>
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x28e>
+mov    -0x18(%ebp),%eax
+add    $0x20,%eax
+movb   $0x1,(%eax)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+mov    %eax,%edx
+mov    -0x18(%ebp),%eax
+mov    %dl,(%eax)
+mov    -0x18(%ebp),%eax
+lea    0x1(%eax),%edx
 mov    -0x1c(%ebp),%eax
-movb   $0x1,0x20(%eax)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    -0x1c(%ebp),%edx
+imul   $0x27,%eax,%eax
+add    $0x2c,%eax
+add    -0x28(%ebp),%eax
+movzbl (%eax),%eax
 mov    %al,(%edx)
-jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x156>
 mov    -0x1c(%ebp),%eax
-movb   $0xff,(%eax)
-mov    -0x20(%ebp),%eax
-movzbl 0x4(%eax),%edx
+imul   $0x27,%eax,%eax
+add    $0x2d,%eax
+add    -0x28(%ebp),%eax
+mov    -0x18(%ebp),%edx
+add    $0x2,%edx
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+mov    -0x18(%ebp),%eax
+lea    0x22(%eax),%edx
 mov    -0x1c(%ebp),%eax
-mov    %dl,0x1(%eax)
-mov    -0x20(%ebp),%eax
-lea    0x5(%eax),%edx
-mov    -0x1c(%ebp),%eax
-add    $0x2,%eax
-movl   $0x1d,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x20(%ebp),%eax
-mov    0x23(%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %edx,0x22(%eax)
-mov    -0x1c(%ebp),%eax
+imul   $0x27,%eax,%eax
+add    $0x4b,%eax
+add    -0x28(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x18(%ebp),%eax
 lea    0x21(%eax),%ecx
-mov    -0x1c(%ebp),%eax
+mov    -0x18(%ebp),%eax
 lea    0x26(%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x18(%ebp),%eax
 add    $0x22,%eax
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager33GetMemberExpNextLevelNeedExpLevelERjS0_Rh>
-lea    -0x229(%ebp),%eax
-add    $0x3d,%eax
-mov    %eax,-0x18(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0x27(%eax),%eax
-mov    %al,-0x1ed(%ebp)
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x331>
-mov    -0x10(%ebp),%eax
-mov    -0x20(%ebp),%edx
-imul   $0x27,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x8(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x34(%ebp)
-cmpl   $0x0,-0x34(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x21a>
-mov    -0x10(%ebp),%eax
-imul   $0x2a,%eax,%eax
-add    -0x18(%ebp),%eax
-movb   $0xff,(%eax)
-jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x287>
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x27b>
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11IsBlackUserEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x259>
-mov    -0x10(%ebp),%eax
-imul   $0x2a,%eax,%eax
-add    -0x18(%ebp),%eax
-movb   $0x1,0x20(%eax)
-mov    -0x10(%ebp),%eax
-imul   $0x2a,%eax,%eax
-mov    %eax,%ebx
-add    -0x18(%ebp),%ebx
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    %al,(%ebx)
-jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x287>
-mov    -0x10(%ebp),%eax
-imul   $0x2a,%eax,%eax
-add    -0x18(%ebp),%eax
-movb   $0xff,(%eax)
-mov    -0x10(%ebp),%eax
-imul   $0x2a,%eax,%eax
-add    -0x18(%ebp),%eax
-mov    -0x10(%ebp),%edx
-mov    -0x20(%ebp),%ecx
-imul   $0x27,%edx,%edx
-lea    (%ecx,%edx,1),%edx
-add    $0x2c,%edx
-movzbl (%edx),%edx
-mov    %dl,0x1(%eax)
-mov    -0x10(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    $0x20,%eax
-add    -0x20(%ebp),%eax
-lea    0xd(%eax),%edx
-mov    -0x10(%ebp),%eax
-imul   $0x2a,%eax,%eax
-add    -0x18(%ebp),%eax
-add    $0x2,%eax
-movl   $0x1d,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x10(%ebp),%eax
-imul   $0x2a,%eax,%eax
-add    -0x18(%ebp),%eax
-mov    -0x10(%ebp),%edx
-mov    -0x20(%ebp),%ecx
-imul   $0x27,%edx,%edx
-lea    (%ecx,%edx,1),%edx
-add    $0x40,%edx
-mov    0xb(%edx),%edx
-mov    %edx,0x22(%eax)
-mov    -0x10(%ebp),%eax
-imul   $0x2a,%eax,%eax
-add    -0x18(%ebp),%eax
-lea    0x21(%eax),%ecx
-mov    -0x10(%ebp),%eax
-imul   $0x2a,%eax,%eax
-add    -0x18(%ebp),%eax
-lea    0x26(%eax),%edx
-mov    -0x10(%ebp),%eax
-imul   $0x2a,%eax,%eax
-add    -0x18(%ebp),%eax
-add    $0x22,%eax
-mov    %ecx,0xc(%esp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager33GetMemberExpNextLevelNeedExpLevelERjS0_Rh>
-addl   $0x1,-0x10(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0x27(%eax),%eax
+addl   $0x1,-0x1c(%ebp)
+mov    -0x28(%ebp),%eax
+add    $0x27,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
-cmp    -0x10(%ebp),%eax
+cmp    -0x1c(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x1dd>
-mov    -0x20(%ebp),%eax
-movzbl 0x27(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x1fb>
+mov    -0x28(%ebp),%eax
+add    $0x27,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 imul   $0x2a,%eax,%eax
 add    $0x3d,%eax
-mov    %eax,-0x14(%ebp)
-lea    -0x229(%ebp),%eax
-mov    -0x14(%ebp),%edx
+mov    %eax,-0x20(%ebp)
+lea    -0x232(%ebp),%eax
+mov    -0x20(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x38(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x48e>
+jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x480>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x41f>
+jne    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x41a>
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
 movl   $"CPacketTranslater::OnCallMemberList() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x7cd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnCallMemberListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCallMemberList() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x418>
+jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x413>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x48e>
+jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x480>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnCallMemberList() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x7d3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnCallMemberListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCallMemberList() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x480>
+jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x47b>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x48e>
-nop
-jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x48e>
-nop
-jmp    <T> <_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader+0x48e>
-nop
 add    $0x240,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnCallMemberList(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  CServerInterface *pCVar4;
  undefined1 *puVar5;
  Packet_Monitor_Call_Member_List_ToUser local_22d [10];
  undefined4 local_223;
  undefined4 local_21f;
  undefined1 local_21b [42];
  undefined1 local_1f1;
  undefined1 auStack_1f0 [436];
  CUser *local_3c;
  CUser *local_38;
  CMember *local_34;
  PacketHeader *local_30;
  uint local_2c;
  CMemberManager *local_28;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_18;
  int local_14;
  
  if (m_pclApp != 0) {
    local_30 = param_1;
    local_2c = m_pclApp + 0x10;
    local_28 = (CMemberManager *)(m_pclApp + 0x2d0);
                    /* try { // try from 0808214c to 0808247d has its CatchHandler @ 08082483 */
    local_3c = (CUser *)CUserManager::FindUser_CharNo(local_2c);
    if (local_3c != (CUser *)0x0) {
      CUser::GetUniqCharNo(local_3c);
      local_34 = (CMember *)CMemberManager::_ZN14CMemberManager10FindMemberEj((uint)local_28);
      if (local_34 != (CMember *)0x0) {
        Packet_Monitor_Call_Member_List_ToUser::Packet_Monitor_Call_Member_List_ToUser(local_22d);
        local_223 = CUser::GetIdByChannel(local_3c);
        local_21f = CUser::GetUniqCharNo(local_3c);
        local_24 = CMember::GetMemberDBInfo(local_34);
        local_20 = local_21b;
        local_38 = (CUser *)CUserManager::FindUser_CharNo(local_2c);
        if (local_38 == (CUser *)0x0) {
          *local_20 = 0xff;
        }
        else {
          iVar3 = CUser::GetGameServer(local_38);
          if (iVar3 == 0) {
            *local_20 = 0xff;
          }
          else {
            CUser::GetUniqCharNo(local_3c);
            cVar1 = CUser::IsBlackUser((uint)local_38);
            if (cVar1 != '\0') {
              local_20[0x20] = 1;
            }
            pCVar4 = (CServerInterface *)CUser::GetGameServer(local_38);
            uVar2 = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(pCVar4);
            *local_20 = uVar2;
          }
        }
        local_20[1] = *(undefined1 *)(local_24 + 4);
        memcpy(local_20 + 2,(void *)(local_24 + 5),0x1d);
        *(undefined4 *)(local_20 + 0x22) = *(undefined4 *)(local_24 + 0x23);
        CMemberManager::_ZN14CMemberManager33GetMemberExpNextLevelNeedExpLevelERjS0_Rh
                  (local_28,(uint *)(local_20 + 0x22),(uint *)(local_20 + 0x26),local_20 + 0x21);
        local_1c = auStack_1f0;
        local_1f1 = *(undefined1 *)(local_24 + 0x27);
        for (local_14 = 0; local_14 < (int)(uint)*(byte *)(local_24 + 0x27); local_14 = local_14 + 1
            ) {
          local_38 = (CUser *)CUserManager::FindUser_CharNo(local_2c);
          if (local_38 == (CUser *)0x0) {
            local_1c[local_14 * 0x2a] = 0xff;
          }
          else {
            iVar3 = CUser::GetGameServer(local_38);
            if (iVar3 == 0) {
              local_1c[local_14 * 0x2a] = 0xff;
            }
            else {
              CUser::GetUniqCharNo(local_3c);
              cVar1 = CUser::IsBlackUser((uint)local_38);
              if (cVar1 != '\0') {
                local_1c[local_14 * 0x2a + 0x20] = 1;
              }
              puVar5 = local_1c + local_14 * 0x2a;
              pCVar4 = (CServerInterface *)CUser::GetGameServer(local_38);
              uVar2 = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(pCVar4);
              *puVar5 = uVar2;
            }
          }
          local_1c[local_14 * 0x2a + 1] = *(undefined1 *)(local_24 + local_14 * 0x27 + 0x2c);
          memcpy(local_1c + local_14 * 0x2a + 2,(void *)(local_14 * 0x27 + local_24 + 0x2d),0x1d);
          *(undefined4 *)(local_1c + local_14 * 0x2a + 0x22) =
               *(undefined4 *)(local_24 + local_14 * 0x27 + 0x4b);
          CMemberManager::_ZN14CMemberManager33GetMemberExpNextLevelNeedExpLevelERjS0_Rh
                    (local_28,(uint *)(local_1c + local_14 * 0x2a + 0x22),
                     (uint *)(local_1c + local_14 * 0x2a + 0x26),local_1c + local_14 * 0x2a + 0x21);
        }
        local_18 = (uint)*(byte *)(local_24 + 0x27) * 0x2a + 0x3d;
        CUser::SendToGameserver(local_3c,(char *)local_22d,local_18);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 1425 行）：

```cpp
void CPacketTranslater::OnCallMemberList(PacketHeader* pkt)
{
    if (m_pclApp != 0)
    {
        try
        {
            CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
            CMemberManager* memberMgr = (CMemberManager*)((char*)m_pclApp + 0x2d0);
            CUser* user = userMgr->FindUser_CharNo(((RA_UINT<14>*)pkt)->v);
            if (user != 0)
            {
                user->GetUniqCharNo();
                CMember* member = memberMgr->FindMember(user->GetUniqCharNo());
                if (member != 0)
                {
                    Packet_Monitor_Call_Member_List_ToUser rpkt;
                    rpkt.m_idByChannel = user->GetIdByChannel();
                    rpkt.m_uniqCharNo = user->GetUniqCharNo();
                    unsigned char* db = member->GetMemberDBInfo();
                    CUser* upperUser = userMgr->FindUser_CharNo(*(unsigned int*)db);
                    if (upperUser == 0)
                    {
                        rpkt.m_memberList.m_info.m_field0 = 0xff;
                    }
                    else if (upperUser->GetGameServer() == 0)
                    {
                        rpkt.m_memberList.m_info.m_field0 = 0xff;
                    }
                    else
                    {
                        if (upperUser->IsBlackUser(user->GetUniqCharNo()) != 0)
                        {
                            rpkt.m_memberList.m_info.m_field20 = 1;
                        }
                        rpkt.m_memberList.m_info.m_field0 =
                            ((CServerInterface*)upperUser->GetGameServer())->GetChannelNo();
                    }
                    rpkt.m_memberList.m_info.m_field1 = *(unsigned char*)(db + 4);
                    memcpy(rpkt.m_memberList.m_info.m_name, db + 5, 0x1d);
                    rpkt.m_memberList.m_info.m_field22 = *(unsigned int*)(db + 0x23);
                    unsigned int upperExp = rpkt.m_memberList.m_info.m_field22;
                    unsigned int upperExpNext = rpkt.m_memberList.m_info.m_field26;
                    unsigned char upperExpLevel = rpkt.m_memberList.m_info.m_field21;
                    memberMgr->GetMemberExpNextLevelNeedExpLevel(
                        upperExp, upperExpNext, upperExpLevel);
                    rpkt.m_memberList.m_info.m_field22 = upperExp;
                    rpkt.m_memberList.m_info.m_field26 = upperExpNext;
                    rpkt.m_memberList.m_info.m_field21 = upperExpLevel;
                    rpkt.m_memberList.m_count = *(unsigned char*)(db + 0x27);
                    for (int i = 0; i < (int)(unsigned int)*(unsigned char*)(db + 0x27); i++)
                    {
                        char* entry = (char*)&rpkt.m_memberList.m_members[i];
                        unsigned int lowerCharNo = *(unsigned int*)(db + i * 0x27 + 0x28);
                        CUser* lowerUser = userMgr->FindUser_CharNo(lowerCharNo);
                        if (lowerUser == 0)
                        {
                            entry[0] = 0xff;
                        }
                        else if (lowerUser->GetGameServer() == 0)
                        {
                            entry[0] = 0xff;
                        }
                        else
                        {
                            if (lowerUser->IsBlackUser(user->GetUniqCharNo()) != 0)
                            {
                                entry[0x20] = 1;
                            }
                            entry[0] =
                                ((CServerInterface*)lowerUser->GetGameServer())->GetChannelNo();
                        }
                        entry[1] = *(unsigned char*)(db + i * 0x27 + 0x2c);
                        memcpy(entry + 2, db + i * 0x27 + 0x2d, 0x1d);
                        *(unsigned int*)(entry + 0x22) =
                            *(unsigned int*)(db + i * 0x27 + 0x4b);
                        memberMgr->GetMemberExpNextLevelNeedExpLevel(
                            *(unsigned int*)(entry + 0x22), *(unsigned int*)(entry + 0x26),
                            *(unsigned char*)(entry + 0x21));
                    }
                    int size = (int)(unsigned int)*(unsigned char*)(db + 0x27) * 0x2a + 0x3d;
                    user->SendToGameserver((char*)&rpkt, size);
                }
            }
        }
        catch (CDNFException& e)
        {
            printf("CPacketTranslater::OnCallMemberList() Exception Break : %s\n", e.what());
            DNF_LOG_SCOPE_LINE(0x7cd, "./log/Except",
                "CPacketTranslater::OnCallMemberList() Exception Break : %s\n", e.what());
        }
        catch (...)
        {
            puts("CPacketTranslater::OnCallMemberList() Exception Break");
            DNF_LOG_SCOPE_LINE(0x7d3, "./log/Except", "CPacketTranslater::OnCallMemberList() Exception Break\n");
        }
    }
}
```
