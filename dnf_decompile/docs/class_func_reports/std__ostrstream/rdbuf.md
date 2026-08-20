# rdbuf

`_ZNKSt10ostrstream5rdbufEv`

`std::ostrstream::rdbuf() const`

| 类 | 地址 |
|---|---|
| `std::ostrstream` | `0x086dd880` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd880  _ZNKSt10ostrstream5rdbufEv
#           std::ostrstream::rdbuf() const
# range [0x086dd880, 0x086dd88f]
086dd880 +0x00:  push   %ebp
086dd881 +0x01:  mov    %esp,%ebp
086dd883 +0x03:  mov    0x8(%ebp),%eax
086dd886 +0x06:  pop    %ebp
086dd887 +0x07:  add    $0x4,%eax
086dd88a +0x0a:  ret
086dd88b +0x0b:  nop
086dd88c +0x0c:  nop
086dd88d +0x0d:  nop
086dd88e +0x0e:  nop
086dd88f +0x0f:  nop
```

## 反编译 C

```c
// std::ostrstream::rdbuf @ 0x86dd880

/* std::ostrstream::rdbuf() const */

ostrstream * __thiscall std::ostrstream::rdbuf(ostrstream *this)

{
  return this + 4;
}
```
