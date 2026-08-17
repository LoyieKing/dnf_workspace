# _ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader

`CPacketTranslater::OnGuildApplyOriginalPowerSide(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8087c5c` | `0x374` | `0x807de44` | `0x363` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,227 +1,221 @@
-push   %ebp
-mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x8c,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x56>
-movl   $0x1e44,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnGuildApplyOriginalPowerSide : 0 == m_pclApp",0x8(%esp)
-movl   $"./log/Power",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x369>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
-jne    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0xba>
-movl   $0x1e4e,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnGuildApplyOriginalPowerSide : 0 == pclUser",0x8(%esp)
-movl   $"./log/Power",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x369>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x121>
-movl   $0x1e55,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnGuildApplyOriginalPowerSide : 0 == pclGuild",0x8(%esp)
-movl   $"./log/Power",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x369>
-mov    -0x28(%ebp),%eax
-movzbl 0x12(%eax),%eax
-cmp    $0x3,%al
-je     <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x137>
-mov    -0x28(%ebp),%eax
-movzbl 0x12(%eax),%eax
-cmp    $0x4,%al
-jne    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x14d>
-mov    -0x28(%ebp),%eax
-movzbl 0x12(%eax),%ebx
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild12GetPowerSideEv>
-cmp    %al,%bl
-je     <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x154>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x159>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x1c2>
-mov    -0x28(%ebp),%eax
-movzbl 0x12(%eax),%eax
-movzbl %al,%edi
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild12GetPowerSideEv>
-movzbl %al,%esi
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x1e5d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildApplyOriginalPowerSide Guild(%d), GuildOrigPowerSide(%d), PacketPowerSide(%d)",0x8(%esp)
-movl   $"./log/Power",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x369>
-mov    -0x28(%ebp),%eax
-movzbl 0x12(%eax),%eax
-mov    %al,-0x1d(%ebp)
-cmpb   $0x3,-0x1d(%ebp)
-jne    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x1d8>
-movb   $0x1,-0x1d(%ebp)
-jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x1dc>
-movb   $0x2,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild12SetPowerSideEh>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,%ebx
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface10GetGroupNoEv>
-movzbl %al,%eax
-movl   $0x0,0xc(%esp)
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild11DBGuildSaveEhP14CServerHandlerj>
-movl   $0x0,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-lea    -0x77(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN43Packet_Guild_Apply_Origial_Power_Side_ReplyC1Ev>
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x6d(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x69(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x65(%ebp)
-movzbl -0x1d(%ebp),%eax
-mov    %al,-0x61(%ebp)
-lea    -0x77(%ebp),%eax
-movl   $0x17,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x369>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x30f>
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
-movl   $0x1e7d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildApplyOriginalPowerSide Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x308>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x369>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x1e82,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnGuildApplyOriginalPowerSide Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x364>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-add    $0x8c,%esp
+call   <T> <__cxa_end_catch>
+add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
+nop
+push   %ebp
+mov    %esp,%ebp
+push   %esi
+push   %ebx
+sub    $0x90,%esp
+mov    0x8(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+test   %eax,%eax
+jne    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x55>
+movl   $0x1e44,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnGuildApplyOriginalPowerSide : 0 == m_pclApp",0x8(%esp)
+movl   $"./log/Power",0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x359>
+mov    -0x28(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0xb9>
+movl   $0x1e4e,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnGuildApplyOriginalPowerSide : 0 == pclUser",0x8(%esp)
+movl   $"./log/Power",0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x359>
+mov    -0x28(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN13CGuildManager9FindGuildEj>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x125>
+movl   $0x1e55,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnGuildApplyOriginalPowerSide : 0 == pclGuild",0x8(%esp)
+movl   $"./log/Power",0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x359>
+mov    -0x28(%ebp),%eax
+movzbl 0x12(%eax),%eax
+mov    %al,-0x12(%ebp)
+cmpb   $0x3,-0x12(%ebp)
+je     <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x13b>
+cmpb   $0x4,-0x12(%ebp)
+jne    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x14b>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild12GetPowerSideEv>
+cmp    -0x12(%ebp),%al
+je     <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x152>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x157>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x1b7>
+movzbl -0x12(%ebp),%esi
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild12GetPowerSideEv>
+movzbl %al,%ebx
+movl   $0x1e5d,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildApplyOriginalPowerSide Guild(%d), GuildOrigPowerSide(%d), PacketPowerSide(%d)",0x8(%esp)
+movl   $"./log/Power",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x359>
+cmpb   $0x3,-0x12(%ebp)
+jne    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x1c4>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x1c9>
+mov    $0x2,%eax
+mov    %al,-0x11(%ebp)
+movzbl -0x11(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild12SetPowerSideEh>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,-0x10(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,%ebx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface10GetGroupNoEv>
+movzbl %al,%eax
+movl   $0x0,0xc(%esp)
+mov    %ebx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild11DBGuildSaveEhP14CServerHandlerj>
+movl   $0x0,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
+lea    -0x6f(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN43Packet_Guild_Apply_Origial_Power_Side_ReplyC1Ev>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x65(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,-0x61(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,-0x5d(%ebp)
+movzbl -0x11(%ebp),%eax
+mov    %al,-0x59(%ebp)
+lea    -0x6f(%ebp),%eax
+movl   $0x17,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x359>
+cmp    $0x2,%edx
+jne    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x2ff>
+mov    %eax,(%esp)
+call   <T> <__cxa_begin_catch>
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %eax,%ebx
+movl   $0x1e7d,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildApplyOriginalPowerSide Exception Break : %s\n",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x2f8>
+mov    %edx,%ebx
+mov    %eax,%esi
+call   <T> <__cxa_end_catch>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+call   <T> <__cxa_end_catch>
+jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x359>
+mov    %eax,(%esp)
+call   <T> <__cxa_begin_catch>
+movl   $0x1e82,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnGuildApplyOriginalPowerSide Exception Break\n",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader+0x354>
+mov    %edx,%ebx
+mov    %eax,%esi
+call   <T> <__cxa_end_catch>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildApplyOriginalPowerSide(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  undefined4 uVar2;
  bool bVar3;
  PacketHeader PVar4;
  uchar uVar5;
  uint uVar6;
  CServerHandler *pCVar7;
  CServerInterface *this;
  Packet_Guild_Apply_Origial_Power_Side_Reply local_7b [10];
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  uchar local_65;
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [24];
  CUser *local_34;
  CGuild *local_30;
  PacketHeader *local_2c;
  CApplication *local_28;
  uchar local_21;
  
  local_2c = param_1;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 08087c8d to 08087ee9 has its CatchHandler @ 08087eef */
    CMyFileLog::CMyFileLog(local_64,"OnGuildApplyOriginalPowerSide",0x1e44);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_64,"./log/Power",
               "CPacketTranslater::OnGuildApplyOriginalPowerSide : 0 == m_pclApp");
    return;
  }
  local_28 = m_pclApp + 0x10;
  local_34 = (CUser *)CUserManager::FindUser_CharNo((uint)local_28);
  if (local_34 != (CUser *)0x0) {
    local_30 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
    if (local_30 != (CGuild *)0x0) {
      if (((local_2c[0x12] == (PacketHeader)0x3) || (local_2c[0x12] == (PacketHeader)0x4)) &&
         (PVar1 = local_2c[0x12], PVar4 = (PacketHeader)CGuild::GetPowerSide(local_30),
         PVar1 == PVar4)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        PVar1 = local_2c[0x12];
        uVar6 = CGuild::GetPowerSide(local_30);
        uVar2 = *(undefined4 *)(local_2c + 0xe);
        CMyFileLog::CMyFileLog(local_4c,"OnGuildApplyOriginalPowerSide",0x1e5d);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_4c,"./log/Power",
                   "CPacketTranslater::OnGuildApplyOriginalPowerSide Guild(%d), GuildOrigPowerSide(%d), PacketPowerSide(%d)"
                   ,uVar2,uVar6 & 0xff,(uint)(byte)PVar1);
      }
      else {
        if (local_2c[0x12] == (PacketHeader)0x3) {
          local_21 = '\x01';
        }
        else {
          local_21 = '\x02';
        }
        CGuild::SetPowerSide(local_30,local_21);
        pCVar7 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
        this = (CServerInterface *)CUser::GetGameServer(local_34);
        uVar5 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(this);
        CGuild::DBGuildSave(local_30,uVar5,pCVar7,0);
        CGuild::SendGuildInfoToMembers(local_30,false);
        Packet_Guild_Apply_Origial_Power_Side_Reply::Packet_Guild_Apply_Origial_Power_Side_Reply
                  (local_7b);
        local_71 = CUser::GetIdByChannel(local_34);
        local_6d = *(undefined4 *)(local_2c + 10);
        local_69 = *(undefined4 *)(local_2c + 0xe);
        local_65 = local_21;
        CUser::SendToGameserver(local_34,(char *)local_7b,0x17);
      }
      return;
    }
    CMyFileLog::CMyFileLog(local_54,"OnGuildApplyOriginalPowerSide",0x1e55);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_54,"./log/Power",
               "CPacketTranslater::OnGuildApplyOriginalPowerSide : 0 == pclGuild");
    return;
  }
  CMyFileLog::CMyFileLog(local_5c,"OnGuildApplyOriginalPowerSide",0x1e4e);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_5c,"./log/Power",
             "CPacketTranslater::OnGuildApplyOriginalPowerSide : 0 == pclUser");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5484 行）：

```cpp
void CPacketTranslater::OnGuildApplyOriginalPowerSide(PacketHeader* pkt)
{
    Packet_Guild_Apply_Origial_Power_Side* pb = (Packet_Guild_Apply_Origial_Power_Side*)pkt;
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1e44,"./log/Power",
                "CPacketTranslater::OnGuildApplyOriginalPowerSide : 0 == m_pclApp");
            return;
        }
        unsigned int charNo = pb->m_charNo;
        CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo);
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1e4e, "./log/Power", "CPacketTranslater::OnGuildApplyOriginalPowerSide : 0 == pclUser");
            return;
        }
        unsigned int guildKey = pb->m_guildKey;
        CGuild* guild;
        if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1e55, "./log/Power", "CPacketTranslater::OnGuildApplyOriginalPowerSide : 0 == pclGuild");
            return;
        }
        unsigned char side = pb->m_field12;
        if (!((side == 3 || side == 4) && side == guild->GetPowerSide()))
        {
            DNF_LOG_SCOPE_LINE(0x1e5d,"./log/Power",
                "CPacketTranslater::OnGuildApplyOriginalPowerSide Guild(%d), GuildOrigPowerSide(%d), PacketPowerSide(%d)",
                guildKey, (unsigned int)guild->GetPowerSide() & 0xff, (unsigned int)side);
            return;
        }
        unsigned char newSide = side == 3 ? 1 : 2;
        guild->SetPowerSide(newSide);
        CServerInterface* gs = user->GetGameServer();
        guild->DBGuildSave(gs->GetGroupNo(), m_pclApp->Get_ServerHandler(), 0);
        guild->SendGuildInfoToMembers(false);
        Packet_Guild_Apply_Origial_Power_Side_Reply reply;
        reply.ma = user->GetIdByChannel();
        reply.me = charNo;
        reply.m12 = guildKey;
        reply.m16 = newSide;
        user->SendToGameserver((char*)&reply, 0x17);
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnGuildApplyOriginalPowerSide Exception Break", 0x1e7d, 0x1e82);
}
```
