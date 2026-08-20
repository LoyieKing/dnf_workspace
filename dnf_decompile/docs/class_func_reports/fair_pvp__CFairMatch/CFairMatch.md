# CFairMatch

`_ZN8fair_pvp10CFairMatchC1Ev`

`fair_pvp::CFairMatch::CFairMatch()`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x0856284a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856284a  _ZN8fair_pvp10CFairMatchC1Ev
#           fair_pvp::CFairMatch::CFairMatch()
# range [0x0856284a, 0x0856292d]
0856284a +0x00:  push   %ebp
0856284b +0x01:  mov    %esp,%ebp
0856284d +0x03:  push   %edi
0856284e +0x04:  push   %esi
0856284f +0x05:  push   %ebx
08562850 +0x06:  sub    $0x1c,%esp
08562853 +0x09:  mov    0x8(%ebp),%eax
08562856 +0x0c:  mov    %eax,(%esp)
08562859 +0x0f:  call   08568998 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x362>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x362
0856285e +0x14:  mov    0x8(%ebp),%eax
08562861 +0x17:  movl   $&_ZTVN8fair_pvp10CFairMatchE+0x8,(%eax)
08562867 +0x1d:  mov    0x8(%ebp),%eax
0856286a +0x20:  add    $0x8,%eax
0856286d +0x23:  mov    %eax,(%esp)
08562870 +0x26:  call   08568f16 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x8e0>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x8e0
08562875 +0x2b:  mov    0x8(%ebp),%eax
08562878 +0x2e:  add    $0x1c,%eax
0856287b +0x31:  mov    %eax,%ebx
0856287d +0x33:  mov    $0x1,%esi
08562882 +0x38:  jmp    08562892 <+0x48>
08562884 +0x3a:  mov    %ebx,(%esp)
08562887 +0x3d:  call   08568ff0 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x9ba>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x9ba
0856288c +0x42:  add    $0x48,%ebx
0856288f +0x45:  sub    $0x1,%esi
08562892 +0x48:  cmp    $0xffffffff,%esi
08562895 +0x4b:  setne  %al
08562898 +0x4e:  test   %al,%al
0856289a +0x50:  jne    08562884 <+0x3a>
0856289c +0x52:  mov    &_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E,%eax
085628a1 +0x57:  test   %eax,%eax
085628a3 +0x59:  jne    085628d8 <+0x8e>
085628a5 +0x5b:  movl   $0x1c,(%esp)
085628ac +0x62:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085628b1 +0x67:  mov    %eax,%ebx
085628b3 +0x69:  mov    %ebx,%eax
085628b5 +0x6b:  mov    %eax,(%esp)
085628b8 +0x6e:  call   08566efc <_ZN19CMultiMatchRoomListC1Ev>  ; CMultiMatchRoomList::CMultiMatchRoomList()
085628bd +0x73:  jmp    085628d1 <+0x87>
085628bf +0x75:  mov    %edx,%esi
085628c1 +0x77:  mov    %eax,%edi
085628c3 +0x79:  mov    %ebx,(%esp)
085628c6 +0x7c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085628cb +0x81:  mov    %edi,%eax
085628cd +0x83:  mov    %esi,%edx
085628cf +0x85:  jmp    085628fa <+0xb0>
085628d1 +0x87:  mov    %ebx,%eax
085628d3 +0x89:  mov    %eax,&_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E
085628d8 +0x8e:  mov    &_ZN8fair_pvp10CFairMatch25nWaitingRoomListRefCount_E,%eax
085628dd +0x93:  add    $0x1,%eax
085628e0 +0x96:  mov    %eax,&_ZN8fair_pvp10CFairMatch25nWaitingRoomListRefCount_E
085628e5 +0x9b:  mov    0x8(%ebp),%eax
085628e8 +0x9e:  movl   $0x0,0xc0(%eax)
085628f2 +0xa8:  add    $0x1c,%esp
085628f5 +0xab:  pop    %ebx
085628f6 +0xac:  pop    %esi
085628f7 +0xad:  pop    %edi
085628f8 +0xae:  pop    %ebp
085628f9 +0xaf:  ret
085628fa +0xb0:  mov    %edx,%ebx
085628fc +0xb2:  mov    %eax,%esi
085628fe +0xb4:  mov    0x8(%ebp),%eax
08562901 +0xb7:  add    $0x8,%eax
08562904 +0xba:  mov    %eax,(%esp)
08562907 +0xbd:  call   08568f5c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x926>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x926
0856290c +0xc2:  mov    %esi,%eax
0856290e +0xc4:  mov    %ebx,%edx
08562910 +0xc6:  jmp    08562912 <+0xc8>
08562912 +0xc8:  mov    %edx,%ebx
08562914 +0xca:  mov    %eax,%esi
08562916 +0xcc:  mov    0x8(%ebp),%eax
08562919 +0xcf:  mov    %eax,(%esp)
0856291c +0xd2:  call   08568664 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x2e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x2e
08562921 +0xd7:  mov    %esi,%eax
08562923 +0xd9:  mov    %ebx,%edx
08562925 +0xdb:  mov    %eax,(%esp)
08562928 +0xde:  call   08ae3750 <_Unwind_Resume>
0856292d +0xe3:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::CFairMatch @ 0x856284a

/* fair_pvp::CFairMatch::CFairMatch() */

void __thiscall fair_pvp::CFairMatch::CFairMatch(CFairMatch *this)

{
  TeamInfoThird *this_00;
  CMultiMatchRoomList *this_01;
  int iVar1;
  
  IMatch::IMatch((IMatch *)this);
  *(undefined ***)this = &PTR__CFairMatch_08ca3be8;
                    /* try { // try from 08562870 to 08562874 has its CatchHandler @ 08562912 */
  PVP_ROOM_INFO::PVP_ROOM_INFO((PVP_ROOM_INFO *)(this + 8));
  this_00 = (TeamInfoThird *)(this + 0x1c);
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
    TeamInfoThird::TeamInfoThird(this_00);
    this_00 = this_00 + 0x48;
  }
  if (pWaitingRoomList_ == (CMultiMatchRoomList *)0x0) {
                    /* try { // try from 085628ac to 085628b0 has its CatchHandler @ 085628fa */
    this_01 = operator_new(0x1c);
                    /* try { // try from 085628b8 to 085628bc has its CatchHandler @ 085628bf */
    CMultiMatchRoomList::CMultiMatchRoomList(this_01);
    pWaitingRoomList_ = this_01;
  }
  nWaitingRoomListRefCount_ = nWaitingRoomListRefCount_ + 1;
  *(undefined4 *)(this + 0xc0) = 0;
  return;
}
```
