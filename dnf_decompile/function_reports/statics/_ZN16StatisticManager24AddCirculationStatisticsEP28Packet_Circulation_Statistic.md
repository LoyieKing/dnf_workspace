# _ZN16StatisticManager24AddCirculationStatisticsEP28Packet_Circulation_Statistic

`StatisticManager::AddCirculationStatistics(Packet_Circulation_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x8073e66` | `0x15c` | `0x8073f88` | `0x15c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,92 +1,92 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x270,%esp
 mov    0xc(%ebp),%eax
 lea    0xa(%eax),%ecx
 mov    0x8(%ebp),%eax
 lea    0x420(%eax),%edx
 lea    -0x1a8(%ebp),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi24CirculationStatisticDataSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x420(%eax),%edx
 lea    -0x1a4(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi24CirculationStatisticDataSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x1a4(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1a8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi24CirculationStatisticDataEEneERKS4_>
 test   %al,%al
 je     <T> <_ZN16StatisticManager24AddCirculationStatisticsEP28Packet_Circulation_Statistic+0xb3>
 movl   $0x0,-0x10(%ebp)
 jmp    <T> <_ZN16StatisticManager24AddCirculationStatisticsEP28Packet_Circulation_Statistic+0xa3>
 lea    -0x1a8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi24CirculationStatisticDataEEptEv>
 mov    -0x10(%ebp),%edx
 mov    -0x10(%ebp),%ecx
 mov    0x4(%eax,%ecx,4),%esi
+mov    0xc(%ebp),%ecx
 mov    -0x10(%ebp),%ebx
-mov    0xc(%ebp),%ecx
 mov    0xe(%ecx,%ebx,4),%ecx
 lea    (%esi,%ecx,1),%ecx
 mov    %ecx,0x4(%eax,%edx,4)
 addl   $0x1,-0x10(%ebp)
 cmpl   $0x2f,-0x10(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN16StatisticManager24AddCirculationStatisticsEP28Packet_Circulation_Statistic+0x76>
 jmp    <T> <_ZN16StatisticManager24AddCirculationStatisticsEP28Packet_Circulation_Statistic+0x152>
 lea    -0x268(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN24CirculationStatisticDataC1Ev>
 movl   $0x0,-0xc(%ebp)
 jmp    <T> <_ZN16StatisticManager24AddCirculationStatisticsEP28Packet_Circulation_Statistic+0xe2>
 mov    -0xc(%ebp),%eax
+mov    0xc(%ebp),%edx
 mov    -0xc(%ebp),%ecx
-mov    0xc(%ebp),%edx
 mov    0xe(%edx,%ecx,4),%edx
 mov    %edx,-0x268(%ebp,%eax,4)
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x2f,-0xc(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN16StatisticManager24AddCirculationStatisticsEP28Packet_Circulation_Statistic+0xca>
 mov    0xc(%ebp),%eax
 lea    0xa(%eax),%ecx
 lea    -0xd4(%ebp),%eax
 lea    -0x268(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRiR24CirculationStatisticDataESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 sub    $0x4,%esp
 lea    -0xd4(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x198(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKi24CirculationStatisticDataEC1IiS1_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x420(%eax),%ecx
 lea    -0x1a0(%ebp),%eax
 lea    -0x198(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi24CirculationStatisticDataSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 sub    $0x4,%esp
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddCirculationStatistics(Packet_Circulation_Statistic*) */

void __thiscall
StatisticManager::_ZN16StatisticManager24AddCirculationStatisticsEP28Packet_Circulation_Statistic
          (StatisticManager *this,Packet_Circulation_Statistic *param_1)

{
  char cVar1;
  int iVar2;
  CirculationStatisticData local_26c [192];
  _Rb_tree_iterator<std::pair<int_const,CirculationStatisticData>> local_1ac [4];
  map<int,CirculationStatisticData,std::less<int>,std::allocator<std::pair<int_const,CirculationStatisticData>>>
  local_1a8 [4];
  pair local_1a4 [8];
  pair<int_const,CirculationStatisticData> local_19c [196];
  int local_d8 [49];
  int local_14;
  int local_10;
  
  std::
  map<int,CirculationStatisticData,std::less<int>,std::allocator<std::pair<int_const,CirculationStatisticData>>>
  ::find((int *)local_1ac);
  std::
  map<int,CirculationStatisticData,std::less<int>,std::allocator<std::pair<int_const,CirculationStatisticData>>>
  ::end(local_1a8);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CirculationStatisticData>>::operator!=
                    (local_1ac,(_Rb_tree_iterator *)local_1a8);
  if (cVar1 == '\0') {
    CirculationStatisticData::CirculationStatisticData(local_26c);
    for (local_10 = 0; local_10 < 0x30; local_10 = local_10 + 1) {
      *(undefined4 *)(local_26c + local_10 * 4) = *(undefined4 *)(param_1 + local_10 * 4 + 0xe);
    }
    std::make_pair<int&,CirculationStatisticData&>
              (local_d8,(CirculationStatisticData *)(param_1 + 10));
    std::pair<int_const,CirculationStatisticData>::pair<int,CirculationStatisticData>
              (local_19c,(pair *)local_d8);
    std::
    map<int,CirculationStatisticData,std::less<int>,std::allocator<std::pair<int_const,CirculationStatisticData>>>
    ::insert(local_1a4);
  }
  else {
    for (local_14 = 0; local_14 < 0x30; local_14 = local_14 + 1) {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CirculationStatisticData>>::operator->
                        (local_1ac);
      *(int *)(iVar2 + 4 + local_14 * 4) =
           *(int *)(iVar2 + 4 + local_14 * 4) + *(int *)(param_1 + local_14 * 4 + 0xe);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1517 行）：

```cpp
void StatisticManager::AddCirculationStatistics(Packet_Circulation_Statistic* pkt)
{
    struct __attribute__((packed)) Wire
    {
        char m_hdr[0xa];
        int m_f0a;
        int m_data[0x30];
    };
    std::map<int, CirculationStatisticData>::iterator it = m_circ.find(*(int*)((char*)pkt + 10));
    if (it != m_circ.end())
    {
        for (int i = 0; i < 0x30; i++)
        {
            it->second.m_data[i] += ((Wire*)pkt)->m_data[i];
        }
    }
    else
    {
        CirculationStatisticData v;
        for (int i = 0; i < 0x30; i++)
        {
            v.m_data[i] = ((Wire*)pkt)->m_data[i];
        }
        m_circ.insert(std::make_pair(*(int*)((char*)pkt + 10), v));
    }
}
```
