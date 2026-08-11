# _ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler

`StatisticManager::SendDBPartyStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806eee4` | `0x4ba` | `0x806f226` | `0x27f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,369 +1,175 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x17b4,%esp
-lea    -0x17a2(%ebp),%eax
+sub    $0x17c4,%esp
+lea    -0x17aa(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_DBMW_Dungeon_Statistic_PartyC1Ev>
-movl   $0x0,-0xc(%ebp)
+movl   $0x0,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x38,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI19STPartyStatisticKey14PartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x4b5>
+je     <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x27a>
 mov    0x8(%ebp),%eax
 lea    0x38(%eax),%edx
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPartyStatisticKey14PartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x422>
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x1e2>
+lea    -0x17aa(%ebp),%edx
+mov    -0x14(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0xe,%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%ebx
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-movzwl (%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x178c,%eax
-mov    %cx,(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+movzwl (%eax),%eax
+mov    %ax,(%ebx)
+mov    -0x10(%ebp),%eax
+lea    0x4(%eax),%ebx
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x4(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x179a,%eax
-mov    %ecx,0x10(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,(%ebx)
+mov    -0x10(%ebp),%eax
+lea    0x8(%eax),%ebx
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-movzbl 0x8(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x179a,%eax
-mov    %cl,0x14(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+movzbl 0x8(%eax),%eax
+mov    %al,(%ebx)
+mov    -0x10(%ebp),%eax
+lea    0x9(%eax),%ebx
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-movzbl 0x9(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x179a,%eax
-mov    %cl,0x15(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+movzbl 0x9(%eax),%eax
+mov    %al,(%ebx)
+mov    -0x10(%ebp),%eax
+lea    0xa(%eax),%ebx
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-movzbl 0xa(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x179a,%eax
-mov    %cl,0x16(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+movzbl 0xa(%eax),%eax
+mov    %al,(%ebx)
+mov    -0x10(%ebp),%eax
+lea    0xb(%eax),%ebx
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-movzbl 0xb(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x179a,%eax
-mov    %cl,0x17(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+movzbl 0xb(%eax),%eax
+mov    %al,(%ebx)
+mov    -0x10(%ebp),%eax
+lea    0xc(%eax),%ebx
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-movzbl 0xc(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x179a,%eax
-mov    %cl,0x18(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+movzbl 0xc(%eax),%eax
+mov    %al,(%ebx)
+mov    -0x10(%ebp),%eax
+lea    0xd(%eax),%ebx
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-movzbl 0xd(%eax),%ecx
-mov    %ebx,%eax
+movzbl 0xd(%eax),%eax
+mov    %al,(%ebx)
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x15a>
+mov    -0xc(%ebp),%eax
 shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x179a,%eax
-mov    %cl,0x19(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+add    $0xe,%eax
+add    -0x10(%ebp),%eax
+mov    %eax,%ebx
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x10(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x179a,%eax
-mov    %ecx,0x1a(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x14(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x178a,%eax
-mov    %ecx,0xe(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x18(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x178a,%eax
-mov    %ecx,0x12(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x1c(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x178a,%eax
-mov    %ecx,0x16(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x20(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x178a,%eax
-mov    %ecx,0x1a(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x24(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x177a,%eax
-mov    %ecx,0xe(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x28(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x177a,%eax
-mov    %ecx,0x12(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x2c(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x177a,%eax
-mov    %ecx,0x16(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x30(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x177a,%eax
-mov    %ecx,0x1a(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x34(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x176a,%eax
-mov    %ecx,0xe(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x38(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x176a,%eax
-mov    %ecx,0x12(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x3c(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x176a,%eax
-mov    %ecx,0x16(%eax)
+mov    -0xc(%ebp),%edx
+add    $0x4,%edx
+mov    (%eax,%edx,4),%eax
+mov    %eax,(%ebx)
 addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x63,%eax
-seta   %al
+cmpl   $0xa,-0xc(%ebp)
+setle  %al
 test   %al,%al
-je     <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x417>
-movl   $0x64,-0x1798(%ebp)
-lea    -0x17a2(%ebp),%eax
+jne    <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x132>
+addl   $0x1,-0x14(%ebp)
+cmpl   $0x63,-0x14(%ebp)
+jle    <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x1d7>
+lea    -0x17aa(%ebp),%eax
+add    $0xa,%eax
+movl   $0x64,(%eax)
+lea    -0x17aa(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x183,0x8(%esp)
 movl   $"SendDBPartyStatistic",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
-movl   $"Packet_DBMW_Dungeon_Statistic_Party : (%d) 개 패킷 전송\n",0x8(%esp)
+movl   $"Party DB Sent %d",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x0,-0xc(%ebp)
-lea    -0x24(%ebp),%eax
+movl   $0x0,-0x14(%ebp)
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x38(%eax),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI19STPartyStatisticKey14PartyStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x55>
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x4b5>
-mov    -0xc(%ebp),%eax
-mov    %eax,-0x1798(%ebp)
-lea    -0x17a2(%ebp),%eax
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x27a>
+lea    -0x17aa(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x17aa(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x18d,0x8(%esp)
 movl   $"SendDBPartyStatistic",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
-movl   $"Packet_DBMW_Dungeon_Statistic_Party : (%d) 개 패킷 전송\n",0x8(%esp)
+movl   $"Party DB Sent %d",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBPartyStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined2 *puVar4;
  int iVar5;
  Packet_DBMW_Dungeon_Statistic_Party local_17a6 [10];
  uint local_179c;
  undefined2 uStack_1798;
  undefined4 uStack_1796;
  undefined1 auStack_1792 [6];
  undefined4 auStack_178c [1497];
  map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
  local_28 [4];
  map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
  local_24 [4];
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  uint local_10;
  
  Packet_DBMW_Dungeon_Statistic_Party::Packet_DBMW_Dungeon_Statistic_Party(local_17a6);
  local_10 = 0;
  cVar3 = std::
          map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
          ::empty((map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
                   *)(this + 0x38));
  if (cVar3 != '\x01') {
    std::
    map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<STPartyStatisticKey,PartyStatistic,std::less<STPartyStatisticKey>,std::allocator<std::pair<STPartyStatisticKey_const,PartyStatistic>>>
      ::end(local_24);
      cVar3 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator!=((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28,(_Rb_tree_iterator *)local_24);
      uVar2 = local_10;
      if (cVar3 == '\0') break;
      puVar4 = (undefined2 *)
               std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
               operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                          local_28);
      uVar1 = local_10;
      (&uStack_1798)[uVar2 * 0x1e] = *puVar4;
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar2 = local_10;
      *(undefined4 *)(auStack_1792 + uVar1 * 0x3c + -4) = *(undefined4 *)(iVar5 + 4);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar1 = local_10;
      auStack_1792[uVar2 * 0x3c] = *(undefined1 *)(iVar5 + 8);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar2 = local_10;
      auStack_1792[uVar1 * 0x3c + 1] = *(undefined1 *)(iVar5 + 9);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar1 = local_10;
      auStack_1792[uVar2 * 0x3c + 2] = *(undefined1 *)(iVar5 + 10);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar2 = local_10;
      auStack_1792[uVar1 * 0x3c + 3] = *(undefined1 *)(iVar5 + 0xb);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar1 = local_10;
      auStack_1792[uVar2 * 0x3c + 4] = *(undefined1 *)(iVar5 + 0xc);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar2 = local_10;
      auStack_1792[uVar1 * 0x3c + 5] = *(undefined1 *)(iVar5 + 0xd);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar1 = local_10;
      auStack_178c[uVar2 * 0xf] = *(undefined4 *)(iVar5 + 0x10);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar2 = local_10;
      auStack_178c[uVar1 * 0xf + 1] = *(undefined4 *)(iVar5 + 0x14);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar1 = local_10;
      auStack_178c[uVar2 * 0xf + 2] = *(undefined4 *)(iVar5 + 0x18);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar2 = local_10;
      auStack_178c[uVar1 * 0xf + 3] = *(undefined4 *)(iVar5 + 0x1c);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar1 = local_10;
      auStack_178c[uVar2 * 0xf + 4] = *(undefined4 *)(iVar5 + 0x20);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar2 = local_10;
      auStack_178c[uVar1 * 0xf + 5] = *(undefined4 *)(iVar5 + 0x24);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar1 = local_10;
      auStack_178c[uVar2 * 0xf + 6] = *(undefined4 *)(iVar5 + 0x28);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar2 = local_10;
      auStack_178c[uVar1 * 0xf + 7] = *(undefined4 *)(iVar5 + 0x2c);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar1 = local_10;
      auStack_178c[uVar2 * 0xf + 8] = *(undefined4 *)(iVar5 + 0x30);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar2 = local_10;
      auStack_178c[uVar1 * 0xf + 9] = *(undefined4 *)(iVar5 + 0x34);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      uVar1 = local_10;
      auStack_178c[uVar2 * 0xf + 10] = *(undefined4 *)(iVar5 + 0x38);
      iVar5 = std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::
              operator->((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)
                         local_28);
      auStack_178c[uVar1 * 0xf + 0xb] = *(undefined4 *)(iVar5 + 0x3c);
      local_10 = local_10 + 1;
      if (99 < local_10) {
        local_179c = 100;
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_17a6);
        CMyFileLog::CMyFileLog(local_20,"SendDBPartyStatistic",0x183);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_20,"./log/statistic",&DAT_080f2200,local_10);
        local_10 = 0;
      }
      std::_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>>::operator++
                ((_Rb_tree_iterator<std::pair<STPartyStatisticKey_const,PartyStatistic>> *)local_28)
      ;
    }
    if (local_10 != 0) {
      local_179c = local_10;
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_17a6);
      CMyFileLog::CMyFileLog(local_18,"SendDBPartyStatistic",0x18d);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/statistic",&DAT_080f2200,local_10);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 250 行）：

```cpp
void StatisticManager::SendDBPartyStatistic(CServerHandler* handler)
{
    Packet_DBMW_Dungeon_Statistic_Party pkt;
    int idx = 0;
    if (!m_party.empty())
    {
        for (std::map<STPartyStatisticKey, PartyStatistic>::iterator it = m_party.begin();
             it != m_party.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0x3c;
            *(unsigned short*)(slot + 0) = it->first.m_field0;
            *(unsigned int*)(slot + 4) = it->first.m_field4;
            slot[8] = it->first.m_field8;
            slot[9] = it->first.m_field9;
            slot[10] = it->first.m_fielda;
            slot[11] = it->first.m_fieldb;
            slot[12] = it->first.m_fieldc;
            slot[13] = it->first.m_fieldd;
            for (int k = 0; k < 11; k++)
            {
                *(int*)(slot + 0xe + k * 4) = it->second.m_data[k];
            }
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                DNF_LOG_SCOPE_LINE(0x183, "./log/statistic", "Party DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            DNF_LOG_SCOPE_LINE(0x18d, "./log/statistic", "Party DB Sent %d", idx);
        }
    }
}
```
