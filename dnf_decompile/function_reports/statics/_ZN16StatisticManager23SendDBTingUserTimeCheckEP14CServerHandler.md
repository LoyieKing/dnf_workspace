# _ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler

`StatisticManager::SendDBTingUserTimeCheck(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8070dbc` | `0x1a5` | `0x8070d5a` | `0x1a9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,101 +1,101 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x1834,%esp
-lea    -0x1822(%ebp),%eax
+lea    -0x1826(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN43Packet_DBMW_Ting_User_TimeCheck_Write_QueryC1Ev>
-movl   $0x0,-0xc(%ebp)
+movl   $0x0,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x110,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjiSt4lessIjESaISt4pairIKjiEEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0x1a0>
+je     <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0x1a4>
 mov    0x8(%ebp),%eax
 lea    0x110(%eax),%edx
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0x10a>
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0x10e>
+mov    -0x10(%ebp),%ebx
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEptEv>
 mov    (%eax),%eax
-mov    %eax,-0x1814(%ebp,%ebx,8)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+mov    %eax,-0x1818(%ebp,%ebx,8)
+mov    -0x10(%ebp),%ebx
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0x1810(%ebp,%ebx,8)
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x2fd,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0xff>
-movl   $0x2fe,-0x1818(%ebp)
-lea    -0x1822(%ebp),%eax
+mov    %eax,-0x1814(%ebp,%ebx,8)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x2fd,-0x10(%ebp)
+setg   %al
+mov    %al,-0x9(%ebp)
+cmpb   $0x0,-0x9(%ebp)
+je     <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0x103>
+movl   $0x2fe,-0x181c(%ebp)
+lea    -0x1826(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x327,0x8(%esp)
 movl   $&_ZZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_Ting_User_TimeCheck_Write_Query : (%d) 개 패킷 전송",0x8(%esp)
 movl   $"./log/Statistic",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x0,-0xc(%ebp)
-lea    -0x24(%ebp),%eax
+movl   $0x0,-0x10(%ebp)
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjiEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x110(%eax),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE3endEv>
 sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEneERKS3_>
 test   %al,%al
 jne    <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0x5a>
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0x1a0>
-mov    -0xc(%ebp),%eax
-mov    %eax,-0x1818(%ebp)
-lea    -0x1822(%ebp),%eax
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0x1a4>
+mov    -0x10(%ebp),%eax
+mov    %eax,-0x181c(%ebp)
+lea    -0x1826(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x331,0x8(%esp)
 movl   $&_ZZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_Ting_User_TimeCheck_Write_Query : (%d) 개 패킷 전송",0x8(%esp)
 movl   $"./log/Statistic",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBTingUserTimeCheck(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  Packet_DBMW_Ting_User_TimeCheck_Write_Query local_1826 [10];
  uint local_181c;
  undefined4 auStack_1818 [1532];
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_28 [4];
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_24 [4];
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  uint local_10;
  
  Packet_DBMW_Ting_User_TimeCheck_Write_Query::Packet_DBMW_Ting_User_TimeCheck_Write_Query
            (local_1826);
  local_10 = 0;
  cVar3 = std::
          map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
          ::empty((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                   *)(this + 0x110));
  if (cVar3 != '\x01') {
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
      ::end(local_24);
      cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_28,
                         (_Rb_tree_iterator *)local_24);
      uVar2 = local_10;
      if (cVar3 == '\0') break;
      puVar4 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_28);
      uVar1 = local_10;
      auStack_1818[uVar2 * 2] = *puVar4;
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_28);
      auStack_1818[uVar1 * 2 + 1] = *(undefined4 *)(iVar5 + 4);
      local_10 = local_10 + 1;
      if (0x2fd < local_10) {
        local_181c = 0x2fe;
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_1826);
        CMyFileLog::CMyFileLog(local_20,"SendDBTingUserTimeCheck",0x327);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_20,"./log/Statistic",&DAT_080f2510,local_10);
        local_10 = 0;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_28);
    }
    if (local_10 != 0) {
      local_181c = local_10;
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_1826);
      CMyFileLog::CMyFileLog(local_18,"SendDBTingUserTimeCheck",0x331);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/Statistic",&DAT_080f2510,local_10);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 719 行）：

```cpp
void StatisticManager::SendDBTingUserTimeCheck(CServerHandler* handler)
{
    Packet_DBMW_Ting_User_TimeCheck_Write_Query pkt;
    int idx = 0;
    if (!m_field110.empty())
    {
        for (std::map<unsigned int, int>::iterator it = m_field110.begin();
             it != m_field110.end(); ++it)
        {
            pkt.m_typed.m_items[idx].m_field0 = it->first;
            pkt.m_typed.m_items[idx].m_field4 = it->second;
            idx++;
            bool over = (idx > 0x2fd);
            if (over)
            {
                pkt.m_typed.m_count = 0x2fe;
                handler->SendToDB((PacketHeader*)&pkt);
                DNF_LOG_SCOPE_LINE(0x327, "./log/Statistic", "Packet_DBMW_Ting_User_TimeCheck_Write_Query : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            pkt.m_typed.m_count = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            DNF_LOG_SCOPE_LINE(0x331, "./log/Statistic", "Packet_DBMW_Ting_User_TimeCheck_Write_Query : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb", idx);
        }
    }
}
```
