# _ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler

`StatisticManager::SendDBDeathTowerPlayDataJobStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806fd9c` | `0x3c0` | `0x806ff7c` | `0x216` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,253 +1,140 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0x187c,%esp
-lea    -0x182a(%ebp),%eax
+sub    $0x1824,%esp
+lea    -0x1816(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN45Packet_DBMW_DeathTower_Statistic_Playdata_JobC1Ev>
-movl   $0x0,-0x1c(%ebp)
+movl   $0x0,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x98,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x3b5>
+je     <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x211>
 mov    0x8(%ebp),%eax
 lea    0x98(%eax),%edx
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x31f>
-mov    -0x1c(%ebp),%ebx
-lea    -0x3c(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x176>
+lea    -0x1816(%ebp),%ecx
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+add    $0xe,%eax
+lea    (%ecx,%eax,1),%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEEptEv>
-movzbl (%eax),%eax
-mov    %ebx,%edx
-shl    $0x4,%edx
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1812,%edx
-mov    %al,0xe(%edx)
-mov    -0x1c(%ebp),%ebx
-lea    -0x3c(%ebp),%eax
+movzbl (%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    %dl,(%eax)
+mov    -0xc(%ebp),%eax
+lea    0x2(%eax),%ebx
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEEptEv>
 movzwl 0x2(%eax),%eax
-mov    %ebx,%edx
-shl    $0x4,%edx
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1812,%edx
-mov    %ax,0xf(%edx)
-mov    -0x1c(%ebp),%ebx
-lea    -0x3c(%ebp),%eax
+mov    %ax,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0x4(%eax),%ebx
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEEptEv>
+mov    0x4(%eax),%eax
+mov    %eax,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0x8(%eax),%ebx
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEEptEv>
 movzbl 0x8(%eax),%eax
-mov    %ebx,%edx
-shl    $0x4,%edx
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1812,%edx
-mov    %al,0x15(%edx)
-mov    -0x1c(%ebp),%ebx
-lea    -0x3c(%ebp),%eax
+mov    %al,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0xc(%eax),%ebx
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEEptEv>
-mov    0x4(%eax),%eax
-mov    %ebx,%edx
-shl    $0x4,%edx
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1812,%edx
-mov    %eax,0x11(%edx)
-mov    -0x1c(%ebp),%ebx
-lea    -0x3c(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0x10(%eax),%ebx
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEEptEv>
 mov    0x10(%eax),%eax
-mov    %ebx,%edx
-shl    $0x4,%edx
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1812,%edx
-mov    %eax,0x1a(%edx)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEEptEv>
-mov    0x10(%eax),%eax
-test   %eax,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x141>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEEptEv>
-movl   $0x1,0x10(%eax)
-mov    -0x1c(%ebp),%esi
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEEptEv>
-mov    0xc(%eax),%ebx
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEEptEv>
-mov    0x10(%eax),%eax
-mov    %eax,-0x184c(%ebp)
-mov    %ebx,%edx
-mov    %edx,%eax
-sar    $0x1f,%edx
-idivl  -0x184c(%ebp)
-mov    %esi,%edx
-shl    $0x4,%edx
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1812,%edx
-mov    %eax,0x16(%edx)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEEptEv>
-movzwl 0x2(%eax),%eax
-test   %ax,%ax
-sete   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x29e>
-mov    -0x1c(%ebp),%eax
-shl    $0x4,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x1812,%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x1844(%ebp)
-mov    -0x1c(%ebp),%eax
-shl    $0x4,%eax
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x1812,%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x1840(%ebp)
-mov    -0x1c(%ebp),%eax
-shl    $0x4,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x1812,%eax
-movzbl 0x15(%eax),%eax
-movsbl %al,%eax
-mov    %eax,-0x183c(%ebp)
-mov    -0x1c(%ebp),%eax
-shl    $0x4,%eax
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x1812,%eax
-mov    0x11(%eax),%eax
-mov    %eax,%edi
-mov    -0x1c(%ebp),%eax
-shl    $0x4,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x1812,%eax
-movzwl 0xf(%eax),%eax
-movswl %ax,%esi
-mov    -0x1c(%ebp),%eax
-shl    $0x4,%eax
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x1812,%eax
-movzbl 0xe(%eax),%eax
-movsbl %al,%ebx
-movl   $0x23d,0x8(%esp)
-movl   $&_ZZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x1844(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    -0x1840(%ebp),%edx
-mov    %edx,0x1c(%esp)
-mov    -0x183c(%ebp),%ecx
-mov    %ecx,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"SendDBDeathTowerPlayDataJobStatistic : 0 level error!! deathTower_type (%d) level (%d) job_ (%d) grow_type_ (%d) / updateCount (%d) clearStage (%d)\n",0x8(%esp)
-movl   $"./log/statistic",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x314>
-addl   $0x1,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-cmp    $0x17d,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x314>
-movl   $0x17e,-0x1820(%ebp)
-lea    -0x182a(%ebp),%eax
+mov    %eax,(%ebx)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x63,-0x10(%ebp)
+jle    <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x16b>
+lea    -0x1816(%ebp),%eax
+add    $0xa,%eax
+movl   $0x64,(%eax)
+lea    -0x1816(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-movl   $0x24e,0x8(%esp)
+movl   $0x236,0x8(%esp)
 movl   $&_ZZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x1c(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
-movl   $"Packet_DBMW_DeathTower_Statistic_Playdata_Job : (%d) 개 패킷 전송\n",0x8(%esp)
+movl   $"DeathTowerPlayDataJob DB Sent %d",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x0,-0x1c(%ebp)
-lea    -0x3c(%ebp),%eax
+movl   $0x0,-0x10(%ebp)
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x98(%eax),%edx
-lea    -0x38(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x38(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x5c>
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x3b5>
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x1820(%ebp)
-movl   $0x257,0x8(%esp)
-movl   $&_ZZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x1c(%ebp),%eax
-mov    %eax,0xc(%esp)
-movl   $"Packet_DBMW_DeathTower_Statistic_Playdata_Job : (%d) 개 패킷 전송\n",0x8(%esp)
-movl   $"./log/statistic",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x182a(%ebp),%eax
+jne    <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x5a>
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x211>
+lea    -0x1816(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x1816(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-lea    -0xc(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+movl   $0x240,0x8(%esp)
+movl   $&_ZZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x10(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"DeathTowerPlayDataJob DB Sent %d",0x8(%esp)
+movl   $"./log/statistic",0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x4(%ebp),%ebx
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBDeathTowerPlayDataJobStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  Packet_DBMW_DeathTower_Statistic_Playdata_Job local_182e [10];
  uint local_1824;
  char cStack_1820;
  short sStack_181f;
  char acStack_181d [4];
  char cStack_1819;
  int aiStack_1818 [1526];
  map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
  local_40 [4];
  map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
  local_3c [4];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  uint local_20;
  
  Packet_DBMW_DeathTower_Statistic_Playdata_Job::Packet_DBMW_DeathTower_Statistic_Playdata_Job
            (local_182e);
  local_20 = 0;
  cVar6 = std::
          map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
          ::empty((map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
                   *)(this + 0x98));
  if (cVar6 != '\x01') {
    std::
    map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
    ::begin(local_40);
    while( true ) {
      std::
      map<STDeathTowerPlayDataJobStatisticKey,PlayDataJobStatistic,std::less<STDeathTowerPlayDataJobStatisticKey>,std::allocator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>>
      ::end(local_3c);
      cVar6 = std::
              _Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
              ::operator!=((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                            *)local_40,(_Rb_tree_iterator *)local_3c);
      uVar5 = local_20;
      if (cVar6 == '\0') break;
      pcVar7 = (char *)std::
                       _Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                       ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                                     *)local_40);
      uVar4 = local_20;
      (&cStack_1820)[uVar5 * 0x10] = *pcVar7;
      iVar8 = std::
              _Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                            *)local_40);
      uVar5 = local_20;
      (&sStack_181f)[uVar4 * 8] = *(short *)(iVar8 + 2);
      iVar8 = std::
              _Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                            *)local_40);
      uVar4 = local_20;
      (&cStack_1819)[uVar5 * 0x10] = *(char *)(iVar8 + 8);
      iVar8 = std::
              _Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                            *)local_40);
      uVar5 = local_20;
      *(undefined4 *)(acStack_181d + uVar4 * 0x10) = *(undefined4 *)(iVar8 + 4);
      iVar8 = std::
              _Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                            *)local_40);
      aiStack_1818[uVar5 * 4 + 1] = *(int *)(iVar8 + 0x10);
      iVar8 = std::
              _Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                            *)local_40);
      if (*(int *)(iVar8 + 0x10) == 0) {
        iVar8 = std::
                _Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                              *)local_40);
        *(undefined4 *)(iVar8 + 0x10) = 1;
      }
      uVar5 = local_20;
      iVar8 = std::
              _Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                            *)local_40);
      iVar8 = *(int *)(iVar8 + 0xc);
      iVar9 = std::
              _Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                            *)local_40);
      aiStack_1818[uVar5 * 4] = iVar8 / *(int *)(iVar9 + 0x10);
      iVar8 = std::
              _Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
              ::operator->((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                            *)local_40);
      if (*(short *)(iVar8 + 2) == 0) {
        iVar8 = aiStack_1818[local_20 * 4];
        iVar9 = aiStack_1818[local_20 * 4 + 1];
        cVar6 = (&cStack_1819)[local_20 * 0x10];
        uVar3 = *(undefined4 *)(acStack_181d + local_20 * 0x10);
        sVar2 = (&sStack_181f)[local_20 * 8];
        cVar1 = (&cStack_1820)[local_20 * 0x10];
        CMyFileLog::CMyFileLog(local_38,"SendDBDeathTowerPlayDataJobStatistic",0x23d);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_38,"./log/statistic",
                   "SendDBDeathTowerPlayDataJobStatistic : 0 level error!! deathTower_type (%d) level (%d) job_ (%d) grow_type_ (%d) / updateCount (%d) clearStage (%d)\n"
                   ,(int)cVar1,(int)sVar2,uVar3,(int)cVar6,iVar9,iVar8);
      }
      else {
        local_20 = local_20 + 1;
        if (0x17d < local_20) {
          local_1824 = 0x17e;
          CServerHandler::SendToDB(param_1,(PacketHeader *)local_182e);
          CMyFileLog::CMyFileLog(local_30,"SendDBDeathTowerPlayDataJobStatistic",0x24e);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_30,"./log/statistic",&DAT_080f23a0,local_20);
          local_20 = 0;
        }
      }
      std::
      _Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>::
      operator++((_Rb_tree_iterator<std::pair<STDeathTowerPlayDataJobStatisticKey_const,PlayDataJobStatistic>>
                  *)local_40);
    }
    if (local_20 != 0) {
      local_1824 = local_20;
      CMyFileLog::CMyFileLog(local_28,"SendDBDeathTowerPlayDataJobStatistic",599);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_28,"./log/statistic",&DAT_080f23a0,local_20);
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_182e);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 508 行）：

```cpp
void StatisticManager::SendDBDeathTowerPlayDataJobStatistic(CServerHandler* handler)
{
    Packet_DBMW_DeathTower_Statistic_Playdata_Job pkt;
    int idx = 0;
    if (!m_deathTowerJob.empty())
    {
        for (std::map<STDeathTowerPlayDataJobStatisticKey, PlayDataJobStatistic>::iterator it =
                 m_deathTowerJob.begin(); it != m_deathTowerJob.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0xc;
            slot[0] = it->first.m_field0;
            *(unsigned short*)(slot + 2) = it->first.m_field2;
            *(unsigned int*)(slot + 4) = it->first.m_field4;
            slot[8] = it->first.m_field8;
            *(int*)(slot + 0xc) = it->second.m_data[0];
            *(int*)(slot + 0x10) = it->second.m_data[1];
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                DNF_LOG_SCOPE_LINE(0x236, "./log/statistic", "DeathTowerPlayDataJob DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            DNF_LOG_SCOPE_LINE(0x240, "./log/statistic", "DeathTowerPlayDataJob DB Sent %d", idx);
        }
    }
}
```
