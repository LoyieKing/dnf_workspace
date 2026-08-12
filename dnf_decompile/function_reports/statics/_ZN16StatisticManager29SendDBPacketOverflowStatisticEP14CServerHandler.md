# _ZN16StatisticManager29SendDBPacketOverflowStatisticEP14CServerHandler

`StatisticManager::SendDBPacketOverflowStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80703c6` | `0x11a` | `0x8070236` | `0x12d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,74 +1,82 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x48,%esp
+push   %ebx
+sub    $0x44,%esp
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37Packet_DBMW_Packet_Overflow_StatisticC1Ev>
 movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 add    $0xc8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI19STPacketOverflowKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager29SendDBPacketOverflowStatisticEP14CServerHandler+0x118>
+je     <T> <_ZN16StatisticManager29SendDBPacketOverflowStatisticEP14CServerHandler+0x128>
 mov    0x8(%ebp),%eax
 lea    0xc8(%eax),%edx
 lea    -0x30(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPacketOverflowKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager29SendDBPacketOverflowStatisticEP14CServerHandler+0xa6>
+jmp    <T> <_ZN16StatisticManager29SendDBPacketOverflowStatisticEP14CServerHandler+0xb6>
+lea    -0x29(%ebp),%eax
+lea    0xa(%eax),%ebx
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPacketOverflowKeyiEEptEv>
 movzbl (%eax),%eax
-mov    %al,-0x1f(%ebp)
+mov    %al,(%ebx)
+lea    -0x29(%ebp),%ebx
+add    $0xb,%ebx
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPacketOverflowKeyiEEptEv>
 movzwl 0x2(%eax),%eax
-mov    %ax,-0x1e(%ebp)
+mov    %ax,(%ebx)
+lea    -0x29(%ebp),%eax
+lea    0xd(%eax),%ebx
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPacketOverflowKeyiEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0x1c(%ebp)
+mov    %eax,(%ebx)
 lea    -0x29(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 addl   $0x1,-0xc(%ebp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK19STPacketOverflowKeyiEEppEv>
 mov    0x8(%ebp),%eax
 lea    0xc8(%eax),%edx
 lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPacketOverflowKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE3endEv>
 sub    $0x4,%esp
 lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPacketOverflowKeyiEEneERKS4_>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager29SendDBPacketOverflowStatisticEP14CServerHandler+0x50>
+jne    <T> <_ZN16StatisticManager29SendDBPacketOverflowStatisticEP14CServerHandler+0x51>
 movl   $0x297,0x8(%esp)
 movl   $&_ZZN16StatisticManager29SendDBPacketOverflowStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_Packet_Overflow_Statistic : (%d) 개 패킷 전송",0x8(%esp)
 movl   $"./log/Statistic",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBPacketOverflowStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager29SendDBPacketOverflowStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
  local_34 [7];
  Packet_DBMW_Packet_Overflow_Statistic local_2d [10];
  undefined1 local_23;
  undefined2 local_22;
  undefined4 local_20;
  map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
  local_1c [4];
  CMyFileLog local_18 [8];
  int local_10;
  
  Packet_DBMW_Packet_Overflow_Statistic::Packet_DBMW_Packet_Overflow_Statistic(local_2d);
  local_10 = 0;
  cVar1 = std::
          map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
          ::empty((map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
                   *)(this + 200));
  if (cVar1 != '\x01') {
    std::
    map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
    ::begin(local_34);
    while( true ) {
      std::
      map<STPacketOverflowKey,int,std::less<STPacketOverflowKey>,std::allocator<std::pair<STPacketOverflowKey_const,int>>>
      ::end(local_1c);
      cVar1 = std::_Rb_tree_iterator<std::pair<STPacketOverflowKey_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<STPacketOverflowKey_const,int>> *)local_34,
                         (_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      puVar2 = (undefined1 *)
               std::_Rb_tree_iterator<std::pair<STPacketOverflowKey_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<STPacketOverflowKey_const,int>> *)local_34);
      local_23 = *puVar2;
      iVar3 = std::_Rb_tree_iterator<std::pair<STPacketOverflowKey_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<STPacketOverflowKey_const,int>> *)local_34);
      local_22 = *(undefined2 *)(iVar3 + 2);
      iVar3 = std::_Rb_tree_iterator<std::pair<STPacketOverflowKey_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<STPacketOverflowKey_const,int>> *)local_34);
      local_20 = *(undefined4 *)(iVar3 + 4);
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_2d);
      local_10 = local_10 + 1;
      std::_Rb_tree_iterator<std::pair<STPacketOverflowKey_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<STPacketOverflowKey_const,int>> *)local_34);
    }
    CMyFileLog::CMyFileLog(local_18,"SendDBPacketOverflowStatistic",0x297);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/Statistic",&DAT_080f242c,local_10);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 573 行）：

```cpp
void StatisticManager::SendDBPacketOverflowStatistic(CServerHandler* handler)
{
    Packet_DBMW_Packet_Overflow_Statistic pkt;
    int count = 0;
    if (!m_packetOverflow.empty())
    {
        for (std::map<STPacketOverflowKey, int>::iterator it = m_packetOverflow.begin();
             it != m_packetOverflow.end(); ++it)
        {
            *(char*)((char*)&pkt + 0xa) = it->first.m_field0;
            *(unsigned short*)((char*)&pkt + 0xb) = it->first.m_field2;
            *(unsigned int*)((char*)&pkt + 0xd) = it->second;
            handler->SendToDB((PacketHeader*)&pkt);
            count++;
        }
        DNF_LOG_SCOPE_LINE(0x297, "./log/Statistic", "Packet_DBMW_Packet_Overflow_Statistic : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb", count);
    }
}
```
