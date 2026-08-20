# Send_HackType

`_ZN8XNuclear6CHades13Send_HackTypeEv`

`XNuclear::CHades::Send_HackType()`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b9322` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9322  _ZN8XNuclear6CHades13Send_HackTypeEv
#           XNuclear::CHades::Send_HackType()
# range [0x084b9322, 0x084b9327]
084b9322 +0x00:  push   %ebp
084b9323 +0x01:  mov    %esp,%ebp
084b9325 +0x03:  pop    %ebp
084b9326 +0x04:  ret
084b9327 +0x05:  nop
```

## 反编译 C

```c
// XNuclear::CHades::Send_HackType @ 0x84b9322

/* XNuclear::CHades::Send_HackType() */

void XNuclear::CHades::Send_HackType(void)

{
  return;
}
```
