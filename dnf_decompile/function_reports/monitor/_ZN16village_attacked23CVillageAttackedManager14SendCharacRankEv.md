# _ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv

`village_attacked::CVillageAttackedManager::SendCharacRank()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a8d40` | `0x3a5` | `0x80a889e` | `0x366` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,271 +1,238 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x119c,%esp
+sub    $0x2090,%esp
+movb   $0x0,-0x19(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjN16village_attacked14stHuntingPointESt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
-test   %al,%al
-jne    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x399>
-lea    -0x48(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x35c>
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI18stUserHuntingPointSaIS0_EEC1Ev>
-lea    -0x48(%ebp),%eax
-mov    %eax,0x8(%esp)
-lea    -0x39(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x38(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x29(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt14priority_queueI18stUserHuntingPointSt6vectorIS0_SaIS0_EESt4lessIS0_EEC1ERKS5_OS3_>
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x63>
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x69>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x48(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI18stUserHuntingPointSaIS0_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x48(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI18stUserHuntingPointSaIS0_EED1Ev>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
-lea    -0x60(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjN16village_attacked14stHuntingPointESt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0xc6>
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjN16village_attacked14stHuntingPointEEEptEv>
-mov    (%eax),%eax
-mov    %eax,-0x64(%ebp)
-lea    -0x60(%ebp),%eax
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0xcd>
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjN16village_attacked14stHuntingPointEEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0x68(%ebp)
-lea    -0x68(%ebp),%eax
-mov    %eax,0x4(%esp)
+mov    %eax,-0x58(%ebp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjN16village_attacked14stHuntingPointEEEptEv>
+mov    0x8(%eax),%eax
+mov    %eax,-0x54(%ebp)
 lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt14priority_queueI18stUserHuntingPointSt6vectorIS0_SaIS0_EESt4lessIS0_EE4pushERKS0_>
-lea    -0x60(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjN16village_attacked14stHuntingPointEEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjN16village_attacked14stHuntingPointESt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x38(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjN16village_attacked14stHuntingPointEEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x88>
-lea    -0x16f(%ebp),%edx
-mov    $0xff,%ebx
-mov    $0x0,%eax
-mov    %edx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x115>
-mov    %al,(%edx)
-add    $0x1,%edx
-sub    $0x1,%ebx
-mov    %edx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x127>
-mov    %ax,(%edx)
-add    $0x2,%edx
-sub    $0x2,%ebx
-mov    %ebx,%ecx
-shr    $0x2,%ecx
-mov    %edx,%edi
-rep stos %eax,%es:(%edi)
-mov    %edi,%edx
-mov    %ebx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x141>
-mov    %ax,(%edx)
-add    $0x2,%edx
-mov    %ebx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x14f>
-mov    %al,(%edx)
-add    $0x1,%edx
-lea    -0x5c(%ebp),%eax
+jne    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x8e>
+movl   $0x1001,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0x1061(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-movzbl %al,%eax
-mov    %eax,-0x2c(%ebp)
+mov    %al,-0x19(%ebp)
 call   <T> <_Z10GetNowTimev>
-mov    %eax,-0x28(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x1c(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x20(%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x20(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0x1c(%eax),%eax
 cmp    %eax,%edx
-jb     <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x2e4>
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x2cb>
-lea    -0x58(%ebp),%eax
+ja     <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x2ac>
+movl   $0x0,-0x14(%ebp)
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x293>
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt14priority_queueI18stUserHuntingPointSt6vectorIS0_SaIS0_EESt4lessIS0_EE3topEv>
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
-mov    %eax,-0x70(%ebp)
-mov    %edx,-0x6c(%ebp)
-mov    -0x6c(%ebp),%ebx
+mov    %eax,-0x60(%ebp)
+mov    %edx,-0x5c(%ebp)
+mov    -0x5c(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_UserManagerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x224>
-lea    -0x58(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+jne    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x1eb>
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt14priority_queueI18stUserHuntingPointSt6vectorIS0_SaIS0_EESt4lessIS0_EE3popEv>
-mov    -0x6c(%ebp),%ebx
+mov    -0x5c(%ebp),%ebx
 movl   $0x238,0x8(%esp)
 movl   $&_ZZN16village_attacked23CVillageAttackedManager14SendCharacRankEvE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"User is null [charac_no:%u]",0x8(%esp)
 movl   $"./log/village",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x2c7>
-addl   $0x1,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x28f>
+addl   $0x1,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager24SendFirstRankerRewardJpnEP5CUseri>
-mov    -0x70(%ebp),%edx
-mov    -0x6c(%ebp),%eax
-mov    -0x24(%ebp),%ecx
-mov    %ecx,0x18(%esp)
-mov    %edx,0x14(%esp)
-mov    %eax,0x10(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,0xc(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x60(%ebp),%ecx
+mov    -0x5c(%ebp),%edx
+movzbl -0x19(%ebp),%eax
+mov    -0x14(%ebp),%ebx
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    -0x18(%ebp),%edx
+mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"(%d,cast(from_unixtime(%d) as date),%u,%u,%d)",0x4(%esp)
-lea    -0x16f(%ebp),%eax
+lea    -0x1061(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-lea    -0x5c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs6lengthEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x2a1>
+je     <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x269>
 movl   $",",0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLEPKc>
-lea    -0x16f(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x1061(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLEPKc>
-lea    -0x58(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt14priority_queueI18stUserHuntingPointSt6vectorIS0_SaIS0_EESt4lessIS0_EE3popEv>
-cmpl   $0x2,-0x24(%ebp)
-jg     <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x2e3>
-addl   $0x1,-0x20(%ebp)
-lea    -0x58(%ebp),%eax
+cmpl   $0x2,-0x14(%ebp)
+jg     <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x2ab>
+addl   $0x1,-0x10(%ebp)
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt14priority_queueI18stUserHuntingPointSt6vectorIS0_SaIS0_EESt4lessIS0_EE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x19c>
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x2e4>
+jne    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x163>
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x2ac>
 nop
-lea    -0x1182(%ebp),%eax
+lea    -0x2074(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21Packet_DBMW_Query_MsgC1Ev>
-movl   $0x6,-0x1174(%ebp)
-movl   $0x4ee4,-0x1178(%ebp)
-lea    -0x5c(%ebp),%eax
+movl   $0x6,-0x2066(%ebp)
+movl   $0x4ee4,-0x206a(%ebp)
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0x8(%esp)
 movl   $"inSert into village_attacked_charac_point_rank(server_info, occ_date, charac_no, hunting_point, rank) values%s",0x4(%esp)
-lea    -0x1182(%ebp),%eax
-add    $0x12,%eax
+lea    -0x1061(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x1182(%ebp),%edx
+lea    -0x2074(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x364>
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x329>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x5c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x371>
-lea    -0x5c(%ebp),%eax
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x336>
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x38c>
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x351>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x58(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt14priority_queueI18stUserHuntingPointSt6vectorIS0_SaIS0_EESt4lessIS0_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x58(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt14priority_queueI18stUserHuntingPointSt6vectorIS0_SaIS0_EESt4lessIS0_EED1Ev>
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv+0x39a>
-nop
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

/* village_attacked::CVillageAttackedManager::SendCharacRank() */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager14SendCharacRankEv(CVillageAttackedManager *this)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  CServerHandler *this_00;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  Packet_DBMW_Query_Msg local_1186 [10];
  undefined4 local_117c;
  undefined4 local_1178;
  char acStack_1174 [4097];
  char local_173;
  char local_172 [254];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  map<unsigned_int,village_attacked::stHuntingPoint,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>>
  local_64 [4];
  string local_60 [4];
  priority_queue<stUserHuntingPoint,std::vector<stUserHuntingPoint,std::allocator<stUserHuntingPoint>>,std::less<stUserHuntingPoint>>
  local_5c [16];
  vector<stUserHuntingPoint,std::allocator<stUserHuntingPoint>> local_4c [15];
  less local_3d;
  map<unsigned_int,village_attacked::stHuntingPoint,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>>
  local_3c [4];
  CMyFileLog local_38 [8];
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  CUser *local_20;
  
  bVar9 = 0;
  cVar1 = std::
          map<unsigned_int,village_attacked::stHuntingPoint,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>>
          ::empty((map<unsigned_int,village_attacked::stHuntingPoint,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>>
                   *)(this + 4));
  if (cVar1 == '\0') {
    std::vector<stUserHuntingPoint,std::allocator<stUserHuntingPoint>>::vector(local_4c);
                    /* try { // try from 080a8d81 to 080a8d85 has its CatchHandler @ 080a8d88 */
    std::
    priority_queue<stUserHuntingPoint,std::vector<stUserHuntingPoint,std::allocator<stUserHuntingPoint>>,std::less<stUserHuntingPoint>>
    ::priority_queue(local_5c,&local_3d,(vector *)local_4c);
                    /* try { // try from 080a8da9 to 080a8e99 has its CatchHandler @ 080a90b1 */
    std::vector<stUserHuntingPoint,std::allocator<stUserHuntingPoint>>::~vector(local_4c);
    std::
    map<unsigned_int,village_attacked::stHuntingPoint,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>>
    ::begin(local_64);
    while( true ) {
      std::
      map<unsigned_int,village_attacked::stHuntingPoint,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>>
      ::end(local_3c);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>
              ::operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>
                            *)local_64,(_Rb_tree_iterator *)local_3c);
      if (cVar1 == '\0') break;
      puVar2 = (undefined4 *)
               std::
               _Rb_tree_iterator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>::
               operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>
                           *)local_64);
      local_68 = *puVar2;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>
              ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>
                            *)local_64);
      local_6c = *(undefined4 *)(iVar3 + 4);
      std::
      priority_queue<stUserHuntingPoint,std::vector<stUserHuntingPoint,std::allocator<stUserHuntingPoint>>,std::less<stUserHuntingPoint>>
      ::push(local_5c,(stUserHuntingPoint *)&local_6c);
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>::
      operator++((_Rb_tree_iterator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>
                  *)local_64);
    }
    pcVar6 = &local_173;
    uVar7 = 0xff;
    bVar8 = ((uint)pcVar6 & 1) != 0;
    if (bVar8) {
      local_173 = '\0';
      pcVar6 = local_172;
      uVar7 = 0xfe;
    }
    if (((uint)pcVar6 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
      uVar7 = uVar7 - 2;
    }
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
    }
    if ((uVar7 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
    }
    if (!bVar8) {
      *pcVar6 = '\0';
    }
    std::string::string(local_60);
                    /* try { // try from 080a8ea2 to 080a908c has its CatchHandler @ 080a908f */
    local_30 = CApplication::Get_ServerGroup(*(CApplication **)this);
    local_30 = local_30 & 0xff;
    local_2c = GetNowTime();
    if (*(uint *)(this + 0x20) <= *(uint *)(this + 0x1c)) {
      local_28 = 0;
      local_24 = 0;
      while (cVar1 = std::
                     priority_queue<stUserHuntingPoint,std::vector<stUserHuntingPoint,std::allocator<stUserHuntingPoint>>,std::less<stUserHuntingPoint>>
                     ::empty(), cVar1 != '\x01') {
        puVar2 = (undefined4 *)
                 std::
                 priority_queue<stUserHuntingPoint,std::vector<stUserHuntingPoint,std::allocator<stUserHuntingPoint>>,std::less<stUserHuntingPoint>>
                 ::top();
        local_70 = puVar2[1];
        local_74 = *puVar2;
        uVar7 = CApplication::Get_UserManager(*(CApplication **)this);
        local_20 = (CUser *)CUserManager::FindUser_CharNo(uVar7);
        if (local_20 == (CUser *)0x0) {
          std::
          priority_queue<stUserHuntingPoint,std::vector<stUserHuntingPoint,std::allocator<stUserHuntingPoint>>,std::less<stUserHuntingPoint>>
          ::pop(local_5c);
          uVar4 = local_70;
          CMyFileLog::CMyFileLog(local_38,"SendCharacRank",0x238);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_38,"./log/village","User is null [charac_no:%u]",uVar4);
        }
        else {
          local_28 = local_28 + 1;
          SendFirstRankerRewardJpn(this,local_20,local_28);
          sprintf(&local_173,"(%d,cast(from_unixtime(%d) as date),%u,%u,%d)",local_30,local_2c,
                  local_70,local_74,local_28);
          iVar3 = std::string::length(local_60);
          if (iVar3 != 0) {
            std::string::operator+=(local_60,",");
          }
          std::string::operator+=(local_60,&local_173);
          std::
          priority_queue<stUserHuntingPoint,std::vector<stUserHuntingPoint,std::allocator<stUserHuntingPoint>>,std::less<stUserHuntingPoint>>
          ::pop(local_5c);
          if (2 < local_28) break;
        }
        local_24 = local_24 + 1;
      }
    }
    Packet_DBMW_Query_Msg::Packet_DBMW_Query_Msg(local_1186);
    local_1178 = 6;
    local_117c = 0x4ee4;
    uVar4 = std::string::c_str(local_60);
    sprintf(acStack_1174,
            "inSert into village_attacked_charac_point_rank(server_info, occ_date, charac_no, hunting_point, rank) values%s"
            ,uVar4);
    this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
    CServerHandler::SendToDB(this_00,(PacketHeader *)local_1186);
                    /* try { // try from 080a90aa to 080a90ae has its CatchHandler @ 080a90b1 */
    std::string::~string(local_60);
    std::
    priority_queue<stUserHuntingPoint,std::vector<stUserHuntingPoint,std::allocator<stUserHuntingPoint>>,std::less<stUserHuntingPoint>>
    ::~priority_queue(local_5c);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 566 行）：

```cpp
void CVillageAttackedManager::SendCharacRank()
{
    unsigned char serverGroup = 0;
    if (!m_huntingPoints.empty())
    {
        std::priority_queue<stUserHuntingPoint> pq;
        for (std::map<unsigned int, stHuntingPoint>::iterator it = m_huntingPoints.begin();
             it != m_huntingPoints.end(); ++it)
        {
            stUserHuntingPoint p;
            p.m_huntingPoint = it->second.m_huntingPoint;
            p.m_characNo = it->second.m_field4;
            pq.push(p);
        }
        char sql[0x1001];
        memset(sql, 0, 0x1001);
        std::string query;
        serverGroup = m_app->Get_ServerGroup();
        unsigned int now = GetNowTime();
        if ((unsigned int)m_field20 <= (unsigned int)m_field1c)
        {
            int rank = 0;
            int count = 0;
            while (!pq.empty())
            {
                stUserHuntingPoint p = pq.top();
                CUser* user = m_app->Get_UserManager()->FindUser_CharNo(p.m_characNo);
                if (user == 0)
                {
                    pq.pop();
                    DNF_LOG_SCOPE_AT(__FUNCTION__, 0x238, "./log/village", "User is null [charac_no:%u]", p.m_characNo);
                }
                else
                {
                    rank++;
                    SendFirstRankerRewardJpn(user, rank);
                    sprintf(sql, "(%d,cast(from_unixtime(%d) as date),%u,%u,%d)", serverGroup,
                            now, p.m_characNo, p.m_huntingPoint, rank);
                    if (query.length() != 0)
                    {
                        query += ",";
                    }
                    query += sql;
                    pq.pop();
                    if (2 < rank)
                    {
                        break;
                    }
                }
                count++;
            }
        }
        Packet_DBMW_Query_Msg pkt;
        pkt.m_fieldB = 6;
        pkt.m_fieldA = 0x4ee4;
        sprintf(sql,
                "inSert into village_attacked_charac_point_rank(server_info, occ_date, charac_no, hunting_point, rank) values%s",
                query.c_str());
        m_app->Get_ServerHandler()->SendToDB(&pkt);
    }
}
```
