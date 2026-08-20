# _BackupRoomInfo

`_ZN18online_preliminary18COnlinePreliminary15_BackupRoomInfoEP8PvP_Room`

`online_preliminary::COnlinePreliminary::_BackupRoomInfo(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560f74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560f74  _ZN18online_preliminary18COnlinePreliminary15_BackupRoomInfoEP8PvP_Room
#           online_preliminary::COnlinePreliminary::_BackupRoomInfo(PvP_Room*)
# range [0x08560f74, 0x08560f91]
08560f74 +0x00:  push   %ebp
08560f75 +0x01:  mov    %esp,%ebp
08560f77 +0x03:  sub    $0x18,%esp
08560f7a +0x06:  mov    0x8(%ebp),%eax
08560f7d +0x09:  add    $0x8,%eax
08560f80 +0x0c:  mov    %eax,0x4(%esp)
08560f84 +0x10:  mov    0xc(%ebp),%eax
08560f87 +0x13:  mov    %eax,(%esp)
08560f8a +0x16:  call   085d9296 <_ZN8PvP_Room13get_room_infoEP13PVP_ROOM_INFO>  ; PvP_Room::get_room_info(PVP_ROOM_INFO*)
08560f8f +0x1b:  leave
08560f90 +0x1c:  ret
08560f91 +0x1d:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_BackupRoomInfo @ 0x8560f74

/* online_preliminary::COnlinePreliminary::_BackupRoomInfo(PvP_Room*) */

void __thiscall
online_preliminary::COnlinePreliminary::_BackupRoomInfo(COnlinePreliminary *this,PvP_Room *param_1)

{
  PvP_Room::get_room_info(param_1,(PVP_ROOM_INFO *)(this + 8));
  return;
}
```
