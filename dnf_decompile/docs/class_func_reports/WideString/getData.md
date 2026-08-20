# getData

`_ZNK10WideString7getDataEv`

`WideString::getData() const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada214` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada214  _ZNK10WideString7getDataEv
#           WideString::getData() const
# range [0x08ada214, 0x08ada221]
08ada214 +0x00:  push   %ebp
08ada215 +0x01:  mov    %esp,%ebp
08ada217 +0x03:  mov    0x8(%ebp),%eax
08ada21a +0x06:  mov    (%eax),%eax
08ada21c +0x08:  sub    $0x8,%eax
08ada21f +0x0b:  pop    %ebp
08ada220 +0x0c:  ret
08ada221 +0x0d:  nop
```

## 反编译 C

```c
// WideString::getData @ 0x8ada214

/* DWARF original prototype: WideStringData * getData(WideString * this) */

WideStringData * __thiscall WideString::getData(WideString *this)

{
  return (WideStringData *)(this->buffer_ + -2);
}
```
