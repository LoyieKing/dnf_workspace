# _PullOutRoom

`_ZN18online_preliminary18COnlinePreliminary12_PullOutRoomEP5CUserP8PvP_Roomi`

`online_preliminary::COnlinePreliminary::_PullOutRoom(CUser*, PvP_Room*, int)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560df2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560df2  _ZN18online_preliminary18COnlinePreliminary12_PullOutRoomEP5CUserP8PvP_Roomi
#           online_preliminary::COnlinePreliminary::_PullOutRoom(CUser*, PvP_Room*, int)
# range [0x08560df2, 0x08560e49]
08560df2 +0x00:  push   %ebp
08560df3 +0x01:  mov    %esp,%ebp
08560df5 +0x03:  sub    $0x28,%esp
08560df8 +0x06:  movl   $0x2,0x10(%esp)
08560e00 +0x0e:  movl   $0xfe,0xc(%esp)
08560e08 +0x16:  mov    0x14(%ebp),%eax
08560e0b +0x19:  mov    %eax,0x8(%esp)
08560e0f +0x1d:  mov    0xc(%ebp),%eax
08560e12 +0x20:  mov    %eax,0x4(%esp)
08560e16 +0x24:  mov    0x10(%ebp),%eax
08560e19 +0x27:  mov    %eax,(%esp)
08560e1c +0x2a:  call   085dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>  ; PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)
08560e21 +0x2f:  xor    $0x1,%eax
08560e24 +0x32:  test   %al,%al
08560e26 +0x34:  je     08560e47 <+0x55>
08560e28 +0x36:  mov    0x10(%ebp),%eax
08560e2b +0x39:  mov    %eax,(%esp)
08560e2e +0x3c:  call   085d62c8 <_ZN8PvP_Room5resetEv>  ; PvP_Room::reset()
08560e33 +0x41:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08560e38 +0x46:  mov    0x10(%ebp),%edx
08560e3b +0x49:  mov    %edx,0x4(%esp)
08560e3f +0x4d:  mov    %eax,(%esp)
08560e42 +0x50:  call   08295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>  ; CGameManager::PutPvp(PvP_Room*)
08560e47 +0x55:  leave
08560e48 +0x56:  ret
08560e49 +0x57:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_PullOutRoom @ 0x8560df2

/* online_preliminary::COnlinePreliminary::_PullOutRoom(CUser*, PvP_Room*, int) */

void __thiscall
online_preliminary::COnlinePreliminary::_PullOutRoom
          (COnlinePreliminary *this,CUser *param_1,PvP_Room *param_2,int param_3)

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
