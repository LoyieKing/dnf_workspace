# _ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader

`CPacketTranslater::OnNoticeOtherChannelChatMsg(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8084830` | `0x85b` | `0x806b69a` | `0x7d0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,565 +1,535 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x1ac,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0xe2>
-lea    -0x55(%ebp),%eax
+lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x55(%ebp),%eax
+lea    -0x59(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeBuddyChatMsg : 0 == m_pclApp",0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x5c(%ebp),%esi
+lea    -0x60(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x5c(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0xa7>
-lea    -0x5c(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x55(%ebp),%eax
+lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x777>
-lea    -0x55(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x6ec>
+lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x30(%ebp)
+mov    0x8(%ebp),%eax
 movzbl 0x1b(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x1b4>
-mov    -0x2c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x1aa>
+mov    0x8(%ebp),%eax
 movzbl 0x1b(%eax),%eax
 cmp    $0x1d,%al
-ja     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x1b4>
-lea    -0x4d(%ebp),%eax
+ja     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x1aa>
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x2c(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
-lea    -0x4d(%ebp),%eax
+lea    -0x51(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x10(%eax),%edx
-lea    -0x54(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %bl
-lea    -0x54(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x188>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x54(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x181>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x170>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x4d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x169>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x777>
-lea    -0x4d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x6ec>
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x1aa>
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x2c(%ebp),%edx
-mov    %eax,0x17(%edx)
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x1b4>
-mov    -0x2c(%ebp),%eax
-movl   $0xffffffff,0x17(%eax)
-mov    -0x2c(%ebp),%eax
+mov    0x8(%ebp),%ebx
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x1a2>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x1a7>
+mov    $0xffffffff,%eax
+mov    %eax,0x17(%ebx)
+mov    0x8(%ebp),%eax
 mov    0x13(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x659>
-mov    -0x2c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x1cd>
+mov    0x8(%ebp),%eax
 mov    0x17(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x659>
-mov    -0x2c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x1cd>
+mov    0x8(%ebp),%eax
 movzbl 0x3a(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x659>
-lea    -0x193(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN40Packet_Monitor_Other_Channel_Chat_ToUserC1Ev>
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x189(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0x13(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x84f>
-mov    -0x2c(%ebp),%eax
-mov    0x17(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x2cc>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x184(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x180(%ebp)
-mov    -0x2c(%ebp),%eax
-add    $0x1c,%eax
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x193(%ebp),%eax
-add    $0x17,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-movb   $0x1,-0x15e(%ebp)
-movw   $0x37,-0x191(%ebp)
-movzwl -0x191(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x193(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x850>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11IsBlackUserEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x315>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x315>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x31a>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x39b>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x184(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x180(%ebp)
-movb   $0x2,-0x15e(%ebp)
-mov    -0x2c(%ebp),%eax
-add    $0x1c,%eax
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x193(%ebp),%eax
-add    $0x17,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-movw   $0x37,-0x191(%ebp)
-movzwl -0x191(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x193(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x850>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11IsBlackUserEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x3e4>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x3e4>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x3e9>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x46a>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x184(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x180(%ebp)
-movb   $0x2,-0x15e(%ebp)
-mov    -0x2c(%ebp),%eax
-add    $0x1c,%eax
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x193(%ebp),%eax
-add    $0x17,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-movw   $0x37,-0x191(%ebp)
-movzwl -0x191(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x193(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x850>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x4b9>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN12CApplication22AddChattableUserWithGMEjj>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x516>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN12CApplication20isAbleUserChatWithGMEjj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x516>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x51b>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x59c>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x184(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x180(%ebp)
-movb   $0x3,-0x15e(%ebp)
-mov    -0x2c(%ebp),%eax
-add    $0x1c,%eax
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x193(%ebp),%eax
-add    $0x17,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-movw   $0x37,-0x191(%ebp)
-movzwl -0x191(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x193(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x850>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x193(%ebp),%eax
-add    $0x17,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x184(%ebp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x180(%ebp)
-mov    -0x2c(%ebp),%eax
-movzbl 0x3a(%eax),%eax
-mov    %al,-0x15d(%ebp)
-mov    -0x2c(%ebp),%eax
-movzbl 0x3a(%eax),%eax
-movzbl %al,%eax
-mov    -0x2c(%ebp),%edx
-add    $0x3b,%edx
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-lea    -0x193(%ebp),%eax
-add    $0x37,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x2c(%ebp),%eax
-movzbl 0x3a(%eax),%eax
-movzbl %al,%eax
-add    $0x37,%eax
-mov    %ax,-0x191(%ebp)
-movzwl -0x191(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x193(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-nop
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x850>
-mov    -0x2c(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x2ee>
+mov    0x8(%ebp),%eax
 movzbl 0x3a(%eax),%eax
 movzbl %al,%edi
-mov    -0x2c(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0x17(%eax),%esi
-mov    -0x2c(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0x13(%eax),%ebx
 movl   $0xb46,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeOtherChannelChatMsg, sender(%d), receiver(%d), msglen(%d)",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x3d(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x3d(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeOtherChannelChatMsg : packet->m_uSenderCharID &&  packet->m_uRecverCharID && packet->m_msgLen",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x44(%ebp),%esi
+lea    -0x48(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x728>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x29c>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x722>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x296>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x73f>
+jne    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x2b3>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x73f>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x2b3>
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x754>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x2cb>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x73f>
+jne    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x2b3>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x3d(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x777>
-lea    -0x3d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x6ec>
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+lea    -0x197(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN40Packet_Monitor_Other_Channel_Chat_ToUserC1Ev>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x18d(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x13(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x7c4>
+mov    0x8(%ebp),%eax
+mov    0x17(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+jne    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x3c2>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x188(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x184(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x1c,%eax
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x197(%ebp),%eax
+add    $0x17,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+movb   $0x1,-0x162(%ebp)
+lea    -0x197(%ebp),%eax
+movw   $0x37,0x2(%eax)
+lea    -0x197(%ebp),%eax
+movl   $0x37,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x7c5>
+movb   $0x0,-0x22(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11IsBlackUserEj>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x40f>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x40f>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x414>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x41c>
+movb   $0x1,-0x22(%ebp)
+movzbl -0x22(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x470>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11IsBlackUserEj>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x470>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x470>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x475>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x47d>
+movb   $0x1,-0x22(%ebp)
+cmpb   $0x0,-0x22(%ebp)
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x4fd>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x188(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x184(%ebp)
+movb   $0x2,-0x162(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x1c,%eax
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x197(%ebp),%eax
+add    $0x17,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0x197(%ebp),%eax
+movw   $0x37,0x2(%eax)
+lea    -0x197(%ebp),%eax
+movl   $0x37,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x7c5>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x54c>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%ebx
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+mov    %ebx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN12CApplication22AddChattableUserWithGMEjj>
+movb   $0x0,-0x21(%ebp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x5aa>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%ebx
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+mov    %ebx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN12CApplication20isAbleUserChatWithGMEjj>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x5aa>
+movb   $0x1,-0x21(%ebp)
+cmpb   $0x0,-0x21(%ebp)
+je     <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x62a>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x188(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x184(%ebp)
+movb   $0x3,-0x162(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x1c,%eax
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x197(%ebp),%eax
+add    $0x17,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0x197(%ebp),%eax
+movw   $0x37,0x2(%eax)
+lea    -0x197(%ebp),%eax
+movl   $0x37,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x7c5>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x197(%ebp),%eax
+add    $0x17,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x188(%ebp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x184(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0x3a(%eax),%eax
+mov    %al,-0x161(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0x3a(%eax),%eax
+movzbl %al,%eax
+mov    0x8(%ebp),%edx
+add    $0x3b,%edx
+mov    %eax,0x8(%esp)
+mov    %edx,0x4(%esp)
+lea    -0x197(%ebp),%eax
+add    $0x37,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0x197(%ebp),%eax
+mov    0x8(%ebp),%edx
+movzbl 0x3a(%edx),%edx
+movzbl %dl,%edx
+add    $0x37,%edx
+mov    %dx,0x2(%eax)
+lea    -0x197(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%edx
+lea    -0x197(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x7c5>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x7f3>
+jne    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x768>
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
 movl   $0xb4c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"Exception Break : %s",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x7ec>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x761>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x850>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x7c5>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xb51,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Exception Break",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x848>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x7bd>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x850>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader+0x7c5>
 nop
 add    $0x1ac,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNoticeOtherChannelChatMsg(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  undefined4 uVar2;
  char cVar3;
  CDNFException *pCVar4;
  undefined4 uVar5;
  uint uVar6;
  void *__src;
  bool bVar7;
  Packet_Monitor_Other_Channel_Chat_ToUser local_197 [2];
  ushort local_195;
  undefined4 local_18d;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 auStack_180 [30];
  undefined1 local_162;
  PacketHeader local_161;
  undefined1 auStack_160 [256];
  string local_60 [7];
  allocator local_59;
  string local_58 [7];
  allocator local_51;
  CMyFileLog local_50 [8];
  string local_48 [7];
  allocator local_41 [17];
  PacketHeader *local_30;
  CUser *local_2c;
  CUser *local_28;
  CUser *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08084869 to 0808486d has its CatchHandler @ 080848d7 */
    std::string::string(local_60,"CPacketTranslater::OnNoticeBuddyChatMsg : 0 == m_pclApp",&local_59
                       );
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08084888 to 0808488c has its CatchHandler @ 0808488f */
    CDNFException::CDNFException(pCVar4,local_60);
                    /* try { // try from 080848c6 to 080848ca has its CatchHandler @ 080848cd */
    std::string::~string(local_60);
    std::allocator<char>::~allocator((allocator<char> *)&local_59);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808490d to 08084911 has its CatchHandler @ 08084fa7 */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_30 = param_1;
  if ((param_1[0x1b] != (PacketHeader)0x0) && ((byte)param_1[0x1b] < 0x1e)) {
    std::allocator<char>::allocator();
                    /* try { // try from 08084958 to 0808495c has its CatchHandler @ 080849a0 */
    std::string::string(local_58,(char *)(local_30 + 0x1c),&local_51);
                    /* try { // try from 0808496f to 08084973 has its CatchHandler @ 0808498b */
    local_2c = (CUser *)CUserManager::FindUser_CharName(m_pclApp + 0x10,local_58);
    bVar7 = local_2c == (CUser *)0x0;
                    /* try { // try from 08084984 to 08084988 has its CatchHandler @ 080849a0 */
    std::string::~string(local_58);
    std::allocator<char>::~allocator((allocator<char> *)&local_51);
    if (bVar7) {
      *(undefined4 *)(local_30 + 0x17) = 0xffffffff;
    }
    else {
      uVar5 = CUser::GetUniqCharNo(local_2c);
      *(undefined4 *)(local_30 + 0x17) = uVar5;
    }
  }
  if (((*(int *)(local_30 + 0x13) == 0) || (*(int *)(local_30 + 0x17) == 0)) ||
     (local_30[0x3a] == (PacketHeader)0x0)) {
    PVar1 = local_30[0x3a];
    uVar5 = *(undefined4 *)(local_30 + 0x17);
    uVar2 = *(undefined4 *)(local_30 + 0x13);
    CMyFileLog::CMyFileLog(local_50,"OnNoticeOtherChannelChatMsg",0xb46);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_50,"./log/Except",
               "CPacketTranslater::OnNoticeOtherChannelChatMsg, sender(%d), receiver(%d), msglen(%d)"
               ,uVar2,uVar5,(uint)(byte)PVar1);
    std::allocator<char>::allocator();
                    /* try { // try from 08084f01 to 08084f05 has its CatchHandler @ 08084f6f */
    std::string::string(local_48,
                        "CPacketTranslater::OnNoticeOtherChannelChatMsg : packet->m_uSenderCharID &&  packet->m_uRecverCharID && packet->m_msgLen"
                        ,local_41);
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08084f20 to 08084f24 has its CatchHandler @ 08084f27 */
    CDNFException::CDNFException(pCVar4,local_48);
                    /* try { // try from 08084f5e to 08084f62 has its CatchHandler @ 08084f65 */
    std::string::~string(local_48);
    std::allocator<char>::~allocator((allocator<char> *)local_41);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08084fa2 to 08084fa6 has its CatchHandler @ 08084fa7 */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  Packet_Monitor_Other_Channel_Chat_ToUser::Packet_Monitor_Other_Channel_Chat_ToUser(local_197);
  local_18d = *(undefined4 *)(local_30 + 10);
                    /* try { // try from 08084a3f to 08084ee0 has its CatchHandler @ 08084fa7 */
  local_24 = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
  if (local_24 == (CUser *)0x0) {
    return;
  }
  local_28 = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
  if (local_28 == (CUser *)0x0) {
    local_188 = CUser::GetIdByChannel(local_24);
    local_184 = CUser::GetUniqCharNo(local_24);
    memcpy(auStack_180,local_30 + 0x1c,0x1d);
    local_162 = 1;
    local_195 = 0x37;
    CUser::SendToGameserver(local_24,(char *)local_197,0x37);
    return;
  }
  CUser::GetUniqCharNo(local_24);
  cVar3 = CUser::IsBlackUser((uint)local_28);
  if (cVar3 == '\0') {
LAB_08084b45:
    bVar7 = false;
  }
  else {
    CUser::GetUniqCharNo(local_24);
    cVar3 = CApplication::_ZN12CApplication19isGM_regFromChannelEj(m_pclApp);
    if (cVar3 == '\x01') goto LAB_08084b45;
    bVar7 = true;
  }
  if (bVar7) {
    local_188 = CUser::GetIdByChannel(local_24);
    local_184 = CUser::GetUniqCharNo(local_24);
    local_162 = 2;
    memcpy(auStack_180,local_30 + 0x1c,0x1d);
    local_195 = 0x37;
    CUser::SendToGameserver(local_24,(char *)local_197,0x37);
    return;
  }
  CUser::GetUniqCharNo(local_28);
  cVar3 = CUser::IsBlackUser((uint)local_24);
  if (cVar3 == '\0') {
LAB_08084c14:
    bVar7 = false;
  }
  else {
    CUser::GetUniqCharNo(local_28);
    cVar3 = CApplication::_ZN12CApplication19isGM_regFromChannelEj(m_pclApp);
    if (cVar3 == '\x01') goto LAB_08084c14;
    bVar7 = true;
  }
  if (bVar7) {
    local_188 = CUser::GetIdByChannel(local_24);
    local_184 = CUser::GetUniqCharNo(local_24);
    local_162 = 2;
    memcpy(auStack_180,local_30 + 0x1c,0x1d);
    local_195 = 0x37;
    CUser::SendToGameserver(local_24,(char *)local_197,0x37);
    return;
  }
  CUser::GetUniqCharNo(local_24);
  cVar3 = CApplication::_ZN12CApplication19isGM_regFromChannelEj(m_pclApp);
  if (cVar3 != '\0') {
    CUser::GetUniqCharNo(local_28);
    uVar6 = CUser::GetUniqCharNo(local_24);
    CApplication::_ZN12CApplication22AddChattableUserWithGMEjj(m_pclApp,uVar6);
  }
  CUser::GetUniqCharNo(local_28);
  cVar3 = CApplication::_ZN12CApplication19isGM_regFromChannelEj(m_pclApp);
  if (cVar3 != '\0') {
    CUser::GetUniqCharNo(local_24);
    uVar6 = CUser::GetUniqCharNo(local_28);
    cVar3 = CApplication::_ZN12CApplication20isAbleUserChatWithGMEjj(m_pclApp,uVar6);
    if (cVar3 != '\x01') {
      bVar7 = true;
      goto LAB_08084d4b;
    }
  }
  bVar7 = false;
LAB_08084d4b:
  if (bVar7) {
    local_188 = CUser::GetIdByChannel(local_24);
    local_184 = CUser::GetUniqCharNo(local_24);
    local_162 = 3;
    memcpy(auStack_180,local_30 + 0x1c,0x1d);
    local_195 = 0x37;
    CUser::SendToGameserver(local_24,(char *)local_197,0x37);
  }
  else {
    __src = (void *)CUser::GetCharName(local_24);
    memcpy(auStack_180,__src,0x1d);
    local_188 = CUser::GetIdByChannel(local_28);
    local_184 = CUser::GetUniqCharNo(local_28);
    local_161 = local_30[0x3a];
    memcpy(auStack_160,local_30 + 0x3b,(uint)(byte)local_30[0x3a]);
    local_195 = (byte)local_30[0x3a] + 0x37;
    CUser::SendToGameserver(local_28,(char *)local_197,(uint)local_195);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 874 行）：

```cpp
void CPacketTranslater::OnNoticeOtherChannelChatMsg(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnNoticeBuddyChatMsg : 0 == m_pclApp");
    }
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    if (((RA_S8<27>*)pkt)->v != 0 &&
        (unsigned char)((RA_S8<27>*)pkt)->v < 0x1e)
    {
        CUser* target = userMgr->FindUser_CharName((char*)pkt + 0x1c);
        ((RA_UINT<23>*)pkt)->v =
            target != 0 ? target->GetUniqCharNo() : 0xffffffff;
    }
    if (((RA_UINT<19>*)pkt)->v == 0 ||
        ((RA_UINT<23>*)pkt)->v == 0 ||
        ((RA_S8<58>*)pkt)->v == 0)
    {
        DNF_LOG_SCOPE_LINE(0xb46,"./log/Except",
            "CPacketTranslater::OnNoticeOtherChannelChatMsg, sender(%d), receiver(%d), "
            "msglen(%d)",
            ((RA_UINT<19>*)pkt)->v, ((RA_UINT<23>*)pkt)->v,
            (unsigned int)(unsigned char)((RA_S8<58>*)pkt)->v);
        throw CDNFException(
            "CPacketTranslater::OnNoticeOtherChannelChatMsg : packet->m_uSenderCharID &&  "
            "packet->m_uRecverCharID && packet->m_msgLen");
    }
    Packet_Monitor_Other_Channel_Chat_ToUser reply;
    reply.m_senderCharId = ((RA_UINT<10>*)pkt)->v;
    CUser* sender = userMgr->FindUser_CharNo(((RA_UINT<19>*)pkt)->v);
    if (sender == 0)
    {
        return;
    }
    CUser* receiver = userMgr->FindUser_CharNo(((RA_UINT<23>*)pkt)->v);
    if (receiver == 0)
    {
        reply.m_idByChannel = sender->GetIdByChannel();
        reply.m_uniqCharNo = sender->GetUniqCharNo();
        memcpy(reply.m_name, (char*)pkt + 0x1c, 0x1d);
        reply.m_type = 1;
        ((RA_U16<2>*)&reply)->v = 0x37;
        sender->SendToGameserver((char*)&reply, 0x37);
        return;
    }
    bool blocked = false;
    if (receiver->IsBlackUser(sender->GetUniqCharNo()) != 0 &&
        m_pclApp->isGM_regFromChannel(sender->GetUniqCharNo()) != 1)
    {
        blocked = true;
    }
    if (!blocked && sender->IsBlackUser(receiver->GetUniqCharNo()) != 0 &&
        m_pclApp->isGM_regFromChannel(receiver->GetUniqCharNo()) != 1)
    {
        blocked = true;
    }
    if (blocked)
    {
        reply.m_idByChannel = sender->GetIdByChannel();
        reply.m_uniqCharNo = sender->GetUniqCharNo();
        reply.m_type = 2;
        memcpy(reply.m_name, (char*)pkt + 0x1c, 0x1d);
        ((RA_U16<2>*)&reply)->v = 0x37;
        sender->SendToGameserver((char*)&reply, 0x37);
        return;
    }
    if (m_pclApp->isGM_regFromChannel(sender->GetUniqCharNo()) != 0)
    {
        m_pclApp->AddChattableUserWithGM(sender->GetUniqCharNo(), receiver->GetUniqCharNo());
    }
    bool gmBlocked = false;
    if (m_pclApp->isGM_regFromChannel(receiver->GetUniqCharNo()) != 0)
    {
        if (m_pclApp->isAbleUserChatWithGM(receiver->GetUniqCharNo(),
                                           sender->GetUniqCharNo()) != 1)
        {
            gmBlocked = true;
        }
    }
    if (gmBlocked)
    {
        reply.m_idByChannel = sender->GetIdByChannel();
        reply.m_uniqCharNo = sender->GetUniqCharNo();
        reply.m_type = 3;
        memcpy(reply.m_name, (char*)pkt + 0x1c, 0x1d);
        ((RA_U16<2>*)&reply)->v = 0x37;
        sender->SendToGameserver((char*)&reply, 0x37);
    }
    else
    {
        memcpy(reply.m_name, sender->GetCharName(), 0x1d);
        reply.m_idByChannel = receiver->GetIdByChannel();
        reply.m_uniqCharNo = receiver->GetUniqCharNo();
        reply.m_msgLen = ((RA_U8<58>*)pkt)->v;
        memcpy(reply.m_msg, (char*)pkt + 0x3b,
               (unsigned int)(unsigned char)((RA_S8<58>*)pkt)->v);
        ((RA_U16<2>*)&reply)->v =
            (unsigned short)((unsigned char)((RA_S8<58>*)pkt)->v + 0x37);
        receiver->SendToGameserver((char*)&reply,
                                   ((RA_U16<2>*)&reply)->v);
    }


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xb4c, "./log/Except", "Exception Break : %s", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xb51, "./log/Except", "Exception Break");
    }
}
```
