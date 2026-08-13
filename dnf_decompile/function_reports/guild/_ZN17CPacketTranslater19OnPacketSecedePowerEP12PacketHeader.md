# _ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader

`CPacketTranslater::OnPacketSecedePower(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8080360` | `0x4d3` | `0x80766d0` | `0x4a8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,309 +1,287 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x90,%esp
+sub    $0xa0,%esp
+mov    0x8(%ebp),%eax
+mov    %eax,-0x24(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x4f>
+jne    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x55>
 movl   $0x12a9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnPacketSecedePower : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x4c9>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-lea    -0x73(%ebp),%eax
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x49e>
+lea    -0x6b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26Packet_Answer_Secede_PowerC1Ev>
-movl   $0x0,-0x69(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x61(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
+movl   $0x0,-0x61(%ebp)
+mov    -0x24(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,-0x59(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0xd8>
+movl   $0x12b5,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnPacketSecedePower : 0 == pclRequestUser",0x8(%esp)
+movl   $"./log/Power",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x49e>
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x5d(%ebp)
+mov    -0x24(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0xd4>
-movl   $0x12b5,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnPacketSecedePower : 0 == pclRequestUser",0x8(%esp)
-movl   $"./log/Power",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x4c9>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x65(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x113>
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x11a>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x11a>
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x176>
+movl   $0x12bc,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnPacketSecedePower : 0 == pclGuild",0x8(%esp)
+movl   $"./log/Power",0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x64,-0x61(%ebp)
+lea    -0x6b(%ebp),%eax
+movl   $0x17,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x49e>
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild12GetPowerSideEv>
+test   %al,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x360>
+mov    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x1ba>
+mov    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13IsGuildMasterEj>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x1c1>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x11f>
+jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x1c6>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x182>
-movl   $0x12bc,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnPacketSecedePower : 0 == pclGuild",0x8(%esp)
-movl   $"./log/Power",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x64,-0x69(%ebp)
-movzwl -0x71(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x73(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x4c9>
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild12GetPowerSideEv>
-mov    %al,-0x5d(%ebp)
-movzbl -0x5d(%ebp),%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x20b>
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x12c8,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnPacketSecedePower : %d did not join power side(g:%d)",0x8(%esp)
-movl   $"./log/Power",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x82,-0x69(%ebp)
-movzwl -0x71(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x73(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x4c9>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
+je     <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x2f6>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15GetPowerManagerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN13CPowerManager12IsPowerWarOnEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x24a>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13IsGuildMasterEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x24a>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x24f>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x2c6>
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x12d1,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnPacketSecedePower : %d is not guild master or sub master(g:%d)",0x8(%esp)
-movl   $"./log/Power",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x56,-0x69(%ebp)
-movzwl -0x71(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x73(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x4c9>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15GetPowerManagerEv>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13CPowerManager12IsPowerWarOnEv>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x358>
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x12db,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnPacketSecedePower : %d power war on(g:%d)",0x8(%esp)
-movl   $"./log/Power",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x7f,-0x69(%ebp)
-movzwl -0x71(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x73(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x4c9>
+je     <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x28c>
 movl   $0x0,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12SetPowerSideEh>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild18SetPowerSecedeTimeEj>
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,-0x10(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,%ebx
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface10GetGroupNoEv>
 movzbl %al,%eax
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild21DBSavePowerSecedeTimeEhP14CServerHandler>
 movl   $0x0,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-movzwl -0x71(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x73(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x4c9>
+lea    -0x6b(%ebp),%eax
+movl   $0x17,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x49e>
+movl   $0x12db,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnPacketSecedePower : %d power war on(g:%d)",0x8(%esp)
+movl   $"./log/Power",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x7f,-0x61(%ebp)
+lea    -0x6b(%ebp),%eax
+movl   $0x17,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x49e>
+movl   $0x12d1,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnPacketSecedePower : %d is not guild master or sub master(g:%d)",0x8(%esp)
+movl   $"./log/Power",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x56,-0x61(%ebp)
+lea    -0x6b(%ebp),%eax
+movl   $0x17,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x49e>
+movl   $0x12c8,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnPacketSecedePower : %d did not join power side(g:%d)",0x8(%esp)
+movl   $"./log/Power",0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x82,-0x61(%ebp)
+lea    -0x6b(%ebp),%eax
+movl   $0x17,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x49e>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x46f>
+jne    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x444>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0x12ff,0x8(%esp)
+movl   $"OnPacketSecedePower",0x4(%esp)
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x12ff,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnPacketSecedePower Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x468>
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x43d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x4c9>
+jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x49e>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1304,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x7c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnPacketSecedePower Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x4c4>
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader+0x499>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x90,%esp
+add    $0xa0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnPacketSecedePower(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  uchar uVar5;
  uint uVar6;
  CServerHandler *pCVar7;
  CServerInterface *this;
  Packet_Answer_Secede_Power local_77 [2];
  ushort local_75;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  char local_61;
  CMyFileLog local_60 [8];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [24];
  CGuild *local_20;
  CUser *local_1c;
  PacketHeader *local_18;
  CPowerManager *local_14;
  
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 0808038a to 0808074d has its CatchHandler @ 08080753 */
    CMyFileLog::CMyFileLog(local_60,"OnPacketSecedePower",0x12a9);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_60,"./log/Power","CPacketTranslater::OnPacketSecedePower : 0 == m_pclApp");
    return;
  }
  local_18 = param_1;
  Packet_Answer_Secede_Power::Packet_Answer_Secede_Power(local_77);
  local_6d = 0;
  local_65 = *(undefined4 *)(local_18 + 10);
  local_1c = (CUser *)CUserManager::FindUser_CharNo((uint)(m_pclApp + 0x10));
  if (local_1c != (CUser *)0x0) {
    local_69 = CUser::GetIdByChannel(local_1c);
    if ((*(int *)(local_18 + 0xe) == 0) ||
       (local_20 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290))
       , local_20 == (CGuild *)0x0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      local_61 = CGuild::GetPowerSide(local_20);
      if (local_61 != '\0') {
        cVar4 = CGuild::IsSubGuildMaster(local_20,*(uint *)(local_18 + 10));
        if ((cVar4 == '\x01') ||
           (cVar4 = CGuild::IsGuildMaster(local_20,*(uint *)(local_18 + 10)), cVar4 == '\x01')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          uVar1 = *(undefined4 *)(local_18 + 0xe);
          uVar2 = *(undefined4 *)(local_18 + 10);
          CMyFileLog::CMyFileLog(local_40,"OnPacketSecedePower",0x12d1);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_40,"./log/Power",
                     "CPacketTranslater::OnPacketSecedePower : %d is not guild master or sub master(g:%d)"
                     ,uVar2,uVar1);
          local_6d = 0x56;
          CUser::SendToGameserver(local_1c,(char *)local_77,(uint)local_75);
        }
        else {
          local_14 = (CPowerManager *)CApplication::GetPowerManager(m_pclApp);
          cVar4 = CPowerManager::IsPowerWarOn(local_14);
          if (cVar4 == '\0') {
            CGuild::SetPowerSide(local_20,'\0');
            uVar6 = time((time_t *)0x0);
            CGuild::SetPowerSecedeTime(local_20,uVar6);
            pCVar7 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
            this = (CServerInterface *)CUser::GetGameServer(local_1c);
            uVar5 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(this);
            CGuild::DBSavePowerSecedeTime(local_20,uVar5,pCVar7);
            CGuild::SendGuildInfoToMembers(local_20,false);
            CUser::SendToGameserver(local_1c,(char *)local_77,(uint)local_75);
          }
          else {
            uVar1 = *(undefined4 *)(local_18 + 0xe);
            uVar2 = *(undefined4 *)(local_18 + 10);
            CMyFileLog::CMyFileLog(local_38,"OnPacketSecedePower",0x12db);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_38,"./log/Power",
                       "CPacketTranslater::OnPacketSecedePower : %d power war on(g:%d)",uVar2,uVar1)
            ;
            local_6d = 0x7f;
            CUser::SendToGameserver(local_1c,(char *)local_77,(uint)local_75);
          }
        }
        return;
      }
      uVar1 = *(undefined4 *)(local_18 + 0xe);
      uVar2 = *(undefined4 *)(local_18 + 10);
      CMyFileLog::CMyFileLog(local_48,"OnPacketSecedePower",0x12c8);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_48,"./log/Power",
                 "CPacketTranslater::OnPacketSecedePower : %d did not join power side(g:%d)",uVar2,
                 uVar1);
      local_6d = 0x82;
      CUser::SendToGameserver(local_1c,(char *)local_77,(uint)local_75);
      return;
    }
    CMyFileLog::CMyFileLog(local_50,"OnPacketSecedePower",0x12bc);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_50,"./log/Power","CPacketTranslater::OnPacketSecedePower : 0 == pclGuild");
    local_6d = 100;
    CUser::SendToGameserver(local_1c,(char *)local_77,(uint)local_75);
    return;
  }
  CMyFileLog::CMyFileLog(local_58,"OnPacketSecedePower",0x12b5);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_58,"./log/Power","CPacketTranslater::OnPacketSecedePower : 0 == pclRequestUser");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3683 行）：

```cpp
void CPacketTranslater::OnPacketSecedePower(PacketHeader* pkt)
{
    try
    {
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x12a9, "./log/Power", "CPacketTranslater::OnPacketSecedePower : 0 == m_pclApp");
        return;
    }
    Packet_Answer_Secede_Power reply;
    reply.m_a = 0;
    unsigned int charNo = *(unsigned int*)(pb + 0xa);
    reply.m_12 = charNo;
    CUser* user;
    if ((user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x12b5, "./log/Power", "CPacketTranslater::OnPacketSecedePower : 0 == pclRequestUser");
        return;
    }
    reply.m_e = user->GetIdByChannel();
    unsigned int guildKey = *(unsigned int*)(pb + 0xe);
    CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
    if (guildKey == 0 || guild == 0)
    {
        DNF_LOG_SCOPE_LINE(0x12bc, "./log/Power", "CPacketTranslater::OnPacketSecedePower : 0 == pclGuild");
        reply.m_a = 100;
        user->SendToGameserver((char*)&reply, 0x17);
        return;
    }
    if (guild->GetPowerSide() != 0)
    {
        if (guild->IsSubGuildMaster(charNo) == 1 || guild->IsGuildMaster(charNo) == 1)
        {
            if (m_pclApp->GetPowerManager()->IsPowerWarOn() == 0)
            {
                guild->SetPowerSide(0);
                guild->SetPowerSecedeTime((unsigned int)time(0));
                CServerInterface* gs = user->GetGameServer();
                guild->DBSavePowerSecedeTime(gs->GetGroupNo(),
                                             m_pclApp->Get_ServerHandler());
                guild->SendGuildInfoToMembers(false);
                user->SendToGameserver((char*)&reply, 0x17);
            }
            else
            {
                DNF_LOG_SCOPE_LINE(0x12db,"./log/Power",
                    "CPacketTranslater::OnPacketSecedePower : %d power war on(g:%d)", charNo,
                    guildKey);
                reply.m_a = 0x7f;
                user->SendToGameserver((char*)&reply, 0x17);
            }
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x12d1,"./log/Power",
                "CPacketTranslater::OnPacketSecedePower : %d is not guild master or sub master(g:%d)",
                charNo, guildKey);
            reply.m_a = 0x56;
            user->SendToGameserver((char*)&reply, 0x17);
        }
        return;
    }
    DNF_LOG_SCOPE_LINE(0x12c8,"./log/Power",
        "CPacketTranslater::OnPacketSecedePower : %d did not join power side(g:%d)", charNo,
        guildKey);
    reply.m_a = 0x82;
    user->SendToGameserver((char*)&reply, 0x17);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnPacketSecedePower", 0x12ff);
        log("./log/Except", "CPacketTranslater::OnPacketSecedePower Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x1304);
        log("./log/Except", "CPacketTranslater::OnPacketSecedePower Exception Break\n");
    }
}
```
