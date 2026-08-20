# ~CFairMatch

`_ZN8fair_pvp10CFairMatchD1Ev`

`fair_pvp::CFairMatch::~CFairMatch()`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x0856292e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856292e  _ZN8fair_pvp10CFairMatchD1Ev
#           fair_pvp::CFairMatch::~CFairMatch()
# range [0x0856292e, 0x085629c9]
0856292e +0x00:  push   %ebp
0856292f +0x01:  mov    %esp,%ebp
08562931 +0x03:  push   %esi
08562932 +0x04:  push   %ebx
08562933 +0x05:  sub    $0x10,%esp
08562936 +0x08:  mov    0x8(%ebp),%eax
08562939 +0x0b:  movl   $&_ZTVN8fair_pvp10CFairMatchE+0x8,(%eax)
0856293f +0x11:  mov    &_ZN8fair_pvp10CFairMatch25nWaitingRoomListRefCount_E,%eax
08562944 +0x16:  sub    $0x1,%eax
08562947 +0x19:  mov    %eax,&_ZN8fair_pvp10CFairMatch25nWaitingRoomListRefCount_E
0856294c +0x1e:  mov    &_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E,%eax
08562951 +0x23:  test   %eax,%eax
08562953 +0x25:  je     0856296b <+0x3d>
08562955 +0x27:  mov    &_ZN8fair_pvp10CFairMatch25nWaitingRoomListRefCount_E,%eax
0856295a +0x2c:  test   %eax,%eax
0856295c +0x2e:  jne    0856296b <+0x3d>
0856295e +0x30:  mov    &_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E,%eax
08562963 +0x35:  mov    %eax,(%esp)
08562966 +0x38:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0856296b +0x3d:  mov    0x8(%ebp),%eax
0856296e +0x40:  movl   $0x0,0xc0(%eax)
08562978 +0x4a:  mov    0x8(%ebp),%eax
0856297b +0x4d:  add    $0x8,%eax
0856297e +0x50:  mov    %eax,(%esp)
08562981 +0x53:  call   08568f5c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x926>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x926
08562986 +0x58:  jmp    085629a3 <+0x75>
08562988 +0x5a:  mov    %edx,%ebx
0856298a +0x5c:  mov    %eax,%esi
0856298c +0x5e:  mov    0x8(%ebp),%eax
0856298f +0x61:  mov    %eax,(%esp)
08562992 +0x64:  call   08568664 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x2e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x2e
08562997 +0x69:  mov    %esi,%eax
08562999 +0x6b:  mov    %ebx,%edx
0856299b +0x6d:  mov    %eax,(%esp)
0856299e +0x70:  call   08ae3750 <_Unwind_Resume>
085629a3 +0x75:  mov    0x8(%ebp),%eax
085629a6 +0x78:  mov    %eax,(%esp)
085629a9 +0x7b:  call   08568664 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x2e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x2e
085629ae +0x80:  mov    $0x0,%eax
085629b3 +0x85:  test   %al,%al
085629b5 +0x87:  je     085629c2 <+0x94>
085629b7 +0x89:  mov    0x8(%ebp),%eax
085629ba +0x8c:  mov    %eax,(%esp)
085629bd +0x8f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085629c2 +0x94:  add    $0x10,%esp
085629c5 +0x97:  pop    %ebx
085629c6 +0x98:  pop    %esi
085629c7 +0x99:  pop    %ebp
085629c8 +0x9a:  ret
085629c9 +0x9b:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::~CFairMatch @ 0x856292e

/* WARNING: Removing unreachable block (ram,0x085629b7) */
/* fair_pvp::CFairMatch::~CFairMatch() */

void __thiscall fair_pvp::CFairMatch::~CFairMatch(CFairMatch *this)

{
  *(undefined ***)this = &PTR__CFairMatch_08ca3be8;
  nWaitingRoomListRefCount_ = nWaitingRoomListRefCount_ + -1;
  if ((pWaitingRoomList_ != (void *)0x0) && (nWaitingRoomListRefCount_ == 0)) {
    operator_delete(pWaitingRoomList_);
  }
  *(undefined4 *)(this + 0xc0) = 0;
                    /* try { // try from 08562981 to 08562985 has its CatchHandler @ 08562988 */
  PVP_ROOM_INFO::~PVP_ROOM_INFO((PVP_ROOM_INFO *)(this + 8));
  IMatch::~IMatch((IMatch *)this);
  return;
}
```
