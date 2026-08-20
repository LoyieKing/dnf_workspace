# GetTotalKeyLength

`_ZNK6Cipher17GetTotalKeyLengthEv`

`Cipher::GetTotalKeyLength() const`

| 类 | 地址 |
|---|---|
| `Cipher` | `0x080975d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080975d4  _ZNK6Cipher17GetTotalKeyLengthEv
#           Cipher::GetTotalKeyLength() const
# range [0x080975d4, 0x080975dd]
080975d4 +0x00:  push   %ebp
080975d5 +0x01:  mov    %esp,%ebp
080975d7 +0x03:  mov    0x8(%ebp),%eax
080975da +0x06:  mov    (%eax),%eax
080975dc +0x08:  pop    %ebp
080975dd +0x09:  ret
```

## 反编译 C

```c
// Cipher::GetTotalKeyLength @ 0x80975d4

/* Cipher::GetTotalKeyLength() const */

undefined4 __thiscall Cipher::GetTotalKeyLength(Cipher *this)

{
  return *(undefined4 *)this;
}
```
