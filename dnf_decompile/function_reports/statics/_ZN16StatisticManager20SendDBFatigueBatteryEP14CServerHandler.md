# _ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler

`StatisticManager::SendDBFatigueBattery(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x807268a` | `0xf6` | `0x80727d2` | `0x102` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,68 +1,74 @@
 push   %ebp
 mov    %esp,%ebp
+push   %esi
 push   %ebx
-sub    $0x354,%esp
+sub    $0x350,%esp
 mov    0x8(%ebp),%eax
 add    $0x1b8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIh16STFatigueBatterySt4lessIhESaISt4pairIKhS0_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler+0xf0>
+jne    <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler+0xf7>
 lea    -0x342(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN43Packet_DBMW_Fatigue_Battery_Money_StatisticC1Ev>
 mov    0x8(%ebp),%eax
 lea    0x1b8(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIh16STFatigueBatterySt4lessIhESaISt4pairIKhS0_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler+0xa4>
+jmp    <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler+0xab>
+lea    -0x342(%ebp),%ebx
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEptEv>
 movzbl (%eax),%eax
-movzbl %al,%ebx
+movzbl %al,%esi
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0x338(%ebp,%ebx,8)
+mov    %eax,0xa(%ebx,%esi,8)
+lea    -0x342(%ebp),%ebx
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEptEv>
 movzbl (%eax),%eax
-movzbl %al,%ebx
+movzbl %al,%esi
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEptEv>
 mov    0x8(%eax),%eax
-mov    %eax,-0x334(%ebp,%ebx,8)
+mov    %eax,0xe(%ebx,%esi,8)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x1b8(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIh16STFatigueBatterySt4lessIhESaISt4pairIKhS0_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKh16STFatigueBatteryEEneERKS4_>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler+0x4d>
+jne    <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler+0x4e>
 lea    -0x342(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler+0xf1>
+jmp    <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler+0xf8>
 nop
-mov    -0x4(%ebp),%ebx
-leave
+lea    -0x8(%ebp),%esp
+add    $0x0,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
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
    if (m_fatigue.empty())
    {
        return;
    }
    Packet_DBMW_Fatigue_Battery_Money_Statistic pkt;
    struct FatigueBatteryWire
    {
        int m_field0;
        int m_field4;
    };
    struct __attribute__((packed)) Wire
    {
        char m_hdr[0xa];
        FatigueBatteryWire m_items[0x65];  // POD 镜像，packed 生效：m_items@+0xa，元素 8 字节
    };
    for (std::map<unsigned char, STFatigueBattery>::iterator it = m_fatigue.begin();
         it != m_fatigue.end(); ++it)
    {
        ((Wire*)&pkt)->m_items[(unsigned int)it->first].m_field0 = it->second.m_field0;
        ((Wire*)&pkt)->m_items[(unsigned int)it->first].m_field4 = it->second.m_field4;
    }
    handler->SendToDB((PacketHeader*)&pkt);
}
```
