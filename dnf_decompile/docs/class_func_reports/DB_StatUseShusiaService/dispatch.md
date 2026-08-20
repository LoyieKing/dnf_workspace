# dispatch

`_ZN23DB_StatUseShusiaService8dispatchEiiP6Stream`

`DB_StatUseShusiaService::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_StatUseShusiaService` | `0x0841bce4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841bce4  _ZN23DB_StatUseShusiaService8dispatchEiiP6Stream
#           DB_StatUseShusiaService::dispatch(int, int, Stream*)
# range [0x0841bce4, 0x0841bced]
0841bce4 +0x00:  push   %ebp
0841bce5 +0x01:  mov    %esp,%ebp
0841bce7 +0x03:  mov    $0x1,%eax
0841bcec +0x08:  pop    %ebp
0841bced +0x09:  ret
```

## 反编译 C

```c
// DB_StatUseShusiaService::dispatch @ 0x841bce4

/* DB_StatUseShusiaService::dispatch(int, int, Stream*) */

undefined4 DB_StatUseShusiaService::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
