# Statistics

`_ZN10StatisticsC1Ev`

`Statistics::Statistics()`

| 类 | 地址 |
|---|---|
| `Statistics` | `0x0860b660` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b660  _ZN10StatisticsC1Ev
#           Statistics::Statistics()
# range [0x0860b660, 0x0860b665]
0860b660 +0x00:  push   %ebp
0860b661 +0x01:  mov    %esp,%ebp
0860b663 +0x03:  pop    %ebp
0860b664 +0x04:  ret
0860b665 +0x05:  nop
```

## 反编译 C

```c
// Statistics::Statistics @ 0x860b660

/* Statistics::Statistics() */

void __thiscall Statistics::Statistics(Statistics *this)

{
  return;
}
```
