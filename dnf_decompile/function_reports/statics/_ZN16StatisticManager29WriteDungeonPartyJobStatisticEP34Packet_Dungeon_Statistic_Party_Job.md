# _ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job

`StatisticManager::WriteDungeonPartyJobStatistic(Packet_Dungeon_Statistic_Party_Job*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806e8ae` | `0x1df` | `0x806eb90` | `0x216` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,150 +1,172 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x90,%esp
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22STPartyJobStatisticKeyC1Ev>
 movw   $0x0,-0x70(%ebp)
 mov    0xc(%ebp),%eax
-mov    0xc(%eax),%eax
+add    $0xc,%eax
+mov    (%eax),%eax
 mov    %eax,-0x6c(%ebp)
 mov    0xc(%ebp),%eax
-movzbl 0x10(%eax),%eax
+add    $0x10,%eax
+movzbl (%eax),%eax
 mov    %al,-0x68(%ebp)
 mov    0xc(%ebp),%eax
-movzbl 0x11(%eax),%eax
+add    $0x11,%eax
+movzbl (%eax),%eax
 mov    %al,-0x67(%ebp)
 mov    0xc(%ebp),%eax
-movzbl 0x12(%eax),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
 mov    %al,-0x66(%ebp)
 mov    0xc(%ebp),%eax
-movzbl 0x13(%eax),%eax
+add    $0x13,%eax
+movzbl (%eax),%eax
 mov    %al,-0x65(%ebp)
 mov    0xc(%ebp),%eax
-movzbl 0x14(%eax),%eax
+add    $0x14,%eax
+movzbl (%eax),%eax
 mov    %al,-0x64(%ebp)
 mov    0xc(%ebp),%eax
-movzbl 0x15(%eax),%eax
+add    $0x15,%eax
+movzbl (%eax),%eax
 mov    %al,-0x63(%ebp)
 mov    0xc(%ebp),%eax
-mov    0x16(%eax),%eax
+add    $0x16,%eax
+mov    (%eax),%eax
 mov    %eax,-0x60(%ebp)
 mov    0xc(%ebp),%eax
-movzbl 0x1a(%eax),%eax
+add    $0x1a,%eax
+movzbl (%eax),%eax
 mov    %al,-0x5c(%ebp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17PartyJobStatisticC1Ev>
+mov    0xc(%ebp),%eax
+add    $0x1b,%eax
+mov    (%eax),%eax
+mov    %eax,-0x74(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%ecx
-lea    -0x74(%ebp),%eax
+lea    -0x7c(%ebp),%eax
 lea    -0x70(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STPartyJobStatisticKey17PartyJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 sub    $0x4,%esp
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17PartyJobStatisticC1Ev>
-mov    0xc(%ebp),%eax
-mov    0x1b(%eax),%eax
-mov    %eax,-0x78(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x50,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI22STPartyJobStatisticKey17PartyJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0xe7>
+jne    <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0xfb>
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%edx
 lea    -0x58(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STPartyJobStatisticKey17PartyJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x58(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x7c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEeqERKS5_>
 test   %al,%al
-je     <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0xee>
+je     <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0x102>
 mov    $0x1,%eax
-jmp    <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0xf3>
+jmp    <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0x107>
 mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0x18a>
+mov    %al,-0x9(%ebp)
+cmpb   $0x0,-0x9(%ebp)
+je     <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0x1a5>
 lea    -0x2c(%ebp),%eax
-lea    -0x7c(%ebp),%edx
+lea    -0x78(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x70(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIR22STPartyJobStatisticKeyR17PartyJobStatisticESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEC1IS0_S2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%ecx
 lea    -0x54(%ebp),%eax
 lea    -0x4c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STPartyJobStatisticKey17PartyJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 sub    $0x4,%esp
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK22STPartyJobStatisticKey17PartyJobStatisticED1Ev>
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI22STPartyJobStatisticKey17PartyJobStatisticED1Ev>
-jmp    <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0x1ca>
+jmp    <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0x198>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK22STPartyJobStatisticKey17PartyJobStatisticED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0x175>
+jmp    <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0x183>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairI22STPartyJobStatisticKey17PartyJobStatisticED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0x1af>
-lea    -0x74(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0x1c4>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI22STPartyJobStatisticKey17PartyJobStatisticED1Ev>
+jmp    <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0x1d9>
+lea    -0x7c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEptEv>
-add    $0x18,%eax
-mov    %eax,-0xc(%ebp)
-lea    -0x7c(%ebp),%eax
+lea    0x18(%eax),%edx
+lea    -0x78(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    %edx,(%esp)
+call   <T> <_ZN17PartyJobStatisticpLERKS_>
+jmp    <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0x1d9>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN17PartyJobStatisticpLERKS_>
-jmp    <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0x1ca>
+call   <T> <_ZN17PartyJobStatisticD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0x1e6>
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17PartyJobStatisticD1Ev>
+jmp    <T> <_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job+0x201>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22STPartyJobStatisticKeyD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22STPartyJobStatisticKeyD1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::WriteDungeonPartyJobStatistic(Packet_Dungeon_Statistic_Party_Job*) */

void __thiscall
StatisticManager::
_ZN16StatisticManager29WriteDungeonPartyJobStatisticEP34Packet_Dungeon_Statistic_Party_Job
          (StatisticManager *this,Packet_Dungeon_Statistic_Party_Job *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PartyJobStatistic local_80 [4];
  undefined4 local_7c;
  STPartyJobStatisticKey local_78 [4];
  undefined2 local_74 [2];
  undefined4 local_70;
  Packet_Dungeon_Statistic_Party_Job local_6c;
  Packet_Dungeon_Statistic_Party_Job local_6b;
  Packet_Dungeon_Statistic_Party_Job local_6a;
  Packet_Dungeon_Statistic_Party_Job local_69;
  Packet_Dungeon_Statistic_Party_Job local_68;
  Packet_Dungeon_Statistic_Party_Job local_67;
  undefined4 local_64;
  Packet_Dungeon_Statistic_Party_Job local_60;
  map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
  local_5c [4];
  pair local_58 [8];
  pair<STPartyJobStatisticKey_const,PartyJobStatistic> local_50 [32];
  STPartyJobStatisticKey local_30 [32];
  PartyJobStatistic *local_10;
  
  STPartyJobStatisticKey::STPartyJobStatisticKey((STPartyJobStatisticKey *)local_74);
  local_74[0] = 0;
  local_70 = *(undefined4 *)(param_1 + 0xc);
  local_6c = param_1[0x10];
  local_6b = param_1[0x11];
  local_6a = param_1[0x12];
  local_69 = param_1[0x13];
  local_68 = param_1[0x14];
  local_67 = param_1[0x15];
  local_64 = *(undefined4 *)(param_1 + 0x16);
  local_60 = param_1[0x1a];
                    /* try { // try from 0806e939 to 0806e9c1 has its CatchHandler @ 0806ea5d */
  std::
  map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
  ::find(local_78);
  PartyJobStatistic::PartyJobStatistic(local_80);
  local_7c = *(undefined4 *)(param_1 + 0x1b);
  cVar2 = std::
          map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
          ::empty((map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
                   *)(this + 0x50));
  if (cVar2 == '\0') {
    std::
    map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
    ::end(local_5c);
    cVar2 = std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::
            operator==((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>
                        *)local_78,(_Rb_tree_iterator *)local_5c);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0806e9a1;
    }
  }
  bVar1 = true;
LAB_0806e9a1:
  if (bVar1) {
    std::make_pair<STPartyJobStatisticKey&,PartyJobStatistic&>
              (local_30,(PartyJobStatistic *)local_74);
                    /* try { // try from 0806e9d2 to 0806e9d6 has its CatchHandler @ 0806ea23 */
    std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>::
    pair<STPartyJobStatisticKey,PartyJobStatistic>(local_50,local_30);
                    /* try { // try from 0806e9ee to 0806e9f2 has its CatchHandler @ 0806ea0e */
    std::
    map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
    ::insert(local_58);
    std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>::~pair(local_50);
    std::pair<STPartyJobStatisticKey,PartyJobStatistic>::~pair
              ((pair<STPartyJobStatisticKey,PartyJobStatistic> *)local_30);
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::
            operator->((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>
                        *)local_78);
    local_10 = (PartyJobStatistic *)(iVar3 + 0x18);
    PartyJobStatistic::operator+=(local_10,local_80);
  }
  STPartyJobStatisticKey::~STPartyJobStatisticKey((STPartyJobStatisticKey *)local_74);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 173 行）：

```cpp
void StatisticManager::WriteDungeonPartyJobStatistic(Packet_Dungeon_Statistic_Party_Job* pkt)
{
    STPartyJobStatisticKey key;
    key.m_field0 = 0;
    key.m_field4 = *(unsigned int*)((char*)pkt + 0xc);
    key.m_field8 = *(char*)((char*)pkt + 0x10);
    key.m_field9 = *(char*)((char*)pkt + 0x11);
    key.m_fielda = *(char*)((char*)pkt + 0x12);
    key.m_fieldb = *(char*)((char*)pkt + 0x13);
    key.m_fieldc = *(char*)((char*)pkt + 0x14);
    key.m_fieldd = *(char*)((char*)pkt + 0x15);
    key.m_field10 = *(unsigned int*)((char*)pkt + 0x16);
    key.m_field14 = *(char*)((char*)pkt + 0x1a);
    PartyJobStatistic value;
    value.m_data[1] = *(int*)((char*)pkt + 0x1b);
    std::map<STPartyJobStatisticKey, PartyJobStatistic>::iterator it = m_partyJob.find(key);
    bool isNew = (m_partyJob.empty() || it == m_partyJob.end());
    if (isNew)
    {
        m_partyJob.insert(std::make_pair(key, value));
    }
    else
    {
        it->second += value;
    }
}
```
