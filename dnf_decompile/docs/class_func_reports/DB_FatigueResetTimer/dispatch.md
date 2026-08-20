# dispatch

`_ZN20DB_FatigueResetTimer8dispatchEiiP6Stream`

`DB_FatigueResetTimer::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_FatigueResetTimer` | `0x0841abbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841abbc  _ZN20DB_FatigueResetTimer8dispatchEiiP6Stream
#           DB_FatigueResetTimer::dispatch(int, int, Stream*)
# range [0x0841abbc, 0x0841abc5]
0841abbc +0x00:  push   %ebp
0841abbd +0x01:  mov    %esp,%ebp
0841abbf +0x03:  mov    $0x1,%eax
0841abc4 +0x08:  pop    %ebp
0841abc5 +0x09:  ret
```

## 反编译 C

```c
// DB_FatigueResetTimer::dispatch @ 0x841abbc

/* DB_FatigueResetTimer::dispatch(int, int, Stream*) */

undefined4 DB_FatigueResetTimer::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
