# _ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler

`StatisticManager::SendDBDeathTowerPlayDataPartyStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x807015c` | `0x269` | `0x807014c` | `0x23b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,167 +1,151 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x1840,%esp
 lea    -0x181a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN47Packet_DBMW_DeathTower_Statistic_Playdata_PartyC1Ev>
 movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 add    $0xb0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x25f>
+je     <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x231>
 mov    0x8(%ebp),%eax
 lea    0xb0(%eax),%edx
 lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x1c9>
+jmp    <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x19b>
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticEEptEv>
 movzbl (%eax),%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 add    %eax,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x1812,%eax
 mov    %dl,0xe(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticEEptEv>
 movzbl 0x1(%eax),%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 add    %eax,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x1812,%eax
 mov    %dl,0xf(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticEEptEv>
-mov    0x8(%eax),%edx
-mov    %ebx,%eax
-shl    $0x2,%eax
-add    %ebx,%eax
-add    %eax,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x1812,%eax
-mov    %edx,0x14(%eax)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticEEptEv>
 mov    0x8(%eax),%eax
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0xfd>
+je     <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0xd5>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticEEptEv>
 movl   $0x1,0x8(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticEEptEv>
 mov    0x4(%eax),%esi
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticEEptEv>
 mov    0x8(%eax),%eax
 mov    %eax,-0x182c(%ebp)
 mov    %esi,%edx
 mov    %edx,%eax
 sar    $0x1f,%edx
 idivl  -0x182c(%ebp)
 mov    %eax,%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 add    %eax,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x1812,%eax
 mov    %edx,0x10(%eax)
 addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x263,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x1be>
+cmpl   $0x263,-0xc(%ebp)
+jle    <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x190>
 movl   $0x264,-0x1810(%ebp)
 lea    -0x181a(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x276,0x8(%esp)
 movl   $&_ZZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_DeathTower_Statistic_Playdata_Party : (%d) 개 패킷 전송\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x0,-0xc(%ebp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticEEppEv>
 mov    0x8(%ebp),%eax
 lea    0xb0(%eax),%edx
 lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x5b>
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x25f>
+je     <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x231>
 mov    -0xc(%ebp),%eax
 mov    %eax,-0x1810(%ebp)
 movl   $0x27f,0x8(%esp)
 movl   $&_ZZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_DeathTower_Statistic_Playdata_Party : (%d) 개 패킷 전송\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0x181a(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBDeathTowerPlayDataPartyStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  Packet_DBMW_DeathTower_Statistic_Playdata_Party local_181e [10];
  uint local_1814;
  undefined1 auStack_1810 [2];
  int aiStack_180e [1529];
  map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
  local_28 [4];
  map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
  local_24 [4];
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  uint local_10;
  
  Packet_DBMW_DeathTower_Statistic_Playdata_Party::Packet_DBMW_DeathTower_Statistic_Playdata_Party
            (local_181e);
  local_10 = 0;
  cVar3 = std::
          map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
          ::empty((map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
                   *)(this + 0xb0));
  if (cVar3 != '\x01') {
    std::
    map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<STDeathTowerPlayDataPartyStatisticKey,PlayDataPartyStatistic,std::less<STDeathTowerPlayDataPartyStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>>
      ::end(local_24);
      cVar3 = std::
              _Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
              ::operator!=((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
                            *)local_28,(_Rb_tree_iterator *)local_24);
      uVar2 = local_10;
      if (cVar3 == '\0') break;
      puVar4 = (undefined1 *)
               std::
               _Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
               ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
                             *)local_28);
      uVar1 = local_10;
      auStack_1810[uVar2 * 10] = *puVar4;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
                            *)local_28);
      uVar2 = local_10;
      auStack_1810[uVar1 * 10 + 1] = *(undefined1 *)(iVar5 + 1);
      iVar5 = std::
              _Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
                            *)local_28);
      *(undefined4 *)((int)aiStack_180e + uVar2 * 10 + 4) = *(undefined4 *)(iVar5 + 8);
      iVar5 = std::
              _Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
                            *)local_28);
      if (*(int *)(iVar5 + 8) == 0) {
        iVar5 = std::
                _Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
                ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
                              *)local_28);
        *(undefined4 *)(iVar5 + 8) = 1;
      }
      uVar2 = local_10;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
                            *)local_28);
      iVar5 = *(int *)(iVar5 + 4);
      iVar6 = std::
              _Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
                            *)local_28);
      *(int *)(auStack_1810 + uVar2 * 10 + 2) = iVar5 / *(int *)(iVar6 + 8);
      local_10 = local_10 + 1;
      if (0x263 < local_10) {
        local_1814 = 0x264;
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_181e);
        CMyFileLog::CMyFileLog(local_20,"SendDBDeathTowerPlayDataPartyStatistic",0x276);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_20,"./log/statistic",&DAT_080f23e4,local_10);
        local_10 = 0;
      }
      std::
      _Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
      ::operator++((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataPartyStatisticKey_const,PlayDataPartyStatistic>>
                    *)local_28);
    }
    if (local_10 != 0) {
      local_1814 = local_10;
      CMyFileLog::CMyFileLog(local_18,"SendDBDeathTowerPlayDataPartyStatistic",0x27f);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/statistic",&DAT_080f23e4,local_10);
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_181e);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 597 行）：

```cpp
void StatisticManager::SendDBDeathTowerPlayDataPartyStatistic(CServerHandler* handler)
{
    Packet_DBMW_DeathTower_Statistic_Playdata_Party pkt;
    int idx = 0;
    if (!m_deathTowerParty.empty())
    {
        for (std::map<STDeathTowerPlayDataPartyStatisticKey, PlayDataPartyStatistic>::iterator it =
                 m_deathTowerParty.begin(); it != m_deathTowerParty.end(); ++it)
        {
            pkt.m_items[idx].m_deathTowerType = it->first.m_deathTowerType;
            pkt.m_items[idx].m_partyCount = it->first.m_partyCount;
            if (it->second.m_data[1] == 0)
            {
                it->second.m_data[1] = 1;
            }
            pkt.m_items[idx].m_avgClearCount = it->second.m_data[0] / it->second.m_data[1];
            idx++;
            if (0x263 < idx)
            {
                pkt.m_count = 0x264;
                handler->SendToDB((PacketHeader*)&pkt);
                DNF_LOG_SCOPE_LINE(0x276, "./log/statistic", "Packet_DBMW_DeathTower_Statistic_Playdata_Party : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb\n", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            pkt.m_count = idx;
            DNF_LOG_SCOPE_LINE(0x27f, "./log/statistic", "Packet_DBMW_DeathTower_Statistic_Playdata_Party : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb\n", idx);
            handler->SendToDB((PacketHeader*)&pkt);
        }
    }
}
```
