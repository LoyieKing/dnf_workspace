# _ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler

`StatisticManager::SendDBHellPartyStatisticItem(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8071348` | `0x2aa` | `0x8071324` | `0x253` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,183 +1,159 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x17e4,%esp
-lea    -0x17d2(%ebp),%eax
+sub    $0x17f4,%esp
+lea    -0x17da(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN36Packet_DBMW_HellParty_Statistic_ItemC1Ev>
-movl   $0x0,-0xc(%ebp)
+movl   $0x0,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x128,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI27STHellPartyStatisticItemKey18HellPartyItenmDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x2a5>
+je     <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x24e>
 mov    0x8(%ebp),%eax
 lea    0x128(%eax),%edx
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI27STHellPartyStatisticItemKey18HellPartyItenmDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x20f>
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEptEv>
-movzbl (%eax),%edx
-mov    %ebx,%eax
-shl    $0x3,%eax
-add    %ebx,%eax
-shl    $0x2,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17ca,%eax
-mov    %dl,0xe(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEptEv>
-mov    0x4(%eax),%edx
-mov    %ebx,%eax
-shl    $0x3,%eax
-add    %ebx,%eax
-shl    $0x2,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17ca,%eax
-mov    %edx,0xf(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEptEv>
-movzbl 0x8(%eax),%edx
-mov    %ebx,%eax
-shl    $0x3,%eax
-add    %ebx,%eax
-shl    $0x2,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17ca,%eax
-mov    %dl,0x13(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEptEv>
-movzbl 0x9(%eax),%edx
-mov    %ebx,%eax
-shl    $0x3,%eax
-add    %ebx,%eax
-shl    $0x2,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17ca,%eax
-mov    %dl,0x14(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEptEv>
-movzbl 0xa(%eax),%edx
-mov    %ebx,%eax
-shl    $0x3,%eax
-add    %ebx,%eax
-shl    $0x2,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17ca,%eax
-mov    %dl,0x15(%eax)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEptEv>
-lea    0x10(%eax),%ecx
-mov    -0xc(%ebp),%edx
-lea    -0x17d2(%ebp),%ebx
+jmp    <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x1b3>
+lea    -0x17da(%ebp),%ecx
+mov    -0x14(%ebp),%edx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0x1a,%eax
-movl   $0x18,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+add    $0xe,%eax
+lea    (%ecx,%eax,1),%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEptEv>
-mov    0xc(%eax),%edx
-mov    %ebx,%eax
-shl    $0x3,%eax
-add    %ebx,%eax
+movzbl (%eax),%eax
+mov    %eax,%edx
+mov    -0x10(%ebp),%eax
+mov    %dl,(%eax)
+mov    -0x10(%ebp),%eax
+lea    0x4(%eax),%ebx
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEptEv>
+mov    0x4(%eax),%eax
+mov    %eax,(%ebx)
+mov    -0x10(%ebp),%eax
+lea    0x8(%eax),%ebx
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEptEv>
+movzbl 0x8(%eax),%eax
+mov    %al,(%ebx)
+mov    -0x10(%ebp),%eax
+lea    0x9(%eax),%ebx
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEptEv>
+movzbl 0x9(%eax),%eax
+mov    %al,(%ebx)
+mov    -0x10(%ebp),%eax
+lea    0xa(%eax),%ebx
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEptEv>
+movzbl 0xa(%eax),%eax
+mov    %al,(%ebx)
+mov    -0x10(%ebp),%eax
+lea    0x14(%eax),%ebx
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEptEv>
+mov    0xc(%eax),%eax
+mov    %eax,(%ebx)
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x12b>
+mov    -0xc(%ebp),%eax
+add    $0x6,%eax
 shl    $0x2,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17ca,%eax
-mov    %edx,0x16(%eax)
+add    -0x10(%ebp),%eax
+mov    %eax,%ebx
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEptEv>
+mov    -0xc(%ebp),%edx
+mov    0x10(%eax,%edx,4),%eax
+mov    %eax,(%ebx)
 addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0xa7,%eax
-seta   %al
+cmpl   $0x5,-0xc(%ebp)
+setle  %al
 test   %al,%al
-je     <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x204>
-movl   $0xa8,-0x17c8(%ebp)
-lea    -0x17d2(%ebp),%eax
+jne    <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x105>
+addl   $0x1,-0x14(%ebp)
+cmpl   $0x63,-0x14(%ebp)
+jle    <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x1a8>
+lea    -0x17da(%ebp),%eax
+add    $0xa,%eax
+movl   $0x64,(%eax)
+lea    -0x17da(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x391,0x8(%esp)
 movl   $&_ZZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x14(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"Packet_DBMW_HellParty_Statistic_Item : (%d) 개 패킷 전송\n",0x8(%esp)
+movl   $"./log/statistic",0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x0,-0x14(%ebp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEppEv>
+mov    0x8(%ebp),%eax
+lea    0x128(%eax),%edx
+lea    -0x28(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapI27STHellPartyStatisticItemKey18HellPartyItenmDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
+sub    $0x4,%esp
+lea    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEneERKS5_>
+test   %al,%al
+jne    <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x5a>
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x24e>
+lea    -0x17da(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x17da(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+movl   $0x39b,0x8(%esp)
+movl   $&_ZZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_HellParty_Statistic_Item : (%d) 개 패킷 전송\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x0,-0xc(%ebp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEppEv>
-mov    0x8(%ebp),%eax
-lea    0x128(%eax),%edx
-lea    -0x20(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapI27STHellPartyStatisticItemKey18HellPartyItenmDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
-sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK27STHellPartyStatisticItemKey18HellPartyItenmDataEEneERKS5_>
-test   %al,%al
-jne    <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x5a>
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x2a5>
-mov    -0xc(%ebp),%eax
-mov    %eax,-0x17c8(%ebp)
-movl   $0x39a,0x8(%esp)
-movl   $&_ZZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
-movl   $"Packet_DBMW_HellParty_Statistic_Item : (%d) 개 패킷 전송\n",0x8(%esp)
-movl   $"./log/statistic",0x4(%esp)
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x17d2(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBHellPartyStatisticItem(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  Packet_DBMW_HellParty_Statistic_Item local_17d6 [10];
  uint local_17cc;
  undefined1 uStack_17c8;
  undefined4 uStack_17c7;
  undefined1 auStack_17c3 [3];
  undefined4 uStack_17c0;
  undefined1 auStack_17bc [6036];
  map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
  local_28 [4];
  map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
  local_24 [4];
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  uint local_10;
  
  Packet_DBMW_HellParty_Statistic_Item::Packet_DBMW_HellParty_Statistic_Item(local_17d6);
  local_10 = 0;
  cVar3 = std::
          map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
          ::empty((map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
                   *)(this + 0x128));
  if (cVar3 != '\x01') {
    std::
    map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<STHellPartyStatisticItemKey,HellPartyItenmData,std::less<STHellPartyStatisticItemKey>,std::allocator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>>
      ::end(local_24);
      cVar3 = std::
              _Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>::
              operator!=((_Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>
                          *)local_28,(_Rb_tree_iterator *)local_24);
      uVar2 = local_10;
      if (cVar3 == '\0') break;
      puVar4 = (undefined1 *)
               std::
               _Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>::
               operator->((_Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>
                           *)local_28);
      uVar1 = local_10;
      (&uStack_17c8)[uVar2 * 0x24] = *puVar4;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>::
              operator->((_Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>
                          *)local_28);
      uVar2 = local_10;
      *(undefined4 *)(auStack_17c3 + uVar1 * 0x24 + -4) = *(undefined4 *)(iVar5 + 4);
      iVar5 = std::
              _Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>::
              operator->((_Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>
                          *)local_28);
      uVar1 = local_10;
      auStack_17c3[uVar2 * 0x24] = *(undefined1 *)(iVar5 + 8);
      iVar5 = std::
              _Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>::
              operator->((_Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>
                          *)local_28);
      uVar2 = local_10;
      auStack_17c3[uVar1 * 0x24 + 1] = *(undefined1 *)(iVar5 + 9);
      iVar5 = std::
              _Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>::
              operator->((_Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>
                          *)local_28);
      auStack_17c3[uVar2 * 0x24 + 2] = *(undefined1 *)(iVar5 + 10);
      iVar5 = std::
              _Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>::
              operator->((_Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>
                          *)local_28);
      memcpy(auStack_17bc + local_10 * 0x24,(void *)(iVar5 + 0x10),0x18);
      uVar2 = local_10;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>::
              operator->((_Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>
                          *)local_28);
      *(undefined4 *)(auStack_17c3 + uVar2 * 0x24 + 3) = *(undefined4 *)(iVar5 + 0xc);
      local_10 = local_10 + 1;
      if (0xa7 < local_10) {
        local_17cc = 0xa8;
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_17d6);
        CMyFileLog::CMyFileLog(local_20,"SendDBHellPartyStatisticItem",0x391);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_20,"./log/statistic",&DAT_080f2590,local_10);
        local_10 = 0;
      }
      std::_Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>::
      operator++((_Rb_tree_iterator<std::pair<STHellPartyStatisticItemKey_const,HellPartyItenmData>>
                  *)local_28);
    }
    if (local_10 != 0) {
      local_17cc = local_10;
      CMyFileLog::CMyFileLog(local_18,"SendDBHellPartyStatisticItem",0x39a);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/statistic",&DAT_080f2590,local_10);
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_17d6);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 812 行）：

```cpp
void StatisticManager::SendDBHellPartyStatisticItem(CServerHandler* handler)
{
    Packet_DBMW_HellParty_Statistic_Item pkt;
    int idx = 0;
    if (!m_hellParty.empty())
    {
        for (std::map<STHellPartyStatisticItemKey, HellPartyItenmData>::iterator it =
                 m_hellParty.begin(); it != m_hellParty.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0x24;
            slot[0] = it->first.m_field0;
            *(unsigned int*)(slot + 4) = it->first.m_field4;
            slot[8] = it->first.m_field8;
            slot[9] = it->first.m_field9;
            slot[10] = it->first.m_fielda;
            *(int*)(slot + 0x14) = it->second.m_count;
            for (int k = 0; k < 6; k++)
            {
                *(int*)(slot + 0x18 + k * 4) = it->second.m_data[k];
            }
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                DNF_LOG_SCOPE_LINE(0x391, "./log/statistic", "Packet_DBMW_HellParty_Statistic_Item : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb\n", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            DNF_LOG_SCOPE_LINE(0x39b, "./log/statistic", "Packet_DBMW_HellParty_Statistic_Item : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb\n", idx);
        }
    }
}
```
