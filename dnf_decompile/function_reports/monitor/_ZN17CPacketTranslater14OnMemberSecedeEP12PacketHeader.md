# _ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader

`CPacketTranslater::OnMemberSecede(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8081be2` | `0x524` | `0x806da0a` | `0x507` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,359 +1,349 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xa0,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x50d>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x4fd>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x30(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x2d0,%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x4fd>
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager10FindMemberEj>
 mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x34(%ebp)
-cmpl   $0x0,-0x34(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x510>
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0xa5>
-mov    -0x1c(%ebp),%eax
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x95>
+mov    0x8(%ebp),%eax
 add    $0x13,%eax
 mov    %eax,0x8(%esp)
 movl   $0x31,0x4(%esp)
-mov    -0x34(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater29SendRequestMemberDeleteResultEP5CUserhPKc>
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x4fd>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x513>
-lea    -0x45(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x4fd>
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x1c(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0x13(%eax),%edx
-lea    -0x45(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x4c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+lea    -0x48(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
-sete   %bl
-lea    -0x4c(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x13a>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x123>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x122>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x10b>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x45(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x403>
-lea    -0x45(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x3ef>
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x1ee>
-mov    -0x1c(%ebp),%eax
+movb   $0x0,-0x11(%ebp)
+movl   $0x0,-0x4c(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x1e4>
+mov    0x8(%ebp),%eax
 lea    0x13(%eax),%edx
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember18DeleteMemberByNameEPcRj>
-mov    %al,-0x21(%ebp)
-cmpb   $0x3,-0x21(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x516>
-mov    -0x34(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    %al,-0x11(%ebp)
+cmpb   $0x3,-0x11(%ebp)
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x4f9>
+mov    -0x24(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x1b9>
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x1af>
 movl   $0x0,0xc(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager28SendToDBMemberUpdateCharInfoEP14CServerHandlerjh>
-movzbl -0x21(%ebp),%edx
-mov    -0x50(%ebp),%eax
+movzbl -0x11(%ebp),%edx
+mov    -0x4c(%ebp),%eax
 movl   $0x2,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh>
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x3ce>
-mov    -0x30(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x3ba>
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x50(%ebp)
-mov    -0x50(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x4c(%ebp)
+mov    -0x4c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    %eax,-0x28(%ebp)
-mov    -0x50(%ebp),%eax
-cmp    -0x20(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x519>
-movb   $0x2,-0x21(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x4c(%ebp),%eax
+cmp    -0x28(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x4fc>
+movb   $0x2,-0x11(%ebp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    -0x50(%ebp),%edx
+mov    -0x4c(%ebp),%edx
 cmp    %edx,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x278>
-mov    -0x50(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x26e>
+mov    -0x4c(%ebp),%eax
 movl   $0x1,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember17DeleteUpperMemberEjb>
-cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x272>
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x268>
 movl   $0x0,0x8(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember17DeleteLowerMemberEjb>
-movb   $0x1,-0x21(%ebp)
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x2b2>
-mov    -0x50(%ebp),%eax
+movb   $0x1,-0x11(%ebp)
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x2a8>
+mov    -0x4c(%ebp),%eax
 movl   $0x1,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember17DeleteLowerMemberEjb>
-cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x2b2>
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x2a8>
 movl   $0x0,0x8(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember17DeleteUpperMemberEjb>
 movl   $0x2,0x10(%esp)
-mov    -0x30(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0xc(%esp)
-mov    -0x34(%ebp),%eax
+mov    -0x24(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h>
+mov    -0x24(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser>
+test   %al,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x313>
+movl   $0x0,0xc(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager28SendToDBMemberUpdateCharInfoEP14CServerHandlerjh>
+mov    -0x18(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h>
-mov    -0x34(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x318>
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x356>
+mov    -0x4c(%ebp),%eax
 movl   $0x0,0xc(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager28SendToDBMemberUpdateCharInfoEP14CServerHandlerjh>
-mov    -0x30(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x356>
-mov    -0x50(%ebp),%eax
-movl   $0x0,0xc(%esp)
-mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager28SendToDBMemberUpdateCharInfoEP14CServerHandlerjh>
-lea    -0x81(%ebp),%eax
+lea    -0x7d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN39Packet_Monitor_Member_Secede_To_SecederC1Ev>
-mov    -0x30(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x77(%ebp)
-mov    -0x50(%ebp),%eax
 mov    %eax,-0x73(%ebp)
-cmpb   $0x1,-0x21(%ebp)
-jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x387>
-movzbl &_ZL12MEMBER_LOWER,%eax
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x38e>
-movzbl &_ZL12MEMBER_UPPER,%eax
-mov    %al,-0x6f(%ebp)
-mov    -0x34(%ebp),%eax
+mov    -0x4c(%ebp),%eax
+mov    %eax,-0x6f(%ebp)
+movb   $0x2,-0x6b(%ebp)
+cmpb   $0x1,-0x11(%ebp)
+jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x383>
+movb   $0x1,-0x6b(%ebp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x81(%ebp),%eax
+lea    -0x7d(%ebp),%eax
 add    $0x13,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0x81(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+lea    -0x7d(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-mov    -0x1c(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0x13(%eax),%edx
-movzbl -0x21(%ebp),%eax
+movzbl -0x11(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater29SendRequestMemberDeleteResultEP5CUserhPKc>
 movl   $0x0,0x4(%esp)
-mov    -0x34(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser21SetMemberRegisterFlagEb>
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x4fd>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x4a5>
+jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x491>
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
 movl   $"CPacketTranslater::OnMemberSecede() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x750,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater14OnMemberSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnMemberSecede() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x49e>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x48a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x4fd>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnMemberSecede() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x756,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater14OnMemberSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnMemberSecede() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x506>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x4f2>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x4fd>
 nop
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
-nop
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
-nop
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
-nop
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x4fd>
 nop
 add    $0xa0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnMemberSecede(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  uint uVar2;
  void *__src;
  bool bVar3;
  Packet_Monitor_Member_Secede_To_Seceder local_85 [10];
  undefined4 local_7b;
  uint local_77;
  undefined1 local_73;
  undefined1 auStack_72 [30];
  uint local_54;
  string local_50 [7];
  allocator local_49 [17];
  CUser *local_38;
  CUser *local_34;
  CMember *local_30;
  CMember *local_2c;
  byte local_25;
  uint local_24;
  PacketHeader *local_20;
  uint local_1c;
  CMemberManager *local_18;
  CServerHandler *local_14;
  
  if (m_pclApp != 0) {
    local_20 = param_1;
    local_1c = m_pclApp + 0x10;
    local_18 = (CMemberManager *)(m_pclApp + 0x2d0);
    local_24 = *(uint *)(param_1 + 0xe);
                    /* try { // try from 08081c2e to 08081c81 has its CatchHandler @ 08081fe5 */
    local_38 = (CUser *)CUserManager::FindUser_CharNo(local_1c);
    if (local_38 != (CUser *)0x0) {
      local_30 = (CMember *)CMemberManager::_ZN14CMemberManager10FindMemberEj((uint)local_18);
      if (local_30 == (CMember *)0x0) {
        SendRequestMemberDeleteResult(local_38,'1',(char *)(local_20 + 0x13));
      }
      else {
        local_14 = *(CServerHandler **)(m_pclApp + 0xa0);
        if (local_14 != (CServerHandler *)0x0) {
          std::allocator<char>::allocator();
                    /* try { // try from 08081cc1 to 08081cc5 has its CatchHandler @ 08081d04 */
          std::string::string(local_50,(char *)(local_20 + 0x13),local_49);
                    /* try { // try from 08081cd3 to 08081cd7 has its CatchHandler @ 08081cef */
          local_34 = (CUser *)CUserManager::FindUser_CharName(local_1c,local_50);
          bVar3 = local_34 == (CUser *)0x0;
                    /* try { // try from 08081ce8 to 08081cec has its CatchHandler @ 08081d04 */
          std::string::~string(local_50);
          std::allocator<char>::~allocator((allocator<char> *)local_49);
          if (bVar3) {
                    /* try { // try from 08081d46 to 08081fdf has its CatchHandler @ 08081fe5 */
            local_25 = CMember::DeleteMemberByName(local_30,(char *)(local_20 + 0x13),&local_54);
            if (local_25 == 3) {
              return;
            }
            cVar1 = CMemberManager::_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser
                              (local_18,local_30,local_38);
            if (cVar1 != '\0') {
              CMemberManager::SendToDBMemberUpdateCharInfo(local_18,local_14,local_24,'\0');
            }
            CMemberManager::_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh
                      (local_18,local_14,local_24,local_54,(uint)local_25,'\x02');
          }
          else {
            local_54 = CUser::GetUniqCharNo(local_34);
            local_2c = (CMember *)CMemberManager::_ZN14CMemberManager10FindMemberEj((uint)local_18);
            if (local_54 == local_24) {
              return;
            }
            local_25 = 2;
            uVar2 = CMember::GetUpperMember_CharId(local_30);
            if (uVar2 == local_54) {
              CMember::DeleteUpperMember(local_30,local_54,true);
              if (local_2c != (CMember *)0x0) {
                CMember::DeleteLowerMember(local_2c,local_24,false);
              }
              local_25 = 1;
            }
            else {
              CMember::DeleteLowerMember(local_30,local_54,true);
              if (local_2c != (CMember *)0x0) {
                CMember::DeleteUpperMember(local_2c,local_24,false);
              }
            }
            CMemberManager::_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h
                      (local_18,local_14,local_38,local_34,'\x02');
            cVar1 = CMemberManager::_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser
                              (local_18,local_30,local_38);
            if (cVar1 != '\0') {
              CMemberManager::SendToDBMemberUpdateCharInfo(local_18,local_14,local_24,'\0');
            }
            cVar1 = CMemberManager::_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser
                              (local_18,local_2c,local_34);
            if (cVar1 != '\0') {
              CMemberManager::SendToDBMemberUpdateCharInfo(local_18,local_14,local_54,'\0');
            }
            Packet_Monitor_Member_Secede_To_Seceder::Packet_Monitor_Member_Secede_To_Seceder
                      (local_85);
            local_7b = CUser::GetIdByChannel(local_34);
            local_77 = local_54;
            local_73 = ::MEMBER_UPPER;
            if (local_25 == 1) {
              local_73 = ::MEMBER_LOWER;
            }
            __src = (void *)CUser::GetCharName(local_38);
            memcpy(auStack_72,__src,0x1d);
            CUser::SendTcpGameserver(local_34,(PacketHeader *)local_85);
          }
          SendRequestMemberDeleteResult(local_38,local_25,(char *)(local_20 + 0x13));
          CUser::SetMemberRegisterFlag(local_38,false);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 1355 行）：

```cpp
void CPacketTranslater::OnMemberSecede(PacketHeader* pkt)
{try
{


    if (m_pclApp != 0)
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CMemberManager* memberMgr = (CMemberManager*)((char*)m_pclApp + 0x2d0);
        unsigned int secederCharNo = ((RA_UINT<14>*)pkt)->v;
        CUser* seceder = userMgr->FindUser_CharNo(secederCharNo);
        if (seceder != 0)
        {
            CMember* member = memberMgr->FindMember(secederCharNo);
            if (member == 0)
            {
                SendRequestMemberDeleteResult(seceder, '1', (char*)pkt + 0x13);
            }
            else
            {
                CServerHandler* handler = m_pclApp->m_serverHandler2;
                if (handler != 0)
                {
                    CUser* target = userMgr->FindUser_CharName((char*)pkt + 0x13);
                    unsigned char result = 0;
                    unsigned int targetKey = 0;
                    if (target == 0)
                    {
                        result = (unsigned char)member->DeleteMemberByName((char*)pkt + 0x13,
                                                                          targetKey);
                        if (result == 3)
                        {
                            return;
                        }
                        if (memberMgr->CheckEmptyMember(member, seceder) != 0)
                        {
                            memberMgr->SendToDBMemberUpdateCharInfo(handler, secederCharNo, 0);
                        }
                        memberMgr->SaveMemberOnUnConnect(handler, secederCharNo, targetKey,
                                                         (unsigned int)result, 2);
                    }
                    else
                    {
                        targetKey = target->GetUniqCharNo();
                        CMember* targetMember = memberMgr->FindMember(targetKey);
                        if (targetKey == secederCharNo)
                        {
                            return;
                        }
                        result = 2;
                        if (member->GetUpperMember_CharId() == (int)targetKey)
                        {
                            member->DeleteUpperMember(targetKey, true);
                            if (targetMember != 0)
                            {
                                targetMember->DeleteLowerMember(secederCharNo, false);
                            }
                            result = 1;
                        }
                        else
                        {
                            member->DeleteLowerMember(targetKey, true);
                            if (targetMember != 0)
                            {
                                targetMember->DeleteUpperMember(secederCharNo, false);
                            }
                        }
                        memberMgr->SaveMemberOnConnect(handler, seceder, target, 2);
                        if (memberMgr->CheckEmptyMember(member, seceder) != 0)
                        {
                            memberMgr->SendToDBMemberUpdateCharInfo(handler, secederCharNo, 0);
                        }
                        if (memberMgr->CheckEmptyMember(targetMember, target) != 0)
                        {
                            memberMgr->SendToDBMemberUpdateCharInfo(handler, targetKey, 0);
                        }
                        Packet_Monitor_Member_Secede_To_Seceder spkt;
                        spkt.m_idByChannel = target->GetIdByChannel();
                        spkt.m_uniqCharNo = targetKey;
                        spkt.m_type = 2;
                        if (result == 1)
                        {
                            spkt.m_type = 1;
                        }
                        memcpy(spkt.m_name, seceder->GetCharName(), 0x1d);
                        target->SendTcpGameserver(&spkt);
                    }
                    SendRequestMemberDeleteResult(seceder, result, (char*)pkt + 0x13);
                    seceder->SetMemberRegisterFlag(false);
                }
            }
        }
    }


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnMemberSecede() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x750, "./log/Except", "CPacketTranslater::OnMemberSecede() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnMemberSecede() Exception Break");
        DNF_LOG_SCOPE_LINE(0x756, "./log/Except", "CPacketTranslater::OnMemberSecede() Exception Break\n");
    }
}
```
