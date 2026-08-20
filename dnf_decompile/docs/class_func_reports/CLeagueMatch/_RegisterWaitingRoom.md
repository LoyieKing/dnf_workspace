# _RegisterWaitingRoom

`_ZN12CLeagueMatch20_RegisterWaitingRoomEP8PvP_Room`

`CLeagueMatch::_RegisterWaitingRoom(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855d884` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855d884  _ZN12CLeagueMatch20_RegisterWaitingRoomEP8PvP_Room
#           CLeagueMatch::_RegisterWaitingRoom(PvP_Room*)
# range [0x0855d884, 0x0855da55]
0855d884 +0x000:  push   %ebp
0855d885 +0x001:  mov    %esp,%ebp
0855d887 +0x003:  sub    $0x38,%esp
0855d88a +0x006:  movl   $0x0,-0x20(%ebp)
0855d891 +0x00d:  mov    $0x0,%eax
0855d896 +0x012:  mov    %eax,-0x1c(%ebp)
0855d899 +0x015:  movl   $0x0,-0x18(%ebp)
0855d8a0 +0x01c:  jmp    0855d94b <+0xc7>
0855d8a5 +0x021:  mov    -0x18(%ebp),%eax
0855d8a8 +0x024:  mov    0x8(%ebp),%ecx
0855d8ab +0x027:  lea    0x0(,%eax,4),%edx
0855d8b2 +0x02e:  lea    0x0(,%edx,8),%eax
0855d8b9 +0x035:  sub    %edx,%eax
0855d8bb +0x037:  lea    (%ecx,%eax,1),%eax
0855d8be +0x03a:  add    $0x10,%eax
0855d8c1 +0x03d:  movzbl 0x18(%eax),%eax
0855d8c5 +0x041:  test   %al,%al
0855d8c7 +0x043:  je     0855d947 <+0xc3>
0855d8c9 +0x045:  cmpl   $0x0,-0x20(%ebp)
0855d8cd +0x049:  jne    0855d8f7 <+0x73>
0855d8cf +0x04b:  mov    -0x18(%ebp),%eax
0855d8d2 +0x04e:  mov    0x8(%ebp),%ecx
0855d8d5 +0x051:  lea    0x0(,%eax,4),%edx
0855d8dc +0x058:  lea    0x0(,%edx,8),%eax
0855d8e3 +0x05f:  sub    %edx,%eax
0855d8e5 +0x061:  lea    (%ecx,%eax,1),%eax
0855d8e8 +0x064:  add    $0x20,%eax
0855d8eb +0x067:  mov    (%eax),%eax
0855d8ed +0x069:  mov    %eax,-0x1c(%ebp)
0855d8f0 +0x06c:  movl   $0x1,-0x20(%ebp)
0855d8f7 +0x073:  mov    -0x18(%ebp),%eax
0855d8fa +0x076:  mov    0x8(%ebp),%ecx
0855d8fd +0x079:  lea    0x0(,%eax,4),%edx
0855d904 +0x080:  lea    0x0(,%edx,8),%eax
0855d90b +0x087:  sub    %edx,%eax
0855d90d +0x089:  lea    (%ecx,%eax,1),%eax
0855d910 +0x08c:  add    $0x20,%eax
0855d913 +0x08f:  flds   (%eax)
0855d915 +0x091:  flds   -0x1c(%ebp)
0855d918 +0x094:  fucompp
0855d91a +0x096:  fnstsw %ax
0855d91c +0x098:  test   $0x45,%ah
0855d91f +0x09b:  sete   %al
0855d922 +0x09e:  test   %al,%al
0855d924 +0x0a0:  je     0855d947 <+0xc3>
0855d926 +0x0a2:  mov    -0x18(%ebp),%eax
0855d929 +0x0a5:  mov    0x8(%ebp),%ecx
0855d92c +0x0a8:  lea    0x0(,%eax,4),%edx
0855d933 +0x0af:  lea    0x0(,%edx,8),%eax
0855d93a +0x0b6:  sub    %edx,%eax
0855d93c +0x0b8:  lea    (%ecx,%eax,1),%eax
0855d93f +0x0bb:  add    $0x20,%eax
0855d942 +0x0be:  mov    (%eax),%eax
0855d944 +0x0c0:  mov    %eax,-0x1c(%ebp)
0855d947 +0x0c3:  addl   $0x1,-0x18(%ebp)
0855d94b +0x0c7:  cmpl   $0x3,-0x18(%ebp)
0855d94f +0x0cb:  setle  %al
0855d952 +0x0ce:  test   %al,%al
0855d954 +0x0d0:  jne    0855d8a5 <+0x21>
0855d95a +0x0d6:  flds   -0x1c(%ebp)
0855d95d +0x0d9:  fld1
0855d95f +0x0db:  fsubrp %st,%st(1)
0855d961 +0x0dd:  fstps  -0x1c(%ebp)
0855d964 +0x0e0:  movl   $0x0,-0x14(%ebp)
0855d96b +0x0e7:  jmp    0855da07 <+0x183>
0855d970 +0x0ec:  mov    -0x14(%ebp),%eax
0855d973 +0x0ef:  mov    %eax,0x4(%esp)
0855d977 +0x0f3:  mov    0xc(%ebp),%eax
0855d97a +0x0f6:  mov    %eax,(%esp)
0855d97d +0x0f9:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
0855d982 +0x0fe:  cmp    $0x3,%eax
0855d985 +0x101:  sete   %al
0855d988 +0x104:  test   %al,%al
0855d98a +0x106:  je     0855da03 <+0x17f>
0855d98c +0x108:  mov    -0x14(%ebp),%eax
0855d98f +0x10b:  mov    %eax,0x4(%esp)
0855d993 +0x10f:  mov    0xc(%ebp),%eax
0855d996 +0x112:  mov    %eax,(%esp)
0855d999 +0x115:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
0855d99e +0x11a:  mov    %eax,-0x10(%ebp)
0855d9a1 +0x11d:  movl   $0x0,-0xc(%ebp)
0855d9a8 +0x124:  jmp    0855d9f8 <+0x174>
0855d9aa +0x126:  mov    -0xc(%ebp),%eax
0855d9ad +0x129:  mov    0x8(%ebp),%ecx
0855d9b0 +0x12c:  lea    0x0(,%eax,4),%edx
0855d9b7 +0x133:  lea    0x0(,%edx,8),%eax
0855d9be +0x13a:  sub    %edx,%eax
0855d9c0 +0x13c:  lea    (%ecx,%eax,1),%eax
0855d9c3 +0x13f:  add    $0x24,%eax
0855d9c6 +0x142:  mov    (%eax),%eax
0855d9c8 +0x144:  cmp    -0x10(%ebp),%eax
0855d9cb +0x147:  jne    0855d9f4 <+0x170>
0855d9cd +0x149:  cmpl   $0x0,-0x10(%ebp)
0855d9d1 +0x14d:  je     0855d9f4 <+0x170>
0855d9d3 +0x14f:  mov    -0xc(%ebp),%eax
0855d9d6 +0x152:  mov    0x8(%ebp),%ecx
0855d9d9 +0x155:  lea    0x0(,%eax,4),%edx
0855d9e0 +0x15c:  lea    0x0(,%edx,8),%eax
0855d9e7 +0x163:  sub    %edx,%eax
0855d9e9 +0x165:  lea    (%ecx,%eax,1),%eax
0855d9ec +0x168:  lea    0x20(%eax),%edx
0855d9ef +0x16b:  mov    -0x1c(%ebp),%eax
0855d9f2 +0x16e:  mov    %eax,(%edx)
0855d9f4 +0x170:  addl   $0x1,-0xc(%ebp)
0855d9f8 +0x174:  cmpl   $0x3,-0xc(%ebp)
0855d9fc +0x178:  setle  %al
0855d9ff +0x17b:  test   %al,%al
0855da01 +0x17d:  jne    0855d9aa <+0x126>
0855da03 +0x17f:  addl   $0x1,-0x14(%ebp)
0855da07 +0x183:  cmpl   $0x7,-0x14(%ebp)
0855da0b +0x187:  setle  %al
0855da0e +0x18a:  test   %al,%al
0855da10 +0x18c:  jne    0855d970 <+0xec>
0855da16 +0x192:  mov    0x8(%ebp),%eax
0855da19 +0x195:  add    $0x8c,%eax
0855da1e +0x19a:  mov    %eax,%edx
0855da20 +0x19c:  mov    0x8(%ebp),%eax
0855da23 +0x19f:  add    $0x1c,%eax
0855da26 +0x1a2:  movl   $&_Z13CompareRatingRK10PlayerInfoS1_,0x8(%esp)
0855da2e +0x1aa:  mov    %edx,0x4(%esp)
0855da32 +0x1ae:  mov    %eax,(%esp)
0855da35 +0x1b1:  call   085693c5 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xd8f>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xd8f
0855da3a +0x1b6:  mov    &_ZN12CLeagueMatch17pWaitingRoomList_E,%eax
0855da3f +0x1bb:  mov    (%eax),%eax
0855da41 +0x1bd:  mov    (%eax),%ecx
0855da43 +0x1bf:  mov    0x8(%ebp),%edx
0855da46 +0x1c2:  mov    &_ZN12CLeagueMatch17pWaitingRoomList_E,%eax
0855da4b +0x1c7:  mov    %edx,0x4(%esp)
0855da4f +0x1cb:  mov    %eax,(%esp)
0855da52 +0x1ce:  call   *%ecx
0855da54 +0x1d0:  leave
0855da55 +0x1d1:  ret
```

## 反编译 C

```c
// CLeagueMatch::_RegisterWaitingRoom @ 0x855d884

/* CLeagueMatch::_RegisterWaitingRoom(PvP_Room*) */

void __thiscall CLeagueMatch::_RegisterWaitingRoom(CLeagueMatch *this,PvP_Room *param_1)

{
  bool bVar1;
  int iVar2;
  float local_20;
  int local_1c;
  int local_18;
  int local_10;
  
  bVar1 = false;
  local_20 = 0.0;
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    if (this[local_1c * 0x1c + 0x28] != (CLeagueMatch)0x0) {
      if (!bVar1) {
        local_20 = *(float *)(this + local_1c * 0x1c + 0x20);
        bVar1 = true;
      }
      if (*(float *)(this + local_1c * 0x1c + 0x20) < local_20) {
        local_20 = *(float *)(this + local_1c * 0x1c + 0x20);
      }
    }
  }
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
    iVar2 = PvP_Room::get_team(param_1,local_18);
    if (iVar2 == 3) {
      iVar2 = PvP_Room::get_user_seat(param_1,local_18);
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        if ((*(int *)(this + local_10 * 0x1c + 0x24) == iVar2) && (iVar2 != 0)) {
          *(float *)(this + local_10 * 0x1c + 0x20) = local_20 - 1.0;
        }
      }
    }
  }
  std::sort<PlayerInfo*,bool(*)(PlayerInfo_const&,PlayerInfo_const&)>
            ((PlayerInfo *)(this + 0x1c),(PlayerInfo *)(this + 0x8c),CompareRating);
  (**(code **)*pWaitingRoomList_)(pWaitingRoomList_,this);
  return;
}
```
