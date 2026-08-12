# _ZN16StatisticManager25AddBloodDungeonStatisticsEP30Packet_Blood_dungeon_statistic

`StatisticManager::AddBloodDungeonStatistics(Packet_Blood_dungeon_statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8072780` | `0x109` | `0x807285c` | `0xf6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,79 +1,74 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x48,%esp
+sub    $0x58,%esp
 mov    0xc(%ebp),%eax
-lea    0xe(%eax),%ecx
+lea    0xa(%eax),%ecx
 mov    0x8(%ebp),%eax
 lea    0x1d0(%eax),%edx
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj23STBloodDungeonStatisticSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x1d0(%eax),%edx
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj23STBloodDungeonStatisticSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj23STBloodDungeonStatisticEEneERKS4_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj23STBloodDungeonStatisticEEeqERKS4_>
 test   %al,%al
-je     <T> <_ZN16StatisticManager25AddBloodDungeonStatisticsEP30Packet_Blood_dungeon_statistic+0x9a>
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj23STBloodDungeonStatisticEEptEv>
-mov    0x4(%eax),%ecx
-mov    0xc(%ebp),%edx
-movzbl 0x12(%edx),%edx
-movzbl %dl,%edx
-lea    (%ecx,%edx,1),%edx
-mov    %edx,0x4(%eax)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj23STBloodDungeonStatisticEEptEv>
-mov    0x8(%eax),%ecx
-mov    0xc(%ebp),%edx
-movzbl 0x13(%edx),%edx
-movzbl %dl,%edx
-lea    (%ecx,%edx,1),%edx
-mov    %edx,0x8(%eax)
-jmp    <T> <_ZN16StatisticManager25AddBloodDungeonStatisticsEP30Packet_Blood_dungeon_statistic+0x107>
-mov    0xc(%ebp),%eax
-movzbl 0x12(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x38(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0x13(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x34(%ebp)
+je     <T> <_ZN16StatisticManager25AddBloodDungeonStatisticsEP30Packet_Blood_dungeon_statistic+0xb4>
 mov    0xc(%ebp),%eax
 lea    0xe(%eax),%ecx
-lea    -0x14(%ebp),%eax
-lea    -0x38(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %ecx,0x4(%esp)
+mov    0xc(%ebp),%eax
+lea    0xa(%eax),%edx
+lea    -0x1c(%ebp),%eax
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjR23STBloodDungeonStatisticESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKj23STBloodDungeonStatisticEC1IjS1_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x1d0(%eax),%ecx
-lea    -0x28(%ebp),%eax
-lea    -0x20(%ebp),%edx
+lea    -0x38(%ebp),%eax
+lea    -0x30(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj23STBloodDungeonStatisticSt4lessIjESaISt4pairIKjS0_EEE6insertERKS5_>
 sub    $0x4,%esp
+jmp    <T> <_ZN16StatisticManager25AddBloodDungeonStatisticsEP30Packet_Blood_dungeon_statistic+0xf4>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj23STBloodDungeonStatisticEEptEv>
+mov    0x4(%eax),%ecx
+mov    0xc(%ebp),%edx
+add    $0x12,%edx
+movzbl (%edx),%edx
+movzbl %dl,%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,0x4(%eax)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj23STBloodDungeonStatisticEEptEv>
+mov    0x8(%eax),%ecx
+mov    0xc(%ebp),%edx
+add    $0x13,%edx
+movzbl (%edx),%edx
+movzbl %dl,%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,0x8(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddBloodDungeonStatistics(Packet_Blood_dungeon_statistic*) */

void __thiscall
StatisticManager::_ZN16StatisticManager25AddBloodDungeonStatisticsEP30Packet_Blood_dungeon_statistic
          (StatisticManager *this,Packet_Blood_dungeon_statistic *param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STBloodDungeonStatistic>> local_34 [4];
  map<unsigned_int,STBloodDungeonStatistic,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>>
  local_30 [4];
  pair local_2c [8];
  pair<unsigned_int_const,STBloodDungeonStatistic> local_24 [12];
  uint local_18 [5];
  
  std::
  map<unsigned_int,STBloodDungeonStatistic,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>>
  ::find((uint *)local_34);
  std::
  map<unsigned_int,STBloodDungeonStatistic,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>>
  ::end(local_30);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>::operator!=
                    (local_34,(_Rb_tree_iterator *)local_30);
  if (cVar1 == '\0') {
    std::make_pair<unsigned_int&,STBloodDungeonStatistic&>
              (local_18,(STBloodDungeonStatistic *)(param_1 + 0xe));
    std::pair<unsigned_int_const,STBloodDungeonStatistic>::
    pair<unsigned_int,STBloodDungeonStatistic>(local_24,(pair *)local_18);
    std::
    map<unsigned_int,STBloodDungeonStatistic,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>>
    ::insert(local_2c);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>::
            operator->(local_34);
    *(uint *)(iVar2 + 4) = *(int *)(iVar2 + 4) + (uint)(byte)param_1[0x12];
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>::
            operator->(local_34);
    *(uint *)(iVar2 + 8) = *(int *)(iVar2 + 8) + (uint)(byte)param_1[0x13];
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1184 行）：

```cpp
void StatisticManager::AddBloodDungeonStatistics(Packet_Blood_dungeon_statistic* pkt)
{
    std::map<unsigned int, STBloodDungeonStatistic>::iterator it =
        m_blood.find(*(unsigned int*)((char*)pkt + 10));
    if (it == m_blood.end())
    {
        m_blood.insert(std::make_pair(*(unsigned int*)((char*)pkt + 10),
                                      *(STBloodDungeonStatistic*)((char*)pkt + 0xe)));
    }
    else
    {
        it->second.m_field0 += (unsigned int)(unsigned char)*(char*)((char*)pkt + 0x12);
        it->second.m_field4 += (unsigned int)(unsigned char)*(char*)((char*)pkt + 0x13);
    }
}
```
