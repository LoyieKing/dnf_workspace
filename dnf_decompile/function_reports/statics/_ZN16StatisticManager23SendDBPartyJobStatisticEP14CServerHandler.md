# _ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler

`StatisticManager::SendDBPartyJobStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806f39e` | `0x3a3` | `0x806f568` | `0x3a7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,257 +1,259 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x1804,%esp
 lea    -0x17ed(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN39Packet_DBMW_Dungeon_Statistic_Party_JobC1Ev>
 movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x50,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI22STPartyJobStatisticKey17PartyJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x39e>
+je     <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x3a2>
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%edx
 lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STPartyJobStatisticKey17PartyJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x30b>
+jmp    <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x30f>
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEptEv>
 movzwl (%eax),%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    0x0(,%eax,4),%ecx
 add    %ecx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x17e5,%eax
 mov    %dx,0xe(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEptEv>
 mov    0x4(%eax),%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    0x0(,%eax,4),%ecx
 add    %ecx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x17e5,%eax
 mov    %edx,0x10(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEptEv>
 movzbl 0x8(%eax),%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    0x0(,%eax,4),%ecx
 add    %ecx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x17d1,%eax
 mov    %dl,(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEptEv>
-movzbl 0x9(%eax),%edx
+movzbl 0x9(%eax),%eax
+mov    %eax,%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    0x0(,%eax,4),%ecx
 add    %ecx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x17d0,%eax
 mov    %dl,(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEptEv>
-movzbl 0xa(%eax),%edx
+movzbl 0xa(%eax),%eax
+mov    %eax,%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    0x0(,%eax,4),%ecx
 add    %ecx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x17cf,%eax
 mov    %dl,(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEptEv>
-movzbl 0xb(%eax),%edx
+movzbl 0xb(%eax),%eax
+mov    %eax,%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    0x0(,%eax,4),%ecx
 add    %ecx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x17ce,%eax
 mov    %dl,(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEptEv>
-movzbl 0xc(%eax),%edx
+movzbl 0xc(%eax),%eax
+mov    %eax,%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    0x0(,%eax,4),%ecx
 add    %ecx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x17cd,%eax
 mov    %dl,(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEptEv>
 movzbl 0xd(%eax),%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    0x0(,%eax,4),%ecx
 add    %ecx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x17cc,%eax
 mov    %dl,(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEptEv>
-mov    0x10(%eax),%edx
+mov    0x10(%eax),%eax
+mov    %eax,%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    0x0(,%eax,4),%ecx
 add    %ecx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x17e5,%eax
 mov    %edx,0x1a(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEptEv>
 movzbl 0x14(%eax),%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    0x0(,%eax,4),%ecx
 add    %ecx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x17c7,%eax
 mov    %dl,(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEptEv>
 mov    0x18(%eax),%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    0x0(,%eax,4),%ecx
 add    %ecx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x17d5,%eax
 mov    %edx,0xf(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEptEv>
 mov    0x1c(%eax),%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 lea    0x0(,%eax,4),%ecx
 add    %ecx,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
-sub    $0x17d5,%eax
-mov    %edx,0x13(%eax)
+sub    $0x17d1,%eax
+mov    %edx,0xf(%eax)
 addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0xf2,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x300>
+cmpl   $0xf2,-0xc(%ebp)
+jle    <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x304>
 movl   $0xf3,-0x17e3(%ebp)
 lea    -0x17ed(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x1b3,0x8(%esp)
 movl   $&_ZZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_Dungeon_Statistic_Party_Job : (%d) 개 패킷 전송\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x0,-0xc(%ebp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%edx
 lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STPartyJobStatisticKey17PartyJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STPartyJobStatisticKey17PartyJobStatisticEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x55>
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x39e>
+je     <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x3a2>
 mov    -0xc(%ebp),%eax
 mov    %eax,-0x17e3(%ebp)
 movl   $0x1bd,0x8(%esp)
 movl   $&_ZZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_Dungeon_Statistic_Party_Job : (%d) 개 패킷 전송\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0x17ed(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBPartyJobStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined2 *puVar4;
  int iVar5;
  Packet_DBMW_Dungeon_Statistic_Party_Job local_17f1 [10];
  uint local_17e7;
  undefined2 uStack_17e3;
  undefined4 uStack_17e1;
  undefined1 auStack_17dd [6];
  undefined4 uStack_17d7;
  undefined1 uStack_17d3;
  undefined4 auStack_17d2 [1514];
  map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
  local_28 [4];
  map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
  local_24 [4];
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  uint local_10;
  
  Packet_DBMW_Dungeon_Statistic_Party_Job::Packet_DBMW_Dungeon_Statistic_Party_Job(local_17f1);
  local_10 = 0;
  cVar3 = std::
          map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
          ::empty((map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
                   *)(this + 0x50));
  if (cVar3 != '\x01') {
    std::
    map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<STPartyJobStatisticKey,PartyJobStatistic,std::less<STPartyJobStatisticKey>,std::allocator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>>
      ::end(local_24);
      cVar3 = std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::
              operator!=((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>
                          *)local_28,(_Rb_tree_iterator *)local_24);
      uVar2 = local_10;
      if (cVar3 == '\0') break;
      puVar4 = (undefined2 *)
               std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::
               operator->((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>
                           *)local_28);
      uVar1 = local_10;
      *(undefined2 *)((int)&uStack_17e3 + uVar2 * 0x19) = *puVar4;
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>
                          *)local_28);
      uVar2 = local_10;
      *(undefined4 *)(auStack_17dd + uVar1 * 0x19 + -4) = *(undefined4 *)(iVar5 + 4);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>
                          *)local_28);
      uVar1 = local_10;
      auStack_17dd[uVar2 * 0x19] = *(undefined1 *)(iVar5 + 8);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>
                          *)local_28);
      uVar2 = local_10;
      auStack_17dd[uVar1 * 0x19 + 1] = *(undefined1 *)(iVar5 + 9);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>
                          *)local_28);
      uVar1 = local_10;
      auStack_17dd[uVar2 * 0x19 + 2] = *(undefined1 *)(iVar5 + 10);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>
                          *)local_28);
      uVar2 = local_10;
      auStack_17dd[uVar1 * 0x19 + 3] = *(undefined1 *)(iVar5 + 0xb);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>
                          *)local_28);
      uVar1 = local_10;
      auStack_17dd[uVar2 * 0x19 + 4] = *(undefined1 *)(iVar5 + 0xc);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>
                          *)local_28);
      uVar2 = local_10;
      auStack_17dd[uVar1 * 0x19 + 5] = *(undefined1 *)(iVar5 + 0xd);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>
                          *)local_28);
      uVar1 = local_10;
      *(undefined4 *)((int)&uStack_17d7 + uVar2 * 0x19) = *(undefined4 *)(iVar5 + 0x10);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>
                          *)local_28);
      uVar2 = local_10;
      (&uStack_17d3)[uVar1 * 0x19] = *(undefined1 *)(iVar5 + 0x14);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>
                          *)local_28);
      uVar1 = local_10;
      *(undefined4 *)((int)auStack_17d2 + uVar2 * 0x19) = *(undefined4 *)(iVar5 + 0x18);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>
                          *)local_28);
      *(undefined4 *)((int)auStack_17d2 + uVar1 * 0x19 + 4) = *(undefined4 *)(iVar5 + 0x1c);
      local_10 = local_10 + 1;
      if (0xf2 < local_10) {
        local_17e7 = 0xf3;
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_17f1);
        CMyFileLog::CMyFileLog(local_20,"SendDBPartyJobStatistic",0x1b3);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_20,"./log/statistic",&DAT_080f224c,local_10);
        local_10 = 0;
      }
      std::_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>>::operator++
                ((_Rb_tree_iterator<std::pair<STPartyJobStatisticKey_const,PartyJobStatistic>> *)
                 local_28);
    }
    if (local_10 != 0) {
      local_17e7 = local_10;
      CMyFileLog::CMyFileLog(local_18,"SendDBPartyJobStatistic",0x1bd);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/statistic",&DAT_080f224c,local_10);
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_17f1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 394 行）：

```cpp
void StatisticManager::SendDBPartyJobStatistic(CServerHandler* handler)
{
    Packet_DBMW_Dungeon_Statistic_Party_Job pkt;
    int idx = 0;
    if (!m_partyJob.empty())
    {
        for (std::map<STPartyJobStatisticKey, PartyJobStatistic>::iterator it = m_partyJob.begin();
             it != m_partyJob.end(); ++it)
        {
            pkt.m_items[idx].m_field0 = it->first.m_field0;
            pkt.m_items[idx].m_field4 = it->first.m_field4;
            pkt.m_items[idx].m_field8 = it->first.m_field8;
            pkt.m_items[idx].m_field9 = it->first.m_field9;
            pkt.m_items[idx].m_fielda = it->first.m_fielda;
            pkt.m_items[idx].m_fieldb = it->first.m_fieldb;
            pkt.m_items[idx].m_fieldc = it->first.m_fieldc;
            pkt.m_items[idx].m_fieldd = it->first.m_fieldd;
            pkt.m_items[idx].m_field10 = it->first.m_field10;
            pkt.m_items[idx].m_field14 = it->first.m_field14;
            pkt.m_items[idx].m_data[0] = it->second.m_data[0];
            pkt.m_items[idx].m_data[1] = it->second.m_data[1];
            idx++;
            if (0xf2 < idx)
            {
                pkt.m_count = 0xf3;
                handler->SendToDB((PacketHeader*)&pkt);
                DNF_LOG_SCOPE_LINE(0x1b3, "./log/statistic", "Packet_DBMW_Dungeon_Statistic_Party_Job : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb\n", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            pkt.m_count = idx;
            DNF_LOG_SCOPE_LINE(0x1bd, "./log/statistic", "Packet_DBMW_Dungeon_Statistic_Party_Job : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb\n", idx);
            handler->SendToDB((PacketHeader*)&pkt);
        }
    }
}
```
