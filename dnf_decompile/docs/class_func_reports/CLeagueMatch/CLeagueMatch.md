# CLeagueMatch

`_ZN12CLeagueMatchC1Ev`

`CLeagueMatch::CLeagueMatch()`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855cd74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855cd74  _ZN12CLeagueMatchC1Ev
#           CLeagueMatch::CLeagueMatch()
# range [0x0855cd74, 0x0855ce47]
0855cd74 +0x00:  push   %ebp
0855cd75 +0x01:  mov    %esp,%ebp
0855cd77 +0x03:  push   %edi
0855cd78 +0x04:  push   %esi
0855cd79 +0x05:  push   %ebx
0855cd7a +0x06:  sub    $0x1c,%esp
0855cd7d +0x09:  mov    0x8(%ebp),%eax
0855cd80 +0x0c:  mov    %eax,(%esp)
0855cd83 +0x0f:  call   08568998 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x362>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x362
0855cd88 +0x14:  mov    0x8(%ebp),%eax
0855cd8b +0x17:  movl   $&_ZTV12CLeagueMatch+0x8,(%eax)
0855cd91 +0x1d:  mov    0x8(%ebp),%eax
0855cd94 +0x20:  add    $0x8,%eax
0855cd97 +0x23:  mov    %eax,(%esp)
0855cd9a +0x26:  call   08568f16 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x8e0>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x8e0
0855cd9f +0x2b:  mov    &_ZN12CLeagueMatch17pWaitingRoomList_E,%eax
0855cda4 +0x30:  test   %eax,%eax
0855cda6 +0x32:  jne    0855ce04 <+0x90>
0855cda8 +0x34:  movl   $0x1c,(%esp)
0855cdaf +0x3b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0855cdb4 +0x40:  mov    %eax,%ebx
0855cdb6 +0x42:  mov    %ebx,%eax
0855cdb8 +0x44:  movl   $0x0,(%eax)
0855cdbe +0x4a:  movl   $0x0,0x8(%eax)
0855cdc5 +0x51:  movl   $0x0,0xc(%eax)
0855cdcc +0x58:  movl   $0x0,0x10(%eax)
0855cdd3 +0x5f:  movl   $0x0,0x14(%eax)
0855cdda +0x66:  movl   $0x0,0x18(%eax)
0855cde1 +0x6d:  mov    %eax,(%esp)
0855cde4 +0x70:  call   08568fb0 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x97a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x97a
0855cde9 +0x75:  jmp    0855cdfd <+0x89>
0855cdeb +0x77:  mov    %edx,%esi
0855cded +0x79:  mov    %eax,%edi
0855cdef +0x7b:  mov    %ebx,(%esp)
0855cdf2 +0x7e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0855cdf7 +0x83:  mov    %edi,%eax
0855cdf9 +0x85:  mov    %esi,%edx
0855cdfb +0x87:  jmp    0855ce19 <+0xa5>
0855cdfd +0x89:  mov    %ebx,%eax
0855cdff +0x8b:  mov    %eax,&_ZN12CLeagueMatch17pWaitingRoomList_E
0855ce04 +0x90:  mov    &_ZN12CLeagueMatch25nWaitingRoomListRefCount_E,%eax
0855ce09 +0x95:  add    $0x1,%eax
0855ce0c +0x98:  mov    %eax,&_ZN12CLeagueMatch25nWaitingRoomListRefCount_E
0855ce11 +0x9d:  add    $0x1c,%esp
0855ce14 +0xa0:  pop    %ebx
0855ce15 +0xa1:  pop    %esi
0855ce16 +0xa2:  pop    %edi
0855ce17 +0xa3:  pop    %ebp
0855ce18 +0xa4:  ret
0855ce19 +0xa5:  mov    %edx,%ebx
0855ce1b +0xa7:  mov    %eax,%esi
0855ce1d +0xa9:  mov    0x8(%ebp),%eax
0855ce20 +0xac:  add    $0x8,%eax
0855ce23 +0xaf:  mov    %eax,(%esp)
0855ce26 +0xb2:  call   08568f5c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x926>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x926
0855ce2b +0xb7:  mov    %esi,%eax
0855ce2d +0xb9:  mov    %ebx,%edx
0855ce2f +0xbb:  jmp    0855ce31 <+0xbd>
0855ce31 +0xbd:  mov    %edx,%ebx
0855ce33 +0xbf:  mov    %eax,%esi
0855ce35 +0xc1:  mov    0x8(%ebp),%eax
0855ce38 +0xc4:  mov    %eax,(%esp)
0855ce3b +0xc7:  call   08568664 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x2e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x2e
0855ce40 +0xcc:  mov    %esi,%eax
0855ce42 +0xce:  mov    %ebx,%edx
0855ce44 +0xd0:  mov    %eax,(%esp)
0855ce47 +0xd3:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CLeagueMatch::CLeagueMatch @ 0x855cd74

/* CLeagueMatch::CLeagueMatch() */

void __thiscall CLeagueMatch::CLeagueMatch(CLeagueMatch *this)

{
  CLeagueMatchRoomList *this_00;
  
  IMatch::IMatch((IMatch *)this);
  *(undefined ***)this = &PTR__CLeagueMatch_08ca3d28;
                    /* try { // try from 0855cd9a to 0855cd9e has its CatchHandler @ 0855ce31 */
  PVP_ROOM_INFO::PVP_ROOM_INFO((PVP_ROOM_INFO *)(this + 8));
  if (pWaitingRoomList_ == (CLeagueMatchRoomList *)0x0) {
                    /* try { // try from 0855cdaf to 0855cdb3 has its CatchHandler @ 0855ce19 */
    this_00 = operator_new(0x1c);
    *(undefined4 *)this_00 = 0;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x10) = 0;
    *(undefined4 *)(this_00 + 0x14) = 0;
    *(undefined4 *)(this_00 + 0x18) = 0;
                    /* try { // try from 0855cde4 to 0855cde8 has its CatchHandler @ 0855cdeb */
    CLeagueMatchRoomList::CLeagueMatchRoomList(this_00);
    pWaitingRoomList_ = this_00;
  }
  nWaitingRoomListRefCount_ = nWaitingRoomListRefCount_ + 1;
  return;
}
```
