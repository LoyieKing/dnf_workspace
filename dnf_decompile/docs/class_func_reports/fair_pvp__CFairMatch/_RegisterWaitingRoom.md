# _RegisterWaitingRoom

`_ZN8fair_pvp10CFairMatch20_RegisterWaitingRoomEP8PvP_Room`

`fair_pvp::CFairMatch::_RegisterWaitingRoom(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08563a32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08563a32  _ZN8fair_pvp10CFairMatch20_RegisterWaitingRoomEP8PvP_Room
#           fair_pvp::CFairMatch::_RegisterWaitingRoom(PvP_Room*)
# range [0x08563a32, 0x08563a53]
08563a32 +0x00:  push   %ebp
08563a33 +0x01:  mov    %esp,%ebp
08563a35 +0x03:  sub    $0x18,%esp
08563a38 +0x06:  mov    &_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E,%eax
08563a3d +0x0b:  mov    (%eax),%eax
08563a3f +0x0d:  mov    (%eax),%ecx
08563a41 +0x0f:  mov    0x8(%ebp),%edx
08563a44 +0x12:  mov    &_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E,%eax
08563a49 +0x17:  mov    %edx,0x4(%esp)
08563a4d +0x1b:  mov    %eax,(%esp)
08563a50 +0x1e:  call   *%ecx
08563a52 +0x20:  leave
08563a53 +0x21:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_RegisterWaitingRoom @ 0x8563a32

/* fair_pvp::CFairMatch::_RegisterWaitingRoom(PvP_Room*) */

void fair_pvp::CFairMatch::_RegisterWaitingRoom(PvP_Room *param_1)

{
  (**(code **)*pWaitingRoomList_)(pWaitingRoomList_,param_1);
  return;
}
```
