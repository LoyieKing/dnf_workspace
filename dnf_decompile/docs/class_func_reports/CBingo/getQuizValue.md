# getQuizValue

`_ZN6CBingo12getQuizValueEv`

`CBingo::getQuizValue()`

| 类 | 地址 |
|---|---|
| `CBingo` | `0x080cae12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080cae12  _ZN6CBingo12getQuizValueEv
#           CBingo::getQuizValue()
# range [0x080cae12, 0x080cae1d]
080cae12 +0x00:  push   %ebp
080cae13 +0x01:  mov    %esp,%ebp
080cae15 +0x03:  mov    0x8(%ebp),%eax
080cae18 +0x06:  mov    0xc(%eax),%eax
080cae1b +0x09:  pop    %ebp
080cae1c +0x0a:  ret
080cae1d +0x0b:  nop
```

## 反编译 C

```c
// CBingo::getQuizValue @ 0x80cae12

/* CBingo::getQuizValue() */

undefined4 __thiscall CBingo::getQuizValue(CBingo *this)

{
  return *(undefined4 *)(this + 0xc);
}
```
