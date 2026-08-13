# _ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader

`CPacketTranslater::OnCallGuildLevelUp(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807c8a8` | `0x4b0` | `0x8072ae4` | `0x498` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,330 +1,323 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x8c,%esp
+sub    $0x7c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xf2>
-lea    -0x69(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xef>
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x69(%ebp),%eax
+lea    -0x51(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnCallGuildLevelUp : 0 == m_pclApp",0x4(%esp)
-lea    -0x70(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x70(%ebp),%esi
+lea    -0x58(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x98>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x95>
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
-lea    -0x70(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x92>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x8f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb7>
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb7>
-lea    -0x70(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb4>
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xcf>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xcc>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb7>
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x69(%ebp),%eax
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x3c7>
-lea    -0x69(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x3b4>
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%eax
+mov    0xe(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1df>
-lea    -0x61(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1d6>
+lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x61(%ebp),%eax
+lea    -0x49(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnCallGuildLevelUp : packet->m_uGuildKey == 0",0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x68(%ebp),%esi
+lea    -0x50(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x185>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x17c>
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
-lea    -0x68(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x17f>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x176>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1a4>
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x19b>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1a4>
-lea    -0x68(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x19b>
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1bc>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1b3>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1a4>
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x19b>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x61(%ebp),%eax
+lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x3c7>
-lea    -0x61(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x3b4>
+lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x24d>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x23f>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%ebx
 movl   $0xd90,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCallGuildLevelUp : 0 == pclUser, Char Key = %d",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%eax
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x2be>
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%ebx
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x2ab>
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%ebx
 movl   $0xd94,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCallGuildLevelUp : 0 == pclGuild, Guild Key = %d",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x4a5>
-mov    -0x28(%ebp),%eax
-mov    0x17(%eax),%ebx
-mov    -0x2c(%ebp),%eax
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x490>
+mov    0x8(%ebp),%eax
+mov    0x12(%eax),%ebx
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildFundEv>
 cmp    %eax,%ebx
 seta   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x327>
-mov    -0x28(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x314>
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%ebx
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%ebx
 movl   $0xd9a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCallGuildLevelUp(%d : %d) Guild Fund Shortage",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x4a5>
-mov    -0x28(%ebp),%eax
-mov    0x17(%eax),%eax
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x490>
+mov    0x8(%ebp),%eax
+mov    0x12(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12SubGuildFundEj>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    -0x30(%ebp),%edx
+mov    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser>
 mov    %al,-0x1d(%ebp)
 cmpb   $0x0,-0x1d(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x4a5>
+je     <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x490>
 movzbl -0x1d(%ebp),%edi
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%ebx
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%esi
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%ebx
 movl   $0xda3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCallGuildLevelUp(%d : %d) ERR(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x4a5>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x490>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x447>
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x432>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0xda7,0x8(%esp)
+movl   $"OnCallGuildLevelUp",0x4(%esp)
+lea    -0x60(%ebp),%eax
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
-movl   $0xda7,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnCallGuildLevelUp() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x440>
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x42b>
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
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x4a5>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x490>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xdac,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCallGuildLevelUp() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x4a0>
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x48b>
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
-add    $0x8c,%esp
+add    $0x7c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnCallGuildLevelUp(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CDNFException *pCVar3;
  uint uVar4;
  CServerHandler *pCVar5;
  uint uVar6;
  string local_74 [7];
  allocator local_6d;
  string local_6c [7];
  allocator local_65;
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [24];
  CUser *local_34;
  CGuild *local_30;
  PacketHeader *local_2c;
  CApplication *local_28;
  byte local_21;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807c8e1 to 0807c8e5 has its CatchHandler @ 0807c95b */
    std::string::string(local_74,"CPacketTranslater::OnCallGuildLevelUp : 0 == m_pclApp",&local_6d);
    pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807c900 to 0807c904 has its CatchHandler @ 0807c907 */
    CDNFException::CDNFException(pCVar3,local_74);
                    /* try { // try from 0807c946 to 0807c94a has its CatchHandler @ 0807c94d */
    std::string::~string(local_74);
    std::allocator<char>::~allocator((allocator<char> *)&local_6d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807c995 to 0807c999 has its CatchHandler @ 0807cc6b */
    __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = param_1;
  if (*(int *)(param_1 + 0x12) == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807c9ce to 0807c9d2 has its CatchHandler @ 0807ca48 */
    std::string::string(local_6c,"CPacketTranslater::OnCallGuildLevelUp : packet->m_uGuildKey == 0",
                        &local_65);
    pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807c9ed to 0807c9f1 has its CatchHandler @ 0807c9f4 */
    CDNFException::CDNFException(pCVar3,local_6c);
                    /* try { // try from 0807ca33 to 0807ca37 has its CatchHandler @ 0807ca3a */
    std::string::~string(local_6c);
    std::allocator<char>::~allocator((allocator<char> *)&local_65);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807ca82 to 0807cc65 has its CatchHandler @ 0807cc6b */
    __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = m_pclApp + 0x10;
  local_34 = (CUser *)CUserManager::FindUser_CharNo((uint)local_28);
  if (local_34 == (CUser *)0x0) {
    uVar1 = *(undefined4 *)(local_2c + 0xe);
    CMyFileLog::CMyFileLog(local_64,"OnCallGuildLevelUp",0xd90);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_64,"./log/Except",
               "CPacketTranslater::OnCallGuildLevelUp : 0 == pclUser, Char Key = %d",uVar1);
  }
  local_30 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
  if (local_30 == (CGuild *)0x0) {
    uVar1 = *(undefined4 *)(local_2c + 0x12);
    CMyFileLog::CMyFileLog(local_5c,"OnCallGuildLevelUp",0xd94);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_5c,"./log/Except",
               "CPacketTranslater::OnCallGuildLevelUp : 0 == pclGuild, Guild Key = %d",uVar1);
  }
  else {
    uVar6 = *(uint *)(local_2c + 0x17);
    uVar4 = CGuild::GetGuildFund(local_30);
    if (uVar4 < uVar6) {
      uVar1 = *(undefined4 *)(local_2c + 0xe);
      uVar2 = *(undefined4 *)(local_2c + 0x12);
      CMyFileLog::CMyFileLog(local_54,"OnCallGuildLevelUp",0xd9a);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_54,"./log/GuildModify",
                 "CPacketTranslater::OnCallGuildLevelUp(%d : %d) Guild Fund Shortage",uVar2,uVar1);
    }
    else {
      CGuild::SubGuildFund(local_30,*(uint *)(local_2c + 0x17));
      pCVar5 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      local_21 = CGuild::GuildLevelUp(local_30,pCVar5,local_34);
      if (local_21 != 0) {
        uVar6 = (uint)local_21;
        uVar1 = *(undefined4 *)(local_2c + 0xe);
        uVar2 = *(undefined4 *)(local_2c + 0x12);
        CMyFileLog::CMyFileLog(local_4c,"OnCallGuildLevelUp",0xda3);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_4c,"./log/GuildModify",
                   "CPacketTranslater::OnCallGuildLevelUp(%d : %d) ERR(%d)",uVar2,uVar1,uVar6);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3307 行）：

```cpp
void CPacketTranslater::OnCallGuildLevelUp(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnCallGuildLevelUp : 0 == m_pclApp")
    if (((PTL_CallGuildLevelUpPkt*)pkt)->m_guildKey == 0)
    {
        throw CDNFException("CPacketTranslater::OnCallGuildLevelUp : packet->m_uGuildKey == 0");
    }
    CUser* user;
    if ((user = (&m_pclApp->m_userManager)->FindUser_CharNo(
             ((PTL_CallGuildLevelUpPkt*)pkt)->m_charNo)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0xd90, "./log/Except",
            "CPacketTranslater::OnCallGuildLevelUp : 0 == pclUser, Char Key = %d",
            ((PTL_CallGuildLevelUpPkt*)pkt)->m_charNo);
    }
    CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(
        ((PTL_CallGuildLevelUpPkt*)pkt)->m_guildKey);
    if (guild == 0)
    {
        DNF_LOG_SCOPE_LINE(0xd94, "./log/Except",
            "CPacketTranslater::OnCallGuildLevelUp : 0 == pclGuild, Guild Key = %d",
            ((PTL_CallGuildLevelUpPkt*)pkt)->m_guildKey);
        return;
    }
    if (((PTL_CallGuildLevelUpPkt*)pkt)->m_fund > guild->GetGuildFund())
    {
        DNF_LOG_SCOPE_LINE(0xd9a, "./log/GuildModify",
            "CPacketTranslater::OnCallGuildLevelUp(%d : %d) Guild Fund Shortage",
            ((PTL_CallGuildLevelUpPkt*)pkt)->m_charNo,
            ((PTL_CallGuildLevelUpPkt*)pkt)->m_guildKey);
        return;
    }
    guild->SubGuildFund(((PTL_CallGuildLevelUpPkt*)pkt)->m_fund);
    unsigned char ret = (unsigned char)guild->GuildLevelUp(m_pclApp->Get_ServerHandler(), user);
    if (ret != 0)
    {
        DNF_LOG_SCOPE_LINE(0xda3, "./log/GuildModify",
            "CPacketTranslater::OnCallGuildLevelUp(%d : %d) ERR(%d)",
            ((PTL_CallGuildLevelUpPkt*)pkt)->m_guildKey,
            ((PTL_CallGuildLevelUpPkt*)pkt)->m_charNo, (int)ret);
    }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnCallGuildLevelUp", 0xda7);
        log("./log/Except", "CPacketTranslater::OnCallGuildLevelUp() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0xdac);
        log("./log/Except", "CPacketTranslater::OnCallGuildLevelUp() Exception Break\n");
    }
}
```
