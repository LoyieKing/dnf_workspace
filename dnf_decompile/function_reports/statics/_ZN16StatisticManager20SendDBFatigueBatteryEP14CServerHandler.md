# _ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler

`StatisticManager::SendDBFatigueBattery(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x807268a` | `0xf6` | `0x80727e4` | `0x102` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,68 +1,73 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x354,%esp
 mov    0x8(%ebp),%eax
 add    $0x1b8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIh16STFatigueBatterySt4lessIhESaISt4pairIKhS0_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler+0xf0>
-lea    -0x342(%ebp),%eax
+je     <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler+0xfd>
+lea    -0x346(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN43Packet_DBMW_Fatigue_Battery_Money_StatisticC1Ev>
+mov    0x8(%ebp),%eax
+lea    0x1b8(%eax),%edx
+lea    -0x14(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIh16STFatigueBatterySt4lessIhESaISt4pairIKhS0_EEE5beginEv>
+sub    $0x4,%esp
+jmp    <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler+0xb3>
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEptEv>
+movzbl (%eax),%eax
+movzbl %al,%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x346(%ebp),%eax
+mov    -0xc(%ebp),%edx
+shl    $0x3,%edx
+add    $0xa,%edx
+lea    (%eax,%edx,1),%ebx
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEptEv>
+mov    0x4(%eax),%eax
+mov    %eax,(%ebx)
+lea    -0x346(%ebp),%eax
+mov    -0xc(%ebp),%edx
+shl    $0x3,%edx
+add    $0xe,%edx
+lea    (%eax,%edx,1),%ebx
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEptEv>
+mov    0x8(%eax),%eax
+mov    %eax,(%ebx)
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x1b8(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIh16STFatigueBatterySt4lessIhESaISt4pairIKhS0_EEE5beginEv>
-sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler+0xa4>
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEptEv>
-movzbl (%eax),%eax
-movzbl %al,%ebx
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEptEv>
-mov    0x4(%eax),%eax
-mov    %eax,-0x338(%ebp,%ebx,8)
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEptEv>
-movzbl (%eax),%eax
-movzbl %al,%ebx
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEptEv>
-mov    0x8(%eax),%eax
-mov    %eax,-0x334(%ebp,%ebx,8)
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEppEv>
-mov    0x8(%ebp),%eax
-lea    0x1b8(%eax),%edx
-lea    -0xc(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIh16STFatigueBatterySt4lessIhESaISt4pairIKhS0_EEE3endEv>
 sub    $0x4,%esp
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEneERKS4_>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler+0x4d>
-lea    -0x342(%ebp),%eax
+jne    <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler+0x50>
+lea    -0x346(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler+0xf1>
-nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBFatigueBattery(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  Packet_DBMW_Fatigue_Battery_Money_Statistic local_346 [10];
  undefined4 auStack_33c [202];
  map<unsigned_char,STFatigueBattery,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,STFatigueBattery>>>
  local_14 [4];
  map<unsigned_char,STFatigueBattery,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,STFatigueBattery>>>
  local_10 [8];
  
  cVar2 = std::
          map<unsigned_char,STFatigueBattery,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,STFatigueBattery>>>
          ::empty((map<unsigned_char,STFatigueBattery,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,STFatigueBattery>>>
                   *)(this + 0x1b8));
  if (cVar2 == '\0') {
    Packet_DBMW_Fatigue_Battery_Money_Statistic::Packet_DBMW_Fatigue_Battery_Money_Statistic
              (local_346);
    std::
    map<unsigned_char,STFatigueBattery,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,STFatigueBattery>>>
    ::begin(local_14);
    while( true ) {
      std::
      map<unsigned_char,STFatigueBattery,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,STFatigueBattery>>>
      ::end(local_10);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>> *)
                         local_14,(_Rb_tree_iterator *)local_10);
      if (cVar2 == '\0') break;
      pbVar3 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>>::
                       operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>>
                                   *)local_14);
      bVar1 = *pbVar3;
      iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>> *)
                         local_14);
      auStack_33c[(uint)bVar1 * 2] = *(undefined4 *)(iVar4 + 4);
      pbVar3 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>>::
                       operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>>
                                   *)local_14);
      bVar1 = *pbVar3;
      iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>> *)
                         local_14);
      auStack_33c[(uint)bVar1 * 2 + 1] = *(undefined4 *)(iVar4 + 8);
      std::_Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_char_const,STFatigueBattery>> *)local_14);
    }
    CServerHandler::SendToDB(param_1,(PacketHeader *)local_346);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1169 行）：

```cpp
void StatisticManager::SendDBFatigueBattery(CServerHandler* handler)
{
    if (!m_fatigue.empty())
    {
        Packet_DBMW_Fatigue_Battery_Money_Statistic pkt;
        for (std::map<unsigned char, STFatigueBattery>::iterator it = m_fatigue.begin();
             it != m_fatigue.end(); ++it)
        {
            unsigned int idx = (unsigned int)it->first;
            *(unsigned int*)((char*)&pkt + 0xa + idx * 8) = it->second.m_field0;
            *(unsigned int*)((char*)&pkt + 0xa + idx * 8 + 4) = it->second.m_field4;
        }
        handler->SendToDB((PacketHeader*)&pkt);
    }
}
```
