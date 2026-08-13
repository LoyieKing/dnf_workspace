# _ZN13CPowerManager18SaveDBPowerWarRankEv

`CPowerManager::SaveDBPowerWarRank()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a4250` | `0x68a` | `0x809b302` | `0x66c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,390 +1,376 @@
+mov    0x8(%ebp),%eax
+mov    0x18c(%eax),%ebx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
+mov    0x8(%ebp),%edx
+add    $0xe0,%edx
+mov    -0x30(%ebp),%ecx
+mov    %ecx,0x18(%esp)
+mov    %edi,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $0x0,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN6CPower24RewardGuildPowerWarPointER13CGuildManagerbiiii>
+jmp    <T> <_ZN13CPowerManager24RewardGuildPowerWarPointEv+0x1f0>
+mov    0x8(%ebp),%eax
+mov    0x198(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x194(%eax),%edi
+mov    0x8(%ebp),%eax
+mov    0x190(%eax),%esi
+mov    0x8(%ebp),%eax
+mov    0x18c(%eax),%ebx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
+mov    0x8(%ebp),%edx
+add    $0x74,%edx
+mov    -0x2c(%ebp),%ecx
+mov    %ecx,0x18(%esp)
+mov    %edi,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $0x0,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN6CPower24RewardGuildPowerWarPointER13CGuildManagerbiiii>
+add    $0x4c,%esp
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
+ret
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x1850,%esp
+sub    $0x1b90,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x184(%eax),%eax
-test   %al,%al
-je     <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x67c>
-mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-cmp    $0x2,%al
-jg     <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x67f>
+mov    %al,-0x31(%ebp)
+cmpb   $0x0,-0x31(%ebp)
+je     <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x662>
+cmpb   $0x2,-0x31(%ebp)
+jg     <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x662>
 movl   $0x1b6,0x8(%esp)
 movl   $&_ZZN13CPowerManager18SaveDBPowerWarRankEvE12__FUNCTION__,0x4(%esp)
-lea    -0x64(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"POWER WAR RESULT DB SAVE START",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x889(%ebp),%eax
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    %eax,-0x30(%ebp)
+lea    -0xbcd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34Packet_DB_Save_Power_War_User_RankC1Ev>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
-mov    %al,-0x87e(%ebp)
-lea    -0x1829(%ebp),%eax
+mov    %al,-0x29(%ebp)
+movzbl -0x29(%ebp),%eax
+mov    %al,-0xbc2(%ebp)
+lea    -0x1b70(%ebp),%eax
 mov    %eax,%ebx
 mov    $0x1f3,%esi
-jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0xac>
+jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0xb8>
 mov    %ebx,(%esp)
 call   <T> <_ZN10STUserRankC1Ev>
 add    $0x8,%ebx
 sub    $0x1,%esi
 cmp    $0xffffffff,%esi
 setne  %al
 test   %al,%al
-jne    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x9e>
-movl   $0x1,-0x24(%ebp)
-jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x2fe>
-movl   $0x0,-0x68(%ebp)
+jne    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0xaa>
+movl   $0x1,-0x20(%ebp)
+jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x309>
 movl   $0xfa0,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x1829(%ebp),%eax
+lea    -0x1b70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-mov    -0x24(%ebp),%eax
-mov    %al,-0x87d(%ebp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %al,-0xbc1(%ebp)
+mov    -0x20(%ebp),%eax
 imul   $0x6c,%eax,%eax
 add    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower21GetPowerWarCharacInfoEv>
-mov    %eax,-0x20(%ebp)
-lea    -0x1829(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+movl   $0x0,-0xb4(%ebp)
+lea    -0x1b70(%ebp),%eax
 mov    %eax,0x8(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,0x4(%esp)
+lea    -0xb4(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRank>
+mov    -0xb4(%ebp),%ebx
+movl   $0x1d1,0x8(%esp)
+movl   $&_ZZN13CPowerManager18SaveDBPowerWarRankEvE12__FUNCTION__,0x4(%esp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x10(%esp)
 mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRank>
-mov    -0x68(%ebp),%ebx
-movl   $0x1d1,0x8(%esp)
-movl   $&_ZZN13CPowerManager18SaveDBPowerWarRankEvE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    -0x24(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"SaveDBPowerWarRank() PowerSide %d, User Rank Count is %d",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x68(%ebp),%eax
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0xb4(%ebp),%eax
 test   %eax,%eax
-jne    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x1b0>
+jne    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x1d2>
+mov    -0xb4(%ebp),%ebx
 movl   $0x1d6,0x8(%esp)
 movl   $&_ZZN13CPowerManager18SaveDBPowerWarRankEvE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x24(%ebp),%eax
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x10(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"SaveDBPowerWarRank() PowerSide %d, User Rank Count is 0",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x2fa>
-mov    -0x68(%ebp),%eax
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x305>
+mov    -0xb4(%ebp),%eax
 cmp    $0xfa,%eax
-jbe    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x29b>
-movl   $0x0,-0x87c(%ebp)
-cmpl   $0x1,-0x24(%ebp)
-jne    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x1d7>
-movb   $0x1,-0x87f(%ebp)
-jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x1de>
-movb   $0x0,-0x87f(%ebp)
-movl   $0xfa,-0x878(%ebp)
-movl   $0x7d0,0x8(%esp)
-lea    -0x1829(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x889(%ebp),%eax
-add    $0x15,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x889(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-movl   $0xfb,-0x87c(%ebp)
-movb   $0x0,-0x87f(%ebp)
-mov    -0x68(%ebp),%eax
-sub    $0xfa,%eax
-mov    %eax,-0x878(%ebp)
-mov    -0x68(%ebp),%eax
-add    $0x1fffff06,%eax
+ja     <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x23c>
+movb   $0x1,-0xbc3(%ebp)
+mov    -0xb4(%ebp),%eax
+mov    %eax,-0xbbc(%ebp)
+mov    -0xb4(%ebp),%eax
 shl    $0x3,%eax
 mov    %eax,0x8(%esp)
-lea    -0x1829(%ebp),%eax
-add    $0x7d8,%eax
-mov    %eax,0x4(%esp)
-lea    -0x889(%ebp),%eax
+lea    -0x1b70(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0xbcd(%ebp),%eax
 add    $0x15,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x889(%ebp),%edx
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0xbcd(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x2fa>
-movl   $0x0,-0x87c(%ebp)
-movb   $0x1,-0x87f(%ebp)
-mov    -0x68(%ebp),%eax
-mov    %eax,-0x878(%ebp)
-mov    -0x68(%ebp),%eax
-shl    $0x3,%eax
-mov    %eax,0x8(%esp)
-lea    -0x1829(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x889(%ebp),%eax
+jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x305>
+cmpl   $0x1,-0x20(%ebp)
+sete   %al
+mov    %al,-0xbc3(%ebp)
+movl   $0xfa,-0xbbc(%ebp)
+movl   $0x7d0,0x8(%esp)
+lea    -0x1b70(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0xbcd(%ebp),%eax
 add    $0x15,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x889(%ebp),%edx
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0xbcd(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-addl   $0x1,-0x24(%ebp)
-cmpl   $0x2,-0x24(%ebp)
+movb   $0xfb,-0xbc1(%ebp)
+movb   $0x0,-0xbc3(%ebp)
+mov    -0xb4(%ebp),%eax
+sub    $0xfa,%eax
+mov    %eax,-0xbbc(%ebp)
+mov    -0xb4(%ebp),%eax
+add    $0x1fffff06,%eax
+lea    0x0(,%eax,8),%edx
+lea    -0x1b70(%ebp),%eax
+add    $0x7d0,%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0xbcd(%ebp),%eax
+add    $0x15,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0xbcd(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+addl   $0x1,-0x20(%ebp)
+cmpl   $0x2,-0x20(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0xc2>
-lea    -0x889(%ebp),%eax
+jne    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0xce>
+lea    -0x3e8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_DB_Save_Power_War_Guild_RankC1Ev>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
-mov    %al,-0x87f(%ebp)
-movl   $0x1,-0x1c(%ebp)
-jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x414>
-mov    -0x1c(%ebp),%eax
-mov    %al,-0x87e(%ebp)
-movl   $0x0,-0x87d(%ebp)
+mov    %al,-0x3de(%ebp)
+movl   $0x1,-0x18(%ebp)
+jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x420>
+mov    -0x18(%ebp),%eax
+mov    %al,-0x3dd(%ebp)
+movl   $0x0,-0x3dc(%ebp)
 movl   $0x320,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x889(%ebp),%eax
+lea    -0x3e8(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-mov    -0x1c(%ebp),%eax
+mov    -0x18(%ebp),%eax
 imul   $0x6c,%eax,%eax
 add    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower20GetPowerWarGuildInfoEv>
-mov    %eax,-0x18(%ebp)
-lea    -0x889(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+movl   $0x0,-0xb8(%ebp)
+lea    -0x3e8(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,0x8(%esp)
-lea    -0x889(%ebp),%eax
-add    $0xc,%eax
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+lea    -0xb8(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CPowerWarGuildInfo22GetAllGuildRankingInfoERiP11STGuildRank>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x889(%ebp),%edx
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0x3e8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x248,0x8(%esp)
 movl   $&_ZZN13CPowerManager18SaveDBPowerWarRankEvE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x1c(%ebp),%eax
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x18(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"SaveDBPowerWarRank() SEND Packet_DB_Save_Power_War_Guild_Rank Power:%d",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x2,-0x1c(%ebp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+addl   $0x1,-0x18(%ebp)
+cmpl   $0x2,-0x18(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x343>
-lea    -0x7f(%ebp),%eax
+jne    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x34b>
+lea    -0x8b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN38Packet_DB_Save_Power_War_Statue_RankerC1Ev>
-lea    -0x95(%ebp),%eax
+lea    -0xa1(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Notice_Power_War_RankC1Ev>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
-mov    %al,-0x75(%ebp)
-lea    -0xa4(%ebp),%eax
+mov    %al,-0x81(%ebp)
+lea    -0xb0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x74,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower21GetPowerWarCharacInfoEv>
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x28(%ebp)
 mov    0x8(%ebp),%eax
 add    $0xe0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower21GetPowerWarCharacInfoEv>
-mov    %eax,-0x10(%ebp)
-lea    -0xa4(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+lea    -0xb0(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19CPowerWarCharacInfo21GetStatueRankingUsersERSt6vectorIP20STPowerWarCharacInfoSaIS2_EE>
-lea    -0xa4(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+lea    -0xb0(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19CPowerWarCharacInfo21GetStatueRankingUsersERSt6vectorIP20STPowerWarCharacInfoSaIS2_EE>
-lea    -0x44(%ebp),%eax
-lea    -0xa4(%ebp),%edx
+lea    -0x54(%ebp),%eax
+lea    -0xb0(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EE3endEv>
 sub    $0x4,%esp
-lea    -0x40(%ebp),%eax
-lea    -0xa4(%ebp),%edx
+lea    -0x50(%ebp),%eax
+lea    -0xb0(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EE5beginEv>
 sub    $0x4,%esp
 movl   $&_ZN20STPowerWarCharacInfo7CompareEPKS_S1_,0x8(%esp)
-mov    -0x44(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x40(%ebp),%eax
+mov    -0x54(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPP20STPowerWarCharacInfoSt6vectorIS3_SaIS3_EEEEPFbPKS2_SA_EEvT_SD_T0_>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x5b2>
-lea    -0xa4(%ebp),%eax
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x59c>
+lea    -0xb0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP20STPowerWarCharacInfoSaIS1_EE4sizeEv>
-cmp    -0xc(%ebp),%eax
+cmp    -0x10(%ebp),%eax
 setg   %al
 test   %al,%al
-je     <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x5ae>
-mov    -0xc(%ebp),%ebx
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0xa4(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EE2atEj>
+je     <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x598>
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0xb0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EEixEj>
 mov    (%eax),%eax
 mov    (%eax),%eax
-mov    %eax,-0x74(%ebp,%ebx,4)
-mov    -0xc(%ebp),%ebx
+mov    %eax,-0xc(%ebp)
+mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,-0x80(%ebp,%eax,4)
+movl   $0x273,0x8(%esp)
+movl   $&_ZZN13CPowerManager18SaveDBPowerWarRankEvE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0xa4(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EE2atEj>
-mov    (%eax),%eax
-mov    (%eax),%eax
-mov    %eax,-0x8b(%ebp,%ebx,4)
-mov    -0xc(%ebp),%eax
-mov    -0x74(%ebp,%eax,4),%ebx
-movl   $0x273,0x8(%esp)
-movl   $&_ZZN13CPowerManager18SaveDBPowerWarRankEvE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    -0xc(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Last Rank:%d, Charac No:%d",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x2,%eax
-setbe  %al
-test   %al,%al
-jne    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x507>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x2,-0x10(%ebp)
+setle  %al
+test   %al,%al
+jne    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x516>
 movl   $0x277,0x8(%esp)
 movl   $&_ZZN13CPowerManager18SaveDBPowerWarRankEvE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"SaveDBPowerWarRank() SEND Packet_DB_Save_Power_War_Statue_Ranker",0x8(%esp)
-movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x7f(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x636>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0xa4(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0xa4(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EED1Ev>
-movl   $0x27b,0x8(%esp)
-movl   $&_ZZN13CPowerManager18SaveDBPowerWarRankEvE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"POWER WAR RESULT DB SAVE END",0x8(%esp)
-movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x680>
-nop
-jmp    <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv+0x680>
-nop
-lea    -0x8(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
-ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::SaveDBPowerWarRank() */

void __thiscall CPowerManager::_ZN13CPowerManager18SaveDBPowerWarRankEv(CPowerManager *this)

{
  CServerHandler *pCVar1;
  undefined4 *puVar2;
  STUserRank *this_00;
  int iVar3;
  uint uVar4;
  STUserRank local_182d [2008];
  undefined1 auStack_1055 [1992];
  Packet_DB_Save_Power_War_User_Rank local_88d [10];
  undefined1 local_883;
  undefined1 local_882;
  uint local_881;
  STGuildRank SStack_87d;
  uint local_87c;
  undefined1 auStack_878 [2000];
  vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>> local_a8 [15];
  Packet_Notice_Power_War_Rank local_99 [10];
  undefined4 auStack_8f [3];
  Packet_DB_Save_Power_War_Statue_Ranker local_83 [10];
  undefined1 local_79;
  uint auStack_78 [4];
  CMyFileLog local_68 [8];
  CMyFileLog local_60 [8];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  int local_28;
  CPowerWarCharacInfo *local_24;
  int local_20;
  CPowerWarGuildInfo *local_1c;
  CPowerWarCharacInfo *local_18;
  CPowerWarCharacInfo *local_14;
  uint local_10;
  
  if ((this[0x184] != (CPowerManager)0x0) && ((char)this[0x184] < '\x03')) {
    CMyFileLog::CMyFileLog(local_68,"SaveDBPowerWarRank",0x1b6);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_68,"./log/PowerResult","POWER WAR RESULT DB SAVE START");
    Packet_DB_Save_Power_War_User_Rank::Packet_DB_Save_Power_War_User_Rank(local_88d);
    pCVar1 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)(this + 4));
    local_882 = CServerHandler::GetServerGroupNo(pCVar1);
    this_00 = local_182d;
    for (iVar3 = 499; iVar3 != -1; iVar3 = iVar3 + -1) {
      STUserRank::_ZN10STUserRankC2Ev(this_00);
      this_00 = this_00 + 8;
    }
    for (local_28 = 1; local_28 < 3; local_28 = local_28 + 1) {
      auStack_78[3] = 0;
      memset(local_182d,0,4000);
      local_881 = CONCAT31(local_881._1_3_,(char)local_28);
      local_24 = (CPowerWarCharacInfo *)
                 CPower::GetPowerWarCharacInfo((CPower *)(this + local_28 * 0x6c + 8));
      CPowerWarCharacInfo::GetAllUserRankingInfo(local_24,auStack_78 + 3,local_182d);
      uVar4 = auStack_78[3];
      CMyFileLog::CMyFileLog(local_60,"SaveDBPowerWarRank",0x1d1);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_60,"./log/PowerResult",
                 "SaveDBPowerWarRank() PowerSide %d, User Rank Count is %d",local_28,uVar4);
      if (auStack_78[3] == 0) {
        CMyFileLog::CMyFileLog(local_58,"SaveDBPowerWarRank",0x1d6);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_58,"./log/PowerResult",
                   "SaveDBPowerWarRank() PowerSide %d, User Rank Count is 0",local_28,uVar4);
      }
      else if (auStack_78[3] < 0xfb) {
        local_881 = local_881 & 0xff;
        SStack_87d = (STGuildRank)0x0;
        local_883 = 1;
        local_87c = auStack_78[3];
        memcpy(auStack_878,local_182d,auStack_78[3] << 3);
        pCVar1 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)(this + 4));
        CServerHandler::SendToDB(pCVar1,(PacketHeader *)local_88d);
      }
      else {
        local_881 = local_881 & 0xff;
        SStack_87d = (STGuildRank)0x0;
        local_883 = local_28 == 1;
        local_87c = 0xfa;
        memcpy(auStack_878,local_182d,2000);
        pCVar1 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)(this + 4));
        CServerHandler::SendToDB(pCVar1,(PacketHeader *)local_88d);
        local_881 = CONCAT31(0xfb,(undefined1)local_881);
        SStack_87d = (STGuildRank)0x0;
        local_883 = 0;
        local_87c = auStack_78[3] - 0xfa;
        memcpy(auStack_878,auStack_1055,(auStack_78[3] + 0x1fffff06) * 8);
        pCVar1 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)(this + 4));
        CServerHandler::SendToDB(pCVar1,(PacketHeader *)local_88d);
      }
    }
    Packet_DB_Save_Power_War_Guild_Rank::Packet_DB_Save_Power_War_Guild_Rank
              ((Packet_DB_Save_Power_War_Guild_Rank *)local_88d);
    pCVar1 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)(this + 4));
    local_883 = CServerHandler::GetServerGroupNo(pCVar1);
    for (local_20 = 1; local_20 < 3; local_20 = local_20 + 1) {
      local_882 = (undefined1)local_20;
      local_881 = 0;
      memset(&SStack_87d,0,800);
      local_1c = (CPowerWarGuildInfo *)
                 CPower::GetPowerWarGuildInfo((CPower *)(this + local_20 * 0x6c + 8));
      CPowerWarGuildInfo::GetAllGuildRankingInfo(local_1c,(int *)&local_881,&SStack_87d);
      pCVar1 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)(this + 4));
      CServerHandler::SendToDB(pCVar1,(PacketHeader *)local_88d);
      CMyFileLog::CMyFileLog(local_50,"SaveDBPowerWarRank",0x248);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_50,"./log/PowerResult",
                 "SaveDBPowerWarRank() SEND Packet_DB_Save_Power_War_Guild_Rank Power:%d",local_20);
    }
    Packet_DB_Save_Power_War_Statue_Ranker::Packet_DB_Save_Power_War_Statue_Ranker(local_83);
    Packet_Notice_Power_War_Rank::Packet_Notice_Power_War_Rank(local_99);
    pCVar1 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)(this + 4));
    local_79 = CServerHandler::GetServerGroupNo(pCVar1);
    std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::vector(local_a8);
    local_18 = (CPowerWarCharacInfo *)CPower::GetPowerWarCharacInfo((CPower *)(this + 0x74));
    local_14 = (CPowerWarCharacInfo *)CPower::GetPowerWarCharacInfo((CPower *)(this + 0xe0));
                    /* try { // try from 080a46e7 to 080a4865 has its CatchHandler @ 080a4868 */
    CPowerWarCharacInfo::GetStatueRankingUsers(local_18,local_a8);
    CPowerWarCharacInfo::GetStatueRankingUsers(local_14,local_a8);
    std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::end();
    std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::begin();
    std::
    sort<__gnu_cxx::__normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>,bool(*)(STPowerWarCharacInfo_const*,STPowerWarCharacInfo_const*)>
              (local_44,local_48,STPowerWarCharacInfo::Compare);
    for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
      iVar3 = std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::size
                        (local_a8);
      uVar4 = local_10;
      if ((int)local_10 < iVar3) {
        puVar2 = (undefined4 *)
                 std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::at
                           (local_a8,local_10);
        auStack_78[uVar4] = *(uint *)*puVar2;
        uVar4 = local_10;
        puVar2 = (undefined4 *)
                 std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::at
                           (local_a8,local_10);
        auStack_8f[uVar4] = *(undefined4 *)*puVar2;
        uVar4 = auStack_78[local_10];
        CMyFileLog::CMyFileLog(local_40,"SaveDBPowerWarRank",0x273);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_40,"./log/PowerResult","Last Rank:%d, Charac No:%d",local_10,uVar4);
      }
    }
    CMyFileLog::CMyFileLog(local_38,"SaveDBPowerWarRank",0x277);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_38,"./log/PowerResult",
               "SaveDBPowerWarRank() SEND Packet_DB_Save_Power_War_Statue_Ranker");
    pCVar1 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)(this + 4));
    CServerHandler::SendToDB(pCVar1,(PacketHeader *)local_83);
    std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::~vector(local_a8);
    CMyFileLog::CMyFileLog(local_30,"SaveDBPowerWarRank",0x27b);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_30,"./log/PowerResult","POWER WAR RESULT DB SAVE END");
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 287 行）：

```cpp
void CPowerManager::SaveDBPowerWarRank()
{
    char winnerSide = m_winnerSide;
    if (winnerSide != 0 && winnerSide < 3)
    {
        CMyFileLog logStart(__FUNCTION__, 0x1b6);
        logStart("./log/PowerResult", "POWER WAR RESULT DB SAVE START");
        CApplication* app = *(CApplication**)&m_app;
        Packet_DB_Save_Power_War_User_Rank userPkt;
        unsigned char group = app->Get_ServerHandler()->GetServerGroupNo();
        userPkt.m_b = group;
        STUserRank userRanks[500];
        for (int side = 1; side < 3; side++)
        {
            memset(userRanks, 0, 4000);
            userPkt.m_c = (unsigned char)side;
            CPowerWarCharacInfo* characInfo =
                m_power[side].GetPowerWarCharacInfo();
            unsigned int count = 0;
            characInfo->GetAllUserRankingInfo(count, userRanks);
            {
                DNF_LOG_SCOPE_LINE(0x1d1,"./log/PowerResult", "SaveDBPowerWarRank() PowerSide %d, User Rank Count is %d",
                    side, count);
            }
            if (count == 0)
            {
                DNF_LOG_SCOPE_LINE(0x1d6,"./log/PowerResult",
                    "SaveDBPowerWarRank() PowerSide %d, User Rank Count is 0", side, count);
            }
            else if (count < 0xfb)
            {
                userPkt.m_a = 1;
                userPkt.m_e = count;
                memcpy(userPkt.m_ranks, userRanks, count << 3);
                app->Get_ServerHandler()->SendToDB(&userPkt);
            }
            else
            {
                userPkt.m_a = (unsigned char)(side == 1);
                userPkt.m_e = 0xfa;
                memcpy(userPkt.m_ranks, userRanks, 2000);
                app->Get_ServerHandler()->SendToDB(&userPkt);
                userPkt.m_c = 0xfb;
                userPkt.m_a = 0;
                userPkt.m_e = count - 0xfa;
                memcpy(userPkt.m_ranks, (char*)userRanks + 2000, (count - 0xfa) * 8);
                app->Get_ServerHandler()->SendToDB(&userPkt);
            }
        }
        Packet_DB_Save_Power_War_Guild_Rank guildPkt;
        guildPkt.m_a = app->Get_ServerHandler()->GetServerGroupNo();
        for (int side = 1; side < 3; side++)
        {
            guildPkt.m_b = (unsigned char)side;
            guildPkt.m_c = 0;
            memset(guildPkt.m_ranks, 0, 800);
            CPowerWarGuildInfo* guildInfo =
                m_power[side].GetPowerWarGuildInfo();
            int count = 0;
            guildInfo->GetAllGuildRankingInfo(count, (STGuildRank*)((char*)&guildPkt + 0x10));
            app->Get_ServerHandler()->SendToDB(&guildPkt);
            {
                DNF_LOG_SCOPE_LINE(0x248,"./log/PowerResult",
                    "SaveDBPowerWarRank() SEND Packet_DB_Save_Power_War_Guild_Rank Power:%d", side);
            }
        }
        Packet_DB_Save_Power_War_Statue_Ranker statuePkt;
        Packet_Notice_Power_War_Rank noticePkt;
        (void)noticePkt;
        statuePkt.m_group = app->Get_ServerHandler()->GetServerGroupNo();
        std::vector<STPowerWarCharacInfo*> users;
        CPowerWarCharacInfo* s1 = m_power[1].GetPowerWarCharacInfo();
        CPowerWarCharacInfo* s2 = m_power[2].GetPowerWarCharacInfo();
        s1->GetStatueRankingUsers(users);
        s2->GetStatueRankingUsers(users);
        std::sort(users.begin(), users.end(), STPowerWarCharacInfo::Compare);
        for (int i = 0; i < 3; i++)
        {
            if (i < (int)users.size())
            {
                unsigned int charNo = *(unsigned int*)users[i]->m_data;
                statuePkt.m_rankers[i] = charNo;
                DNF_LOG_SCOPE_LINE(0x273, "./log/PowerResult", "Last Rank:%d, Charac No:%d", i, charNo);
            }
        }
        {
            DNF_LOG_SCOPE_LINE(0x277,"./log/PowerResult",
                "SaveDBPowerWarRank() SEND Packet_DB_Save_Power_War_Statue_Ranker");
        }
        app->Get_ServerHandler()->SendToDB(&statuePkt);
        {
            DNF_LOG_SCOPE_LINE(0x27b, "./log/PowerResult", "POWER WAR RESULT DB SAVE END");
        }
    }
}
```
