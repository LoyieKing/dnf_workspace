# _BackupRoomInfo

`_ZN8fair_pvp10CFairMatch15_BackupRoomInfoEP8PvP_Room`

`fair_pvp::CFairMatch::_BackupRoomInfo(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08563674` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08563674  _ZN8fair_pvp10CFairMatch15_BackupRoomInfoEP8PvP_Room
#           fair_pvp::CFairMatch::_BackupRoomInfo(PvP_Room*)
# range [0x08563674, 0x08563691]
08563674 +0x00:  push   %ebp
08563675 +0x01:  mov    %esp,%ebp
08563677 +0x03:  sub    $0x18,%esp
0856367a +0x06:  mov    0x8(%ebp),%eax
0856367d +0x09:  add    $0x8,%eax
08563680 +0x0c:  mov    %eax,0x4(%esp)
08563684 +0x10:  mov    0xc(%ebp),%eax
08563687 +0x13:  mov    %eax,(%esp)
0856368a +0x16:  call   085d9296 <_ZN8PvP_Room13get_room_infoEP13PVP_ROOM_INFO>  ; PvP_Room::get_room_info(PVP_ROOM_INFO*)
0856368f +0x1b:  leave
08563690 +0x1c:  ret
08563691 +0x1d:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_BackupRoomInfo @ 0x8563674

/* fair_pvp::CFairMatch::_BackupRoomInfo(PvP_Room*) */

void __thiscall fair_pvp::CFairMatch::_BackupRoomInfo(CFairMatch *this,PvP_Room *param_1)

{
  PvP_Room::get_room_info(param_1,(PVP_ROOM_INFO *)(this + 8));
  return;
}
```
