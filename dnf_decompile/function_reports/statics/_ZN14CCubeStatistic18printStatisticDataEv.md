# _ZN14CCubeStatistic18printStatisticDataEv

`CCubeStatistic::printStatisticData()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x806c7f4` | `0xd4` | `0x804b148` | `0xd4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,66 +1,66 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%edx
 lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STCubeStatisticKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE5beginEv>
 sub    $0x4,%esp
 jmp    <T> <_ZN14CCubeStatistic18printStatisticDataEv+0x9a>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEptEv>
 mov    0x10(%eax),%eax
 mov    %eax,-0x2c(%ebp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEptEv>
 movzbl 0xc(%eax),%eax
 movzbl %al,%edi
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEptEv>
 mov    0x8(%eax),%esi
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEptEv>
 mov    0x4(%eax),%ebx
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEptEv>
 mov    (%eax),%eax
 mov    -0x2c(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    %edi,0x10(%esp)
 mov    %esi,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
-movl   $&data#4474d0fa(.rodata),(%esp)
+movl   $&data#6b9886d6(.rodata),(%esp)
 call   <T> <printf>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEppEv>
 mov    0x8(%ebp),%edx
 lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STCubeStatisticKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE3endEv>
 sub    $0x4,%esp
 lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEneERKS4_>
 test   %al,%al
 jne    <T> <_ZN14CCubeStatistic18printStatisticDataEv+0x20>
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CCubeStatistic::printStatisticData() */

void CCubeStatistic::_ZN14CCubeStatistic18printStatisticDataEv(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  map<STCubeStatisticKey,int,std::less<STCubeStatisticKey>,std::allocator<std::pair<STCubeStatisticKey_const,int>>>
  local_24 [4];
  map<STCubeStatisticKey,int,std::less<STCubeStatisticKey>,std::allocator<std::pair<STCubeStatisticKey_const,int>>>
  local_20 [16];
  
  std::
  map<STCubeStatisticKey,int,std::less<STCubeStatisticKey>,std::allocator<std::pair<STCubeStatisticKey_const,int>>>
  ::begin(local_24);
  while( true ) {
    std::
    map<STCubeStatisticKey,int,std::less<STCubeStatisticKey>,std::allocator<std::pair<STCubeStatisticKey_const,int>>>
    ::end(local_20);
    cVar5 = std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_24,
                       (_Rb_tree_iterator *)local_20);
    if (cVar5 == '\0') break;
    iVar6 = std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_24);
    uVar2 = *(undefined4 *)(iVar6 + 0x10);
    iVar6 = std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_24);
    bVar1 = *(byte *)(iVar6 + 0xc);
    iVar6 = std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_24);
    uVar3 = *(undefined4 *)(iVar6 + 8);
    iVar6 = std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_24);
    uVar4 = *(undefined4 *)(iVar6 + 4);
    puVar7 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator->
                       ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_24);
    printf("\nchannel %d, index %d, level %d, type %d, count %d\n",*puVar7,uVar4,uVar3,(uint)bVar1,
           uVar2);
    std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_24);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/CubeStatistics.cpp](source/DNFServer/GameServer/Statics/CubeStatistics.cpp)（约第 77 行）：

```cpp
void CCubeStatistic::printStatisticData()
{
    for (std::map<STCubeStatisticKey, int>::iterator it = m_data.begin();
         it != m_data.end(); ++it)
    {
        printf("\nchannel %d, index %d, level %d, type %d, count %d\n",
               it->first.m_field0, it->first.m_field4, it->first.m_field8,
               (unsigned int)it->first.m_fieldc, it->second);
    }
}
```
