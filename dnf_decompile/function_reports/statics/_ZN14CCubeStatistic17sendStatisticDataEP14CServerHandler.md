# _ZN14CCubeStatistic17sendStatisticDataEP14CServerHandler

`CCubeStatistic::sendStatisticData(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806c588` | `0x257` | `0x804aed6` | `0x257` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,166 +1,166 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x1824,%esp
 lea    -0x1810(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26Packet_DBMW_Cube_StatisticC1Ev>
 movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI18STCubeStatisticKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14CCubeStatistic17sendStatisticDataEP14CServerHandler+0x252>
 mov    0x8(%ebp),%edx
 lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STCubeStatisticKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN14CCubeStatistic17sendStatisticDataEP14CServerHandler+0x1a8>
+jmp    <T> <_ZN14CCubeStatistic17sendStatisticDataEP14CServerHandler+0x1a7>
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEptEv>
 mov    (%eax),%eax
 mov    %eax,%edx
 mov    %ebx,%eax
 add    %eax,%eax
 add    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x1808,%eax
 mov    %dx,0xe(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,%edx
 mov    %ebx,%eax
 add    %eax,%eax
 add    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x1808,%eax
 mov    %edx,0x12(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEptEv>
 mov    0x8(%eax),%eax
 mov    %eax,%edx
 mov    %ebx,%eax
 add    %eax,%eax
 add    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x1808,%eax
 mov    %dx,0x10(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEptEv>
 movzbl 0xc(%eax),%edx
 mov    %ebx,%eax
 add    %eax,%eax
 add    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x1808,%eax
 mov    %dl,0x1a(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEptEv>
 mov    0x10(%eax),%eax
 mov    %eax,%edx
 mov    %ebx,%eax
 add    %eax,%eax
 add    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x1808,%eax
 mov    %edx,0x16(%eax)
 addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x1d5,%eax
-jbe    <T> <_ZN14CCubeStatistic17sendStatisticDataEP14CServerHandler+0x19d>
+cmpl   $0x1d5,-0xc(%ebp)
+jbe    <T> <_ZN14CCubeStatistic17sendStatisticDataEP14CServerHandler+0x19c>
 movl   $0x1d6,-0x1806(%ebp)
 lea    -0x1810(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x0,-0xc(%ebp)
 movl   $0x40,0x8(%esp)
 movl   $&_ZZN14CCubeStatistic17sendStatisticDataEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0x1d6,0xc(%esp)
 movl   $"CCubeStatistic::sendStatisticData : (%d) 개 패킷 전송\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEppEv>
 mov    0x8(%ebp),%edx
 lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STCubeStatisticKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE3endEv>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STCubeStatisticKeyiEEneERKS4_>
 test   %al,%al
 jne    <T> <_ZN14CCubeStatistic17sendStatisticDataEP14CServerHandler+0x4f>
-cmpl   $0x0,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+test   %eax,%eax
 jle    <T> <_ZN14CCubeStatistic17sendStatisticDataEP14CServerHandler+0x252>
 mov    -0xc(%ebp),%eax
 mov    %eax,-0x1806(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    $0xe,%eax
 mov    %ax,-0x180e(%ebp)
 lea    -0x1810(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x49,0x8(%esp)
 movl   $&_ZZN14CCubeStatistic17sendStatisticDataEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CCubeStatistic::sendStatisticData : (%d) 개 패킷 전송\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CCubeStatistic::sendStatisticData(CServerHandler*) */

void __thiscall
CCubeStatistic::_ZN14CCubeStatistic17sendStatisticDataEP14CServerHandler
          (CCubeStatistic *this,CServerHandler *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  Packet_DBMW_Cube_Statistic local_1814 [2];
  short local_1812;
  uint local_180a;
  undefined2 auStack_1806 [2];
  undefined4 auStack_1802 [2];
  undefined1 auStack_17fa [6098];
  map<STCubeStatisticKey,int,std::less<STCubeStatisticKey>,std::allocator<std::pair<STCubeStatisticKey_const,int>>>
  local_28 [4];
  map<STCubeStatisticKey,int,std::less<STCubeStatisticKey>,std::allocator<std::pair<STCubeStatisticKey_const,int>>>
  local_24 [4];
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  uint local_10;
  
  Packet_DBMW_Cube_Statistic::Packet_DBMW_Cube_Statistic(local_1814);
  local_10 = 0;
  cVar3 = std::
          map<STCubeStatisticKey,int,std::less<STCubeStatisticKey>,std::allocator<std::pair<STCubeStatisticKey_const,int>>>
          ::empty((map<STCubeStatisticKey,int,std::less<STCubeStatisticKey>,std::allocator<std::pair<STCubeStatisticKey_const,int>>>
                   *)this);
  if (cVar3 != '\x01') {
    std::
    map<STCubeStatisticKey,int,std::less<STCubeStatisticKey>,std::allocator<std::pair<STCubeStatisticKey_const,int>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<STCubeStatisticKey,int,std::less<STCubeStatisticKey>,std::allocator<std::pair<STCubeStatisticKey_const,int>>>
      ::end(local_24);
      cVar3 = std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_28,
                         (_Rb_tree_iterator *)local_24);
      uVar2 = local_10;
      if (cVar3 == '\0') break;
      puVar4 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_28);
      uVar1 = local_10;
      *(short *)((int)auStack_1806 + uVar2 * 0xd) = (short)*puVar4;
      iVar5 = std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_28);
      uVar2 = local_10;
      *(undefined4 *)((int)auStack_1806 + uVar1 * 0xd + 4) = *(undefined4 *)(iVar5 + 4);
      iVar5 = std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_28);
      uVar1 = local_10;
      *(short *)((int)auStack_1806 + uVar2 * 0xd + 2) = (short)*(undefined4 *)(iVar5 + 8);
      iVar5 = std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_28);
      uVar2 = local_10;
      auStack_17fa[uVar1 * 0xd] = *(undefined1 *)(iVar5 + 0xc);
      iVar5 = std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_28);
      *(undefined4 *)((int)auStack_1802 + uVar2 * 0xd + 4) = *(undefined4 *)(iVar5 + 0x10);
      local_10 = local_10 + 1;
      if (0x1d5 < local_10) {
        local_180a = 0x1d6;
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_1814);
        local_10 = 0;
        CMyFileLog::CMyFileLog(local_20,"sendStatisticData",0x40);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_20,"./log/statistic",&DAT_080f18e0,0x1d6);
      }
      std::_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<STCubeStatisticKey_const,int>> *)local_28);
    }
    if (0 < (int)local_10) {
      local_180a = local_10;
      local_1812 = (short)local_10 * 0xd + 0xe;
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_1814);
      CMyFileLog::CMyFileLog(local_18,"sendStatisticData",0x49);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/statistic",&DAT_080f18e0,local_10);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/CubeStatistics.cpp](source/DNFServer/GameServer/Statics/CubeStatistics.cpp)（约第 41 行）：

```cpp
void CCubeStatistic::sendStatisticData(CServerHandler* handler)
{
    Packet_DBMW_Cube_Statistic pkt;
    unsigned int count = 0;
    if (!m_data.empty())
    {
        for (std::map<STCubeStatisticKey, int>::iterator it = m_data.begin();
             it != m_data.end(); ++it)
        {
            pkt.m_items[count].m_field0 = it->first.m_field0;
            pkt.m_items[count].m_field4 = (int)it->first.m_field4;
            pkt.m_items[count].m_field8 = it->first.m_field8;
            pkt.m_items[count].m_fieldc = it->first.m_fieldc;
            pkt.m_items[count].m_value = (int)it->second;
            count = count + 1;
            if (0x1d5U < count)
            {
                pkt.m_count = 0x1d6;
                handler->SendToDB((PacketHeader*)&pkt);
                count = 0;
                DNF_LOG_SCOPE_LINE(0x40, "./log/statistic", "CCubeStatistic::sendStatisticData : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb\n", 0x1d6);
            }
        }
        if ((int)count > 0)
        {
            pkt.m_count = count;
            pkt.packetSize = (unsigned short)(count * 0xd + 0xe);
            handler->SendToDB((PacketHeader*)&pkt);
            DNF_LOG_SCOPE_LINE(0x49, "./log/statistic", "CCubeStatistic::sendStatisticData : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb\n", count);
        }
    }
}
```
