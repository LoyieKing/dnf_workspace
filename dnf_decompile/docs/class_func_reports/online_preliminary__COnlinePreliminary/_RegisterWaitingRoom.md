# _RegisterWaitingRoom

`_ZN18online_preliminary18COnlinePreliminary20_RegisterWaitingRoomEP8PvP_Room`

`online_preliminary::COnlinePreliminary::_RegisterWaitingRoom(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085612a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085612a4  _ZN18online_preliminary18COnlinePreliminary20_RegisterWaitingRoomEP8PvP_Room
#           online_preliminary::COnlinePreliminary::_RegisterWaitingRoom(PvP_Room*)
# range [0x085612a4, 0x085612c5]
085612a4 +0x00:  push   %ebp
085612a5 +0x01:  mov    %esp,%ebp
085612a7 +0x03:  sub    $0x18,%esp
085612aa +0x06:  mov    &_ZN18online_preliminary18COnlinePreliminary17pWaitingRoomList_E,%eax
085612af +0x0b:  mov    (%eax),%eax
085612b1 +0x0d:  mov    (%eax),%ecx
085612b3 +0x0f:  mov    0x8(%ebp),%edx
085612b6 +0x12:  mov    &_ZN18online_preliminary18COnlinePreliminary17pWaitingRoomList_E,%eax
085612bb +0x17:  mov    %edx,0x4(%esp)
085612bf +0x1b:  mov    %eax,(%esp)
085612c2 +0x1e:  call   *%ecx
085612c4 +0x20:  leave
085612c5 +0x21:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_RegisterWaitingRoom @ 0x85612a4

/* online_preliminary::COnlinePreliminary::_RegisterWaitingRoom(PvP_Room*) */

void online_preliminary::COnlinePreliminary::_RegisterWaitingRoom(PvP_Room *param_1)

{
  (**(code **)*pWaitingRoomList_)(pWaitingRoomList_,param_1);
  return;
}
```
