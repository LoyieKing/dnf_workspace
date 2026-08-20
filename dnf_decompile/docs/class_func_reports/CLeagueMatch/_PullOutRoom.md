# _PullOutRoom

`_ZN12CLeagueMatch12_PullOutRoomEP5CUserP8PvP_Roomi`

`CLeagueMatch::_PullOutRoom(CUser*, PvP_Room*, int)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855d3d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855d3d2  _ZN12CLeagueMatch12_PullOutRoomEP5CUserP8PvP_Roomi
#           CLeagueMatch::_PullOutRoom(CUser*, PvP_Room*, int)
# range [0x0855d3d2, 0x0855d429]
0855d3d2 +0x00:  push   %ebp
0855d3d3 +0x01:  mov    %esp,%ebp
0855d3d5 +0x03:  sub    $0x28,%esp
0855d3d8 +0x06:  movl   $0x2,0x10(%esp)
0855d3e0 +0x0e:  movl   $0xfe,0xc(%esp)
0855d3e8 +0x16:  mov    0x14(%ebp),%eax
0855d3eb +0x19:  mov    %eax,0x8(%esp)
0855d3ef +0x1d:  mov    0xc(%ebp),%eax
0855d3f2 +0x20:  mov    %eax,0x4(%esp)
0855d3f6 +0x24:  mov    0x10(%ebp),%eax
0855d3f9 +0x27:  mov    %eax,(%esp)
0855d3fc +0x2a:  call   085dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>  ; PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)
0855d401 +0x2f:  xor    $0x1,%eax
0855d404 +0x32:  test   %al,%al
0855d406 +0x34:  je     0855d427 <+0x55>
0855d408 +0x36:  mov    0x10(%ebp),%eax
0855d40b +0x39:  mov    %eax,(%esp)
0855d40e +0x3c:  call   085d62c8 <_ZN8PvP_Room5resetEv>  ; PvP_Room::reset()
0855d413 +0x41:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0855d418 +0x46:  mov    0x10(%ebp),%edx
0855d41b +0x49:  mov    %edx,0x4(%esp)
0855d41f +0x4d:  mov    %eax,(%esp)
0855d422 +0x50:  call   08295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>  ; CGameManager::PutPvp(PvP_Room*)
0855d427 +0x55:  leave
0855d428 +0x56:  ret
0855d429 +0x57:  nop
```

## 反编译 C

```c
// CLeagueMatch::_PullOutRoom @ 0x855d3d2

/* CLeagueMatch::_PullOutRoom(CUser*, PvP_Room*, int) */

void __thiscall
CLeagueMatch::_PullOutRoom(CLeagueMatch *this,CUser *param_1,PvP_Room *param_2,int param_3)

{
  char cVar1;
  CGameManager *this_00;
  
  cVar1 = PvP_Room::OnSetPVPSeatState(param_2,param_1,param_3,0xfe,2);
  if (cVar1 != '\x01') {
    PvP_Room::reset(param_2);
    this_00 = (CGameManager *)G_CGameManager();
    CGameManager::PutPvp(this_00,param_2);
  }
  return;
}
```
