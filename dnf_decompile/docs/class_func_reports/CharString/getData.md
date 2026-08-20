# getData

`_ZNK10CharString7getDataEv`

`CharString::getData() const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad71bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad71bc  _ZNK10CharString7getDataEv
#           CharString::getData() const
# range [0x08ad71bc, 0x08ad71c9]
08ad71bc +0x00:  push   %ebp
08ad71bd +0x01:  mov    %esp,%ebp
08ad71bf +0x03:  mov    0x8(%ebp),%eax
08ad71c2 +0x06:  mov    (%eax),%eax
08ad71c4 +0x08:  sub    $0x8,%eax
08ad71c7 +0x0b:  pop    %ebp
08ad71c8 +0x0c:  ret
08ad71c9 +0x0d:  nop
```

## 反编译 C

```c
// CharString::getData @ 0x8ad71bc

/* DWARF original prototype: CharStringData * getData(CharString * this) */

CharStringData * __thiscall CharString::getData(CharString *this)

{
  return (CharStringData *)(this->buffer_ + -8);
}
```
