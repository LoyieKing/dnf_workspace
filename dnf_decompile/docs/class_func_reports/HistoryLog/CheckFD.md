# CheckFD

`_ZN10HistoryLog7CheckFDEP8_IO_FILE`

`HistoryLog::CheckFD(_IO_FILE*)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084b9d06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9d06  _ZN10HistoryLog7CheckFDEP8_IO_FILE
#           HistoryLog::CheckFD(_IO_FILE*)
# range [0x084b9d06, 0x084b9d33]
084b9d06 +0x00:  push   %ebp
084b9d07 +0x01:  mov    %esp,%ebp
084b9d09 +0x03:  sub    $0x18,%esp
084b9d0c +0x06:  cmpl   $0x0,0x8(%ebp)
084b9d10 +0x0a:  jne    084b9d19 <+0x13>
084b9d12 +0x0c:  mov    $0x0,%eax
084b9d17 +0x11:  jmp    084b9d32 <+0x2c>
084b9d19 +0x13:  movl   $0x10,0x4(%esp)
084b9d21 +0x1b:  movl   $&_ZN10HistoryLog4timeE,(%esp)
084b9d28 +0x22:  call   086b192d <_Z16get_str_datetimePci>  ; get_str_datetime(char*, int)
084b9d2d +0x27:  mov    $0x1,%eax
084b9d32 +0x2c:  leave
084b9d33 +0x2d:  ret
```

## 反编译 C

```c
// HistoryLog::CheckFD @ 0x84b9d06

/* HistoryLog::CheckFD(_IO_FILE*) */

bool HistoryLog::CheckFD(_IO_FILE *param_1)

{
  if (param_1 != (_IO_FILE *)0x0) {
    get_str_datetime(time,0x10);
  }
  return param_1 != (_IO_FILE *)0x0;
}
```
