# getAt

`_ZNK10CharString5getAtEi`

`CharString::getAt(int) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6c8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6c8e  _ZNK10CharString5getAtEi
#           CharString::getAt(int) const
# range [0x08ad6c8e, 0x08ad6ca1]
08ad6c8e +0x00:  push   %ebp
08ad6c8f +0x01:  mov    %esp,%ebp
08ad6c91 +0x03:  mov    0x8(%ebp),%eax
08ad6c94 +0x06:  mov    (%eax),%edx
08ad6c96 +0x08:  mov    0xc(%ebp),%eax
08ad6c99 +0x0b:  lea    (%edx,%eax,1),%eax
08ad6c9c +0x0e:  movzbl (%eax),%eax
08ad6c9f +0x11:  pop    %ebp
08ad6ca0 +0x12:  ret
08ad6ca1 +0x13:  nop
```

## 反编译 C

```c
// CharString::getAt @ 0x8ad6c8e

/* DWARF original prototype: char getAt(CharString * this, int32 idx) */

char __thiscall CharString::getAt(CharString *this,int32 idx)

{
  return this->buffer_[idx];
}
```
