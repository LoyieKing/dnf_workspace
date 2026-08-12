# _ZN14CCubeStatistic16addStatisticDataEP21Packet_Cube_Statistic

`CCubeStatistic::addStatisticData(Packet_Cube_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806c424` | `0x164` | `0x804ad84` | `0x166` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,116 +1,117 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18STCubeStatisticKeyC1Ev>
 mov    0xc(%ebp),%eax
 movzwl 0xa(%eax),%eax
 cwtl
 mov    %eax,-0x4c(%ebp)
 mov    0xc(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,-0x48(%ebp)
 mov    0xc(%ebp),%eax
 movzwl 0xc(%eax),%eax
 cwtl
 mov    %eax,-0x44(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x16(%eax),%eax
 mov    %al,-0x40(%ebp)
 mov    0xc(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %eax,-0x50(%ebp)
 mov    0x8(%ebp),%edx
 lea    -0x54(%ebp),%eax
 lea    -0x4c(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STCubeStatisticKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0x3c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STCubeStatisticKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE3endEv>
 sub    $0x4,%esp
 lea    -0x3c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEneERKS4_>
 test   %al,%al
 je     <T> <_ZN14CCubeStatistic16addStatisticDataEP21Packet_Cube_Statistic+0xa8>
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEptEv>
 mov    0x10(%eax),%ecx
 mov    -0x50(%ebp),%edx
 lea    (%ecx,%edx,1),%edx
 mov    %edx,0x10(%eax)
-jmp    <T> <_ZN14CCubeStatistic16addStatisticDataEP21Packet_Cube_Statistic+0x14f>
+jmp    <T> <_ZN14CCubeStatistic16addStatisticDataEP21Packet_Cube_Statistic+0x151>
 lea    -0x1c(%ebp),%eax
 lea    -0x50(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x4c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIR18STCubeStatisticKeyRiESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 sub    $0x4,%esp
 lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18STCubeStatisticKeyiEC1IS0_iEEOS_IT_T0_E>
 mov    0x8(%ebp),%edx
 lea    -0x38(%ebp),%eax
 lea    -0x30(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STCubeStatisticKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE6insertERKS5_>
 sub    $0x4,%esp
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18STCubeStatisticKeyiED1Ev>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI18STCubeStatisticKeyiED1Ev>
-jmp    <T> <_ZN14CCubeStatistic16addStatisticDataEP21Packet_Cube_Statistic+0x14f>
+jmp    <T> <_ZN14CCubeStatistic16addStatisticDataEP21Packet_Cube_Statistic+0x129>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18STCubeStatisticKeyiED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CCubeStatistic16addStatisticDataEP21Packet_Cube_Statistic+0x11f>
+jmp    <T> <_ZN14CCubeStatistic16addStatisticDataEP21Packet_Cube_Statistic+0x114>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairI18STCubeStatisticKeyiED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CCubeStatistic16addStatisticDataEP21Packet_Cube_Statistic+0x134>
+jmp    <T> <_ZN14CCubeStatistic16addStatisticDataEP21Packet_Cube_Statistic+0x136>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI18STCubeStatisticKeyiED1Ev>
+jmp    <T> <_ZN14CCubeStatistic16addStatisticDataEP21Packet_Cube_Statistic+0x151>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18STCubeStatisticKeyD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18STCubeStatisticKeyD1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CCubeStatistic::addStatisticData(Packet_Cube_Statistic*) */

void __thiscall
CCubeStatistic::_ZN14CCubeStatistic16addStatisticDataEP21Packet_Cube_Statistic
          (CCubeStatistic *this,Packet_Cube_Statistic *param_1)

{
  char cVar1;
  int iVar2;
  STCubeStatisticKey local_58 [4];
  int local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  Packet_Cube_Statistic local_44;
  map<STCubeStatisticKey,int,std::less<STCubeStatisticKey>,std::allocator<std::pair<STCubeStatisticKey_const,int>>>
  local_40 [4];
  pair local_3c [8];
  pair<STCubeStatisticKey_const,int> local_34 [20];
  STCubeStatisticKey local_20 [20];
  
  STCubeStatisticKey::STCubeStatisticKey((STCubeStatisticKey *)&local_50);
  local_50 = (int)*(short *)(param_1 + 10);
  local_4c = *(undefined4 *)(param_1 + 0xe);
  local_48 = (int)*(short *)(param_1 + 0xc);
  local_44 = param_1[0x16];
  local_54 = *(int *)(param_1 + 0x12);
                    /* try { // try from 0806c47d to 0806c4e4 has its CatchHandler @ 0806c558 */
  std::
  map<STCubeStatisticKey,int,std::less<STCubeStatisticKey>,std::allocator<std::pair<STCubeStatisticKey_const,int>>>
  ::find(local_58);
  std::
  map<STCubeStatisticKey,int,std::less<STCubeStatisticKey>,std::allocator<std::pair<STCubeStatisticKey_const,int>>>
  ::end(local_40);
  cVar1 = std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_58,
                     (_Rb_tree_iterator *)local_40);
  if (cVar1 == '\0') {
    std::make_pair<STCubeStatisticKey&,int&>(local_20,&local_50);
                    /* try { // try from 0806c4f5 to 0806c4f9 has its CatchHandler @ 0806c543 */
    std::pair<STCubeStatisticKey_const,int>::pair<STCubeStatisticKey,int>(local_34,local_20);
                    /* try { // try from 0806c50e to 0806c512 has its CatchHandler @ 0806c52e */
    std::
    map<STCubeStatisticKey,int,std::less<STCubeStatisticKey>,std::allocator<std::pair<STCubeStatisticKey_const,int>>>
    ::insert(local_3c);
    std::pair<STCubeStatisticKey_const,int>::~pair(local_34);
    std::pair<STCubeStatisticKey,int>::~pair((pair<STCubeStatisticKey,int> *)local_20);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_58);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + local_54;
  }
  STCubeStatisticKey::~STCubeStatisticKey((STCubeStatisticKey *)&local_50);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/CubeStatistics.cpp](source/DNFServer/GameServer/Statics/CubeStatistics.cpp)（约第 23 行）：

```cpp
void CCubeStatistic::addStatisticData(Packet_Cube_Statistic* pkt)
{
    STCubeStatisticKey key;
    key.m_field0 = (unsigned int)(short)((const CubePkt*)pkt)->m_a;
    key.m_field4 = ((const CubePkt*)pkt)->m_c;
    key.m_field8 = (unsigned int)(short)((const CubePkt*)pkt)->m_b;
    key.m_fieldc = ((const CubePkt*)pkt)->m_e;
    int value = ((const CubePkt*)pkt)->m_d;
    std::map<STCubeStatisticKey, int>::iterator it = m_data.find(key);
    if (it != m_data.end())
        it->second += value;
    else
        m_data.insert(std::make_pair(key, value));
}
```
