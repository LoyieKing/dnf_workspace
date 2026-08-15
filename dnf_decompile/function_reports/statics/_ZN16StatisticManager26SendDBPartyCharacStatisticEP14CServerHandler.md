# _ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler

`StatisticManager::SendDBPartyCharacStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806f742` | `0x44c` | `0x806f8be` | `0x445` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,299 +1,296 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x1794,%esp
 lea    -0x177d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN42Packet_DBMW_Dungeon_Statistic_Party_CharacC1Ev>
 movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x68,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI16STPartyCharacKey20PartyCharacStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x447>
+je     <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x440>
 mov    0x8(%ebp),%eax
 lea    0x68(%eax),%edx
 lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI16STPartyCharacKey20PartyCharacStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x3b4>
+jmp    <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x3ad>
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
 movzwl (%eax),%eax
 imul   $0x43,%ebx,%edx
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%edx,1),%edx
 sub    $0x1775,%edx
 mov    %ax,0xe(%edx)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
 mov    0x4(%eax),%eax
 imul   $0x43,%ebx,%edx
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%edx,1),%edx
 sub    $0x1775,%edx
 mov    %eax,0x10(%edx)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
 movzbl 0x8(%eax),%eax
 imul   $0x43,%ebx,%edx
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%edx,1),%edx
 sub    $0x1761,%edx
 mov    %al,(%edx)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
 movzbl 0x9(%eax),%eax
 imul   $0x43,%ebx,%edx
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%edx,1),%edx
 sub    $0x1760,%edx
 mov    %al,(%edx)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
 movzbl 0xa(%eax),%eax
 imul   $0x43,%ebx,%edx
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%edx,1),%edx
 sub    $0x175f,%edx
 mov    %al,(%edx)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
 mov    0xc(%eax),%eax
 imul   $0x43,%ebx,%edx
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%edx,1),%edx
 sub    $0x1775,%edx
 mov    %eax,0x17(%edx)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
 movzbl 0x10(%eax),%eax
 imul   $0x43,%ebx,%edx
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%edx,1),%edx
 sub    $0x175a,%edx
 mov    %al,(%edx)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
 movzbl 0x11(%eax),%eax
 imul   $0x43,%ebx,%edx
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%edx,1),%edx
 sub    $0x1759,%edx
 mov    %al,(%edx)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
 mov    0x14(%eax),%eax
 imul   $0x43,%ebx,%edx
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%edx,1),%edx
 sub    $0x1775,%edx
 mov    %eax,0x1d(%edx)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
 mov    0x18(%eax),%eax
 imul   $0x43,%ebx,%edx
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%edx,1),%edx
+sub    $0x1771,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x1c(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
+sub    $0x176d,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x20(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
+sub    $0x1769,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x24(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
 sub    $0x1765,%edx
-mov    %eax,0x11(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x1c(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1765,%edx
-mov    %eax,0x15(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x20(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1765,%edx
-mov    %eax,0x19(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x24(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1765,%edx
 mov    %eax,0x1d(%edx)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
 mov    0x28(%eax),%eax
 imul   $0x43,%ebx,%edx
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%edx,1),%edx
+sub    $0x1761,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x2c(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
+sub    $0x175d,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x30(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
+sub    $0x1759,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x34(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
 sub    $0x1755,%edx
-mov    %eax,0x11(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x2c(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1755,%edx
-mov    %eax,0x15(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x30(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1755,%edx
-mov    %eax,0x19(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x34(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1755,%edx
 mov    %eax,0x1d(%edx)
 mov    -0xc(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
 mov    0x38(%eax),%eax
 imul   $0x43,%ebx,%edx
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%edx,1),%edx
+sub    $0x1751,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x3c(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
+sub    $0x174d,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x40(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
+sub    $0x1749,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x44(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
 sub    $0x1745,%edx
-mov    %eax,0x11(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x3c(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1745,%edx
-mov    %eax,0x15(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x40(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1745,%edx
-mov    %eax,0x19(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x44(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1745,%edx
 mov    %eax,0x1d(%edx)
 addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x58,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x3a9>
+cmpl   $0x58,-0xc(%ebp)
+jbe    <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x3a2>
 movl   $0x59,-0x1773(%ebp)
 lea    -0x177d(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x1f0,0x8(%esp)
 movl   $&_ZZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_Dungeon_Statistic_Party_Charac : (%d) 개 패킷 전송\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x0,-0xc(%ebp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x68(%eax),%edx
 lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI16STPartyCharacKey20PartyCharacStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x55>
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x447>
+je     <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x440>
 mov    -0xc(%ebp),%eax
 mov    %eax,-0x1773(%ebp)
 movl   $0x1fa,0x8(%esp)
 movl   $&_ZZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Packet_DBMW_Dungeon_Statistic_Party_Charac : (%d) 개 패킷 전송\n",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0x177d(%ebp),%eax
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

/* StatisticManager::SendDBPartyCharacStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined2 *puVar4;
  int iVar5;
  Packet_DBMW_Dungeon_Statistic_Party_Charac local_1781 [10];
  uint local_1777;
  undefined2 uStack_1773;
  undefined4 uStack_1771;
  undefined1 auStack_176d [3];
  undefined4 uStack_176a;
  undefined1 auStack_1766 [2];
  undefined4 auStack_1764 [1487];
  map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
  local_28 [4];
  map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
  local_24 [4];
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  uint local_10;
  
  Packet_DBMW_Dungeon_Statistic_Party_Charac::Packet_DBMW_Dungeon_Statistic_Party_Charac(local_1781)
  ;
  local_10 = 0;
  cVar3 = std::
          map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
          ::empty((map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
                   *)(this + 0x68));
  if (cVar3 != '\x01') {
    std::
    map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<STPartyCharacKey,PartyCharacStatistic,std::less<STPartyCharacKey>,std::allocator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>>
      ::end(local_24);
      cVar3 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator!=((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28,(_Rb_tree_iterator *)local_24);
      uVar2 = local_10;
      if (cVar3 == '\0') break;
      puVar4 = (undefined2 *)
               std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
               operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                           *)local_28);
      uVar1 = local_10;
      *(undefined2 *)((int)&uStack_1773 + uVar2 * 0x43) = *puVar4;
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar2 = local_10;
      *(undefined4 *)(auStack_176d + uVar1 * 0x43 + -4) = *(undefined4 *)(iVar5 + 4);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar1 = local_10;
      auStack_176d[uVar2 * 0x43] = *(undefined1 *)(iVar5 + 8);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar2 = local_10;
      auStack_176d[uVar1 * 0x43 + 1] = *(undefined1 *)(iVar5 + 9);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar1 = local_10;
      auStack_176d[uVar2 * 0x43 + 2] = *(undefined1 *)(iVar5 + 10);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar2 = local_10;
      *(undefined4 *)(auStack_176d + uVar1 * 0x43 + 3) = *(undefined4 *)(iVar5 + 0xc);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar1 = local_10;
      auStack_1766[uVar2 * 0x43] = *(undefined1 *)(iVar5 + 0x10);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar2 = local_10;
      auStack_1766[uVar1 * 0x43 + 1] = *(undefined1 *)(iVar5 + 0x11);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar1 = local_10;
      *(undefined4 *)(auStack_1766 + uVar2 * 0x43 + 2) = *(undefined4 *)(iVar5 + 0x14);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar2 = local_10;
      *(undefined4 *)((int)auStack_1764 + uVar1 * 0x43 + 4) = *(undefined4 *)(iVar5 + 0x18);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar1 = local_10;
      *(undefined4 *)((int)auStack_1764 + uVar2 * 0x43 + 8) = *(undefined4 *)(iVar5 + 0x1c);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar2 = local_10;
      *(undefined4 *)((int)auStack_1764 + uVar1 * 0x43 + 0xc) = *(undefined4 *)(iVar5 + 0x20);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar1 = local_10;
      *(undefined4 *)((int)auStack_1764 + uVar2 * 0x43 + 0x10) = *(undefined4 *)(iVar5 + 0x24);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar2 = local_10;
      *(undefined4 *)((int)auStack_1764 + uVar1 * 0x43 + 0x14) = *(undefined4 *)(iVar5 + 0x28);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar1 = local_10;
      *(undefined4 *)((int)auStack_1764 + uVar2 * 0x43 + 0x18) = *(undefined4 *)(iVar5 + 0x2c);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar2 = local_10;
      *(undefined4 *)((int)auStack_1764 + uVar1 * 0x43 + 0x1c) = *(undefined4 *)(iVar5 + 0x30);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar1 = local_10;
      *(undefined4 *)((int)auStack_1764 + uVar2 * 0x43 + 0x20) = *(undefined4 *)(iVar5 + 0x34);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar2 = local_10;
      *(undefined4 *)((int)auStack_1764 + uVar1 * 0x43 + 0x24) = *(undefined4 *)(iVar5 + 0x38);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar1 = local_10;
      *(undefined4 *)((int)auStack_1764 + uVar2 * 0x43 + 0x28) = *(undefined4 *)(iVar5 + 0x3c);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      uVar2 = local_10;
      *(undefined4 *)((int)auStack_1764 + uVar1 * 0x43 + 0x2c) = *(undefined4 *)(iVar5 + 0x40);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>
                          *)local_28);
      *(undefined4 *)((int)auStack_1764 + uVar2 * 0x43 + 0x30) = *(undefined4 *)(iVar5 + 0x44);
      local_10 = local_10 + 1;
      if (0x58 < local_10) {
        local_1777 = 0x59;
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_1781);
        CMyFileLog::CMyFileLog(local_20,"SendDBPartyCharacStatistic",0x1f0);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_20,"./log/statistic",&DAT_080f228c,local_10);
        local_10 = 0;
      }
      std::_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>>::operator++
                ((_Rb_tree_iterator<std::pair<STPartyCharacKey_const,PartyCharacStatistic>> *)
                 local_28);
    }
    if (local_10 != 0) {
      local_1777 = local_10;
      CMyFileLog::CMyFileLog(local_18,"SendDBPartyCharacStatistic",0x1fa);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/statistic",&DAT_080f228c,local_10);
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_1781);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 470 行）：

```cpp
void StatisticManager::SendDBPartyCharacStatistic(CServerHandler* handler)
{
    Packet_DBMW_Dungeon_Statistic_Party_Charac pkt;
    unsigned int idx = 0;
    if (!m_partyCharac.empty())
    {
        for (std::map<STPartyCharacKey, PartyCharacStatistic>::iterator it = m_partyCharac.begin();
             it != m_partyCharac.end(); ++it)
        {
            pkt.m_items[idx].m_channelNo = it->first.m_channelNo;
            pkt.m_items[idx].m_dungeonIndex = it->first.m_dungeonIndex;
            pkt.m_items[idx].m_dungeonDiff = it->first.m_dungeonDiff;
            pkt.m_items[idx].m_dungeonStandardLevel = it->first.m_dungeonStandardLevel;
            pkt.m_items[idx].m_success = it->first.m_success;
            pkt.m_items[idx].m_characJob = it->first.m_characJob;
            pkt.m_items[idx].m_characGrow = it->first.m_characGrow;
            pkt.m_items[idx].m_partyUserCount = it->first.m_partyUserCount;
            pkt.m_items[idx].m_data[0] = it->second.m_data[0];
            pkt.m_items[idx].m_data[1] = it->second.m_data[1];
            pkt.m_items[idx].m_data[2] = it->second.m_data[2];
            pkt.m_items[idx].m_data[3] = it->second.m_data[3];
            pkt.m_items[idx].m_data[4] = it->second.m_data[4];
            pkt.m_items[idx].m_data[5] = it->second.m_data[5];
            pkt.m_items[idx].m_data[6] = it->second.m_data[6];
            pkt.m_items[idx].m_data[7] = it->second.m_data[7];
            pkt.m_items[idx].m_data[8] = it->second.m_data[8];
            pkt.m_items[idx].m_data[9] = it->second.m_data[9];
            pkt.m_items[idx].m_data[10] = it->second.m_data[10];
            pkt.m_items[idx].m_data[11] = it->second.m_data[11];
            pkt.m_items[idx].m_data[12] = it->second.m_data[12];
            idx++;
            if (idx > 0x58)
            {
                pkt.m_count = 0x59;
                handler->SendToDB((PacketHeader*)&pkt);
                DNF_LOG_SCOPE_LINE(0x1f0, "./log/statistic", "Packet_DBMW_Dungeon_Statistic_Party_Charac : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb\n", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            pkt.m_count = idx;
            DNF_LOG_SCOPE_LINE(0x1fa, "./log/statistic", "Packet_DBMW_Dungeon_Statistic_Party_Charac : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xc0\xfc\xbc\xdb\n", idx);
            handler->SendToDB((PacketHeader*)&pkt);
        }
    }
}
```
