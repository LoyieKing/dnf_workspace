# _ZN16StatisticManager13DBSaveProcessEP14CServerHandler

`StatisticManager::DBSaveProcess(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8071ffc` | `0x569` | `0x8071db0` | `0x52b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,418 +1,381 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-add    $0xffffff80,%esp
+sub    $0x68,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0xc(%ebp)
-lea    -0xc(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    (%eax),%edx
-mov    %edx,-0x60(%ebp)
-mov    0x4(%eax),%edx
-mov    %edx,-0x5c(%ebp)
-mov    0x8(%eax),%edx
-mov    %edx,-0x58(%ebp)
-mov    0xc(%eax),%edx
-mov    %edx,-0x54(%ebp)
-mov    0x10(%eax),%edx
-mov    %edx,-0x50(%ebp)
-mov    0x14(%eax),%edx
-mov    %edx,-0x4c(%ebp)
-mov    0x18(%eax),%edx
-mov    %edx,-0x48(%ebp)
-mov    0x1c(%eax),%edx
-mov    %edx,-0x44(%ebp)
-mov    0x20(%eax),%edx
-mov    %edx,-0x40(%ebp)
-mov    0x24(%eax),%edx
-mov    %edx,-0x3c(%ebp)
-mov    0x28(%eax),%eax
-mov    %eax,-0x38(%ebp)
-mov    -0x5c(%ebp),%edx
-mov    -0x58(%ebp),%eax
-mov    %edx,0x8(%esp)
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x24(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x24(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x24(%ebp),%eax
+mov    0x10(%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x24(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"---Time : %d, %d ----\n",(%esp)
 call   <T> <printf>
-mov    -0x5c(%ebp),%ecx
-mov    -0x58(%ebp),%edx
-mov    -0x54(%ebp),%eax
-mov    -0x50(%ebp),%ebx
-lea    0x1(%ebx),%esi
-mov    -0x4c(%ebp),%ebx
-add    $0x76c,%ebx
-mov    %ecx,0x1c(%esp)
-mov    %edx,0x18(%esp)
+mov    -0x14(%ebp),%eax
+lea    0x1(%eax),%ecx
+mov    -0x10(%ebp),%eax
+lea    0x76c(%eax),%edx
+mov    -0x20(%ebp),%eax
+mov    %eax,0x1c(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    -0x18(%ebp),%eax
 mov    %eax,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %ecx,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $"%d-%d-%d %d:%d:0",0x8(%esp)
 movl   $0x13,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager18SendDBP2PStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager17ResetP2PStatisticEv>
-mov    -0x58(%ebp),%eax
-cmp    $0x5,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x10d>
-mov    -0x5c(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x10d>
+cmpl   $0x5,-0x1c(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0xf7>
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0xf7>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager30ResetHellPartyStatisticItemMapEv>
-mov    -0x58(%ebp),%eax
-cmp    $0x5,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x139>
-mov    -0x5c(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x139>
+cmpl   $0x5,-0x1c(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x120>
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x120>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager19ResetFatigueBatteryEv>
-mov    -0x58(%ebp),%eax
-cmp    $0x5,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x165>
-mov    -0x5c(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x165>
+cmpl   $0x5,-0x1c(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x149>
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x149>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager29SendDBDisjointAvatarInfoTotalEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager28ResetDisjointAvatarInfoTotalEv>
-mov    -0x58(%ebp),%eax
-cmp    $0x5,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x191>
-mov    -0x5c(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x191>
+cmpl   $0x5,-0x1c(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x172>
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x172>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager22SendDBCreateEmblemInfoEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager21ResetCreateEmblemInfoEv>
-mov    -0x58(%ebp),%eax
-cmp    $0x5,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x1bd>
-mov    -0x5c(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x1bd>
+cmpl   $0x5,-0x1c(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x19b>
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x19b>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager24SendDBRandomboxStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager23ResetRandomboxStatisticEv>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager25ResetTingUserTimeCheckMapEv>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager31SendDBPowerwarLoadingTimeReportEP14CServerHandler>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager23SendDBPowerwarLagReportEP14CServerHandler>
-mov    -0x5c(%ebp),%ecx
+mov    -0x20(%ebp),%ecx
 mov    $0x66666667,%edx
 mov    %ecx,%eax
 imul   %edx
 sar    $0x2,%edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 sub    %eax,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 test   %edx,%edx
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x242>
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x220>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager21SendDBServerMatchDataEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager20ResetServerMatchDataEv>
-mov    -0x5c(%ebp),%eax
-test   %eax,%eax
-je     <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x255>
-mov    -0x5c(%ebp),%eax
-cmp    $0x1e,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x316>
-mov    -0x5c(%ebp),%ecx
-mov    -0x58(%ebp),%edx
-mov    -0x54(%ebp),%eax
-mov    -0x50(%ebp),%ebx
-lea    0x1(%ebx),%esi
-mov    -0x4c(%ebp),%ebx
-add    $0x76c,%ebx
-mov    %ecx,0x1c(%esp)
-mov    %edx,0x18(%esp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x230>
+cmpl   $0x1e,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x2f1>
+mov    -0x14(%ebp),%eax
+lea    0x1(%eax),%ecx
+mov    -0x10(%ebp),%eax
+lea    0x76c(%eax),%edx
+mov    -0x20(%ebp),%eax
+mov    %eax,0x1c(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    -0x18(%ebp),%eax
 mov    %eax,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %ecx,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $"%d-%d-%d %d:%d:0",0x8(%esp)
 movl   $0x13,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager29SendDBPacketOverflowStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager22ResetPacketOverflowMapEv>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager21ResetAssertManagerMapEv>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager25ResetUserTIngTimeCheckMapEv>
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc>
 call   <T> <_ZN14statistc_proxy20sendDBStatisticProxyEv>
 call   <T> <_ZN14statistc_proxy19resetStatisticProxyEv>
-mov    -0x58(%ebp),%ecx
+mov    -0x1c(%ebp),%ecx
 mov    $0x55555556,%edx
 mov    %ecx,%eax
 imul   %edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 sub    %eax,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 test   %edx,%edx
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x350>
-mov    -0x5c(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x350>
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x32a>
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x32a>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager23SendDBLoadingTimeReportEP14CServerHandler>
-mov    -0x58(%ebp),%eax
-cmp    $0x5,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x4a9>
-mov    -0x5c(%ebp),%eax
-cmp    $0xa,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x381>
+cmpl   $0x5,-0x1c(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x46f>
+cmpl   $0xa,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x357>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager13ResetPartyMapEv>
-mov    -0x5c(%ebp),%eax
-cmp    $0xf,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x3a6>
+cmpl   $0xf,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x37a>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager16ResetPartyJobMapEv>
-mov    -0x5c(%ebp),%eax
-cmp    $0x14,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x3cb>
+cmpl   $0x14,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x39d>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager19ResetPartyCharacMapEv>
-mov    -0x5c(%ebp),%eax
-cmp    $0x19,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x3f0>
+cmpl   $0x19,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x3c0>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager23ResetDeathTowerValueMapEv>
-mov    -0x5c(%ebp),%eax
-cmp    $0x1e,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x415>
+cmpl   $0x1e,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x3e3>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager29ResetDeathTowerPlayDataJobMapEv>
-mov    -0x5c(%ebp),%eax
-cmp    $0x23,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x43a>
+cmpl   $0x23,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x406>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager31ResetDeathTowerPlayDataPartyMapEv>
-mov    -0x5c(%ebp),%eax
-cmp    $0x28,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x45f>
+cmpl   $0x28,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x429>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager27SendDBBloodDungeonStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager17ResetBloodDungeonEv>
-mov    -0x5c(%ebp),%eax
-cmp    $0x2d,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x484>
+cmpl   $0x2d,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x44c>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager20SendDBValueStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager19ResetValueStatisticEv>
-mov    -0x5c(%ebp),%eax
-cmp    $0x32,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x4a9>
+cmpl   $0x32,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x46f>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager26SendDBCirculationStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager25ResetCirculationStatisticEv>
-mov    -0x58(%ebp),%eax
-cmp    $0x6,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x4d5>
-mov    -0x5c(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x4d5>
+cmpl   $0x6,-0x1c(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x498>
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x498>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager24ResetSecretShopStatisticEv>
-mov    -0x58(%ebp),%eax
-cmp    $0x6,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x501>
-mov    -0x5c(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x501>
+cmpl   $0x6,-0x1c(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x4c1>
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x4c1>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager29SendDBTowerOfDespairStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager19ResetTowerOfDespairEv>
-mov    -0x58(%ebp),%eax
-cmp    $0x5,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x52d>
-mov    -0x5c(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x52d>
+cmpl   $0x5,-0x1c(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x4ea>
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x4ea>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager28SendDBGoldcardEventStatisticEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager27ResetGoldcardEventStatisticEv>
-mov    -0x58(%ebp),%eax
-cmp    $0x6,%eax
-jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x562>
+cmpl   $0x6,-0x1c(%ebp)
+jne    <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler+0x529>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager22getCubeStatisticObjectEv>
-mov    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,-0xc(%ebp)
+mov    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CCubeStatistic17sendStatisticDataEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager22getCubeStatisticObjectEv>
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CCubeStatistic18resetStatisticDataEv>
-sub    $0xffffff80,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::DBSaveProcess(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager13DBSaveProcessEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  tm *ptVar6;
  CCubeStatistic *pCVar7;
  char local_38 [20];
  char local_24 [20];
  time_t local_10;
  
  local_10 = time((time_t *)0x0);
  ptVar6 = localtime(&local_10);
  iVar1 = ptVar6->tm_min;
  iVar2 = ptVar6->tm_hour;
  iVar3 = ptVar6->tm_mday;
  iVar4 = ptVar6->tm_mon;
  iVar5 = ptVar6->tm_year;
  printf("---Time : %d, %d ----\n",iVar2,iVar1);
  snprintf(local_24,0x13,"%d-%d-%d %d:%d:0",iVar5 + 0x76c,iVar4 + 1,iVar3,iVar2,iVar1);
  SendDBP2PStatistic(this,param_1);
  ResetP2PStatistic(this);
  if ((iVar2 == 5) && (iVar1 == 0)) {
    SendDBHellPartyStatisticItem(this,param_1);
    ResetHellPartyStatisticItemMap(this);
  }
  if ((iVar2 == 5) && (iVar1 == 0)) {
    SendDBFatigueBattery(this,param_1);
    ResetFatigueBattery(this);
  }
  if ((iVar2 == 5) && (iVar1 == 0)) {
    SendDBDisjointAvatarInfoTotal(this,param_1);
    ResetDisjointAvatarInfoTotal(this);
  }
  if ((iVar2 == 5) && (iVar1 == 0)) {
    SendDBCreateEmblemInfo(this,param_1);
    ResetCreateEmblemInfo(this);
  }
  if ((iVar2 == 5) && (iVar1 == 0)) {
    SendDBRandomboxStatistic(this,param_1);
    ResetRandomboxStatistic(this);
  }
  SendDBTingUserTimeCheck(this,param_1);
  ResetTingUserTimeCheckMap(this);
  SendDBPowerwarLoadingTimeReport(this,param_1);
  SendDBPowerwarLagReport(this,param_1);
  if (iVar1 % 10 == 0) {
    SendDBServerMatchData(this,param_1);
    ResetServerMatchData(this);
  }
  if ((iVar1 == 0) || (iVar1 == 0x1e)) {
    snprintf(local_38,0x13,"%d-%d-%d %d:%d:0",iVar5 + 0x76c,iVar4 + 1,iVar3,iVar2,iVar1);
    SendDBPacketOverflowStatistic(this,param_1);
    ResetPacketOverflowMap(this);
    SendDBAssertManagerStatistic(this,param_1);
    ResetAssertManagerMap(this);
    SendDBUserTingTimeCheckStatistic(this,param_1);
    ResetUserTIngTimeCheckMap(this);
    SendDBLagStatistics(this,param_1,local_38);
    statistc_proxy::sendDBStatisticProxy();
    statistc_proxy::resetStatisticProxy();
  }
  if ((iVar2 % 3 == 0) && (iVar1 == 0)) {
    SendDBLoadingTimeReport(this,param_1);
  }
  if (iVar2 == 5) {
    if (iVar1 == 10) {
      SendDBPartyStatistic(this,param_1);
      ResetPartyMap(this);
    }
    if (iVar1 == 0xf) {
      SendDBPartyJobStatistic(this,param_1);
      ResetPartyJobMap(this);
    }
    if (iVar1 == 0x14) {
      SendDBPartyCharacStatistic(this,param_1);
      ResetPartyCharacMap(this);
    }
    if (iVar1 == 0x19) {
      SendDBDeathTowerValueStatistic(this,param_1);
      ResetDeathTowerValueMap(this);
    }
    if (iVar1 == 0x1e) {
      SendDBDeathTowerPlayDataJobStatistic(this,param_1);
      ResetDeathTowerPlayDataJobMap(this);
    }
    if (iVar1 == 0x23) {
      SendDBDeathTowerPlayDataPartyStatistic(this,param_1);
      ResetDeathTowerPlayDataPartyMap(this);
    }
    if (iVar1 == 0x28) {
      SendDBBloodDungeonStatistic(this,param_1);
      ResetBloodDungeon(this);
    }
    if (iVar1 == 0x2d) {
      SendDBValueStatistic(this,param_1);
      ResetValueStatistic(this);
    }
    if (iVar1 == 0x32) {
      SendDBCirculationStatistic(this,param_1);
      ResetCirculationStatistic(this);
    }
  }
  if ((iVar2 == 6) && (iVar1 == 0)) {
    SendDBSecretShopStatistic(this,param_1);
    ResetSecretShopStatistic(this);
  }
  if ((iVar2 == 6) && (iVar1 == 0)) {
    SendDBTowerOfDespairStatistic(this,param_1);
    ResetTowerOfDespair(this);
  }
  if ((iVar2 == 5) && (iVar1 == 0)) {
    SendDBGoldcardEventStatistic(this,param_1);
    ResetGoldcardEventStatistic(this);
  }
  if (iVar2 == 6) {
    pCVar7 = (CCubeStatistic *)getCubeStatisticObject(this);
    CCubeStatistic::_ZN14CCubeStatistic17sendStatisticDataEP14CServerHandler(pCVar7,param_1);
    pCVar7 = (CCubeStatistic *)getCubeStatisticObject(this);
    CCubeStatistic::resetStatisticData(pCVar7);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 877 行）：

```cpp
void StatisticManager::DBSaveProcess(CServerHandler* handler)
{
    time_t now = time(0);
    tm* pt = localtime(&now);
    int min = pt->tm_min;
    int hour = pt->tm_hour;
    int mday = pt->tm_mday;
    int mon = pt->tm_mon;
    int year = pt->tm_year;
    printf("---Time : %d, %d ----\n", hour, min);
    char ts[20];
    snprintf(ts, 0x13, "%d-%d-%d %d:%d:0", year + 0x76c, mon + 1, mday, hour, min);
    SendDBP2PStatistic(handler);
    ResetP2PStatistic();
    if (hour == 5 && min == 0)
    {
        SendDBHellPartyStatisticItem(handler);
        ResetHellPartyStatisticItemMap();
    }
    if (hour == 5 && min == 0)
    {
        SendDBFatigueBattery(handler);
        ResetFatigueBattery();
    }
    if (hour == 5 && min == 0)
    {
        SendDBDisjointAvatarInfoTotal(handler);
        ResetDisjointAvatarInfoTotal();
    }
    if (hour == 5 && min == 0)
    {
        SendDBCreateEmblemInfo(handler);
        ResetCreateEmblemInfo();
    }
    if (hour == 5 && min == 0)
    {
        SendDBRandomboxStatistic(handler);
        ResetRandomboxStatistic();
    }
    SendDBTingUserTimeCheck(handler);
    ResetTingUserTimeCheckMap();
    SendDBPowerwarLoadingTimeReport(handler);
    SendDBPowerwarLagReport(handler);
    if (min % 10 == 0)
    {
        SendDBServerMatchData(handler);
        ResetServerMatchData();
    }
    if (min == 0 || min == 0x1e)
    {
        snprintf(ts, 0x13, "%d-%d-%d %d:%d:0", year + 0x76c, mon + 1, mday, hour, min);
        SendDBPacketOverflowStatistic(handler);
        ResetPacketOverflowMap();
        SendDBAssertManagerStatistic(handler);
        ResetAssertManagerMap();
        SendDBUserTingTimeCheckStatistic(handler);
        ResetUserTIngTimeCheckMap();
        SendDBLagStatistics(handler, ts);
        statistc_proxy::sendDBStatisticProxy();
        statistc_proxy::resetStatisticProxy();
    }
    if (hour % 3 == 0 && min == 0)
    {
        SendDBLoadingTimeReport(handler);
    }
    if (hour == 5)
    {
        if (min == 10)
        {
            SendDBPartyStatistic(handler);
            ResetPartyMap();
        }
        if (min == 0xf)
        {
            SendDBPartyJobStatistic(handler);
            ResetPartyJobMap();
        }
        if (min == 0x14)
        {
            SendDBPartyCharacStatistic(handler);
            ResetPartyCharacMap();
        }
        if (min == 0x19)
        {
            SendDBDeathTowerValueStatistic(handler);
            ResetDeathTowerValueMap();
        }
        if (min == 0x1e)
        {
            SendDBDeathTowerPlayDataJobStatistic(handler);
            ResetDeathTowerPlayDataJobMap();
        }
        if (min == 0x23)
        {
            SendDBDeathTowerPlayDataPartyStatistic(handler);
            ResetDeathTowerPlayDataPartyMap();
        }
        if (min == 0x28)
        {
            SendDBBloodDungeonStatistic(handler);
            ResetBloodDungeon();
        }
        if (min == 0x2d)
        {
            SendDBValueStatistic(handler);
            ResetValueStatistic();
        }
        if (min == 0x32)
        {
            SendDBCirculationStatistic(handler);
            ResetCirculationStatistic();
        }
    }
    if (hour == 6 && min == 0)
    {
        SendDBSecretShopStatistic(handler);
        ResetSecretShopStatistic();
    }
    if (hour == 6 && min == 0)
    {
        SendDBTowerOfDespairStatistic(handler);
        ResetTowerOfDespair();
    }
    if (hour == 5 && min == 0)
    {
        SendDBGoldcardEventStatistic(handler);
        ResetGoldcardEventStatistic();
    }
    if (hour == 6)
    {
        CCubeStatistic* cube = (CCubeStatistic*)getCubeStatisticObject();
        cube->sendStatisticData(handler);
        cube = (CCubeStatistic*)getCubeStatisticObject();
        cube->resetStatisticData();
    }
}
```
