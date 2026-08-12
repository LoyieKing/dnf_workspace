# _ZN16StatisticManager23SendDBPowerwarLagReportEP14CServerHandler

`StatisticManager::SendDBPowerwarLagReport(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8071e1e` | `0x1de` | `0x8071c32` | `0x213` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,126 +1,138 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x1770,%esp
-lea    -0x1732(%ebp),%eax
+sub    $0x1744,%esp
+lea    -0x1736(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_DBMW_Powerwar_Lag_ReportC1Ev>
-movl   $0x0,-0x1c(%ebp)
+movl   $0x0,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1a0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager23SendDBPowerwarLagReportEP14CServerHandler+0x1c4>
+je     <T> <_ZN16StatisticManager23SendDBPowerwarLagReportEP14CServerHandler+0x20e>
+mov    0x8(%ebp),%eax
+lea    0x1a0(%eax),%edx
+lea    -0x28(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
+sub    $0x4,%esp
+jmp    <T> <_ZN16StatisticManager23SendDBPowerwarLagReportEP14CServerHandler+0x163>
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
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEptEv>
+mov    (%eax),%eax
+mov    %eax,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0x4(%eax),%ebx
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEptEv>
+movzwl 0x4(%eax),%eax
+mov    %ax,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0x8(%eax),%ebx
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEptEv>
+movzbl 0x8(%eax),%eax
+movzbl %al,%eax
+mov    %eax,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0xc(%eax),%ebx
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEptEv>
+mov    0xc(%eax),%eax
+mov    %eax,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0x10(%eax),%ebx
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEptEv>
+mov    0x10(%eax),%eax
+mov    %eax,(%ebx)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x63,-0x10(%ebp)
+jle    <T> <_ZN16StatisticManager23SendDBPowerwarLagReportEP14CServerHandler+0x158>
+lea    -0x1736(%ebp),%eax
+add    $0xa,%eax
+movl   $0x64,(%eax)
+lea    -0x1736(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+movl   $0x33b,0x8(%esp)
+movl   $&_ZZN16StatisticManager23SendDBPowerwarLagReportEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x10(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"PowerwarLag DB Sent %d",0x8(%esp)
+movl   $"./log/statistic",0x4(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x0,-0x10(%ebp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x1a0(%eax),%edx
 lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZNSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
+call   <T> <_ZNSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager23SendDBPowerwarLagReportEP14CServerHandler+0x16b>
 lea    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEptEv>
-add    $0xc,%eax
-mov    %eax,-0x18(%ebp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEptEv>
-add    $0x10,%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x18(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0xc(%ebp)
-flds   -0xc(%ebp)
-fstpl  -0x1748(%ebp)
-flds   -0x10(%ebp)
-fstpl  -0x1740(%ebp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEptEv>
-movzbl 0x8(%eax),%eax
-movzbl %al,%esi
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEptEv>
-movzwl 0x4(%eax),%eax
-movzwl %ax,%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEptEv>
-mov    (%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    -0x1c(%ebp),%ecx
-lea    -0x1732(%ebp),%edx
-shl    $0x8,%ecx
-add    %ecx,%edx
-add    $0xe,%edx
-fldl   -0x1748(%ebp)
-fstpl  0x20(%esp)
-fldl   -0x1740(%ebp)
-fstpl  0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %eax,0xc(%esp)
-movl   $"inSert into powerwar_lag (m_id,occ_time,round,player,lag_avg,lag_cnt) values (%s,now(),%d,%d,%.2f,%.2f)",0x8(%esp)
-movl   $0x100,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <snprintf>
-addl   $0x1,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-cmp    $0x16,%eax
-seta   %al
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN16StatisticManager23SendDBPowerwarLagReportEP14CServerHandler+0x160>
-movl   $0x17,-0x1728(%ebp)
-lea    -0x1732(%ebp),%eax
+jne    <T> <_ZN16StatisticManager23SendDBPowerwarLagReportEP14CServerHandler+0x5a>
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN16StatisticManager23SendDBPowerwarLagReportEP14CServerHandler+0x1fe>
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
+movl   $0x345,0x8(%esp)
+movl   $&_ZZN16StatisticManager23SendDBPowerwarLagReportEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEppEv>
-mov    0x8(%ebp),%eax
-lea    0x1a0(%eax),%edx
-lea    -0x20(%ebp),%eax
-mov    %edx,0x4(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x10(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"PowerwarLag DB Sent %d",0x8(%esp)
+movl   $"./log/statistic",0x4(%esp)
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
-sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataEEneERKS5_>
-test   %al,%al
-jne    <T> <_ZN16StatisticManager23SendDBPowerwarLagReportEP14CServerHandler+0x5b>
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN16StatisticManager23SendDBPowerwarLagReportEP14CServerHandler+0x1c4>
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x1728(%ebp)
-lea    -0x1732(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 add    $0x1a0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI21STPowerwarFightLagKey22STPowerwarFightLagDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE5clearEv>
-lea    -0x8(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+mov    -0x4(%ebp),%ebx
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBPowerwarLagReport(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager23SendDBPowerwarLagReportEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  Packet_DBMW_Powerwar_Lag_Report local_1736 [10];
  uint local_172c;
  char acStack_1728 [5888];
  map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
  local_28 [4];
  map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
  local_24 [4];
  uint local_20;
  float *local_1c;
  float *local_18;
  float local_14;
  float local_10;
  
  Packet_DBMW_Powerwar_Lag_Report::Packet_DBMW_Powerwar_Lag_Report(local_1736);
  local_20 = 0;
  cVar5 = std::
          map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
          ::empty((map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
                   *)(this + 0x1a0));
  if (cVar5 != '\x01') {
    std::
    map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
      ::end(local_24);
      cVar5 = std::_Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>
              ::operator!=((_Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>
                            *)local_28,(_Rb_tree_iterator *)local_24);
      if (cVar5 == '\0') break;
      iVar6 = std::_Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>
              ::operator->((_Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>
                            *)local_28);
      local_1c = (float *)(iVar6 + 0xc);
      iVar6 = std::_Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>
              ::operator->((_Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>
                            *)local_28);
      local_18 = (float *)(iVar6 + 0x10);
      local_14 = *local_1c;
      local_10 = *local_18;
      dVar1 = (double)local_10;
      dVar2 = (double)local_14;
      iVar6 = std::_Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>
              ::operator->((_Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>
                            *)local_28);
      bVar3 = *(byte *)(iVar6 + 8);
      iVar6 = std::_Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>
              ::operator->((_Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>
                            *)local_28);
      uVar4 = *(ushort *)(iVar6 + 4);
      puVar7 = (uint *)std::
                       _Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>
                       ::operator->((_Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>
                                     *)local_28);
      uVar8 = NumberToString(*puVar7,0);
      snprintf(acStack_1728 + local_20 * 0x100,0x100,
               "inSert into powerwar_lag (m_id,occ_time,round,player,lag_avg,lag_cnt) values (%s,now(),%d,%d,%.2f,%.2f)"
               ,uVar8,(uint)uVar4,(uint)bVar3,dVar2,dVar1);
      local_20 = local_20 + 1;
      if (0x16 < local_20) {
        local_172c = 0x17;
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_1736);
        local_20 = 0;
      }
      std::_Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>::
      operator++((_Rb_tree_iterator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>> *
                 )local_28);
    }
    if (local_20 != 0) {
      local_172c = local_20;
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_1736);
    }
  }
  std::
  map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
  ::clear((map<STPowerwarFightLagKey,STPowerwarFightLagData,std::less<STPowerwarFightLagKey>,std::allocator<std::pair<STPowerwarFightLagKey_const,STPowerwarFightLagData>>>
           *)(this + 0x1a0));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 978 行）：

```cpp
void StatisticManager::SendDBPowerwarLagReport(CServerHandler* handler)
{
    Packet_DBMW_Powerwar_Lag_Report pkt;
    int idx = 0;
    if (!m_pwLag.empty())
    {
        for (std::map<STPowerwarFightLagKey, STPowerwarFightLagData>::iterator it =
                 m_pwLag.begin(); it != m_pwLag.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0x14;
            *(unsigned int*)(slot + 0) = it->first.m_field0;
            *(unsigned short*)(slot + 4) = it->first.m_field4;
            *(unsigned int*)(slot + 8) = it->second.m_field0;
            *(unsigned int*)(slot + 12) = it->second.m_field4;
            *(unsigned int*)(slot + 16) = it->second.m_field8;
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                DNF_LOG_SCOPE_LINE(0x33b, "./log/statistic", "PowerwarLag DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            DNF_LOG_SCOPE_LINE(0x345, "./log/statistic", "PowerwarLag DB Sent %d", idx);
        }
        m_pwLag.clear();
    }
}
```
