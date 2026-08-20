# ~COnlinePreliminary

`_ZN18online_preliminary18COnlinePreliminaryD1Ev`

`online_preliminary::COnlinePreliminary::~COnlinePreliminary()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x0855ffd6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855ffd6  _ZN18online_preliminary18COnlinePreliminaryD1Ev
#           online_preliminary::COnlinePreliminary::~COnlinePreliminary()
# range [0x0855ffd6, 0x08560063]
0855ffd6 +0x00:  push   %ebp
0855ffd7 +0x01:  mov    %esp,%ebp
0855ffd9 +0x03:  push   %esi
0855ffda +0x04:  push   %ebx
0855ffdb +0x05:  sub    $0x10,%esp
0855ffde +0x08:  mov    0x8(%ebp),%eax
0855ffe1 +0x0b:  movl   $&_ZTVN18online_preliminary18COnlinePreliminaryE+0x8,(%eax)
0855ffe7 +0x11:  mov    &_ZN18online_preliminary18COnlinePreliminary25nWaitingRoomListRefCount_E,%eax
0855ffec +0x16:  sub    $0x1,%eax
0855ffef +0x19:  mov    %eax,&_ZN18online_preliminary18COnlinePreliminary25nWaitingRoomListRefCount_E
0855fff4 +0x1e:  mov    &_ZN18online_preliminary18COnlinePreliminary17pWaitingRoomList_E,%eax
0855fff9 +0x23:  test   %eax,%eax
0855fffb +0x25:  je     08560013 <+0x3d>
0855fffd +0x27:  mov    &_ZN18online_preliminary18COnlinePreliminary25nWaitingRoomListRefCount_E,%eax
08560002 +0x2c:  test   %eax,%eax
08560004 +0x2e:  jne    08560013 <+0x3d>
08560006 +0x30:  mov    &_ZN18online_preliminary18COnlinePreliminary17pWaitingRoomList_E,%eax
0856000b +0x35:  mov    %eax,(%esp)
0856000e +0x38:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08560013 +0x3d:  mov    0x8(%ebp),%eax
08560016 +0x40:  add    $0x8,%eax
08560019 +0x43:  mov    %eax,(%esp)
0856001c +0x46:  call   08568f5c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x926>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x926
08560021 +0x4b:  jmp    0856003e <+0x68>
08560023 +0x4d:  mov    %edx,%ebx
08560025 +0x4f:  mov    %eax,%esi
08560027 +0x51:  mov    0x8(%ebp),%eax
0856002a +0x54:  mov    %eax,(%esp)
0856002d +0x57:  call   08568664 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x2e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x2e
08560032 +0x5c:  mov    %esi,%eax
08560034 +0x5e:  mov    %ebx,%edx
08560036 +0x60:  mov    %eax,(%esp)
08560039 +0x63:  call   08ae3750 <_Unwind_Resume>
0856003e +0x68:  mov    0x8(%ebp),%eax
08560041 +0x6b:  mov    %eax,(%esp)
08560044 +0x6e:  call   08568664 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x2e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x2e
08560049 +0x73:  mov    $0x0,%eax
0856004e +0x78:  test   %al,%al
08560050 +0x7a:  je     0856005d <+0x87>
08560052 +0x7c:  mov    0x8(%ebp),%eax
08560055 +0x7f:  mov    %eax,(%esp)
08560058 +0x82:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0856005d +0x87:  add    $0x10,%esp
08560060 +0x8a:  pop    %ebx
08560061 +0x8b:  pop    %esi
08560062 +0x8c:  pop    %ebp
08560063 +0x8d:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::~COnlinePreliminary @ 0x855ffd6

/* WARNING: Removing unreachable block (ram,0x08560052) */
/* online_preliminary::COnlinePreliminary::~COnlinePreliminary() */

void __thiscall
online_preliminary::COnlinePreliminary::~COnlinePreliminary(COnlinePreliminary *this)

{
  *(undefined ***)this = &PTR__COnlinePreliminary_08ca3c88;
  nWaitingRoomListRefCount_ = nWaitingRoomListRefCount_ + -1;
  if ((pWaitingRoomList_ != (void *)0x0) && (nWaitingRoomListRefCount_ == 0)) {
    operator_delete(pWaitingRoomList_);
  }
                    /* try { // try from 0856001c to 08560020 has its CatchHandler @ 08560023 */
  PVP_ROOM_INFO::~PVP_ROOM_INFO((PVP_ROOM_INFO *)(this + 8));
  IMatch::~IMatch((IMatch *)this);
  return;
}
```
