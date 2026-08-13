# _ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party

`StatisticManager::WriteDungeonPartyStatistic(Packet_Dungeon_Statistic_Party*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806e5f0` | `0x2be` | `0x806e640` | `0x2cf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,185 +1,194 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0xf0,%esp
-lea    -0xa8(%ebp),%eax
+sub    $0xe0,%esp
+lea    -0xa4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19STPartyStatisticKeyC1Ev>
-movw   $0x0,-0xa8(%ebp)
+movw   $0x0,-0xa4(%ebp)
 mov    0xc(%ebp),%eax
 mov    0xc(%eax),%eax
-mov    %eax,-0xa4(%ebp)
+mov    %eax,-0xa0(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x10(%eax),%eax
-mov    %al,-0xa0(%ebp)
+mov    %al,-0x9c(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x11(%eax),%eax
-mov    %al,-0x9f(%ebp)
+test   %al,%al
+setne  %al
+mov    %al,-0x9b(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x12(%eax),%eax
-mov    %al,-0x9e(%ebp)
+test   %al,%al
+setne  %al
+mov    %al,-0x9a(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x13(%eax),%eax
-mov    %al,-0x9d(%ebp)
+test   %al,%al
+setne  %al
+mov    %al,-0x99(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x14(%eax),%eax
-mov    %al,-0x9c(%ebp)
+test   %al,%al
+setne  %al
+mov    %al,-0x98(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x15(%eax),%eax
-mov    %al,-0x9b(%ebp)
-lea    -0xdc(%ebp),%eax
+mov    %al,-0x97(%ebp)
+lea    -0xd8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14PartyStatisticC1Ev>
 mov    0xc(%ebp),%eax
 mov    0x16(%eax),%eax
-mov    %eax,-0xdc(%ebp)
+mov    %eax,-0xd8(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x1a(%eax),%eax
-mov    %eax,-0xd8(%ebp)
+mov    %eax,-0xd4(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x1e(%eax),%eax
-mov    %eax,-0xd4(%ebp)
+mov    %eax,-0xd0(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x22(%eax),%eax
-mov    %eax,-0xd0(%ebp)
+mov    %eax,-0xcc(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x26(%eax),%eax
-mov    %eax,-0xcc(%ebp)
+mov    %eax,-0xc8(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x2a(%eax),%eax
-mov    %eax,-0xc8(%ebp)
+mov    %eax,-0xc4(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x2e(%eax),%eax
-mov    %eax,-0xc4(%ebp)
+mov    %eax,-0xc0(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x32(%eax),%eax
-mov    %eax,-0xc0(%ebp)
+mov    %eax,-0xbc(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x36(%eax),%eax
-mov    %eax,-0xbc(%ebp)
+mov    %eax,-0xb8(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x3a(%eax),%eax
-mov    %eax,-0xb8(%ebp)
+mov    %eax,-0xb4(%ebp)
 mov    0xc(%ebp),%eax
 movzwl 0x3e(%eax),%eax
 cwtl
-mov    %eax,-0xb4(%ebp)
+mov    %eax,-0xb0(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x38(%eax),%ecx
-lea    -0xac(%ebp),%eax
-lea    -0xa8(%ebp),%edx
+lea    -0xa8(%ebp),%eax
+lea    -0xa4(%ebp),%edx
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
+jne    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x192>
 mov    0x8(%ebp),%eax
 lea    0x38(%eax),%edx
-lea    -0x98(%ebp),%eax
+lea    -0x94(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPartyStatisticKey14PartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x98(%ebp),%eax
+lea    -0x94(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0xac(%ebp),%eax
+lea    -0xa8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEeqERKS5_>
 test   %al,%al
-je     <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x185>
+je     <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x199>
 mov    $0x1,%eax
-jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x18a>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x19e>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x239>
-lea    -0x4c(%ebp),%eax
-lea    -0xdc(%ebp),%edx
+je     <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x24c>
+lea    -0x48(%ebp),%eax
+lea    -0xd8(%ebp),%edx
 mov    %edx,0x8(%esp)
-lea    -0xa8(%ebp),%edx
+lea    -0xa4(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIR19STPartyStatisticKeyR14PartyStatisticESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x8c(%ebp),%eax
+lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK19STPartyStatisticKey14PartyStatisticEC1IS0_S2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x38(%eax),%ecx
-lea    -0x94(%ebp),%eax
-lea    -0x8c(%ebp),%edx
+lea    -0x90(%ebp),%eax
+lea    -0x88(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPartyStatisticKey14PartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 sub    $0x4,%esp
-lea    -0x8c(%ebp),%eax
+lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK19STPartyStatisticKey14PartyStatisticED1Ev>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI19STPartyStatisticKey14PartyStatisticED1Ev>
-jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x298>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x23f>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x8c(%ebp),%eax
+lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK19STPartyStatisticKey14PartyStatisticED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x224>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x22a>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairI19STPartyStatisticKey14PartyStatisticED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x264>
-lea    -0xac(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x271>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI19STPartyStatisticKey14PartyStatisticED1Ev>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x289>
+lea    -0xa8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-add    $0x10,%eax
-mov    %eax,-0xc(%ebp)
-lea    -0xdc(%ebp),%eax
+lea    0x10(%eax),%edx
+lea    -0xd8(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN14PartyStatisticpLERKS_>
-jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x298>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x289>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0xdc(%ebp),%eax
+lea    -0xd8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14PartyStatisticD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x299>
+lea    -0xd8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14PartyStatisticD1Ev>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x2b7>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0xa8(%ebp),%eax
+lea    -0xa4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19STPartyStatisticKeyD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0xdc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14PartyStatisticD1Ev>
-lea    -0xa8(%ebp),%eax
+lea    -0xa4(%ebp),%eax
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

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 219 行）：

```cpp
void StatisticManager::WriteDungeonPartyStatistic(Packet_Dungeon_Statistic_Party* pkt)
{
    struct __attribute__((packed)) Wire
    {
        char m_hdr[0xc];
        int m_field4;             // +0xc
        char m_field8;            // +0x10
        unsigned char m_field9;   // +0x11
        unsigned char m_fielda;   // +0x12
        unsigned char m_fieldb;   // +0x13
        unsigned char m_fieldc;   // +0x14
        char m_fieldd;            // +0x15
        int m_data[10];           // +0x16
        short m_last;             // +0x3e
    };
    STPartyStatisticKey key;
    key.m_field0 = 0;
    key.m_field4 = ((Wire*)pkt)->m_field4;
    key.m_field8 = ((Wire*)pkt)->m_field8;
    key.m_field9 = ((Wire*)pkt)->m_field9;
    key.m_fielda = ((Wire*)pkt)->m_fielda;
    key.m_fieldb = ((Wire*)pkt)->m_fieldb;
    key.m_fieldc = ((Wire*)pkt)->m_fieldc;
    key.m_fieldd = ((Wire*)pkt)->m_fieldd;
    PartyStatistic value;
    value.m_data[0] = ((Wire*)pkt)->m_data[0];
    value.m_data[1] = ((Wire*)pkt)->m_data[1];
    value.m_data[2] = ((Wire*)pkt)->m_data[2];
    value.m_data[3] = ((Wire*)pkt)->m_data[3];
    value.m_data[4] = ((Wire*)pkt)->m_data[4];
    value.m_data[5] = ((Wire*)pkt)->m_data[5];
    value.m_data[6] = ((Wire*)pkt)->m_data[6];
    value.m_data[7] = ((Wire*)pkt)->m_data[7];
    value.m_data[8] = ((Wire*)pkt)->m_data[8];
    value.m_data[9] = ((Wire*)pkt)->m_data[9];
    value.m_data[10] = ((Wire*)pkt)->m_last;
    std::map<STPartyStatisticKey, PartyStatistic>::iterator it = m_party.find(key);
    if (m_party.empty() || it == m_party.end())
    {
        m_party.insert(std::make_pair(key, value));
    }
    else
    {
        it->second += value;
    }
}
```
