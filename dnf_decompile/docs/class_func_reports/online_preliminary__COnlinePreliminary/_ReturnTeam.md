# _ReturnTeam

`_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser`

`online_preliminary::COnlinePreliminary::_ReturnTeam(PvP_Room*, int, CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08561e40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08561e40  _ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser
#           online_preliminary::COnlinePreliminary::_ReturnTeam(PvP_Room*, int, CUser*)
# range [0x08561e40, 0x08561f65]
08561e40 +0x000:  push   %ebp
08561e41 +0x001:  mov    %esp,%ebp
08561e43 +0x003:  sub    $0x38,%esp
08561e46 +0x006:  movl   $0x0,-0x18(%ebp)
08561e4d +0x00d:  movl   $0x0,-0x14(%ebp)
08561e54 +0x014:  movl   $0x0,-0x10(%ebp)
08561e5b +0x01b:  jmp    08561f4a <+0x10a>
08561e60 +0x020:  mov    -0x10(%ebp),%eax
08561e63 +0x023:  mov    %eax,0x4(%esp)
08561e67 +0x027:  mov    0xc(%ebp),%eax
08561e6a +0x02a:  mov    %eax,(%esp)
08561e6d +0x02d:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
08561e72 +0x032:  mov    %eax,-0x18(%ebp)
08561e75 +0x035:  cmpl   $0x0,-0x18(%ebp)
08561e79 +0x039:  je     08561f3f <+0xff>
08561e7f +0x03f:  mov    -0x10(%ebp),%eax
08561e82 +0x042:  mov    %eax,0x4(%esp)
08561e86 +0x046:  mov    0xc(%ebp),%eax
08561e89 +0x049:  mov    %eax,(%esp)
08561e8c +0x04c:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
08561e91 +0x051:  mov    %eax,-0xc(%ebp)
08561e94 +0x054:  mov    0x10(%ebp),%eax
08561e97 +0x057:  cmp    -0xc(%ebp),%eax
08561e9a +0x05a:  jne    08561ed1 <+0x91>
08561e9c +0x05c:  cmpl   $0x2,0x10(%ebp)
08561ea0 +0x060:  jne    08561f42 <+0x102>
08561ea6 +0x066:  mov    -0x10(%ebp),%eax
08561ea9 +0x069:  movl   $0x2,0x10(%esp)
08561eb1 +0x071:  movl   $0x1,0xc(%esp)
08561eb9 +0x079:  mov    %eax,0x8(%esp)
08561ebd +0x07d:  mov    -0x18(%ebp),%eax
08561ec0 +0x080:  mov    %eax,0x4(%esp)
08561ec4 +0x084:  mov    0xc(%ebp),%eax
08561ec7 +0x087:  mov    %eax,(%esp)
08561eca +0x08a:  call   085dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>  ; PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)
08561ecf +0x08f:  jmp    08561f46 <+0x106>
08561ed1 +0x091:  cmpl   $0x0,0x14(%ebp)
08561ed5 +0x095:  je     08561edf <+0x9f>
08561ed7 +0x097:  mov    -0x18(%ebp),%eax
08561eda +0x09a:  cmp    0x14(%ebp),%eax
08561edd +0x09d:  je     08561f45 <+0x105>
08561edf +0x09f:  mov    -0x10(%ebp),%eax
08561ee2 +0x0a2:  mov    %eax,0xc(%esp)
08561ee6 +0x0a6:  mov    0xc(%ebp),%eax
08561ee9 +0x0a9:  mov    %eax,0x8(%esp)
08561eed +0x0ad:  mov    -0x18(%ebp),%eax
08561ef0 +0x0b0:  mov    %eax,0x4(%esp)
08561ef4 +0x0b4:  mov    0x8(%ebp),%eax
08561ef7 +0x0b7:  mov    %eax,(%esp)
08561efa +0x0ba:  call   08560df2 <_ZN18online_preliminary18COnlinePreliminary12_PullOutRoomEP5CUserP8PvP_Roomi>  ; online_preliminary::COnlinePreliminary::_PullOutRoom(CUser*, PvP_Room*, int)
08561eff +0x0bf:  cmpl   $0x0,-0x14(%ebp)
08561f03 +0x0c3:  jne    08561f1c <+0xdc>
08561f05 +0x0c5:  mov    -0x18(%ebp),%eax
08561f08 +0x0c8:  mov    %eax,0x4(%esp)
08561f0c +0x0cc:  mov    0x8(%ebp),%eax
08561f0f +0x0cf:  mov    %eax,(%esp)
08561f12 +0x0d2:  call   08560f92 <_ZN18online_preliminary18COnlinePreliminary9_MakeRoomEP5CUser>  ; online_preliminary::COnlinePreliminary::_MakeRoom(CUser*)
08561f17 +0x0d7:  mov    %eax,-0x14(%ebp)
08561f1a +0x0da:  jmp    08561f46 <+0x106>
08561f1c +0x0dc:  movl   $0x1,0xc(%esp)
08561f24 +0x0e4:  mov    -0x14(%ebp),%eax
08561f27 +0x0e7:  mov    %eax,0x8(%esp)
08561f2b +0x0eb:  mov    -0x18(%ebp),%eax
08561f2e +0x0ee:  mov    %eax,0x4(%esp)
08561f32 +0x0f2:  mov    0x8(%ebp),%eax
08561f35 +0x0f5:  mov    %eax,(%esp)
08561f38 +0x0f8:  call   08560e4a <_ZN18online_preliminary18COnlinePreliminary10_PutInRoomEP5CUserP8PvP_Roomb>  ; online_preliminary::COnlinePreliminary::_PutInRoom(CUser*, PvP_Room*, bool)
08561f3d +0x0fd:  jmp    08561f46 <+0x106>
08561f3f +0x0ff:  nop
08561f40 +0x100:  jmp    08561f46 <+0x106>
08561f42 +0x102:  nop
08561f43 +0x103:  jmp    08561f46 <+0x106>
08561f45 +0x105:  nop
08561f46 +0x106:  addl   $0x1,-0x10(%ebp)
08561f4a +0x10a:  cmpl   $0x7,-0x10(%ebp)
08561f4e +0x10e:  setbe  %al
08561f51 +0x111:  test   %al,%al
08561f53 +0x113:  jne    08561e60 <+0x20>
08561f59 +0x119:  mov    0x8(%ebp),%eax
08561f5c +0x11c:  movl   $0x0,0x4(%eax)
08561f63 +0x123:  leave
08561f64 +0x124:  ret
08561f65 +0x125:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_ReturnTeam @ 0x8561e40

/* online_preliminary::COnlinePreliminary::_ReturnTeam(PvP_Room*, int, CUser*) */

void __thiscall
online_preliminary::COnlinePreliminary::_ReturnTeam
          (COnlinePreliminary *this,PvP_Room *param_1,int param_2,CUser *param_3)

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
