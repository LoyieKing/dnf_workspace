# getUInt32

`_ZN8XorRand49getUInt32Ev`

`XorRand4::getUInt32()`

| 类 | 地址 |
|---|---|
| `XorRand4` | `0x08adface` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adface  _ZN8XorRand49getUInt32Ev
#           XorRand4::getUInt32()
# range [0x08adface, 0x08adfb3b]
08adface +0x00:  push   %ebp
08adfacf +0x01:  mov    %esp,%ebp
08adfad1 +0x03:  sub    $0x10,%esp
08adfad4 +0x06:  mov    0x8(%ebp),%eax
08adfad7 +0x09:  mov    (%eax),%eax
08adfad9 +0x0b:  mov    %eax,-0x8(%ebp)
08adfadc +0x0e:  lea    0x1(%eax),%edx
08adfadf +0x11:  mov    0x8(%ebp),%eax
08adfae2 +0x14:  mov    %edx,(%eax)
08adfae4 +0x16:  lea    -0x8(%ebp),%eax
08adfae7 +0x19:  mov    %eax,-0x4(%ebp)
08adfaea +0x1c:  mov    -0x4(%ebp),%eax
08adfaed +0x1f:  movzbl (%eax),%eax
08adfaf0 +0x22:  movzbl %al,%eax
08adfaf3 +0x25:  mov    &_ZN8XorRand49ms_table0E(,%eax,4),%edx
08adfafa +0x2c:  mov    -0x4(%ebp),%eax
08adfafd +0x2f:  add    $0x1,%eax
08adfb00 +0x32:  movzbl (%eax),%eax
08adfb03 +0x35:  movzbl %al,%eax
08adfb06 +0x38:  mov    &_ZN8XorRand49ms_table1E(,%eax,4),%eax
08adfb0d +0x3f:  xor    %eax,%edx
08adfb0f +0x41:  mov    -0x4(%ebp),%eax
08adfb12 +0x44:  add    $0x2,%eax
08adfb15 +0x47:  movzbl (%eax),%eax
08adfb18 +0x4a:  movzbl %al,%eax
08adfb1b +0x4d:  mov    &_ZN8XorRand49ms_table2E(,%eax,4),%eax
08adfb22 +0x54:  xor    %eax,%edx
08adfb24 +0x56:  mov    -0x4(%ebp),%eax
08adfb27 +0x59:  add    $0x3,%eax
08adfb2a +0x5c:  movzbl (%eax),%eax
08adfb2d +0x5f:  movzbl %al,%eax
08adfb30 +0x62:  mov    &_ZN8XorRand49ms_table3E(,%eax,4),%eax
08adfb37 +0x69:  xor    %edx,%eax
08adfb39 +0x6b:  leave
08adfb3a +0x6c:  ret
08adfb3b +0x6d:  nop
```

## 反编译 C

```c
// XorRand4::getUInt32 @ 0x8adface

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* DWARF original prototype: uint32 getUInt32(XorRand4 * this) */

uint32 __thiscall XorRand4::getUInt32(XorRand4 *this)

{
  uint uVar1;
  
                    /* Unresolved local var: uint32 value@[???]
                       Unresolved local var: uint8 * c@[???] */
  uVar1 = this->m_counter;
  this->m_counter = uVar1 + 1;
  return ms_table3[uVar1 >> 0x18] ^
         ms_table0[uVar1 & 0xff] ^ ms_table1[uVar1 >> 8 & 0xff] ^ ms_table2[uVar1 >> 0x10 & 0xff];
}
```
