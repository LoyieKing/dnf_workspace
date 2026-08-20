# ~CLeagueMatch

`_ZN12CLeagueMatchD1Ev`

`CLeagueMatch::~CLeagueMatch()`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855ce4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855ce4c  _ZN12CLeagueMatchD1Ev
#           CLeagueMatch::~CLeagueMatch()
# range [0x0855ce4c, 0x0855ced9]
0855ce4c +0x00:  push   %ebp
0855ce4d +0x01:  mov    %esp,%ebp
0855ce4f +0x03:  push   %esi
0855ce50 +0x04:  push   %ebx
0855ce51 +0x05:  sub    $0x10,%esp
0855ce54 +0x08:  mov    0x8(%ebp),%eax
0855ce57 +0x0b:  movl   $&_ZTV12CLeagueMatch+0x8,(%eax)
0855ce5d +0x11:  mov    &_ZN12CLeagueMatch25nWaitingRoomListRefCount_E,%eax
0855ce62 +0x16:  sub    $0x1,%eax
0855ce65 +0x19:  mov    %eax,&_ZN12CLeagueMatch25nWaitingRoomListRefCount_E
0855ce6a +0x1e:  mov    &_ZN12CLeagueMatch17pWaitingRoomList_E,%eax
0855ce6f +0x23:  test   %eax,%eax
0855ce71 +0x25:  je     0855ce89 <+0x3d>
0855ce73 +0x27:  mov    &_ZN12CLeagueMatch25nWaitingRoomListRefCount_E,%eax
0855ce78 +0x2c:  test   %eax,%eax
0855ce7a +0x2e:  jne    0855ce89 <+0x3d>
0855ce7c +0x30:  mov    &_ZN12CLeagueMatch17pWaitingRoomList_E,%eax
0855ce81 +0x35:  mov    %eax,(%esp)
0855ce84 +0x38:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0855ce89 +0x3d:  mov    0x8(%ebp),%eax
0855ce8c +0x40:  add    $0x8,%eax
0855ce8f +0x43:  mov    %eax,(%esp)
0855ce92 +0x46:  call   08568f5c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x926>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x926
0855ce97 +0x4b:  jmp    0855ceb4 <+0x68>
0855ce99 +0x4d:  mov    %edx,%ebx
0855ce9b +0x4f:  mov    %eax,%esi
0855ce9d +0x51:  mov    0x8(%ebp),%eax
0855cea0 +0x54:  mov    %eax,(%esp)
0855cea3 +0x57:  call   08568664 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x2e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x2e
0855cea8 +0x5c:  mov    %esi,%eax
0855ceaa +0x5e:  mov    %ebx,%edx
0855ceac +0x60:  mov    %eax,(%esp)
0855ceaf +0x63:  call   08ae3750 <_Unwind_Resume>
0855ceb4 +0x68:  mov    0x8(%ebp),%eax
0855ceb7 +0x6b:  mov    %eax,(%esp)
0855ceba +0x6e:  call   08568664 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x2e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x2e
0855cebf +0x73:  mov    $0x0,%eax
0855cec4 +0x78:  test   %al,%al
0855cec6 +0x7a:  je     0855ced3 <+0x87>
0855cec8 +0x7c:  mov    0x8(%ebp),%eax
0855cecb +0x7f:  mov    %eax,(%esp)
0855cece +0x82:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0855ced3 +0x87:  add    $0x10,%esp
0855ced6 +0x8a:  pop    %ebx
0855ced7 +0x8b:  pop    %esi
0855ced8 +0x8c:  pop    %ebp
0855ced9 +0x8d:  ret
```

## 反编译 C

```c
// CLeagueMatch::~CLeagueMatch @ 0x855ce4c

/* WARNING: Removing unreachable block (ram,0x0855cec8) */
/* CLeagueMatch::~CLeagueMatch() */

void __thiscall CLeagueMatch::~CLeagueMatch(CLeagueMatch *this)

{
  *(undefined ***)this = &PTR__CLeagueMatch_08ca3d28;
  nWaitingRoomListRefCount_ = nWaitingRoomListRefCount_ + -1;
  if ((pWaitingRoomList_ != (void *)0x0) && (nWaitingRoomListRefCount_ == 0)) {
    operator_delete(pWaitingRoomList_);
  }
                    /* try { // try from 0855ce92 to 0855ce96 has its CatchHandler @ 0855ce99 */
  PVP_ROOM_INFO::~PVP_ROOM_INFO((PVP_ROOM_INFO *)(this + 8));
  IMatch::~IMatch((IMatch *)this);
  return;
}
```
