# get_final_day_condition

`_ZN13EventClassify11CAttendance23get_final_day_conditionEv`

`EventClassify::CAttendance::get_final_day_condition()`

| 类 | 地址 |
|---|---|
| `EventClassify::CAttendance` | `0x0810e7f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e7f6  _ZN13EventClassify11CAttendance23get_final_day_conditionEv
#           EventClassify::CAttendance::get_final_day_condition()
# range [0x0810e7f6, 0x0810e803]
0810e7f6 +0x00:  push   %ebp
0810e7f7 +0x01:  mov    %esp,%ebp
0810e7f9 +0x03:  mov    0x8(%ebp),%eax
0810e7fc +0x06:  mov    0x1c(%eax),%eax
0810e7ff +0x09:  mov    0x24(%eax),%eax
0810e802 +0x0c:  pop    %ebp
0810e803 +0x0d:  ret
```

## 反编译 C

```c
// EventClassify::CAttendance::get_final_day_condition @ 0x810e7f6

/* EventClassify::CAttendance::get_final_day_condition() */

undefined4 __thiscall EventClassify::CAttendance::get_final_day_condition(CAttendance *this)

{
  return *(undefined4 *)(*(int *)(this + 0x1c) + 0x24);
}
```
