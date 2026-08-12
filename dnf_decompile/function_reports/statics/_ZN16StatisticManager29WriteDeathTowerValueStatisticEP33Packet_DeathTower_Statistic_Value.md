# _ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value

`StatisticManager::WriteDeathTowerValueStatistic(Packet_DeathTower_Statistic_Value*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806e0a0` | `0x1c3` | `0x806e28a` | `0x1c3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,141 +1,142 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN29STDeathTowerValueStatisticKeyC1Ev>
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 mov    %al,-0x40(%ebp)
 mov    0xc(%ebp),%eax
 movzwl 0xb(%eax),%eax
 mov    %ax,-0x3e(%ebp)
 mov    0xc(%ebp),%eax
 mov    0xd(%eax),%eax
 mov    %eax,-0x3c(%ebp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14ValueStatisticC1Ev>
 mov    0xc(%ebp),%eax
 mov    0x11(%eax),%eax
 mov    %eax,-0x48(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x80(%eax),%ecx
 lea    -0x4c(%ebp),%eax
 lea    -0x40(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI29STDeathTowerValueStatisticKey14ValueStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 sub    $0xffffff80,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI29STDeathTowerValueStatisticKey14ValueStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 test   %al,%al
 jne    <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0xaa>
 mov    0x8(%ebp),%eax
 lea    0x80(%eax),%edx
 lea    -0x38(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI29STDeathTowerValueStatisticKey14ValueStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x38(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK29STDeathTowerValueStatisticKey14ValueStatisticEEeqERKS5_>
 test   %al,%al
 je     <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0xb1>
 mov    $0x1,%eax
 jmp    <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0xb6>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0x150>
+je     <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0x152>
 lea    -0x1c(%ebp),%eax
 lea    -0x48(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x40(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIR29STDeathTowerValueStatisticKeyR14ValueStatisticESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK29STDeathTowerValueStatisticKey14ValueStatisticEC1IS0_S2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x80(%eax),%ecx
 lea    -0x34(%ebp),%eax
 lea    -0x2c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI29STDeathTowerValueStatisticKey14ValueStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 sub    $0x4,%esp
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK29STDeathTowerValueStatisticKey14ValueStatisticED1Ev>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI29STDeathTowerValueStatisticKey14ValueStatisticED1Ev>
-jmp    <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0x1a3>
+jmp    <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0x145>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK29STDeathTowerValueStatisticKey14ValueStatisticED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0x13b>
+jmp    <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0x130>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairI29STDeathTowerValueStatisticKey14ValueStatisticED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0x175>
+jmp    <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0x171>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI29STDeathTowerValueStatisticKey14ValueStatisticED1Ev>
+jmp    <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0x186>
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK29STDeathTowerValueStatisticKey14ValueStatisticEEptEv>
-add    $0x8,%eax
-mov    %eax,-0xc(%ebp)
+lea    0x8(%eax),%edx
 lea    -0x48(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN14ValueStatisticpLERKS_>
-jmp    <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0x1a3>
+jmp    <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0x186>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14ValueStatisticD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0x193>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14ValueStatisticD1Ev>
+jmp    <T> <_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value+0x1ae>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN29STDeathTowerValueStatisticKeyD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14ValueStatisticD1Ev>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN29STDeathTowerValueStatisticKeyD1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::WriteDeathTowerValueStatistic(Packet_DeathTower_Statistic_Value*) */

void __thiscall
StatisticManager::
_ZN16StatisticManager29WriteDeathTowerValueStatisticEP33Packet_DeathTower_Statistic_Value
          (StatisticManager *this,Packet_DeathTower_Statistic_Value *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  STDeathTowerValueStatisticKey local_50 [4];
  undefined4 local_4c [2];
  Packet_DeathTower_Statistic_Value local_44 [2];
  undefined2 local_42;
  undefined4 local_40;
  map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
  local_3c [4];
  pair local_38 [8];
  pair<STDeathTowerValueStatisticKey_const,ValueStatistic> local_30 [16];
  STDeathTowerValueStatisticKey local_20 [16];
  ValueStatistic *local_10;
  
  STDeathTowerValueStatisticKey::STDeathTowerValueStatisticKey
            ((STDeathTowerValueStatisticKey *)local_44);
  local_44[0] = param_1[10];
  local_42 = *(undefined2 *)(param_1 + 0xb);
  local_40 = *(undefined4 *)(param_1 + 0xd);
  ValueStatistic::ValueStatistic((ValueStatistic *)local_4c);
  local_4c[0] = *(undefined4 *)(param_1 + 0x11);
                    /* try { // try from 0806e0ff to 0806e176 has its CatchHandler @ 0806e215 */
  std::
  map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
  ::find(local_50);
  cVar2 = std::
          map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
          ::empty((map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
                   *)(this + 0x80));
  if (cVar2 == '\0') {
    std::
    map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
    ::end(local_3c);
    cVar2 = std::_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>::
            operator==((_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>
                        *)local_50,(_Rb_tree_iterator *)local_3c);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0806e156;
    }
  }
  bVar1 = true;
LAB_0806e156:
  if (bVar1) {
    std::make_pair<STDeathTowerValueStatisticKey&,ValueStatistic&>
              (local_20,(ValueStatistic *)local_44);
                    /* try { // try from 0806e187 to 0806e18b has its CatchHandler @ 0806e1db */
    std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>::
    pair<STDeathTowerValueStatisticKey,ValueStatistic>(local_30,local_20);
                    /* try { // try from 0806e1a6 to 0806e1aa has its CatchHandler @ 0806e1c6 */
    std::
    map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
    ::insert(local_38);
    std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>::~pair(local_30);
    std::pair<STDeathTowerValueStatisticKey,ValueStatistic>::~pair
              ((pair<STDeathTowerValueStatisticKey,ValueStatistic> *)local_20);
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>::
            operator->((_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>
                        *)local_50);
    local_10 = (ValueStatistic *)(iVar3 + 8);
    ValueStatistic::_ZN14ValueStatisticpLERKS_(local_10,(ValueStatistic *)local_4c);
  }
  ValueStatistic::~ValueStatistic((ValueStatistic *)local_4c);
  STDeathTowerValueStatisticKey::~STDeathTowerValueStatisticKey
            ((STDeathTowerValueStatisticKey *)local_44);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 92 行）：

```cpp
void StatisticManager::WriteDeathTowerValueStatistic(Packet_DeathTower_Statistic_Value* pkt)
{
    struct __attribute__((packed)) Wire
    {
        char m_hdr[0xa];
        char m_f0a;
        unsigned short m_f0b;
        unsigned int m_f0d;
        int m_f11;
    };
    int m_padFrame;
    STDeathTowerValueStatisticKey key;
    key.m_field0 = ((Wire*)pkt)->m_f0a;
    key.m_field2 = ((Wire*)pkt)->m_f0b;
    key.m_field4 = ((Wire*)pkt)->m_f0d;
    ValueStatistic value;
    value.m_data[0] = ((Wire*)pkt)->m_f11;
    std::map<STDeathTowerValueStatisticKey, ValueStatistic>::iterator it =
        m_deathTowerValue.find(key);
    if (m_deathTowerValue.empty() || it == m_deathTowerValue.end())
    {
        m_deathTowerValue.insert(std::make_pair(key, value));
    }
    else
    {
        it->second += value;
    }
}
```
