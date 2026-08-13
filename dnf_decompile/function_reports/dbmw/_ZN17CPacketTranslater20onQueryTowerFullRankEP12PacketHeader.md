# _ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader

`CPacketTranslater::onQueryTowerFullRank(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80970dc` | `0x465` | `0x80d886a` | `0x3e8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,297 +1,251 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x184c,%esp
+sub    $0x1830,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x459>
+je     <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x3dd>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-lea    -0x68(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI13stTowerRank_tSaIS0_EEC1Ev>
-mov    -0x2c(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    0xe(%eax),%edx
-mov    -0x2c(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 add    $0x50,%ecx
 mov    %edx,0xc(%esp)
-lea    -0x68(%ebp),%edx
+lea    -0x4c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager18queryTowerFullRankEjRSt6vectorI13stTowerRank_tSaIS1_EEj>
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x371>
+jne    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x2f5>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
-mov    %eax,-0x28(%ebp)
-lea    -0x182b(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x1817(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33Packet_Reply_Load_Tower_Full_RankC1Ev>
-movb   $0x1,-0x1821(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0xe(%eax),%eax
+movb   $0x1,-0x180d(%ebp)
+mov    -0x18(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 cmp    $0x2710,%eax
-je     <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x9d>
-movb   $0x0,-0x1821(%ebp)
-lea    -0x68(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x9e>
+movb   $0x0,-0x180d(%ebp)
+movl   $0x59b,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorI13stTowerRank_tSaIS0_EE4sizeEv>
-mov    %eax,-0x181c(%ebp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt6vectorI13stTowerRank_tSaIS0_EE4sizeEv>
-mov    %eax,%ebx
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%esi
-movl   $0x59b,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    -0x18(%ebp),%edx
+add    $0xa,%edx
+mov    (%edx),%edx
+mov    %eax,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $"(tower_idx:%d)(rank count:%d)\n",0x8(%esp)
 movl   $"./log/DeathTower",0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x20(%ebp)
 lea    -0x54(%ebp),%eax
-lea    -0x68(%ebp),%edx
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x0,-0x10(%ebp)
+lea    -0x40(%ebp),%eax
+lea    -0x4c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI13stTowerRank_tSaIS0_EE5beginEv>
 sub    $0x4,%esp
-lea    -0x54(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0x40(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPK13stTowerRank_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
-jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x27d>
-mov    -0x24(%ebp),%ebx
-lea    -0x6c(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x205>
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPK13stTowerRank_tSt6vectorIS1_SaIS1_EEEdeEv>
-mov    %eax,%edx
-imul   $0x65,%ebx,%eax
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x1803,%eax
-add    $0x3,%eax
-mov    $0x65,%ebx
-mov    %eax,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x176>
-movzbl (%edx),%ecx
-mov    %cl,(%eax)
-add    $0x1,%eax
-add    $0x1,%edx
-sub    $0x1,%ebx
-mov    %eax,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x18e>
-movzwl (%edx),%ecx
-mov    %cx,(%eax)
-add    $0x2,%eax
-add    $0x2,%edx
-sub    $0x2,%ebx
-mov    %ebx,%ecx
-shr    $0x2,%ecx
-mov    %eax,%edi
-mov    %edx,%esi
-rep movsl %ds:(%esi),%es:(%edi)
-mov    %esi,%edx
-mov    %edi,%eax
-mov    $0x0,%ecx
-mov    %ebx,%esi
-and    $0x2,%esi
-test   %esi,%esi
-je     <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x1b6>
-movzwl (%edx,%ecx,1),%esi
-mov    %si,(%eax,%ecx,1)
-add    $0x2,%ecx
-and    $0x1,%ebx
-test   %ebx,%ebx
-je     <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x1c4>
-movzbl (%edx,%ecx,1),%edx
-mov    %dl,(%eax,%ecx,1)
-addl   $0x1,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-cmp    $0x3b,%eax
-jbe    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x272>
-mov    -0x24(%ebp),%eax
-mov    %eax,-0x1820(%ebp)
-movw   $0x17bf,-0x1829(%ebp)
-movl   $0x17bf,-0x20(%ebp)
-lea    -0x182b(%ebp),%eax
-mov    -0x20(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+lea    -0x1817(%ebp),%edx
+mov    -0x10(%ebp),%ecx
+imul   $0x65,%ecx,%ecx
+add    $0x13,%ecx
+add    %ecx,%edx
+movl   $0x65,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x3b,-0x10(%ebp)
+jle    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x1fa>
+mov    -0x10(%ebp),%eax
+mov    %al,-0x180c(%ebp)
+movw   $0x17bf,-0x1815(%ebp)
+lea    -0x1817(%ebp),%eax
+movl   $0x17bf,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
 movl   $0x5a8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x24(%ebp),%eax
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"(tower_idx:%d)(send count:%d)\n",0x8(%esp)
 movl   $"./log/DeathTower",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x0,-0x24(%ebp)
-movb   $0x0,-0x1821(%ebp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x0,-0x10(%ebp)
+movb   $0x0,-0x180d(%ebp)
 movl   $0x30d40,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
-lea    -0x6c(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPK13stTowerRank_tSt6vectorIS1_SaIS1_EEEppEv>
-lea    -0x50(%ebp),%eax
-lea    -0x68(%ebp),%edx
+lea    -0x3c(%ebp),%eax
+lea    -0x4c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI13stTowerRank_tSaIS0_EE3endEv>
 sub    $0x4,%esp
-lea    -0x50(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPK13stTowerRank_tPS1_St6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS8_IT0_SA_EE>
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x139>
-cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x371>
-mov    -0x24(%ebp),%eax
-mov    %eax,-0x1820(%ebp)
-mov    -0x24(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x122>
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x2f5>
+mov    -0x10(%ebp),%eax
+mov    %al,-0x180c(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 lea    0x0(,%eax,4),%ecx
 add    %ecx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    $0x13,%eax
-mov    %ax,-0x1829(%ebp)
-movzwl -0x1829(%ebp),%eax
-movzwl %ax,%eax
-mov    %eax,-0x20(%ebp)
-lea    -0x182b(%ebp),%eax
-mov    -0x20(%ebp),%edx
+mov    %ax,-0x1815(%ebp)
+movzwl -0x1815(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x1817(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
 movl   $0x5b3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"(tower_idx:%d)(send count:%d)\n",0x8(%esp)
 movl   $"./log/DeathTower",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x371>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x2f5>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x68(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI13stTowerRank_tSaIS0_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x381>
-lea    -0x68(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x305>
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI13stTowerRank_tSaIS0_EED1Ev>
-jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x45a>
+jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x3de>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x3fd>
+jne    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x381>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x5b9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onQueryTowerFullRank() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x3f6>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x37a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x45a>
+jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x3de>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x5be,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onQueryTowerFullRank() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x452>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x3d6>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x45a>
+jmp    <T> <_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader+0x3de>
 nop
-lea    -0xc(%ebp),%esp
+lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onQueryTowerFullRank(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  Packet_Reply_Load_Tower_Full_Rank local_182f [2];
  ushort local_182d;
  undefined1 local_1825;
  uint local_1824;
  undefined4 local_1820;
  undefined1 auStack_181c [6060];
  __normal_iterator<stTowerRank_t_const*,std::vector<stTowerRank_t,std::allocator<stTowerRank_t>>>
  local_70 [4];
  vector<stTowerRank_t,std::allocator<stTowerRank_t>> local_6c [12];
  CMyFileLog local_60 [8];
  __normal_iterator local_58 [4];
  __normal_iterator local_54 [4];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [24];
  PacketHeader *local_30;
  CMonitorServer *local_2c;
  uint local_28;
  uint local_24;
  
  bVar10 = 0;
  if (m_pclApp != 0) {
    local_30 = param_1;
                    /* try { // try from 08097101 to 08097105 has its CatchHandler @ 0809745d */
    std::vector<stTowerRank_t,std::allocator<stTowerRank_t>>::vector(local_6c);
                    /* try { // try from 0809712d to 0809742e has its CatchHandler @ 08097438 */
    cVar2 = CDBManager::queryTowerFullRank
                      ((CDBManager *)(m_pclApp + 0x50),*(uint *)(local_30 + 10),(vector *)local_6c,
                       *(uint *)(local_30 + 0xe));
    if (cVar2 == '\x01') {
      local_2c = (CMonitorServer *)
                 CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
      Packet_Reply_Load_Tower_Full_Rank::Packet_Reply_Load_Tower_Full_Rank(local_182f);
      local_1825 = *(int *)(local_30 + 0xe) == 10000;
      local_1820 = std::vector<stTowerRank_t,std::allocator<stTowerRank_t>>::size(local_6c);
      uVar4 = std::vector<stTowerRank_t,std::allocator<stTowerRank_t>>::size(local_6c);
      uVar1 = *(undefined4 *)(local_30 + 10);
      CMyFileLog::CMyFileLog(local_60,"onQueryTowerFullRank",0x59b);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_60,"./log/DeathTower","(tower_idx:%d)(rank count:%d)\n",uVar1,uVar4);
      local_28 = 0;
      local_24 = 0;
      std::vector<stTowerRank_t,std::allocator<stTowerRank_t>>::begin();
      __gnu_cxx::
      __normal_iterator<stTowerRank_t_const*,std::vector<stTowerRank_t,std::allocator<stTowerRank_t>>>
      ::__normal_iterator<stTowerRank_t*>(local_70,local_58);
      while( true ) {
        std::vector<stTowerRank_t,std::allocator<stTowerRank_t>>::end();
        bVar3 = __gnu_cxx::operator!=(local_70,local_54);
        uVar7 = local_28;
        if (!bVar3) break;
        puVar5 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<stTowerRank_t_const*,std::vector<stTowerRank_t,std::allocator<stTowerRank_t>>>
                 ::operator*(local_70);
        puVar6 = (undefined4 *)(auStack_181c + uVar7 * 0x65);
        uVar9 = 0x65;
        bVar3 = ((uint)puVar6 & 1) != 0;
        if (bVar3) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar6 = (undefined4 *)(auStack_181c + uVar7 * 0x65 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          uVar9 = 100;
        }
        if (((uint)puVar6 & 2) != 0) {
          *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
          puVar6 = (undefined4 *)((int)puVar6 + 2);
          puVar5 = (undefined4 *)((int)puVar5 + 2);
          uVar9 = uVar9 - 2;
        }
        for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
        }
        iVar8 = 0;
        if ((uVar9 & 2) != 0) {
          *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
          iVar8 = 2;
        }
        if (!bVar3) {
          *(undefined1 *)((int)puVar6 + iVar8) = *(undefined1 *)((int)puVar5 + iVar8);
        }
        local_28 = local_28 + 1;
        if (0x3b < local_28) {
          local_182d = 0x17bf;
          local_24 = 0x17bf;
          local_1824 = local_28;
          CMonitorServer::SendToServer(local_2c,(char *)local_182f,0x17bf);
          uVar1 = *(undefined4 *)(local_30 + 10);
          CMyFileLog::CMyFileLog(local_50,"onQueryTowerFullRank",0x5a8);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_50,"./log/DeathTower","(tower_idx:%d)(send count:%d)\n",uVar1,local_28);
          local_28 = 0;
          local_1825 = 0;
          DNFFLib::Sleep_Ext(0,200000);
        }
        __gnu_cxx::
        __normal_iterator<stTowerRank_t_const*,std::vector<stTowerRank_t,std::allocator<stTowerRank_t>>>
        ::operator++(local_70);
      }
      if (local_28 != 0) {
        local_1824 = local_28;
        local_182d = (short)local_28 * 0x65 + 0x13;
        local_24 = (uint)local_182d;
        CMonitorServer::SendToServer(local_2c,(char *)local_182f,local_24);
        uVar1 = *(undefined4 *)(local_30 + 10);
        CMyFileLog::CMyFileLog(local_48,"onQueryTowerFullRank",0x5b3);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_48,"./log/DeathTower","(tower_idx:%d)(send count:%d)\n",uVar1,local_28);
        local_28 = 0;
      }
    }
                    /* try { // try from 08097453 to 08097457 has its CatchHandler @ 0809745d */
    std::vector<stTowerRank_t,std::allocator<stTowerRank_t>>::~vector(local_6c);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2189 行）：

```cpp
void CPacketTranslater::onQueryTowerFullRank(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Query_Tower_Full_Rank* pkt =
            (Packet_DBMW_Query_Tower_Full_Rank*)header;
        std::vector<stTowerRank_t> ranks;
        if (!m_pclApp->m_dbManager.queryTowerFullRank(
                pkt->m_towerIndex, ranks, pkt->m_limit))
            return;
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        Packet_Reply_Load_Tower_Full_Rank reply;
        reply.m_fieldA = 1;
        if (*(unsigned int*)((char*)pkt + 0xe) != 0x2710)
            reply.m_fieldA = 0;
        CMyFileLog log1(__FUNCTION__, 0x59b);
        log1("./log/DeathTower", "(tower_idx:%d)(rank count:%d)\n",
             *(unsigned int*)((char*)pkt + 0xa), ranks.size());
        int i = 0;
        for (std::vector<stTowerRank_t>::const_iterator it = ranks.begin();
             it != ranks.end(); ++it)
        {
            memcpy((char*)&reply + 0x13 + i * 0x65, &*it, 0x65);
            i++;
            if (i > 0x3b)
            {
                reply.m_fieldB = (char)i;
                reply.packetSize = 0x17bf;
                ms->SendToServer((char*)&reply, 0x17bf);
                DNF_LOG_SCOPE_LINE(0x5a8,
                    "./log/DeathTower",
                    "(tower_idx:%d)(send count:%d)\n",
                    *(unsigned int*)((char*)pkt + 0xa),
                    i
                );

                i = 0;
                reply.m_fieldA = 0;
                DNFFLib::Sleep_Ext(0, 0x30d40);
            }
        }
        if (i != 0)
        {
            reply.m_fieldB = (char)i;
            reply.packetSize = (unsigned short)(0x13 + i * 0x65);
            ms->SendToServer((char*)&reply, reply.packetSize);
            DNF_LOG_SCOPE_LINE(0x5b3,
                "./log/DeathTower",
                "(tower_idx:%d)(send count:%d)\n",
                *(unsigned int*)((char*)pkt + 0xa),
                i
            );

            i = 0;
        }
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::onQueryTowerFullRank() Exception Break",
                  0x5b9, 0x5be);
}
```
