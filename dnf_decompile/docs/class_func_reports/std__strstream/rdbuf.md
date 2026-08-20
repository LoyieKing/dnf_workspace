# rdbuf

`_ZNKSt9strstream5rdbufEv`

`std::strstream::rdbuf() const`

| 类 | 地址 |
|---|---|
| `std::strstream` | `0x086dd900` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd900  _ZNKSt9strstream5rdbufEv
#           std::strstream::rdbuf() const
# range [0x086dd900, 0x086dd90f]
086dd900 +0x00:  push   %ebp
086dd901 +0x01:  mov    %esp,%ebp
086dd903 +0x03:  mov    0x8(%ebp),%eax
086dd906 +0x06:  pop    %ebp
086dd907 +0x07:  add    $0xc,%eax
086dd90a +0x0a:  ret
086dd90b +0x0b:  nop
086dd90c +0x0c:  nop
086dd90d +0x0d:  nop
086dd90e +0x0e:  nop
086dd90f +0x0f:  nop
```

## 反编译 C

```c
// std::strstream::rdbuf @ 0x86dd900

/* std::strstream::rdbuf() const */

strstream * __thiscall std::strstream::rdbuf(strstream *this)

{
  return this + 0xc;
}
```
