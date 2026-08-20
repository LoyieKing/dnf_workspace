# COnlinePreliminary

`_ZN18online_preliminary18COnlinePreliminaryC1Ev`

`online_preliminary::COnlinePreliminary::COnlinePreliminary()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x0855fefe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855fefe  _ZN18online_preliminary18COnlinePreliminaryC1Ev
#           online_preliminary::COnlinePreliminary::COnlinePreliminary()
# range [0x0855fefe, 0x0855ffd1]
0855fefe +0x00:  push   %ebp
0855feff +0x01:  mov    %esp,%ebp
0855ff01 +0x03:  push   %edi
0855ff02 +0x04:  push   %esi
0855ff03 +0x05:  push   %ebx
0855ff04 +0x06:  sub    $0x1c,%esp
0855ff07 +0x09:  mov    0x8(%ebp),%eax
0855ff0a +0x0c:  mov    %eax,(%esp)
0855ff0d +0x0f:  call   08568998 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x362>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x362
0855ff12 +0x14:  mov    0x8(%ebp),%eax
0855ff15 +0x17:  movl   $&_ZTVN18online_preliminary18COnlinePreliminaryE+0x8,(%eax)
0855ff1b +0x1d:  mov    0x8(%ebp),%eax
0855ff1e +0x20:  add    $0x8,%eax
0855ff21 +0x23:  mov    %eax,(%esp)
0855ff24 +0x26:  call   08568f16 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x8e0>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x8e0
0855ff29 +0x2b:  mov    &_ZN18online_preliminary18COnlinePreliminary17pWaitingRoomList_E,%eax
0855ff2e +0x30:  test   %eax,%eax
0855ff30 +0x32:  jne    0855ff8e <+0x90>
0855ff32 +0x34:  movl   $0x1c,(%esp)
0855ff39 +0x3b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0855ff3e +0x40:  mov    %eax,%ebx
0855ff40 +0x42:  mov    %ebx,%eax
0855ff42 +0x44:  movl   $0x0,(%eax)
0855ff48 +0x4a:  movl   $0x0,0x8(%eax)
0855ff4f +0x51:  movl   $0x0,0xc(%eax)
0855ff56 +0x58:  movl   $0x0,0x10(%eax)
0855ff5d +0x5f:  movl   $0x0,0x14(%eax)
0855ff64 +0x66:  movl   $0x0,0x18(%eax)
0855ff6b +0x6d:  mov    %eax,(%esp)
0855ff6e +0x70:  call   08568fb0 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x97a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x97a
0855ff73 +0x75:  jmp    0855ff87 <+0x89>
0855ff75 +0x77:  mov    %edx,%esi
0855ff77 +0x79:  mov    %eax,%edi
0855ff79 +0x7b:  mov    %ebx,(%esp)
0855ff7c +0x7e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0855ff81 +0x83:  mov    %edi,%eax
0855ff83 +0x85:  mov    %esi,%edx
0855ff85 +0x87:  jmp    0855ffa3 <+0xa5>
0855ff87 +0x89:  mov    %ebx,%eax
0855ff89 +0x8b:  mov    %eax,&_ZN18online_preliminary18COnlinePreliminary17pWaitingRoomList_E
0855ff8e +0x90:  mov    &_ZN18online_preliminary18COnlinePreliminary25nWaitingRoomListRefCount_E,%eax
0855ff93 +0x95:  add    $0x1,%eax
0855ff96 +0x98:  mov    %eax,&_ZN18online_preliminary18COnlinePreliminary25nWaitingRoomListRefCount_E
0855ff9b +0x9d:  add    $0x1c,%esp
0855ff9e +0xa0:  pop    %ebx
0855ff9f +0xa1:  pop    %esi
0855ffa0 +0xa2:  pop    %edi
0855ffa1 +0xa3:  pop    %ebp
0855ffa2 +0xa4:  ret
0855ffa3 +0xa5:  mov    %edx,%ebx
0855ffa5 +0xa7:  mov    %eax,%esi
0855ffa7 +0xa9:  mov    0x8(%ebp),%eax
0855ffaa +0xac:  add    $0x8,%eax
0855ffad +0xaf:  mov    %eax,(%esp)
0855ffb0 +0xb2:  call   08568f5c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x926>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x926
0855ffb5 +0xb7:  mov    %esi,%eax
0855ffb7 +0xb9:  mov    %ebx,%edx
0855ffb9 +0xbb:  jmp    0855ffbb <+0xbd>
0855ffbb +0xbd:  mov    %edx,%ebx
0855ffbd +0xbf:  mov    %eax,%esi
0855ffbf +0xc1:  mov    0x8(%ebp),%eax
0855ffc2 +0xc4:  mov    %eax,(%esp)
0855ffc5 +0xc7:  call   08568664 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x2e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x2e
0855ffca +0xcc:  mov    %esi,%eax
0855ffcc +0xce:  mov    %ebx,%edx
0855ffce +0xd0:  mov    %eax,(%esp)
0855ffd1 +0xd3:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::COnlinePreliminary @ 0x855fefe

/* online_preliminary::COnlinePreliminary::COnlinePreliminary() */

void __thiscall online_preliminary::COnlinePreliminary::COnlinePreliminary(COnlinePreliminary *this)

{
  CLeagueMatchRoomList *this_00;
  
  IMatch::IMatch((IMatch *)this);
  *(undefined ***)this = &PTR__COnlinePreliminary_08ca3c88;
                    /* try { // try from 0855ff24 to 0855ff28 has its CatchHandler @ 0855ffbb */
  PVP_ROOM_INFO::PVP_ROOM_INFO((PVP_ROOM_INFO *)(this + 8));
  if (pWaitingRoomList_ == (CLeagueMatchRoomList *)0x0) {
                    /* try { // try from 0855ff39 to 0855ff3d has its CatchHandler @ 0855ffa3 */
    this_00 = operator_new(0x1c);
    *(undefined4 *)this_00 = 0;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x10) = 0;
    *(undefined4 *)(this_00 + 0x14) = 0;
    *(undefined4 *)(this_00 + 0x18) = 0;
                    /* try { // try from 0855ff6e to 0855ff72 has its CatchHandler @ 0855ff75 */
    CLeagueMatchRoomList::CLeagueMatchRoomList(this_00);
    pWaitingRoomList_ = this_00;
  }
  nWaitingRoomListRefCount_ = nWaitingRoomListRefCount_ + 1;
  return;
}
```
