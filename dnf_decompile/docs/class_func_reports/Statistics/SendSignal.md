# SendSignal

`_ZN10Statistics10SendSignalEiPvi`

`Statistics::SendSignal(int, void*, int)`

| 类 | 地址 |
|---|---|
| `Statistics` | `0x0860b92e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b92e  _ZN10Statistics10SendSignalEiPvi
#           Statistics::SendSignal(int, void*, int)
# range [0x0860b92e, 0x0860b933]
0860b92e +0x00:  push   %ebp
0860b92f +0x01:  mov    %esp,%ebp
0860b931 +0x03:  pop    %ebp
0860b932 +0x04:  ret
0860b933 +0x05:  nop
```

## 反编译 C

```c
// Statistics::SendSignal @ 0x860b92e

/* Statistics::SendSignal(int, void*, int) */

void Statistics::SendSignal(int param_1,void *param_2,int param_3)

{
  return;
}
```
