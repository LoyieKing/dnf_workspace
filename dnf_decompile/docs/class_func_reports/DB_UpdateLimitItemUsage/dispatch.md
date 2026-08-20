# dispatch

`_ZN23DB_UpdateLimitItemUsage8dispatchEiiP6Stream`

`DB_UpdateLimitItemUsage::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateLimitItemUsage` | `0x0843f022` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843f022  _ZN23DB_UpdateLimitItemUsage8dispatchEiiP6Stream
#           DB_UpdateLimitItemUsage::dispatch(int, int, Stream*)
# range [0x0843f022, 0x0843f02f]
0843f022 +0x00:  push   %ebp
0843f023 +0x01:  mov    %esp,%ebp
0843f025 +0x03:  sub    $0x20,%esp
0843f028 +0x06:  mov    $0x1,%eax
0843f02d +0x0b:  leave
0843f02e +0x0c:  ret
0843f02f +0x0d:  nop
```

## 反编译 C

```c
// DB_UpdateLimitItemUsage::dispatch @ 0x843f022

/* DB_UpdateLimitItemUsage::dispatch(int, int, Stream*) */

undefined4 DB_UpdateLimitItemUsage::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
