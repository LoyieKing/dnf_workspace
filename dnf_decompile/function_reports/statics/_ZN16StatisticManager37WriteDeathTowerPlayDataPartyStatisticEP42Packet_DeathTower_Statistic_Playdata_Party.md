# _ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party

`StatisticManager::WriteDeathTowerPlayDataPartyStatistic(Packet_DeathTower_Statistic_Playdata_Party*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806e434` | `0x1bb` | `0x806e474` | `0x1bb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,138 +1,139 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x50,%esp
-lea    -0x32(%ebp),%eax
+lea    -0x2e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37STDeathTowerPlayDataPartyStatisticKeyC1Ev>
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
-mov    %al,-0x32(%ebp)
+mov    %al,-0x2e(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0xb(%eax),%eax
-mov    %al,-0x31(%ebp)
-lea    -0x3c(%ebp),%eax
+mov    %al,-0x2d(%ebp)
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22PlayDataPartyStatisticC1Ev>
 mov    0xc(%ebp),%eax
 mov    0xc(%eax),%eax
-mov    %eax,-0x3c(%ebp)
+mov    %eax,-0x38(%ebp)
 mov    0x8(%ebp),%eax
 lea    0xb0(%eax),%ecx
-lea    -0x40(%ebp),%eax
-lea    -0x32(%ebp),%edx
+lea    -0x3c(%ebp),%eax
+lea    -0x2e(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 add    $0xb0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 test   %al,%al
 jne    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0xa2>
 mov    0x8(%ebp),%eax
 lea    0xb0(%eax),%edx
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticEEeqERKS5_>
 test   %al,%al
 je     <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0xa9>
 mov    $0x1,%eax
 jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0xae>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x148>
-lea    -0x18(%ebp),%eax
-lea    -0x3c(%ebp),%edx
+je     <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x14a>
+lea    -0x14(%ebp),%eax
+lea    -0x38(%ebp),%edx
 mov    %edx,0x8(%esp)
-lea    -0x32(%ebp),%edx
+lea    -0x2e(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIR37STDeathTowerPlayDataPartyStatisticKeyR22PlayDataPartyStatisticESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticEC1IS0_S2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0xb0(%eax),%ecx
-lea    -0x2c(%ebp),%eax
-lea    -0x24(%ebp),%edx
+lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 sub    $0x4,%esp
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticED1Ev>
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticED1Ev>
-jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x19b>
+jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x13d>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x133>
+jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x128>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x16d>
-lea    -0x40(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x169>
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticED1Ev>
+jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x17e>
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticEEptEv>
-add    $0x4,%eax
-mov    %eax,-0xc(%ebp)
-lea    -0x3c(%ebp),%eax
+lea    0x4(%eax),%edx
+lea    -0x38(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN22PlayDataPartyStatisticpLERKS_>
-jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x19b>
+jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x17e>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22PlayDataPartyStatisticD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x18b>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN22PlayDataPartyStatisticD1Ev>
+jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x1a6>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x32(%ebp),%eax
+lea    -0x2e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37STDeathTowerPlayDataPartyStatisticKeyD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN22PlayDataPartyStatisticD1Ev>
-lea    -0x32(%ebp),%eax
+lea    -0x2e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37STDeathTowerPlayDataPartyStatisticKeyD1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::WriteDeathTowerPlayDataPartyStatistic(Packet_DeathTower_Statistic_Playdata_Party*)
    */

void __thiscall
StatisticManager::
_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party
          (StatisticManager *this,Packet_DeathTower_Statistic_Playdata_Party *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  STDeathTowerPlayDataPartyStatisticKey local_44 [4];
  undefined4 local_40 [2];
  Packet_DeathTower_Statistic_Playdata_Party local_36;
  Packet_DeathTower_Statistic_Playdata_Party local_35;
  map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
  local_34 [4];
  pair local_30 [8];
  pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic> local_28 [12];
  STDeathTowerPlayDataPartyStatisticKey local_1c [12];
  PlayDataPartyStatistic *local_10;
  
  STDeathTowerPlayDataPartyStatisticKey::STDeathTowerPlayDataPartyStatisticKey
            ((STDeathTowerPlayDataPartyStatisticKey *)&local_36);
  local_36 = param_1[10];
  local_35 = param_1[0xb];
  PlayDataPartyStatistic::PlayDataPartyStatistic((PlayDataPartyStatistic *)local_40);
  local_40[0] = *(undefined4 *)(param_1 + 0xc);
                    /* try { // try from 0806e489 to 0806e502 has its CatchHandler @ 0806e5a1 */
  std::
  map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
  ::find(local_44);
  cVar2 = std::
          map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
          ::empty((map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
                   *)(this + 0xb0));
  if (cVar2 == '\0') {
    std::
    map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
    ::end(local_34);
    cVar2 = std::
            _Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
            ::operator==((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
                          *)local_44,(_Rb_tree_iterator *)local_34);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0806e4e2;
    }
  }
  bVar1 = true;
LAB_0806e4e2:
  if (bVar1) {
    std::make_pair<STDeathTowerPlayDataPartyStatisticKey&,PlayDataPartyStatistic&>
              (local_1c,(PlayDataPartyStatistic *)&local_36);
                    /* try { // try from 0806e513 to 0806e517 has its CatchHandler @ 0806e567 */
    std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>::
    pair<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic>(local_28,local_1c);
                    /* try { // try from 0806e532 to 0806e536 has its CatchHandler @ 0806e552 */
    std::
    map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
    ::insert(local_30);
    std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>::~pair(local_28);
    std::pair<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic>::~pair
              ((pair<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic> *)local_1c);
  }
  else {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
            ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
                          *)local_44);
    local_10 = (PlayDataPartyStatistic *)(iVar3 + 4);
    PlayDataPartyStatistic::operator+=(local_10,(PlayDataPartyStatistic *)local_40);
  }
  PlayDataPartyStatistic::~PlayDataPartyStatistic((PlayDataPartyStatistic *)local_40);
  STDeathTowerPlayDataPartyStatisticKey::~STDeathTowerPlayDataPartyStatisticKey
            ((STDeathTowerPlayDataPartyStatisticKey *)&local_36);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Statics/Statistics.cpp, source/DNFServer/GameServer/Statics/CubeStatistics.h, source/DNFServer/GameServer/Statics/DNFDBServer.h, source/DNFServer/GameServer/Statics/DNFGameServer.h, source/DNFServer/GameServer/Statics/DNFManagerServer.h, source/DNFServer/GameServer/Statics/DNFServerConfig.h, source/DNFServer/GameServer/Statics/DNFServerHandler.h, source/DNFServer/GameServer/Statics/DNFTableBase.h 等 263 个文件*
