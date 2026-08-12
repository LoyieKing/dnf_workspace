# _ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader

`CPacketTranslater::OnCallGuildAllMembers(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80771b6` | `0x52d` | `0x806d748` | `0x522` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,394 +1,390 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x6c,%esp
+sub    $0x5c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0xef>
-lea    -0x55(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x55(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnCallGuildAllMembers : 0 == m_pclApp",0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x5c(%ebp),%esi
+lea    -0x48(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x95>
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
-lea    -0x5c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x8f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0xb4>
-lea    -0x5c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0xcc>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x55(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x415>
-lea    -0x55(%ebp),%eax
+lea    -0x41(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x40c>
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x1dc>
-lea    -0x4d(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x1de>
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x4d(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"CPacketTranslater::Packet_Monitor_Call_Guild_All_Members : packet->m_uGuildKey == 0",0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x39(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"CPacketTranslater::OnCallGuildAllMembers : packet->m_uGuildKey == 0",0x4(%esp)
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x54(%ebp),%esi
+lea    -0x40(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x182>
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x184>
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
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x17c>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x1a1>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x1a1>
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x1b9>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x1a1>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x4d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x415>
-lea    -0x4d(%ebp),%eax
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x17e>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x1a3>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x1a3>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x1bb>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x1a3>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x40c>
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    -0x28(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
 mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x33b>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x332>
+mov    -0x28(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x262>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x259>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,0x8(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler>
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x525>
-lea    -0x45(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x51a>
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x45(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnCallGuildAllMembers : 0 == pclGuild",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x4c(%ebp),%esi
+lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x2e1>
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x2d8>
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
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x2db>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x300>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x300>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x318>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x300>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x45(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x415>
-lea    -0x45(%ebp),%eax
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x2d2>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x2f7>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x2f7>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x30f>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x2f7>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x40c>
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-lea    -0x3d(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x3d(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnCallGuildAllMembers : 0 == pclUser",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x44(%ebp),%esi
+lea    -0x30(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x3ba>
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x3b1>
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
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x3b4>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x3d9>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x3d9>
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x3ee>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x3d9>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x3d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x415>
-lea    -0x3d(%ebp),%eax
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x3ab>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x3d0>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x3d0>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x3e5>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x3d0>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x29(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x40c>
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x4bb>
+jne    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x4b0>
 mov    %ecx,(%esp)
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
 movl   $"CPacketTranslater::OnCallGuildMembers() Exception Break : %s\n",(%esp)
 call   <T> <printf>
+movl   $0x851,0x8(%esp)
+movl   $"OnCallGuildAllMembers",0x4(%esp)
+lea    -0x50(%ebp),%eax
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
-movl   $0x851,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnCallGuildAllMembers() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x4b4>
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x4a9>
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
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x525>
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x51a>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnCallGuildMembers() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x857,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCallGuildAllMembers() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x520>
+jmp    <T> <_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader+0x515>
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
-add    $0x6c,%esp
+add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnCallGuildAllMembers(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *pCVar1;
  CServerHandler *pCVar2;
  string local_60 [7];
  allocator local_59;
  string local_58 [7];
  allocator local_51;
  string local_50 [7];
  allocator local_49;
  string local_48 [7];
  allocator local_41 [17];
  CUser *local_30;
  CGuild *local_2c;
  PacketHeader *local_28;
  CApplication *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080771ec to 080771f0 has its CatchHandler @ 08077266 */
    std::string::string(local_60,"CPacketTranslater::OnCallGuildAllMembers : 0 == m_pclApp",
                        &local_59);
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807720b to 0807720f has its CatchHandler @ 08077212 */
    CDNFException::CDNFException(pCVar1,local_60);
                    /* try { // try from 08077251 to 08077255 has its CatchHandler @ 08077258 */
    std::string::~string(local_60);
    std::allocator<char>::~allocator((allocator<char> *)&local_59);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080772a0 to 080772a4 has its CatchHandler @ 080775c7 */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  if (*(int *)(param_1 + 0xe) == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080772d9 to 080772dd has its CatchHandler @ 08077353 */
    std::string::string(local_58,
                        "CPacketTranslater::Packet_Monitor_Call_Guild_All_Members : packet->m_uGuildKey == 0"
                        ,&local_51);
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080772f8 to 080772fc has its CatchHandler @ 080772ff */
    CDNFException::CDNFException(pCVar1,local_58);
                    /* try { // try from 0807733e to 08077342 has its CatchHandler @ 08077345 */
    std::string::~string(local_58);
    std::allocator<char>::~allocator((allocator<char> *)&local_51);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807738d to 08077412 has its CatchHandler @ 080775c7 */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = m_pclApp + 0x10;
  local_30 = (CUser *)CUserManager::FindUser_CharNo((uint)local_24);
  if (local_30 == (CUser *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08077511 to 08077515 has its CatchHandler @ 0807758b */
    std::string::string(local_48,"CPacketTranslater::OnCallGuildAllMembers : 0 == pclUser",local_41)
    ;
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08077530 to 08077534 has its CatchHandler @ 08077537 */
    CDNFException::CDNFException(pCVar1,local_48);
                    /* try { // try from 08077576 to 0807757a has its CatchHandler @ 0807757d */
    std::string::~string(local_48);
    std::allocator<char>::~allocator((allocator<char> *)local_41);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080775c2 to 080775c6 has its CatchHandler @ 080775c7 */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
  if (local_2c != (CGuild *)0x0) {
    pCVar2 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
    CGuild::CallGuildAllMembersProxy(local_2c,local_30,pCVar2);
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08077438 to 0807743c has its CatchHandler @ 080774b2 */
  std::string::string(local_50,"CPacketTranslater::OnCallGuildAllMembers : 0 == pclGuild",&local_49)
  ;
  pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08077457 to 0807745b has its CatchHandler @ 0807745e */
  CDNFException::CDNFException(pCVar1,local_50);
                    /* try { // try from 0807749d to 080774a1 has its CatchHandler @ 080774a4 */
  std::string::~string(local_50);
  std::allocator<char>::~allocator((allocator<char> *)&local_49);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080774ec to 080774f0 has its CatchHandler @ 080775c7 */
  __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1519 行）：

```cpp
void CPacketTranslater::OnCallGuildAllMembers(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnCallGuildAllMembers : 0 == m_pclApp")
        char* pb = (char*)pkt;
        if (*(unsigned int*)(pb + 0xe) == 0)
        {
            throw CDNFException(
                "CPacketTranslater::OnCallGuildAllMembers : packet->m_uGuildKey == 0");
        }
        CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(*(unsigned int*)(pb + 10));
        if (user != 0)
        {
            CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(*(unsigned int*)(pb + 0xe));
            if (guild != 0)
            {
                guild->CallGuildAllMembersProxy(user, m_pclApp->Get_ServerHandler());
            }
            else
            {
                throw CDNFException(
                    "CPacketTranslater::OnCallGuildAllMembers : 0 == pclGuild");
            }
        }
        else
        {
            throw CDNFException("CPacketTranslater::OnCallGuildAllMembers : 0 == pclUser");
        }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnCallGuildMembers() Exception Break : %s\n", e.what());
        CMyFileLog log("OnCallGuildAllMembers", 0x851);
        log("./log/Except",
            "CPacketTranslater::OnCallGuildAllMembers() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnCallGuildMembers() Exception Break");
        CMyFileLog log(__FUNCTION__, 0x857);
        log("./log/Except", "CPacketTranslater::OnCallGuildAllMembers() Exception Break\n");
    }
}
```
