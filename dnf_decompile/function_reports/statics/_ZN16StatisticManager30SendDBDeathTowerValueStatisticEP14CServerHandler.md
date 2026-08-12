# _ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler

`StatisticManager::SendDBDeathTowerValueStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806fb8e` | `0x20d` | `0x806fc10` | `0x1f6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,137 +1,130 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x1824,%esp
-lea    -0x180b(%ebp),%eax
+lea    -0x180f(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN38Packet_DBMW_DeathTower_Statistic_ValueC1Ev>
-movl   $0x0,-0xc(%ebp)
+movl   $0x0,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 sub    $0xffffff80,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI29STDeathTowerValueStatisticKey14ValueStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x208>
+je     <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x1f1>
 mov    0x8(%ebp),%eax
 lea    0x80(%eax),%edx
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI29STDeathTowerValueStatisticKey14ValueStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x172>
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x156>
+lea    -0x180f(%ebp),%eax
+mov    -0x10(%ebp),%edx
+shl    $0x4,%edx
+add    $0xe,%edx
+add    %edx,%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK29STDeathTowerValueStatisticKey14ValueStatisticEEptEv>
 movzbl (%eax),%edx
-mov    %ebx,%eax
-shl    $0x4,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17f5,%eax
+mov    -0xc(%ebp),%eax
 mov    %dl,(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+mov    -0xc(%ebp),%eax
+lea    0x2(%eax),%ebx
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK29STDeathTowerValueStatisticKey14ValueStatisticEEptEv>
-movzwl 0x2(%eax),%edx
-mov    %ebx,%eax
-shl    $0x4,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x1803,%eax
-mov    %dx,0xf(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+movzwl 0x2(%eax),%eax
+mov    %ax,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0x4(%eax),%ebx
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK29STDeathTowerValueStatisticKey14ValueStatisticEEptEv>
-mov    0x4(%eax),%edx
-mov    %ebx,%eax
-shl    $0x4,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x1803,%eax
-mov    %edx,0x11(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0x8(%eax),%ebx
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK29STDeathTowerValueStatisticKey14ValueStatisticEEptEv>
-mov    0x8(%eax),%edx
-mov    %ebx,%eax
-shl    $0x4,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x1803,%eax
-mov    %edx,0x19(%eax)
-addl   $0x1,-0xc(%ebp)
+mov    0x8(%eax),%eax
+mov    %eax,(%ebx)
 mov    -0xc(%ebp),%eax
-cmp    $0x196,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x167>
-movl   $0x197,-0x1801(%ebp)
-lea    -0x180b(%ebp),%eax
+lea    0xc(%eax),%ebx
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK29STDeathTowerValueStatisticKey14ValueStatisticEEptEv>
+mov    0xc(%eax),%eax
+mov    %eax,(%ebx)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x63,-0x10(%ebp)
+jle    <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x14b>
+lea    -0x180f(%ebp),%eax
+add    $0xa,%eax
+movl   $0x64,(%eax)
+lea    -0x180f(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x217,0x8(%esp)
 movl   $&_ZZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_DeathTower_Statistic_Value : (%d) 개 패킷 전송\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x0,-0xc(%ebp)
-lea    -0x24(%ebp),%eax
+movl   $0x0,-0x10(%ebp)
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK29STDeathTowerValueStatisticKey14ValueStatisticEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x80(%eax),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI29STDeathTowerValueStatisticKey14ValueStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK29STDeathTowerValueStatisticKey14ValueStatisticEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x58>
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x208>
-mov    -0xc(%ebp),%eax
-mov    %eax,-0x1801(%ebp)
-movl   $0x220,0x8(%esp)
-movl   $&_ZZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
-movl   $"Packet_DBMW_DeathTower_Statistic_Value : (%d) 개 패킷 전송\n",0x8(%esp)
-movl   $"./log/statistic",0x4(%esp)
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x180b(%ebp),%eax
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x1f1>
+lea    -0x180f(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x180f(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+movl   $0x220,0x8(%esp)
+movl   $&_ZZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x10(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"Packet_DBMW_DeathTower_Statistic_Value : (%d) 개 패킷 전송\n",0x8(%esp)
+movl   $"./log/statistic",0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBDeathTowerValueStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  Packet_DBMW_DeathTower_Statistic_Value local_180f [10];
  uint local_1805;
  undefined1 uStack_1801;
  undefined2 uStack_1800;
  undefined4 auStack_17fe [1525];
  map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
  local_28 [4];
  map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
  local_24 [4];
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  uint local_10;
  
  Packet_DBMW_DeathTower_Statistic_Value::Packet_DBMW_DeathTower_Statistic_Value(local_180f);
  local_10 = 0;
  cVar3 = std::
          map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
          ::empty((map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
                   *)(this + 0x80));
  if (cVar3 != '\x01') {
    std::
    map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<STDeathTowerValueStatisticKey,ValueStatistic,std::less<STDeathTowerValueStatisticKey>,std::allocator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>>
      ::end(local_24);
      cVar3 = std::_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>
              ::operator!=((_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>
                            *)local_28,(_Rb_tree_iterator *)local_24);
      uVar2 = local_10;
      if (cVar3 == '\0') break;
      puVar4 = (undefined1 *)
               std::_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>
               ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>
                             *)local_28);
      uVar1 = local_10;
      (&uStack_1801)[uVar2 * 0xf] = *puVar4;
      iVar5 = std::_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>
                            *)local_28);
      uVar2 = local_10;
      *(undefined2 *)((int)auStack_17fe + uVar1 * 0xf + -2) = *(undefined2 *)(iVar5 + 2);
      iVar5 = std::_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>
                            *)local_28);
      uVar1 = local_10;
      *(undefined4 *)((int)auStack_17fe + uVar2 * 0xf) = *(undefined4 *)(iVar5 + 4);
      iVar5 = std::_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>
                            *)local_28);
      *(undefined4 *)((int)auStack_17fe + uVar1 * 0xf + 8) = *(undefined4 *)(iVar5 + 8);
      local_10 = local_10 + 1;
      if (0x196 < local_10) {
        local_1805 = 0x197;
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_180f);
        CMyFileLog::CMyFileLog(local_20,"SendDBDeathTowerValueStatistic",0x217);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_20,"./log/statistic",&DAT_080f22cc,local_10);
        local_10 = 0;
      }
      std::_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>>::
      operator++((_Rb_tree_iterator<std::pair<STDeathTowerValueStatisticKey_const,ValueStatistic>> *
                 )local_28);
    }
    if (local_10 != 0) {
      local_1805 = local_10;
      CMyFileLog::CMyFileLog(local_18,"SendDBDeathTowerValueStatistic",0x220);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/statistic",&DAT_080f22cc,local_10);
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_180f);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 477 行）：

```cpp
void StatisticManager::SendDBDeathTowerValueStatistic(CServerHandler* handler)
{
    Packet_DBMW_DeathTower_Statistic_Value pkt;
    int idx = 0;
    if (!m_deathTowerValue.empty())
    {
        for (std::map<STDeathTowerValueStatisticKey, ValueStatistic>::iterator it =
                 m_deathTowerValue.begin(); it != m_deathTowerValue.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0x10;
            slot[0] = it->first.m_field0;
            *(unsigned short*)(slot + 2) = it->first.m_field2;
            *(unsigned int*)(slot + 4) = it->first.m_field4;
            *(int*)(slot + 8) = it->second.m_data[0];
            *(int*)(slot + 0xc) = it->second.m_data[1];
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                DNF_LOG_SCOPE_LINE(0x217, "./log/statistic", "Packet_DBMW_DeathTower_Statistic_Value : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb\n", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            DNF_LOG_SCOPE_LINE(0x220, "./log/statistic", "Packet_DBMW_DeathTower_Statistic_Value : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb\n", idx);
        }
    }
}
```
