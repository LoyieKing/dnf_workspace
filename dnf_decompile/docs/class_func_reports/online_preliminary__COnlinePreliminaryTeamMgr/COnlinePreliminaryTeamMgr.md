# COnlinePreliminaryTeamMgr

`_ZN18online_preliminary25COnlinePreliminaryTeamMgrC1Ev`

`online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeamMgr` | `0x0858860c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858860c  _ZN18online_preliminary25COnlinePreliminaryTeamMgrC1Ev
#           online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr()
# range [0x0858860c, 0x085886fd]
0858860c +0x00:  push   %ebp
0858860d +0x01:  mov    %esp,%ebp
0858860f +0x03:  push   %edi
08588610 +0x04:  push   %esi
08588611 +0x05:  push   %ebx
08588612 +0x06:  sub    $0x3c,%esp
08588615 +0x09:  mov    0x8(%ebp),%eax
08588618 +0x0c:  movl   $0x0,(%eax)
0858861e +0x12:  mov    0x8(%ebp),%eax
08588621 +0x15:  add    $0x4,%eax
08588624 +0x18:  mov    %eax,(%esp)
08588627 +0x1b:  call   0858944c <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x73f>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x73f
0858862c +0x20:  movl   $&_ZSt7nothrow,0x4(%esp)
08588634 +0x28:  movl   $0x30,(%esp)
0858863b +0x2f:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
08588640 +0x34:  mov    %eax,%ebx
08588642 +0x36:  mov    %ebx,%eax
08588644 +0x38:  test   %eax,%eax
08588646 +0x3a:  je     08588689 <+0x7d>
08588648 +0x3c:  mov    %ebx,-0x1c(%ebp)
0858864b +0x3f:  mov    -0x1c(%ebp),%esi
0858864e +0x42:  mov    $0x0,%eax
08588653 +0x47:  mov    $0xc,%edx
08588658 +0x4c:  mov    %esi,%edi
0858865a +0x4e:  mov    %edx,%ecx
0858865c +0x50:  rep stos %eax,%es:(%edi)
0858865e +0x52:  mov    -0x1c(%ebp),%eax
08588661 +0x55:  mov    %eax,(%esp)
08588664 +0x58:  call   08588e2e <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x121>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x121
08588669 +0x5d:  jmp    08588685 <+0x79>
0858866b +0x5f:  mov    %edx,%esi
0858866d +0x61:  mov    %eax,%edi
0858866f +0x63:  movl   $&_ZSt7nothrow,0x4(%esp)
08588677 +0x6b:  mov    %ebx,(%esp)
0858867a +0x6e:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0858867f +0x73:  mov    %edi,%eax
08588681 +0x75:  mov    %esi,%edx
08588683 +0x77:  jmp    085886d7 <+0xcb>
08588685 +0x79:  mov    %ebx,%eax
08588687 +0x7b:  jmp    0858868b <+0x7f>
08588689 +0x7d:  mov    %ebx,%eax
0858868b +0x7f:  mov    0x8(%ebp),%edx
0858868e +0x82:  mov    %eax,(%edx)
08588690 +0x84:  mov    0x8(%ebp),%eax
08588693 +0x87:  mov    (%eax),%eax
08588695 +0x89:  test   %eax,%eax
08588697 +0x8b:  jne    085886f5 <+0xe9>
08588699 +0x8d:  movl   $0xd9,0x18(%esp)
085886a1 +0x95:  movl   $&_ZZN18online_preliminary25COnlinePreliminaryTeamMgrC1EvE19__PRETTY_FUNCTION__,0x14(%esp)
085886a9 +0x9d:  movl   $"memory error func(%s) line(%d)",0x10(%esp)
085886b1 +0xa5:  movl   $0xd9,0xc(%esp)
085886b9 +0xad:  movl   $&_ZZN18online_preliminary25COnlinePreliminaryTeamMgrC1EvE19__PRETTY_FUNCTION__,0x8(%esp)
085886c1 +0xb5:  movl   $"OnlinePreliminaryTeam.cpp",0x4(%esp)
085886c9 +0xbd:  movl   $0x1,(%esp)
085886d0 +0xc4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085886d5 +0xc9:  jmp    085886f5 <+0xe9>
085886d7 +0xcb:  mov    %edx,%ebx
085886d9 +0xcd:  mov    %eax,%esi
085886db +0xcf:  mov    0x8(%ebp),%eax
085886de +0xd2:  add    $0x4,%eax
085886e1 +0xd5:  mov    %eax,(%esp)
085886e4 +0xd8:  call   08588e1a <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x10d>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x10d
085886e9 +0xdd:  mov    %esi,%eax
085886eb +0xdf:  mov    %ebx,%edx
085886ed +0xe1:  mov    %eax,(%esp)
085886f0 +0xe4:  call   08ae3750 <_Unwind_Resume>
085886f5 +0xe9:  add    $0x3c,%esp
085886f8 +0xec:  pop    %ebx
085886f9 +0xed:  pop    %esi
085886fa +0xee:  pop    %edi
085886fb +0xef:  pop    %ebp
085886fc +0xf0:  ret
085886fd +0xf1:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr @ 0x858860c

/* online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr() */

void __thiscall
online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr
          (COnlinePreliminaryTeamMgr *this)

{
  CTeamFactory *this_00;
  int iVar1;
  CTeamFactory *pCVar2;
  byte bVar3;
  
  bVar3 = 0;
  *(undefined4 *)this = 0;
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::map((map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
         *)(this + 4));
  this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (this_00 != (CTeamFactory *)0x0) {
    pCVar2 = this_00;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar2 = 0;
      pCVar2 = pCVar2 + (uint)bVar3 * -8 + 4;
    }
                    /* try { // try from 08588664 to 08588668 has its CatchHandler @ 0858866b */
    CTeamFactory::CTeamFactory(this_00);
  }
  *(CTeamFactory **)this = this_00;
  if (*(int *)this == 0) {
                    /* try { // try from 085886d0 to 085886d4 has its CatchHandler @ 085886d7 */
    LogManager::logFormat
              (1,"OnlinePreliminaryTeam.cpp",
               "online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr()",0xd9,
               "memory error func(%s) line(%d)",
               "online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr()",0xd9);
  }
  return;
}
```
