# _ZN16StatisticManager31SendDBPowerwarLoadingTimeReportEP14CServerHandler

`StatisticManager::SendDBPowerwarLoadingTimeReport(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8071c38` | `0x1e5` | `0x8071a06` | `0x22c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,127 +1,144 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0x176c,%esp
-lea    -0x1732(%ebp),%eax
+sub    $0x1744,%esp
+lea    -0x1736(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN40Packet_DBMW_Powerwar_Loading_Time_ReportC1Ev>
-movl   $0x0,-0x1c(%ebp)
+movl   $0x0,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x188,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager31SendDBPowerwarLoadingTimeReportEP14CServerHandler+0x1ca>
+je     <T> <_ZN16StatisticManager31SendDBPowerwarLoadingTimeReportEP14CServerHandler+0x227>
+mov    0x8(%ebp),%eax
+lea    0x188(%eax),%edx
+lea    -0x28(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
+sub    $0x4,%esp
+jmp    <T> <_ZN16StatisticManager31SendDBPowerwarLoadingTimeReportEP14CServerHandler+0x17c>
+lea    -0x1736(%ebp),%ecx
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+add    $0xe,%eax
+lea    (%ecx,%eax,1),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%ebx
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEptEv>
+mov    (%eax),%eax
+mov    %eax,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0x4(%eax),%ebx
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEptEv>
+movzwl 0x4(%eax),%eax
+mov    %ax,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0x6(%eax),%ebx
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEptEv>
+movzbl 0x8(%eax),%eax
+mov    %al,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0x8(%eax),%ebx
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEptEv>
+movzwl 0xa(%eax),%eax
+mov    %ax,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0xa(%eax),%ebx
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEptEv>
+movzwl 0xc(%eax),%eax
+mov    %ax,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0xc(%eax),%ebx
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEptEv>
+movzwl 0xe(%eax),%eax
+mov    %ax,(%ebx)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x63,-0x10(%ebp)
+jle    <T> <_ZN16StatisticManager31SendDBPowerwarLoadingTimeReportEP14CServerHandler+0x171>
+lea    -0x1736(%ebp),%eax
+add    $0xa,%eax
+movl   $0x64,(%eax)
+lea    -0x1736(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+movl   $0x3cf,0x8(%esp)
+movl   $&_ZZN16StatisticManager31SendDBPowerwarLoadingTimeReportEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x10(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"PowerwarLoading DB Sent %d",0x8(%esp)
+movl   $"./log/statistic",0x4(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x0,-0x10(%ebp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x188(%eax),%edx
 lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZNSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
+call   <T> <_ZNSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager31SendDBPowerwarLoadingTimeReportEP14CServerHandler+0x171>
 lea    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEptEv>
-movzwl 0xe(%eax),%eax
-movzwl %ax,%eax
-mov    %eax,-0x1740(%ebp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEptEv>
-movzwl 0xc(%eax),%eax
-movzwl %ax,%eax
-mov    %eax,-0x173c(%ebp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEptEv>
-movzwl 0xa(%eax),%eax
-movzwl %ax,%edi
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEptEv>
-movzbl 0x8(%eax),%eax
-movzbl %al,%esi
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEptEv>
-movzwl 0x4(%eax),%eax
-movzwl %ax,%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEptEv>
-mov    (%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ecx
-mov    -0x1c(%ebp),%eax
-lea    -0x1732(%ebp),%edx
-shl    $0x8,%eax
-lea    (%edx,%eax,1),%eax
-add    $0xe,%eax
-mov    -0x1740(%ebp),%edx
-mov    %edx,0x20(%esp)
-mov    -0x173c(%ebp),%edx
-mov    %edx,0x1c(%esp)
-mov    %edi,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %ecx,0xc(%esp)
-movl   $"inSert into powerwar_loading (m_id,occ_time,round,player,my_loading,other_loading,vs_loading) values (%s,now(),%d,%d,%d,%d,%d)",0x8(%esp)
-movl   $0x100,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <snprintf>
-addl   $0x1,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-cmp    $0x16,%eax
-seta   %al
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN16StatisticManager31SendDBPowerwarLoadingTimeReportEP14CServerHandler+0x166>
-movl   $0x17,-0x1728(%ebp)
-lea    -0x1732(%ebp),%eax
+jne    <T> <_ZN16StatisticManager31SendDBPowerwarLoadingTimeReportEP14CServerHandler+0x5a>
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN16StatisticManager31SendDBPowerwarLoadingTimeReportEP14CServerHandler+0x217>
+lea    -0x1736(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x1736(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-movl   $0x0,-0x1c(%ebp)
-lea    -0x24(%ebp),%eax
+movl   $0x3d9,0x8(%esp)
+movl   $&_ZZN16StatisticManager31SendDBPowerwarLoadingTimeReportEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEppEv>
-mov    0x8(%ebp),%eax
-lea    0x188(%eax),%edx
-lea    -0x20(%ebp),%eax
-mov    %edx,0x4(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x10(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"PowerwarLoading DB Sent %d",0x8(%esp)
+movl   $"./log/statistic",0x4(%esp)
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
-sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataEEneERKS5_>
-test   %al,%al
-jne    <T> <_ZN16StatisticManager31SendDBPowerwarLoadingTimeReportEP14CServerHandler+0x5c>
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN16StatisticManager31SendDBPowerwarLoadingTimeReportEP14CServerHandler+0x1ca>
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x1728(%ebp)
-lea    -0x1732(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 add    $0x188,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE5clearEv>
-lea    -0xc(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+mov    -0x4(%ebp),%ebx
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBPowerwarLoadingTimeReport(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager31SendDBPowerwarLoadingTimeReportEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  Packet_DBMW_Powerwar_Loading_Time_Report local_1736 [10];
  uint local_172c;
  char acStack_1728 [5888];
  map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
  local_28 [4];
  map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
  local_24 [4];
  uint local_20;
  
  Packet_DBMW_Powerwar_Loading_Time_Report::Packet_DBMW_Powerwar_Loading_Time_Report(local_1736);
  local_20 = 0;
  cVar6 = std::
          map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
          ::empty((map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
                   *)(this + 0x188));
  if (cVar6 != '\x01') {
    std::
    map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
      ::end(local_24);
      cVar6 = std::
              _Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
              ::operator!=((_Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
                            *)local_28,(_Rb_tree_iterator *)local_24);
      if (cVar6 == '\0') break;
      iVar7 = std::
              _Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
              ::operator->((_Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
                            *)local_28);
      uVar2 = *(ushort *)(iVar7 + 0xe);
      iVar7 = std::
              _Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
              ::operator->((_Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
                            *)local_28);
      uVar3 = *(ushort *)(iVar7 + 0xc);
      iVar7 = std::
              _Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
              ::operator->((_Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
                            *)local_28);
      uVar4 = *(ushort *)(iVar7 + 10);
      iVar7 = std::
              _Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
              ::operator->((_Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
                            *)local_28);
      bVar1 = *(byte *)(iVar7 + 8);
      iVar7 = std::
              _Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
              ::operator->((_Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
                            *)local_28);
      uVar5 = *(ushort *)(iVar7 + 4);
      puVar8 = (uint *)std::
                       _Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
                       ::operator->((_Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
                                     *)local_28);
      uVar9 = NumberToString(*puVar8,0);
      snprintf(acStack_1728 + local_20 * 0x100,0x100,
               "inSert into powerwar_loading (m_id,occ_time,round,player,my_loading,other_loading,vs_loading) values (%s,now(),%d,%d,%d,%d,%d)"
               ,uVar9,(uint)uVar5,(uint)bVar1,(uint)uVar4,(uint)uVar3,(uint)uVar2);
      local_20 = local_20 + 1;
      if (0x16 < local_20) {
        local_172c = 0x17;
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_1736);
        local_20 = 0;
      }
      std::_Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
      ::operator++((_Rb_tree_iterator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>
                    *)local_28);
    }
    if (local_20 != 0) {
      local_172c = local_20;
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_1736);
    }
  }
  std::
  map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
  ::clear((map<STPowerwarFightLoadingKey,STPowerwarFightLoadingData,std::less<STPowerwarFightLoadingKey>,std::allocator<std::pair<STPowerwarFightLoadingKey_const,STPowerwarFightLoadingData>>>
           *)(this + 0x188));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 944 行）：

```cpp
void StatisticManager::SendDBPowerwarLoadingTimeReport(CServerHandler* handler)
{
    Packet_DBMW_Powerwar_Loading_Time_Report pkt;
    int idx = 0;
    if (!m_pwLoading.empty())
    {
        for (std::map<STPowerwarFightLoadingKey, STPowerwarFightLoadingData>::iterator it =
                 m_pwLoading.begin(); it != m_pwLoading.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0x14;
            *(unsigned int*)(slot + 0) = it->first.m_field0;
            *(unsigned short*)(slot + 4) = it->first.m_field4;
            slot[6] = it->second.m_field0;
            *(unsigned short*)(slot + 8) = it->second.m_field2;
            *(unsigned short*)(slot + 10) = it->second.m_field4;
            *(unsigned short*)(slot + 12) = it->second.m_field6;
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                DNF_LOG_SCOPE_LINE(0x3cf, "./log/statistic", "PowerwarLoading DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            DNF_LOG_SCOPE_LINE(0x3d9, "./log/statistic", "PowerwarLoading DB Sent %d", idx);
        }
        m_pwLoading.clear();
    }
}
```
