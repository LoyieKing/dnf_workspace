# _ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler

`StatisticManager::SendDBUserTingTimeCheckStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8070f7a` | `0x1a5` | `0x8070b82` | `0x1ba` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,101 +1,110 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x1834,%esp
 lea    -0x1822(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN43Packet_DBMW_User_Ting_TimeCheck_Write_QueryC1Ev>
 movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 add    $0xf8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI22STUserTingTimeCheckKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0x1a0>
+je     <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0x1b5>
 mov    0x8(%ebp),%eax
 lea    0xf8(%eax),%edx
-lea    -0x24(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STUserTingTimeCheckKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0x10a>
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0x11a>
+lea    -0x1822(%ebp),%eax
+mov    -0xc(%ebp),%edx
+shl    $0x3,%edx
+add    $0xe,%edx
+lea    (%eax,%edx,1),%ebx
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STUserTingTimeCheckKeyiEEptEv>
 mov    (%eax),%eax
-mov    %eax,-0x1814(%ebp,%ebx,8)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x1822(%ebp),%eax
+mov    -0xc(%ebp),%edx
+shl    $0x3,%edx
+add    $0x12,%edx
+lea    (%eax,%edx,1),%ebx
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STUserTingTimeCheckKeyiEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0x1810(%ebp,%ebx,8)
+mov    %eax,(%ebx)
 addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x2fd,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0xff>
-movl   $0x2fe,-0x1818(%ebp)
+cmpl   $0x63,-0xc(%ebp)
+jle    <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0x10f>
+lea    -0x1822(%ebp),%eax
+add    $0xa,%eax
+movl   $0x64,(%eax)
 lea    -0x1822(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-movl   $0x34c,0x8(%esp)
+movl   $0x353,0x8(%esp)
 movl   $"SendDBUserTingTimeCheckStatistic",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
-movl   $"Packet_DBMW_User_Ting_TimeCheck_Write_Query : (%d) 개 패킷 전송",0x8(%esp)
-movl   $"./log/Statistic",0x4(%esp)
+movl   $"UserTing DB Sent %d",0x8(%esp)
+movl   $"./log/statistic",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x0,-0xc(%ebp)
-lea    -0x24(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK22STUserTingTimeCheckKeyiEEppEv>
 mov    0x8(%ebp),%eax
 lea    0xf8(%eax),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STUserTingTimeCheckKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE3endEv>
 sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STUserTingTimeCheckKeyiEEneERKS4_>
 test   %al,%al
 jne    <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0x5a>
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0x1a0>
+je     <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0x1b5>
+lea    -0x1822(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    -0xc(%ebp),%eax
-mov    %eax,-0x1818(%ebp)
+mov    %eax,(%edx)
 lea    -0x1822(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-movl   $0x356,0x8(%esp)
+movl   $0x35d,0x8(%esp)
 movl   $"SendDBUserTingTimeCheckStatistic",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
-movl   $"Packet_DBMW_User_Ting_TimeCheck_Write_Query : (%d) 개 패킷 전송",0x8(%esp)
-movl   $"./log/Statistic",0x4(%esp)
-lea    -0x14(%ebp),%eax
+movl   $"UserTing DB Sent %d",0x8(%esp)
+movl   $"./log/statistic",0x4(%esp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBUserTingTimeCheckStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  Packet_DBMW_User_Ting_TimeCheck_Write_Query local_1826 [10];
  uint local_181c;
  undefined4 auStack_1818 [1532];
  map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
  local_28 [4];
  map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
  local_24 [4];
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  uint local_10;
  
  Packet_DBMW_User_Ting_TimeCheck_Write_Query::Packet_DBMW_User_Ting_TimeCheck_Write_Query
            (local_1826);
  local_10 = 0;
  cVar3 = std::
          map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
          ::empty((map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
                   *)(this + 0xf8));
  if (cVar3 != '\x01') {
    std::
    map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
      ::end(local_24);
      cVar3 = std::_Rb_tree_iterator<std::pair<STUserTingTimeCheckKey_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<STUserTingTimeCheckKey_const,int>> *)local_28,
                         (_Rb_tree_iterator *)local_24);
      uVar2 = local_10;
      if (cVar3 == '\0') break;
      puVar4 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<STUserTingTimeCheckKey_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<STUserTingTimeCheckKey_const,int>> *)local_28
                         );
      uVar1 = local_10;
      auStack_1818[uVar2 * 2] = *puVar4;
      iVar5 = std::_Rb_tree_iterator<std::pair<STUserTingTimeCheckKey_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<STUserTingTimeCheckKey_const,int>> *)local_28)
      ;
      auStack_1818[uVar1 * 2 + 1] = *(undefined4 *)(iVar5 + 4);
      local_10 = local_10 + 1;
      if (0x2fd < local_10) {
        local_181c = 0x2fe;
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_1826);
        CMyFileLog::CMyFileLog(local_20,"SendDBUserTingTimeCheckStatistic",0x34c);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_20,"./log/Statistic",&DAT_080f2550,local_10);
        local_10 = 0;
      }
      std::_Rb_tree_iterator<std::pair<STUserTingTimeCheckKey_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<STUserTingTimeCheckKey_const,int>> *)local_28);
    }
    if (local_10 != 0) {
      local_181c = local_10;
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_1826);
      CMyFileLog::CMyFileLog(local_18,"SendDBUserTingTimeCheckStatistic",0x356);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/Statistic",&DAT_080f2550,local_10);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 625 行）：

```cpp
void StatisticManager::SendDBUserTingTimeCheckStatistic(CServerHandler* handler)
{
    Packet_DBMW_User_Ting_TimeCheck_Write_Query pkt;
    int idx = 0;
    if (!m_userTing.empty())
    {
        for (std::map<STUserTingTimeCheckKey, int>::iterator it = m_userTing.begin();
             it != m_userTing.end(); ++it)
        {
            *(unsigned int*)((char*)&pkt + 0xe + idx * 8) = it->first.m_field0;
            *(int*)((char*)&pkt + 0xe + idx * 8 + 4) = it->second;
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                DNF_LOG_SCOPE_LINE(0x353, "./log/statistic", "UserTing DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            DNF_LOG_SCOPE_LINE(0x35d, "./log/statistic", "UserTing DB Sent %d", idx);
        }
    }
}
```
