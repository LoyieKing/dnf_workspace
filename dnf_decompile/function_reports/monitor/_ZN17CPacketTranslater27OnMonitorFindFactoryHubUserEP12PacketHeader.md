# _ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader

`CPacketTranslater::OnMonitorFindFactoryHubUser(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808b754` | `0x4f4` | `0x8076ccc` | `0x4cb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,349 +1,338 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x9c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0xe2>
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x51(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnMonitorFindFactoryHubUser : 0 == m_pclApp",0x4(%esp)
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x58(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0xa7>
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3de>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3b5>
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-movl   $0x0,-0x30(%ebp)
-mov    0x8(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x30(%ebp)
+movl   $0x0,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
 movzbl 0xe(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1b5>
-mov    -0x2c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1ae>
+mov    0x8(%ebp),%eax
 movzbl 0xe(%eax),%eax
 cmp    $0x1d,%al
-ja     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1b5>
+ja     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1ae>
 lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x2c(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0xf(%eax),%edx
 lea    -0x49(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x10(%eax),%edx
 lea    -0x50(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
 mov    %eax,-0x28(%ebp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x188>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x170>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x49(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3b5>
+lea    -0x49(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
 cmpl   $0x0,-0x28(%ebp)
-setne  %bl
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x18f>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x177>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3de>
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1ae>
+je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1a6>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x30(%ebp)
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1b5>
-movl   $0xffffffff,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
-je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x318>
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x20(%ebp)
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1ab>
+mov    $0xffffffff,%eax
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
+je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x2ef>
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4bf>
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN35Packet_Notice_Find_Factory_Hub_UserC1Ev>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4e8>
-lea    -0x8c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN35Packet_Notice_Find_Factory_Hub_UserC1Ev>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x10(%eax),%edx
-mov    -0x30(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x28b>
+jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x294>
 mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x82(%ebp)
+movb   $0x0,-0x5f(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0xe(%eax),%eax
+mov    %al,-0x7e(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0xe(%eax),%eax
+movzbl %al,%eax
+mov    0x8(%ebp),%edx
+add    $0xf,%edx
+mov    %eax,0x8(%esp)
+mov    %edx,0x4(%esp)
+lea    -0x8c(%ebp),%eax
+add    $0xf,%eax
+mov    %eax,(%esp)
+call   <T> <strncpy>
+mov    0x8(%ebp),%eax
+movzwl 0x2d(%eax),%eax
+mov    %ax,-0x5e(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x2f(%eax),%eax
+mov    %eax,-0x5c(%ebp)
+lea    -0x8c(%ebp),%eax
+movw   $0x34,0x2(%eax)
+lea    -0x8c(%ebp),%eax
+movl   $0x34,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4c0>
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
 mov    %eax,-0x82(%ebp)
 movb   $0x1,-0x5f(%ebp)
 movb   $0x0,-0x7e(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzwl 0x2d(%eax),%eax
 mov    %ax,-0x5e(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0x2f(%eax),%eax
 mov    %eax,-0x5c(%ebp)
-movw   $0x34,-0x8a(%ebp)
-movzwl -0x8a(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x8c(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+lea    -0x8c(%ebp),%eax
+movw   $0x34,0x2(%eax)
+lea    -0x8c(%ebp),%eax
+movl   $0x34,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4e9>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x82(%ebp)
-movb   $0x0,-0x5f(%ebp)
-mov    -0x2c(%ebp),%eax
-movzbl 0xe(%eax),%eax
-mov    %al,-0x7e(%ebp)
-mov    -0x2c(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%eax
-mov    -0x2c(%ebp),%edx
-add    $0xf,%edx
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-lea    -0x8c(%ebp),%eax
-add    $0xf,%eax
-mov    %eax,(%esp)
-call   <T> <strncpy>
-mov    -0x2c(%ebp),%eax
-movzwl 0x2d(%eax),%eax
-mov    %ax,-0x5e(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0x2f(%eax),%eax
-mov    %eax,-0x5c(%ebp)
-movw   $0x34,-0x8a(%ebp)
-movzwl -0x8a(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x8c(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4e9>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4c0>
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnMonitorFindFactoryHubUser",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x48(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x38f>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x366>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x389>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x360>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3a6>
+jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x37d>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3a6>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x37d>
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3bb>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x392>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3a6>
+jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x37d>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3de>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3b5>
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x480>
+jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x457>
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
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildChatMsg() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1629,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnMonitorFindFactoryHubUser() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x479>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x450>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4e9>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4c0>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnNoticeGuildChatMsg() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x162f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnMonitorFindFactoryHubUser() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4e1>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4b8>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4e9>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4c0>
 nop
 add    $0x9c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnMonitorFindFactoryHubUser(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *pCVar1;
  bool bVar2;
  Packet_Notice_Find_Factory_Hub_User local_90 [2];
  undefined2 local_8e;
  undefined4 local_86;
  PacketHeader local_82;
  char acStack_81 [30];
  undefined1 local_63;
  undefined2 local_62;
  undefined4 local_60;
  string local_5c [7];
  allocator local_55;
  string local_54 [7];
  allocator local_4d;
  string local_4c [7];
  allocator local_45 [17];
  int local_34;
  PacketHeader *local_30;
  CUser *local_2c;
  CUser *local_28;
  CUser *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808b78d to 0808b791 has its CatchHandler @ 0808b7fb */
    std::string::string(local_5c,"CPacketTranslater::OnMonitorFindFactoryHubUser : 0 == m_pclApp",
                        &local_55);
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808b7ac to 0808b7b0 has its CatchHandler @ 0808b7b3 */
    CDNFException::CDNFException(pCVar1,local_5c);
                    /* try { // try from 0808b7ea to 0808b7ee has its CatchHandler @ 0808b7f1 */
    std::string::~string(local_5c);
    std::allocator<char>::~allocator((allocator<char> *)&local_55);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808b831 to 0808b835 has its CatchHandler @ 0808bb32 */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_34 = 0;
  local_30 = param_1;
  if ((param_1[0xe] != (PacketHeader)0x0) && ((byte)param_1[0xe] < 0x1e)) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808b883 to 0808b887 has its CatchHandler @ 0808b8cb */
    std::string::string(local_54,(char *)(local_30 + 0xf),&local_4d);
                    /* try { // try from 0808b89a to 0808b89e has its CatchHandler @ 0808b8b6 */
    local_2c = (CUser *)CUserManager::FindUser_CharName(m_pclApp + 0x10,local_54);
    bVar2 = local_2c == (CUser *)0x0;
                    /* try { // try from 0808b8af to 0808b8b3 has its CatchHandler @ 0808b8cb */
    std::string::~string(local_54);
    std::allocator<char>::~allocator((allocator<char> *)&local_4d);
    if (bVar2) {
      local_34 = -1;
    }
    else {
      local_34 = CUser::GetUniqCharNo(local_2c);
    }
  }
  if (local_34 != 0) {
    local_28 = (CUser *)0x0;
    local_24 = (CUser *)0x0;
                    /* try { // try from 0808b937 to 0808ba66 has its CatchHandler @ 0808bb32 */
    local_24 = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
    if (local_24 != (CUser *)0x0) {
      Packet_Notice_Find_Factory_Hub_User::Packet_Notice_Find_Factory_Hub_User(local_90);
      local_28 = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
      if (local_28 == (CUser *)0x0) {
        local_86 = CUser::GetIdByChannel(local_24);
        local_63 = 0;
        local_82 = local_30[0xe];
        strncpy(acStack_81,(char *)(local_30 + 0xf),(uint)(byte)local_30[0xe]);
        local_62 = *(undefined2 *)(local_30 + 0x2d);
        local_60 = *(undefined4 *)(local_30 + 0x2f);
        local_8e = 0x34;
        CUser::SendToGameserver(local_24,(char *)local_90,0x34);
      }
      else {
        local_86 = CUser::GetIdByChannel(local_28);
        local_63 = 1;
        local_82 = (PacketHeader)0x0;
        local_62 = *(undefined2 *)(local_30 + 0x2d);
        local_60 = *(undefined4 *)(local_30 + 0x2f);
        local_8e = 0x34;
        CUser::SendToGameserver(local_28,(char *)local_90,0x34);
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0808ba8c to 0808ba90 has its CatchHandler @ 0808bafa */
  std::string::string(local_4c,"CPacketTranslater::OnMonitorFindFactoryHubUser",local_45);
  pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808baab to 0808baaf has its CatchHandler @ 0808bab2 */
  CDNFException::CDNFException(pCVar1,local_4c);
                    /* try { // try from 0808bae9 to 0808baed has its CatchHandler @ 0808baf0 */
  std::string::~string(local_4c);
  std::allocator<char>::~allocator((allocator<char> *)local_45);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808bb2d to 0808bb31 has its CatchHandler @ 0808bb32 */
  __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3907 行）：

```cpp
void CPacketTranslater::OnMonitorFindFactoryHubUser(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnMonitorFindFactoryHubUser : 0 == m_pclApp");
    }
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    int targetCharNo = 0;
    if (((RA_S8<14>*)pkt)->v != 0 &&
        (unsigned char)((RA_S8<14>*)pkt)->v < 0x1e)
    {
        CUser* target = userMgr->FindUser_CharName((char*)pkt + 0xf);
        targetCharNo = target != 0 ? (int)target->GetUniqCharNo() : -1;
    }
    if (targetCharNo != 0)
    {
        CUser* userA = userMgr->FindUser_CharNo(((RA_UINT<10>*)pkt)->v);
        if (userA != 0)
        {
            Packet_Notice_Find_Factory_Hub_User reply;
            CUser* userB = userMgr->FindUser_CharNo(((RA_UINT<10>*)pkt)->v);
            if (userB == 0)
            {
                reply.m_idByChannel = userA->GetIdByChannel();
                reply.m_found = 0;
                reply.m_nameLen = ((RA_U8<14>*)pkt)->v;
                strncpy(reply.m_name, (char*)pkt + 0xf,
                        (unsigned int)(unsigned char)((RA_S8<14>*)pkt)->v);
                reply.m_field2e = ((RA_U16<45>*)pkt)->v;
                reply.m_field30 = ((RA_UINT<47>*)pkt)->v;
                ((RA_U16<2>*)&reply)->v = 0x34;
                userA->SendToGameserver((char*)&reply, 0x34);
            }
            else
            {
                reply.m_idByChannel = userB->GetIdByChannel();
                reply.m_found = 1;
                reply.m_nameLen = 0;
                reply.m_field2e = ((RA_U16<45>*)pkt)->v;
                reply.m_field30 = ((RA_UINT<47>*)pkt)->v;
                ((RA_U16<2>*)&reply)->v = 0x34;
                userB->SendToGameserver((char*)&reply, 0x34);
            }
        }
        return;
    }
    throw CDNFException("CPacketTranslater::OnMonitorFindFactoryHubUser");


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnNoticeGuildChatMsg() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x1629, "./log/Except", "CPacketTranslater::OnMonitorFindFactoryHubUser() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnNoticeGuildChatMsg() Exception Break");
        DNF_LOG_SCOPE_LINE(0x162f, "./log/Except", "CPacketTranslater::OnMonitorFindFactoryHubUser() Exception Break\n");
    }
}
```
