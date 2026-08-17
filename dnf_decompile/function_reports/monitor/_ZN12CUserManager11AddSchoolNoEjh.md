# _ZN12CUserManager11AddSchoolNoEjh

`CUserManager::AddSchoolNo(unsigned int, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x8071f08` | `0x41b` | `0x808c8e6` | `0x41b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,259 +1,259 @@
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
+ret
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xfc,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0xdc(%ebp)
 mov    0x8(%ebp),%edx
 lea    -0xb8(%ebp),%eax
 lea    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjS_IhjSt4lessIhESaISt4pairIKhjEEES1_IS0_ESaIS3_IS0_S7_EEE4findERS0_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0xb4(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjS_IhjSt4lessIhESaISt4pairIKhjEEES1_IS0_ESaIS3_IS0_S7_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xb4(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0xb8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt3mapIhjSt4lessIhESaIS0_IKhjEEEEEeqERKSA_>
 test   %al,%al
 je     <T> <_ZN12CUserManager11AddSchoolNoEjh+0x236>
-lea    -0xd4(%ebp),%eax
+lea    -0xd0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhjSt4lessIhESaISt4pairIKhjEEEC1Ev>
 movl   $0x1,-0x98(%ebp)
 lea    -0xa0(%ebp),%eax
 lea    -0x98(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0xdc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRhiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0xa0(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0xa8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKhjEC1IhiEEOS_IT_T0_E>
 lea    -0xb0(%ebp),%eax
 lea    -0xa8(%ebp),%edx
 mov    %edx,0x8(%esp)
-lea    -0xd4(%ebp),%edx
+lea    -0xd0(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhjSt4lessIhESaISt4pairIKhjEEE6insertERKS4_>
 sub    $0x4,%esp
 lea    -0x70(%ebp),%eax
-lea    -0xd4(%ebp),%edx
+lea    -0xd0(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjRSt3mapIhjSt4lessIhESaISt4pairIKhjEEEES4_INSt17__decay_and_stripIT_E6__typeENSA_IT0_E6__typeEEOSB_OSE_>
 sub    $0x4,%esp
 lea    -0x70(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjSt3mapIhjSt4lessIhESaIS_IKhjEEEEC1IjS7_EEOS_IT_T0_E>
 mov    0x8(%ebp),%edx
 lea    -0x94(%ebp),%eax
 lea    -0x8c(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjS_IhjSt4lessIhESaISt4pairIKhjEEES1_IS0_ESaIS3_IS0_S7_EEE6insertERKS9_>
 sub    $0x4,%esp
 lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjSt3mapIhjSt4lessIhESaIS_IKhjEEEED1Ev>
 jmp    <T> <_ZN12CUserManager11AddSchoolNoEjh+0x17c>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjSt3mapIhjSt4lessIhESaIS_IKhjEEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CUserManager11AddSchoolNoEjh+0x164>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIjSt3mapIhjSt4lessIhESaIS_IKhjEEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CUserManager11AddSchoolNoEjh+0x205>
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIjSt3mapIhjSt4lessIhESaIS_IKhjEEEED1Ev>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIKjS_IhjSt4lessIhESaISt4pairIKhjEEES1_IS0_ESaIS3_IS0_S7_EEE4sizeEv>
 mov    %eax,%esi
-lea    -0xd4(%ebp),%eax
+lea    -0xd0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIhjSt4lessIhESaISt4pairIKhjEEE4sizeEv>
 mov    %eax,%ebx
 movzbl -0xdc(%ebp),%eax
 movzbl %al,%eax
 mov    %eax,-0xe8(%ebp)
 mov    0xc(%ebp),%edi
 movl   $0x3e9,0x8(%esp)
 movl   $&_ZZN12CUserManager11AddSchoolNoEjhE12__FUNCTION__,0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x18(%esp)
 mov    %ebx,0x14(%esp)
 mov    -0xe8(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %edi,0xc(%esp)
 movl   $"1) AddSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",0x8(%esp)
 movl   $"./log/School",0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN12CUserManager11AddSchoolNoEjh+0x223>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0xd4(%ebp),%eax
+lea    -0xd0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhjSt4lessIhESaISt4pairIKhjEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0xd4(%ebp),%eax
+lea    -0xd0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhjSt4lessIhESaISt4pairIKhjEEED1Ev>
 jmp    <T> <_ZN12CUserManager11AddSchoolNoEjh+0x410>
 lea    -0xb8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt3mapIhjSt4lessIhESaIS0_IKhjEEEEEptEv>
 add    $0x4,%eax
 mov    %eax,-0x1c(%ebp)
-lea    -0xbc(%ebp),%eax
+lea    -0xd4(%ebp),%eax
 lea    -0xdc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhjSt4lessIhESaISt4pairIKhjEEE4findERS3_>
 sub    $0x4,%esp
 lea    -0x4c(%ebp),%eax
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhjSt4lessIhESaISt4pairIKhjEEE3endEv>
 sub    $0x4,%esp
 lea    -0x4c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0xbc(%ebp),%eax
+lea    -0xd4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhjEEeqERKS3_>
 test   %al,%al
 je     <T> <_ZN12CUserManager11AddSchoolNoEjh+0x370>
 movl   $0x1,-0x30(%ebp)
 lea    -0x38(%ebp),%eax
 lea    -0x30(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0xdc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRhiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x38(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKhjEC1IhiEEOS_IT_T0_E>
 lea    -0x48(%ebp),%eax
 lea    -0x40(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhjSt4lessIhESaISt4pairIKhjEEE6insertERKS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIKjS_IhjSt4lessIhESaISt4pairIKhjEEES1_IS0_ESaIS3_IS0_S7_EEE4sizeEv>
 mov    %eax,%esi
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIhjSt4lessIhESaISt4pairIKhjEEE4sizeEv>
 mov    %eax,%ebx
 movzbl -0xdc(%ebp),%eax
 movzbl %al,%eax
 mov    %eax,-0xe4(%ebp)
 mov    0xc(%ebp),%edi
 movl   $0x3f3,0x8(%esp)
 movl   $&_ZZN12CUserManager11AddSchoolNoEjhE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x18(%esp)
 mov    %ebx,0x14(%esp)
 mov    -0xe4(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %edi,0xc(%esp)
 movl   $"2) AddSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",0x8(%esp)
 movl   $"./log/School",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN12CUserManager11AddSchoolNoEjh+0x410>
-lea    -0xbc(%ebp),%eax
+lea    -0xd4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhjEEptEv>
 mov    %eax,%ebx
-lea    -0xbc(%ebp),%eax
+lea    -0xd4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhjEEptEv>
 mov    0x4(%eax),%eax
 add    $0x1,%eax
 mov    %eax,0x4(%ebx)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIKjS_IhjSt4lessIhESaISt4pairIKhjEEES1_IS0_ESaIS3_IS0_S7_EEE4sizeEv>
 mov    %eax,%esi
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIhjSt4lessIhESaISt4pairIKhjEEE4sizeEv>
 mov    %eax,%ebx
 movzbl -0xdc(%ebp),%eax
 movzbl %al,%eax
 mov    %eax,-0xe0(%ebp)
 mov    0xc(%ebp),%edi
 movl   $0x3f9,0x8(%esp)
 movl   $&_ZZN12CUserManager11AddSchoolNoEjhE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x18(%esp)
 mov    %ebx,0x14(%esp)
 mov    -0xe0(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %edi,0xc(%esp)
 movl   $"3) AddSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",0x8(%esp)
 movl   $"./log/School",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
-ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::AddSchoolNo(unsigned int, unsigned char) */

void __thiscall
CUserManager::_ZN12CUserManager11AddSchoolNoEjh(CUserManager *this,uint param_1,uchar param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined3 in_stack_0000000d;
  byte local_e0 [8];
  map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
  local_d8 [24];
  _Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>> local_c0 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>
  local_bc [4];
  map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
  local_b8 [4];
  pair local_b4 [8];
  pair<unsigned_char_const,unsigned_int> local_ac [8];
  uchar local_a4 [8];
  undefined4 local_9c;
  pair local_98 [8];
  pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>
  local_90 [28];
  pair<unsigned_int,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>
  local_74 [28];
  CMyFileLog local_58 [8];
  map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
  local_50 [4];
  pair local_4c [8];
  pair<unsigned_char_const,unsigned_int> local_44 [8];
  uchar local_3c [8];
  undefined4 local_34;
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
  *local_20;
  
  local_e0[0] = param_2;
  std::
  map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
  ::find((uint *)local_bc);
  std::
  map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
  ::end(local_b8);
  cVar2 = std::
          _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>
          ::operator==(local_bc,(_Rb_tree_iterator *)local_b8);
  if (cVar2 == '\0') {
    iVar6 = std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>
            ::operator->(local_bc);
    local_20 = (map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
                *)(iVar6 + 4);
    std::
    map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
    ::find((uchar *)local_c0);
    std::
    map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
    ::end(local_50);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>>::operator==
                      (local_c0,(_Rb_tree_iterator *)local_50);
    if (cVar2 == '\0') {
      iVar6 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>>::operator->
                        (local_c0);
      iVar7 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>>::operator->
                        (local_c0);
      *(int *)(iVar6 + 4) = *(int *)(iVar7 + 4) + 1;
      uVar3 = std::
              map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
              ::size((map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
                      *)this);
      uVar4 = std::
              map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
              ::size(local_20);
      uVar1 = param_1;
      uVar5 = (uint)local_e0[0];
      CMyFileLog::CMyFileLog(local_28,"AddSchoolNo",0x3f9);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_28,"./log/School",
                 "3) AddSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",uVar1,
                 uVar5,uVar4,uVar3);
    }
    else {
      local_34 = 1;
      std::make_pair<unsigned_char&,int>(local_3c,(int *)local_e0);
      std::pair<unsigned_char_const,unsigned_int>::pair<unsigned_char,int>(local_44,local_3c);
      std::
      map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
      ::insert(local_4c);
      uVar3 = std::
              map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
              ::size((map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
                      *)this);
      uVar4 = std::
              map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
              ::size(local_20);
      uVar1 = param_1;
      uVar5 = (uint)local_e0[0];
      CMyFileLog::CMyFileLog(local_30,"AddSchoolNo",0x3f3);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/School",
                 "2) AddSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",uVar1,
                 uVar5,uVar4,uVar3);
    }
  }
  else {
    std::
    map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
    ::map(local_d8);
    local_9c = 1;
                    /* try { // try from 08071fa9 to 08072009 has its CatchHandler @ 0807210d */
    std::make_pair<unsigned_char&,int>(local_a4,(int *)local_e0);
    std::pair<unsigned_char_const,unsigned_int>::pair<unsigned_char,int>(local_ac,local_a4);
    std::
    map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
    ::insert(local_b4);
    std::
    make_pair<unsigned_int&,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>&>
              ((uint *)local_74,(map *)&param_1);
                    /* try { // try from 0807201d to 08072021 has its CatchHandler @ 0807206c */
    std::
    pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>
    ::
    pair<unsigned_int,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>
              (local_90,local_74);
                    /* try { // try from 0807203c to 08072040 has its CatchHandler @ 08072054 */
    std::
    map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
    ::insert(local_98);
                    /* try { // try from 0807204d to 08072051 has its CatchHandler @ 0807206c */
    std::
    pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>
    ::~pair(local_90);
                    /* try { // try from 0807208a to 0807210a has its CatchHandler @ 0807210d */
    std::
    pair<unsigned_int,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>
    ::~pair(local_74);
    uVar3 = std::
            map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
            ::size((map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
                    *)this);
    uVar4 = std::
            map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
            ::size(local_d8);
    uVar1 = param_1;
    uVar5 = (uint)local_e0[0];
    CMyFileLog::CMyFileLog(local_58,"AddSchoolNo",0x3e9);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_58,"./log/School",
               "1) AddSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",uVar1,
               uVar5,uVar4,uVar3);
    std::
    map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
    ::~map(local_d8);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUserManager.cpp](source/DNFServer/GameServer/Monitor/DNFUserManager.cpp)（约第 582 行）：

```cpp
void CUserManager::AddSchoolNo(unsigned int schoolNo, unsigned char channel)
{
    std::map<const unsigned int, std::map<unsigned char, unsigned int> >::iterator it =
        m_mapSchools.find(schoolNo);
    if (it == m_mapSchools.end())
    {
        std::map<unsigned char, unsigned int> newInner;
        newInner.insert(std::make_pair(channel, 1));
        m_mapSchools.insert(std::make_pair(schoolNo, newInner));
        DNF_LOG_SCOPE_LINE(0x3e9, "./log/School",
            "1) AddSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",
            schoolNo, channel, newInner.size(), m_mapSchools.size());
    }
    else
    {
        std::map<unsigned char, unsigned int>* inner = &it->second;
        std::map<unsigned char, unsigned int>::iterator c = inner->find(channel);
        if (c == inner->end())
        {
            inner->insert(std::make_pair(channel, 1));
            DNF_LOG_SCOPE_LINE(0x3f3, "./log/School",
                "2) AddSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",
                schoolNo, channel, inner->size(), m_mapSchools.size());
        }
        else
        {
            c->second = c->second + 1;
            DNF_LOG_SCOPE_LINE(0x3f9,"./log/School",
                "3) AddSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",
                schoolNo, channel, inner->size(), m_mapSchools.size());
        }
    }
}
```
