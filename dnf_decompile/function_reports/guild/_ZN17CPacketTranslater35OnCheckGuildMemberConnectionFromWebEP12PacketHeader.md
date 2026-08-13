# _ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader

`CPacketTranslater::OnCheckGuildMemberConnectionFromWeb(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807c28a` | `0x61d` | `0x80726f6` | `0x5ec` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,451 +1,438 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x66c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0xf2>
 lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x4d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnCheckGuildMemberConnectionFromWeb : 0 == m_pclApp",0x4(%esp)
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
 jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x98>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x92>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0xb7>
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0xcf>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x52e>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x505>
 lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
 mov    0xa(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x1df>
+mov    %eax,-0x34(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0x4(%eax),%eax
+mov    %ax,-0x2e(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x34(%ebp)
+jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x1f2>
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x45(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnCheckGuildMemberConnectionFromWeb : packet->m_uGuildKey == 0",0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x4c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x185>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x198>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x17f>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x1a4>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x1a4>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x192>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x1b7>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x1b7>
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x1bc>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x1a4>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x1cf>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x1b7>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x52e>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x505>
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-lea    -0x640(%ebp),%eax
+lea    -0x650(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN46Packet_Answer_Guild_Member_Connection_From_WebC1Ev>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x636(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    -0x34(%ebp),%eax
+mov    %eax,-0x646(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x34(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x23a>
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+je     <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x246>
 movl   $0x4,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x241>
+je     <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x24d>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x246>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x252>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x3ae>
-movzwl -0x632(%ebp),%edx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-add    $0x10,%eax
-mov    %ax,-0x63e(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x6(%eax),%eax
-mov    %eax,-0x650(%ebp)
-mov    -0x20(%ebp),%eax
-movzwl 0x4(%eax),%eax
-movzwl %ax,%edi
-movzwl -0x63e(%ebp),%eax
-movzwl %ax,%esi
-lea    -0x640(%ebp),%ebx
+je     <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x39b>
+movw   $0x10,-0x22(%ebp)
+movzwl -0x22(%ebp),%eax
+mov    %ax,-0x64e(%ebp)
+movzwl -0x2e(%ebp),%edi
+movzwl -0x22(%ebp),%esi
+lea    -0x650(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14Get_UdpHandlerEv>
-mov    -0x650(%ebp),%edx
+mov    -0x2c(%ebp),%edx
 mov    %edx,0x14(%esp)
 movl   $0x0,0x10(%esp)
 mov    %edi,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x60e>
+je     <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x5e1>
 lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 lea    -0x3d(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x44(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x354>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x341>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x34e>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x373>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x373>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x33b>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x360>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x360>
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x38b>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x373>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x378>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x360>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x52e>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x505>
 lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-lea    -0x640(%ebp),%eax
+lea    -0x650(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo>
-mov    %ax,-0x632(%ebp)
-movzwl -0x632(%ebp),%edx
+mov    %ax,-0x20(%ebp)
+movzwl -0x20(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    $0x10,%eax
-mov    %ax,-0x63e(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x6(%eax),%eax
-mov    %eax,-0x64c(%ebp)
-mov    -0x20(%ebp),%eax
-movzwl 0x4(%eax),%eax
-movzwl %ax,%edi
-movzwl -0x63e(%ebp),%eax
-movzwl %ax,%esi
-lea    -0x640(%ebp),%ebx
+mov    %ax,-0x1e(%ebp)
+movzwl -0x1e(%ebp),%eax
+mov    %ax,-0x64e(%ebp)
+movzwl -0x2e(%ebp),%edi
+movzwl -0x1e(%ebp),%esi
+lea    -0x650(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14Get_UdpHandlerEv>
-mov    -0x64c(%ebp),%edx
+mov    -0x2c(%ebp),%edx
 mov    %edx,0x14(%esp)
 movl   $0x0,0x10(%esp)
 mov    %edi,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x611>
+je     <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x5e1>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 lea    -0x35(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x3c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x4d3>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x4aa>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x4cd>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x4f2>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x4f2>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x4a4>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x4c9>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x4c9>
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x507>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x4f2>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x4de>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x4c9>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x52e>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x505>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x5ae>
+jne    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x583>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0xd6e,0x8(%esp)
+movl   $"OnCheckGuildMemberConnectionFromWeb",0x4(%esp)
+lea    -0x5c(%ebp),%eax
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
-movl   $0xd6e,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnCheckGuildMemberConnectionFromWeb() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x5a7>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x57c>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x612>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x5e1>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xd73,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCheckGuildMemberConnectionFromWeb() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x607>
+jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x5dc>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x612>
-nop
-jmp    <T> <_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader+0x612>
-nop
 add    $0x66c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnCheckGuildMemberConnectionFromWeb(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader
               (PacketHeader *param_1)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  CDNFException *pCVar5;
  CUdpHandler *pCVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  Packet_Answer_Guild_Member_Connection_From_Web local_644 [2];
  ushort local_642;
  undefined4 local_63a;
  short local_636;
  STGuildMemberWebConnInfo aSStack_634 [1500];
  string local_58 [7];
  allocator local_51;
  string local_50 [7];
  allocator local_49;
  string local_48 [7];
  allocator local_41;
  string local_40 [7];
  allocator local_39 [17];
  CGuild *local_28;
  PacketHeader *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807c2c3 to 0807c2c7 has its CatchHandler @ 0807c33d */
    std::string::string(local_58,
                        "CPacketTranslater::OnCheckGuildMemberConnectionFromWeb : 0 == m_pclApp",
                        &local_51);
    pCVar5 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807c2e2 to 0807c2e6 has its CatchHandler @ 0807c2e9 */
    CDNFException::CDNFException(pCVar5,local_58);
                    /* try { // try from 0807c328 to 0807c32c has its CatchHandler @ 0807c32f */
    std::string::~string(local_58);
    std::allocator<char>::~allocator((allocator<char> *)&local_51);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807c377 to 0807c37b has its CatchHandler @ 0807c7b4 */
    __cxa_throw(pCVar5,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  if (*(int *)(param_1 + 10) != 0) {
    Packet_Answer_Guild_Member_Connection_From_Web::Packet_Answer_Guild_Member_Connection_From_Web
              (local_644);
    local_63a = *(undefined4 *)(local_24 + 10);
    local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
    if ((local_28 == (CGuild *)0x0) ||
       (cVar4 = CGuild::IsSetGuildDBFlag(local_28,4), cVar4 != '\x01')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      local_642 = local_636 * 5 + 0x10;
      uVar2 = *(uint *)(local_24 + 6);
      uVar1 = *(ushort *)(local_24 + 4);
      uVar9 = (uint)local_642;
      pCVar6 = (CUdpHandler *)CApplication::Get_UdpHandler(m_pclApp);
      cVar4 = CUdpHandler::SendToClient(pCVar6,(char *)local_644,uVar9,uVar1,(char *)0x0,uVar2);
      if (cVar4 != '\x01') {
        std::allocator<char>::allocator();
        piVar7 = __errno_location();
        pcVar8 = strerror(*piVar7);
                    /* try { // try from 0807c57f to 0807c583 has its CatchHandler @ 0807c5f9 */
        std::string::string(local_48,pcVar8,&local_41);
        pCVar5 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807c59e to 0807c5a2 has its CatchHandler @ 0807c5a5 */
        CDNFException::CDNFException(pCVar5,local_48);
                    /* try { // try from 0807c5e4 to 0807c5e8 has its CatchHandler @ 0807c5eb */
        std::string::~string(local_48);
        std::allocator<char>::~allocator((allocator<char> *)&local_41);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807c633 to 0807c6c7 has its CatchHandler @ 0807c7b4 */
        __cxa_throw(pCVar5,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
      }
    }
    else {
      local_636 = CGuild::ReplyGuildMembersToWeb(local_28,aSStack_634);
      local_642 = local_636 * 5 + 0x10;
      uVar2 = *(uint *)(local_24 + 6);
      uVar1 = *(ushort *)(local_24 + 4);
      uVar9 = (uint)local_642;
      pCVar6 = (CUdpHandler *)CApplication::Get_UdpHandler(m_pclApp);
      cVar4 = CUdpHandler::SendToClient(pCVar6,(char *)local_644,uVar9,uVar1,(char *)0x0,uVar2);
      if (cVar4 != '\x01') {
        std::allocator<char>::allocator();
        piVar7 = __errno_location();
        pcVar8 = strerror(*piVar7);
                    /* try { // try from 0807c6fe to 0807c702 has its CatchHandler @ 0807c778 */
        std::string::string(local_40,pcVar8,local_39);
        pCVar5 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807c71d to 0807c721 has its CatchHandler @ 0807c724 */
        CDNFException::CDNFException(pCVar5,local_40);
                    /* try { // try from 0807c763 to 0807c767 has its CatchHandler @ 0807c76a */
        std::string::~string(local_40);
        std::allocator<char>::~allocator((allocator<char> *)local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807c7af to 0807c7b3 has its CatchHandler @ 0807c7b4 */
        __cxa_throw(pCVar5,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0807c3b0 to 0807c3b4 has its CatchHandler @ 0807c42a */
  std::string::string(local_50,
                      "CPacketTranslater::OnCheckGuildMemberConnectionFromWeb : packet->m_uGuildKey == 0"
                      ,&local_49);
  pCVar5 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807c3cf to 0807c3d3 has its CatchHandler @ 0807c3d6 */
  CDNFException::CDNFException(pCVar5,local_50);
                    /* try { // try from 0807c415 to 0807c419 has its CatchHandler @ 0807c41c */
  std::string::~string(local_50);
  std::allocator<char>::~allocator((allocator<char> *)&local_49);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807c464 to 0807c548 has its CatchHandler @ 0807c7b4 */
  __cxa_throw(pCVar5,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3301 行）：

```cpp
void CPacketTranslater::OnCheckGuildMemberConnectionFromWeb(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnCheckGuildMemberConnectionFromWeb : 0 == m_pclApp");
    unsigned int guildKey = ((PTL_CheckGuildMemberConnectionFromWebPkt*)pkt)->m_guildKey;
    unsigned short port = ((PTL_CheckGuildMemberConnectionFromWebPkt*)pkt)->m_port;
    unsigned int ip = ((PTL_CheckGuildMemberConnectionFromWebPkt*)pkt)->m_ip;
    if (guildKey == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnCheckGuildMemberConnectionFromWeb : packet->m_uGuildKey == 0");
    }
    {
        Packet_Answer_Guild_Member_Connection_From_Web resp;
        resp.m_guildKey = guildKey;
        CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
        if (guild == 0 || guild->IsSetGuildDBFlag(4) != 1)
        {
            unsigned short size = (unsigned short)(0 * 5 + 0x10);
            resp.packetSize = size;
            if (m_pclApp->Get_UdpHandler()->SendToClient((char*)&resp, (int)size, port, 0, ip) != 1)
            {
                throw CDNFException(strerror(errno));
            }
        }
        else
        {
            short count = (short)guild->ReplyGuildMembersToWeb(
                (STGuildMemberWebConnInfo*)((char*)&resp + 0x10));
            unsigned short size = (unsigned short)(count * 5 + 0x10);
            resp.packetSize = size;
            if (m_pclApp->Get_UdpHandler()->SendToClient((char*)&resp, (int)size, port, 0, ip) != 1)
            {
                throw CDNFException(strerror(errno));
            }
        }
    }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnCheckGuildMemberConnectionFromWeb", 0xd6e);
        log("./log/Except", "CPacketTranslater::OnCheckGuildMemberConnectionFromWeb() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0xd73);
        log("./log/Except", "CPacketTranslater::OnCheckGuildMemberConnectionFromWeb() Exception Break\n");
    }
}
```
