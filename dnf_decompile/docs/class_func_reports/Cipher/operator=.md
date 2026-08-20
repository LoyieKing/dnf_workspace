# operator=

`_ZN6CipheraSERKS_`

`Cipher::operator=(Cipher const&)`

| 类 | 地址 |
|---|---|
| `Cipher` | `0x080972fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080972fe  _ZN6CipheraSERKS_
#           Cipher::operator=(Cipher const&)
# range [0x080972fe, 0x08097305]
080972fe +0x00:  push   %ebp
080972ff +0x01:  mov    %esp,%ebp
08097301 +0x03:  mov    0x8(%ebp),%eax
08097304 +0x06:  pop    %ebp
08097305 +0x07:  ret
```

## 反编译 C

```c
// Cipher::operator= @ 0x80972fe

/* Cipher::TEMPNAMEPLACEHOLDERVALUE(Cipher const&) */

Cipher * __thiscall Cipher::operator=(Cipher *this,Cipher *param_1)

{
  return this;
}
```
