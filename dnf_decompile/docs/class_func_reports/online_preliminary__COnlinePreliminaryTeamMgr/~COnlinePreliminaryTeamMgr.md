# ~COnlinePreliminaryTeamMgr

`_ZN18online_preliminary25COnlinePreliminaryTeamMgrD1Ev`

`online_preliminary::COnlinePreliminaryTeamMgr::~COnlinePreliminaryTeamMgr()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeamMgr` | `0x085886fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085886fe  _ZN18online_preliminary25COnlinePreliminaryTeamMgrD1Ev
#           online_preliminary::COnlinePreliminaryTeamMgr::~COnlinePreliminaryTeamMgr()
# range [0x085886fe, 0x0858875d]
085886fe +0x00:  push   %ebp
085886ff +0x01:  mov    %esp,%ebp
08588701 +0x03:  push   %esi
08588702 +0x04:  push   %ebx
08588703 +0x05:  sub    $0x10,%esp
08588706 +0x08:  mov    0x8(%ebp),%eax
08588709 +0x0b:  mov    (%eax),%eax
0858870b +0x0d:  test   %eax,%eax
0858870d +0x0f:  je     08588748 <+0x4a>
0858870f +0x11:  mov    0x8(%ebp),%eax
08588712 +0x14:  mov    (%eax),%ebx
08588714 +0x16:  test   %ebx,%ebx
08588716 +0x18:  je     08588748 <+0x4a>
08588718 +0x1a:  mov    %ebx,(%esp)
0858871b +0x1d:  call   08588e42 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x135>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x135
08588720 +0x22:  mov    %ebx,(%esp)
08588723 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08588728 +0x2a:  jmp    08588748 <+0x4a>
0858872a +0x2c:  mov    %edx,%ebx
0858872c +0x2e:  mov    %eax,%esi
0858872e +0x30:  mov    0x8(%ebp),%eax
08588731 +0x33:  add    $0x4,%eax
08588734 +0x36:  mov    %eax,(%esp)
08588737 +0x39:  call   08588e1a <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x10d>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x10d
0858873c +0x3e:  mov    %esi,%eax
0858873e +0x40:  mov    %ebx,%edx
08588740 +0x42:  mov    %eax,(%esp)
08588743 +0x45:  call   08ae3750 <_Unwind_Resume>
08588748 +0x4a:  mov    0x8(%ebp),%eax
0858874b +0x4d:  add    $0x4,%eax
0858874e +0x50:  mov    %eax,(%esp)
08588751 +0x53:  call   08588e1a <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x10d>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x10d
08588756 +0x58:  add    $0x10,%esp
08588759 +0x5b:  pop    %ebx
0858875a +0x5c:  pop    %esi
0858875b +0x5d:  pop    %ebp
0858875c +0x5e:  ret
0858875d +0x5f:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeamMgr::~COnlinePreliminaryTeamMgr @ 0x85886fe

/* online_preliminary::COnlinePreliminaryTeamMgr::~COnlinePreliminaryTeamMgr() */

void __thiscall
online_preliminary::COnlinePreliminaryTeamMgr::~COnlinePreliminaryTeamMgr
          (COnlinePreliminaryTeamMgr *this)

{
  CTeamFactory *this_00;
  
  if ((*(int *)this != 0) && (this_00 = *(CTeamFactory **)this, this_00 != (CTeamFactory *)0x0)) {
                    /* try { // try from 0858871b to 0858871f has its CatchHandler @ 0858872a */
    CTeamFactory::~CTeamFactory(this_00);
    operator_delete(this_00);
  }
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::~map((map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
          *)(this + 4));
  return;
}
```
