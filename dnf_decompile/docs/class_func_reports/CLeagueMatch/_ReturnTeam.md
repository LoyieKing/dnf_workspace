# _ReturnTeam

`_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser`

`CLeagueMatch::_ReturnTeam(PvP_Room*, int, CUser*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855e378` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855e378  _ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser
#           CLeagueMatch::_ReturnTeam(PvP_Room*, int, CUser*)
# range [0x0855e378, 0x0855e49d]
0855e378 +0x000:  push   %ebp
0855e379 +0x001:  mov    %esp,%ebp
0855e37b +0x003:  sub    $0x38,%esp
0855e37e +0x006:  movl   $0x0,-0x18(%ebp)
0855e385 +0x00d:  movl   $0x0,-0x14(%ebp)
0855e38c +0x014:  movl   $0x0,-0x10(%ebp)
0855e393 +0x01b:  jmp    0855e482 <+0x10a>
0855e398 +0x020:  mov    -0x10(%ebp),%eax
0855e39b +0x023:  mov    %eax,0x4(%esp)
0855e39f +0x027:  mov    0xc(%ebp),%eax
0855e3a2 +0x02a:  mov    %eax,(%esp)
0855e3a5 +0x02d:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
0855e3aa +0x032:  mov    %eax,-0x18(%ebp)
0855e3ad +0x035:  cmpl   $0x0,-0x18(%ebp)
0855e3b1 +0x039:  je     0855e477 <+0xff>
0855e3b7 +0x03f:  mov    -0x10(%ebp),%eax
0855e3ba +0x042:  mov    %eax,0x4(%esp)
0855e3be +0x046:  mov    0xc(%ebp),%eax
0855e3c1 +0x049:  mov    %eax,(%esp)
0855e3c4 +0x04c:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
0855e3c9 +0x051:  mov    %eax,-0xc(%ebp)
0855e3cc +0x054:  mov    0x10(%ebp),%eax
0855e3cf +0x057:  cmp    -0xc(%ebp),%eax
0855e3d2 +0x05a:  jne    0855e409 <+0x91>
0855e3d4 +0x05c:  cmpl   $0x2,0x10(%ebp)
0855e3d8 +0x060:  jne    0855e47a <+0x102>
0855e3de +0x066:  mov    -0x10(%ebp),%eax
0855e3e1 +0x069:  movl   $0x2,0x10(%esp)
0855e3e9 +0x071:  movl   $0x1,0xc(%esp)
0855e3f1 +0x079:  mov    %eax,0x8(%esp)
0855e3f5 +0x07d:  mov    -0x18(%ebp),%eax
0855e3f8 +0x080:  mov    %eax,0x4(%esp)
0855e3fc +0x084:  mov    0xc(%ebp),%eax
0855e3ff +0x087:  mov    %eax,(%esp)
0855e402 +0x08a:  call   085dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>  ; PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)
0855e407 +0x08f:  jmp    0855e47e <+0x106>
0855e409 +0x091:  cmpl   $0x0,0x14(%ebp)
0855e40d +0x095:  je     0855e417 <+0x9f>
0855e40f +0x097:  mov    -0x18(%ebp),%eax
0855e412 +0x09a:  cmp    0x14(%ebp),%eax
0855e415 +0x09d:  je     0855e47d <+0x105>
0855e417 +0x09f:  mov    -0x10(%ebp),%eax
0855e41a +0x0a2:  mov    %eax,0xc(%esp)
0855e41e +0x0a6:  mov    0xc(%ebp),%eax
0855e421 +0x0a9:  mov    %eax,0x8(%esp)
0855e425 +0x0ad:  mov    -0x18(%ebp),%eax
0855e428 +0x0b0:  mov    %eax,0x4(%esp)
0855e42c +0x0b4:  mov    0x8(%ebp),%eax
0855e42f +0x0b7:  mov    %eax,(%esp)
0855e432 +0x0ba:  call   0855d3d2 <_ZN12CLeagueMatch12_PullOutRoomEP5CUserP8PvP_Roomi>  ; CLeagueMatch::_PullOutRoom(CUser*, PvP_Room*, int)
0855e437 +0x0bf:  cmpl   $0x0,-0x14(%ebp)
0855e43b +0x0c3:  jne    0855e454 <+0xdc>
0855e43d +0x0c5:  mov    -0x18(%ebp),%eax
0855e440 +0x0c8:  mov    %eax,0x4(%esp)
0855e444 +0x0cc:  mov    0x8(%ebp),%eax
0855e447 +0x0cf:  mov    %eax,(%esp)
0855e44a +0x0d2:  call   0855d572 <_ZN12CLeagueMatch9_MakeRoomEP5CUser>  ; CLeagueMatch::_MakeRoom(CUser*)
0855e44f +0x0d7:  mov    %eax,-0x14(%ebp)
0855e452 +0x0da:  jmp    0855e47e <+0x106>
0855e454 +0x0dc:  movl   $0x1,0xc(%esp)
0855e45c +0x0e4:  mov    -0x14(%ebp),%eax
0855e45f +0x0e7:  mov    %eax,0x8(%esp)
0855e463 +0x0eb:  mov    -0x18(%ebp),%eax
0855e466 +0x0ee:  mov    %eax,0x4(%esp)
0855e46a +0x0f2:  mov    0x8(%ebp),%eax
0855e46d +0x0f5:  mov    %eax,(%esp)
0855e470 +0x0f8:  call   0855d42a <_ZN12CLeagueMatch10_PutInRoomEP5CUserP8PvP_Roomb>  ; CLeagueMatch::_PutInRoom(CUser*, PvP_Room*, bool)
0855e475 +0x0fd:  jmp    0855e47e <+0x106>
0855e477 +0x0ff:  nop
0855e478 +0x100:  jmp    0855e47e <+0x106>
0855e47a +0x102:  nop
0855e47b +0x103:  jmp    0855e47e <+0x106>
0855e47d +0x105:  nop
0855e47e +0x106:  addl   $0x1,-0x10(%ebp)
0855e482 +0x10a:  cmpl   $0x7,-0x10(%ebp)
0855e486 +0x10e:  setbe  %al
0855e489 +0x111:  test   %al,%al
0855e48b +0x113:  jne    0855e398 <+0x20>
0855e491 +0x119:  mov    0x8(%ebp),%eax
0855e494 +0x11c:  movl   $0x0,0x4(%eax)
0855e49b +0x123:  leave
0855e49c +0x124:  ret
0855e49d +0x125:  nop
```

## 反编译 C

```c
// CLeagueMatch::_ReturnTeam @ 0x855e378

/* CLeagueMatch::_ReturnTeam(PvP_Room*, int, CUser*) */

void __thiscall
CLeagueMatch::_ReturnTeam(CLeagueMatch *this,PvP_Room *param_1,int param_2,CUser *param_3)

{
  CUser *pCVar1;
  int iVar2;
  PvP_Room *local_18;
  uint local_14;
  
  local_18 = (PvP_Room *)0x0;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    pCVar1 = (CUser *)PvP_Room::get_user_seat(param_1,local_14);
    if (pCVar1 != (CUser *)0x0) {
      iVar2 = PvP_Room::get_team(param_1,local_14);
      if (param_2 == iVar2) {
        if (param_2 == 2) {
          PvP_Room::OnSetPVPSeatState(param_1,pCVar1,local_14,1,2);
        }
      }
      else if ((param_3 == (CUser *)0x0) || (pCVar1 != param_3)) {
        _PullOutRoom(this,pCVar1,param_1,local_14);
        if (local_18 == (PvP_Room *)0x0) {
          local_18 = (PvP_Room *)_MakeRoom(this,pCVar1);
        }
        else {
          _PutInRoom(this,pCVar1,local_18,true);
        }
      }
    }
  }
  *(undefined4 *)(this + 4) = 0;
  return;
}
```
