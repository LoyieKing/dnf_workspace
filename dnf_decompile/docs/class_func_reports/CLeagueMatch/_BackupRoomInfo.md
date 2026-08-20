# _BackupRoomInfo

`_ZN12CLeagueMatch15_BackupRoomInfoEP8PvP_Room`

`CLeagueMatch::_BackupRoomInfo(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855d554` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855d554  _ZN12CLeagueMatch15_BackupRoomInfoEP8PvP_Room
#           CLeagueMatch::_BackupRoomInfo(PvP_Room*)
# range [0x0855d554, 0x0855d571]
0855d554 +0x00:  push   %ebp
0855d555 +0x01:  mov    %esp,%ebp
0855d557 +0x03:  sub    $0x18,%esp
0855d55a +0x06:  mov    0x8(%ebp),%eax
0855d55d +0x09:  add    $0x8,%eax
0855d560 +0x0c:  mov    %eax,0x4(%esp)
0855d564 +0x10:  mov    0xc(%ebp),%eax
0855d567 +0x13:  mov    %eax,(%esp)
0855d56a +0x16:  call   085d9296 <_ZN8PvP_Room13get_room_infoEP13PVP_ROOM_INFO>  ; PvP_Room::get_room_info(PVP_ROOM_INFO*)
0855d56f +0x1b:  leave
0855d570 +0x1c:  ret
0855d571 +0x1d:  nop
```

## 反编译 C

```c
// CLeagueMatch::_BackupRoomInfo @ 0x855d554

/* CLeagueMatch::_BackupRoomInfo(PvP_Room*) */

void __thiscall CLeagueMatch::_BackupRoomInfo(CLeagueMatch *this,PvP_Room *param_1)

{
  PvP_Room::get_room_info(param_1,(PVP_ROOM_INFO *)(this + 8));
  return;
}
```
