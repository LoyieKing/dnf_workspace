# _ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader

`CPacketTranslater::OnGuildCargoUpgrade(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8085e92` | `0x588` | `0x807b83c` | `0x50e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,349 +1,325 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0xdc,%esp
+sub    $0xc0,%esp
 mov    0x8(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+test   %eax,%eax
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x55>
+movl   $0x1bd1,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnGuildCargoUpgrade : 0 == m_pclApp",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x504>
+mov    -0x34(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 mov    %eax,-0x30(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x56>
-movl   $0x1bd1,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x80(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnGuildCargoUpgrade : 0 == m_pclApp",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x80(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x57d>
+lea    0x10(%eax),%edx
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0xbb>
+movl   $0x1bdb,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnGuildCargoUpgrade : 0 == pclUser",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x504>
+mov    -0x34(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x28(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x38(%ebp)
-cmpl   $0x0,-0x38(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0xba>
-movl   $0x1bdb,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnGuildCargoUpgrade : 0 == pclUser",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x57d>
-mov    -0x30(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+lea    0x290(%eax),%edx
+mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x34(%ebp)
-cmpl   $0x0,-0x34(%ebp)
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x121>
+je     <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x129>
 movl   $0x1be2,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x70(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoUpgrade : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x57d>
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x504>
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x18c>
-mov    -0x30(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x1be9,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
+je     <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x3db>
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16IsExistGuildAgitEv>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x399>
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildCargoEv>
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildCargo11GetCapacityEv>
+mov    %eax,-0x20(%ebp)
+mov    -0x34(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+cmp    -0x20(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x331>
+mov    -0x34(%ebp),%eax
+add    $0x1a,%eax
+mov    (%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild12GetGuildFundEv>
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
+cmp    -0x1c(%ebp),%eax
+jae    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x214>
+mov    -0x34(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%esi
+mov    -0x34(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%ebx
+movl   $0x1c00,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x18(%ebp),%eax
+mov    %eax,0x24(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x20(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x1c(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildCargoUpgrade : %d is not guild master(g:%d)",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x57d>
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16IsExistGuildAgitEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x1e3>
-mov    -0x30(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x1bf0,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildCargoUpgrade : %d guild agit error",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x57d>
-mov    -0x30(%ebp),%eax
-mov    0x12(%eax),%ebx
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildCargo11GetCapacityEv>
-cmp    %eax,%ebx
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x29d>
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0xb0(%ebp)
-mov    -0x30(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0xac(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildCargo11GetCapacityEv>
-mov    %eax,%ebx
-mov    -0x30(%ebp),%eax
-mov    0x16(%eax),%edi
-mov    -0x30(%ebp),%eax
-mov    0x12(%eax),%esi
-movl   $0x1bf7,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xb0(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0xac(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %ebx,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    %esi,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildCargoUpgrade Capacity(c:%d,n:%d, gcapa:%d) Error! Guild(%d), User(%d)",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x57d>
-mov    -0x30(%ebp),%eax
-mov    0x1a(%eax),%ebx
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild12GetGuildFundEv>
-cmp    %eax,%ebx
-seta   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x382>
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild12GetGuildFundEv>
-mov    %eax,%edi
-mov    -0x30(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0xa8(%ebp)
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0xa4(%ebp)
-mov    -0x30(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0xa0(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildCargo11GetCapacityEv>
-mov    %eax,%esi
-mov    -0x30(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x9c(%ebp)
-mov    -0x30(%ebp),%eax
-mov    0x12(%eax),%ebx
-movl   $0x1c00,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x24(%esp)
-mov    -0xa8(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    -0xa4(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0xa0(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    -0x9c(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoUpgrade guild fund shortage(c:%d,n:%d, gcapa:%d) Error! Guild(%d), User(%d), ReqFund(%d), CurrFund(%d)",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x57d>
-mov    -0x30(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x504>
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12SubGuildFundEj>
 movl   $0x1,0x4(%esp)
-mov    -0x34(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-mov    -0x30(%ebp),%eax
-mov    0x16(%eax),%ebx
-mov    -0x34(%ebp),%eax
+mov    -0x34(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%ebx
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildCargoEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo11SetCapacityEj>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetTcpDBServerEv>
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x14(%ebp)
 movl   $0x16,0x8(%esp)
 movl   $0x714,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer16makePacketHeaderEtt>
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x30(%ebp),%eax
-mov    0xa(%eax),%edx
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x28(%ebp),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x30(%ebp),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x34(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CTcpDBServer12SendToServerEPc>
+lea    -0x7f(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN34Packet_Channel_Guild_Cargo_UpgradeC1Ev>
+lea    -0x7f(%ebp),%eax
+lea    0xa(%eax),%ebx
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,(%ebx)
+lea    -0x7f(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x30(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x7f(%ebp),%eax
+add    $0x12,%eax
+movb   $0xc1,(%eax)
+lea    -0x7f(%ebp),%eax
+movl   $0x13,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildCargoEv>
+mov    -0x2c(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildCargo14SendGuildCargoEP5CUser>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x504>
+mov    -0x34(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%esi
+mov    -0x34(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%ebx
+movl   $0x1bf7,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0x1c(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x18(%esp)
 mov    -0x20(%ebp),%eax
-mov    %edx,0xa(%eax)
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    %edx,0xe(%eax)
-mov    -0x30(%ebp),%eax
-mov    0x16(%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    %edx,0x12(%eax)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CTcpDBServer12SendToServerEPc>
-lea    -0x93(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN34Packet_Channel_Guild_Cargo_UpgradeC1Ev>
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x89(%ebp)
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x85(%ebp)
-movb   $0xc1,-0x81(%ebp)
-lea    -0x93(%ebp),%eax
-movl   $0x13,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    -0x38(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildCargo14SendGuildCargoEP5CUser>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x57d>
+mov    %eax,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildCargoUpgrade Capacity(c:%d,n:%d, gcapa:%d) Error! Guild(%d), User(%d)",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x504>
+movl   $0x1bf0,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x28(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildCargoUpgrade : %d guild agit error",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x504>
+movl   $0x1be9,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x28(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildCargoUpgrade : %d is not guild master(g:%d)",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x504>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x523>
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x4a4>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+movl   $0x1c34,0x8(%esp)
+movl   $"OnGuildCargoUpgrade",0x4(%esp)
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x1c34,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildApplyOriginalPowerSide Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x51c>
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x49d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x57d>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x504>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1c39,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x90(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildApplyOriginalPowerSide Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x578>
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader+0x4ff>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0xdc,%esp
+add    $0xc0,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildCargoUpgrade(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  CGuildCargo *pCVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  CServerHandler *this;
  Packet_Channel_Guild_Cargo_Upgrade local_97 [10];
  undefined4 local_8d;
  undefined4 local_89;
  undefined1 local_85;
  CMyFileLog local_84 [8];
  CMyFileLog local_7c [8];
  CMyFileLog local_74 [8];
  CMyFileLog local_6c [8];
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [24];
  CUser *local_3c;
  CGuild *local_38;
  PacketHeader *local_34;
  CApplication *local_30;
  CTcpDBServer *local_2c;
  char *local_28;
  char *local_24;
  
  local_34 = param_1;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 08085ec3 to 08086333 has its CatchHandler @ 08086339 */
    CMyFileLog::CMyFileLog(local_84,"OnGuildCargoUpgrade",0x1bd1);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_84,"./log/GuildCargo","CPacketTranslater::OnGuildCargoUpgrade : 0 == m_pclApp")
    ;
  }
  else {
    local_30 = m_pclApp + 0x10;
    local_3c = (CUser *)CUserManager::FindUser_CharNo((uint)local_30);
    if (local_3c == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_7c,"OnGuildCargoUpgrade",0x1bdb);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_7c,"./log/GuildCargo","CPacketTranslater::OnGuildCargoUpgrade : 0 == pclUser"
                );
    }
    else {
      local_38 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
      if (local_38 == (CGuild *)0x0) {
        CMyFileLog::CMyFileLog(local_74,"OnGuildCargoUpgrade",0x1be2);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_74,"./log/GuildCargo",
                   "CPacketTranslater::OnGuildCargoUpgrade : 0 == pclGuild");
      }
      else {
        cVar7 = CGuild::IsGuildMaster(local_38,*(uint *)(local_34 + 0xe));
        if (cVar7 == '\x01') {
          cVar7 = CGuild::IsExistGuildAgit(local_38);
          if (cVar7 == '\x01') {
            iVar3 = *(int *)(local_34 + 0x12);
            pCVar8 = (CGuildCargo *)CGuild::GetGuildCargo(local_38);
            iVar9 = CGuildCargo::_ZN11CGuildCargo11GetCapacityEv(pCVar8);
            if (iVar3 == iVar9) {
              uVar6 = *(uint *)(local_34 + 0x1a);
              uVar11 = CGuild::GetGuildFund(local_38);
              if (uVar11 < uVar6) {
                uVar12 = CGuild::GetGuildFund(local_38);
                uVar1 = *(undefined4 *)(local_34 + 0x1a);
                uVar2 = *(undefined4 *)(local_34 + 0xe);
                uVar4 = *(undefined4 *)(local_34 + 10);
                pCVar8 = (CGuildCargo *)CGuild::GetGuildCargo(local_38);
                uVar13 = CGuildCargo::_ZN11CGuildCargo11GetCapacityEv(pCVar8);
                uVar5 = *(undefined4 *)(local_34 + 0x16);
                uVar10 = *(undefined4 *)(local_34 + 0x12);
                CMyFileLog::CMyFileLog(local_54,"OnGuildCargoUpgrade",0x1c00);
                CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                          (local_54,"./log/GuildCargo",
                           "CPacketTranslater::OnGuildCargoUpgrade guild fund shortage(c:%d,n:%d, gcapa:%d) Error! Guild(%d), User(%d), ReqFund(%d), CurrFund(%d)"
                           ,uVar10,uVar5,uVar13,uVar4,uVar2,uVar1,uVar12);
              }
              else {
                CGuild::SubGuildFund(local_38,*(uint *)(local_34 + 0x1a));
                CGuild::SendGuildInfoToMembers(local_38,true);
                uVar6 = *(uint *)(local_34 + 0x16);
                pCVar8 = (CGuildCargo *)CGuild::GetGuildCargo(local_38);
                CGuildCargo::_ZN11CGuildCargo11SetCapacityEj(pCVar8,uVar6);
                this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
                local_2c = (CTcpDBServer *)CServerHandler::GetTcpDBServer(this);
                local_28 = (char *)CTcpDBServer::_ZN12CTcpDBServer16makePacketHeaderEtt
                                             (local_2c,0x714,0x16);
                *(undefined4 *)(local_28 + 10) = *(undefined4 *)(local_34 + 10);
                *(undefined4 *)(local_28 + 0xe) = *(undefined4 *)(local_34 + 0xe);
                *(undefined4 *)(local_28 + 0x12) = *(undefined4 *)(local_34 + 0x16);
                local_24 = local_28;
                CTcpDBServer::SendToServer(local_2c,local_28);
                Packet_Channel_Guild_Cargo_Upgrade::Packet_Channel_Guild_Cargo_Upgrade(local_97);
                local_8d = CUser::GetIdByChannel(local_3c);
                local_89 = *(undefined4 *)(local_34 + 0xe);
                local_85 = 0xc1;
                CUser::SendToGameserver(local_3c,(char *)local_97,0x13);
                pCVar8 = (CGuildCargo *)CGuild::GetGuildCargo(local_38);
                CGuildCargo::_ZN11CGuildCargo14SendGuildCargoEP5CUser(pCVar8,local_3c);
              }
            }
            else {
              uVar1 = *(undefined4 *)(local_34 + 0xe);
              uVar2 = *(undefined4 *)(local_34 + 10);
              pCVar8 = (CGuildCargo *)CGuild::GetGuildCargo(local_38);
              uVar10 = CGuildCargo::_ZN11CGuildCargo11GetCapacityEv(pCVar8);
              uVar4 = *(undefined4 *)(local_34 + 0x16);
              uVar5 = *(undefined4 *)(local_34 + 0x12);
              CMyFileLog::CMyFileLog(local_5c,"OnGuildCargoUpgrade",0x1bf7);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_5c,"./log/GuildCargo",
                         "CPacketTranslater::OnGuildCargoUpgrade Capacity(c:%d,n:%d, gcapa:%d) Error! Guild(%d), User(%d)"
                         ,uVar5,uVar4,uVar10,uVar2,uVar1);
            }
          }
          else {
            uVar1 = *(undefined4 *)(local_34 + 10);
            CMyFileLog::CMyFileLog(local_64,"OnGuildCargoUpgrade",0x1bf0);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_64,"./log/GuildCargo",
                       "CPacketTranslater::OnGuildCargoUpgrade : %d guild agit error",uVar1);
          }
        }
        else {
          uVar1 = *(undefined4 *)(local_34 + 10);
          uVar2 = *(undefined4 *)(local_34 + 0xe);
          CMyFileLog::CMyFileLog(local_6c,"OnGuildCargoUpgrade",0x1be9);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_6c,"./log/GuildCargo",
                     "CPacketTranslater::OnGuildCargoUpgrade : %d is not guild master(g:%d)",uVar2,
                     uVar1);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4922 行）：

```cpp
void CPacketTranslater::OnGuildCargoUpgrade(PacketHeader* pkt)
{
    try
    {
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1bd1, "./log/GuildCargo", "CPacketTranslater::OnGuildCargoUpgrade : 0 == m_pclApp");
        return;
    }
    unsigned int charNo = *(unsigned int*)(pb + 0xe);
    CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo);
    if (user == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1bdb, "./log/GuildCargo", "CPacketTranslater::OnGuildCargoUpgrade : 0 == pclUser");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    CGuild* guild;
    if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1be2, "./log/GuildCargo", "CPacketTranslater::OnGuildCargoUpgrade : 0 == pclGuild");
        return;
    }
    if (guild->IsGuildMaster(charNo) == 1)
    {
        if (guild->IsExistGuildAgit() == 1)
        {
            int curCapacity = guild->GetGuildCargo()->GetCapacity();
            if (*(int*)(pb + 0x12) == curCapacity)
            {
                unsigned int reqFund = *(unsigned int*)(pb + 0x1a);
                unsigned int guildFund = guild->GetGuildFund();
                if (guildFund < reqFund)
                {
                    DNF_LOG_SCOPE_LINE(0x1c00,"./log/GuildCargo",
                        "CPacketTranslater::OnGuildCargoUpgrade guild fund shortage(c:%d,n:%d, gcapa:%d) Error! Guild(%d), User(%d), ReqFund(%d), CurrFund(%d)",
                        *(unsigned int*)(pb + 0x12), *(unsigned int*)(pb + 0x16), curCapacity,
                        guildKey, charNo, reqFund, guildFund);
                }
                else
                {
                    guild->SubGuildFund(reqFund);
                    guild->SendGuildInfoToMembers(true);
                    guild->GetGuildCargo()->SetCapacity(*(unsigned int*)(pb + 0x16));
                    CTcpDBServer* tcpDb = m_pclApp->Get_ServerHandler()->GetTcpDBServer();
                    char* buf = tcpDb->makePacketHeader(0x714, 0x16);
                    *(unsigned int*)(buf + 0xa) = guildKey;
                    *(unsigned int*)(buf + 0xe) = charNo;
                    *(unsigned int*)(buf + 0x12) = *(unsigned int*)(pb + 0x16);
                    tcpDb->SendToServer(buf);
                    Packet_Channel_Guild_Cargo_Upgrade reply;
                    *(unsigned int*)((char*)&reply + 0xa) = user->GetIdByChannel();
                    *(unsigned int*)((char*)&reply + 0xe) = charNo;
                    *(unsigned char*)((char*)&reply + 0x12) = 0xc1;
                    user->SendToGameserver((char*)&reply, 0x13);
                    guild->GetGuildCargo()->SendGuildCargo(user);
                }
            }
            else
            {
                DNF_LOG_SCOPE_LINE(0x1bf7,"./log/GuildCargo",
                    "CPacketTranslater::OnGuildCargoUpgrade Capacity(c:%d,n:%d, gcapa:%d) Error! Guild(%d), User(%d)",
                    *(unsigned int*)(pb + 0x12), *(unsigned int*)(pb + 0x16), curCapacity,
                    guildKey, charNo);
            }
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x1bf0,"./log/GuildCargo",
                "CPacketTranslater::OnGuildCargoUpgrade : %d guild agit error", guildKey);
        }
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x1be9,"./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoUpgrade : %d is not guild master(g:%d)", charNo,
            guildKey);
    }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnGuildCargoUpgrade", 0x1c34);
        log("./log/Except", "CPacketTranslater::OnGuildApplyOriginalPowerSide Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x1c39);
        log("./log/Except", "CPacketTranslater::OnGuildApplyOriginalPowerSide Exception Break\n");
    }
}
```
