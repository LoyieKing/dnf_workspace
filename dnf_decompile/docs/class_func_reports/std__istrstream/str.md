# str

`_ZNSt10istrstream3strEv`

`std::istrstream::str()`

| 类 | 地址 |
|---|---|
| `std::istrstream` | `0x086dd860` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd860  _ZNSt10istrstream3strEv
#           std::istrstream::str()
# range [0x086dd860, 0x086dd87f]
086dd860 +0x00:  push   %ebp
086dd861 +0x01:  mov    %esp,%ebp
086dd863 +0x03:  mov    0x8(%ebp),%eax
086dd866 +0x06:  movzbl 0x30(%eax),%edx
086dd86a +0x0a:  test   $0x1,%dl
086dd86d +0x0d:  je     086dd875 <+0x15>
086dd86f +0x0f:  or     $0x2,%edx
086dd872 +0x12:  mov    %dl,0x30(%eax)
086dd875 +0x15:  mov    0xc(%eax),%eax
086dd878 +0x18:  pop    %ebp
086dd879 +0x19:  ret
086dd87a +0x1a:  nop
086dd87b +0x1b:  nop
086dd87c +0x1c:  nop
086dd87d +0x1d:  nop
086dd87e +0x1e:  nop
086dd87f +0x1f:  nop
```

## 反编译 C

```c
// std::istrstream::str @ 0x86dd860

/* std::istrstream::str() */

undefined4 __thiscall std::istrstream::str(istrstream *this)

{
  if (((byte)this[0x30] & 1) != 0) {
    this[0x30] = (istrstream)((byte)this[0x30] | 2);
  }
  return *(undefined4 *)(this + 0xc);
}
```
