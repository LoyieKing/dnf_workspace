# _ZN16StatisticManagerD2Ev

`StatisticManager::~StatisticManager()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806dab4` | `0x534` | `0x806dc98` | `0x53a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,430 +1,433 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager13ResetPartyMapEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager16ResetPartyJobMapEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager19ResetPartyCharacMapEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager23ResetDeathTowerValueMapEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager29ResetDeathTowerPlayDataJobMapEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager31ResetDeathTowerPlayDataPartyMapEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager22ResetPacketOverflowMapEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager30ResetHellPartyStatisticItemMapEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager27ResetReasonCrashDownInfoMapEv>
 movl   $0x0,-0x1c(%ebp)
 jmp    <T> <_ZN16StatisticManagerD1Ev+0x8d>
 mov    -0x1c(%ebp),%eax
 add    $0x37,%eax
 shl    $0x4,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21STModuleLagStatistics5ResetEv>
 addl   $0x1,-0x1c(%ebp)
 cmpl   $0x7,-0x1c(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN16StatisticManagerD1Ev+0x75>
 mov    0x8(%ebp),%eax
 add    $0x3f0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEE5clearEv>
 jmp    <T> <_ZN16StatisticManagerD1Ev+0xc4>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xb78,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI20STReasonCrashDownKeyjSt4lessIS0_ESaISt4pairIKS0_jEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN16StatisticManagerD1Ev+0xd6>
 mov    0x8(%ebp),%eax
 add    $0xb78,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI20STReasonCrashDownKeyjSt4lessIS0_ESaISt4pairIKS0_jEEED1Ev>
 jmp    <T> <_ZN16StatisticManagerD1Ev+0x110>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    0x8(%ebp),%eax
 add    $0x444,%eax
 test   %eax,%eax
 je     <T> <_ZN16StatisticManagerD1Ev+0x10a>
 mov    0x8(%ebp),%eax
 add    $0x444,%eax
 lea    0x48(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x444,%eax
 cmp    %eax,%ebx
 je     <T> <_ZN16StatisticManagerD1Ev+0x10a>
 sub    $0x18,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEED1Ev>
 jmp    <T> <_ZN16StatisticManagerD1Ev+0xf1>
 mov    %edi,%eax
 mov    %esi,%edx
 jmp    <T> <_ZN16StatisticManagerD1Ev+0x140>
 mov    0x8(%ebp),%eax
 add    $0x444,%eax
 test   %eax,%eax
 je     <T> <_ZN16StatisticManagerD1Ev+0x15a>
 mov    0x8(%ebp),%eax
 add    $0x444,%eax
 lea    0x48(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x444,%eax
 cmp    %eax,%ebx
 je     <T> <_ZN16StatisticManagerD1Ev+0x15a>
 sub    $0x18,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEED1Ev>
 jmp    <T> <_ZN16StatisticManagerD1Ev+0x127>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x420,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi24CirculationStatisticDataSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN16StatisticManagerD1Ev+0x16c>
 mov    0x8(%ebp),%eax
 add    $0x420,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi24CirculationStatisticDataSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 jmp    <T> <_ZN16StatisticManagerD1Ev+0x186>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x408,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi18ValueStatisticDataSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN16StatisticManagerD1Ev+0x198>
 mov    0x8(%ebp),%eax
 add    $0x408,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi18ValueStatisticDataSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 jmp    <T> <_ZN16StatisticManagerD1Ev+0x1b2>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x3f0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN16StatisticManagerD1Ev+0x1c4>
 mov    0x8(%ebp),%eax
 add    $0x3f0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIt22STDungeonLagStatisticsSt4lessItESaISt4pairIKtS0_EEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x219>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x201>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 test   %eax,%eax
 je     <T> <_ZN16StatisticManagerD1Ev+0x1fb>
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 lea    0x80(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 cmp    %eax,%ebx
 je     <T> <_ZN16StatisticManagerD1Ev+0x1fb>
 sub    $0x10,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZN21STModuleLagStatisticsD1Ev>
 jmp    <T> <_ZN16StatisticManagerD1Ev+0x1e2>
 mov    %edi,%eax
 mov    %esi,%edx
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x1d0,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIj23STBloodDungeonStatisticSt4lessIjESaISt4pairIKjS0_EEED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x25e>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x234>
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 test   %eax,%eax
-je     <T> <_ZN16StatisticManagerD1Ev+0x24c>
+je     <T> <_ZN16StatisticManagerD1Ev+0x24e>
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 lea    0x80(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 cmp    %eax,%ebx
-je     <T> <_ZN16StatisticManagerD1Ev+0x24c>
+je     <T> <_ZN16StatisticManagerD1Ev+0x24e>
 sub    $0x10,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZN21STModuleLagStatisticsD1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x233>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x21b>
+mov    %edx,%ebx
+mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x1d0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj23STBloodDungeonStatisticSt4lessIjESaISt4pairIKjS0_EEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x278>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x260>
+mov    0x8(%ebp),%eax
+add    $0x1d0,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIj23STBloodDungeonStatisticSt4lessIjESaISt4pairIKjS0_EEED1Ev>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x27a>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x1b8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIh16STFatigueBatterySt4lessIhESaISt4pairIKhS0_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x28a>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x28c>
 mov    0x8(%ebp),%eax
 add    $0x1b8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIh16STFatigueBatterySt4lessIhESaISt4pairIKhS0_EEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x2a4>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x2a6>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x1a0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x2b6>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x2b8>
 mov    0x8(%ebp),%eax
 add    $0x1a0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x2d0>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x2d2>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x188,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x2e2>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x2e4>
 mov    0x8(%ebp),%eax
 add    $0x188,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x314>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x2fe>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x140,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17LoadingTimeReportD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x310>
+mov    0x8(%ebp),%eax
+add    $0x140,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17LoadingTimeReportD1Ev>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x32a>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x128,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI27STHellPartyStatisticItemKey18HellPartyItenmDataSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x336>
-mov    0x8(%ebp),%eax
-add    $0x140,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17LoadingTimeReportD1Ev>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x33c>
 mov    0x8(%ebp),%eax
 add    $0x128,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI27STHellPartyStatisticItemKey18HellPartyItenmDataSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x350>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x356>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x110,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x362>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x368>
 mov    0x8(%ebp),%eax
 add    $0x110,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x37c>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x382>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xf8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STUserTingTimeCheckKeyiSt4lessIS0_ESaISt4pairIKS0_iEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x38e>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x394>
 mov    0x8(%ebp),%eax
 add    $0xf8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STUserTingTimeCheckKeyiSt4lessIS0_ESaISt4pairIKS0_iEEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x3a8>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x3ae>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xe0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STAssertManagerKeyiSt4lessIS0_ESaISt4pairIKS0_iEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x3ba>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x3c0>
 mov    0x8(%ebp),%eax
 add    $0xe0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STAssertManagerKeyiSt4lessIS0_ESaISt4pairIKS0_iEEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x3d4>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x3da>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xc8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPacketOverflowKeyiSt4lessIS0_ESaISt4pairIKS0_iEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x3e6>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x3ec>
 mov    0x8(%ebp),%eax
 add    $0xc8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPacketOverflowKeyiSt4lessIS0_ESaISt4pairIKS0_iEEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x400>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x406>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xb0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x412>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x418>
 mov    0x8(%ebp),%eax
 add    $0xb0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x42c>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x432>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x98,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x43e>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x444>
 mov    0x8(%ebp),%eax
 add    $0x98,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x456>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x45c>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 sub    $0xffffff80,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI29STDeathTowerValueStatisticKey14ValueStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x466>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x46c>
 mov    0x8(%ebp),%eax
 sub    $0xffffff80,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI29STDeathTowerValueStatisticKey14ValueStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x47e>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x484>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x68,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI16STPartyCharacKey20PartyCharacStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x48e>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x494>
 mov    0x8(%ebp),%eax
 add    $0x68,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI16STPartyCharacKey20PartyCharacStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x4a6>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x4ac>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x50,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STPartyJobStatisticKey17PartyJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x4b6>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x4bc>
 mov    0x8(%ebp),%eax
 add    $0x50,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STPartyJobStatisticKey17PartyJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x4ce>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x4d4>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x38,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPartyStatisticKey14PartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x4de>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x4e4>
 mov    0x8(%ebp),%eax
 add    $0x38,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPartyStatisticKey14PartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x4f6>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x4fc>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CCubeStatisticD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x506>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x50c>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CCubeStatisticD1Ev>
-jmp    <T> <_ZN16StatisticManagerD1Ev+0x521>
+jmp    <T> <_ZN16StatisticManagerD1Ev+0x527>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3setIjSt4lessIjESaIjEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3setIjSt4lessIjESaIjEED1Ev>
 add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::~StatisticManager() */

void __thiscall StatisticManager::_ZN16StatisticManagerD2Ev(StatisticManager *this)

{
  map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
  *this_00;
  STModuleLagStatistics *this_01;
  int local_20;
  
                    /* try { // try from 0806dac3 to 0806db5b has its CatchHandler @ 0806db5e */
  ResetPartyMap(this);
  ResetPartyJobMap(this);
  ResetPartyCharacMap(this);
  ResetDeathTowerValueMap(this);
  ResetDeathTowerPlayDataJobMap(this);
  ResetDeathTowerPlayDataPartyMap(this);
  ResetPacketOverflowMap(this);
  ResetHellPartyStatisticItemMap(this);
  ResetReasonCrashDownInfoMap(this);
  for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
    STModuleLagStatistics::Reset((STModuleLagStatistics *)(this + (local_20 + 0x37) * 0x10));
  }
  std::
  map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
  ::clear((map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
           *)(this + 0x3f0));
                    /* try { // try from 0806db83 to 0806db87 has its CatchHandler @ 0806db8a */
  std::
  map<STReasonCrashDownKey,unsigned_int,std::less<STReasonCrashDownKey>,std::allocator<std::pair<STReasonCrashDownKey_const,unsigned_int>>>
  ::~map((map<STReasonCrashDownKey,unsigned_int,std::less<STReasonCrashDownKey>,std::allocator<std::pair<STReasonCrashDownKey_const,unsigned_int>>>
          *)(this + 0xb78));
  if (this != (StatisticManager *)0xfffffbbc) {
    this_00 = (map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
               *)(this + 0x48c);
    while (this_00 !=
           (map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
            *)(this + 0x444)) {
      this_00 = this_00 + -0x18;
                    /* try { // try from 0806dbed to 0806dbf1 has its CatchHandler @ 0806dbf4 */
      std::
      map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
      ::~map(this_00);
    }
  }
                    /* try { // try from 0806dc19 to 0806dc1d has its CatchHandler @ 0806dc20 */
  std::
  map<int,CirculationStatisticData,std::less<int>,std::allocator<std::pair<int_const,CirculationStatisticData>>>
  ::~map((map<int,CirculationStatisticData,std::less<int>,std::allocator<std::pair<int_const,CirculationStatisticData>>>
          *)(this + 0x420));
                    /* try { // try from 0806dc45 to 0806dc49 has its CatchHandler @ 0806dc4c */
  std::
  map<int,ValueStatisticData,std::less<int>,std::allocator<std::pair<int_const,ValueStatisticData>>>
  ::~map((map<int,ValueStatisticData,std::less<int>,std::allocator<std::pair<int_const,ValueStatisticData>>>
          *)(this + 0x408));
                    /* try { // try from 0806dc71 to 0806dc75 has its CatchHandler @ 0806dc78 */
  std::
  map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
  ::~map((map<unsigned_short,STDungeonLagStatistics,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STDungeonLagStatistics>>>
          *)(this + 0x3f0));
  if (this != (StatisticManager *)0xfffffc90) {
    this_01 = (STModuleLagStatistics *)(this + 0x3f0);
    while (this_01 != (STModuleLagStatistics *)(this + 0x370)) {
      this_01 = this_01 + -0x10;
      STModuleLagStatistics::~STModuleLagStatistics(this_01);
    }
  }
                    /* try { // try from 0806dd0b to 0806dd0f has its CatchHandler @ 0806dd12 */
  std::
  map<unsigned_int,STBloodDungeonStatistic,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>>
  ::~map((map<unsigned_int,STBloodDungeonStatistic,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>>
          *)(this + 0x1d0));
                    /* try { // try from 0806dd37 to 0806dd3b has its CatchHandler @ 0806dd3e */
  std::
  map<unsigned_char,STFatigueBattery,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,STFatigueBattery>>>
  ::~map((map<unsigned_char,STFatigueBattery,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,STFatigueBattery>>>
          *)(this + 0x1b8));
                    /* try { // try from 0806dd63 to 0806dd67 has its CatchHandler @ 0806dd6a */
  std::
  map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
  ::~map((map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
          *)(this + 0x1a0));
                    /* try { // try from 0806dd8f to 0806dd93 has its CatchHandler @ 0806dd96 */
  std::
  map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
  ::~map((map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
          *)(this + 0x188));
  LoadingTimeReport::~LoadingTimeReport((LoadingTimeReport *)(this + 0x140));
                    /* try { // try from 0806dde3 to 0806dde7 has its CatchHandler @ 0806ddea */
  std::
  map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
  ::~map((map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
          *)(this + 0x128));
                    /* try { // try from 0806de0f to 0806de13 has its CatchHandler @ 0806de16 */
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  ~map((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
        *)(this + 0x110));
                    /* try { // try from 0806de3b to 0806de3f has its CatchHandler @ 0806de42 */
  std::
  map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
  ::~map((map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
          *)(this + 0xf8));
                    /* try { // try from 0806de67 to 0806de6b has its CatchHandler @ 0806de6e */
  std::
  map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
  ::~map((map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
          *)(this + 0xe0));
                    /* try { // try from 0806de93 to 0806de97 has its CatchHandler @ 0806de9a */
  std::
  map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
  ::~map((map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
          *)(this + 200));
                    /* try { // try from 0806debf to 0806dec3 has its CatchHandler @ 0806dec6 */
  std::
  map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
  ::~map((map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
          *)(this + 0xb0));
                    /* try { // try from 0806deeb to 0806deef has its CatchHandler @ 0806def2 */
  std::
  map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
  ::~map((map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
          *)(this + 0x98));
                    /* try { // try from 0806df13 to 0806df17 has its CatchHandler @ 0806df1a */
  std::
  map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
  ::~map((map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
          *)(this + 0x80));
                    /* try { // try from 0806df3b to 0806df3f has its CatchHandler @ 0806df42 */
  std::
  map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
  ::~map((map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
          *)(this + 0x68));
                    /* try { // try from 0806df63 to 0806df67 has its CatchHandler @ 0806df6a */
  std::
  map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
  ::~map((map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
          *)(this + 0x50));
                    /* try { // try from 0806df8b to 0806df8f has its CatchHandler @ 0806df92 */
  std::
  map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
  ::~map((map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
          *)(this + 0x38));
                    /* try { // try from 0806dfb3 to 0806dfb7 has its CatchHandler @ 0806dfba */
  CCubeStatistic::~CCubeStatistic((CCubeStatistic *)(this + 0x18));
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::~set
            ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 43 行）：

```cpp
StatisticManager::~StatisticManager()
{
    ResetPartyMap();
    ResetPartyJobMap();
    ResetPartyCharacMap();
    ResetDeathTowerValueMap();
    ResetDeathTowerPlayDataJobMap();
    ResetDeathTowerPlayDataPartyMap();
    ResetPacketOverflowMap();
    ResetHellPartyStatisticItemMap();
    ResetReasonCrashDownInfoMap();
    for (int i = 0; i < 8; i++)
    {
        m_modules[i].Reset();
    }
    m_dungeonLag.clear();
}
```
