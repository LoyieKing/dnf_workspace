# getStaticUInt64

`_ZN8XorRand815getStaticUInt64Ev`

`XorRand8::getStaticUInt64()`

| 类 | 地址 |
|---|---|
| `XorRand8` | `0x08ae0034` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ae0034  _ZN8XorRand815getStaticUInt64Ev
#           XorRand8::getStaticUInt64()
# range [0x08ae0034, 0x08ae0205]
08ae0034 +0x000:  push   %ebp
08ae0035 +0x001:  mov    %esp,%ebp
08ae0037 +0x003:  push   %esi
08ae0038 +0x004:  push   %ebx
08ae0039 +0x005:  sub    $0x70,%esp
08ae003c +0x008:  movzbl %gs:0xffffffe8,%eax
08ae0044 +0x010:  xor    $0x1,%eax
08ae0047 +0x013:  test   %al,%al
08ae0049 +0x015:  je     08ae0092 <+0x5e>
08ae004b +0x017:  call   0807de30 <_init+0x728>
08ae0050 +0x01c:  mov    %eax,%ebx
08ae0052 +0x01e:  mov    %eax,%esi
08ae0054 +0x020:  sar    $0x1f,%esi
08ae0057 +0x023:  call   0807e740 <_init+0x1038>
08ae005c +0x028:  mov    $0x0,%edx
08ae0061 +0x02d:  add    %ebx,%eax
08ae0063 +0x02f:  adc    %esi,%edx
08ae0065 +0x031:  mov    %eax,-0x10(%ebp)
08ae0068 +0x034:  mov    %edx,-0xc(%ebp)
08ae006b +0x037:  mov    -0x10(%ebp),%eax
08ae006e +0x03a:  mov    -0xc(%ebp),%edx
08ae0071 +0x03d:  mov    %eax,(%esp)
08ae0074 +0x040:  mov    %edx,0x4(%esp)
08ae0078 +0x044:  call   08adfec6 <_ZN8XorRand815getStaticUInt64Ey>  ; XorRand8::getStaticUInt64(unsigned long long)
08ae007d +0x049:  mov    %eax,%gs:0xfffffff0
08ae0083 +0x04f:  mov    %edx,%gs:0xfffffff4
08ae008a +0x056:  movb   $0x1,%gs:0xffffffe8
08ae0092 +0x05e:  mov    %gs:0xfffffff0,%eax
08ae0098 +0x064:  mov    %gs:0xfffffff4,%edx
08ae009f +0x06b:  mov    %eax,-0x20(%ebp)
08ae00a2 +0x06e:  mov    %edx,-0x1c(%ebp)
08ae00a5 +0x071:  add    $0x1,%eax
08ae00a8 +0x074:  adc    $0x0,%edx
08ae00ab +0x077:  mov    %eax,%gs:0xfffffff0
08ae00b1 +0x07d:  mov    %edx,%gs:0xfffffff4
08ae00b8 +0x084:  lea    -0x20(%ebp),%eax
08ae00bb +0x087:  mov    %eax,-0x14(%ebp)
08ae00be +0x08a:  mov    -0x14(%ebp),%eax
08ae00c1 +0x08d:  movzbl (%eax),%eax
08ae00c4 +0x090:  movzbl %al,%eax
08ae00c7 +0x093:  mov    &_ZN8XorRand89ms_table0E(,%eax,8),%ecx
08ae00ce +0x09a:  mov    &_ZN8XorRand89ms_table0E+0x4(,%eax,8),%ebx
08ae00d5 +0x0a1:  mov    -0x14(%ebp),%eax
08ae00d8 +0x0a4:  add    $0x1,%eax
08ae00db +0x0a7:  movzbl (%eax),%eax
08ae00de +0x0aa:  movzbl %al,%eax
08ae00e1 +0x0ad:  mov    &_ZN8XorRand89ms_table1E+0x4(,%eax,8),%edx
08ae00e8 +0x0b4:  mov    &_ZN8XorRand89ms_table1E(,%eax,8),%eax
08ae00ef +0x0bb:  mov    %ecx,%esi
08ae00f1 +0x0bd:  xor    %eax,%esi
08ae00f3 +0x0bf:  mov    %esi,-0x58(%ebp)
08ae00f6 +0x0c2:  mov    %ebx,%esi
08ae00f8 +0x0c4:  xor    %edx,%esi
08ae00fa +0x0c6:  mov    %esi,-0x54(%ebp)
08ae00fd +0x0c9:  mov    -0x14(%ebp),%eax
08ae0100 +0x0cc:  add    $0x2,%eax
08ae0103 +0x0cf:  movzbl (%eax),%eax
08ae0106 +0x0d2:  movzbl %al,%eax
08ae0109 +0x0d5:  mov    &_ZN8XorRand89ms_table2E+0x4(,%eax,8),%edx
08ae0110 +0x0dc:  mov    &_ZN8XorRand89ms_table2E(,%eax,8),%eax
08ae0117 +0x0e3:  mov    -0x58(%ebp),%ecx
08ae011a +0x0e6:  xor    %eax,%ecx
08ae011c +0x0e8:  mov    %ecx,-0x50(%ebp)
08ae011f +0x0eb:  mov    -0x54(%ebp),%esi
08ae0122 +0x0ee:  xor    %edx,%esi
08ae0124 +0x0f0:  mov    %esi,-0x4c(%ebp)
08ae0127 +0x0f3:  mov    -0x14(%ebp),%eax
08ae012a +0x0f6:  add    $0x3,%eax
08ae012d +0x0f9:  movzbl (%eax),%eax
08ae0130 +0x0fc:  movzbl %al,%eax
08ae0133 +0x0ff:  mov    &_ZN8XorRand89ms_table3E+0x4(,%eax,8),%edx
08ae013a +0x106:  mov    &_ZN8XorRand89ms_table3E(,%eax,8),%eax
08ae0141 +0x10d:  mov    -0x50(%ebp),%ecx
08ae0144 +0x110:  xor    %eax,%ecx
08ae0146 +0x112:  mov    %ecx,-0x48(%ebp)
08ae0149 +0x115:  mov    -0x4c(%ebp),%esi
08ae014c +0x118:  xor    %edx,%esi
08ae014e +0x11a:  mov    %esi,-0x44(%ebp)
08ae0151 +0x11d:  mov    -0x14(%ebp),%eax
08ae0154 +0x120:  add    $0x4,%eax
08ae0157 +0x123:  movzbl (%eax),%eax
08ae015a +0x126:  movzbl %al,%eax
08ae015d +0x129:  mov    &_ZN8XorRand89ms_table4E+0x4(,%eax,8),%edx
08ae0164 +0x130:  mov    &_ZN8XorRand89ms_table4E(,%eax,8),%eax
08ae016b +0x137:  mov    -0x48(%ebp),%ecx
08ae016e +0x13a:  xor    %eax,%ecx
08ae0170 +0x13c:  mov    %ecx,-0x40(%ebp)
08ae0173 +0x13f:  mov    -0x44(%ebp),%esi
08ae0176 +0x142:  xor    %edx,%esi
08ae0178 +0x144:  mov    %esi,-0x3c(%ebp)
08ae017b +0x147:  mov    -0x14(%ebp),%eax
08ae017e +0x14a:  add    $0x5,%eax
08ae0181 +0x14d:  movzbl (%eax),%eax
08ae0184 +0x150:  movzbl %al,%eax
08ae0187 +0x153:  mov    &_ZN8XorRand89ms_table5E+0x4(,%eax,8),%edx
08ae018e +0x15a:  mov    &_ZN8XorRand89ms_table5E(,%eax,8),%eax
08ae0195 +0x161:  mov    -0x40(%ebp),%ecx
08ae0198 +0x164:  xor    %eax,%ecx
08ae019a +0x166:  mov    %ecx,-0x38(%ebp)
08ae019d +0x169:  mov    -0x3c(%ebp),%esi
08ae01a0 +0x16c:  xor    %edx,%esi
08ae01a2 +0x16e:  mov    %esi,-0x34(%ebp)
08ae01a5 +0x171:  mov    -0x14(%ebp),%eax
08ae01a8 +0x174:  add    $0x6,%eax
08ae01ab +0x177:  movzbl (%eax),%eax
08ae01ae +0x17a:  movzbl %al,%eax
08ae01b1 +0x17d:  mov    &_ZN8XorRand89ms_table6E+0x4(,%eax,8),%edx
08ae01b8 +0x184:  mov    &_ZN8XorRand89ms_table6E(,%eax,8),%eax
08ae01bf +0x18b:  mov    -0x38(%ebp),%ecx
08ae01c2 +0x18e:  xor    %eax,%ecx
08ae01c4 +0x190:  mov    %ecx,-0x30(%ebp)
08ae01c7 +0x193:  mov    -0x34(%ebp),%esi
08ae01ca +0x196:  xor    %edx,%esi
08ae01cc +0x198:  mov    %esi,-0x2c(%ebp)
08ae01cf +0x19b:  mov    -0x14(%ebp),%eax
08ae01d2 +0x19e:  add    $0x7,%eax
08ae01d5 +0x1a1:  movzbl (%eax),%eax
08ae01d8 +0x1a4:  movzbl %al,%eax
08ae01db +0x1a7:  mov    &_ZN8XorRand89ms_table7E+0x4(,%eax,8),%edx
08ae01e2 +0x1ae:  mov    &_ZN8XorRand89ms_table7E(,%eax,8),%eax
08ae01e9 +0x1b5:  mov    -0x30(%ebp),%ecx
08ae01ec +0x1b8:  xor    %eax,%ecx
08ae01ee +0x1ba:  mov    %ecx,-0x60(%ebp)
08ae01f1 +0x1bd:  mov    -0x2c(%ebp),%esi
08ae01f4 +0x1c0:  xor    %edx,%esi
08ae01f6 +0x1c2:  mov    %esi,-0x5c(%ebp)
08ae01f9 +0x1c5:  mov    -0x60(%ebp),%eax
08ae01fc +0x1c8:  mov    -0x5c(%ebp),%edx
08ae01ff +0x1cb:  add    $0x70,%esp
08ae0202 +0x1ce:  pop    %ebx
08ae0203 +0x1cf:  pop    %esi
08ae0204 +0x1d0:  pop    %ebp
08ae0205 +0x1d1:  ret
```

## 反编译 C

```c
// XorRand8::getStaticUInt64 @ 0x8ae0034

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint64 XorRand8::getStaticUInt64(void)

{
  uint uVar1;
  uint uVar2;
  pthread_t pVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int in_GS_OFFSET;
  uint64 uVar8;
  undefined4 in_stack_ffffff8c;
  
                    /* Unresolved local var: uint64 s_counter@[???]
                       Unresolved local var: bool s_isCounterInited@[???]
                       Unresolved local var: uint64 value@[???]
                       Unresolved local var: uint8 * c@[???] */
  if (*(char *)(in_GS_OFFSET + -0x18) != '\x01') {
                    /* Unresolved local var: uint64 seed@[???] */
    uVar2 = clock();
    pVar3 = pthread_self();
    uVar8 = getStaticUInt64((XorRand8 *)(pVar3 + uVar2),
                            CONCAT44(in_stack_ffffff8c,
                                     ((int)uVar2 >> 0x1f) + (uint)CARRY4(pVar3,uVar2)));
    *(uint64 *)(in_GS_OFFSET + -0x10) = uVar8;
    *(undefined1 *)(in_GS_OFFSET + -0x18) = 1;
  }
  uVar2 = *(uint *)(in_GS_OFFSET + -0x10);
  uVar1 = *(uint *)(in_GS_OFFSET + -0xc);
  *(uint *)(in_GS_OFFSET + -0x10) = uVar2 + 1;
  *(uint *)(in_GS_OFFSET + -0xc) = uVar1 + (0xfffffffe < uVar2);
  uVar4 = uVar2 >> 8 & 0xff;
  uVar5 = uVar2 >> 0x10 & 0xff;
  uVar6 = uVar1 >> 8 & 0xff;
  uVar7 = uVar1 >> 0x10 & 0xff;
  return CONCAT44(*(uint *)((int)ms_table0 + (uVar2 & 0xff) * 8 + 4) ^
                  *(uint *)((int)ms_table1 + uVar4 * 8 + 4) ^
                  *(uint *)((int)ms_table2 + uVar5 * 8 + 4) ^
                  *(uint *)((int)ms_table3 + (uVar2 >> 0x18) * 8 + 4) ^
                  *(uint *)((int)ms_table4 + (uVar1 & 0xff) * 8 + 4) ^
                  *(uint *)((int)ms_table5 + uVar6 * 8 + 4) ^
                  *(uint *)((int)ms_table6 + uVar7 * 8 + 4) ^
                  *(uint *)((int)ms_table7 + (uVar1 >> 0x18) * 8 + 4),
                  (uint)ms_table0[uVar2 & 0xff] ^ (uint)ms_table1[uVar4] ^ (uint)ms_table2[uVar5] ^
                  (uint)ms_table3[uVar2 >> 0x18] ^ (uint)ms_table4[uVar1 & 0xff] ^
                  (uint)ms_table5[uVar6] ^ (uint)ms_table6[uVar7] ^ (uint)ms_table7[uVar1 >> 0x18]);
}
```
