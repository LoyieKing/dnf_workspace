# _ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add

`StatisticManager::WritePacketOverflowStatistic(Packet_Overflow_Statistic_Add*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806ed58` | `0x18c` | `0x806ef7a` | `0x189` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,123 +1,122 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19STPacketOverflowKeyC1Ev>
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
+test   %al,%al
+setne  %al
 mov    %al,-0x30(%ebp)
 mov    0xc(%ebp),%eax
 movzwl 0xb(%eax),%eax
 mov    %ax,-0x2e(%ebp)
 mov    0x8(%ebp),%eax
 lea    0xc8(%eax),%ecx
 lea    -0x34(%ebp),%eax
 lea    -0x30(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPacketOverflowKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 add    $0xc8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI19STPacketOverflowKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x8f>
+jne    <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x94>
 mov    0x8(%ebp),%eax
 lea    0xc8(%eax),%edx
 lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPacketOverflowKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE3endEv>
 sub    $0x4,%esp
 lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPacketOverflowKeyiEEeqERKS4_>
 test   %al,%al
-je     <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x96>
+je     <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x9b>
 mov    $0x1,%eax
-jmp    <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x9b>
+jmp    <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0xa0>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x13c>
+je     <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x143>
 movl   $0x1,-0x10(%ebp)
 lea    -0x18(%ebp),%eax
 lea    -0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x30(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIR19STPacketOverflowKeyiESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 sub    $0x4,%esp
 lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK19STPacketOverflowKeyiEC1IS0_iEEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0xc8(%eax),%ecx
 lea    -0x28(%ebp),%eax
 lea    -0x20(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPacketOverflowKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE6insertERKS5_>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK19STPacketOverflowKeyiED1Ev>
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI19STPacketOverflowKeyiED1Ev>
-jmp    <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x177>
+jmp    <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x136>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK19STPacketOverflowKeyiED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x127>
+jmp    <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x121>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairI19STPacketOverflowKeyiED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x15c>
+jmp    <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x159>
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI19STPacketOverflowKeyiED1Ev>
+jmp    <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x174>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPacketOverflowKeyiEEptEv>
-add    $0x4,%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-lea    0x1(%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %edx,(%eax)
-jmp    <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x177>
+mov    0x4(%eax),%edx
+add    $0x1,%edx
+mov    %edx,0x4(%eax)
+jmp    <T> <_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add+0x174>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19STPacketOverflowKeyD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19STPacketOverflowKeyD1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::WritePacketOverflowStatistic(Packet_Overflow_Statistic_Add*) */

void __thiscall
StatisticManager::
_ZN16StatisticManager28WritePacketOverflowStatisticEP29Packet_Overflow_Statistic_Add
          (StatisticManager *this,Packet_Overflow_Statistic_Add *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  STPacketOverflowKey local_38 [4];
  Packet_Overflow_Statistic_Add local_34 [2];
  undefined2 local_32;
  map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
  local_30 [4];
  pair local_2c [8];
  pair<STPacketOverflowKey_const,int> local_24 [8];
  STPacketOverflowKey local_1c [8];
  undefined4 local_14;
  int *local_10;
  
  STPacketOverflowKey::STPacketOverflowKey((STPacketOverflowKey *)local_34);
  local_34[0] = param_1[10];
  local_32 = *(undefined2 *)(param_1 + 0xb);
                    /* try { // try from 0806ed9a to 0806ee1a has its CatchHandler @ 0806eeb4 */
  std::
  map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
  ::find(local_38);
  cVar2 = std::
          map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
          ::empty((map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
                   *)(this + 200));
  if (cVar2 == '\0') {
    std::
    map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
    ::end(local_30);
    cVar2 = std::_Rb_tree_iterator<std::pair<STPacketOverflowKey_const,int>>::operator==
                      ((_Rb_tree_iterator<std::pair<STPacketOverflowKey_const,int>> *)local_38,
                       (_Rb_tree_iterator *)local_30);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0806edf3;
    }
  }
  bVar1 = true;
LAB_0806edf3:
  if (bVar1) {
    local_14 = 1;
    std::make_pair<STPacketOverflowKey&,int>(local_1c,(int *)local_34);
                    /* try { // try from 0806ee2b to 0806ee2f has its CatchHandler @ 0806ee7f */
    std::pair<STPacketOverflowKey_const,int>::pair<STPacketOverflowKey,int>(local_24,local_1c);
                    /* try { // try from 0806ee4a to 0806ee4e has its CatchHandler @ 0806ee6a */
    std::
    map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
    ::insert(local_2c);
    std::pair<STPacketOverflowKey_const,int>::~pair(local_24);
    std::pair<STPacketOverflowKey,int>::~pair((pair<STPacketOverflowKey,int> *)local_1c);
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<STPacketOverflowKey_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<STPacketOverflowKey_const,int>> *)local_38);
    local_10 = (int *)(iVar3 + 4);
    *local_10 = *local_10 + 1;
  }
  STPacketOverflowKey::~STPacketOverflowKey((STPacketOverflowKey *)local_34);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 324 行）：

```cpp
void StatisticManager::WritePacketOverflowStatistic(Packet_Overflow_Statistic_Add* pkt)
{
    struct __attribute__((packed)) Wire
    {
        char m_hdr[0xa];
        char m_f0a;
        unsigned short m_f0b;
    };
    int m_padFrame;
    STPacketOverflowKey key;
    key.m_field0 = ((Wire*)pkt)->m_f0a;
    key.m_field2 = ((Wire*)pkt)->m_f0b;
    std::map<STPacketOverflowKey, int>::iterator it = m_packetOverflow.find(key);
    if (m_packetOverflow.empty() || it == m_packetOverflow.end())
    {
        m_packetOverflow.insert(std::make_pair(key, 1));
    }
    else
    {
        it->second += 1;
    }
}
```
