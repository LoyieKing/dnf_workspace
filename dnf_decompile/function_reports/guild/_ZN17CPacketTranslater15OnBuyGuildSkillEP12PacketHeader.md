# _ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader

`CPacketTranslater::OnBuyGuildSkill(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8074972` | `0x56b` | `0x806b102` | `0x582` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,401 +1,409 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0xef>
-lea    -0x4d(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x4d(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnBuyGuildSkill : 0 == m_pclApp",0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x54(%ebp),%esi
+lea    -0x48(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x95>
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
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x8f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0xb4>
-lea    -0x54(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0xcc>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x4d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x453>
-lea    -0x4d(%ebp),%eax
+lea    -0x41(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x46c>
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
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x2c(%ebp)
 cmpl   $0x0,-0x2c(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x1fb>
-lea    -0x45(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x1fc>
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x45(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnBuyGuildSkill : 0 == pclUser",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x4c(%ebp),%esi
+lea    -0x40(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x1a1>
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x1a2>
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
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x19b>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x1c0>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x1c0>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x1d8>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x1c0>
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
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x453>
-lea    -0x45(%ebp),%eax
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x19c>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x1c1>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x1c1>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x1d9>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x1c1>
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
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x46c>
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x379>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x2ea>
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+lea    -0x31(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"CPacketTranslater::OnBuyGuildSkill : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+lea    -0x38(%ebp),%esi
+movl   $0x8,(%esp)
+call   <T> <__cxa_allocate_exception>
+mov    %eax,%ebx
+mov    %ebx,%eax
+mov    %esi,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CDNFExceptionC1ERKSs>
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x290>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%esi
+mov    %ecx,%edi
+mov    %ebx,(%esp)
+call   <T> <__cxa_free_exception>
+mov    %edi,%ecx
+mov    %esi,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x28a>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x2af>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x2af>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x2c7>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x2af>
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
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x46c>
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
+movl   $&_ZTI13CDNFException,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <__cxa_throw>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x563>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x57a>
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x26b>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x33d>
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x272>
+je     <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x344>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x277>
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x349>
 mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x563>
-mov    -0x24(%ebp),%eax
-mov    0x1c(%eax),%ebx
-mov    -0x24(%ebp),%eax
-movzwl 0x1a(%eax),%eax
+mov    %al,-0x1f(%ebp)
+cmpb   $0x0,-0x1f(%ebp)
+je     <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x39c>
+mov    0x8(%ebp),%eax
+add    $0x1c,%eax
+mov    (%eax),%ebx
+mov    0x8(%ebp),%eax
+add    $0x1a,%eax
+movzwl (%eax),%eax
 movswl %ax,%ecx
-mov    -0x24(%ebp),%eax
-mov    0x16(%eax),%edx
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13BuyGuildSkillEiisj>
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x39c>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x3a1>
+mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x563>
-mov    -0x28(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x57a>
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetDBSaveFlagEv>
+mov    %al,-0x1e(%ebp)
+movl   $0x0,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x3ee>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface10GetGroupNoEv>
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x3f3>
+mov    $0x0,%eax
 mov    %al,-0x1d(%ebp)
-movl   $0x0,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,%ebx
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface10GetGroupNoEv>
-movzbl %al,%eax
+movzbl -0x1d(%ebp),%edx
 movl   $0x1,0xc(%esp)
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11DBGuildSaveEhP14CServerHandlerj>
-cmpb   $0x0,-0x1d(%ebp)
-je     <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x563>
-mov    -0x28(%ebp),%eax
+cmpb   $0x0,-0x1e(%ebp)
+je     <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x57a>
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16EnableDBSaveFlagEv>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,%ebx
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface10GetGroupNoEv>
-movzbl %al,%eax
+movzbl -0x1d(%ebp),%edx
 movl   $0x0,0xc(%esp)
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11DBGuildSaveEhP14CServerHandlerj>
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x563>
-lea    -0x3d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-lea    -0x3d(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"CPacketTranslater::OnBuyGuildSkill : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x44(%ebp),%esi
-movl   $0x8,(%esp)
-call   <T> <__cxa_allocate_exception>
-mov    %eax,%ebx
-mov    %ebx,%eax
-mov    %esi,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x3f8>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%esi
-mov    %ecx,%edi
-mov    %ebx,(%esp)
-call   <T> <__cxa_free_exception>
-mov    %edi,%ecx
-mov    %esi,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x3f2>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x417>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x417>
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x42c>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x417>
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
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x453>
-lea    -0x3d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
-movl   $&_ZTI13CDNFException,0x4(%esp)
-mov    %ebx,(%esp)
-call   <T> <__cxa_throw>
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x57a>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x4f9>
+jne    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x510>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnBuyGuildSkill() Exception Break : %s\n",(%esp)
 call   <T> <printf>
+movl   $0x4f0,0x8(%esp)
+movl   $"OnBuyGuildSkill",0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x4f0,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnBuyGuildSkill() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x4f2>
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x509>
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
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x563>
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x57a>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnBuyGuildSkill() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x4f6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnBuyGuildSkill() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x55e>
+jmp    <T> <_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader+0x575>
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
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnBuyGuildSkill(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader
               (PacketHeader *param_1)

{
  bool bVar1;
  char cVar2;
  uchar uVar3;
  CDNFException *pCVar4;
  CServerHandler *pCVar5;
  CServerInterface *pCVar6;
  string local_58 [7];
  allocator local_51;
  string local_50 [7];
  allocator local_49;
  string local_48 [7];
  allocator local_41 [17];
  CUser *local_30;
  CGuild *local_2c;
  PacketHeader *local_28;
  char local_21;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080749a8 to 080749ac has its CatchHandler @ 08074a22 */
    std::string::string(local_58,"CPacketTranslater::OnBuyGuildSkill : 0 == m_pclApp",&local_51);
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080749c7 to 080749cb has its CatchHandler @ 080749ce */
    CDNFException::CDNFException(pCVar4,local_58);
                    /* try { // try from 08074a0d to 08074a11 has its CatchHandler @ 08074a14 */
    std::string::~string(local_58);
    std::allocator<char>::~allocator((allocator<char> *)&local_51);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08074a5c to 08074a81 has its CatchHandler @ 08074dc1 */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  local_30 = (CUser *)CUserManager::FindUser_CharNo((uint)(m_pclApp + 0x10));
  if (local_30 == (CUser *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08074ab4 to 08074ab8 has its CatchHandler @ 08074b2e */
    std::string::string(local_50,"CPacketTranslater::OnBuyGuildSkill : 0 == pclUser",&local_49);
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08074ad3 to 08074ad7 has its CatchHandler @ 08074ada */
    CDNFException::CDNFException(pCVar4,local_50);
                    /* try { // try from 08074b19 to 08074b1d has its CatchHandler @ 08074b20 */
    std::string::~string(local_50);
    std::allocator<char>::~allocator((allocator<char> *)&local_49);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08074b68 to 08074ce5 has its CatchHandler @ 08074dc1 */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  if (*(int *)(local_28 + 0xe) == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08074d0b to 08074d0f has its CatchHandler @ 08074d85 */
    std::string::string(local_48,
                        "CPacketTranslater::OnBuyGuildSkill : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen"
                        ,local_41);
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08074d2a to 08074d2e has its CatchHandler @ 08074d31 */
    CDNFException::CDNFException(pCVar4,local_48);
                    /* try { // try from 08074d70 to 08074d74 has its CatchHandler @ 08074d77 */
    std::string::~string(local_48);
    std::allocator<char>::~allocator((allocator<char> *)local_41);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08074dbc to 08074dc0 has its CatchHandler @ 08074dc1 */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
  if (local_2c != (CGuild *)0x0) {
    cVar2 = CGuild::IsGuildMaster(local_2c,*(uint *)(local_28 + 10));
    if ((cVar2 == '\0') &&
       (cVar2 = CGuild::IsSubGuildMaster(local_2c,*(uint *)(local_28 + 10)), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (cVar2 = CGuild::BuyGuildSkill
                          (local_2c,*(int *)(local_28 + 0x12),*(int *)(local_28 + 0x16),
                           *(short *)(local_28 + 0x1a),*(uint *)(local_28 + 0x1c)), cVar2 != '\0'))
    {
      local_21 = CGuild::GetDBSaveFlag(local_2c);
      CGuild::SendGuildInfoToMembers(local_2c,false);
      pCVar5 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      pCVar6 = (CServerInterface *)CUser::GetGameServer(local_30);
      uVar3 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(pCVar6);
      CGuild::DBGuildSave(local_2c,uVar3,pCVar5,1);
      if (local_21 != '\0') {
        CGuild::EnableDBSaveFlag(local_2c);
        pCVar5 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
        pCVar6 = (CServerInterface *)CUser::GetGameServer(local_30);
        uVar3 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(pCVar6);
        CGuild::DBGuildSave(local_2c,uVar3,pCVar5,0);
      }
    }
    return;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 848 行）：

```cpp
void CPacketTranslater::OnBuyGuildSkill(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnBuyGuildSkill : 0 == m_pclApp");
        unsigned int charNo = *(unsigned int*)((char*)pkt + 0xa);
        CUser* user;
        if ((user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo)) == 0)
        {
            throw CDNFException("CPacketTranslater::OnBuyGuildSkill : 0 == pclUser");
        }
        unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xe);
        if (guildKey == 0)
        {
            throw CDNFException(
                "CPacketTranslater::OnBuyGuildSkill : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen");
        }
        CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
        if (guild != 0)
        {
            bool isMaster = guild->IsGuildMaster(charNo) || guild->IsSubGuildMaster(charNo);
            if (isMaster &&
                guild->BuyGuildSkill(*(int*)((char*)pkt + 0x12), *(int*)((char*)pkt + 0x16),
                                     *(short*)((char*)pkt + 0x1a),
                                     *(unsigned int*)((char*)pkt + 0x1c)))
            {
                char saveFlag = (char)guild->GetDBSaveFlag();
                guild->SendGuildInfoToMembers(false);
                unsigned char group =
                    user->GetGameServer() != 0 ? user->GetGameServer()->GetGroupNo() : 0;
                guild->DBGuildSave(group, m_pclApp->Get_ServerHandler(), 1);
                if (saveFlag != 0)
                {
                    guild->EnableDBSaveFlag();
                    guild->DBGuildSave(group, m_pclApp->Get_ServerHandler(), 0);
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnBuyGuildSkill() Exception Break : %s\n", e.what());
        CMyFileLog log("OnBuyGuildSkill", 0x4f0);
        log("./log/Except",
            "CPacketTranslater::OnBuyGuildSkill() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnBuyGuildSkill() Exception Break");
        CMyFileLog log(__FUNCTION__, 0x4f6);
        log("./log/Except", "CPacketTranslater::OnBuyGuildSkill() Exception Break\n");
    }
}
```
