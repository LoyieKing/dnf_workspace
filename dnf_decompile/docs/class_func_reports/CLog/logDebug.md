# logDebug

`_ZN4CLog8logDebugEPKcz`

`CLog::logDebug(char const*, ...)`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854f40a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854f40a  _ZN4CLog8logDebugEPKcz
#           CLog::logDebug(char const*, ...)
# range [0x0854f40a, 0x0854f413]
0854f40a +0x00:  push   %ebp
0854f40b +0x01:  mov    %esp,%ebp
0854f40d +0x03:  mov    $0x1,%eax
0854f412 +0x08:  pop    %ebp
0854f413 +0x09:  ret
```

## 反编译 C

```c
// CLog::logDebug @ 0x854f40a

/* CLog::logDebug(char const*, ...) */

undefined4 CLog::logDebug(char *param_1,...)

{
  return 1;
}
```
