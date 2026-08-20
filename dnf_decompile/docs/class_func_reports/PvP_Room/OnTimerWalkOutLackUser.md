# OnTimerWalkOutLackUser

`_ZN8PvP_Room22OnTimerWalkOutLackUserEv`

`PvP_Room::OnTimerWalkOutLackUser()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dce28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dce28  _ZN8PvP_Room22OnTimerWalkOutLackUserEv
#           PvP_Room::OnTimerWalkOutLackUser()
# range [0x085dce28, 0x085dcf19]
085dce28 +0x00:  push   %ebp
085dce29 +0x01:  mov    %esp,%ebp
085dce2b +0x03:  sub    $0x38,%esp
085dce2e +0x06:  mov    0x8(%ebp),%eax
085dce31 +0x09:  add    $0x12c,%eax
085dce36 +0x0e:  mov    %eax,(%esp)
085dce39 +0x11:  call   085dff78 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x7ff>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x7ff
085dce3e +0x16:  mov    %eax,-0xc(%ebp)
085dce41 +0x19:  jmp    085dceff <+0xd7>
085dce46 +0x1e:  cmpl   $0x0,-0xc(%ebp)
085dce4a +0x22:  js     085dcf11 <+0xe9>
085dce50 +0x28:  mov    0x8(%ebp),%eax
085dce53 +0x2b:  lea    0x12c(%eax),%edx
085dce59 +0x31:  mov    -0xc(%ebp),%eax
085dce5c +0x34:  mov    %eax,0x4(%esp)
085dce60 +0x38:  mov    %edx,(%esp)
085dce63 +0x3b:  call   085e0054 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x8db>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x8db
085dce68 +0x40:  mov    0x8(%ebp),%eax
085dce6b +0x43:  lea    0x12c(%eax),%edx
085dce71 +0x49:  mov    -0xc(%ebp),%eax
085dce74 +0x4c:  mov    %eax,0x4(%esp)
085dce78 +0x50:  mov    %edx,(%esp)
085dce7b +0x53:  call   085e008a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x911>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x911
085dce80 +0x58:  mov    0x8(%ebp),%eax
085dce83 +0x5b:  mov    0x6e4(%eax),%eax
085dce89 +0x61:  mov    (%eax),%eax
085dce8b +0x63:  add    $0x44,%eax
085dce8e +0x66:  mov    (%eax),%ecx
085dce90 +0x68:  mov    0x8(%ebp),%eax
085dce93 +0x6b:  mov    0x6e4(%eax),%eax
085dce99 +0x71:  mov    -0xc(%ebp),%edx
085dce9c +0x74:  mov    %edx,0x8(%esp)
085dcea0 +0x78:  mov    0x8(%ebp),%edx
085dcea3 +0x7b:  mov    %edx,0x4(%esp)
085dcea7 +0x7f:  mov    %eax,(%esp)
085dceaa +0x82:  call   *%ecx
085dceac +0x84:  mov    -0xc(%ebp),%edx
085dceaf +0x87:  mov    0x8(%ebp),%eax
085dceb2 +0x8a:  add    $0xc,%edx
085dceb5 +0x8d:  mov    (%eax,%edx,4),%eax
085dceb8 +0x90:  movl   $0x3,0x10(%esp)
085dcec0 +0x98:  movl   $0xfe,0xc(%esp)
085dcec8 +0xa0:  mov    -0xc(%ebp),%edx
085dcecb +0xa3:  mov    %edx,0x8(%esp)
085dcecf +0xa7:  mov    %eax,0x4(%esp)
085dced3 +0xab:  mov    0x8(%ebp),%eax
085dced6 +0xae:  mov    %eax,(%esp)
085dced9 +0xb1:  call   085dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>  ; PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)
085dcede +0xb6:  xor    $0x1,%eax
085dcee1 +0xb9:  test   %al,%al
085dcee3 +0xbb:  je     085dceec <+0xc4>
085dcee5 +0xbd:  mov    $0x0,%eax
085dceea +0xc2:  jmp    085dcf17 <+0xef>
085dceec +0xc4:  mov    0x8(%ebp),%eax
085dceef +0xc7:  add    $0x12c,%eax
085dcef4 +0xcc:  mov    %eax,(%esp)
085dcef7 +0xcf:  call   085dff78 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x7ff>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x7ff
085dcefc +0xd4:  mov    %eax,-0xc(%ebp)
085dceff +0xd7:  mov    -0xc(%ebp),%eax
085dcf02 +0xda:  not    %eax
085dcf04 +0xdc:  shr    $0x1f,%eax
085dcf07 +0xdf:  test   %al,%al
085dcf09 +0xe1:  jne    085dce46 <+0x1e>
085dcf0f +0xe7:  jmp    085dcf12 <+0xea>
085dcf11 +0xe9:  nop
085dcf12 +0xea:  mov    $0x1,%eax
085dcf17 +0xef:  leave
085dcf18 +0xf0:  ret
085dcf19 +0xf1:  nop
```

## 反编译 C

```c
// PvP_Room::OnTimerWalkOutLackUser @ 0x85dce28

/* PvP_Room::OnTimerWalkOutLackUser() */

undefined4 __thiscall PvP_Room::OnTimerWalkOutLackUser(PvP_Room *this)

{
  char cVar1;
  int local_10;
  
  local_10 = cElection<int,8,8>::GetElected((cElection<int,8,8> *)(this + 300));
  while ((-1 < local_10 && (-1 < local_10))) {
    cElection<int,8,8>::CancelCandidate((cElection<int,8,8> *)(this + 300),local_10);
    cElection<int,8,8>::CancelVoter((cElection<int,8,8> *)(this + 300),local_10);
    (**(code **)(**(int **)(this + 0x6e4) + 0x44))(*(undefined4 *)(this + 0x6e4),this,local_10);
    cVar1 = OnSetPVPSeatState(this,*(undefined4 *)(this + (local_10 + 0xc) * 4),local_10,0xfe,3);
    if (cVar1 != '\x01') {
      return 0;
    }
    local_10 = cElection<int,8,8>::GetElected((cElection<int,8,8> *)(this + 300));
  }
  return 1;
}
```
