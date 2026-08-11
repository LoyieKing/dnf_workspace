# _ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job

`StatisticManager::WriteDeathTowerPlayDataJobStatistic(Packet_DeathTower_Statistic_Playdata_Job*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806e264` | `0x1cf` | `0x806e4fe` | `0x1de` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,144 +1,151 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35STDeathTowerPlayDataJobStatisticKeyC1Ev>
 mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 mov    %al,-0x4c(%ebp)
 mov    0xc(%ebp),%eax
-movzwl 0xb(%eax),%eax
+add    $0xb,%eax
+movzwl (%eax),%eax
 mov    %ax,-0x4a(%ebp)
 mov    0xc(%ebp),%eax
-movzbl 0x11(%eax),%eax
+add    $0xd,%eax
+mov    (%eax),%eax
+mov    %eax,-0x48(%ebp)
+mov    0xc(%ebp),%eax
+add    $0x11,%eax
+movzbl (%eax),%eax
 mov    %al,-0x44(%ebp)
-mov    0xc(%ebp),%eax
-mov    0xd(%eax),%eax
-mov    %eax,-0x48(%ebp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN20PlayDataJobStatisticC1Ev>
 mov    0xc(%ebp),%eax
-mov    0x12(%eax),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
 mov    %eax,-0x54(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x98(%eax),%ecx
 lea    -0x58(%ebp),%eax
 lea    -0x4c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 add    $0x98,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0xb6>
+jne    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0xc0>
 mov    0x8(%ebp),%eax
 lea    0x98(%eax),%edx
 lea    -0x40(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x40(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEEeqERKS5_>
 test   %al,%al
-je     <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0xbd>
+je     <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0xc7>
 mov    $0x1,%eax
-jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0xc2>
+jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0xcc>
 mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x15c>
+mov    %al,-0x9(%ebp)
+cmpb   $0x0,-0x9(%ebp)
+je     <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x16d>
 lea    -0x20(%ebp),%eax
 lea    -0x54(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x4c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIR35STDeathTowerPlayDataJobStatisticKeyR20PlayDataJobStatisticESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEC1IS0_S2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x98(%eax),%ecx
 lea    -0x3c(%ebp),%eax
 lea    -0x34(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 sub    $0x4,%esp
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticED1Ev>
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticED1Ev>
-jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x1af>
+jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x160>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x147>
+jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x14b>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x181>
+jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x18c>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticED1Ev>
+jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x1a1>
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEEptEv>
-add    $0xc,%eax
-mov    %eax,-0xc(%ebp)
+lea    0xc(%eax),%edx
 lea    -0x54(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN20PlayDataJobStatisticpLERKS_>
-jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x1af>
+jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x1a1>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN20PlayDataJobStatisticD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x1ae>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN20PlayDataJobStatisticD1Ev>
+jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x1c9>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35STDeathTowerPlayDataJobStatisticKeyD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN20PlayDataJobStatisticD1Ev>
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35STDeathTowerPlayDataJobStatisticKeyD1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::WriteDeathTowerPlayDataJobStatistic(Packet_DeathTower_Statistic_Playdata_Job*)
    */

void __thiscall
StatisticManager::
_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job
          (StatisticManager *this,Packet_DeathTower_Statistic_Playdata_Job *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  STDeathTowerPlayDataJobStatisticKey local_5c [4];
  undefined4 local_58 [2];
  Packet_DeathTower_Statistic_Playdata_Job local_50 [2];
  undefined2 local_4e;
  undefined4 local_4c;
  Packet_DeathTower_Statistic_Playdata_Job local_48;
  map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
  local_44 [4];
  pair local_40 [8];
  pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic> local_38 [20];
  STDeathTowerPlayDataJobStatisticKey local_24 [20];
  PlayDataJobStatistic *local_10;
  
  STDeathTowerPlayDataJobStatisticKey::STDeathTowerPlayDataJobStatisticKey
            ((STDeathTowerPlayDataJobStatisticKey *)local_50);
  local_50[0] = param_1[10];
  local_4e = *(undefined2 *)(param_1 + 0xb);
  local_48 = param_1[0x11];
  local_4c = *(undefined4 *)(param_1 + 0xd);
  PlayDataJobStatistic::PlayDataJobStatistic((PlayDataJobStatistic *)local_58);
  local_58[0] = *(undefined4 *)(param_1 + 0x12);
                    /* try { // try from 0806e2cd to 0806e346 has its CatchHandler @ 0806e3e5 */
  std::
  map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
  ::find(local_5c);
  cVar2 = std::
          map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
          ::empty((map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
                   *)(this + 0x98));
  if (cVar2 == '\0') {
    std::
    map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
    ::end(local_44);
    cVar2 = std::
            _Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
            ::operator==((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                          *)local_5c,(_Rb_tree_iterator *)local_44);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0806e326;
    }
  }
  bVar1 = true;
LAB_0806e326:
  if (bVar1) {
    std::make_pair<STDeathTowerPlayDataJobStatisticKey&,PlayDataJobStatistic&>
              (local_24,(PlayDataJobStatistic *)local_50);
                    /* try { // try from 0806e357 to 0806e35b has its CatchHandler @ 0806e3ab */
    std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>::
    pair<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic>(local_38,local_24);
                    /* try { // try from 0806e376 to 0806e37a has its CatchHandler @ 0806e396 */
    std::
    map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
    ::insert(local_40);
    std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>::~pair(local_38);
    std::pair<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic>::~pair
              ((pair<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic> *)local_24);
  }
  else {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
            ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                          *)local_5c);
    local_10 = (PlayDataJobStatistic *)(iVar3 + 0xc);
    PlayDataJobStatistic::operator+=(local_10,(PlayDataJobStatistic *)local_58);
  }
  PlayDataJobStatistic::~PlayDataJobStatistic((PlayDataJobStatistic *)local_58);
  STDeathTowerPlayDataJobStatisticKey::~STDeathTowerPlayDataJobStatisticKey
            ((STDeathTowerPlayDataJobStatisticKey *)local_50);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Statics/Statistics.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 619 个文件*
