# check_error

`_ZN33DisPatcher_EventDungeon_ClearRoom11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_EventDungeon_ClearRoom::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_EventDungeon_ClearRoom` | `0x0812beb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812beb0  _ZN33DisPatcher_EventDungeon_ClearRoom11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_EventDungeon_ClearRoom::check_error(CUser*, MSG_BASE&)
# range [0x0812beb0, 0x0812beb9]
0812beb0 +0x00:  push   %ebp
0812beb1 +0x01:  mov    %esp,%ebp
0812beb3 +0x03:  mov    $0x0,%eax
0812beb8 +0x08:  pop    %ebp
0812beb9 +0x09:  ret
```

## 反编译 C

```c
// DisPatcher_EventDungeon_ClearRoom::check_error @ 0x812beb0

/* DisPatcher_EventDungeon_ClearRoom::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_EventDungeon_ClearRoom::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
