# _ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac

`StatisticManager::WriteDungeonPartyCharacStatistic(Packet_Dungeon_Statistic_Party_Charac*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806ea8e` | `0x2c9` | `0x806ec14` | `0x2d0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,188 +1,193 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x100,%esp
-lea    -0xbc(%ebp),%eax
+lea    -0xb8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16STPartyCharacKeyC1Ev>
-movw   $0x0,-0xbc(%ebp)
+movw   $0x0,-0xb8(%ebp)
 mov    0xc(%ebp),%eax
 mov    0xc(%eax),%eax
-mov    %eax,-0xb8(%ebp)
+mov    %eax,-0xb4(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x10(%eax),%eax
-mov    %al,-0xb4(%ebp)
+mov    %al,-0xb0(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x11(%eax),%eax
-mov    %al,-0xb3(%ebp)
+test   %al,%al
+setne  %al
+mov    %al,-0xaf(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x12(%eax),%eax
-mov    %al,-0xb2(%ebp)
+test   %al,%al
+setne  %al
+mov    %al,-0xae(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x13(%eax),%eax
-mov    %eax,-0xb0(%ebp)
+mov    %eax,-0xac(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x17(%eax),%eax
-mov    %al,-0xac(%ebp)
+mov    %al,-0xa8(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x18(%eax),%eax
-mov    %al,-0xab(%ebp)
-lea    -0xf4(%ebp),%eax
+mov    %al,-0xa7(%ebp)
+lea    -0xf0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN20PartyCharacStatisticC1Ev>
 mov    0xc(%ebp),%eax
 mov    0x19(%eax),%eax
-mov    %eax,-0xf4(%ebp)
+mov    %eax,-0xf0(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x1d(%eax),%eax
-mov    %eax,-0xf0(%ebp)
+mov    %eax,-0xec(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x21(%eax),%eax
-mov    %eax,-0xec(%ebp)
+mov    %eax,-0xe8(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x25(%eax),%eax
-mov    %eax,-0xe8(%ebp)
+mov    %eax,-0xe4(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x29(%eax),%eax
-mov    %eax,-0xe4(%ebp)
+mov    %eax,-0xe0(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x2d(%eax),%eax
-mov    %eax,-0xe0(%ebp)
+mov    %eax,-0xdc(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x31(%eax),%eax
-mov    %eax,-0xdc(%ebp)
+mov    %eax,-0xd8(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x35(%eax),%eax
-mov    %eax,-0xd8(%ebp)
+mov    %eax,-0xd4(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x39(%eax),%eax
-mov    %eax,-0xd4(%ebp)
+mov    %eax,-0xd0(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x3d(%eax),%eax
-mov    %eax,-0xd0(%ebp)
+mov    %eax,-0xcc(%ebp)
 mov    0xc(%ebp),%eax
 movzwl 0x41(%eax),%eax
 cwtl
-mov    %eax,-0xcc(%ebp)
+mov    %eax,-0xc8(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x43(%eax),%eax
-mov    %eax,-0xc4(%ebp)
+mov    %eax,-0xc0(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x68(%eax),%ecx
-lea    -0xc0(%ebp),%eax
-lea    -0xbc(%ebp),%edx
+lea    -0xbc(%ebp),%eax
+lea    -0xb8(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI16STPartyCharacKey20PartyCharacStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 add    $0x68,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI16STPartyCharacKey20PartyCharacStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x189>
+jne    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x193>
 mov    0x8(%ebp),%eax
 lea    0x68(%eax),%edx
-lea    -0xa8(%ebp),%eax
+lea    -0xa4(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI16STPartyCharacKey20PartyCharacStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0xa8(%ebp),%eax
+lea    -0xa4(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0xc0(%ebp),%eax
+lea    -0xbc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEeqERKS5_>
 test   %al,%al
-je     <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x190>
+je     <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x19a>
 mov    $0x1,%eax
-jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x195>
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x19f>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x244>
-lea    -0x54(%ebp),%eax
-lea    -0xf4(%ebp),%edx
+je     <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x24d>
+lea    -0x50(%ebp),%eax
+lea    -0xf0(%ebp),%edx
 mov    %edx,0x8(%esp)
-lea    -0xbc(%ebp),%edx
+lea    -0xb8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIR16STPartyCharacKeyR20PartyCharacStatisticESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
-lea    -0x54(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x9c(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK16STPartyCharacKey20PartyCharacStatisticEC1IS0_S2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x68(%eax),%ecx
-lea    -0xa4(%ebp),%eax
-lea    -0x9c(%ebp),%edx
+lea    -0xa0(%ebp),%eax
+lea    -0x98(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI16STPartyCharacKey20PartyCharacStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 sub    $0x4,%esp
-lea    -0x9c(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK16STPartyCharacKey20PartyCharacStatisticED1Ev>
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI16STPartyCharacKey20PartyCharacStatisticED1Ev>
-jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x2a3>
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x240>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x9c(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK16STPartyCharacKey20PartyCharacStatisticED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x22f>
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x22b>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x54(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairI16STPartyCharacKey20PartyCharacStatisticED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x26f>
-lea    -0xc0(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x272>
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI16STPartyCharacKey20PartyCharacStatisticED1Ev>
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x28a>
+lea    -0xbc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-add    $0x14,%eax
-mov    %eax,-0xc(%ebp)
-lea    -0xf4(%ebp),%eax
+lea    0x14(%eax),%edx
+lea    -0xf0(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN20PartyCharacStatisticpLERKS_>
-jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x2a3>
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x28a>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0xf4(%ebp),%eax
+lea    -0xf0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN20PartyCharacStatisticD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x29a>
+lea    -0xf0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN20PartyCharacStatisticD1Ev>
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x2b8>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0xbc(%ebp),%eax
+lea    -0xb8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16STPartyCharacKeyD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0xf4(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN20PartyCharacStatisticD1Ev>
-lea    -0xbc(%ebp),%eax
+lea    -0xb8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16STPartyCharacKeyD1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::WriteDungeonPartyCharacStatistic(Packet_Dungeon_Statistic_Party_Charac*) */

void __thiscall
StatisticManager::
_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac
          (StatisticManager *this,Packet_Dungeon_Statistic_Party_Charac *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_c8;
  STPartyCharacKey local_c4 [4];
  undefined2 local_c0 [2];
  undefined4 local_bc;
  Packet_Dungeon_Statistic_Party_Charac local_b8;
  Packet_Dungeon_Statistic_Party_Charac local_b7;
  Packet_Dungeon_Statistic_Party_Charac local_b6;
  undefined4 local_b4;
  Packet_Dungeon_Statistic_Party_Charac local_b0;
  Packet_Dungeon_Statistic_Party_Charac local_af;
  map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
  local_ac [4];
  pair local_a8 [8];
  pair<STPartyCharacKey_const,PartyCharacStatistic> local_a0 [72];
  STPartyCharacKey local_58 [72];
  PartyCharacStatistic *local_10;
  
  STPartyCharacKey::STPartyCharacKey((STPartyCharacKey *)local_c0);
  local_c0[0] = 0;
  local_bc = *(undefined4 *)(param_1 + 0xc);
  local_b8 = param_1[0x10];
  local_b7 = param_1[0x11];
  local_b6 = param_1[0x12];
  local_b4 = *(undefined4 *)(param_1 + 0x13);
  local_b0 = param_1[0x17];
  local_af = param_1[0x18];
  PartyCharacStatistic::PartyCharacStatistic((PartyCharacStatistic *)&local_f8);
  local_f8 = *(undefined4 *)(param_1 + 0x19);
  local_f4 = *(undefined4 *)(param_1 + 0x1d);
  local_f0 = *(undefined4 *)(param_1 + 0x21);
  local_ec = *(undefined4 *)(param_1 + 0x25);
  local_e8 = *(undefined4 *)(param_1 + 0x29);
  local_e4 = *(undefined4 *)(param_1 + 0x2d);
  local_e0 = *(undefined4 *)(param_1 + 0x31);
  local_dc = *(undefined4 *)(param_1 + 0x35);
  local_d8 = *(undefined4 *)(param_1 + 0x39);
  local_d4 = *(undefined4 *)(param_1 + 0x3d);
  local_d0 = (int)*(short *)(param_1 + 0x41);
  local_c8 = *(undefined4 *)(param_1 + 0x43);
                    /* try { // try from 0806ebc6 to 0806ec49 has its CatchHandler @ 0806ecfd */
  std::
  map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
  ::find(local_c4);
  cVar2 = std::
          map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
          ::empty((map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
                   *)(this + 0x68));
  if (cVar2 == '\0') {
    std::
    map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
    ::end(local_ac);
    cVar2 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
            operator==((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>> *)
                       local_c4,(_Rb_tree_iterator *)local_ac);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0806ec23;
    }
  }
  bVar1 = true;
LAB_0806ec23:
  if (bVar1) {
    std::make_pair<STPartyCharacKey&,PartyCharacStatistic&>
              (local_58,(PartyCharacStatistic *)local_c0);
                    /* try { // try from 0806ec5d to 0806ec61 has its CatchHandler @ 0806ecbd */
    std::pair<STPartyCharacKey_const,PartyCharacStatistic>::
    pair<STPartyCharacKey,PartyCharacStatistic>(local_a0,local_58);
                    /* try { // try from 0806ec7f to 0806ec83 has its CatchHandler @ 0806eca5 */
    std::
    map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
    ::insert(local_a8);
    std::pair<STPartyCharacKey_const,PartyCharacStatistic>::~pair(local_a0);
    std::pair<STPartyCharacKey,PartyCharacStatistic>::~pair
              ((pair<STPartyCharacKey,PartyCharacStatistic> *)local_58);
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
            operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>> *)
                       local_c4);
    local_10 = (PartyCharacStatistic *)(iVar3 + 0x14);
    PartyCharacStatistic::operator+=(local_10,(PartyCharacStatistic *)&local_f8);
  }
  PartyCharacStatistic::~PartyCharacStatistic((PartyCharacStatistic *)&local_f8);
  STPartyCharacKey::~STPartyCharacKey((STPartyCharacKey *)local_c0);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 308 行）：

```cpp
void StatisticManager::WriteDungeonPartyCharacStatistic(Packet_Dungeon_Statistic_Party_Charac* pkt)
{
    struct __attribute__((packed)) Wire
    {
        char m_hdr[0xc];
        unsigned int m_f0c;
        char m_f10;
        char m_f11;
        char m_f12;
        unsigned int m_f13;
        char m_f17;
        char m_f18;
        int m_f19;
        int m_f1d;
        int m_f21;
        int m_f25;
        int m_f29;
        int m_f2d;
        int m_f31;
        int m_f35;
        int m_f39;
        int m_f3d;
        short m_f41;
        int m_f43;
    };
    STPartyCharacKey key;
    key.m_channelNo = 0;
    key.m_dungeonIndex = ((Wire*)pkt)->m_f0c;
    key.m_dungeonDiff = ((Wire*)pkt)->m_f10;
    key.m_dungeonStandardLevel = ((Wire*)pkt)->m_f11;
    key.m_success = ((Wire*)pkt)->m_f12;
    key.m_characJob = (STPartyCharacKey::STPartyCharacKeyFieldC)((Wire*)pkt)->m_f13;
    key.m_characGrow = ((Wire*)pkt)->m_f17;
    key.m_partyUserCount = ((Wire*)pkt)->m_f18;
    PartyCharacStatistic value;
    value.m_data[0] = ((Wire*)pkt)->m_f19;
    value.m_data[1] = ((Wire*)pkt)->m_f1d;
    value.m_data[2] = ((Wire*)pkt)->m_f21;
    value.m_data[3] = ((Wire*)pkt)->m_f25;
    value.m_data[4] = ((Wire*)pkt)->m_f29;
    value.m_data[5] = ((Wire*)pkt)->m_f2d;
    value.m_data[6] = ((Wire*)pkt)->m_f31;
    value.m_data[7] = ((Wire*)pkt)->m_f35;
    value.m_data[8] = ((Wire*)pkt)->m_f39;
    value.m_data[9] = ((Wire*)pkt)->m_f3d;
    value.m_data[10] = (int)((Wire*)pkt)->m_f41;
    value.m_data[12] = ((Wire*)pkt)->m_f43;
    std::map<STPartyCharacKey, PartyCharacStatistic>::iterator it = m_partyCharac.find(key);
    if (m_partyCharac.empty() || it == m_partyCharac.end())
    {
        m_partyCharac.insert(std::make_pair(key, value));
    }
    else
    {
        it->second += value;
    }
}
```
