# freeze

`_ZNSt10ostrstream6freezeEb`

`std::ostrstream::freeze(bool)`

| 类 | 地址 |
|---|---|
| `std::ostrstream` | `0x086dd890` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd890  _ZNSt10ostrstream6freezeEb
#           std::ostrstream::freeze(bool)
# range [0x086dd890, 0x086dd8bf]
086dd890 +0x00:  push   %ebp
086dd891 +0x01:  mov    %esp,%ebp
086dd893 +0x03:  mov    0x8(%ebp),%eax
086dd896 +0x06:  movzbl 0xc(%ebp),%ecx
086dd89a +0x0a:  movzbl 0x2c(%eax),%edx
086dd89e +0x0e:  test   $0x1,%dl
086dd8a1 +0x11:  je     086dd8b0 <+0x20>
086dd8a3 +0x13:  and    $0x1,%ecx
086dd8a6 +0x16:  and    $0xfffffffd,%edx
086dd8a9 +0x19:  add    %ecx,%ecx
086dd8ab +0x1b:  or     %ecx,%edx
086dd8ad +0x1d:  mov    %dl,0x2c(%eax)
086dd8b0 +0x20:  pop    %ebp
086dd8b1 +0x21:  ret
086dd8b2 +0x22:  nop
086dd8b3 +0x23:  nop
086dd8b4 +0x24:  nop
086dd8b5 +0x25:  nop
086dd8b6 +0x26:  nop
086dd8b7 +0x27:  nop
086dd8b8 +0x28:  nop
086dd8b9 +0x29:  nop
086dd8ba +0x2a:  nop
086dd8bb +0x2b:  nop
086dd8bc +0x2c:  nop
086dd8bd +0x2d:  nop
086dd8be +0x2e:  nop
086dd8bf +0x2f:  nop
```

## 反编译 C

```c
// std::ostrstream::freeze @ 0x86dd890

/* std::ostrstream::freeze(bool) */

void __thiscall std::ostrstream::freeze(ostrstream *this,bool param_1)

{
  if (((byte)this[0x2c] & 1) != 0) {
    this[0x2c] = (ostrstream)((byte)this[0x2c] & 0xfd | param_1 * '\x02');
  }
  return;
}
```
