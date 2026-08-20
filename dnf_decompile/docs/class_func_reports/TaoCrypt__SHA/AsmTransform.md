# AsmTransform

`_ZN8TaoCrypt3SHA12AsmTransformEPKhj`

`TaoCrypt::SHA::AsmTransform(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA` | `0x087685d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087685d0  _ZN8TaoCrypt3SHA12AsmTransformEPKhj
#           TaoCrypt::SHA::AsmTransform(unsigned char const*, unsigned int)
# range [0x087685d0, 0x087685f3]
087685d0 +0x00:  push   %ebp
087685d1 +0x01:  mov    %esp,%ebp
087685d3 +0x03:  movd   %edi,%mm3
087685d6 +0x06:  movd   %ebx,%mm4
087685d9 +0x09:  movd   %esi,%mm5
087685dc +0x0c:  movd   %ebp,%mm6
087685df +0x0f:  mov    0x8(%ebp),%ecx
087685e2 +0x12:  mov    0xc(%ebp),%edi
087685e5 +0x15:  mov    0x10(%ebp),%eax
087685e8 +0x18:  mov    %ecx,%esi
087685ea +0x1a:  add    $0x10,%esi
087685ed +0x1d:  movd   %eax,%mm2
087685f0 +0x20:  movd   %esi,%mm1
087685f3 +0x23:  sub    $0x44,%esp
```

## 反编译 C

```c
// TaoCrypt::SHA::AsmTransform @ 0x87685d0

/* TaoCrypt::SHA::AsmTransform(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::SHA::AsmTransform(SHA *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
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
  SHA *pSVar25;
  uint uVar26;
  
  pSVar25 = this + 0x10;
  do {
    uVar10 = *(uint *)param_1;
    uVar5 = *(uint *)((int)param_1 + 4);
    uVar11 = *(uint *)((int)param_1 + 8);
    uVar16 = *(uint *)((int)param_1 + 0xc);
    uVar1 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    uVar17 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar6 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    uVar12 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
    uVar10 = *(uint *)((int)param_1 + 0x10);
    uVar5 = *(uint *)((int)param_1 + 0x14);
    uVar11 = *(uint *)((int)param_1 + 0x18);
    uVar16 = *(uint *)((int)param_1 + 0x1c);
    uVar2 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    uVar18 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar7 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    uVar13 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
    uVar10 = *(uint *)((int)param_1 + 0x20);
    uVar5 = *(uint *)((int)param_1 + 0x24);
    uVar11 = *(uint *)((int)param_1 + 0x28);
    uVar16 = *(uint *)((int)param_1 + 0x2c);
    uVar3 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    uVar19 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar8 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    uVar14 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
    uVar10 = *(uint *)((int)param_1 + 0x30);
    uVar5 = *(uint *)((int)param_1 + 0x34);
    uVar11 = *(uint *)((int)param_1 + 0x38);
    uVar16 = *(uint *)((int)param_1 + 0x3c);
    uVar4 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    uVar20 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar9 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    uVar15 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
    uVar10 = *(uint *)pSVar25;
    uVar5 = *(uint *)(this + 0x14);
    uVar11 = *(uint *)(this + 0x18);
    uVar16 = *(uint *)(this + 0x1c);
    uVar21 = uVar5 << 0x1e | uVar5 >> 2;
    uVar22 = uVar1 + 0x5a827999 + *(int *)(this + 0x20) + ((uVar11 ^ uVar16) & uVar5 ^ uVar16) +
             (uVar10 << 5 | uVar10 >> 0x1b);
    uVar5 = uVar10 << 0x1e | uVar10 >> 2;
    uVar16 = uVar17 + 0x5a827999 + uVar16 + ((uVar21 ^ uVar11) & uVar10 ^ uVar11) +
             (uVar22 * 0x20 | uVar22 >> 0x1b);
    uVar23 = uVar22 * 0x40000000 | uVar22 >> 2;
    uVar10 = uVar6 + 0x5a827999 + uVar11 + ((uVar5 ^ uVar21) & uVar22 ^ uVar21) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar22 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar12 + 0x5a827999 + uVar21 + ((uVar23 ^ uVar5) & uVar16 ^ uVar5) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar2 + 0x5a827999 + uVar5 + ((uVar22 ^ uVar23) & uVar10 ^ uVar23) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar21 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar23 = uVar18 + 0x5a827999 + uVar23 + ((uVar11 ^ uVar22) & uVar16 ^ uVar22) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar7 + 0x5a827999 + uVar22 + ((uVar21 ^ uVar11) & uVar10 ^ uVar11) +
             (uVar23 * 0x20 | uVar23 >> 0x1b);
    uVar24 = uVar23 * 0x40000000 | uVar23 >> 2;
    uVar10 = uVar13 + 0x5a827999 + uVar11 + ((uVar5 ^ uVar21) & uVar23 ^ uVar21) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar22 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar3 + 0x5a827999 + uVar21 + ((uVar24 ^ uVar5) & uVar16 ^ uVar5) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar19 + 0x5a827999 + uVar5 + ((uVar22 ^ uVar24) & uVar10 ^ uVar24) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar21 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar23 = uVar8 + 0x5a827999 + uVar24 + ((uVar11 ^ uVar22) & uVar16 ^ uVar22) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar14 + 0x5a827999 + uVar22 + ((uVar21 ^ uVar11) & uVar10 ^ uVar11) +
             (uVar23 * 0x20 | uVar23 >> 0x1b);
    uVar24 = uVar23 * 0x40000000 | uVar23 >> 2;
    uVar10 = uVar4 + 0x5a827999 + uVar11 + ((uVar5 ^ uVar21) & uVar23 ^ uVar21) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar22 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar20 + 0x5a827999 + uVar21 + ((uVar24 ^ uVar5) & uVar16 ^ uVar5) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar9 + 0x5a827999 + uVar5 + ((uVar22 ^ uVar24) & uVar10 ^ uVar24) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar21 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar23 = uVar15 + 0x5a827999 + uVar24 + ((uVar11 ^ uVar22) & uVar16 ^ uVar22) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar5 = uVar1 ^ uVar6 ^ uVar3 ^ uVar20;
    uVar24 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar24 + 0x5a827999 + uVar22 + ((uVar21 ^ uVar11) & uVar10 ^ uVar11) +
             (uVar23 * 0x20 | uVar23 >> 0x1b);
    uVar10 = uVar17 ^ uVar12 ^ uVar19 ^ uVar9;
    uVar17 = uVar10 << 1 | (uint)((int)uVar10 < 0);
    uVar22 = uVar23 * 0x40000000 | uVar23 >> 2;
    uVar10 = uVar17 + 0x5a827999 + uVar11 + ((uVar5 ^ uVar21) & uVar23 ^ uVar21) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar11 = uVar6 ^ uVar2 ^ uVar8 ^ uVar15;
    uVar23 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar1 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar23 + 0x5a827999 + uVar21 + ((uVar22 ^ uVar5) & uVar16 ^ uVar5) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar12 ^ uVar18 ^ uVar14 ^ uVar24;
    uVar12 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar12 + 0x5a827999 + uVar5 + ((uVar1 ^ uVar22) & uVar10 ^ uVar22) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar5 = uVar2 ^ uVar7 ^ uVar4 ^ uVar17;
    uVar21 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar2 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar6 = uVar21 + 0x6ed9eba1 + uVar22 + (uVar11 ^ uVar1 ^ uVar16) +
            (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar5 = uVar18 ^ uVar13 ^ uVar20 ^ uVar23;
    uVar22 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar22 + 0x6ed9eba1 + uVar1 + (uVar2 ^ uVar11 ^ uVar10) +
             (uVar6 * 0x20 | uVar6 >> 0x1b);
    uVar10 = uVar7 ^ uVar3 ^ uVar9 ^ uVar12;
    uVar18 = uVar10 << 1 | (uint)((int)uVar10 < 0);
    uVar7 = uVar6 * 0x40000000 | uVar6 >> 2;
    uVar10 = uVar18 + 0x6ed9eba1 + uVar11 + (uVar5 ^ uVar2 ^ uVar6) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar11 = uVar13 ^ uVar19 ^ uVar15 ^ uVar21;
    uVar13 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar1 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar13 + 0x6ed9eba1 + uVar2 + (uVar7 ^ uVar5 ^ uVar16) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar3 ^ uVar8 ^ uVar24 ^ uVar22;
    uVar26 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar26 + 0x6ed9eba1 + uVar5 + (uVar1 ^ uVar7 ^ uVar10) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar5 = uVar19 ^ uVar14 ^ uVar17 ^ uVar18;
    uVar19 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar2 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar3 = uVar19 + 0x6ed9eba1 + uVar7 + (uVar11 ^ uVar1 ^ uVar16) +
            (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar5 = uVar8 ^ uVar4 ^ uVar23 ^ uVar13;
    uVar7 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar7 + 0x6ed9eba1 + uVar1 + (uVar2 ^ uVar11 ^ uVar10) + (uVar3 * 0x20 | uVar3 >> 0x1b)
    ;
    uVar10 = uVar14 ^ uVar20 ^ uVar12 ^ uVar26;
    uVar8 = uVar10 << 1 | (uint)((int)uVar10 < 0);
    uVar6 = uVar3 * 0x40000000 | uVar3 >> 2;
    uVar10 = uVar8 + 0x6ed9eba1 + uVar11 + (uVar5 ^ uVar2 ^ uVar3) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar11 = uVar4 ^ uVar9 ^ uVar21 ^ uVar19;
    uVar14 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar1 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar14 + 0x6ed9eba1 + uVar2 + (uVar6 ^ uVar5 ^ uVar16) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar20 ^ uVar15 ^ uVar22 ^ uVar7;
    uVar20 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar20 + 0x6ed9eba1 + uVar5 + (uVar1 ^ uVar6 ^ uVar10) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar5 = uVar9 ^ uVar24 ^ uVar18 ^ uVar8;
    uVar9 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar2 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar3 = uVar9 + 0x6ed9eba1 + uVar6 + (uVar11 ^ uVar1 ^ uVar16) +
            (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar5 = uVar15 ^ uVar17 ^ uVar13 ^ uVar14;
    uVar6 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar6 + 0x6ed9eba1 + uVar1 + (uVar2 ^ uVar11 ^ uVar10) + (uVar3 * 0x20 | uVar3 >> 0x1b)
    ;
    uVar10 = uVar24 ^ uVar23 ^ uVar26 ^ uVar20;
    uVar15 = uVar10 << 1 | (uint)((int)uVar10 < 0);
    uVar4 = uVar3 * 0x40000000 | uVar3 >> 2;
    uVar10 = uVar15 + 0x6ed9eba1 + uVar11 + (uVar5 ^ uVar2 ^ uVar3) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar11 = uVar17 ^ uVar12 ^ uVar19 ^ uVar9;
    uVar17 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar1 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar17 + 0x6ed9eba1 + uVar2 + (uVar4 ^ uVar5 ^ uVar16) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar23 ^ uVar21 ^ uVar7 ^ uVar6;
    uVar23 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar23 + 0x6ed9eba1 + uVar5 + (uVar1 ^ uVar4 ^ uVar10) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar5 = uVar12 ^ uVar22 ^ uVar8 ^ uVar15;
    uVar12 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar2 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar3 = uVar12 + 0x6ed9eba1 + uVar4 + (uVar11 ^ uVar1 ^ uVar16) +
            (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar5 = uVar21 ^ uVar18 ^ uVar14 ^ uVar17;
    uVar21 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar21 + 0x6ed9eba1 + uVar1 + (uVar2 ^ uVar11 ^ uVar10) +
             (uVar3 * 0x20 | uVar3 >> 0x1b);
    uVar10 = uVar22 ^ uVar13 ^ uVar20 ^ uVar23;
    uVar22 = uVar10 << 1 | (uint)((int)uVar10 < 0);
    uVar4 = uVar3 * 0x40000000 | uVar3 >> 2;
    uVar10 = uVar22 + 0x6ed9eba1 + uVar11 + (uVar5 ^ uVar2 ^ uVar3) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar11 = uVar18 ^ uVar26 ^ uVar9 ^ uVar12;
    uVar18 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar1 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar18 + 0x6ed9eba1 + uVar2 + (uVar4 ^ uVar5 ^ uVar16) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar13 ^ uVar19 ^ uVar6 ^ uVar21;
    uVar13 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar13 + 0x6ed9eba1 + uVar5 + (uVar1 ^ uVar4 ^ uVar10) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar5 = uVar26 ^ uVar7 ^ uVar15 ^ uVar22;
    uVar24 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar2 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar3 = uVar24 + 0x8f1bbcdc + uVar4 + (uVar11 & uVar16 | (uVar11 | uVar16) & uVar1) +
            (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar5 = uVar19 ^ uVar8 ^ uVar17 ^ uVar18;
    uVar19 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar19 + 0x8f1bbcdc + uVar1 + (uVar2 & uVar10 | (uVar2 | uVar10) & uVar11) +
             (uVar3 * 0x20 | uVar3 >> 0x1b);
    uVar10 = uVar7 ^ uVar14 ^ uVar23 ^ uVar13;
    uVar7 = uVar10 << 1 | (uint)((int)uVar10 < 0);
    uVar4 = uVar3 * 0x40000000 | uVar3 >> 2;
    uVar10 = uVar7 + 0x8f1bbcdc + uVar11 + (uVar5 & uVar3 | (uVar5 | uVar3) & uVar2) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar11 = uVar8 ^ uVar20 ^ uVar12 ^ uVar24;
    uVar8 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar1 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar8 + 0x8f1bbcdc + uVar2 + (uVar4 & uVar16 | (uVar4 | uVar16) & uVar5) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar14 ^ uVar9 ^ uVar21 ^ uVar19;
    uVar14 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar14 + 0x8f1bbcdc + uVar5 + (uVar1 & uVar10 | (uVar1 | uVar10) & uVar4) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar5 = uVar20 ^ uVar6 ^ uVar22 ^ uVar7;
    uVar20 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar2 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar3 = uVar20 + 0x8f1bbcdc + uVar4 + (uVar11 & uVar16 | (uVar11 | uVar16) & uVar1) +
            (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar5 = uVar9 ^ uVar15 ^ uVar18 ^ uVar8;
    uVar9 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar9 + 0x8f1bbcdc + uVar1 + (uVar2 & uVar10 | (uVar2 | uVar10) & uVar11) +
             (uVar3 * 0x20 | uVar3 >> 0x1b);
    uVar10 = uVar6 ^ uVar17 ^ uVar13 ^ uVar14;
    uVar6 = uVar10 << 1 | (uint)((int)uVar10 < 0);
    uVar4 = uVar3 * 0x40000000 | uVar3 >> 2;
    uVar10 = uVar6 + 0x8f1bbcdc + uVar11 + (uVar5 & uVar3 | (uVar5 | uVar3) & uVar2) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar11 = uVar15 ^ uVar23 ^ uVar24 ^ uVar20;
    uVar15 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar1 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar15 + 0x8f1bbcdc + uVar2 + (uVar4 & uVar16 | (uVar4 | uVar16) & uVar5) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar17 ^ uVar12 ^ uVar19 ^ uVar9;
    uVar17 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar17 + 0x8f1bbcdc + uVar5 + (uVar1 & uVar10 | (uVar1 | uVar10) & uVar4) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar5 = uVar23 ^ uVar21 ^ uVar7 ^ uVar6;
    uVar23 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar2 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar3 = uVar23 + 0x8f1bbcdc + uVar4 + (uVar11 & uVar16 | (uVar11 | uVar16) & uVar1) +
            (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar5 = uVar12 ^ uVar22 ^ uVar8 ^ uVar15;
    uVar12 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar12 + 0x8f1bbcdc + uVar1 + (uVar2 & uVar10 | (uVar2 | uVar10) & uVar11) +
             (uVar3 * 0x20 | uVar3 >> 0x1b);
    uVar10 = uVar21 ^ uVar18 ^ uVar14 ^ uVar17;
    uVar21 = uVar10 << 1 | (uint)((int)uVar10 < 0);
    uVar4 = uVar3 * 0x40000000 | uVar3 >> 2;
    uVar10 = uVar21 + 0x8f1bbcdc + uVar11 + (uVar5 & uVar3 | (uVar5 | uVar3) & uVar2) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar11 = uVar22 ^ uVar13 ^ uVar20 ^ uVar23;
    uVar22 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar1 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar22 + 0x8f1bbcdc + uVar2 + (uVar4 & uVar16 | (uVar4 | uVar16) & uVar5) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar18 ^ uVar24 ^ uVar9 ^ uVar12;
    uVar18 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar18 + 0x8f1bbcdc + uVar5 + (uVar1 & uVar10 | (uVar1 | uVar10) & uVar4) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar5 = uVar13 ^ uVar19 ^ uVar6 ^ uVar21;
    uVar13 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar2 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar3 = uVar13 + 0x8f1bbcdc + uVar4 + (uVar11 & uVar16 | (uVar11 | uVar16) & uVar1) +
            (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar5 = uVar24 ^ uVar7 ^ uVar15 ^ uVar22;
    uVar24 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar24 + 0x8f1bbcdc + uVar1 + (uVar2 & uVar10 | (uVar2 | uVar10) & uVar11) +
             (uVar3 * 0x20 | uVar3 >> 0x1b);
    uVar10 = uVar19 ^ uVar8 ^ uVar17 ^ uVar18;
    uVar19 = uVar10 << 1 | (uint)((int)uVar10 < 0);
    uVar4 = uVar3 * 0x40000000 | uVar3 >> 2;
    uVar10 = uVar19 + 0x8f1bbcdc + uVar11 + (uVar5 & uVar3 | (uVar5 | uVar3) & uVar2) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar11 = uVar7 ^ uVar14 ^ uVar23 ^ uVar13;
    uVar7 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar1 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar7 + 0x8f1bbcdc + uVar2 + (uVar4 & uVar16 | (uVar4 | uVar16) & uVar5) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar8 ^ uVar20 ^ uVar12 ^ uVar24;
    uVar8 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar8 + 0x8f1bbcdc + uVar5 + (uVar1 & uVar10 | (uVar1 | uVar10) & uVar4) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar5 = uVar14 ^ uVar9 ^ uVar21 ^ uVar19;
    uVar14 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar2 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar3 = uVar14 + 0xca62c1d6 + uVar4 + (uVar11 ^ uVar1 ^ uVar16) +
            (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar5 = uVar20 ^ uVar6 ^ uVar22 ^ uVar7;
    uVar20 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar20 + 0xca62c1d6 + uVar1 + (uVar2 ^ uVar11 ^ uVar10) +
             (uVar3 * 0x20 | uVar3 >> 0x1b);
    uVar10 = uVar9 ^ uVar15 ^ uVar18 ^ uVar8;
    uVar9 = uVar10 << 1 | (uint)((int)uVar10 < 0);
    uVar4 = uVar3 * 0x40000000 | uVar3 >> 2;
    uVar10 = uVar9 + 0xca62c1d6 + uVar11 + (uVar5 ^ uVar2 ^ uVar3) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar11 = uVar6 ^ uVar17 ^ uVar13 ^ uVar14;
    uVar6 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar1 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar6 + 0xca62c1d6 + uVar2 + (uVar4 ^ uVar5 ^ uVar16) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar15 ^ uVar23 ^ uVar24 ^ uVar20;
    uVar15 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar15 + 0xca62c1d6 + uVar5 + (uVar1 ^ uVar4 ^ uVar10) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar5 = uVar17 ^ uVar12 ^ uVar19 ^ uVar9;
    uVar17 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar2 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar3 = uVar17 + 0xca62c1d6 + uVar4 + (uVar11 ^ uVar1 ^ uVar16) +
            (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar5 = uVar23 ^ uVar21 ^ uVar7 ^ uVar6;
    uVar23 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar23 + 0xca62c1d6 + uVar1 + (uVar2 ^ uVar11 ^ uVar10) +
             (uVar3 * 0x20 | uVar3 >> 0x1b);
    uVar10 = uVar12 ^ uVar22 ^ uVar8 ^ uVar15;
    uVar12 = uVar10 << 1 | (uint)((int)uVar10 < 0);
    uVar4 = uVar3 * 0x40000000 | uVar3 >> 2;
    uVar10 = uVar12 + 0xca62c1d6 + uVar11 + (uVar5 ^ uVar2 ^ uVar3) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar11 = uVar21 ^ uVar18 ^ uVar14 ^ uVar17;
    uVar21 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar1 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar21 + 0xca62c1d6 + uVar2 + (uVar4 ^ uVar5 ^ uVar16) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar22 ^ uVar13 ^ uVar20 ^ uVar23;
    uVar22 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar22 + 0xca62c1d6 + uVar5 + (uVar1 ^ uVar4 ^ uVar10) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar5 = uVar18 ^ uVar24 ^ uVar9 ^ uVar12;
    uVar18 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar2 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar3 = uVar18 + 0xca62c1d6 + uVar4 + (uVar11 ^ uVar1 ^ uVar16) +
            (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar5 = uVar13 ^ uVar19 ^ uVar6 ^ uVar21;
    uVar13 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar13 + 0xca62c1d6 + uVar1 + (uVar2 ^ uVar11 ^ uVar10) +
             (uVar3 * 0x20 | uVar3 >> 0x1b);
    uVar10 = uVar24 ^ uVar7 ^ uVar15 ^ uVar22;
    uVar24 = uVar10 << 1 | (uint)((int)uVar10 < 0);
    uVar4 = uVar3 * 0x40000000 | uVar3 >> 2;
    uVar10 = uVar24 + 0xca62c1d6 + uVar11 + (uVar5 ^ uVar2 ^ uVar3) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar11 = uVar19 ^ uVar8 ^ uVar17 ^ uVar18;
    uVar19 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar1 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = uVar19 + 0xca62c1d6 + uVar2 + (uVar4 ^ uVar5 ^ uVar16) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar11 = uVar7 ^ uVar14 ^ uVar23 ^ uVar13;
    uVar7 = uVar11 << 1 | (uint)((int)uVar11 < 0);
    uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar10 = uVar7 + 0xca62c1d6 + uVar5 + (uVar1 ^ uVar4 ^ uVar10) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar24 = uVar8 ^ uVar20 ^ uVar12 ^ uVar24;
    uVar8 = uVar24 << 1 | (uint)((int)uVar24 < 0);
    uVar2 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar3 = uVar8 + 0xca62c1d6 + uVar4 + (uVar11 ^ uVar1 ^ uVar16) +
            (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar19 = uVar14 ^ uVar9 ^ uVar21 ^ uVar19;
    uVar4 = uVar19 << 1 | (uint)((int)uVar19 < 0);
    uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar16 = uVar4 + 0xca62c1d6 + uVar1 + (uVar2 ^ uVar11 ^ uVar10) + (uVar3 * 0x20 | uVar3 >> 0x1b)
    ;
    uVar7 = uVar20 ^ uVar6 ^ uVar22 ^ uVar7;
    uVar1 = uVar3 * 0x40000000 | uVar3 >> 2;
    uVar10 = (uVar7 << 1 | (uint)((int)uVar7 < 0)) + 0xca62c1d6 + uVar11 + (uVar5 ^ uVar2 ^ uVar3) +
             (uVar16 * 0x20 | uVar16 >> 0x1b);
    uVar8 = uVar9 ^ uVar15 ^ uVar18 ^ uVar8;
    uVar11 = uVar16 * 0x40000000 | uVar16 >> 2;
    uVar16 = (uVar8 << 1 | (uint)((int)uVar8 < 0)) + 0xca62c1d6 + uVar2 + (uVar1 ^ uVar5 ^ uVar16) +
             (uVar10 * 0x20 | uVar10 >> 0x1b);
    uVar4 = uVar6 ^ uVar17 ^ uVar13 ^ uVar4;
    *(uint *)pSVar25 =
         *(uint *)pSVar25 +
         (uVar4 << 1 | (uint)((int)uVar4 < 0)) + 0xca62c1d6 + uVar5 + (uVar11 ^ uVar1 ^ uVar10) +
         (uVar16 * 0x20 | uVar16 >> 0x1b);
    *(uint *)(this + 0x14) = *(int *)(this + 0x14) + uVar16;
    *(uint *)(this + 0x18) = *(int *)(this + 0x18) + (uVar10 * 0x40000000 | uVar10 >> 2);
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar11;
    *(uint *)(this + 0x20) = *(int *)(this + 0x20) + uVar1;
    param_1 = (uchar *)((int)param_1 + 0x40);
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}
```
