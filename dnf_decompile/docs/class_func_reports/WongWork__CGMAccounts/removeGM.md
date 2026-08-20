# removeGM

`_ZN8WongWork11CGMAccounts8removeGMEjj`

`WongWork::CGMAccounts::removeGM(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CGMAccounts` | `0x081093fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081093fc  _ZN8WongWork11CGMAccounts8removeGMEjj
#           WongWork::CGMAccounts::removeGM(unsigned int, unsigned int)
# range [0x081093fc, 0x08109409]
081093fc +0x00:  push   %ebp
081093fd +0x01:  mov    %esp,%ebp
081093ff +0x03:  sub    $0x20,%esp
08109402 +0x06:  mov    $0x0,%eax
08109407 +0x0b:  leave
08109408 +0x0c:  ret
08109409 +0x0d:  nop
```

## 反编译 C

```c
// WongWork::CGMAccounts::removeGM @ 0x81093fc

/* WongWork::CGMAccounts::removeGM(unsigned int, unsigned int) */

undefined4 WongWork::CGMAccounts::removeGM(uint param_1,uint param_2)

{
  return 0;
}
```
