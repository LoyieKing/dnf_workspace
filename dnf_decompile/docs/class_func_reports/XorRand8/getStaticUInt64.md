# getStaticUInt64

`_ZN8XorRand815getStaticUInt64Ey`

`XorRand8::getStaticUInt64(unsigned long long)`

| 类 | 地址 |
|---|---|
| `XorRand8` | `0x08adfec6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfec6  _ZN8XorRand815getStaticUInt64Ey
#           XorRand8::getStaticUInt64(unsigned long long)
# range [0x08adfec6, 0x08ae0021]
08adfec6 +0x000:  push   %ebp
08adfec7 +0x001:  mov    %esp,%ebp
08adfec9 +0x003:  push   %edi
08adfeca +0x004:  push   %esi
08adfecb +0x005:  push   %ebx
08adfecc +0x006:  sub    $0x4c,%esp
08adfecf +0x009:  mov    0x8(%ebp),%eax
08adfed2 +0x00c:  mov    %eax,-0x28(%ebp)
08adfed5 +0x00f:  mov    0xc(%ebp),%eax
08adfed8 +0x012:  mov    %eax,-0x24(%ebp)
08adfedb +0x015:  lea    -0x28(%ebp),%eax
08adfede +0x018:  mov    %eax,-0x14(%ebp)
08adfee1 +0x01b:  mov    -0x14(%ebp),%eax
08adfee4 +0x01e:  movzbl (%eax),%eax
08adfee7 +0x021:  movzbl %al,%eax
08adfeea +0x024:  mov    &_ZN8XorRand89ms_table0E(,%eax,8),%ecx
08adfef1 +0x02b:  mov    &_ZN8XorRand89ms_table0E+0x4(,%eax,8),%ebx
08adfef8 +0x032:  mov    -0x14(%ebp),%eax
08adfefb +0x035:  add    $0x1,%eax
08adfefe +0x038:  movzbl (%eax),%eax
08adff01 +0x03b:  movzbl %al,%eax
08adff04 +0x03e:  mov    &_ZN8XorRand89ms_table1E+0x4(,%eax,8),%edx
08adff0b +0x045:  mov    &_ZN8XorRand89ms_table1E(,%eax,8),%eax
08adff12 +0x04c:  mov    %ecx,%esi
08adff14 +0x04e:  xor    %eax,%esi
08adff16 +0x050:  mov    %ebx,%edi
08adff18 +0x052:  xor    %edx,%edi
08adff1a +0x054:  mov    -0x14(%ebp),%eax
08adff1d +0x057:  add    $0x2,%eax
08adff20 +0x05a:  movzbl (%eax),%eax
08adff23 +0x05d:  movzbl %al,%eax
08adff26 +0x060:  mov    &_ZN8XorRand89ms_table2E+0x4(,%eax,8),%edx
08adff2d +0x067:  mov    &_ZN8XorRand89ms_table2E(,%eax,8),%eax
08adff34 +0x06e:  mov    %esi,%ecx
08adff36 +0x070:  xor    %eax,%ecx
08adff38 +0x072:  mov    %ecx,-0x50(%ebp)
08adff3b +0x075:  mov    %edi,%ecx
08adff3d +0x077:  xor    %edx,%ecx
08adff3f +0x079:  mov    %ecx,-0x4c(%ebp)
08adff42 +0x07c:  mov    -0x14(%ebp),%eax
08adff45 +0x07f:  add    $0x3,%eax
08adff48 +0x082:  movzbl (%eax),%eax
08adff4b +0x085:  movzbl %al,%eax
08adff4e +0x088:  mov    &_ZN8XorRand89ms_table3E+0x4(,%eax,8),%edx
08adff55 +0x08f:  mov    &_ZN8XorRand89ms_table3E(,%eax,8),%eax
08adff5c +0x096:  mov    -0x50(%ebp),%ecx
08adff5f +0x099:  xor    %eax,%ecx
08adff61 +0x09b:  mov    %ecx,-0x48(%ebp)
08adff64 +0x09e:  mov    -0x4c(%ebp),%ecx
08adff67 +0x0a1:  xor    %edx,%ecx
08adff69 +0x0a3:  mov    %ecx,-0x44(%ebp)
08adff6c +0x0a6:  mov    -0x14(%ebp),%eax
08adff6f +0x0a9:  add    $0x4,%eax
08adff72 +0x0ac:  movzbl (%eax),%eax
08adff75 +0x0af:  movzbl %al,%eax
08adff78 +0x0b2:  mov    &_ZN8XorRand89ms_table4E+0x4(,%eax,8),%edx
08adff7f +0x0b9:  mov    &_ZN8XorRand89ms_table4E(,%eax,8),%eax
08adff86 +0x0c0:  mov    -0x48(%ebp),%ecx
08adff89 +0x0c3:  xor    %eax,%ecx
08adff8b +0x0c5:  mov    %ecx,-0x40(%ebp)
08adff8e +0x0c8:  mov    -0x44(%ebp),%ecx
08adff91 +0x0cb:  xor    %edx,%ecx
08adff93 +0x0cd:  mov    %ecx,-0x3c(%ebp)
08adff96 +0x0d0:  mov    -0x14(%ebp),%eax
08adff99 +0x0d3:  add    $0x5,%eax
08adff9c +0x0d6:  movzbl (%eax),%eax
08adff9f +0x0d9:  movzbl %al,%eax
08adffa2 +0x0dc:  mov    &_ZN8XorRand89ms_table5E+0x4(,%eax,8),%edx
08adffa9 +0x0e3:  mov    &_ZN8XorRand89ms_table5E(,%eax,8),%eax
08adffb0 +0x0ea:  mov    -0x40(%ebp),%ecx
08adffb3 +0x0ed:  xor    %eax,%ecx
08adffb5 +0x0ef:  mov    %ecx,-0x38(%ebp)
08adffb8 +0x0f2:  mov    -0x3c(%ebp),%ecx
08adffbb +0x0f5:  xor    %edx,%ecx
08adffbd +0x0f7:  mov    %ecx,-0x34(%ebp)
08adffc0 +0x0fa:  mov    -0x14(%ebp),%eax
08adffc3 +0x0fd:  add    $0x6,%eax
08adffc6 +0x100:  movzbl (%eax),%eax
08adffc9 +0x103:  movzbl %al,%eax
08adffcc +0x106:  mov    &_ZN8XorRand89ms_table6E+0x4(,%eax,8),%edx
08adffd3 +0x10d:  mov    &_ZN8XorRand89ms_table6E(,%eax,8),%eax
08adffda +0x114:  mov    -0x38(%ebp),%ecx
08adffdd +0x117:  xor    %eax,%ecx
08adffdf +0x119:  mov    %ecx,-0x30(%ebp)
08adffe2 +0x11c:  mov    -0x34(%ebp),%ecx
08adffe5 +0x11f:  xor    %edx,%ecx
08adffe7 +0x121:  mov    %ecx,-0x2c(%ebp)
08adffea +0x124:  mov    -0x14(%ebp),%eax
08adffed +0x127:  add    $0x7,%eax
08adfff0 +0x12a:  movzbl (%eax),%eax
08adfff3 +0x12d:  movzbl %al,%eax
08adfff6 +0x130:  mov    &_ZN8XorRand89ms_table7E+0x4(,%eax,8),%edx
08adfffd +0x137:  mov    &_ZN8XorRand89ms_table7E(,%eax,8),%eax
08ae0004 +0x13e:  mov    -0x30(%ebp),%ecx
08ae0007 +0x141:  xor    %eax,%ecx
08ae0009 +0x143:  mov    %ecx,-0x58(%ebp)
08ae000c +0x146:  mov    -0x2c(%ebp),%ecx
08ae000f +0x149:  xor    %edx,%ecx
08ae0011 +0x14b:  mov    %ecx,-0x54(%ebp)
08ae0014 +0x14e:  mov    -0x58(%ebp),%eax
08ae0017 +0x151:  mov    -0x54(%ebp),%edx
08ae001a +0x154:  add    $0x4c,%esp
08ae001d +0x157:  pop    %ebx
08ae001e +0x158:  pop    %esi
08ae001f +0x159:  pop    %edi
08ae0020 +0x15a:  pop    %ebp
08ae0021 +0x15b:  ret
```

## 反编译 C

```c
// XorRand8::getStaticUInt64 @ 0x8adfec6

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint64 __thiscall XorRand8::getStaticUInt64(XorRand8 *this,uint64 seed)

{
  uint uVar1;
  uint uVar2;
  byte bStack_27;
  byte bStack_26;
  byte bStack_25;
  
                    /* Unresolved local var: uint8 * c@[???] */
  uVar1 = (uint)this >> 8 & 0xff;
  uVar2 = (uint)this >> 0x10 & 0xff;
  bStack_27 = (byte)(seed >> 8);
  bStack_26 = (byte)(seed >> 0x10);
  bStack_25 = (byte)(seed >> 0x18);
  return CONCAT44(*(uint *)((int)ms_table0 + ((uint)this & 0xff) * 8 + 4) ^
                  *(uint *)((int)ms_table1 + uVar1 * 8 + 4) ^
                  *(uint *)((int)ms_table2 + uVar2 * 8 + 4) ^
                  *(uint *)((int)ms_table3 + ((uint)this >> 0x18) * 8 + 4) ^
                  *(uint *)((int)ms_table4 + ((uint)seed & 0xff) * 8 + 4) ^
                  *(uint *)((int)ms_table5 + (uint)bStack_27 * 8 + 4) ^
                  *(uint *)((int)ms_table6 + (uint)bStack_26 * 8 + 4) ^
                  *(uint *)((int)ms_table7 + (uint)bStack_25 * 8 + 4),
                  (uint)ms_table0[(uint)this & 0xff] ^ (uint)ms_table1[uVar1] ^
                  (uint)ms_table2[uVar2] ^ (uint)ms_table3[(uint)this >> 0x18] ^
                  (uint)ms_table4[(uint)seed & 0xff] ^ (uint)ms_table5[bStack_27] ^
                  (uint)ms_table6[bStack_26] ^ (uint)ms_table7[bStack_25]);
}
```
