# _ZN16StatisticManager27AddFatigueBatteryStatisticsEP38Packet_Fatigue_Battery_Money_Statistic

`StatisticManager::AddFatigueBatteryStatistics(Packet_Fatigue_Battery_Money_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8072566` | `0x10c` | `0x80725ec` | `0x117` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,80 +1,84 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x48,%esp
-lea    -0x34(%ebp),%eax
+sub    $0x58,%esp
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16STFatigueBatteryC1Ev>
 mov    0xc(%ebp),%eax
 mov    0xb(%eax),%eax
-mov    %eax,-0x34(%ebp)
+mov    %eax,-0x38(%ebp)
 mov    0xc(%ebp),%eax
 movzwl 0xf(%eax),%eax
 movzwl %ax,%eax
-mov    %eax,-0x30(%ebp)
+mov    %eax,-0x34(%ebp)
 mov    0xc(%ebp),%eax
-lea    0xa(%eax),%ecx
+add    $0xa,%eax
+movzbl (%eax),%eax
+mov    %al,-0x2d(%ebp)
 mov    0x8(%ebp),%eax
-lea    0x1b8(%eax),%edx
-lea    -0x38(%ebp),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
+lea    0x1b8(%eax),%ecx
+lea    -0x3c(%ebp),%eax
+lea    -0x2d(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIh16STFatigueBatterySt4lessIhESaISt4pairIKhS0_EEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x1b8(%eax),%edx
 lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIh16STFatigueBatterySt4lessIhESaISt4pairIKhS0_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEneERKS4_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEeqERKS4_>
 test   %al,%al
-je     <T> <_ZN16StatisticManager27AddFatigueBatteryStatisticsEP38Packet_Fatigue_Battery_Money_Statistic+0xb7>
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEptEv>
-mov    0x4(%eax),%ecx
-mov    0xc(%ebp),%edx
-mov    0xb(%edx),%edx
-lea    (%ecx,%edx,1),%edx
-mov    %edx,0x4(%eax)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEptEv>
-mov    0x8(%eax),%ecx
-mov    0xc(%ebp),%edx
-movzwl 0xf(%edx),%edx
-movzwl %dx,%edx
-lea    (%ecx,%edx,1),%edx
-mov    %edx,0x8(%eax)
-jmp    <T> <_ZN16StatisticManager27AddFatigueBatteryStatisticsEP38Packet_Fatigue_Battery_Money_Statistic+0x10a>
+je     <T> <_ZN16StatisticManager27AddFatigueBatteryStatisticsEP38Packet_Fatigue_Battery_Money_Statistic+0xdb>
 mov    0xc(%ebp),%eax
 lea    0xa(%eax),%ecx
 lea    -0x14(%ebp),%eax
-lea    -0x34(%ebp),%edx
+lea    -0x38(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIRhR16STFatigueBatteryESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
+call   <T> <_ZSt9make_pairIRcR16STFatigueBatteryESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKh16STFatigueBatteryEC1IhS1_EEOS_IT_T0_E>
+call   <T> <_ZNSt4pairIKh16STFatigueBatteryEC1IcS1_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x1b8(%eax),%ecx
 lea    -0x28(%ebp),%eax
 lea    -0x20(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIh16STFatigueBatterySt4lessIhESaISt4pairIKhS0_EEE6insertERKS5_>
 sub    $0x4,%esp
+jmp    <T> <_ZN16StatisticManager27AddFatigueBatteryStatisticsEP38Packet_Fatigue_Battery_Money_Statistic+0x115>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEptEv>
+mov    0x4(%eax),%ecx
+mov    0xc(%ebp),%edx
+mov    0xb(%edx),%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,0x4(%eax)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEptEv>
+mov    0x8(%eax),%edx
+mov    %edx,%ecx
+mov    0xc(%ebp),%edx
+movzwl 0xf(%edx),%edx
+movzwl %dx,%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,0x8(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddFatigueBatteryStatistics(Packet_Fatigue_Battery_Money_Statistic*) */

void __thiscall
StatisticManager::
_ZN16StatisticManager27AddFatigueBatteryStatisticsEP38Packet_Fatigue_Battery_Money_Statistic
          (StatisticManager *this,Packet_Fatigue_Battery_Money_Statistic *param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>> local_3c [4];
  undefined4 local_38;
  uint local_34;
  map<unsigned_char,STFatigueBattery,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,STFatigueBattery>>>
  local_30 [4];
  pair local_2c [8];
  pair<unsigned_char_const,STFatigueBattery> local_24 [12];
  uchar local_18 [20];
  
  STFatigueBattery::STFatigueBattery((STFatigueBattery *)&local_38);
  local_38 = *(undefined4 *)(param_1 + 0xb);
  local_34 = (uint)*(ushort *)(param_1 + 0xf);
  std::
  map<unsigned_char,STFatigueBattery,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,STFatigueBattery>>>
  ::find((uchar *)local_3c);
  std::
  map<unsigned_char,STFatigueBattery,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,STFatigueBattery>>>
  ::end(local_30);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>>::operator!=
                    (local_3c,(_Rb_tree_iterator *)local_30);
  if (cVar1 == '\0') {
    std::make_pair<unsigned_char&,STFatigueBattery&>(local_18,(STFatigueBattery *)(param_1 + 10));
    std::pair<unsigned_char_const,STFatigueBattery>::pair<unsigned_char,STFatigueBattery>
              (local_24,local_18);
    std::
    map<unsigned_char,STFatigueBattery,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,STFatigueBattery>>>
    ::insert(local_2c);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>>::operator->
                      (local_3c);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + *(int *)(param_1 + 0xb);
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>>::operator->
                      (local_3c);
    *(uint *)(iVar2 + 8) = *(int *)(iVar2 + 8) + (uint)*(ushort *)(param_1 + 0xf);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1146 行）：

```cpp
void StatisticManager::AddFatigueBatteryStatistics(Packet_Fatigue_Battery_Money_Statistic* pkt)
{
    struct __attribute__((packed)) Wire
    {
        char m_hdr[0xa];
        char m_f0a;
        int m_f0b;
        unsigned short m_f0f;
    };
    STFatigueBattery value;
    value.m_field0 = ((Wire*)pkt)->m_f0b;
    value.m_field4 = (unsigned int)((Wire*)pkt)->m_f0f;
    std::map<unsigned char, STFatigueBattery>::iterator it = m_fatigue.find(*(char*)((char*)pkt + 10));
    if (it == m_fatigue.end())
    {
        m_fatigue.insert(std::make_pair(*(char*)((char*)pkt + 10), value));
    }
    else
    {
        it->second.m_field0 += ((Wire*)pkt)->m_f0b;
        it->second.m_field4 += (unsigned int)((Wire*)pkt)->m_f0f;
    }
}
```
