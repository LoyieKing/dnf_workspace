# _ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler

`StatisticManager::SendDBAssertManagerStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8070874` | `0x239` | `0x8070848` | `0x217` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,135 +1,128 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x1274,%esp
-lea    -0x1268(%ebp),%eax
+sub    $0x1284,%esp
+lea    -0x126c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN43Packet_DBMW_Assert_Manager_Info_Write_QueryC1Ev>
-movl   $0x0,-0xc(%ebp)
+movl   $0x0,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 add    $0xe0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI18STAssertManagerKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x234>
+je     <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x212>
 mov    0x8(%ebp),%eax
 lea    0xe0(%eax),%edx
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STAssertManagerKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x19e>
-lea    -0x24(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x177>
+lea    -0x126c(%ebp),%eax
+mov    -0x10(%ebp),%edx
+imul   $0x206,%edx,%edx
+add    $0xe,%edx
+add    %edx,%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STAssertManagerKeyiEEptEv>
+movl   $0x100,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    -0xc(%ebp),%eax
+lea    0x100(%eax),%ebx
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STAssertManagerKeyiEEptEv>
+movzwl 0x100(%eax),%eax
+mov    %ax,(%ebx)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STAssertManagerKeyiEEptEv>
+add    $0x102,%eax
 mov    -0xc(%ebp),%edx
-lea    -0x1268(%ebp),%ecx
-imul   $0x206,%edx,%edx
-lea    (%ecx,%edx,1),%edx
-add    $0xe,%edx
+add    $0x102,%edx
 movl   $0x100,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STAssertManagerKeyiEEptEv>
-movzwl 0x100(%eax),%eax
-imul   $0x206,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1160,%edx
-mov    %ax,0xe(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+mov    -0xc(%ebp),%eax
+lea    0x202(%eax),%ebx
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STAssertManagerKeyiEEptEv>
 mov    0x204(%eax),%eax
-imul   $0x206,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1150,%edx
-mov    %eax,(%edx)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STAssertManagerKeyiEEptEv>
-add    $0x102,%eax
-mov    -0xc(%ebp),%ecx
-lea    -0x1268(%ebp),%edx
-imul   $0x206,%ecx,%ecx
-add    $0x100,%ecx
-add    %ecx,%edx
-add    $0x14,%edx
-movl   $0x100,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x8,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x193>
-movl   $0x9,-0x125e(%ebp)
-lea    -0x1268(%ebp),%eax
+mov    %eax,(%ebx)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x63,-0x10(%ebp)
+jle    <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x16c>
+lea    -0x126c(%ebp),%eax
+add    $0xa,%eax
+movl   $0x64,(%eax)
+lea    -0x126c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x2e1,0x8(%esp)
 movl   $&_ZZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_Assert_Manager_Info_Write_Query : (%d) 개 패킷 전송",0x8(%esp)
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
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK18STAssertManagerKeyiEEppEv>
 mov    0x8(%ebp),%eax
 lea    0xe0(%eax),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18STAssertManagerKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE3endEv>
 sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18STAssertManagerKeyiEEneERKS4_>
 test   %al,%al
 jne    <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x5a>
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x234>
-mov    -0xc(%ebp),%eax
-mov    %eax,-0x125e(%ebp)
-lea    -0x1268(%ebp),%eax
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x212>
+lea    -0x126c(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x126c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x2eb,0x8(%esp)
 movl   $&_ZZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_Assert_Manager_Info_Write_Query : (%d) 개 패킷 전송",0x8(%esp)
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

/* StatisticManager::SendDBAssertManagerStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  void *__src;
  int iVar4;
  Packet_DBMW_Assert_Manager_Info_Write_Query local_126c [10];
  uint local_1262;
  undefined1 auStack_125e [256];
  undefined2 uStack_115e;
  undefined4 uStack_115c;
  undefined1 auStack_1158 [4400];
  map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
  local_28 [4];
  map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
  local_24 [4];
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  uint local_10;
  
  Packet_DBMW_Assert_Manager_Info_Write_Query::Packet_DBMW_Assert_Manager_Info_Write_Query
            (local_126c);
  local_10 = 0;
  cVar3 = std::
          map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
          ::empty((map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
                   *)(this + 0xe0));
  if (cVar3 != '\x01') {
    std::
    map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<STAssertManagerKey,int,std::less<STAssertManagerKey>,std::allocator<std::pair<STAssertManagerKey_const,int>>>
      ::end(local_24);
      cVar3 = std::_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>> *)local_28,
                         (_Rb_tree_iterator *)local_24);
      if (cVar3 == '\0') break;
      __src = (void *)std::_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>> *)
                                 local_28);
      memcpy(auStack_125e + local_10 * 0x206,__src,0x100);
      uVar1 = local_10;
      iVar4 = std::_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>> *)local_28);
      uVar2 = local_10;
      (&uStack_115e)[uVar1 * 0x103] = *(undefined2 *)(iVar4 + 0x100);
      iVar4 = std::_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>> *)local_28);
      *(undefined4 *)(auStack_1158 + uVar2 * 0x206 + -4) = *(undefined4 *)(iVar4 + 0x204);
      iVar4 = std::_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>> *)local_28);
      memcpy(auStack_1158 + local_10 * 0x206,(void *)(iVar4 + 0x102),0x100);
      local_10 = local_10 + 1;
      if (8 < local_10) {
        local_1262 = 9;
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_126c);
        CMyFileLog::CMyFileLog(local_20,"SendDBAssertManagerStatistic",0x2e1);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_20,"./log/Statistic",&DAT_080f24b4,local_10);
        local_10 = 0;
      }
      std::_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<STAssertManagerKey_const,int>> *)local_28);
    }
    if (local_10 != 0) {
      local_1262 = local_10;
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_126c);
      CMyFileLog::CMyFileLog(local_18,"SendDBAssertManagerStatistic",0x2eb);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/Statistic",&DAT_080f24b4,local_10);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 642 行）：

```cpp
void StatisticManager::SendDBAssertManagerStatistic(CServerHandler* handler)
{
    Packet_DBMW_Assert_Manager_Info_Write_Query pkt;
    int idx = 0;
    if (!m_assertManager.empty())
    {
        for (std::map<STAssertManagerKey, int>::iterator it = m_assertManager.begin();
             it != m_assertManager.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0x206;
            memcpy(slot, it->first.m_str0, 0x100);
            *(unsigned short*)(slot + 0x100) = it->first.m_field100;
            memcpy(slot + 0x102, it->first.m_str2, 0x100);
            *(int*)(slot + 0x202) = it->second;
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                DNF_LOG_SCOPE_LINE(0x2e1, "./log/Statistic", "Packet_DBMW_Assert_Manager_Info_Write_Query : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            DNF_LOG_SCOPE_LINE(0x2eb, "./log/Statistic", "Packet_DBMW_Assert_Manager_Info_Write_Query : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb", idx);
        }
    }
}
```
