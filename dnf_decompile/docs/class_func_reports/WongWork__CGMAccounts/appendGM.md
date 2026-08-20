# appendGM

`_ZN8WongWork11CGMAccounts8appendGMEjj`

`WongWork::CGMAccounts::appendGM(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CGMAccounts` | `0x081093ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081093ee  _ZN8WongWork11CGMAccounts8appendGMEjj
#           WongWork::CGMAccounts::appendGM(unsigned int, unsigned int)
# range [0x081093ee, 0x081093fb]
081093ee +0x00:  push   %ebp
081093ef +0x01:  mov    %esp,%ebp
081093f1 +0x03:  sub    $0x10,%esp
081093f4 +0x06:  mov    $0x0,%eax
081093f9 +0x0b:  leave
081093fa +0x0c:  ret
081093fb +0x0d:  nop
```

## 反编译 C

```c
// WongWork::CGMAccounts::appendGM @ 0x81093ee

/* WongWork::CGMAccounts::appendGM(unsigned int, unsigned int) */

undefined4 WongWork::CGMAccounts::appendGM(uint param_1,uint param_2)

{
  return 0;
}
```
