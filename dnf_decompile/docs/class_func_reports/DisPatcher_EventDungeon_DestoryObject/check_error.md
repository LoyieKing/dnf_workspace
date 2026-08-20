# check_error

`_ZN37DisPatcher_EventDungeon_DestoryObject11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_EventDungeon_DestoryObject::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_EventDungeon_DestoryObject` | `0x0812bd82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812bd82  _ZN37DisPatcher_EventDungeon_DestoryObject11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_EventDungeon_DestoryObject::check_error(CUser*, MSG_BASE&)
# range [0x0812bd82, 0x0812bd8b]
0812bd82 +0x00:  push   %ebp
0812bd83 +0x01:  mov    %esp,%ebp
0812bd85 +0x03:  mov    $0x0,%eax
0812bd8a +0x08:  pop    %ebp
0812bd8b +0x09:  ret
```

## 反编译 C

```c
// DisPatcher_EventDungeon_DestoryObject::check_error @ 0x812bd82

/* DisPatcher_EventDungeon_DestoryObject::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_EventDungeon_DestoryObject::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
