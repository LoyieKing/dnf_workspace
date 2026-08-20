# Multiply8Bottom

`_ZN8TaoCrypt16PentiumOptimized15Multiply8BottomEPjPKjS3_`

`TaoCrypt::PentiumOptimized::Multiply8Bottom(unsigned int*, unsigned int const*, unsigned int const*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::PentiumOptimized` | `0x0875bba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875bba0  _ZN8TaoCrypt16PentiumOptimized15Multiply8BottomEPjPKjS3_
#           TaoCrypt::PentiumOptimized::Multiply8Bottom(unsigned int*, unsigned int const*, unsigned int const*)
# range [0x0875bba0, 0x0875bdbf]
0875bba0 +0x000:  push   %ebp
0875bba1 +0x001:  mov    %esp,%ebp
0875bba3 +0x003:  sub    $0x8,%esp
0875bba6 +0x006:  mov    %esi,(%esp)
0875bba9 +0x009:  mov    0x10(%ebp),%ecx
0875bbac +0x00c:  mov    %edi,0x4(%esp)
0875bbb0 +0x010:  mov    0xc(%ebp),%esi
0875bbb3 +0x013:  push   %ebx
0875bbb4 +0x014:  push   %ebp
0875bbb5 +0x015:  push   0x8(%ebp)
0875bbb8 +0x018:  xor    %ebp,%ebp
0875bbba +0x01a:  xor    %edi,%edi
0875bbbc +0x01c:  xor    %ebx,%ebx
0875bbbe +0x01e:  mov    (%ecx),%eax
0875bbc0 +0x020:  mull   (%esi)
0875bbc2 +0x022:  add    %eax,%ebp
0875bbc4 +0x024:  adc    %edx,%edi
0875bbc6 +0x026:  adc    %bh,%bl
0875bbc8 +0x028:  mov    %edi,%edx
0875bbca +0x02a:  mov    (%esp),%edi
0875bbcd +0x02d:  mov    %ebp,(%edi)
0875bbcf +0x02f:  mov    %edx,%ebp
0875bbd1 +0x031:  mov    %ebx,%edi
0875bbd3 +0x033:  xor    %ebx,%ebx
0875bbd5 +0x035:  mov    (%ecx),%eax
0875bbd7 +0x037:  mull   0x4(%esi)
0875bbda +0x03a:  add    %eax,%ebp
0875bbdc +0x03c:  adc    %edx,%edi
0875bbde +0x03e:  adc    %bh,%bl
0875bbe0 +0x040:  mov    0x4(%ecx),%eax
0875bbe3 +0x043:  mull   (%esi)
0875bbe5 +0x045:  add    %eax,%ebp
0875bbe7 +0x047:  adc    %edx,%edi
0875bbe9 +0x049:  adc    %bh,%bl
0875bbeb +0x04b:  mov    %edi,%edx
0875bbed +0x04d:  mov    (%esp),%edi
0875bbf0 +0x050:  mov    %ebp,0x4(%edi)
0875bbf3 +0x053:  mov    %edx,%ebp
0875bbf5 +0x055:  mov    %ebx,%edi
0875bbf7 +0x057:  xor    %ebx,%ebx
0875bbf9 +0x059:  mov    (%ecx),%eax
0875bbfb +0x05b:  mull   0x8(%esi)
0875bbfe +0x05e:  add    %eax,%ebp
0875bc00 +0x060:  adc    %edx,%edi
0875bc02 +0x062:  adc    %bh,%bl
0875bc04 +0x064:  mov    0x4(%ecx),%eax
0875bc07 +0x067:  mull   0x4(%esi)
0875bc0a +0x06a:  add    %eax,%ebp
0875bc0c +0x06c:  adc    %edx,%edi
0875bc0e +0x06e:  adc    %bh,%bl
0875bc10 +0x070:  mov    0x8(%ecx),%eax
0875bc13 +0x073:  mull   (%esi)
0875bc15 +0x075:  add    %eax,%ebp
0875bc17 +0x077:  adc    %edx,%edi
0875bc19 +0x079:  adc    %bh,%bl
0875bc1b +0x07b:  mov    %edi,%edx
0875bc1d +0x07d:  mov    (%esp),%edi
0875bc20 +0x080:  mov    %ebp,0x8(%edi)
0875bc23 +0x083:  mov    %edx,%ebp
0875bc25 +0x085:  mov    %ebx,%edi
0875bc27 +0x087:  xor    %ebx,%ebx
0875bc29 +0x089:  mov    (%ecx),%eax
0875bc2b +0x08b:  mull   0xc(%esi)
0875bc2e +0x08e:  add    %eax,%ebp
0875bc30 +0x090:  adc    %edx,%edi
0875bc32 +0x092:  adc    %bh,%bl
0875bc34 +0x094:  mov    0x4(%ecx),%eax
0875bc37 +0x097:  mull   0x8(%esi)
0875bc3a +0x09a:  add    %eax,%ebp
0875bc3c +0x09c:  adc    %edx,%edi
0875bc3e +0x09e:  adc    %bh,%bl
0875bc40 +0x0a0:  mov    0x8(%ecx),%eax
0875bc43 +0x0a3:  mull   0x4(%esi)
0875bc46 +0x0a6:  add    %eax,%ebp
0875bc48 +0x0a8:  adc    %edx,%edi
0875bc4a +0x0aa:  adc    %bh,%bl
0875bc4c +0x0ac:  mov    0xc(%ecx),%eax
0875bc4f +0x0af:  mull   (%esi)
0875bc51 +0x0b1:  add    %eax,%ebp
0875bc53 +0x0b3:  adc    %edx,%edi
0875bc55 +0x0b5:  adc    %bh,%bl
0875bc57 +0x0b7:  mov    %edi,%edx
0875bc59 +0x0b9:  mov    (%esp),%edi
0875bc5c +0x0bc:  mov    %ebp,0xc(%edi)
0875bc5f +0x0bf:  mov    %edx,%ebp
0875bc61 +0x0c1:  mov    %ebx,%edi
0875bc63 +0x0c3:  xor    %ebx,%ebx
0875bc65 +0x0c5:  mov    (%ecx),%eax
0875bc67 +0x0c7:  mull   0x10(%esi)
0875bc6a +0x0ca:  add    %eax,%ebp
0875bc6c +0x0cc:  adc    %edx,%edi
0875bc6e +0x0ce:  adc    %bh,%bl
0875bc70 +0x0d0:  mov    0x4(%ecx),%eax
0875bc73 +0x0d3:  mull   0xc(%esi)
0875bc76 +0x0d6:  add    %eax,%ebp
0875bc78 +0x0d8:  adc    %edx,%edi
0875bc7a +0x0da:  adc    %bh,%bl
0875bc7c +0x0dc:  mov    0x8(%ecx),%eax
0875bc7f +0x0df:  mull   0x8(%esi)
0875bc82 +0x0e2:  add    %eax,%ebp
0875bc84 +0x0e4:  adc    %edx,%edi
0875bc86 +0x0e6:  adc    %bh,%bl
0875bc88 +0x0e8:  mov    0xc(%ecx),%eax
0875bc8b +0x0eb:  mull   0x4(%esi)
0875bc8e +0x0ee:  add    %eax,%ebp
0875bc90 +0x0f0:  adc    %edx,%edi
0875bc92 +0x0f2:  adc    %bh,%bl
0875bc94 +0x0f4:  mov    0x10(%ecx),%eax
0875bc97 +0x0f7:  mull   (%esi)
0875bc99 +0x0f9:  add    %eax,%ebp
0875bc9b +0x0fb:  adc    %edx,%edi
0875bc9d +0x0fd:  adc    %bh,%bl
0875bc9f +0x0ff:  mov    %edi,%edx
0875bca1 +0x101:  mov    (%esp),%edi
0875bca4 +0x104:  mov    %ebp,0x10(%edi)
0875bca7 +0x107:  mov    %edx,%ebp
0875bca9 +0x109:  mov    %ebx,%edi
0875bcab +0x10b:  xor    %ebx,%ebx
0875bcad +0x10d:  mov    (%ecx),%eax
0875bcaf +0x10f:  mull   0x14(%esi)
0875bcb2 +0x112:  add    %eax,%ebp
0875bcb4 +0x114:  adc    %edx,%edi
0875bcb6 +0x116:  adc    %bh,%bl
0875bcb8 +0x118:  mov    0x4(%ecx),%eax
0875bcbb +0x11b:  mull   0x10(%esi)
0875bcbe +0x11e:  add    %eax,%ebp
0875bcc0 +0x120:  adc    %edx,%edi
0875bcc2 +0x122:  adc    %bh,%bl
0875bcc4 +0x124:  mov    0x8(%ecx),%eax
0875bcc7 +0x127:  mull   0xc(%esi)
0875bcca +0x12a:  add    %eax,%ebp
0875bccc +0x12c:  adc    %edx,%edi
0875bcce +0x12e:  adc    %bh,%bl
0875bcd0 +0x130:  mov    0xc(%ecx),%eax
0875bcd3 +0x133:  mull   0x8(%esi)
0875bcd6 +0x136:  add    %eax,%ebp
0875bcd8 +0x138:  adc    %edx,%edi
0875bcda +0x13a:  adc    %bh,%bl
0875bcdc +0x13c:  mov    0x10(%ecx),%eax
0875bcdf +0x13f:  mull   0x4(%esi)
0875bce2 +0x142:  add    %eax,%ebp
0875bce4 +0x144:  adc    %edx,%edi
0875bce6 +0x146:  adc    %bh,%bl
0875bce8 +0x148:  mov    0x14(%ecx),%eax
0875bceb +0x14b:  mull   (%esi)
0875bced +0x14d:  add    %eax,%ebp
0875bcef +0x14f:  adc    %edx,%edi
0875bcf1 +0x151:  adc    %bh,%bl
0875bcf3 +0x153:  mov    %edi,%edx
0875bcf5 +0x155:  mov    (%esp),%edi
0875bcf8 +0x158:  mov    %ebp,0x14(%edi)
0875bcfb +0x15b:  mov    %edx,%ebp
0875bcfd +0x15d:  mov    %ebx,%edi
0875bcff +0x15f:  xor    %ebx,%ebx
0875bd01 +0x161:  mov    (%ecx),%eax
0875bd03 +0x163:  mull   0x18(%esi)
0875bd06 +0x166:  add    %eax,%ebp
0875bd08 +0x168:  adc    %edx,%edi
0875bd0a +0x16a:  adc    %bh,%bl
0875bd0c +0x16c:  mov    0x4(%ecx),%eax
0875bd0f +0x16f:  mull   0x14(%esi)
0875bd12 +0x172:  add    %eax,%ebp
0875bd14 +0x174:  adc    %edx,%edi
0875bd16 +0x176:  adc    %bh,%bl
0875bd18 +0x178:  mov    0x8(%ecx),%eax
0875bd1b +0x17b:  mull   0x10(%esi)
0875bd1e +0x17e:  add    %eax,%ebp
0875bd20 +0x180:  adc    %edx,%edi
0875bd22 +0x182:  adc    %bh,%bl
0875bd24 +0x184:  mov    0xc(%ecx),%eax
0875bd27 +0x187:  mull   0xc(%esi)
0875bd2a +0x18a:  add    %eax,%ebp
0875bd2c +0x18c:  adc    %edx,%edi
0875bd2e +0x18e:  adc    %bh,%bl
0875bd30 +0x190:  mov    0x10(%ecx),%eax
0875bd33 +0x193:  mull   0x8(%esi)
0875bd36 +0x196:  add    %eax,%ebp
0875bd38 +0x198:  adc    %edx,%edi
0875bd3a +0x19a:  adc    %bh,%bl
0875bd3c +0x19c:  mov    0x14(%ecx),%eax
0875bd3f +0x19f:  mull   0x4(%esi)
0875bd42 +0x1a2:  add    %eax,%ebp
0875bd44 +0x1a4:  adc    %edx,%edi
0875bd46 +0x1a6:  adc    %bh,%bl
0875bd48 +0x1a8:  mov    0x18(%ecx),%eax
0875bd4b +0x1ab:  mull   (%esi)
0875bd4d +0x1ad:  add    %eax,%ebp
0875bd4f +0x1af:  adc    %edx,%edi
0875bd51 +0x1b1:  adc    %bh,%bl
0875bd53 +0x1b3:  mov    %edi,%edx
0875bd55 +0x1b5:  mov    (%esp),%edi
0875bd58 +0x1b8:  mov    %ebp,0x18(%edi)
0875bd5b +0x1bb:  mov    %edx,%ebp
0875bd5d +0x1bd:  mov    %ebx,%edi
0875bd5f +0x1bf:  xor    %ebx,%ebx
0875bd61 +0x1c1:  mov    (%ecx),%eax
0875bd63 +0x1c3:  imul   0x1c(%esi),%eax
0875bd67 +0x1c7:  add    %eax,%ebp
0875bd69 +0x1c9:  mov    0x4(%ecx),%eax
0875bd6c +0x1cc:  imul   0x18(%esi),%eax
0875bd70 +0x1d0:  add    %eax,%ebp
0875bd72 +0x1d2:  mov    0x8(%ecx),%eax
0875bd75 +0x1d5:  imul   0x14(%esi),%eax
0875bd79 +0x1d9:  add    %eax,%ebp
0875bd7b +0x1db:  mov    0xc(%ecx),%eax
0875bd7e +0x1de:  imul   0x10(%esi),%eax
0875bd82 +0x1e2:  add    %eax,%ebp
0875bd84 +0x1e4:  mov    0x10(%ecx),%eax
0875bd87 +0x1e7:  imul   0xc(%esi),%eax
0875bd8b +0x1eb:  add    %eax,%ebp
0875bd8d +0x1ed:  mov    0x14(%ecx),%eax
0875bd90 +0x1f0:  imul   0x8(%esi),%eax
0875bd94 +0x1f4:  add    %eax,%ebp
0875bd96 +0x1f6:  mov    0x18(%ecx),%eax
0875bd99 +0x1f9:  imul   0x4(%esi),%eax
0875bd9d +0x1fd:  add    %eax,%ebp
0875bd9f +0x1ff:  mov    0x1c(%ecx),%eax
0875bda2 +0x202:  imul   (%esi),%eax
0875bda5 +0x205:  add    %eax,%ebp
0875bda7 +0x207:  mov    %edi,%edx
0875bda9 +0x209:  mov    (%esp),%edi
0875bdac +0x20c:  mov    %ebp,0x1c(%edi)
0875bdaf +0x20f:  add    $0x4,%esp
0875bdb2 +0x212:  pop    %ebp
0875bdb3 +0x213:  pop    %ebx
0875bdb4 +0x214:  mov    (%esp),%esi
0875bdb7 +0x217:  mov    0x4(%esp),%edi
0875bdbb +0x21b:  mov    %ebp,%esp
0875bdbd +0x21d:  pop    %ebp
0875bdbe +0x21e:  ret
0875bdbf +0x21f:  nop
```

## 反编译 C

```c
// TaoCrypt::PentiumOptimized::Multiply8Bottom @ 0x875bba0

/* TaoCrypt::PentiumOptimized::Multiply8Bottom(unsigned int*, unsigned int const*, unsigned int
   const*) */

void TaoCrypt::PentiumOptimized::Multiply8Bottom(uint *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  
  uVar6 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2 >> 0x20);
  *param_1 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2);
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2[1];
  lVar2 = lVar1 + (ulonglong)uVar6;
  uVar11 = (uint)lVar2;
  uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[1] * (ulonglong)*param_2 >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[1] * (ulonglong)*param_2);
  uVar4 = (uint)CARRY4(uVar11,uVar3);
  uVar5 = uVar13 + uVar7;
  uVar14 = uVar5 + uVar4;
  uVar10 = (uint)(byte)(CARRY4((uint)((ulonglong)lVar1 >> 0x20),(uint)CARRY4(uVar6,(uint)lVar1)) +
                       (CARRY4(uVar13,uVar7) || CARRY4(uVar5,uVar4)));
  param_1[1] = uVar11 + uVar3;
  uVar8 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[2] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[2]);
  uVar3 = uVar14 + uVar4;
  uVar4 = (uint)CARRY4(uVar14,uVar4);
  uVar6 = uVar10 + uVar8;
  uVar15 = uVar6 + uVar4;
  uVar14 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1]);
  uVar12 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar7 = uVar15 + uVar14;
  uVar16 = uVar7 + uVar5;
  uVar9 = (uint)((ulonglong)param_3[2] * (ulonglong)*param_2 >> 0x20);
  uVar13 = (uint)((ulonglong)param_3[2] * (ulonglong)*param_2);
  uVar3 = (uint)CARRY4(uVar12,uVar13);
  uVar11 = uVar16 + uVar9;
  uVar17 = uVar11 + uVar3;
  uVar16 = (uint)(byte)((CARRY4(uVar10,uVar8) || CARRY4(uVar6,uVar4)) +
                        (CARRY4(uVar15,uVar14) || CARRY4(uVar7,uVar5)) +
                       (CARRY4(uVar16,uVar9) || CARRY4(uVar11,uVar3)));
  param_1[2] = uVar12 + uVar13;
  uVar9 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[3] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[3]);
  uVar3 = uVar17 + uVar4;
  uVar4 = (uint)CARRY4(uVar17,uVar4);
  uVar7 = uVar16 + uVar9;
  uVar18 = uVar7 + uVar4;
  uVar10 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[2] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[2]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar11 = uVar18 + uVar10;
  uVar19 = uVar11 + uVar5;
  uVar12 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[1] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[1]);
  uVar17 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar13 = uVar19 + uVar12;
  uVar20 = uVar13 + uVar3;
  uVar15 = (uint)((ulonglong)param_3[3] * (ulonglong)*param_2 >> 0x20);
  uVar14 = (uint)((ulonglong)param_3[3] * (ulonglong)*param_2);
  uVar6 = (uint)CARRY4(uVar17,uVar14);
  uVar8 = uVar20 + uVar15;
  uVar21 = uVar8 + uVar6;
  uVar19 = (uint)(byte)((CARRY4(uVar16,uVar9) || CARRY4(uVar7,uVar4)) +
                        (CARRY4(uVar18,uVar10) || CARRY4(uVar11,uVar5)) +
                        (CARRY4(uVar19,uVar12) || CARRY4(uVar13,uVar3)) +
                       (CARRY4(uVar20,uVar15) || CARRY4(uVar8,uVar6)));
  param_1[3] = uVar17 + uVar14;
  uVar12 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[4] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[4]);
  uVar3 = uVar21 + uVar4;
  uVar4 = (uint)CARRY4(uVar21,uVar4);
  uVar11 = uVar19 + uVar12;
  uVar21 = uVar11 + uVar4;
  uVar15 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[3] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[3]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar13 = uVar21 + uVar15;
  uVar22 = uVar13 + uVar5;
  uVar16 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[2] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[2]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar8 = uVar22 + uVar16;
  uVar23 = uVar8 + uVar3;
  uVar17 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[1] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[1]);
  uVar20 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar14 = uVar23 + uVar17;
  uVar24 = uVar14 + uVar6;
  uVar18 = (uint)((ulonglong)param_3[4] * (ulonglong)*param_2 >> 0x20);
  uVar10 = (uint)((ulonglong)param_3[4] * (ulonglong)*param_2);
  uVar7 = (uint)CARRY4(uVar20,uVar10);
  uVar9 = uVar24 + uVar18;
  uVar25 = uVar9 + uVar7;
  uVar22 = (uint)(byte)((CARRY4(uVar19,uVar12) || CARRY4(uVar11,uVar4)) +
                        (CARRY4(uVar21,uVar15) || CARRY4(uVar13,uVar5)) +
                        (CARRY4(uVar22,uVar16) || CARRY4(uVar8,uVar3)) +
                        (CARRY4(uVar23,uVar17) || CARRY4(uVar14,uVar6)) +
                       (CARRY4(uVar24,uVar18) || CARRY4(uVar9,uVar7)));
  param_1[4] = uVar20 + uVar10;
  uVar16 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[5] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[5]);
  uVar3 = uVar25 + uVar4;
  uVar4 = (uint)CARRY4(uVar25,uVar4);
  uVar13 = uVar22 + uVar16;
  uVar24 = uVar13 + uVar4;
  uVar17 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[4] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[4]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar8 = uVar24 + uVar17;
  uVar25 = uVar8 + uVar5;
  uVar18 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[3] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[3]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar14 = uVar25 + uVar18;
  uVar26 = uVar14 + uVar3;
  uVar19 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[2] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[2]);
  uVar11 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar9 = uVar26 + uVar19;
  uVar27 = uVar9 + uVar6;
  uVar20 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[1] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[1]);
  uVar23 = uVar11 + uVar7;
  uVar7 = (uint)CARRY4(uVar11,uVar7);
  uVar10 = uVar27 + uVar20;
  uVar28 = uVar10 + uVar7;
  uVar21 = (uint)((ulonglong)param_3[5] * (ulonglong)*param_2 >> 0x20);
  uVar15 = (uint)((ulonglong)param_3[5] * (ulonglong)*param_2);
  uVar11 = (uint)CARRY4(uVar23,uVar15);
  uVar12 = uVar28 + uVar21;
  param_1[5] = uVar23 + uVar15;
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2[6] +
          (ulonglong)
          CONCAT14((CARRY4(uVar22,uVar16) || CARRY4(uVar13,uVar4)) +
                   (CARRY4(uVar24,uVar17) || CARRY4(uVar8,uVar5)) +
                   (CARRY4(uVar25,uVar18) || CARRY4(uVar14,uVar3)) +
                   (CARRY4(uVar26,uVar19) || CARRY4(uVar9,uVar6)) +
                   (CARRY4(uVar27,uVar20) || CARRY4(uVar10,uVar7)) +
                   (CARRY4(uVar28,uVar21) || CARRY4(uVar12,uVar11)),uVar12 + uVar11) +
          (ulonglong)param_3[1] * (ulonglong)param_2[5] +
          (ulonglong)param_3[2] * (ulonglong)param_2[4] +
          (ulonglong)param_3[3] * (ulonglong)param_2[3] +
          (ulonglong)param_3[4] * (ulonglong)param_2[2] +
          (ulonglong)param_3[5] * (ulonglong)param_2[1] +
          (ulonglong)param_3[6] * (ulonglong)*param_2;
  param_1[6] = (uint)lVar1;
  param_1[7] = (int)((ulonglong)lVar1 >> 0x20) + *param_3 * param_2[7] + param_3[1] * param_2[6] +
               param_3[2] * param_2[5] + param_3[3] * param_2[4] + param_3[4] * param_2[3] +
               param_3[5] * param_2[2] + param_3[6] * param_2[1] + param_3[7] * *param_2;
  return;
}
```
