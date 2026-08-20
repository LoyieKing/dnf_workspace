# doNothing

`_ZN10UPGRADEJAR9doNothingEv`

`UPGRADEJAR::doNothing()`

| 类 | 地址 |
|---|---|
| `UPGRADEJAR` | `0x089687cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089687cc  _ZN10UPGRADEJAR9doNothingEv
#           UPGRADEJAR::doNothing()
# range [0x089687cc, 0x089687d0]
089687cc +0x00:  push   %ebp
089687cd +0x01:  mov    %esp,%ebp
089687cf +0x03:  pop    %ebp
089687d0 +0x04:  ret
```

## 反编译 C

```c
// UPGRADEJAR::doNothing @ 0x89687cc

/* UPGRADEJAR::doNothing() */

void UPGRADEJAR::doNothing(void)

{
  return;
}
```
