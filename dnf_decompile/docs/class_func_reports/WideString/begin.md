# begin

`_ZNK10WideString5beginEv`

`WideString::begin() const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9f74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9f74  _ZNK10WideString5beginEv
#           WideString::begin() const
# range [0x08ad9f74, 0x08ad9f7d]
08ad9f74 +0x00:  push   %ebp
08ad9f75 +0x01:  mov    %esp,%ebp
08ad9f77 +0x03:  mov    0x8(%ebp),%eax
08ad9f7a +0x06:  mov    (%eax),%eax
08ad9f7c +0x08:  pop    %ebp
08ad9f7d +0x09:  ret
```

## 反编译 C

```c
// WideString::begin @ 0x8ad9f74

/* DWARF original prototype: const_iterator begin(WideString * this) */

const_iterator __thiscall WideString::begin(WideString *this)

{
  return this->buffer_;
}
```
