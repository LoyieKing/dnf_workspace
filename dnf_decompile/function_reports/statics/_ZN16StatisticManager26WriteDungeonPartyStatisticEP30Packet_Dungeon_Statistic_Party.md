# _ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party

`StatisticManager::WriteDungeonPartyStatistic(Packet_Dungeon_Statistic_Party*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806e5f0` | `0x2be` | `0x806e8a2` | `0x2ee` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,185 +1,206 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xf0,%esp
 lea    -0xa8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19STPartyStatisticKeyC1Ev>
 movw   $0x0,-0xa8(%ebp)
 mov    0xc(%ebp),%eax
-mov    0xc(%eax),%eax
+add    $0xc,%eax
+mov    (%eax),%eax
 mov    %eax,-0xa4(%ebp)
 mov    0xc(%ebp),%eax
-movzbl 0x10(%eax),%eax
+add    $0x10,%eax
+movzbl (%eax),%eax
 mov    %al,-0xa0(%ebp)
 mov    0xc(%ebp),%eax
-movzbl 0x11(%eax),%eax
+add    $0x11,%eax
+movzbl (%eax),%eax
 mov    %al,-0x9f(%ebp)
 mov    0xc(%ebp),%eax
-movzbl 0x12(%eax),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
 mov    %al,-0x9e(%ebp)
 mov    0xc(%ebp),%eax
-movzbl 0x13(%eax),%eax
+add    $0x13,%eax
+movzbl (%eax),%eax
 mov    %al,-0x9d(%ebp)
 mov    0xc(%ebp),%eax
-movzbl 0x14(%eax),%eax
+add    $0x14,%eax
+movzbl (%eax),%eax
 mov    %al,-0x9c(%ebp)
 mov    0xc(%ebp),%eax
-movzbl 0x15(%eax),%eax
+add    $0x15,%eax
+movzbl (%eax),%eax
 mov    %al,-0x9b(%ebp)
 lea    -0xdc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14PartyStatisticC1Ev>
 mov    0xc(%ebp),%eax
-mov    0x16(%eax),%eax
+add    $0x16,%eax
+mov    (%eax),%eax
 mov    %eax,-0xdc(%ebp)
 mov    0xc(%ebp),%eax
-mov    0x1a(%eax),%eax
+add    $0x1a,%eax
+mov    (%eax),%eax
 mov    %eax,-0xd8(%ebp)
 mov    0xc(%ebp),%eax
-mov    0x1e(%eax),%eax
+add    $0x1e,%eax
+mov    (%eax),%eax
 mov    %eax,-0xd4(%ebp)
 mov    0xc(%ebp),%eax
-mov    0x22(%eax),%eax
+add    $0x22,%eax
+mov    (%eax),%eax
 mov    %eax,-0xd0(%ebp)
 mov    0xc(%ebp),%eax
-mov    0x26(%eax),%eax
+add    $0x26,%eax
+mov    (%eax),%eax
 mov    %eax,-0xcc(%ebp)
 mov    0xc(%ebp),%eax
-mov    0x2a(%eax),%eax
+add    $0x2a,%eax
+mov    (%eax),%eax
 mov    %eax,-0xc8(%ebp)
 mov    0xc(%ebp),%eax
-mov    0x2e(%eax),%eax
+add    $0x2e,%eax
+mov    (%eax),%eax
 mov    %eax,-0xc4(%ebp)
 mov    0xc(%ebp),%eax
-mov    0x32(%eax),%eax
+add    $0x32,%eax
+mov    (%eax),%eax
 mov    %eax,-0xc0(%ebp)
 mov    0xc(%ebp),%eax
-mov    0x36(%eax),%eax
+add    $0x36,%eax
+mov    (%eax),%eax
 mov    %eax,-0xbc(%ebp)
 mov    0xc(%ebp),%eax
-mov    0x3a(%eax),%eax
+add    $0x3a,%eax
+mov    (%eax),%eax
 mov    %eax,-0xb8(%ebp)
-mov    0xc(%ebp),%eax
-movzwl 0x3e(%eax),%eax
+movl   $0x0,-0xb4(%ebp)
+mov    0xc(%ebp),%eax
+add    $0x3e,%eax
+movzwl (%eax),%eax
 cwtl
-mov    %eax,-0xb4(%ebp)
+mov    %eax,-0xb0(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x38(%eax),%ecx
 lea    -0xac(%ebp),%eax
 lea    -0xa8(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPartyStatisticKey14PartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 add    $0x38,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI19STPartyStatisticKey14PartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x17e>
+jne    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x1ac>
 mov    0x8(%ebp),%eax
 lea    0x38(%eax),%edx
 lea    -0x98(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPartyStatisticKey14PartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x98(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0xac(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEeqERKS5_>
 test   %al,%al
-je     <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x185>
+je     <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x1b3>
 mov    $0x1,%eax
-jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x18a>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x1b8>
 mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x239>
+mov    %al,-0x9(%ebp)
+cmpb   $0x0,-0x9(%ebp)
+je     <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x26b>
 lea    -0x4c(%ebp),%eax
 lea    -0xdc(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0xa8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIR19STPartyStatisticKeyR14PartyStatisticESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x4c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK19STPartyStatisticKey14PartyStatisticEC1IS0_S2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x38(%eax),%ecx
 lea    -0x94(%ebp),%eax
 lea    -0x8c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPartyStatisticKey14PartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 sub    $0x4,%esp
 lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK19STPartyStatisticKey14PartyStatisticED1Ev>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x25e>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIK19STPartyStatisticKey14PartyStatisticED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x249>
+mov    %edx,%ebx
+mov    %eax,%esi
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairI19STPartyStatisticKey14PartyStatisticED1Ev>
-jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x298>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x8c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIK19STPartyStatisticKey14PartyStatisticED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x224>
-mov    %edx,%ebx
-mov    %eax,%esi
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x290>
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairI19STPartyStatisticKey14PartyStatisticED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x264>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x2a8>
 lea    -0xac(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-add    $0x10,%eax
-mov    %eax,-0xc(%ebp)
+lea    0x10(%eax),%edx
 lea    -0xdc(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN14PartyStatisticpLERKS_>
-jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x298>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x2a8>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xdc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14PartyStatisticD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x2b8>
+lea    -0xdc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14PartyStatisticD1Ev>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x2d6>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xa8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19STPartyStatisticKeyD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0xdc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14PartyStatisticD1Ev>
 lea    -0xa8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19STPartyStatisticKeyD1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::WriteDungeonPartyStatistic(Packet_Dungeon_Statistic_Party*) */

void __thiscall
StatisticManager::
_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party
          (StatisticManager *this,Packet_Dungeon_Statistic_Party *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8;
  STPartyStatisticKey local_b0 [4];
  undefined2 local_ac [2];
  undefined4 local_a8;
  Packet_Dungeon_Statistic_Party local_a4;
  Packet_Dungeon_Statistic_Party local_a3;
  Packet_Dungeon_Statistic_Party local_a2;
  Packet_Dungeon_Statistic_Party local_a1;
  Packet_Dungeon_Statistic_Party local_a0;
  Packet_Dungeon_Statistic_Party local_9f;
  map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
  local_9c [4];
  pair local_98 [8];
  pair<STPartyStatisticKey_const,PartyStatistic> local_90 [64];
  STPartyStatisticKey local_50 [64];
  PartyStatistic *local_10;
  
  STPartyStatisticKey::STPartyStatisticKey((STPartyStatisticKey *)local_ac);
  local_ac[0] = 0;
  local_a8 = *(undefined4 *)(param_1 + 0xc);
  local_a4 = param_1[0x10];
  local_a3 = param_1[0x11];
  local_a2 = param_1[0x12];
  local_a1 = param_1[0x13];
  local_a0 = param_1[0x14];
  local_9f = param_1[0x15];
  PartyStatistic::PartyStatistic((PartyStatistic *)&local_e0);
  local_e0 = *(undefined4 *)(param_1 + 0x16);
  local_dc = *(undefined4 *)(param_1 + 0x1a);
  local_d8 = *(undefined4 *)(param_1 + 0x1e);
  local_d4 = *(undefined4 *)(param_1 + 0x22);
  local_d0 = *(undefined4 *)(param_1 + 0x26);
  local_cc = *(undefined4 *)(param_1 + 0x2a);
  local_c8 = *(undefined4 *)(param_1 + 0x2e);
  local_c4 = *(undefined4 *)(param_1 + 0x32);
  local_c0 = *(undefined4 *)(param_1 + 0x36);
  local_bc = *(undefined4 *)(param_1 + 0x3a);
  local_b8 = (int)*(short *)(param_1 + 0x3e);
                    /* try { // try from 0806e71d to 0806e7a0 has its CatchHandler @ 0806e854 */
  std::
  map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
  ::find(local_b0);
  cVar2 = std::
          map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
          ::empty((map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
                   *)(this + 0x38));
  if (cVar2 == '\0') {
    std::
    map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
    ::end(local_9c);
    cVar2 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::operator==
                      ((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                       local_b0,(_Rb_tree_iterator *)local_9c);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0806e77a;
    }
  }
  bVar1 = true;
LAB_0806e77a:
  if (bVar1) {
    std::make_pair<STPartyStatisticKey&,PartyStatistic&>(local_50,(PartyStatistic *)local_ac);
                    /* try { // try from 0806e7b4 to 0806e7b8 has its CatchHandler @ 0806e814 */
    std::pair<STPartyStatisticKey_const,PartyStatistic>::pair<STPartyStatisticKey,PartyStatistic>
              (local_90,local_50);
                    /* try { // try from 0806e7d6 to 0806e7da has its CatchHandler @ 0806e7fc */
    std::
    map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
    ::insert(local_98);
    std::pair<STPartyStatisticKey_const,PartyStatistic>::~pair(local_90);
    std::pair<STPartyStatisticKey,PartyStatistic>::~pair
              ((pair<STPartyStatisticKey,PartyStatistic> *)local_50);
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::operator->
                      ((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                       local_b0);
    local_10 = (PartyStatistic *)(iVar3 + 0x10);
    PartyStatistic::_ZN14PartyStatisticpLERKS_(local_10,(PartyStatistic *)&local_e0);
  }
  PartyStatistic::~PartyStatistic((PartyStatistic *)&local_e0);
  STPartyStatisticKey::~STPartyStatisticKey((STPartyStatisticKey *)local_ac);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 138 行）：

```cpp
void StatisticManager::WriteDungeonPartyStatistic(Packet_Dungeon_Statistic_Party* pkt)
{
    STPartyStatisticKey key;
    key.m_field0 = 0;
    key.m_field4 = *(unsigned int*)((char*)pkt + 0xc);
    key.m_field8 = *(char*)((char*)pkt + 0x10);
    key.m_field9 = *(char*)((char*)pkt + 0x11);
    key.m_fielda = *(char*)((char*)pkt + 0x12);
    key.m_fieldb = *(char*)((char*)pkt + 0x13);
    key.m_fieldc = *(char*)((char*)pkt + 0x14);
    key.m_fieldd = *(char*)((char*)pkt + 0x15);
    PartyStatistic value;
    value.m_data[0] = *(int*)((char*)pkt + 0x16);
    value.m_data[1] = *(int*)((char*)pkt + 0x1a);
    value.m_data[2] = *(int*)((char*)pkt + 0x1e);
    value.m_data[3] = *(int*)((char*)pkt + 0x22);
    value.m_data[4] = *(int*)((char*)pkt + 0x26);
    value.m_data[5] = *(int*)((char*)pkt + 0x2a);
    value.m_data[6] = *(int*)((char*)pkt + 0x2e);
    value.m_data[7] = *(int*)((char*)pkt + 0x32);
    value.m_data[8] = *(int*)((char*)pkt + 0x36);
    value.m_data[9] = *(int*)((char*)pkt + 0x3a);
    value.m_data[10] = 0;
    value.m_data[11] = (int)*(short*)((char*)pkt + 0x3e);
    std::map<STPartyStatisticKey, PartyStatistic>::iterator it = m_party.find(key);
    bool isNew = (m_party.empty() || it == m_party.end());
    if (isNew)
    {
        m_party.insert(std::make_pair(key, value));
    }
    else
    {
        it->second += value;
    }
}
```
