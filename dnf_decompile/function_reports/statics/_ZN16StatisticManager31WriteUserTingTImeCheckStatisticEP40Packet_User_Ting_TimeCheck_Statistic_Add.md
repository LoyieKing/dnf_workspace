# _ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add

`StatisticManager::WriteUserTingTImeCheckStatistic(Packet_User_Ting_TimeCheck_Statistic_Add*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8070ac6` | `0x2f5` | `0x8070a78` | `0x30c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,223 +1,226 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x70,%esp
-lea    -0x54(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22STUserTingTimeCheckKeyC1Ev>
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%ecx
 mov    $0x88888889,%edx
 mov    %ecx,%eax
 imul   %edx
 lea    (%edx,%ecx,1),%eax
 mov    %eax,%edx
 sar    $0x5,%edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-mov    %eax,-0x54(%ebp)
-mov    -0x54(%ebp),%eax
+mov    %eax,-0x60(%ebp)
+mov    -0x60(%ebp),%eax
 cmp    $0x59f,%eax
 jle    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x87>
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x2fd,0x8(%esp)
 movl   $&_ZZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_AddE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"[User Ting Wrong] %d Sec",0x8(%esp)
 movl   $"./log/Statistic",0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x2e0>
+jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x2f7>
 mov    0x8(%ebp),%eax
 lea    0xf8(%eax),%ecx
-lea    -0x58(%ebp),%eax
-lea    -0x54(%ebp),%edx
+lea    -0x64(%ebp),%eax
+lea    -0x60(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STUserTingTimeCheckKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 add    $0xf8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI22STUserTingTimeCheckKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE5emptyEv>
 test   %al,%al
 jne    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0xee>
 mov    0x8(%ebp),%eax
 lea    0xf8(%eax),%edx
-lea    -0x48(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STUserTingTimeCheckKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE3endEv>
 sub    $0x4,%esp
-lea    -0x48(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x54(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STUserTingTimeCheckKeyiEEeqERKS4_>
 test   %al,%al
 je     <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0xf5>
 mov    $0x1,%eax
 jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0xfa>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x19e>
-movl   $0x1,-0x2c(%ebp)
-lea    -0x34(%ebp),%eax
-lea    -0x2c(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    -0x54(%ebp),%edx
+je     <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x1a0>
+movl   $0x1,-0x38(%ebp)
+lea    -0x40(%ebp),%eax
+lea    -0x38(%ebp),%edx
+mov    %edx,0x8(%esp)
+lea    -0x60(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIR22STUserTingTimeCheckKeyiESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 sub    $0x4,%esp
-lea    -0x34(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK22STUserTingTimeCheckKeyiEC1IS0_iEEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0xf8(%eax),%ecx
-lea    -0x44(%ebp),%eax
-lea    -0x3c(%ebp),%edx
+lea    -0x50(%ebp),%eax
+lea    -0x48(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI22STUserTingTimeCheckKeyiSt4lessIS0_ESaISt4pairIKS0_iEEE6insertERKS5_>
 sub    $0x4,%esp
-lea    -0x3c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK22STUserTingTimeCheckKeyiED1Ev>
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI22STUserTingTimeCheckKeyiED1Ev>
-jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x1bc>
+jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x193>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x3c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK22STUserTingTimeCheckKeyiED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x186>
+jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x17b>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairI22STUserTingTimeCheckKeyiED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x2c5>
-lea    -0x58(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x2dc>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI22STUserTingTimeCheckKeyiED1Ev>
+jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x1b4>
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK22STUserTingTimeCheckKeyiEEptEv>
-add    $0x4,%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-lea    0x1(%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %edx,(%eax)
-mov    -0x54(%ebp),%eax
+mov    0x4(%eax),%edx
+add    $0x1,%edx
+mov    %edx,0x4(%eax)
+mov    -0x60(%ebp),%eax
 cmp    $0xa,%eax
-jg     <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x1e9>
-mov    -0x54(%ebp),%eax
+jg     <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x2f7>
+mov    -0x60(%ebp),%eax
 test   %eax,%eax
-jle    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x1e9>
+jle    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x2f7>
 mov    0x8(%ebp),%eax
 add    $0x110,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjiSt4lessIjESaISt4pairIKjiEEE4sizeEv>
 cmp    $0x3e8,%eax
-ja     <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x1e9>
+setbe  %al
+test   %al,%al
+je     <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x2f7>
+mov    -0x60(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    0x8(%ebp),%eax
+lea    0x110(%eax),%ecx
+lea    -0x68(%ebp),%eax
+lea    -0x34(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %ecx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE4findERS3_>
+sub    $0x4,%esp
+mov    0x8(%ebp),%eax
+add    $0x110,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt3mapIjiSt4lessIjESaISt4pairIKjiEEE5emptyEv>
+test   %al,%al
+jne    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x258>
+mov    0x8(%ebp),%eax
+lea    0x110(%eax),%edx
+lea    -0x30(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE3endEv>
+sub    $0x4,%esp
+lea    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEeqERKS3_>
+test   %al,%al
+je     <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x25f>
 mov    $0x1,%eax
-jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x1ee>
+jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x264>
 mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x2e0>
-mov    0xc(%ebp),%eax
-lea    0xe(%eax),%ecx
-mov    0x8(%ebp),%eax
-lea    0x110(%eax),%edx
-lea    -0x5c(%ebp),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE4findERS3_>
-sub    $0x4,%esp
-mov    0x8(%ebp),%eax
-add    $0x110,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt3mapIjiSt4lessIjESaISt4pairIKjiEEE5emptyEv>
-test   %al,%al
-jne    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x260>
-mov    0x8(%ebp),%eax
-lea    0x110(%eax),%edx
-lea    -0x28(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE3endEv>
-sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEeqERKS3_>
-test   %al,%al
-je     <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x267>
-mov    $0x1,%eax
-jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x26c>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x2e0>
-mov    0xc(%ebp),%eax
-lea    0xe(%eax),%ecx
-lea    -0x14(%ebp),%eax
-lea    -0x54(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIRjRiESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
-sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
+mov    %al,-0x9(%ebp)
+cmpb   $0x0,-0x9(%ebp)
+je     <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x2c6>
+movl   $0x1,-0x14(%ebp)
 lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKjiEC1IjiEEOS_IT_T0_E>
+lea    -0x14(%ebp),%edx
+mov    %edx,0x8(%esp)
+lea    -0x60(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZSt9make_pairIRiiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
+sub    $0x4,%esp
+lea    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIKjiEC1IiiEEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x110(%eax),%ecx
-lea    -0x24(%ebp),%eax
-lea    -0x1c(%ebp),%edx
+lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE6insertERKS4_>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x2e0>
+jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x2f7>
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEptEv>
+mov    0x4(%eax),%edx
+add    $0x1,%edx
+mov    %edx,0x4(%eax)
+jmp    <T> <_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add+0x2f7>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x54(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22STUserTingTimeCheckKeyD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x54(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22STUserTingTimeCheckKeyD1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::WriteUserTingTImeCheckStatistic(Packet_User_Ting_TimeCheck_Statistic_Add*) */

void __thiscall
StatisticManager::
_ZN16StatisticManager31WriteUserTingTImeCheckStatisticEP40Packet_User_Ting_TimeCheck_Statistic_Add
          (StatisticManager *this,Packet_User_Ting_TimeCheck_Statistic_Add *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  _Rb_tree_iterator<std::pair<unsigned_int_const,int>> local_60 [4];
  STUserTingTimeCheckKey local_5c [4];
  int local_58;
  CMyFileLog local_54 [8];
  map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
  local_4c [4];
  pair local_48 [8];
  pair<STUserTingTimeCheckKey_const,int> local_40 [8];
  STUserTingTimeCheckKey local_38 [8];
  undefined4 local_30;
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_2c [4];
  pair local_28 [8];
  pair<unsigned_int_const,int> local_20 [8];
  uint local_18 [2];
  int *local_10;
  
  STUserTingTimeCheckKey::STUserTingTimeCheckKey((STUserTingTimeCheckKey *)&local_58);
  local_58 = *(int *)(param_1 + 10) / 0x3c;
  if (0x59f < local_58) {
    uVar1 = *(undefined4 *)(param_1 + 10);
                    /* try { // try from 08070b24 to 08070be7 has its CatchHandler @ 08070d8b */
    CMyFileLog::CMyFileLog(local_54,"WriteUserTingTImeCheckStatistic",0x2fd);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_54,"./log/Statistic","[User Ting Wrong] %d Sec",uVar1);
    goto LAB_08070da6;
  }
  std::
  map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
  ::find(local_5c);
  cVar3 = std::
          map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
          ::empty((map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
                   *)(this + 0xf8));
  if (cVar3 == '\0') {
    std::
    map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
    ::end(local_4c);
    cVar3 = std::_Rb_tree_iterator<std::pair<STUserTingTimeCheckKey_const,int>>::operator==
                      ((_Rb_tree_iterator<std::pair<STUserTingTimeCheckKey_const,int>> *)local_5c,
                       (_Rb_tree_iterator *)local_4c);
    if (cVar3 != '\0') goto LAB_08070bb4;
    bVar2 = false;
  }
  else {
LAB_08070bb4:
    bVar2 = true;
  }
  if (bVar2) {
    local_30 = 1;
    std::make_pair<STUserTingTimeCheckKey&,int>(local_38,&local_58);
                    /* try { // try from 08070bf8 to 08070bfc has its CatchHandler @ 08070c4c */
    std::pair<STUserTingTimeCheckKey_const,int>::pair<STUserTingTimeCheckKey,int>(local_40,local_38)
    ;
                    /* try { // try from 08070c17 to 08070c1b has its CatchHandler @ 08070c37 */
    std::
    map<STUserTingTimeCheckKey,int,std::less<STUserTingTimeCheckKey>,std::allocator<std::pair<STUserTingTimeCheckKey_const,int>>>
    ::insert(local_48);
    std::pair<STUserTingTimeCheckKey_const,int>::~pair(local_40);
    std::pair<STUserTingTimeCheckKey,int>::~pair((pair<STUserTingTimeCheckKey,int> *)local_38);
  }
  else {
    iVar4 = std::_Rb_tree_iterator<std::pair<STUserTingTimeCheckKey_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<STUserTingTimeCheckKey_const,int>> *)local_5c);
    local_10 = (int *)(iVar4 + 4);
    *local_10 = *local_10 + 1;
  }
  if ((local_58 < 0xb) && (0 < local_58)) {
                    /* try { // try from 08070c9c to 08070d85 has its CatchHandler @ 08070d8b */
    uVar5 = std::
            map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
            ::size((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                    *)(this + 0x110));
    if (1000 < uVar5) goto LAB_08070caf;
    bVar2 = true;
  }
  else {
LAB_08070caf:
    bVar2 = false;
  }
  if (!bVar2) goto LAB_08070da6;
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  find((uint *)local_60);
  cVar3 = std::
          map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
          ::empty((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                   *)(this + 0x110));
  if (cVar3 == '\0') {
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::end(local_2c);
    cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator==
                      (local_60,(_Rb_tree_iterator *)local_2c);
    if (cVar3 != '\0') goto LAB_08070d26;
    bVar2 = false;
  }
  else {
LAB_08070d26:
    bVar2 = true;
  }
  if (bVar2) {
    std::make_pair<unsigned_int&,int&>(local_18,(int *)(param_1 + 0xe));
    std::pair<unsigned_int_const,int>::pair<unsigned_int,int>(local_20,(pair *)local_18);
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::insert(local_28);
  }
LAB_08070da6:
  STUserTingTimeCheckKey::~STUserTingTimeCheckKey((STUserTingTimeCheckKey *)&local_58);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Statics/Statistics.cpp, source/DNFServer/GameServer/Statics/CubeStatistics.h, source/DNFServer/GameServer/Statics/DNFDBServer.h, source/DNFServer/GameServer/Statics/DNFGameServer.h, source/DNFServer/GameServer/Statics/DNFManagerServer.h, source/DNFServer/GameServer/Statics/DNFServerConfig.h, source/DNFServer/GameServer/Statics/DNFServerHandler.h, source/DNFServer/GameServer/Statics/DNFTableBase.h 等 263 个文件*
