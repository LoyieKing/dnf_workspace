# _ZN16StatisticManager18AddValueStatisticsEP22Packet_Value_Statistic

`StatisticManager::AddValueStatistics(Packet_Value_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x80739a4` | `0x15c` | `0x807378e` | `0x15c` |

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
 sub    $0x1a0,%esp
 mov    0xc(%ebp),%eax
 lea    0xa(%eax),%ecx
 mov    0x8(%ebp),%eax
 lea    0x408(%eax),%edx
 lea    -0x118(%ebp),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi18ValueStatisticDataSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x408(%eax),%edx
 lea    -0x114(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi18ValueStatisticDataSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x114(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x118(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18ValueStatisticDataEEneERKS4_>
 test   %al,%al
 je     <T> <_ZN16StatisticManager18AddValueStatisticsEP22Packet_Value_Statistic+0xb3>
 movl   $0x0,-0x10(%ebp)
 jmp    <T> <_ZN16StatisticManager18AddValueStatisticsEP22Packet_Value_Statistic+0xa3>
 lea    -0x118(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18ValueStatisticDataEEptEv>
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
 cmpl   $0x1d,-0x10(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN16StatisticManager18AddValueStatisticsEP22Packet_Value_Statistic+0x76>
 jmp    <T> <_ZN16StatisticManager18AddValueStatisticsEP22Packet_Value_Statistic+0x152>
 lea    -0x190(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18ValueStatisticDataC1Ev>
 movl   $0x0,-0xc(%ebp)
 jmp    <T> <_ZN16StatisticManager18AddValueStatisticsEP22Packet_Value_Statistic+0xe2>
 mov    -0xc(%ebp),%eax
+mov    0xc(%ebp),%edx
 mov    -0xc(%ebp),%ecx
-mov    0xc(%ebp),%edx
 mov    0xe(%edx,%ecx,4),%edx
 mov    %edx,-0x190(%ebp,%eax,4)
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x1d,-0xc(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN16StatisticManager18AddValueStatisticsEP22Packet_Value_Statistic+0xca>
 mov    0xc(%ebp),%eax
 lea    0xa(%eax),%ecx
 lea    -0x8c(%ebp),%eax
 lea    -0x190(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRiR18ValueStatisticDataESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 sub    $0x4,%esp
 lea    -0x8c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x108(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKi18ValueStatisticDataEC1IiS1_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x408(%eax),%ecx
 lea    -0x110(%ebp),%eax
 lea    -0x108(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi18ValueStatisticDataSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
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

/* StatisticManager::AddValueStatistics(Packet_Value_Statistic*) */

void __thiscall
StatisticManager::_ZN16StatisticManager18AddValueStatisticsEP22Packet_Value_Statistic
          (StatisticManager *this,Packet_Value_Statistic *param_1)

{
  char cVar1;
  int iVar2;
  ValueStatisticData local_194 [120];
  _Rb_tree_iterator<std::pair<int_const,ValueStatisticData>> local_11c [4];
  map<int,ValueStatisticData,std::less<int>,std::allocator<std::pair<int_const,ValueStatisticData>>>
  local_118 [4];
  pair local_114 [8];
  pair<int_const,ValueStatisticData> local_10c [124];
  int local_90 [31];
  int local_14;
  int local_10;
  
  std::
  map<int,ValueStatisticData,std::less<int>,std::allocator<std::pair<int_const,ValueStatisticData>>>
  ::find((int *)local_11c);
  std::
  map<int,ValueStatisticData,std::less<int>,std::allocator<std::pair<int_const,ValueStatisticData>>>
  ::end(local_118);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ValueStatisticData>>::operator!=
                    (local_11c,(_Rb_tree_iterator *)local_118);
  if (cVar1 == '\0') {
    ValueStatisticData::ValueStatisticData(local_194);
    for (local_10 = 0; local_10 < 0x1e; local_10 = local_10 + 1) {
      *(undefined4 *)(local_194 + local_10 * 4) = *(undefined4 *)(param_1 + local_10 * 4 + 0xe);
    }
    std::make_pair<int&,ValueStatisticData&>(local_90,(ValueStatisticData *)(param_1 + 10));
    std::pair<int_const,ValueStatisticData>::pair<int,ValueStatisticData>
              (local_10c,(pair *)local_90);
    std::
    map<int,ValueStatisticData,std::less<int>,std::allocator<std::pair<int_const,ValueStatisticData>>>
    ::insert(local_114);
  }
  else {
    for (local_14 = 0; local_14 < 0x1e; local_14 = local_14 + 1) {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,ValueStatisticData>>::operator->(local_11c)
      ;
      *(int *)(iVar2 + 4 + local_14 * 4) =
           *(int *)(iVar2 + 4 + local_14 * 4) + *(int *)(param_1 + local_14 * 4 + 0xe);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1447 行）：

```cpp
void StatisticManager::AddValueStatistics(Packet_Value_Statistic* pkt)
{
    struct __attribute__((packed)) Wire
    {
        char m_hdr[0xa];
        int m_f0a;
        int m_data[0x1e];
    };
    std::map<int, ValueStatisticData>::iterator it = m_value.find(*(int*)((char*)pkt + 10));
    if (it != m_value.end())
    {
        for (int i = 0; i < 0x1e; i++)
        {
            it->second.m_data[i] += ((Wire*)pkt)->m_data[i];
        }
    }
    else
    {
        ValueStatisticData v;
        for (int i = 0; i < 0x1e; i++)
        {
            v.m_data[i] = ((Wire*)pkt)->m_data[i];
        }
        m_value.insert(std::make_pair(*(int*)((char*)pkt + 10), v));
    }
}
```
