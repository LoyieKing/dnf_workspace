# _ZN16StatisticManagerC1Ev

`StatisticManager::StatisticManager()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806d55c` | `0x558` | `0x806d75e` | `0x53a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,438 +1,432 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x3c,%esp
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3setIjSt4lessIjESaIjEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CCubeStatisticC1Ev>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x30(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x34(%eax)
 mov    0x8(%ebp),%eax
 add    $0x38,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPartyStatisticKey14PartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x50,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STPartyJobStatisticKey17PartyJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x68,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI16STPartyCharacKey20PartyCharacStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 sub    $0xffffff80,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI29STDeathTowerValueStatisticKey14ValueStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x98,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xb0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xc8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPacketOverflowKeyiSt4lessIS0_ESaISt4pairIKS0_iEEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xe0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STAssertManagerKeyiSt4lessIS0_ESaISt4pairIKS0_iEEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xf8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STUserTingTimeCheckKeyiSt4lessIS0_ESaISt4pairIKS0_iEEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x110,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x128,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI27STHellPartyStatisticItemKey18HellPartyItenmDataSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x140,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17LoadingTimeReportC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x188,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x1a0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x1b8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIh16STFatigueBatterySt4lessIhESaISt4pairIKhS0_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x1d0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj23STBloodDungeonStatisticSt4lessIjESaISt4pairIKjS0_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x1e8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25stDisjointAvatarInfoTotalC1Ev>
 mov    0x8(%ebp),%eax
-add    $0x370,%eax
-mov    %eax,%ebx
-mov    $0x7,%esi
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x15a>
-mov    %ebx,(%esp)
+lea    0x370(%eax),%esi
+mov    %esi,%edi
+mov    $0x7,%ebx
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x15b>
+mov    %edi,(%esp)
 call   <T> <_ZN21STModuleLagStatisticsC1Ev>
-add    $0x10,%ebx
-sub    $0x1,%esi
-cmp    $0xffffffff,%esi
+add    $0x10,%edi
+sub    $0x1,%ebx
+cmp    $0xffffffff,%ebx
 setne  %al
 test   %al,%al
-jne    <T> <_ZN16StatisticManagerC1Ev+0x14c>
+jne    <T> <_ZN16StatisticManagerC1Ev+0x14d>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x198>
+mov    %edx,%edi
+mov    %eax,-0x20(%ebp)
+test   %esi,%esi
+je     <T> <_ZN16StatisticManagerC1Ev+0x18e>
+mov    $0x7,%eax
+sub    %ebx,%eax
+shl    $0x4,%eax
+lea    (%esi,%eax,1),%ebx
+cmp    %esi,%ebx
+je     <T> <_ZN16StatisticManagerC1Ev+0x18e>
+sub    $0x10,%ebx
+mov    %ebx,(%esp)
+call   <T> <_ZN21STModuleLagStatisticsD1Ev>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x17d>
+mov    -0x20(%ebp),%eax
+mov    %edi,%edx
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x367>
 mov    0x8(%ebp),%eax
 add    $0x3f0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x408,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi18ValueStatisticDataSt4lessIiESaISt4pairIKiS0_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x420,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi24CirculationStatisticDataSt4lessIiESaISt4pairIKiS0_EEEC1Ev>
 mov    0x8(%ebp),%eax
 lea    0x444(%eax),%esi
 mov    %esi,%edi
 mov    $0x2,%ebx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x1b4>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x1e8>
 mov    %edi,(%esp)
 call   <T> <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEEC1Ev>
 add    $0x18,%edi
 sub    $0x1,%ebx
 cmp    $0xffffffff,%ebx
 setne  %al
 test   %al,%al
-jne    <T> <_ZN16StatisticManagerC1Ev+0x1a6>
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x1f9>
+jne    <T> <_ZN16StatisticManagerC1Ev+0x1da>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x22d>
 mov    %edx,%edi
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x1c(%ebp)
 test   %esi,%esi
-je     <T> <_ZN16StatisticManagerC1Ev+0x1ef>
+je     <T> <_ZN16StatisticManagerC1Ev+0x223>
 mov    $0x2,%eax
 sub    %ebx,%eax
 mov    %eax,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 lea    (%esi,%eax,1),%ebx
 cmp    %esi,%ebx
-je     <T> <_ZN16StatisticManagerC1Ev+0x1ef>
+je     <T> <_ZN16StatisticManagerC1Ev+0x223>
 sub    $0x18,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEED1Ev>
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x1de>
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x212>
+mov    -0x1c(%ebp),%eax
 mov    %edi,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x2fe>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x2dc>
 mov    0x8(%ebp),%eax
 add    $0x48c,%eax
 mov    %eax,%ebx
 mov    $0x62,%esi
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x218>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x24c>
 mov    %ebx,(%esp)
 call   <T> <_ZN22GoldCardEventStatisticC1Ev>
 add    $0x9,%ebx
 sub    $0x1,%esi
 cmp    $0xffffffff,%esi
 setne  %al
 test   %al,%al
-jne    <T> <_ZN16StatisticManagerC1Ev+0x20a>
+jne    <T> <_ZN16StatisticManagerC1Ev+0x23e>
 mov    0x8(%ebp),%eax
 add    $0x807,%eax
 mov    %eax,%ebx
 mov    $0x64,%esi
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x241>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x275>
 mov    %ebx,(%esp)
 call   <T> <_ZN29TowerOfDespairStatistic_ValueC1Ev>
 add    $0x8,%ebx
 sub    $0x1,%esi
 cmp    $0xffffffff,%esi
 setne  %al
 test   %al,%al
-jne    <T> <_ZN16StatisticManagerC1Ev+0x233>
+jne    <T> <_ZN16StatisticManagerC1Ev+0x267>
 mov    0x8(%ebp),%eax
 add    $0xb30,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15stP2PStatisticsC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xb78,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI20STReasonCrashDownKeyjSt4lessIS0_ESaISt4pairIKS0_jEEEC1Ev>
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x28c>
-mov    -0x1c(%ebp),%eax
-add    $0x37,%eax
-shl    $0x4,%eax
-add    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN21STModuleLagStatistics5ResetEv>
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x7,-0x1c(%ebp)
-setle  %al
-test   %al,%al
-jne    <T> <_ZN16StatisticManagerC1Ev+0x274>
-mov    0x8(%ebp),%eax
-add    $0x3f0,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEE5clearEv>
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x550>
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0xb78,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapI20STReasonCrashDownKeyjSt4lessIS0_ESaISt4pairIKS0_jEEED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x2c6>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x532>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    0x8(%ebp),%eax
 add    $0x444,%eax
 test   %eax,%eax
-je     <T> <_ZN16StatisticManagerC1Ev+0x2fa>
+je     <T> <_ZN16StatisticManagerC1Ev+0x2d8>
 mov    0x8(%ebp),%eax
 add    $0x444,%eax
 lea    0x48(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x444,%eax
 cmp    %eax,%ebx
-je     <T> <_ZN16StatisticManagerC1Ev+0x2fa>
+je     <T> <_ZN16StatisticManagerC1Ev+0x2d8>
 sub    $0x18,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEED1Ev>
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x2e1>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x2bf>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x420,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi24CirculationStatisticDataSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x318>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x2f6>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x408,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi18ValueStatisticDataSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x332>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x310>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x3f0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x34c>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x32a>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 test   %eax,%eax
-je     <T> <_ZN16StatisticManagerC1Ev+0x383>
+je     <T> <_ZN16StatisticManagerC1Ev+0x361>
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 lea    0x80(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 cmp    %eax,%ebx
-je     <T> <_ZN16StatisticManagerC1Ev+0x383>
+je     <T> <_ZN16StatisticManagerC1Ev+0x361>
 sub    $0x10,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZN21STModuleLagStatisticsD1Ev>
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x36a>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x348>
 mov    %edi,%eax
 mov    %esi,%edx
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x367>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x1d0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj23STBloodDungeonStatisticSt4lessIjESaISt4pairIKjS0_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x3a1>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x381>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x1b8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIh16STFatigueBatterySt4lessIhESaISt4pairIKhS0_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x3bb>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x39b>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x1a0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x3d5>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x3b5>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x188,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x3ef>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x3cf>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x140,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17LoadingTimeReportD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x3e9>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x128,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI27STHellPartyStatisticItemKey18HellPartyItenmDataSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x421>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x403>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x110,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x43b>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x41d>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xf8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STUserTingTimeCheckKeyiSt4lessIS0_ESaISt4pairIKS0_iEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x455>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x437>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xe0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STAssertManagerKeyiSt4lessIS0_ESaISt4pairIKS0_iEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x46f>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x451>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xc8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPacketOverflowKeyiSt4lessIS0_ESaISt4pairIKS0_iEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x489>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x46b>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xb0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x4a3>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x485>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x98,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x4bd>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x49f>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 sub    $0xffffff80,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI29STDeathTowerValueStatisticKey14ValueStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x4d5>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x4b7>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x68,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI16STPartyCharacKey20PartyCharacStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x4ed>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x4cf>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x50,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STPartyJobStatisticKey17PartyJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x505>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x4e7>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x38,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPartyStatisticKey14PartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x51d>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x4ff>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CCubeStatisticD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerC1Ev+0x535>
+jmp    <T> <_ZN16StatisticManagerC1Ev+0x517>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3setIjSt4lessIjESaIjEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-add    $0x3c,%esp
+add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::StatisticManager() */

void __thiscall StatisticManager::_ZN16StatisticManagerC1Ev(StatisticManager *this)

{
  STModuleLagStatistics *this_00;
  GoldCardEventStatistic *this_01;
  TowerOfDespairStatistic_Value *this_02;
  int iVar1;
  map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
  *this_03;
  int local_20;
  
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::set
            ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)this);
                    /* try { // try from 0806d579 to 0806d57d has its CatchHandler @ 0806da91 */
  CCubeStatistic::CCubeStatistic((CCubeStatistic *)(this + 0x18));
  this[0x30] = (StatisticManager)0x0;
  *(undefined4 *)(this + 0x34) = 0;
                    /* try { // try from 0806d598 to 0806d59c has its CatchHandler @ 0806da79 */
  std::
  map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
  ::map((map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
         *)(this + 0x38));
                    /* try { // try from 0806d5a6 to 0806d5aa has its CatchHandler @ 0806da61 */
  std::
  map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
  ::map((map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
         *)(this + 0x50));
                    /* try { // try from 0806d5b4 to 0806d5b8 has its CatchHandler @ 0806da49 */
  std::
  map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
  ::map((map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
         *)(this + 0x68));
                    /* try { // try from 0806d5c2 to 0806d5c6 has its CatchHandler @ 0806da31 */
  std::
  map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
  ::map((map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
         *)(this + 0x80));
                    /* try { // try from 0806d5d2 to 0806d5d6 has its CatchHandler @ 0806da19 */
  std::
  map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
  ::map((map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
         *)(this + 0x98));
                    /* try { // try from 0806d5e2 to 0806d5e6 has its CatchHandler @ 0806d9ff */
  std::
  map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
  ::map((map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
         *)(this + 0xb0));
                    /* try { // try from 0806d5f2 to 0806d5f6 has its CatchHandler @ 0806d9e5 */
  std::
  map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
  ::map((map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
         *)(this + 200));
                    /* try { // try from 0806d602 to 0806d606 has its CatchHandler @ 0806d9cb */
  std::
  map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
  ::map((map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
         *)(this + 0xe0));
                    /* try { // try from 0806d612 to 0806d616 has its CatchHandler @ 0806d9b1 */
  std::
  map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
  ::map((map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
         *)(this + 0xf8));
                    /* try { // try from 0806d622 to 0806d626 has its CatchHandler @ 0806d997 */
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  map((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
       *)(this + 0x110));
                    /* try { // try from 0806d632 to 0806d636 has its CatchHandler @ 0806d97d */
  std::
  map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
  ::map((map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
         *)(this + 0x128));
  LoadingTimeReport::LoadingTimeReport((LoadingTimeReport *)(this + 0x140));
                    /* try { // try from 0806d652 to 0806d656 has its CatchHandler @ 0806d94b */
  std::
  map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
  ::map((map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
         *)(this + 0x188));
                    /* try { // try from 0806d662 to 0806d666 has its CatchHandler @ 0806d931 */
  std::
  map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
  ::map((map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
         *)(this + 0x1a0));
                    /* try { // try from 0806d672 to 0806d676 has its CatchHandler @ 0806d917 */
  std::
  map<unsigned_char,STFatigueBattery,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,STFatigueBattery>>>
  ::map((map<unsigned_char,STFatigueBattery,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,STFatigueBattery>>>
         *)(this + 0x1b8));
                    /* try { // try from 0806d682 to 0806d686 has its CatchHandler @ 0806d8fd */
  std::
  map<unsigned_int,STBloodDungeonStatistic,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>>
  ::map((map<unsigned_int,STBloodDungeonStatistic,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>>
         *)(this + 0x1d0));
  stDisjointAvatarInfoTotal::stDisjointAvatarInfoTotal((stDisjointAvatarInfoTotal *)(this + 0x1e8));
  this_00 = (STModuleLagStatistics *)(this + 0x370);
  for (iVar1 = 7; iVar1 != -1; iVar1 = iVar1 + -1) {
    STModuleLagStatistics::STModuleLagStatistics(this_00);
    this_00 = this_00 + 0x10;
  }
                    /* try { // try from 0806d6cb to 0806d6cf has its CatchHandler @ 0806d8a8 */
  std::
  map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
  ::map((map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
         *)(this + 0x3f0));
                    /* try { // try from 0806d6db to 0806d6df has its CatchHandler @ 0806d88e */
  std::
  map<int,ValueStatisticData,std::less<int>,std::allocator<std::pair<int_const,ValueStatisticData>>>
  ::map((map<int,ValueStatisticData,std::less<int>,std::allocator<std::pair<int_const,ValueStatisticData>>>
         *)(this + 0x408));
                    /* try { // try from 0806d6eb to 0806d6ef has its CatchHandler @ 0806d874 */
  std::
  map<int,CirculationStatisticData,std::less<int>,std::allocator<std::pair<int_const,CirculationStatisticData>>>
  ::map((map<int,CirculationStatisticData,std::less<int>,std::allocator<std::pair<int_const,CirculationStatisticData>>>
         *)(this + 0x420));
  this_03 = (map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
             *)(this + 0x444);
  for (iVar1 = 2; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0806d705 to 0806d709 has its CatchHandler @ 0806d71c */
    std::
    map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
    ::map(this_03);
    this_03 = this_03 + 0x18;
  }
  this_01 = (GoldCardEventStatistic *)(this + 0x48c);
  for (iVar1 = 0x62; iVar1 != -1; iVar1 = iVar1 + -1) {
    GoldCardEventStatistic::GoldCardEventStatistic(this_01);
    this_01 = this_01 + 9;
  }
  this_02 = (TowerOfDespairStatistic_Value *)(this + 0x807);
  for (iVar1 = 100; iVar1 != -1; iVar1 = iVar1 + -1) {
    TowerOfDespairStatistic_Value::TowerOfDespairStatistic_Value(this_02);
    this_02 = this_02 + 8;
  }
  stP2PStatistics::stP2PStatistics((stP2PStatistics *)(this + 0xb30));
                    /* try { // try from 0806d7c2 to 0806d7c6 has its CatchHandler @ 0806d822 */
  std::
  map<STReasonCrashDownKey,unsigned_int,std::less<STReasonCrashDownKey>,std::allocator<std::pair<STReasonCrashDownKey_const,unsigned_int>>>
  ::map((map<STReasonCrashDownKey,unsigned_int,std::less<STReasonCrashDownKey>,std::allocator<std::pair<STReasonCrashDownKey_const,unsigned_int>>>
         *)(this + 0xb78));
  for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
    STModuleLagStatistics::Reset((STModuleLagStatistics *)(this + (local_20 + 0x37) * 0x10));
  }
                    /* try { // try from 0806d7fe to 0806d802 has its CatchHandler @ 0806d808 */
  std::
  map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
  ::clear((map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
           *)(this + 0x3f0));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 42 行）：

```cpp
StatisticManager::StatisticManager()
    : m_flag(0), m_field34(0)
{
}
```
