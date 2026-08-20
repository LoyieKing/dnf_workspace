# rdbuf

`_ZNKSt10istrstream5rdbufEv`

`std::istrstream::rdbuf() const`

| 类 | 地址 |
|---|---|
| `std::istrstream` | `0x086dd850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd850  _ZNKSt10istrstream5rdbufEv
#           std::istrstream::rdbuf() const
# range [0x086dd850, 0x086dd85f]
086dd850 +0x00:  push   %ebp
086dd851 +0x01:  mov    %esp,%ebp
086dd853 +0x03:  mov    0x8(%ebp),%eax
086dd856 +0x06:  pop    %ebp
086dd857 +0x07:  add    $0x8,%eax
086dd85a +0x0a:  ret
086dd85b +0x0b:  nop
086dd85c +0x0c:  nop
086dd85d +0x0d:  nop
086dd85e +0x0e:  nop
086dd85f +0x0f:  nop
```

## 反编译 C

```c
// std::istrstream::rdbuf @ 0x86dd850

/* std::istrstream::rdbuf() const */

istrstream * __thiscall std::istrstream::rdbuf(istrstream *this)

{
  return this + 8;
}
```
