# _CheckMovableRoom

`_ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_`

`fair_pvp::CFairMatch::_CheckMovableRoom(IMatch*, PvP_Room*, PvP_Room**)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08563ed8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08563ed8  _ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_
#           fair_pvp::CFairMatch::_CheckMovableRoom(IMatch*, PvP_Room*, PvP_Room**)
# range [0x08563ed8, 0x08563ff6]
08563ed8 +0x000:  push   %ebp
08563ed9 +0x001:  mov    %esp,%ebp
08563edb +0x003:  sub    $0x48,%esp
08563ede +0x006:  cmpl   $0x0,0xc(%ebp)
08563ee2 +0x00a:  jne    08563eee <+0x16>
08563ee4 +0x00c:  mov    $0x0,%eax
08563ee9 +0x011:  jmp    08563ff5 <+0x11d>
08563eee +0x016:  movl   $0x0,-0x10(%ebp)
08563ef5 +0x01d:  movl   $0x0,-0xc(%ebp)
08563efc +0x024:  jmp    08563f29 <+0x51>
08563efe +0x026:  mov    0xc(%ebp),%eax
08563f01 +0x029:  mov    (%eax),%eax
08563f03 +0x02b:  add    $0x10,%eax
08563f06 +0x02e:  mov    (%eax),%edx
08563f08 +0x030:  mov    -0xc(%ebp),%eax
08563f0b +0x033:  mov    %eax,0x4(%esp)
08563f0f +0x037:  mov    0xc(%ebp),%eax
08563f12 +0x03a:  mov    %eax,(%esp)
08563f15 +0x03d:  call   *%edx
08563f17 +0x03f:  mov    %eax,-0x10(%ebp)
08563f1a +0x042:  cmpl   $0x0,-0x10(%ebp)
08563f1e +0x046:  setne  %al
08563f21 +0x049:  test   %al,%al
08563f23 +0x04b:  jne    08563f36 <+0x5e>
08563f25 +0x04d:  addl   $0x1,-0xc(%ebp)
08563f29 +0x051:  cmpl   $0x3,-0xc(%ebp)
08563f2d +0x055:  setle  %al
08563f30 +0x058:  test   %al,%al
08563f32 +0x05a:  jne    08563efe <+0x26>
08563f34 +0x05c:  jmp    08563f37 <+0x5f>
08563f36 +0x05e:  nop
08563f37 +0x05f:  cmpl   $0x0,-0x10(%ebp)
08563f3b +0x063:  jne    08563f8a <+0xb2>
08563f3d +0x065:  movl   $0x0,0xc(%esp)
08563f45 +0x06d:  movl   $0xc5d,0x8(%esp)
08563f4d +0x075:  movl   $&_ZZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_E19__PRETTY_FUNCTION__,0x4(%esp)
08563f55 +0x07d:  lea    -0x30(%ebp),%eax
08563f58 +0x080:  mov    %eax,(%esp)
08563f5b +0x083:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08563f60 +0x088:  movl   $0xc5d,0xc(%esp)
08563f68 +0x090:  movl   $"MatchingSystem.cpp",0x8(%esp)
08563f70 +0x098:  movl   $"error file(%s) line(%d)",0x4(%esp)
08563f78 +0x0a0:  lea    -0x30(%ebp),%eax
08563f7b +0x0a3:  mov    %eax,(%esp)
08563f7e +0x0a6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08563f83 +0x0ab:  mov    $0x0,%eax
08563f88 +0x0b0:  jmp    08563ff5 <+0x11d>
08563f8a +0x0b2:  mov    -0x10(%ebp),%eax
08563f8d +0x0b5:  mov    %eax,(%esp)
08563f90 +0x0b8:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
08563f95 +0x0bd:  mov    0x14(%ebp),%edx
08563f98 +0x0c0:  mov    %eax,(%edx)
08563f9a +0x0c2:  mov    0x14(%ebp),%eax
08563f9d +0x0c5:  mov    (%eax),%eax
08563f9f +0x0c7:  test   %eax,%eax
08563fa1 +0x0c9:  jne    08563ff0 <+0x118>
08563fa3 +0x0cb:  movl   $0x0,0xc(%esp)
08563fab +0x0d3:  movl   $0xc64,0x8(%esp)
08563fb3 +0x0db:  movl   $&_ZZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_E19__PRETTY_FUNCTION__,0x4(%esp)
08563fbb +0x0e3:  lea    -0x20(%ebp),%eax
08563fbe +0x0e6:  mov    %eax,(%esp)
08563fc1 +0x0e9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08563fc6 +0x0ee:  movl   $0xc64,0xc(%esp)
08563fce +0x0f6:  movl   $"MatchingSystem.cpp",0x8(%esp)
08563fd6 +0x0fe:  movl   $"error file(%s) line(%d)",0x4(%esp)
08563fde +0x106:  lea    -0x20(%ebp),%eax
08563fe1 +0x109:  mov    %eax,(%esp)
08563fe4 +0x10c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08563fe9 +0x111:  mov    $0x0,%eax
08563fee +0x116:  jmp    08563ff5 <+0x11d>
08563ff0 +0x118:  mov    $0x1,%eax
08563ff5 +0x11d:  leave
08563ff6 +0x11e:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_CheckMovableRoom @ 0x8563ed8

/* fair_pvp::CFairMatch::_CheckMovableRoom(IMatch*, PvP_Room*, PvP_Room**) */

undefined4 __thiscall
fair_pvp::CFairMatch::_CheckMovableRoom
          (CFairMatch *this,IMatch *param_1,PvP_Room *param_2,PvP_Room **param_3)

{
  undefined4 uVar1;
  PvP_Room *pPVar2;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  CUser *local_14;
  int local_10;
  
  if (param_1 == (IMatch *)0x0) {
    uVar1 = 0;
  }
  else {
    local_14 = (CUser *)0x0;
    local_10 = 0;
    while ((local_10 < 4 &&
           (local_14 = (CUser *)(**(code **)(*(int *)param_1 + 0x10))(param_1,local_10),
           local_14 == (CUser *)0x0))) {
      local_10 = local_10 + 1;
    }
    if (local_14 == (CUser *)0x0) {
      cMyTrace::cMyTrace(local_34,
                         "int fair_pvp::CFairMatch::_CheckMovableRoom(IMatch*, PvP_Room*, PvP_Room**)"
                         ,0xc5d,0);
      cMyTrace::operator()(local_34,"error file(%s) line(%d)","MatchingSystem.cpp",0xc5d);
      uVar1 = 0;
    }
    else {
      pPVar2 = (PvP_Room *)CUser::GetPVPRoom(local_14);
      *param_3 = pPVar2;
      if (*param_3 == (PvP_Room *)0x0) {
        cMyTrace::cMyTrace(local_24,
                           "int fair_pvp::CFairMatch::_CheckMovableRoom(IMatch*, PvP_Room*, PvP_Room**)"
                           ,0xc64,0);
        cMyTrace::operator()(local_24,"error file(%s) line(%d)","MatchingSystem.cpp",0xc64);
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}
```
