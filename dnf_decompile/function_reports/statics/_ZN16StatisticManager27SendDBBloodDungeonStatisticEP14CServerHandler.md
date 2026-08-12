# _ZN16StatisticManager27SendDBBloodDungeonStatisticEP14CServerHandler

`StatisticManager::SendDBBloodDungeonStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80728a2` | `0x134` | `0x80726b2` | `0x131` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,80 +1,78 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x1040,%esp
 mov    0x8(%ebp),%eax
 add    $0x1d0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIj23STBloodDungeonStatisticSt4lessIjESaISt4pairIKjS0_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager27SendDBBloodDungeonStatisticEP14CServerHandler+0x129>
+jne    <T> <_ZN16StatisticManager27SendDBBloodDungeonStatisticEP14CServerHandler+0x127>
 lea    -0x101f(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN24Packet_DBMW_Query_StringC1Ev>
 movl   $0x4ed3,-0x1015(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x1d0(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj23STBloodDungeonStatisticSt4lessIjESaISt4pairIKjS0_EEE5beginEv>
 sub    $0x4,%esp
 jmp    <T> <_ZN16StatisticManager27SendDBBloodDungeonStatisticEP14CServerHandler+0xf2>
 movl   $0x1001,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x101f(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj23STBloodDungeonStatisticEEptEv>
 mov    0x8(%eax),%esi
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj23STBloodDungeonStatisticEEptEv>
 mov    0x4(%eax),%ebx
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj23STBloodDungeonStatisticEEptEv>
 mov    (%eax),%eax
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_blood_dungeon(occ_date,level,try_count,clear_count) values (now(),%d,%d,%d)",0x8(%esp)
 movl   $0x400,0x4(%esp)
 lea    -0x101f(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 lea    -0x101f(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKj23STBloodDungeonStatisticEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x1d0(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj23STBloodDungeonStatisticSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj23STBloodDungeonStatisticEEneERKS4_>
 test   %al,%al
 jne    <T> <_ZN16StatisticManager27SendDBBloodDungeonStatisticEP14CServerHandler+0x5b>
-jmp    <T> <_ZN16StatisticManager27SendDBBloodDungeonStatisticEP14CServerHandler+0x12a>
-nop
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBBloodDungeonStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager27SendDBBloodDungeonStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  Packet_DBMW_Query_String local_1023 [10];
  undefined4 local_1019;
  char acStack_1015 [4097];
  map<unsigned_int,STBloodDungeonStatistic,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>>
  local_14 [4];
  map<unsigned_int,STBloodDungeonStatistic,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>>
  local_10 [4];
  
  cVar3 = std::
          map<unsigned_int,STBloodDungeonStatistic,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>>
          ::empty((map<unsigned_int,STBloodDungeonStatistic,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>>
                   *)(this + 0x1d0));
  if (cVar3 == '\0') {
    Packet_DBMW_Query_String::Packet_DBMW_Query_String(local_1023);
    local_1019 = 0x4ed3;
    std::
    map<unsigned_int,STBloodDungeonStatistic,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>>
    ::begin(local_14);
    while( true ) {
      std::
      map<unsigned_int,STBloodDungeonStatistic,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>>
      ::end(local_10);
      cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>::
              operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,STBloodDungeonStatistic>> *
                         )local_14,(_Rb_tree_iterator *)local_10);
      if (cVar3 == '\0') break;
      memset(acStack_1015,0,0x1001);
      iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STBloodDungeonStatistic>> *
                         )local_14);
      uVar1 = *(undefined4 *)(iVar4 + 8);
      iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STBloodDungeonStatistic>> *
                         )local_14);
      uVar2 = *(undefined4 *)(iVar4 + 4);
      puVar5 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>::
               operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>
                           *)local_14);
      snprintf(acStack_1015,0x400,
               "inSert into log_blood_dungeon(occ_date,level,try_count,clear_count) values (now(),%d,%d,%d)"
               ,*puVar5,uVar2,uVar1);
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_1023);
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBloodDungeonStatistic>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,STBloodDungeonStatistic>> *)
                 local_14);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1208 行）：

```cpp
void StatisticManager::SendDBBloodDungeonStatistic(CServerHandler* handler)
{
    if (m_blood.empty())
    {
    }
    else
    {
        Packet_DBMW_Query_String pkt;
        pkt.m_queryId = 0x4ed3;
        for (std::map<unsigned int, STBloodDungeonStatistic>::iterator it = m_blood.begin();
             it != m_blood.end(); ++it)
        {
            memset((char*)&pkt + 0xe, 0, 0x1001);
            snprintf((char*)&pkt + 0xe, 0x400,
                "inSert into log_blood_dungeon(occ_date,level,try_count,clear_count) values (now(),%d,%d,%d)",
                it->first, it->second.m_field0, it->second.m_field4);
            handler->SendToDB((PacketHeader*)&pkt);
        }
    }
}
```
