# getUInt64

`_ZN8XorRand89getUInt64Ev`

`XorRand8::getUInt64()`

| 类 | 地址 |
|---|---|
| `XorRand8` | `0x08adfd00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfd00  _ZN8XorRand89getUInt64Ev
#           XorRand8::getUInt64()
# range [0x08adfd00, 0x08adfe6b]
08adfd00 +0x000:  push   %ebp
08adfd01 +0x001:  mov    %esp,%ebp
08adfd03 +0x003:  push   %edi
08adfd04 +0x004:  push   %esi
08adfd05 +0x005:  push   %ebx
08adfd06 +0x006:  sub    $0x44,%esp
08adfd09 +0x009:  mov    0x8(%ebp),%eax
08adfd0c +0x00c:  mov    0x4(%eax),%edx
08adfd0f +0x00f:  mov    (%eax),%eax
08adfd11 +0x011:  mov    %eax,-0x20(%ebp)
08adfd14 +0x014:  mov    %edx,-0x1c(%ebp)
08adfd17 +0x017:  add    $0x1,%eax
08adfd1a +0x01a:  adc    $0x0,%edx
08adfd1d +0x01d:  mov    0x8(%ebp),%ecx
08adfd20 +0x020:  mov    %eax,(%ecx)
08adfd22 +0x022:  mov    %edx,0x4(%ecx)
08adfd25 +0x025:  lea    -0x20(%ebp),%eax
08adfd28 +0x028:  mov    %eax,-0x14(%ebp)
08adfd2b +0x02b:  mov    -0x14(%ebp),%eax
08adfd2e +0x02e:  movzbl (%eax),%eax
08adfd31 +0x031:  movzbl %al,%eax
08adfd34 +0x034:  mov    &_ZN8XorRand89ms_table0E(,%eax,8),%ecx
08adfd3b +0x03b:  mov    &_ZN8XorRand89ms_table0E+0x4(,%eax,8),%ebx
08adfd42 +0x042:  mov    -0x14(%ebp),%eax
08adfd45 +0x045:  add    $0x1,%eax
08adfd48 +0x048:  movzbl (%eax),%eax
08adfd4b +0x04b:  movzbl %al,%eax
08adfd4e +0x04e:  mov    &_ZN8XorRand89ms_table1E+0x4(,%eax,8),%edx
08adfd55 +0x055:  mov    &_ZN8XorRand89ms_table1E(,%eax,8),%eax
08adfd5c +0x05c:  mov    %ecx,%esi
08adfd5e +0x05e:  xor    %eax,%esi
08adfd60 +0x060:  mov    %ebx,%edi
08adfd62 +0x062:  xor    %edx,%edi
08adfd64 +0x064:  mov    -0x14(%ebp),%eax
08adfd67 +0x067:  add    $0x2,%eax
08adfd6a +0x06a:  movzbl (%eax),%eax
08adfd6d +0x06d:  movzbl %al,%eax
08adfd70 +0x070:  mov    &_ZN8XorRand89ms_table2E+0x4(,%eax,8),%edx
08adfd77 +0x077:  mov    &_ZN8XorRand89ms_table2E(,%eax,8),%eax
08adfd7e +0x07e:  mov    %esi,%ecx
08adfd80 +0x080:  xor    %eax,%ecx
08adfd82 +0x082:  mov    %ecx,-0x48(%ebp)
08adfd85 +0x085:  mov    %edi,%ecx
08adfd87 +0x087:  xor    %edx,%ecx
08adfd89 +0x089:  mov    %ecx,-0x44(%ebp)
08adfd8c +0x08c:  mov    -0x14(%ebp),%eax
08adfd8f +0x08f:  add    $0x3,%eax
08adfd92 +0x092:  movzbl (%eax),%eax
08adfd95 +0x095:  movzbl %al,%eax
08adfd98 +0x098:  mov    &_ZN8XorRand89ms_table3E+0x4(,%eax,8),%edx
08adfd9f +0x09f:  mov    &_ZN8XorRand89ms_table3E(,%eax,8),%eax
08adfda6 +0x0a6:  mov    -0x48(%ebp),%ecx
08adfda9 +0x0a9:  xor    %eax,%ecx
08adfdab +0x0ab:  mov    %ecx,-0x40(%ebp)
08adfdae +0x0ae:  mov    -0x44(%ebp),%ecx
08adfdb1 +0x0b1:  xor    %edx,%ecx
08adfdb3 +0x0b3:  mov    %ecx,-0x3c(%ebp)
08adfdb6 +0x0b6:  mov    -0x14(%ebp),%eax
08adfdb9 +0x0b9:  add    $0x4,%eax
08adfdbc +0x0bc:  movzbl (%eax),%eax
08adfdbf +0x0bf:  movzbl %al,%eax
08adfdc2 +0x0c2:  mov    &_ZN8XorRand89ms_table4E+0x4(,%eax,8),%edx
08adfdc9 +0x0c9:  mov    &_ZN8XorRand89ms_table4E(,%eax,8),%eax
08adfdd0 +0x0d0:  mov    -0x40(%ebp),%ecx
08adfdd3 +0x0d3:  xor    %eax,%ecx
08adfdd5 +0x0d5:  mov    %ecx,-0x38(%ebp)
08adfdd8 +0x0d8:  mov    -0x3c(%ebp),%ecx
08adfddb +0x0db:  xor    %edx,%ecx
08adfddd +0x0dd:  mov    %ecx,-0x34(%ebp)
08adfde0 +0x0e0:  mov    -0x14(%ebp),%eax
08adfde3 +0x0e3:  add    $0x5,%eax
08adfde6 +0x0e6:  movzbl (%eax),%eax
08adfde9 +0x0e9:  movzbl %al,%eax
08adfdec +0x0ec:  mov    &_ZN8XorRand89ms_table5E+0x4(,%eax,8),%edx
08adfdf3 +0x0f3:  mov    &_ZN8XorRand89ms_table5E(,%eax,8),%eax
08adfdfa +0x0fa:  mov    -0x38(%ebp),%ecx
08adfdfd +0x0fd:  xor    %eax,%ecx
08adfdff +0x0ff:  mov    %ecx,-0x30(%ebp)
08adfe02 +0x102:  mov    -0x34(%ebp),%ecx
08adfe05 +0x105:  xor    %edx,%ecx
08adfe07 +0x107:  mov    %ecx,-0x2c(%ebp)
08adfe0a +0x10a:  mov    -0x14(%ebp),%eax
08adfe0d +0x10d:  add    $0x6,%eax
08adfe10 +0x110:  movzbl (%eax),%eax
08adfe13 +0x113:  movzbl %al,%eax
08adfe16 +0x116:  mov    &_ZN8XorRand89ms_table6E+0x4(,%eax,8),%edx
08adfe1d +0x11d:  mov    &_ZN8XorRand89ms_table6E(,%eax,8),%eax
08adfe24 +0x124:  mov    -0x30(%ebp),%ecx
08adfe27 +0x127:  xor    %eax,%ecx
08adfe29 +0x129:  mov    %ecx,-0x28(%ebp)
08adfe2c +0x12c:  mov    -0x2c(%ebp),%ecx
08adfe2f +0x12f:  xor    %edx,%ecx
08adfe31 +0x131:  mov    %ecx,-0x24(%ebp)
08adfe34 +0x134:  mov    -0x14(%ebp),%eax
08adfe37 +0x137:  add    $0x7,%eax
08adfe3a +0x13a:  movzbl (%eax),%eax
08adfe3d +0x13d:  movzbl %al,%eax
08adfe40 +0x140:  mov    &_ZN8XorRand89ms_table7E+0x4(,%eax,8),%edx
08adfe47 +0x147:  mov    &_ZN8XorRand89ms_table7E(,%eax,8),%eax
08adfe4e +0x14e:  mov    -0x28(%ebp),%ecx
08adfe51 +0x151:  xor    %eax,%ecx
08adfe53 +0x153:  mov    %ecx,-0x50(%ebp)
08adfe56 +0x156:  mov    -0x24(%ebp),%ecx
08adfe59 +0x159:  xor    %edx,%ecx
08adfe5b +0x15b:  mov    %ecx,-0x4c(%ebp)
08adfe5e +0x15e:  mov    -0x50(%ebp),%eax
08adfe61 +0x161:  mov    -0x4c(%ebp),%edx
08adfe64 +0x164:  add    $0x44,%esp
08adfe67 +0x167:  pop    %ebx
08adfe68 +0x168:  pop    %esi
08adfe69 +0x169:  pop    %edi
08adfe6a +0x16a:  pop    %ebp
08adfe6b +0x16b:  ret
```

## 反编译 C

```c
// XorRand8::getUInt64 @ 0x8adfd00

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* DWARF original prototype: uint64 getUInt64(XorRand8 * this) */

uint64 __thiscall XorRand8::getUInt64(XorRand8 *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
                    /* Unresolved local var: uint64 value@[???]
                       Unresolved local var: uint8 * c@[???] */
  uVar1 = *(uint *)((int)&this->m_counter + 4);
  uVar2 = (uint)this->m_counter;
  *(uint *)&this->m_counter = uVar2 + 1;
  *(uint *)((int)&this->m_counter + 4) = uVar1 + (0xfffffffe < uVar2);
  uVar3 = uVar2 >> 8 & 0xff;
  uVar4 = uVar2 >> 0x10 & 0xff;
  uVar5 = uVar1 >> 8 & 0xff;
  uVar6 = uVar1 >> 0x10 & 0xff;
  return CONCAT44(*(uint *)((int)ms_table0 + (uVar2 & 0xff) * 8 + 4) ^
                  *(uint *)((int)ms_table1 + uVar3 * 8 + 4) ^
                  *(uint *)((int)ms_table2 + uVar4 * 8 + 4) ^
                  *(uint *)((int)ms_table3 + (uVar2 >> 0x18) * 8 + 4) ^
                  *(uint *)((int)ms_table4 + (uVar1 & 0xff) * 8 + 4) ^
                  *(uint *)((int)ms_table5 + uVar5 * 8 + 4) ^
                  *(uint *)((int)ms_table6 + uVar6 * 8 + 4) ^
                  *(uint *)((int)ms_table7 + (uVar1 >> 0x18) * 8 + 4),
                  (uint)ms_table0[uVar2 & 0xff] ^ (uint)ms_table1[uVar3] ^ (uint)ms_table2[uVar4] ^
                  (uint)ms_table3[uVar2 >> 0x18] ^ (uint)ms_table4[uVar1 & 0xff] ^
                  (uint)ms_table5[uVar5] ^ (uint)ms_table6[uVar6] ^ (uint)ms_table7[uVar1 >> 0x18]);
}
```
