# TaoCrypt__SHA

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## AsmTransform

```asm
// === 087685d0 TaoCrypt::SHA::AsmTransform  [0x087685d0-0x87685f5] ===
 87685d0:	55                   	push   %ebp
 87685d1:	89 e5                	mov    %esp,%ebp
 87685d3:	0f 6e df             	movd   %edi,%mm3
 87685d6:	0f 6e e3             	movd   %ebx,%mm4
 87685d9:	0f 6e ee             	movd   %esi,%mm5
 87685dc:	0f 6e f5             	movd   %ebp,%mm6
 87685df:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87685e2:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87685e5:	8b 45 10             	mov    0x10(%ebp),%eax
 87685e8:	89 ce                	mov    %ecx,%esi
 87685ea:	83 c6 10             	add    $0x10,%esi
 87685ed:	0f 6e d0             	movd   %eax,%mm2
 87685f0:	0f 6e ce             	movd   %esi,%mm1
 87685f3:	83 ec 44             	sub    $0x44,%esp

```

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

---

## Init

```asm
// === 087683b0 TaoCrypt::SHA::Init  [0x087683b0-0x87683ef] ===
 87683b0:	55                   	push   %ebp
 87683b1:	89 e5                	mov    %esp,%ebp
 87683b3:	8b 45 08             	mov    0x8(%ebp),%eax
 87683b6:	c7 40 10 01 23 45 67 	movl   $0x67452301,0x10(%eax)
 87683bd:	c7 40 14 89 ab cd ef 	movl   $0xefcdab89,0x14(%eax)
 87683c4:	c7 40 18 fe dc ba 98 	movl   $0x98badcfe,0x18(%eax)
 87683cb:	c7 40 1c 76 54 32 10 	movl   $0x10325476,0x1c(%eax)
 87683d2:	c7 40 20 f0 e1 d2 c3 	movl   $0xc3d2e1f0,0x20(%eax)
 87683d9:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87683e0:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87683e7:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87683ee:	5d                   	pop    %ebp
 87683ef:	c3                   	ret

```

```c
// TaoCrypt::SHA::Init @ 0x87683b0

/* TaoCrypt::SHA::Init() */

void __thiscall TaoCrypt::SHA::Init(SHA *this)

{
  *(undefined4 *)(this + 0x10) = 0x67452301;
  *(undefined4 *)(this + 0x14) = 0xefcdab89;
  *(undefined4 *)(this + 0x18) = 0x98badcfe;
  *(undefined4 *)(this + 0x1c) = 0x10325476;
  *(undefined4 *)(this + 0x20) = 0xc3d2e1f0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## SHA

```asm
// === 08770420 TaoCrypt::SHA::SHA  [0x08770420-0x877050f] ===
 8770420:	55                   	push   %ebp
 8770421:	89 e5                	mov    %esp,%ebp
 8770423:	57                   	push   %edi
 8770424:	56                   	push   %esi
 8770425:	53                   	push   %ebx
 8770426:	e8 cd 29 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 877042b:	81 c3 6d c7 bf 00    	add    $0xbfc76d,%ebx
 8770431:	83 ec 1c             	sub    $0x1c,%esp
 8770434:	8b 75 08             	mov    0x8(%ebp),%esi
 8770437:	8b 7d 0c             	mov    0xc(%ebp),%edi
 877043a:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 8770441:	00 
 8770442:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8770449:	00 
 877044a:	89 34 24             	mov    %esi,(%esp)
 877044d:	e8 7e 87 fe ff       	call   8758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>
 8770452:	8b 83 f4 ff ff ff    	mov    -0xc(%ebx),%eax
 8770458:	8d 57 10             	lea    0x10(%edi),%edx
 877045b:	8b 4f 10             	mov    0x10(%edi),%ecx
 877045e:	83 c0 08             	add    $0x8,%eax
 8770461:	89 06                	mov    %eax,(%esi)
 8770463:	8b 47 04             	mov    0x4(%edi),%eax
 8770466:	89 4e 10             	mov    %ecx,0x10(%esi)
 8770469:	8b 4a 04             	mov    0x4(%edx),%ecx
 877046c:	89 46 04             	mov    %eax,0x4(%esi)
 877046f:	8b 47 08             	mov    0x8(%edi),%eax
 8770472:	89 46 08             	mov    %eax,0x8(%esi)
 8770475:	8b 47 0c             	mov    0xc(%edi),%eax
 8770478:	89 46 0c             	mov    %eax,0xc(%esi)
 877047b:	8d 46 10             	lea    0x10(%esi),%eax
 877047e:	89 48 04             	mov    %ecx,0x4(%eax)
 8770481:	8b 4a 08             	mov    0x8(%edx),%ecx
 8770484:	89 48 08             	mov    %ecx,0x8(%eax)
 8770487:	8b 4a 0c             	mov    0xc(%edx),%ecx
 877048a:	89 48 0c             	mov    %ecx,0xc(%eax)
 877048d:	8b 52 10             	mov    0x10(%edx),%edx
 8770490:	8b 4f 30             	mov    0x30(%edi),%ecx
 8770493:	89 50 10             	mov    %edx,0x10(%eax)
 8770496:	8d 57 30             	lea    0x30(%edi),%edx
 8770499:	89 4e 30             	mov    %ecx,0x30(%esi)
 877049c:	8b 4a 04             	mov    0x4(%edx),%ecx
 877049f:	8d 46 30             	lea    0x30(%esi),%eax
 87704a2:	89 48 04             	mov    %ecx,0x4(%eax)
 87704a5:	8b 4a 08             	mov    0x8(%edx),%ecx
 87704a8:	89 48 08             	mov    %ecx,0x8(%eax)
 87704ab:	8b 4a 0c             	mov    0xc(%edx),%ecx
 87704ae:	89 48 0c             	mov    %ecx,0xc(%eax)
 87704b1:	8b 4a 10             	mov    0x10(%edx),%ecx
 87704b4:	89 48 10             	mov    %ecx,0x10(%eax)
 87704b7:	8b 4a 14             	mov    0x14(%edx),%ecx
 87704ba:	89 48 14             	mov    %ecx,0x14(%eax)
 87704bd:	8b 4a 18             	mov    0x18(%edx),%ecx
 87704c0:	89 48 18             	mov    %ecx,0x18(%eax)
 87704c3:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 87704c6:	89 48 1c             	mov    %ecx,0x1c(%eax)
 87704c9:	8b 4a 20             	mov    0x20(%edx),%ecx
 87704cc:	89 48 20             	mov    %ecx,0x20(%eax)
 87704cf:	8b 4a 24             	mov    0x24(%edx),%ecx
 87704d2:	89 48 24             	mov    %ecx,0x24(%eax)
 87704d5:	8b 4a 28             	mov    0x28(%edx),%ecx
 87704d8:	89 48 28             	mov    %ecx,0x28(%eax)
 87704db:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 87704de:	89 48 2c             	mov    %ecx,0x2c(%eax)
 87704e1:	8b 4a 30             	mov    0x30(%edx),%ecx
 87704e4:	89 48 30             	mov    %ecx,0x30(%eax)
 87704e7:	8b 4a 34             	mov    0x34(%edx),%ecx
 87704ea:	89 48 34             	mov    %ecx,0x34(%eax)
 87704ed:	8b 4a 38             	mov    0x38(%edx),%ecx
 87704f0:	89 48 38             	mov    %ecx,0x38(%eax)
 87704f3:	8b 52 3c             	mov    0x3c(%edx),%edx
 87704f6:	89 50 3c             	mov    %edx,0x3c(%eax)
 87704f9:	83 c4 1c             	add    $0x1c,%esp
 87704fc:	5b                   	pop    %ebx
 87704fd:	5e                   	pop    %esi
 87704fe:	5f                   	pop    %edi
 87704ff:	5d                   	pop    %ebp
 8770500:	c3                   	ret
 8770501:	90                   	nop
 8770502:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8770509:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::SHA::SHA @ 0x8770420

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA::SHA(TaoCrypt::SHA const&) */

void __thiscall TaoCrypt::SHA::SHA(SHA *this,SHA *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  HASHwithTransform::HASHwithTransform((HASHwithTransform *)this,5,0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined **)this = PTR_vtable_0936cb8c + 8;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  return;
}

```

---

## Swap

```asm
// === 0876fba0 TaoCrypt::SHA::Swap  [0x0876fba0-0x876fc5f] ===
 876fba0:	55                   	push   %ebp
 876fba1:	89 e5                	mov    %esp,%ebp
 876fba3:	57                   	push   %edi
 876fba4:	8b 4d 08             	mov    0x8(%ebp),%ecx
 876fba7:	56                   	push   %esi
 876fba8:	8b 75 0c             	mov    0xc(%ebp),%esi
 876fbab:	8b 41 08             	mov    0x8(%ecx),%eax
 876fbae:	8b 56 08             	mov    0x8(%esi),%edx
 876fbb1:	8b 7e 10             	mov    0x10(%esi),%edi
 876fbb4:	89 51 08             	mov    %edx,0x8(%ecx)
 876fbb7:	8b 56 0c             	mov    0xc(%esi),%edx
 876fbba:	89 46 08             	mov    %eax,0x8(%esi)
 876fbbd:	8b 41 0c             	mov    0xc(%ecx),%eax
 876fbc0:	89 79 10             	mov    %edi,0x10(%ecx)
 876fbc3:	89 51 0c             	mov    %edx,0xc(%ecx)
 876fbc6:	8b 56 04             	mov    0x4(%esi),%edx
 876fbc9:	89 46 0c             	mov    %eax,0xc(%esi)
 876fbcc:	8b 41 04             	mov    0x4(%ecx),%eax
 876fbcf:	89 51 04             	mov    %edx,0x4(%ecx)
 876fbd2:	8d 56 10             	lea    0x10(%esi),%edx
 876fbd5:	8b 7a 04             	mov    0x4(%edx),%edi
 876fbd8:	89 46 04             	mov    %eax,0x4(%esi)
 876fbdb:	8d 41 10             	lea    0x10(%ecx),%eax
 876fbde:	89 78 04             	mov    %edi,0x4(%eax)
 876fbe1:	8b 7a 08             	mov    0x8(%edx),%edi
 876fbe4:	89 78 08             	mov    %edi,0x8(%eax)
 876fbe7:	8b 7a 0c             	mov    0xc(%edx),%edi
 876fbea:	89 78 0c             	mov    %edi,0xc(%eax)
 876fbed:	8b 52 10             	mov    0x10(%edx),%edx
 876fbf0:	89 50 10             	mov    %edx,0x10(%eax)
 876fbf3:	8d 56 30             	lea    0x30(%esi),%edx
 876fbf6:	8b 76 30             	mov    0x30(%esi),%esi
 876fbf9:	8d 41 30             	lea    0x30(%ecx),%eax
 876fbfc:	89 71 30             	mov    %esi,0x30(%ecx)
 876fbff:	8b 4a 04             	mov    0x4(%edx),%ecx
 876fc02:	89 48 04             	mov    %ecx,0x4(%eax)
 876fc05:	8b 4a 08             	mov    0x8(%edx),%ecx
 876fc08:	89 48 08             	mov    %ecx,0x8(%eax)
 876fc0b:	8b 4a 0c             	mov    0xc(%edx),%ecx
 876fc0e:	89 48 0c             	mov    %ecx,0xc(%eax)
 876fc11:	8b 4a 10             	mov    0x10(%edx),%ecx
 876fc14:	89 48 10             	mov    %ecx,0x10(%eax)
 876fc17:	8b 4a 14             	mov    0x14(%edx),%ecx
 876fc1a:	89 48 14             	mov    %ecx,0x14(%eax)
 876fc1d:	8b 4a 18             	mov    0x18(%edx),%ecx
 876fc20:	89 48 18             	mov    %ecx,0x18(%eax)
 876fc23:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 876fc26:	89 48 1c             	mov    %ecx,0x1c(%eax)
 876fc29:	8b 4a 20             	mov    0x20(%edx),%ecx
 876fc2c:	89 48 20             	mov    %ecx,0x20(%eax)
 876fc2f:	8b 4a 24             	mov    0x24(%edx),%ecx
 876fc32:	89 48 24             	mov    %ecx,0x24(%eax)
 876fc35:	8b 4a 28             	mov    0x28(%edx),%ecx
 876fc38:	89 48 28             	mov    %ecx,0x28(%eax)
 876fc3b:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 876fc3e:	89 48 2c             	mov    %ecx,0x2c(%eax)
 876fc41:	8b 4a 30             	mov    0x30(%edx),%ecx
 876fc44:	89 48 30             	mov    %ecx,0x30(%eax)
 876fc47:	8b 4a 34             	mov    0x34(%edx),%ecx
 876fc4a:	89 48 34             	mov    %ecx,0x34(%eax)
 876fc4d:	8b 4a 38             	mov    0x38(%edx),%ecx
 876fc50:	89 48 38             	mov    %ecx,0x38(%eax)
 876fc53:	8b 52 3c             	mov    0x3c(%edx),%edx
 876fc56:	89 50 3c             	mov    %edx,0x3c(%eax)
 876fc59:	5e                   	pop    %esi
 876fc5a:	5f                   	pop    %edi
 876fc5b:	5d                   	pop    %ebp
 876fc5c:	c3                   	ret
 876fc5d:	90                   	nop
 876fc5e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::SHA::Swap @ 0x876fba0

/* TaoCrypt::SHA::Swap(TaoCrypt::SHA&) */

void __thiscall TaoCrypt::SHA::Swap(SHA *this,SHA *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(this + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  return;
}

```

---

## Transform

```asm
// === 0876e390 TaoCrypt::SHA::Transform  [0x0876e390-0x876f8bf] ===
 876e390:	55                   	push   %ebp
 876e391:	89 e5                	mov    %esp,%ebp
 876e393:	57                   	push   %edi
 876e394:	56                   	push   %esi
 876e395:	81 ec dc 00 00 00    	sub    $0xdc,%esp
 876e39b:	8b 55 08             	mov    0x8(%ebp),%edx
 876e39e:	8b 45 08             	mov    0x8(%ebp),%eax
 876e3a1:	8b 72 30             	mov    0x30(%edx),%esi
 876e3a4:	8b 40 10             	mov    0x10(%eax),%eax
 876e3a7:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 876e3aa:	8b 7a 14             	mov    0x14(%edx),%edi
 876e3ad:	89 b5 24 ff ff ff    	mov    %esi,-0xdc(%ebp)
 876e3b3:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 876e3b9:	8b 42 18             	mov    0x18(%edx),%eax
 876e3bc:	03 72 20             	add    0x20(%edx),%esi
 876e3bf:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 876e3c5:	c1 ca 1b             	ror    $0x1b,%edx
 876e3c8:	8d b4 16 99 79 82 5a 	lea    0x5a827999(%esi,%edx,1),%esi
 876e3cf:	89 ca                	mov    %ecx,%edx
 876e3d1:	31 c2                	xor    %eax,%edx
 876e3d3:	21 fa                	and    %edi,%edx
 876e3d5:	31 ca                	xor    %ecx,%edx
 876e3d7:	8d 14 16             	lea    (%esi,%edx,1),%edx
 876e3da:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 876e3dd:	8b 55 08             	mov    0x8(%ebp),%edx
 876e3e0:	c1 cf 02             	ror    $0x2,%edi
 876e3e3:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 876e3e6:	8b 52 34             	mov    0x34(%edx),%edx
 876e3e9:	c1 ce 1b             	ror    $0x1b,%esi
 876e3ec:	89 95 28 ff ff ff    	mov    %edx,-0xd8(%ebp)
 876e3f2:	8d 94 11 99 79 82 5a 	lea    0x5a827999(%ecx,%edx,1),%edx
 876e3f9:	89 f9                	mov    %edi,%ecx
 876e3fb:	31 c1                	xor    %eax,%ecx
 876e3fd:	23 8d 64 ff ff ff    	and    -0x9c(%ebp),%ecx
 876e403:	31 c1                	xor    %eax,%ecx
 876e405:	8d 0c 0a             	lea    (%edx,%ecx,1),%ecx
 876e408:	8b 55 08             	mov    0x8(%ebp),%edx
 876e40b:	01 f1                	add    %esi,%ecx
 876e40d:	8b b5 64 ff ff ff    	mov    -0x9c(%ebp),%esi
 876e413:	8b 52 38             	mov    0x38(%edx),%edx
 876e416:	c1 ce 02             	ror    $0x2,%esi
 876e419:	8d 84 10 99 79 82 5a 	lea    0x5a827999(%eax,%edx,1),%eax
 876e420:	89 45 ac             	mov    %eax,-0x54(%ebp)
 876e423:	89 f0                	mov    %esi,%eax
 876e425:	31 f8                	xor    %edi,%eax
 876e427:	23 45 b4             	and    -0x4c(%ebp),%eax
 876e42a:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876e430:	89 ca                	mov    %ecx,%edx
 876e432:	c1 ca 1b             	ror    $0x1b,%edx
 876e435:	31 f8                	xor    %edi,%eax
 876e437:	03 45 ac             	add    -0x54(%ebp),%eax
 876e43a:	01 d0                	add    %edx,%eax
 876e43c:	8b 55 08             	mov    0x8(%ebp),%edx
 876e43f:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 876e442:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 876e445:	8b 52 3c             	mov    0x3c(%edx),%edx
 876e448:	c1 c8 02             	ror    $0x2,%eax
 876e44b:	89 95 30 ff ff ff    	mov    %edx,-0xd0(%ebp)
 876e451:	8d bc 17 99 79 82 5a 	lea    0x5a827999(%edi,%edx,1),%edi
 876e458:	89 c2                	mov    %eax,%edx
 876e45a:	31 f2                	xor    %esi,%edx
 876e45c:	21 ca                	and    %ecx,%edx
 876e45e:	31 f2                	xor    %esi,%edx
 876e460:	8d 14 17             	lea    (%edi,%edx,1),%edx
 876e463:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 876e466:	c1 c9 02             	ror    $0x2,%ecx
 876e469:	c1 cf 1b             	ror    $0x1b,%edi
 876e46c:	8d 3c 3a             	lea    (%edx,%edi,1),%edi
 876e46f:	8b 55 08             	mov    0x8(%ebp),%edx
 876e472:	8b 52 40             	mov    0x40(%edx),%edx
 876e475:	89 95 34 ff ff ff    	mov    %edx,-0xcc(%ebp)
 876e47b:	8d b4 16 99 79 82 5a 	lea    0x5a827999(%esi,%edx,1),%esi
 876e482:	89 ca                	mov    %ecx,%edx
 876e484:	31 c2                	xor    %eax,%edx
 876e486:	23 55 a4             	and    -0x5c(%ebp),%edx
 876e489:	31 c2                	xor    %eax,%edx
 876e48b:	8d 14 16             	lea    (%esi,%edx,1),%edx
 876e48e:	89 fe                	mov    %edi,%esi
 876e490:	c1 ce 1b             	ror    $0x1b,%esi
 876e493:	8d 34 32             	lea    (%edx,%esi,1),%esi
 876e496:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 876e499:	89 75 ac             	mov    %esi,-0x54(%ebp)
 876e49c:	8b 75 08             	mov    0x8(%ebp),%esi
 876e49f:	c1 ca 02             	ror    $0x2,%edx
 876e4a2:	8b 76 44             	mov    0x44(%esi),%esi
 876e4a5:	8d 84 30 99 79 82 5a 	lea    0x5a827999(%eax,%esi,1),%eax
 876e4ac:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 876e4af:	89 d0                	mov    %edx,%eax
 876e4b1:	89 b5 38 ff ff ff    	mov    %esi,-0xc8(%ebp)
 876e4b7:	31 c8                	xor    %ecx,%eax
 876e4b9:	8b 75 ac             	mov    -0x54(%ebp),%esi
 876e4bc:	21 f8                	and    %edi,%eax
 876e4be:	31 c8                	xor    %ecx,%eax
 876e4c0:	03 45 b4             	add    -0x4c(%ebp),%eax
 876e4c3:	c1 ce 1b             	ror    $0x1b,%esi
 876e4c6:	c1 cf 02             	ror    $0x2,%edi
 876e4c9:	8d 34 30             	lea    (%eax,%esi,1),%esi
 876e4cc:	8b 45 08             	mov    0x8(%ebp),%eax
 876e4cf:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 876e4d2:	c1 ce 1b             	ror    $0x1b,%esi
 876e4d5:	8b 40 48             	mov    0x48(%eax),%eax
 876e4d8:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 876e4de:	8d 84 01 99 79 82 5a 	lea    0x5a827999(%ecx,%eax,1),%eax
 876e4e5:	89 f9                	mov    %edi,%ecx
 876e4e7:	31 d1                	xor    %edx,%ecx
 876e4e9:	23 4d ac             	and    -0x54(%ebp),%ecx
 876e4ec:	31 d1                	xor    %edx,%ecx
 876e4ee:	8d 0c 08             	lea    (%eax,%ecx,1),%ecx
 876e4f1:	8b 45 08             	mov    0x8(%ebp),%eax
 876e4f4:	01 f1                	add    %esi,%ecx
 876e4f6:	8b 75 ac             	mov    -0x54(%ebp),%esi
 876e4f9:	8b 40 4c             	mov    0x4c(%eax),%eax
 876e4fc:	c1 ce 02             	ror    $0x2,%esi
 876e4ff:	8d 94 02 99 79 82 5a 	lea    0x5a827999(%edx,%eax,1),%edx
 876e506:	89 55 ac             	mov    %edx,-0x54(%ebp)
 876e509:	89 f2                	mov    %esi,%edx
 876e50b:	31 fa                	xor    %edi,%edx
 876e50d:	23 55 b4             	and    -0x4c(%ebp),%edx
 876e510:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 876e516:	89 c8                	mov    %ecx,%eax
 876e518:	c1 c8 1b             	ror    $0x1b,%eax
 876e51b:	31 fa                	xor    %edi,%edx
 876e51d:	03 55 ac             	add    -0x54(%ebp),%edx
 876e520:	01 c2                	add    %eax,%edx
 876e522:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 876e525:	89 55 ac             	mov    %edx,-0x54(%ebp)
 876e528:	8b 55 08             	mov    0x8(%ebp),%edx
 876e52b:	c1 c8 02             	ror    $0x2,%eax
 876e52e:	8b 52 50             	mov    0x50(%edx),%edx
 876e531:	89 95 44 ff ff ff    	mov    %edx,-0xbc(%ebp)
 876e537:	8d bc 17 99 79 82 5a 	lea    0x5a827999(%edi,%edx,1),%edi
 876e53e:	89 c2                	mov    %eax,%edx
 876e540:	31 f2                	xor    %esi,%edx
 876e542:	21 ca                	and    %ecx,%edx
 876e544:	31 f2                	xor    %esi,%edx
 876e546:	8d 14 17             	lea    (%edi,%edx,1),%edx
 876e549:	8b 7d ac             	mov    -0x54(%ebp),%edi
 876e54c:	c1 c9 02             	ror    $0x2,%ecx
 876e54f:	c1 cf 1b             	ror    $0x1b,%edi
 876e552:	8d 3c 3a             	lea    (%edx,%edi,1),%edi
 876e555:	8b 55 08             	mov    0x8(%ebp),%edx
 876e558:	8b 52 54             	mov    0x54(%edx),%edx
 876e55b:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 876e561:	8d b4 16 99 79 82 5a 	lea    0x5a827999(%esi,%edx,1),%esi
 876e568:	89 ca                	mov    %ecx,%edx
 876e56a:	31 c2                	xor    %eax,%edx
 876e56c:	23 55 ac             	and    -0x54(%ebp),%edx
 876e56f:	31 c2                	xor    %eax,%edx
 876e571:	8d 14 16             	lea    (%esi,%edx,1),%edx
 876e574:	89 fe                	mov    %edi,%esi
 876e576:	c1 ce 1b             	ror    $0x1b,%esi
 876e579:	8d 34 32             	lea    (%edx,%esi,1),%esi
 876e57c:	8b 55 ac             	mov    -0x54(%ebp),%edx
 876e57f:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 876e582:	8b 75 08             	mov    0x8(%ebp),%esi
 876e585:	c1 ca 02             	ror    $0x2,%edx
 876e588:	8b 76 58             	mov    0x58(%esi),%esi
 876e58b:	8d 84 30 99 79 82 5a 	lea    0x5a827999(%eax,%esi,1),%eax
 876e592:	89 b5 4c ff ff ff    	mov    %esi,-0xb4(%ebp)
 876e598:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 876e59b:	89 45 98             	mov    %eax,-0x68(%ebp)
 876e59e:	89 d0                	mov    %edx,%eax
 876e5a0:	31 c8                	xor    %ecx,%eax
 876e5a2:	21 f8                	and    %edi,%eax
 876e5a4:	31 c8                	xor    %ecx,%eax
 876e5a6:	03 45 98             	add    -0x68(%ebp),%eax
 876e5a9:	c1 ce 1b             	ror    $0x1b,%esi
 876e5ac:	c1 cf 02             	ror    $0x2,%edi
 876e5af:	01 f0                	add    %esi,%eax
 876e5b1:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 876e5b4:	89 45 98             	mov    %eax,-0x68(%ebp)
 876e5b7:	8b 45 08             	mov    0x8(%ebp),%eax
 876e5ba:	8b 40 5c             	mov    0x5c(%eax),%eax
 876e5bd:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 876e5c3:	8d 8c 01 99 79 82 5a 	lea    0x5a827999(%ecx,%eax,1),%ecx
 876e5ca:	89 f8                	mov    %edi,%eax
 876e5cc:	31 d0                	xor    %edx,%eax
 876e5ce:	23 45 b4             	and    -0x4c(%ebp),%eax
 876e5d1:	c1 ce 02             	ror    $0x2,%esi
 876e5d4:	31 d0                	xor    %edx,%eax
 876e5d6:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 876e5d9:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 876e5dc:	c1 c9 1b             	ror    $0x1b,%ecx
 876e5df:	8d 0c 08             	lea    (%eax,%ecx,1),%ecx
 876e5e2:	8b 45 08             	mov    0x8(%ebp),%eax
 876e5e5:	8b 40 60             	mov    0x60(%eax),%eax
 876e5e8:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 876e5ee:	8d 94 02 99 79 82 5a 	lea    0x5a827999(%edx,%eax,1),%edx
 876e5f5:	89 f0                	mov    %esi,%eax
 876e5f7:	31 f8                	xor    %edi,%eax
 876e5f9:	23 45 98             	and    -0x68(%ebp),%eax
 876e5fc:	31 f8                	xor    %edi,%eax
 876e5fe:	8d 04 02             	lea    (%edx,%eax,1),%eax
 876e601:	89 ca                	mov    %ecx,%edx
 876e603:	c1 ca 1b             	ror    $0x1b,%edx
 876e606:	8d 14 10             	lea    (%eax,%edx,1),%edx
 876e609:	8b 45 98             	mov    -0x68(%ebp),%eax
 876e60c:	89 55 b0             	mov    %edx,-0x50(%ebp)
 876e60f:	8b 55 08             	mov    0x8(%ebp),%edx
 876e612:	c1 c8 02             	ror    $0x2,%eax
 876e615:	8b 52 64             	mov    0x64(%edx),%edx
 876e618:	8d bc 17 99 79 82 5a 	lea    0x5a827999(%edi,%edx,1),%edi
 876e61f:	89 7d 98             	mov    %edi,-0x68(%ebp)
 876e622:	89 c7                	mov    %eax,%edi
 876e624:	89 95 58 ff ff ff    	mov    %edx,-0xa8(%ebp)
 876e62a:	31 f7                	xor    %esi,%edi
 876e62c:	8b 55 b0             	mov    -0x50(%ebp),%edx
 876e62f:	21 cf                	and    %ecx,%edi
 876e631:	31 f7                	xor    %esi,%edi
 876e633:	03 7d 98             	add    -0x68(%ebp),%edi
 876e636:	c1 ca 1b             	ror    $0x1b,%edx
 876e639:	c1 c9 02             	ror    $0x2,%ecx
 876e63c:	01 d7                	add    %edx,%edi
 876e63e:	8b 55 b0             	mov    -0x50(%ebp),%edx
 876e641:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 876e644:	8b 7d 08             	mov    0x8(%ebp),%edi
 876e647:	c1 ca 02             	ror    $0x2,%edx
 876e64a:	8b 7f 68             	mov    0x68(%edi),%edi
 876e64d:	89 bd 5c ff ff ff    	mov    %edi,-0xa4(%ebp)
 876e653:	8d bc 3e 99 79 82 5a 	lea    0x5a827999(%esi,%edi,1),%edi
 876e65a:	89 ce                	mov    %ecx,%esi
 876e65c:	31 c6                	xor    %eax,%esi
 876e65e:	23 75 b0             	and    -0x50(%ebp),%esi
 876e661:	31 c6                	xor    %eax,%esi
 876e663:	8d 34 37             	lea    (%edi,%esi,1),%esi
 876e666:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 876e669:	c1 cf 1b             	ror    $0x1b,%edi
 876e66c:	01 fe                	add    %edi,%esi
 876e66e:	8b 7d 08             	mov    0x8(%ebp),%edi
 876e671:	8b 7f 6c             	mov    0x6c(%edi),%edi
 876e674:	8d 84 38 99 79 82 5a 	lea    0x5a827999(%eax,%edi,1),%eax
 876e67b:	89 45 b0             	mov    %eax,-0x50(%ebp)
 876e67e:	89 d0                	mov    %edx,%eax
 876e680:	31 c8                	xor    %ecx,%eax
 876e682:	23 45 b4             	and    -0x4c(%ebp),%eax
 876e685:	89 bd 60 ff ff ff    	mov    %edi,-0xa0(%ebp)
 876e68b:	89 f7                	mov    %esi,%edi
 876e68d:	c1 cf 1b             	ror    $0x1b,%edi
 876e690:	31 c8                	xor    %ecx,%eax
 876e692:	03 45 b0             	add    -0x50(%ebp),%eax
 876e695:	8d 3c 38             	lea    (%eax,%edi,1),%edi
 876e698:	89 7d ac             	mov    %edi,-0x54(%ebp)
 876e69b:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 876e6a1:	33 85 24 ff ff ff    	xor    -0xdc(%ebp),%eax
 876e6a7:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 876e6aa:	89 45 84             	mov    %eax,-0x7c(%ebp)
 876e6ad:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 876e6b3:	31 45 84             	xor    %eax,-0x7c(%ebp)
 876e6b6:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 876e6bc:	c1 cf 02             	ror    $0x2,%edi
 876e6bf:	31 45 84             	xor    %eax,-0x7c(%ebp)
 876e6c2:	c1 4d 84 1f          	rorl   $0x1f,-0x7c(%ebp)
 876e6c6:	8b 45 84             	mov    -0x7c(%ebp),%eax
 876e6c9:	8d 8c 01 99 79 82 5a 	lea    0x5a827999(%ecx,%eax,1),%ecx
 876e6d0:	8b 45 ac             	mov    -0x54(%ebp),%eax
 876e6d3:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 876e6d6:	89 f9                	mov    %edi,%ecx
 876e6d8:	31 d1                	xor    %edx,%ecx
 876e6da:	21 f1                	and    %esi,%ecx
 876e6dc:	31 d1                	xor    %edx,%ecx
 876e6de:	03 4d b4             	add    -0x4c(%ebp),%ecx
 876e6e1:	c1 c8 1b             	ror    $0x1b,%eax
 876e6e4:	c1 ce 02             	ror    $0x2,%esi
 876e6e7:	01 c1                	add    %eax,%ecx
 876e6e9:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 876e6ef:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 876e6f2:	8b 8d 30 ff ff ff    	mov    -0xd0(%ebp),%ecx
 876e6f8:	33 8d 28 ff ff ff    	xor    -0xd8(%ebp),%ecx
 876e6fe:	31 c1                	xor    %eax,%ecx
 876e700:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 876e706:	31 c1                	xor    %eax,%ecx
 876e708:	8b 45 ac             	mov    -0x54(%ebp),%eax
 876e70b:	c1 c9 1f             	ror    $0x1f,%ecx
 876e70e:	89 4d 88             	mov    %ecx,-0x78(%ebp)
 876e711:	8d 8c 0a 99 79 82 5a 	lea    0x5a827999(%edx,%ecx,1),%ecx
 876e718:	89 f2                	mov    %esi,%edx
 876e71a:	31 fa                	xor    %edi,%edx
 876e71c:	23 55 ac             	and    -0x54(%ebp),%edx
 876e71f:	c1 c8 02             	ror    $0x2,%eax
 876e722:	31 fa                	xor    %edi,%edx
 876e724:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 876e727:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 876e72a:	c1 c9 1b             	ror    $0x1b,%ecx
 876e72d:	8d 0c 0a             	lea    (%edx,%ecx,1),%ecx
 876e730:	8b 95 34 ff ff ff    	mov    -0xcc(%ebp),%edx
 876e736:	89 4d b0             	mov    %ecx,-0x50(%ebp)
 876e739:	8b 8d 4c ff ff ff    	mov    -0xb4(%ebp),%ecx
 876e73f:	33 95 2c ff ff ff    	xor    -0xd4(%ebp),%edx
 876e745:	31 ca                	xor    %ecx,%edx
 876e747:	8b 8d 60 ff ff ff    	mov    -0xa0(%ebp),%ecx
 876e74d:	31 ca                	xor    %ecx,%edx
 876e74f:	89 c1                	mov    %eax,%ecx
 876e751:	31 f1                	xor    %esi,%ecx
 876e753:	23 4d b4             	and    -0x4c(%ebp),%ecx
 876e756:	c1 ca 1f             	ror    $0x1f,%edx
 876e759:	8d bc 17 99 79 82 5a 	lea    0x5a827999(%edi,%edx,1),%edi
 876e760:	31 f1                	xor    %esi,%ecx
 876e762:	8d 0c 0f             	lea    (%edi,%ecx,1),%ecx
 876e765:	8b 7d b0             	mov    -0x50(%ebp),%edi
 876e768:	89 55 9c             	mov    %edx,-0x64(%ebp)
 876e76b:	8b 95 38 ff ff ff    	mov    -0xc8(%ebp),%edx
 876e771:	33 95 30 ff ff ff    	xor    -0xd0(%ebp),%edx
 876e777:	c1 cf 1b             	ror    $0x1b,%edi
 876e77a:	8d 3c 39             	lea    (%ecx,%edi,1),%edi
 876e77d:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 876e780:	89 55 94             	mov    %edx,-0x6c(%ebp)
 876e783:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 876e789:	31 55 94             	xor    %edx,-0x6c(%ebp)
 876e78c:	8b 55 84             	mov    -0x7c(%ebp),%edx
 876e78f:	31 55 94             	xor    %edx,-0x6c(%ebp)
 876e792:	c1 4d 94 1f          	rorl   $0x1f,-0x6c(%ebp)
 876e796:	8b 55 94             	mov    -0x6c(%ebp),%edx
 876e799:	c1 c9 02             	ror    $0x2,%ecx
 876e79c:	8d b4 16 99 79 82 5a 	lea    0x5a827999(%esi,%edx,1),%esi
 876e7a3:	89 fa                	mov    %edi,%edx
 876e7a5:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 876e7a8:	89 ce                	mov    %ecx,%esi
 876e7aa:	31 c6                	xor    %eax,%esi
 876e7ac:	23 75 b0             	and    -0x50(%ebp),%esi
 876e7af:	31 c6                	xor    %eax,%esi
 876e7b1:	03 75 b4             	add    -0x4c(%ebp),%esi
 876e7b4:	c1 ca 1b             	ror    $0x1b,%edx
 876e7b7:	01 d6                	add    %edx,%esi
 876e7b9:	8b 55 b0             	mov    -0x50(%ebp),%edx
 876e7bc:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 876e7bf:	8b b5 3c ff ff ff    	mov    -0xc4(%ebp),%esi
 876e7c5:	33 b5 34 ff ff ff    	xor    -0xcc(%ebp),%esi
 876e7cb:	c1 ca 02             	ror    $0x2,%edx
 876e7ce:	89 75 80             	mov    %esi,-0x80(%ebp)
 876e7d1:	8b b5 54 ff ff ff    	mov    -0xac(%ebp),%esi
 876e7d7:	31 75 80             	xor    %esi,-0x80(%ebp)
 876e7da:	8b 75 88             	mov    -0x78(%ebp),%esi
 876e7dd:	31 75 80             	xor    %esi,-0x80(%ebp)
 876e7e0:	c1 4d 80 1f          	rorl   $0x1f,-0x80(%ebp)
 876e7e4:	8b 75 80             	mov    -0x80(%ebp),%esi
 876e7e7:	8d 84 30 a1 eb d9 6e 	lea    0x6ed9eba1(%eax,%esi,1),%eax
 876e7ee:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 876e7f1:	89 45 b0             	mov    %eax,-0x50(%ebp)
 876e7f4:	89 d0                	mov    %edx,%eax
 876e7f6:	31 c8                	xor    %ecx,%eax
 876e7f8:	31 f8                	xor    %edi,%eax
 876e7fa:	03 45 b0             	add    -0x50(%ebp),%eax
 876e7fd:	c1 ce 1b             	ror    $0x1b,%esi
 876e800:	c1 cf 02             	ror    $0x2,%edi
 876e803:	8d 34 30             	lea    (%eax,%esi,1),%esi
 876e806:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 876e80c:	33 85 38 ff ff ff    	xor    -0xc8(%ebp),%eax
 876e812:	89 45 a8             	mov    %eax,-0x58(%ebp)
 876e815:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 876e81b:	31 45 a8             	xor    %eax,-0x58(%ebp)
 876e81e:	8b 45 9c             	mov    -0x64(%ebp),%eax
 876e821:	31 45 a8             	xor    %eax,-0x58(%ebp)
 876e824:	c1 4d a8 1f          	rorl   $0x1f,-0x58(%ebp)
 876e828:	8b 45 a8             	mov    -0x58(%ebp),%eax
 876e82b:	8d 8c 01 a1 eb d9 6e 	lea    0x6ed9eba1(%ecx,%eax,1),%ecx
 876e832:	89 f8                	mov    %edi,%eax
 876e834:	31 d0                	xor    %edx,%eax
 876e836:	33 45 b4             	xor    -0x4c(%ebp),%eax
 876e839:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 876e83c:	89 f1                	mov    %esi,%ecx
 876e83e:	c1 c9 1b             	ror    $0x1b,%ecx
 876e841:	8d 0c 08             	lea    (%eax,%ecx,1),%ecx
 876e844:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 876e84a:	33 85 3c ff ff ff    	xor    -0xc4(%ebp),%eax
 876e850:	89 4d ac             	mov    %ecx,-0x54(%ebp)
 876e853:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 876e856:	89 45 b0             	mov    %eax,-0x50(%ebp)
 876e859:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 876e85f:	31 45 b0             	xor    %eax,-0x50(%ebp)
 876e862:	8b 45 94             	mov    -0x6c(%ebp),%eax
 876e865:	c1 c9 02             	ror    $0x2,%ecx
 876e868:	31 45 b0             	xor    %eax,-0x50(%ebp)
 876e86b:	c1 4d b0 1f          	rorl   $0x1f,-0x50(%ebp)
 876e86f:	8b 45 b0             	mov    -0x50(%ebp),%eax
 876e872:	8d 94 02 a1 eb d9 6e 	lea    0x6ed9eba1(%edx,%eax,1),%edx
 876e879:	8b 45 ac             	mov    -0x54(%ebp),%eax
 876e87c:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 876e87f:	89 ca                	mov    %ecx,%edx
 876e881:	31 fa                	xor    %edi,%edx
 876e883:	31 f2                	xor    %esi,%edx
 876e885:	03 55 b4             	add    -0x4c(%ebp),%edx
 876e888:	c1 c8 1b             	ror    $0x1b,%eax
 876e88b:	c1 ce 02             	ror    $0x2,%esi
 876e88e:	01 c2                	add    %eax,%edx
 876e890:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 876e896:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 876e899:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 876e89f:	33 95 40 ff ff ff    	xor    -0xc0(%ebp),%edx
 876e8a5:	31 c2                	xor    %eax,%edx
 876e8a7:	8b 45 80             	mov    -0x80(%ebp),%eax
 876e8aa:	31 c2                	xor    %eax,%edx
 876e8ac:	8b 45 ac             	mov    -0x54(%ebp),%eax
 876e8af:	c1 ca 1f             	ror    $0x1f,%edx
 876e8b2:	89 55 8c             	mov    %edx,-0x74(%ebp)
 876e8b5:	8d bc 17 a1 eb d9 6e 	lea    0x6ed9eba1(%edi,%edx,1),%edi
 876e8bc:	89 f2                	mov    %esi,%edx
 876e8be:	31 ca                	xor    %ecx,%edx
 876e8c0:	33 55 ac             	xor    -0x54(%ebp),%edx
 876e8c3:	c1 c8 02             	ror    $0x2,%eax
 876e8c6:	8d 14 17             	lea    (%edi,%edx,1),%edx
 876e8c9:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 876e8cc:	c1 cf 1b             	ror    $0x1b,%edi
 876e8cf:	8d 3c 3a             	lea    (%edx,%edi,1),%edi
 876e8d2:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 876e8d8:	33 95 44 ff ff ff    	xor    -0xbc(%ebp),%edx
 876e8de:	89 55 a0             	mov    %edx,-0x60(%ebp)
 876e8e1:	8b 55 84             	mov    -0x7c(%ebp),%edx
 876e8e4:	31 55 a0             	xor    %edx,-0x60(%ebp)
 876e8e7:	8b 55 a8             	mov    -0x58(%ebp),%edx
 876e8ea:	31 55 a0             	xor    %edx,-0x60(%ebp)
 876e8ed:	c1 4d a0 1f          	rorl   $0x1f,-0x60(%ebp)
 876e8f1:	8b 55 a0             	mov    -0x60(%ebp),%edx
 876e8f4:	8d 8c 11 a1 eb d9 6e 	lea    0x6ed9eba1(%ecx,%edx,1),%ecx
 876e8fb:	89 c2                	mov    %eax,%edx
 876e8fd:	31 f2                	xor    %esi,%edx
 876e8ff:	33 55 b4             	xor    -0x4c(%ebp),%edx
 876e902:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 876e905:	89 f9                	mov    %edi,%ecx
 876e907:	c1 c9 1b             	ror    $0x1b,%ecx
 876e90a:	8d 0c 0a             	lea    (%edx,%ecx,1),%ecx
 876e90d:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 876e910:	89 4d 98             	mov    %ecx,-0x68(%ebp)
 876e913:	8b 8d 50 ff ff ff    	mov    -0xb0(%ebp),%ecx
 876e919:	33 8d 48 ff ff ff    	xor    -0xb8(%ebp),%ecx
 876e91f:	c1 ca 02             	ror    $0x2,%edx
 876e922:	89 4d a4             	mov    %ecx,-0x5c(%ebp)
 876e925:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 876e928:	31 4d a4             	xor    %ecx,-0x5c(%ebp)
 876e92b:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 876e92e:	31 4d a4             	xor    %ecx,-0x5c(%ebp)
 876e931:	c1 4d a4 1f          	rorl   $0x1f,-0x5c(%ebp)
 876e935:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 876e938:	8d b4 0e a1 eb d9 6e 	lea    0x6ed9eba1(%esi,%ecx,1),%esi
 876e93f:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 876e942:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 876e945:	89 d6                	mov    %edx,%esi
 876e947:	31 c6                	xor    %eax,%esi
 876e949:	31 fe                	xor    %edi,%esi
 876e94b:	03 75 b4             	add    -0x4c(%ebp),%esi
 876e94e:	c1 c9 1b             	ror    $0x1b,%ecx
 876e951:	c1 cf 02             	ror    $0x2,%edi
 876e954:	01 ce                	add    %ecx,%esi
 876e956:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 876e959:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 876e95c:	8b b5 54 ff ff ff    	mov    -0xac(%ebp),%esi
 876e962:	33 b5 4c ff ff ff    	xor    -0xb4(%ebp),%esi
 876e968:	31 ce                	xor    %ecx,%esi
 876e96a:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 876e96d:	31 ce                	xor    %ecx,%esi
 876e96f:	c1 ce 1f             	ror    $0x1f,%esi
 876e972:	89 75 ac             	mov    %esi,-0x54(%ebp)
 876e975:	8d b4 30 a1 eb d9 6e 	lea    0x6ed9eba1(%eax,%esi,1),%esi
 876e97c:	89 f8                	mov    %edi,%eax
 876e97e:	31 d0                	xor    %edx,%eax
 876e980:	33 45 98             	xor    -0x68(%ebp),%eax
 876e983:	8d 04 06             	lea    (%esi,%eax,1),%eax
 876e986:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 876e989:	c1 ce 1b             	ror    $0x1b,%esi
 876e98c:	8d 34 30             	lea    (%eax,%esi,1),%esi
 876e98f:	89 75 90             	mov    %esi,-0x70(%ebp)
 876e992:	8b 45 94             	mov    -0x6c(%ebp),%eax
 876e995:	8b b5 58 ff ff ff    	mov    -0xa8(%ebp),%esi
 876e99b:	33 b5 50 ff ff ff    	xor    -0xb0(%ebp),%esi
 876e9a1:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 876e9a4:	31 c6                	xor    %eax,%esi
 876e9a6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 876e9a9:	c1 c9 02             	ror    $0x2,%ecx
 876e9ac:	31 c6                	xor    %eax,%esi
 876e9ae:	c1 ce 1f             	ror    $0x1f,%esi
 876e9b1:	8d 84 32 a1 eb d9 6e 	lea    0x6ed9eba1(%edx,%esi,1),%eax
 876e9b8:	89 ca                	mov    %ecx,%edx
 876e9ba:	89 b5 70 ff ff ff    	mov    %esi,-0x90(%ebp)
 876e9c0:	8b 75 90             	mov    -0x70(%ebp),%esi
 876e9c3:	31 fa                	xor    %edi,%edx
 876e9c5:	33 55 b4             	xor    -0x4c(%ebp),%edx
 876e9c8:	c1 ce 1b             	ror    $0x1b,%esi
 876e9cb:	8d 14 10             	lea    (%eax,%edx,1),%edx
 876e9ce:	8b 45 80             	mov    -0x80(%ebp),%eax
 876e9d1:	8d 34 32             	lea    (%edx,%esi,1),%esi
 876e9d4:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 876e9da:	33 95 54 ff ff ff    	xor    -0xac(%ebp),%edx
 876e9e0:	89 75 98             	mov    %esi,-0x68(%ebp)
 876e9e3:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 876e9e6:	31 c2                	xor    %eax,%edx
 876e9e8:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 876e9eb:	c1 ce 02             	ror    $0x2,%esi
 876e9ee:	31 c2                	xor    %eax,%edx
 876e9f0:	8b 45 90             	mov    -0x70(%ebp),%eax
 876e9f3:	c1 ca 1f             	ror    $0x1f,%edx
 876e9f6:	89 95 74 ff ff ff    	mov    %edx,-0x8c(%ebp)
 876e9fc:	8d 94 17 a1 eb d9 6e 	lea    0x6ed9eba1(%edi,%edx,1),%edx
 876ea03:	89 f7                	mov    %esi,%edi
 876ea05:	31 cf                	xor    %ecx,%edi
 876ea07:	33 7d 90             	xor    -0x70(%ebp),%edi
 876ea0a:	c1 c8 02             	ror    $0x2,%eax
 876ea0d:	01 d7                	add    %edx,%edi
 876ea0f:	8b 55 98             	mov    -0x68(%ebp),%edx
 876ea12:	c1 ca 1b             	ror    $0x1b,%edx
 876ea15:	01 d7                	add    %edx,%edi
 876ea17:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 876ea1d:	33 95 58 ff ff ff    	xor    -0xa8(%ebp),%edx
 876ea23:	89 95 78 ff ff ff    	mov    %edx,-0x88(%ebp)
 876ea29:	8b 55 a8             	mov    -0x58(%ebp),%edx
 876ea2c:	31 95 78 ff ff ff    	xor    %edx,-0x88(%ebp)
 876ea32:	8b 55 ac             	mov    -0x54(%ebp),%edx
 876ea35:	31 95 78 ff ff ff    	xor    %edx,-0x88(%ebp)
 876ea3b:	c1 8d 78 ff ff ff 1f 	rorl   $0x1f,-0x88(%ebp)
 876ea42:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 876ea48:	8d 8c 11 a1 eb d9 6e 	lea    0x6ed9eba1(%ecx,%edx,1),%ecx
 876ea4f:	89 fa                	mov    %edi,%edx
 876ea51:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 876ea54:	89 c1                	mov    %eax,%ecx
 876ea56:	31 f1                	xor    %esi,%ecx
 876ea58:	33 4d 98             	xor    -0x68(%ebp),%ecx
 876ea5b:	03 4d b4             	add    -0x4c(%ebp),%ecx
 876ea5e:	c1 ca 1b             	ror    $0x1b,%edx
 876ea61:	01 d1                	add    %edx,%ecx
 876ea63:	89 4d 90             	mov    %ecx,-0x70(%ebp)
 876ea66:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 876ea69:	33 8d 5c ff ff ff    	xor    -0xa4(%ebp),%ecx
 876ea6f:	8b 55 98             	mov    -0x68(%ebp),%edx
 876ea72:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
 876ea78:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 876ea7b:	31 8d 7c ff ff ff    	xor    %ecx,-0x84(%ebp)
 876ea81:	8b 8d 70 ff ff ff    	mov    -0x90(%ebp),%ecx
 876ea87:	c1 ca 02             	ror    $0x2,%edx
 876ea8a:	31 8d 7c ff ff ff    	xor    %ecx,-0x84(%ebp)
 876ea90:	c1 8d 7c ff ff ff 1f 	rorl   $0x1f,-0x84(%ebp)
 876ea97:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
 876ea9d:	8d b4 0e a1 eb d9 6e 	lea    0x6ed9eba1(%esi,%ecx,1),%esi
 876eaa4:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 876eaa7:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 876eaaa:	89 d6                	mov    %edx,%esi
 876eaac:	31 c6                	xor    %eax,%esi
 876eaae:	31 fe                	xor    %edi,%esi
 876eab0:	03 75 b4             	add    -0x4c(%ebp),%esi
 876eab3:	c1 c9 1b             	ror    $0x1b,%ecx
 876eab6:	c1 cf 02             	ror    $0x2,%edi
 876eab9:	01 ce                	add    %ecx,%esi
 876eabb:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 876eabe:	33 8d 60 ff ff ff    	xor    -0xa0(%ebp),%ecx
 876eac4:	89 4d 98             	mov    %ecx,-0x68(%ebp)
 876eac7:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 876eaca:	31 4d 98             	xor    %ecx,-0x68(%ebp)
 876eacd:	8b 8d 74 ff ff ff    	mov    -0x8c(%ebp),%ecx
 876ead3:	31 4d 98             	xor    %ecx,-0x68(%ebp)
 876ead6:	c1 4d 98 1f          	rorl   $0x1f,-0x68(%ebp)
 876eada:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 876eadd:	8d 84 08 a1 eb d9 6e 	lea    0x6ed9eba1(%eax,%ecx,1),%eax
 876eae4:	89 f1                	mov    %esi,%ecx
 876eae6:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 876eae9:	89 f8                	mov    %edi,%eax
 876eaeb:	31 d0                	xor    %edx,%eax
 876eaed:	33 45 90             	xor    -0x70(%ebp),%eax
 876eaf0:	03 45 b4             	add    -0x4c(%ebp),%eax
 876eaf3:	c1 c9 1b             	ror    $0x1b,%ecx
 876eaf6:	01 c8                	add    %ecx,%eax
 876eaf8:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 876eafb:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 876eb01:	8b 45 9c             	mov    -0x64(%ebp),%eax
 876eb04:	33 45 84             	xor    -0x7c(%ebp),%eax
 876eb07:	c1 c9 02             	ror    $0x2,%ecx
 876eb0a:	89 45 84             	mov    %eax,-0x7c(%ebp)
 876eb0d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 876eb10:	31 45 84             	xor    %eax,-0x7c(%ebp)
 876eb13:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 876eb19:	31 45 84             	xor    %eax,-0x7c(%ebp)
 876eb1c:	c1 4d 84 1f          	rorl   $0x1f,-0x7c(%ebp)
 876eb20:	8b 45 84             	mov    -0x7c(%ebp),%eax
 876eb23:	8d 94 02 a1 eb d9 6e 	lea    0x6ed9eba1(%edx,%eax,1),%edx
 876eb2a:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 876eb30:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 876eb33:	89 ca                	mov    %ecx,%edx
 876eb35:	31 fa                	xor    %edi,%edx
 876eb37:	31 f2                	xor    %esi,%edx
 876eb39:	03 55 b4             	add    -0x4c(%ebp),%edx
 876eb3c:	c1 c8 1b             	ror    $0x1b,%eax
 876eb3f:	c1 ce 02             	ror    $0x2,%esi
 876eb42:	01 c2                	add    %eax,%edx
 876eb44:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 876eb47:	89 55 90             	mov    %edx,-0x70(%ebp)
 876eb4a:	8b 55 94             	mov    -0x6c(%ebp),%edx
 876eb4d:	33 55 88             	xor    -0x78(%ebp),%edx
 876eb50:	31 c2                	xor    %eax,%edx
 876eb52:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 876eb58:	31 c2                	xor    %eax,%edx
 876eb5a:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 876eb60:	c1 ca 1f             	ror    $0x1f,%edx
 876eb63:	89 55 88             	mov    %edx,-0x78(%ebp)
 876eb66:	8d 94 17 a1 eb d9 6e 	lea    0x6ed9eba1(%edi,%edx,1),%edx
 876eb6d:	89 f7                	mov    %esi,%edi
 876eb6f:	31 cf                	xor    %ecx,%edi
 876eb71:	33 bd 6c ff ff ff    	xor    -0x94(%ebp),%edi
 876eb77:	c1 c8 02             	ror    $0x2,%eax
 876eb7a:	01 d7                	add    %edx,%edi
 876eb7c:	8b 55 90             	mov    -0x70(%ebp),%edx
 876eb7f:	c1 ca 1b             	ror    $0x1b,%edx
 876eb82:	01 d7                	add    %edx,%edi
 876eb84:	8b 55 80             	mov    -0x80(%ebp),%edx
 876eb87:	33 55 9c             	xor    -0x64(%ebp),%edx
 876eb8a:	89 55 9c             	mov    %edx,-0x64(%ebp)
 876eb8d:	8b 55 ac             	mov    -0x54(%ebp),%edx
 876eb90:	31 55 9c             	xor    %edx,-0x64(%ebp)
 876eb93:	8b 55 98             	mov    -0x68(%ebp),%edx
 876eb96:	31 55 9c             	xor    %edx,-0x64(%ebp)
 876eb99:	c1 4d 9c 1f          	rorl   $0x1f,-0x64(%ebp)
 876eb9d:	8b 55 9c             	mov    -0x64(%ebp),%edx
 876eba0:	8d 8c 11 a1 eb d9 6e 	lea    0x6ed9eba1(%ecx,%edx,1),%ecx
 876eba7:	89 fa                	mov    %edi,%edx
 876eba9:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 876ebac:	89 c1                	mov    %eax,%ecx
 876ebae:	31 f1                	xor    %esi,%ecx
 876ebb0:	33 4d 90             	xor    -0x70(%ebp),%ecx
 876ebb3:	03 4d b4             	add    -0x4c(%ebp),%ecx
 876ebb6:	c1 ca 1b             	ror    $0x1b,%edx
 876ebb9:	01 d1                	add    %edx,%ecx
 876ebbb:	8b 55 90             	mov    -0x70(%ebp),%edx
 876ebbe:	89 8d 6c ff ff ff    	mov    %ecx,-0x94(%ebp)
 876ebc4:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 876ebc7:	33 4d 94             	xor    -0x6c(%ebp),%ecx
 876ebca:	c1 ca 02             	ror    $0x2,%edx
 876ebcd:	89 4d 94             	mov    %ecx,-0x6c(%ebp)
 876ebd0:	8b 8d 70 ff ff ff    	mov    -0x90(%ebp),%ecx
 876ebd6:	31 4d 94             	xor    %ecx,-0x6c(%ebp)
 876ebd9:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 876ebdc:	31 4d 94             	xor    %ecx,-0x6c(%ebp)
 876ebdf:	c1 4d 94 1f          	rorl   $0x1f,-0x6c(%ebp)
 876ebe3:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 876ebe6:	8d b4 0e a1 eb d9 6e 	lea    0x6ed9eba1(%esi,%ecx,1),%esi
 876ebed:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 876ebf3:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 876ebf6:	89 d6                	mov    %edx,%esi
 876ebf8:	31 c6                	xor    %eax,%esi
 876ebfa:	31 fe                	xor    %edi,%esi
 876ebfc:	03 75 b4             	add    -0x4c(%ebp),%esi
 876ebff:	c1 c9 1b             	ror    $0x1b,%ecx
 876ec02:	c1 cf 02             	ror    $0x2,%edi
 876ec05:	01 ce                	add    %ecx,%esi
 876ec07:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 876ec0a:	33 4d 80             	xor    -0x80(%ebp),%ecx
 876ec0d:	89 4d 80             	mov    %ecx,-0x80(%ebp)
 876ec10:	8b 8d 74 ff ff ff    	mov    -0x8c(%ebp),%ecx
 876ec16:	31 4d 80             	xor    %ecx,-0x80(%ebp)
 876ec19:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 876ec1c:	31 4d 80             	xor    %ecx,-0x80(%ebp)
 876ec1f:	c1 4d 80 1f          	rorl   $0x1f,-0x80(%ebp)
 876ec23:	8b 4d 80             	mov    -0x80(%ebp),%ecx
 876ec26:	8d 84 08 a1 eb d9 6e 	lea    0x6ed9eba1(%eax,%ecx,1),%eax
 876ec2d:	89 f1                	mov    %esi,%ecx
 876ec2f:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 876ec32:	89 f8                	mov    %edi,%eax
 876ec34:	31 d0                	xor    %edx,%eax
 876ec36:	33 85 6c ff ff ff    	xor    -0x94(%ebp),%eax
 876ec3c:	03 45 b4             	add    -0x4c(%ebp),%eax
 876ec3f:	c1 c9 1b             	ror    $0x1b,%ecx
 876ec42:	01 c8                	add    %ecx,%eax
 876ec44:	89 45 90             	mov    %eax,-0x70(%ebp)
 876ec47:	8b 45 8c             	mov    -0x74(%ebp),%eax
 876ec4a:	33 45 a8             	xor    -0x58(%ebp),%eax
 876ec4d:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 876ec53:	89 45 a8             	mov    %eax,-0x58(%ebp)
 876ec56:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 876ec5c:	31 45 a8             	xor    %eax,-0x58(%ebp)
 876ec5f:	8b 45 9c             	mov    -0x64(%ebp),%eax
 876ec62:	c1 c9 02             	ror    $0x2,%ecx
 876ec65:	31 45 a8             	xor    %eax,-0x58(%ebp)
 876ec68:	c1 4d a8 1f          	rorl   $0x1f,-0x58(%ebp)
 876ec6c:	8b 45 a8             	mov    -0x58(%ebp),%eax
 876ec6f:	8d 94 02 a1 eb d9 6e 	lea    0x6ed9eba1(%edx,%eax,1),%edx
 876ec76:	8b 45 90             	mov    -0x70(%ebp),%eax
 876ec79:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 876ec7c:	89 ca                	mov    %ecx,%edx
 876ec7e:	31 fa                	xor    %edi,%edx
 876ec80:	31 f2                	xor    %esi,%edx
 876ec82:	03 55 b4             	add    -0x4c(%ebp),%edx
 876ec85:	c1 c8 1b             	ror    $0x1b,%eax
 876ec88:	c1 ce 02             	ror    $0x2,%esi
 876ec8b:	01 c2                	add    %eax,%edx
 876ec8d:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 876ec93:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 876ec96:	8b 55 a0             	mov    -0x60(%ebp),%edx
 876ec99:	33 55 b0             	xor    -0x50(%ebp),%edx
 876ec9c:	31 c2                	xor    %eax,%edx
 876ec9e:	8b 45 94             	mov    -0x6c(%ebp),%eax
 876eca1:	31 c2                	xor    %eax,%edx
 876eca3:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 876eca6:	c1 ca 1f             	ror    $0x1f,%edx
 876eca9:	89 55 b0             	mov    %edx,-0x50(%ebp)
 876ecac:	8d bc 17 a1 eb d9 6e 	lea    0x6ed9eba1(%edi,%edx,1),%edi
 876ecb3:	89 f2                	mov    %esi,%edx
 876ecb5:	31 ca                	xor    %ecx,%edx
 876ecb7:	33 55 90             	xor    -0x70(%ebp),%edx
 876ecba:	33 45 8c             	xor    -0x74(%ebp),%eax
 876ecbd:	01 d7                	add    %edx,%edi
 876ecbf:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 876ecc2:	c1 ca 1b             	ror    $0x1b,%edx
 876ecc5:	01 d7                	add    %edx,%edi
 876ecc7:	8b 55 90             	mov    -0x70(%ebp),%edx
 876ecca:	c1 ca 02             	ror    $0x2,%edx
 876eccd:	89 95 6c ff ff ff    	mov    %edx,-0x94(%ebp)
 876ecd3:	8b 55 98             	mov    -0x68(%ebp),%edx
 876ecd6:	31 d0                	xor    %edx,%eax
 876ecd8:	8b 55 80             	mov    -0x80(%ebp),%edx
 876ecdb:	31 d0                	xor    %edx,%eax
 876ecdd:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 876ece3:	c1 c8 1f             	ror    $0x1f,%eax
 876ece6:	8d 8c 01 a1 eb d9 6e 	lea    0x6ed9eba1(%ecx,%eax,1),%ecx
 876eced:	89 45 8c             	mov    %eax,-0x74(%ebp)
 876ecf0:	31 f2                	xor    %esi,%edx
 876ecf2:	33 55 b4             	xor    -0x4c(%ebp),%edx
 876ecf5:	01 d1                	add    %edx,%ecx
 876ecf7:	89 fa                	mov    %edi,%edx
 876ecf9:	c1 ca 1b             	ror    $0x1b,%edx
 876ecfc:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 876ecff:	89 95 68 ff ff ff    	mov    %edx,-0x98(%ebp)
 876ed05:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 876ed08:	8b 45 84             	mov    -0x7c(%ebp),%eax
 876ed0b:	33 4d a0             	xor    -0x60(%ebp),%ecx
 876ed0e:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 876ed11:	31 c1                	xor    %eax,%ecx
 876ed13:	8b 45 a8             	mov    -0x58(%ebp),%eax
 876ed16:	c1 ca 02             	ror    $0x2,%edx
 876ed19:	31 c1                	xor    %eax,%ecx
 876ed1b:	8b 45 88             	mov    -0x78(%ebp),%eax
 876ed1e:	c1 c9 1f             	ror    $0x1f,%ecx
 876ed21:	8d b4 0e dc bc 1b 8f 	lea    -0x70e44324(%esi,%ecx,1),%esi
 876ed28:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 876ed2b:	89 fe                	mov    %edi,%esi
 876ed2d:	09 d6                	or     %edx,%esi
 876ed2f:	23 b5 6c ff ff ff    	and    -0x94(%ebp),%esi
 876ed35:	89 4d a0             	mov    %ecx,-0x60(%ebp)
 876ed38:	89 f9                	mov    %edi,%ecx
 876ed3a:	21 d1                	and    %edx,%ecx
 876ed3c:	09 ce                	or     %ecx,%esi
 876ed3e:	8b 8d 68 ff ff ff    	mov    -0x98(%ebp),%ecx
 876ed44:	03 75 b4             	add    -0x4c(%ebp),%esi
 876ed47:	c1 cf 02             	ror    $0x2,%edi
 876ed4a:	c1 c9 1b             	ror    $0x1b,%ecx
 876ed4d:	01 ce                	add    %ecx,%esi
 876ed4f:	8b 8d 70 ff ff ff    	mov    -0x90(%ebp),%ecx
 876ed55:	33 4d a4             	xor    -0x5c(%ebp),%ecx
 876ed58:	31 c1                	xor    %eax,%ecx
 876ed5a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 876ed5d:	31 c1                	xor    %eax,%ecx
 876ed5f:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 876ed65:	c1 c9 1f             	ror    $0x1f,%ecx
 876ed68:	89 4d a4             	mov    %ecx,-0x5c(%ebp)
 876ed6b:	8d 84 08 dc bc 1b 8f 	lea    -0x70e44324(%eax,%ecx,1),%eax
 876ed72:	8b 8d 68 ff ff ff    	mov    -0x98(%ebp),%ecx
 876ed78:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 876ed7b:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 876ed81:	21 f9                	and    %edi,%ecx
 876ed83:	09 f8                	or     %edi,%eax
 876ed85:	21 d0                	and    %edx,%eax
 876ed87:	09 c8                	or     %ecx,%eax
 876ed89:	89 f1                	mov    %esi,%ecx
 876ed8b:	03 45 b4             	add    -0x4c(%ebp),%eax
 876ed8e:	c1 c9 1b             	ror    $0x1b,%ecx
 876ed91:	01 c8                	add    %ecx,%eax
 876ed93:	8b 8d 68 ff ff ff    	mov    -0x98(%ebp),%ecx
 876ed99:	89 45 90             	mov    %eax,-0x70(%ebp)
 876ed9c:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 876eda2:	33 45 ac             	xor    -0x54(%ebp),%eax
 876eda5:	c1 c9 02             	ror    $0x2,%ecx
 876eda8:	89 45 ac             	mov    %eax,-0x54(%ebp)
 876edab:	8b 45 9c             	mov    -0x64(%ebp),%eax
 876edae:	31 45 ac             	xor    %eax,-0x54(%ebp)
 876edb1:	8b 45 8c             	mov    -0x74(%ebp),%eax
 876edb4:	31 45 ac             	xor    %eax,-0x54(%ebp)
 876edb7:	c1 4d ac 1f          	rorl   $0x1f,-0x54(%ebp)
 876edbb:	8b 45 ac             	mov    -0x54(%ebp),%eax
 876edbe:	8d 94 02 dc bc 1b 8f 	lea    -0x70e44324(%edx,%eax,1),%edx
 876edc5:	89 f0                	mov    %esi,%eax
 876edc7:	89 95 6c ff ff ff    	mov    %edx,-0x94(%ebp)
 876edcd:	09 c8                	or     %ecx,%eax
 876edcf:	89 f2                	mov    %esi,%edx
 876edd1:	21 ca                	and    %ecx,%edx
 876edd3:	21 f8                	and    %edi,%eax
 876edd5:	09 d0                	or     %edx,%eax
 876edd7:	8b 55 90             	mov    -0x70(%ebp),%edx
 876edda:	03 85 6c ff ff ff    	add    -0x94(%ebp),%eax
 876ede0:	c1 ce 02             	ror    $0x2,%esi
 876ede3:	c1 ca 1b             	ror    $0x1b,%edx
 876ede6:	8d 14 10             	lea    (%eax,%edx,1),%edx
 876ede9:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 876edef:	33 85 70 ff ff ff    	xor    -0x90(%ebp),%eax
 876edf5:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 876edfb:	8b 45 94             	mov    -0x6c(%ebp),%eax
 876edfe:	31 85 70 ff ff ff    	xor    %eax,-0x90(%ebp)
 876ee04:	8b 45 a0             	mov    -0x60(%ebp),%eax
 876ee07:	31 85 70 ff ff ff    	xor    %eax,-0x90(%ebp)
 876ee0d:	c1 8d 70 ff ff ff 1f 	rorl   $0x1f,-0x90(%ebp)
 876ee14:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 876ee1a:	8d bc 07 dc bc 1b 8f 	lea    -0x70e44324(%edi,%eax,1),%edi
 876ee21:	8b 45 90             	mov    -0x70(%ebp),%eax
 876ee24:	89 bd 6c ff ff ff    	mov    %edi,-0x94(%ebp)
 876ee2a:	8b 7d 90             	mov    -0x70(%ebp),%edi
 876ee2d:	09 f0                	or     %esi,%eax
 876ee2f:	21 c8                	and    %ecx,%eax
 876ee31:	21 f7                	and    %esi,%edi
 876ee33:	09 f8                	or     %edi,%eax
 876ee35:	89 d7                	mov    %edx,%edi
 876ee37:	03 85 6c ff ff ff    	add    -0x94(%ebp),%eax
 876ee3d:	c1 cf 1b             	ror    $0x1b,%edi
 876ee40:	8d 3c 38             	lea    (%eax,%edi,1),%edi
 876ee43:	8b 45 90             	mov    -0x70(%ebp),%eax
 876ee46:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 876ee49:	8b bd 7c ff ff ff    	mov    -0x84(%ebp),%edi
 876ee4f:	33 bd 74 ff ff ff    	xor    -0x8c(%ebp),%edi
 876ee55:	c1 c8 02             	ror    $0x2,%eax
 876ee58:	89 bd 74 ff ff ff    	mov    %edi,-0x8c(%ebp)
 876ee5e:	8b 7d 80             	mov    -0x80(%ebp),%edi
 876ee61:	31 bd 74 ff ff ff    	xor    %edi,-0x8c(%ebp)
 876ee67:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 876ee6a:	31 bd 74 ff ff ff    	xor    %edi,-0x8c(%ebp)
 876ee70:	c1 8d 74 ff ff ff 1f 	rorl   $0x1f,-0x8c(%ebp)
 876ee77:	8b bd 74 ff ff ff    	mov    -0x8c(%ebp),%edi
 876ee7d:	8d 8c 39 dc bc 1b 8f 	lea    -0x70e44324(%ecx,%edi,1),%ecx
 876ee84:	89 d7                	mov    %edx,%edi
 876ee86:	89 8d 6c ff ff ff    	mov    %ecx,-0x94(%ebp)
 876ee8c:	89 d1                	mov    %edx,%ecx
 876ee8e:	21 c7                	and    %eax,%edi
 876ee90:	09 c1                	or     %eax,%ecx
 876ee92:	21 f1                	and    %esi,%ecx
 876ee94:	09 f9                	or     %edi,%ecx
 876ee96:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 876ee99:	03 8d 6c ff ff ff    	add    -0x94(%ebp),%ecx
 876ee9f:	c1 ca 02             	ror    $0x2,%edx
 876eea2:	c1 cf 1b             	ror    $0x1b,%edi
 876eea5:	8d 3c 39             	lea    (%ecx,%edi,1),%edi
 876eea8:	89 bd 6c ff ff ff    	mov    %edi,-0x94(%ebp)
 876eeae:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 876eeb1:	8b 7d a8             	mov    -0x58(%ebp),%edi
 876eeb4:	33 8d 78 ff ff ff    	xor    -0x88(%ebp),%ecx
 876eeba:	31 f9                	xor    %edi,%ecx
 876eebc:	8b 7d ac             	mov    -0x54(%ebp),%edi
 876eebf:	31 f9                	xor    %edi,%ecx
 876eec1:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 876eec4:	c1 c9 1f             	ror    $0x1f,%ecx
 876eec7:	89 8d 78 ff ff ff    	mov    %ecx,-0x88(%ebp)
 876eecd:	8d 8c 0e dc bc 1b 8f 	lea    -0x70e44324(%esi,%ecx,1),%ecx
 876eed4:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 876eed7:	21 d7                	and    %edx,%edi
 876eed9:	09 d6                	or     %edx,%esi
 876eedb:	21 c6                	and    %eax,%esi
 876eedd:	09 fe                	or     %edi,%esi
 876eedf:	8b bd 6c ff ff ff    	mov    -0x94(%ebp),%edi
 876eee5:	8d 34 31             	lea    (%ecx,%esi,1),%esi
 876eee8:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 876eeeb:	33 8d 7c ff ff ff    	xor    -0x84(%ebp),%ecx
 876eef1:	c1 cf 1b             	ror    $0x1b,%edi
 876eef4:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
 876eefa:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 876eefd:	01 fe                	add    %edi,%esi
 876eeff:	31 8d 7c ff ff ff    	xor    %ecx,-0x84(%ebp)
 876ef05:	8b 8d 70 ff ff ff    	mov    -0x90(%ebp),%ecx
 876ef0b:	31 8d 7c ff ff ff    	xor    %ecx,-0x84(%ebp)
 876ef11:	c1 8d 7c ff ff ff 1f 	rorl   $0x1f,-0x84(%ebp)
 876ef18:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
 876ef1e:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 876ef21:	8d 84 08 dc bc 1b 8f 	lea    -0x70e44324(%eax,%ecx,1),%eax
 876ef28:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 876ef2e:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 876ef31:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 876ef37:	c1 cf 02             	ror    $0x2,%edi
 876ef3a:	09 f8                	or     %edi,%eax
 876ef3c:	21 d0                	and    %edx,%eax
 876ef3e:	21 f9                	and    %edi,%ecx
 876ef40:	09 c8                	or     %ecx,%eax
 876ef42:	89 f1                	mov    %esi,%ecx
 876ef44:	03 45 b4             	add    -0x4c(%ebp),%eax
 876ef47:	c1 c9 1b             	ror    $0x1b,%ecx
 876ef4a:	01 c8                	add    %ecx,%eax
 876ef4c:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 876ef52:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 876ef55:	8b 45 88             	mov    -0x78(%ebp),%eax
 876ef58:	33 45 98             	xor    -0x68(%ebp),%eax
 876ef5b:	c1 c9 02             	ror    $0x2,%ecx
 876ef5e:	89 45 98             	mov    %eax,-0x68(%ebp)
 876ef61:	8b 45 8c             	mov    -0x74(%ebp),%eax
 876ef64:	31 45 98             	xor    %eax,-0x68(%ebp)
 876ef67:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 876ef6d:	31 45 98             	xor    %eax,-0x68(%ebp)
 876ef70:	c1 4d 98 1f          	rorl   $0x1f,-0x68(%ebp)
 876ef74:	8b 45 98             	mov    -0x68(%ebp),%eax
 876ef77:	8d 94 02 dc bc 1b 8f 	lea    -0x70e44324(%edx,%eax,1),%edx
 876ef7e:	89 f0                	mov    %esi,%eax
 876ef80:	89 95 6c ff ff ff    	mov    %edx,-0x94(%ebp)
 876ef86:	09 c8                	or     %ecx,%eax
 876ef88:	89 f2                	mov    %esi,%edx
 876ef8a:	21 ca                	and    %ecx,%edx
 876ef8c:	21 f8                	and    %edi,%eax
 876ef8e:	09 d0                	or     %edx,%eax
 876ef90:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 876ef96:	c1 ce 02             	ror    $0x2,%esi
 876ef99:	01 c2                	add    %eax,%edx
 876ef9b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 876ef9e:	c1 c8 1b             	ror    $0x1b,%eax
 876efa1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 876efa4:	8b 55 a0             	mov    -0x60(%ebp),%edx
 876efa7:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 876efad:	8b 45 9c             	mov    -0x64(%ebp),%eax
 876efb0:	33 45 84             	xor    -0x7c(%ebp),%eax
 876efb3:	31 d0                	xor    %edx,%eax
 876efb5:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 876efbb:	31 d0                	xor    %edx,%eax
 876efbd:	c1 c8 1f             	ror    $0x1f,%eax
 876efc0:	8d 94 07 dc bc 1b 8f 	lea    -0x70e44324(%edi,%eax,1),%edx
 876efc7:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 876efca:	89 45 84             	mov    %eax,-0x7c(%ebp)
 876efcd:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 876efd0:	21 f7                	and    %esi,%edi
 876efd2:	09 f0                	or     %esi,%eax
 876efd4:	21 c8                	and    %ecx,%eax
 876efd6:	09 f8                	or     %edi,%eax
 876efd8:	8d 3c 02             	lea    (%edx,%eax,1),%edi
 876efdb:	8b 55 94             	mov    -0x6c(%ebp),%edx
 876efde:	33 55 88             	xor    -0x78(%ebp),%edx
 876efe1:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 876efe7:	89 55 88             	mov    %edx,-0x78(%ebp)
 876efea:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 876efed:	31 55 88             	xor    %edx,-0x78(%ebp)
 876eff0:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 876eff6:	c1 c8 1b             	ror    $0x1b,%eax
 876eff9:	31 55 88             	xor    %edx,-0x78(%ebp)
 876effc:	01 c7                	add    %eax,%edi
 876effe:	c1 4d 88 1f          	rorl   $0x1f,-0x78(%ebp)
 876f002:	8b 55 88             	mov    -0x78(%ebp),%edx
 876f005:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 876f008:	8d 8c 11 dc bc 1b 8f 	lea    -0x70e44324(%ecx,%edx,1),%ecx
 876f00f:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 876f015:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 876f018:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 876f01e:	c1 c8 02             	ror    $0x2,%eax
 876f021:	09 c1                	or     %eax,%ecx
 876f023:	21 c2                	and    %eax,%edx
 876f025:	21 f1                	and    %esi,%ecx
 876f027:	09 d1                	or     %edx,%ecx
 876f029:	89 fa                	mov    %edi,%edx
 876f02b:	03 4d b4             	add    -0x4c(%ebp),%ecx
 876f02e:	c1 ca 1b             	ror    $0x1b,%edx
 876f031:	01 d1                	add    %edx,%ecx
 876f033:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 876f036:	8b 4d 80             	mov    -0x80(%ebp),%ecx
 876f039:	33 4d 9c             	xor    -0x64(%ebp),%ecx
 876f03c:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 876f042:	89 4d 9c             	mov    %ecx,-0x64(%ebp)
 876f045:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 876f048:	31 4d 9c             	xor    %ecx,-0x64(%ebp)
 876f04b:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 876f04e:	c1 ca 02             	ror    $0x2,%edx
 876f051:	31 4d 9c             	xor    %ecx,-0x64(%ebp)
 876f054:	c1 4d 9c 1f          	rorl   $0x1f,-0x64(%ebp)
 876f058:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 876f05b:	8d b4 0e dc bc 1b 8f 	lea    -0x70e44324(%esi,%ecx,1),%esi
 876f062:	89 f9                	mov    %edi,%ecx
 876f064:	89 b5 6c ff ff ff    	mov    %esi,-0x94(%ebp)
 876f06a:	09 d1                	or     %edx,%ecx
 876f06c:	89 fe                	mov    %edi,%esi
 876f06e:	21 d6                	and    %edx,%esi
 876f070:	21 c1                	and    %eax,%ecx
 876f072:	09 f1                	or     %esi,%ecx
 876f074:	8b b5 6c ff ff ff    	mov    -0x94(%ebp),%esi
 876f07a:	c1 cf 02             	ror    $0x2,%edi
 876f07d:	01 ce                	add    %ecx,%esi
 876f07f:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 876f082:	c1 c9 1b             	ror    $0x1b,%ecx
 876f085:	01 ce                	add    %ecx,%esi
 876f087:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 876f08a:	33 4d 94             	xor    -0x6c(%ebp),%ecx
 876f08d:	89 4d 94             	mov    %ecx,-0x6c(%ebp)
 876f090:	8b 8d 70 ff ff ff    	mov    -0x90(%ebp),%ecx
 876f096:	31 4d 94             	xor    %ecx,-0x6c(%ebp)
 876f099:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 876f09c:	31 4d 94             	xor    %ecx,-0x6c(%ebp)
 876f09f:	c1 4d 94 1f          	rorl   $0x1f,-0x6c(%ebp)
 876f0a3:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 876f0a6:	8d 84 08 dc bc 1b 8f 	lea    -0x70e44324(%eax,%ecx,1),%eax
 876f0ad:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 876f0b0:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 876f0b6:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 876f0b9:	21 f9                	and    %edi,%ecx
 876f0bb:	09 f8                	or     %edi,%eax
 876f0bd:	21 d0                	and    %edx,%eax
 876f0bf:	09 c8                	or     %ecx,%eax
 876f0c1:	89 f1                	mov    %esi,%ecx
 876f0c3:	03 85 6c ff ff ff    	add    -0x94(%ebp),%eax
 876f0c9:	c1 c9 1b             	ror    $0x1b,%ecx
 876f0cc:	8d 0c 08             	lea    (%eax,%ecx,1),%ecx
 876f0cf:	8b 45 b0             	mov    -0x50(%ebp),%eax
 876f0d2:	33 45 80             	xor    -0x80(%ebp),%eax
 876f0d5:	89 8d 6c ff ff ff    	mov    %ecx,-0x94(%ebp)
 876f0db:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 876f0de:	89 45 80             	mov    %eax,-0x80(%ebp)
 876f0e1:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 876f0e7:	31 45 80             	xor    %eax,-0x80(%ebp)
 876f0ea:	8b 45 88             	mov    -0x78(%ebp),%eax
 876f0ed:	c1 c9 02             	ror    $0x2,%ecx
 876f0f0:	31 45 80             	xor    %eax,-0x80(%ebp)
 876f0f3:	c1 4d 80 1f          	rorl   $0x1f,-0x80(%ebp)
 876f0f7:	8b 45 80             	mov    -0x80(%ebp),%eax
 876f0fa:	8d 94 02 dc bc 1b 8f 	lea    -0x70e44324(%edx,%eax,1),%edx
 876f101:	89 f0                	mov    %esi,%eax
 876f103:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 876f106:	89 f2                	mov    %esi,%edx
 876f108:	21 c8                	and    %ecx,%eax
 876f10a:	09 ca                	or     %ecx,%edx
 876f10c:	21 fa                	and    %edi,%edx
 876f10e:	09 c2                	or     %eax,%edx
 876f110:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 876f116:	03 55 b4             	add    -0x4c(%ebp),%edx
 876f119:	c1 ce 02             	ror    $0x2,%esi
 876f11c:	c1 c8 1b             	ror    $0x1b,%eax
 876f11f:	01 c2                	add    %eax,%edx
 876f121:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 876f127:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 876f12a:	8b 55 8c             	mov    -0x74(%ebp),%edx
 876f12d:	33 55 a8             	xor    -0x58(%ebp),%edx
 876f130:	31 c2                	xor    %eax,%edx
 876f132:	8b 45 9c             	mov    -0x64(%ebp),%eax
 876f135:	31 c2                	xor    %eax,%edx
 876f137:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 876f13d:	c1 ca 1f             	ror    $0x1f,%edx
 876f140:	89 55 a8             	mov    %edx,-0x58(%ebp)
 876f143:	8d bc 17 dc bc 1b 8f 	lea    -0x70e44324(%edi,%edx,1),%edi
 876f14a:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 876f150:	21 f0                	and    %esi,%eax
 876f152:	09 f2                	or     %esi,%edx
 876f154:	21 ca                	and    %ecx,%edx
 876f156:	09 c2                	or     %eax,%edx
 876f158:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 876f15e:	01 d7                	add    %edx,%edi
 876f160:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 876f163:	c1 c8 02             	ror    $0x2,%eax
 876f166:	c1 ca 1b             	ror    $0x1b,%edx
 876f169:	01 d7                	add    %edx,%edi
 876f16b:	8b 55 a0             	mov    -0x60(%ebp),%edx
 876f16e:	33 55 b0             	xor    -0x50(%ebp),%edx
 876f171:	89 55 b0             	mov    %edx,-0x50(%ebp)
 876f174:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 876f17a:	31 55 b0             	xor    %edx,-0x50(%ebp)
 876f17d:	8b 55 94             	mov    -0x6c(%ebp),%edx
 876f180:	31 55 b0             	xor    %edx,-0x50(%ebp)
 876f183:	c1 4d b0 1f          	rorl   $0x1f,-0x50(%ebp)
 876f187:	8b 55 b0             	mov    -0x50(%ebp),%edx
 876f18a:	8d 8c 11 dc bc 1b 8f 	lea    -0x70e44324(%ecx,%edx,1),%ecx
 876f191:	89 8d 6c ff ff ff    	mov    %ecx,-0x94(%ebp)
 876f197:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 876f19a:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 876f19d:	09 c2                	or     %eax,%edx
 876f19f:	21 c1                	and    %eax,%ecx
 876f1a1:	21 f2                	and    %esi,%edx
 876f1a3:	09 ca                	or     %ecx,%edx
 876f1a5:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 876f1ab:	01 d1                	add    %edx,%ecx
 876f1ad:	89 fa                	mov    %edi,%edx
 876f1af:	c1 ca 1b             	ror    $0x1b,%edx
 876f1b2:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 876f1b5:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 876f1b8:	89 95 68 ff ff ff    	mov    %edx,-0x98(%ebp)
 876f1be:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 876f1c1:	c1 ca 02             	ror    $0x2,%edx
 876f1c4:	33 4d 8c             	xor    -0x74(%ebp),%ecx
 876f1c7:	89 4d 8c             	mov    %ecx,-0x74(%ebp)
 876f1ca:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 876f1cd:	31 4d 8c             	xor    %ecx,-0x74(%ebp)
 876f1d0:	8b 4d 80             	mov    -0x80(%ebp),%ecx
 876f1d3:	31 4d 8c             	xor    %ecx,-0x74(%ebp)
 876f1d6:	c1 4d 8c 1f          	rorl   $0x1f,-0x74(%ebp)
 876f1da:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 876f1dd:	8d b4 0e dc bc 1b 8f 	lea    -0x70e44324(%esi,%ecx,1),%esi
 876f1e4:	89 f9                	mov    %edi,%ecx
 876f1e6:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 876f1e9:	89 fe                	mov    %edi,%esi
 876f1eb:	21 d1                	and    %edx,%ecx
 876f1ed:	09 d6                	or     %edx,%esi
 876f1ef:	21 c6                	and    %eax,%esi
 876f1f1:	09 ce                	or     %ecx,%esi
 876f1f3:	8b 8d 68 ff ff ff    	mov    -0x98(%ebp),%ecx
 876f1f9:	03 75 b4             	add    -0x4c(%ebp),%esi
 876f1fc:	c1 cf 02             	ror    $0x2,%edi
 876f1ff:	c1 c9 1b             	ror    $0x1b,%ecx
 876f202:	01 ce                	add    %ecx,%esi
 876f204:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 876f207:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 876f20a:	8b 75 ac             	mov    -0x54(%ebp),%esi
 876f20d:	33 75 a0             	xor    -0x60(%ebp),%esi
 876f210:	31 ce                	xor    %ecx,%esi
 876f212:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 876f215:	31 ce                	xor    %ecx,%esi
 876f217:	8b 8d 68 ff ff ff    	mov    -0x98(%ebp),%ecx
 876f21d:	c1 ce 1f             	ror    $0x1f,%esi
 876f220:	89 75 a0             	mov    %esi,-0x60(%ebp)
 876f223:	8d b4 30 dc bc 1b 8f 	lea    -0x70e44324(%eax,%esi,1),%esi
 876f22a:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 876f230:	21 f9                	and    %edi,%ecx
 876f232:	09 f8                	or     %edi,%eax
 876f234:	21 d0                	and    %edx,%eax
 876f236:	09 c8                	or     %ecx,%eax
 876f238:	8b 8d 68 ff ff ff    	mov    -0x98(%ebp),%ecx
 876f23e:	8d 04 06             	lea    (%esi,%eax,1),%eax
 876f241:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 876f244:	c1 c9 02             	ror    $0x2,%ecx
 876f247:	c1 ce 1b             	ror    $0x1b,%esi
 876f24a:	8d 34 30             	lea    (%eax,%esi,1),%esi
 876f24d:	8b 45 88             	mov    -0x78(%ebp),%eax
 876f250:	89 b5 6c ff ff ff    	mov    %esi,-0x94(%ebp)
 876f256:	8b b5 70 ff ff ff    	mov    -0x90(%ebp),%esi
 876f25c:	33 75 a4             	xor    -0x5c(%ebp),%esi
 876f25f:	31 c6                	xor    %eax,%esi
 876f261:	8b 45 b0             	mov    -0x50(%ebp),%eax
 876f264:	31 c6                	xor    %eax,%esi
 876f266:	c1 ce 1f             	ror    $0x1f,%esi
 876f269:	89 75 a4             	mov    %esi,-0x5c(%ebp)
 876f26c:	8d 84 32 dc bc 1b 8f 	lea    -0x70e44324(%edx,%esi,1),%eax
 876f273:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 876f276:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 876f279:	09 ca                	or     %ecx,%edx
 876f27b:	21 ce                	and    %ecx,%esi
 876f27d:	21 fa                	and    %edi,%edx
 876f27f:	09 f2                	or     %esi,%edx
 876f281:	8b b5 6c ff ff ff    	mov    -0x94(%ebp),%esi
 876f287:	8d 14 10             	lea    (%eax,%edx,1),%edx
 876f28a:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 876f290:	c1 ce 1b             	ror    $0x1b,%esi
 876f293:	01 f2                	add    %esi,%edx
 876f295:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 876f298:	c1 ce 02             	ror    $0x2,%esi
 876f29b:	33 45 ac             	xor    -0x54(%ebp),%eax
 876f29e:	89 45 ac             	mov    %eax,-0x54(%ebp)
 876f2a1:	8b 45 9c             	mov    -0x64(%ebp),%eax
 876f2a4:	31 45 ac             	xor    %eax,-0x54(%ebp)
 876f2a7:	8b 45 8c             	mov    -0x74(%ebp),%eax
 876f2aa:	31 45 ac             	xor    %eax,-0x54(%ebp)
 876f2ad:	c1 4d ac 1f          	rorl   $0x1f,-0x54(%ebp)
 876f2b1:	8b 45 ac             	mov    -0x54(%ebp),%eax
 876f2b4:	8d bc 07 dc bc 1b 8f 	lea    -0x70e44324(%edi,%eax,1),%edi
 876f2bb:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 876f2c1:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 876f2c4:	8b bd 6c ff ff ff    	mov    -0x94(%ebp),%edi
 876f2ca:	21 f0                	and    %esi,%eax
 876f2cc:	09 f7                	or     %esi,%edi
 876f2ce:	21 cf                	and    %ecx,%edi
 876f2d0:	09 c7                	or     %eax,%edi
 876f2d2:	89 d0                	mov    %edx,%eax
 876f2d4:	03 7d b4             	add    -0x4c(%ebp),%edi
 876f2d7:	c1 c8 1b             	ror    $0x1b,%eax
 876f2da:	01 c7                	add    %eax,%edi
 876f2dc:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 876f2e2:	89 7d 90             	mov    %edi,-0x70(%ebp)
 876f2e5:	8b bd 78 ff ff ff    	mov    -0x88(%ebp),%edi
 876f2eb:	33 bd 70 ff ff ff    	xor    -0x90(%ebp),%edi
 876f2f1:	c1 c8 02             	ror    $0x2,%eax
 876f2f4:	89 bd 70 ff ff ff    	mov    %edi,-0x90(%ebp)
 876f2fa:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 876f2fd:	31 bd 70 ff ff ff    	xor    %edi,-0x90(%ebp)
 876f303:	8b 7d a0             	mov    -0x60(%ebp),%edi
 876f306:	31 bd 70 ff ff ff    	xor    %edi,-0x90(%ebp)
 876f30c:	c1 8d 70 ff ff ff 1f 	rorl   $0x1f,-0x90(%ebp)
 876f313:	8b bd 70 ff ff ff    	mov    -0x90(%ebp),%edi
 876f319:	8d 8c 39 dc bc 1b 8f 	lea    -0x70e44324(%ecx,%edi,1),%ecx
 876f320:	89 d7                	mov    %edx,%edi
 876f322:	89 8d 6c ff ff ff    	mov    %ecx,-0x94(%ebp)
 876f328:	89 d1                	mov    %edx,%ecx
 876f32a:	21 c7                	and    %eax,%edi
 876f32c:	09 c1                	or     %eax,%ecx
 876f32e:	21 f1                	and    %esi,%ecx
 876f330:	09 f9                	or     %edi,%ecx
 876f332:	8b 7d 90             	mov    -0x70(%ebp),%edi
 876f335:	03 8d 6c ff ff ff    	add    -0x94(%ebp),%ecx
 876f33b:	c1 ca 02             	ror    $0x2,%edx
 876f33e:	c1 cf 1b             	ror    $0x1b,%edi
 876f341:	01 f9                	add    %edi,%ecx
 876f343:	8b bd 7c ff ff ff    	mov    -0x84(%ebp),%edi
 876f349:	33 bd 74 ff ff ff    	xor    -0x8c(%ebp),%edi
 876f34f:	89 bd 74 ff ff ff    	mov    %edi,-0x8c(%ebp)
 876f355:	8b 7d 80             	mov    -0x80(%ebp),%edi
 876f358:	31 bd 74 ff ff ff    	xor    %edi,-0x8c(%ebp)
 876f35e:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 876f361:	31 bd 74 ff ff ff    	xor    %edi,-0x8c(%ebp)
 876f367:	c1 8d 74 ff ff ff 1f 	rorl   $0x1f,-0x8c(%ebp)
 876f36e:	8b bd 74 ff ff ff    	mov    -0x8c(%ebp),%edi
 876f374:	8d b4 3e d6 c1 62 ca 	lea    -0x359d3e2a(%esi,%edi,1),%esi
 876f37b:	89 cf                	mov    %ecx,%edi
 876f37d:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 876f380:	89 d6                	mov    %edx,%esi
 876f382:	31 c6                	xor    %eax,%esi
 876f384:	33 75 90             	xor    -0x70(%ebp),%esi
 876f387:	03 75 b4             	add    -0x4c(%ebp),%esi
 876f38a:	c1 cf 1b             	ror    $0x1b,%edi
 876f38d:	8d 3c 3e             	lea    (%esi,%edi,1),%edi
 876f390:	8b 75 98             	mov    -0x68(%ebp),%esi
 876f393:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 876f396:	8b 7d 90             	mov    -0x70(%ebp),%edi
 876f399:	c1 cf 02             	ror    $0x2,%edi
 876f39c:	33 b5 78 ff ff ff    	xor    -0x88(%ebp),%esi
 876f3a2:	89 b5 78 ff ff ff    	mov    %esi,-0x88(%ebp)
 876f3a8:	8b 75 a8             	mov    -0x58(%ebp),%esi
 876f3ab:	31 b5 78 ff ff ff    	xor    %esi,-0x88(%ebp)
 876f3b1:	8b 75 ac             	mov    -0x54(%ebp),%esi
 876f3b4:	31 b5 78 ff ff ff    	xor    %esi,-0x88(%ebp)
 876f3ba:	c1 8d 78 ff ff ff 1f 	rorl   $0x1f,-0x88(%ebp)
 876f3c1:	8b b5 78 ff ff ff    	mov    -0x88(%ebp),%esi
 876f3c7:	8d 84 30 d6 c1 62 ca 	lea    -0x359d3e2a(%eax,%esi,1),%eax
 876f3ce:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 876f3d1:	89 45 90             	mov    %eax,-0x70(%ebp)
 876f3d4:	89 f8                	mov    %edi,%eax
 876f3d6:	31 d0                	xor    %edx,%eax
 876f3d8:	31 c8                	xor    %ecx,%eax
 876f3da:	03 45 90             	add    -0x70(%ebp),%eax
 876f3dd:	c1 ce 1b             	ror    $0x1b,%esi
 876f3e0:	c1 c9 02             	ror    $0x2,%ecx
 876f3e3:	8d 34 30             	lea    (%eax,%esi,1),%esi
 876f3e6:	8b 45 84             	mov    -0x7c(%ebp),%eax
 876f3e9:	33 85 7c ff ff ff    	xor    -0x84(%ebp),%eax
 876f3ef:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 876f3f5:	8b 45 b0             	mov    -0x50(%ebp),%eax
 876f3f8:	31 85 7c ff ff ff    	xor    %eax,-0x84(%ebp)
 876f3fe:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 876f404:	31 85 7c ff ff ff    	xor    %eax,-0x84(%ebp)
 876f40a:	c1 8d 7c ff ff ff 1f 	rorl   $0x1f,-0x84(%ebp)
 876f411:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 876f417:	8d 94 02 d6 c1 62 ca 	lea    -0x359d3e2a(%edx,%eax,1),%edx
 876f41e:	89 c8                	mov    %ecx,%eax
 876f420:	31 f8                	xor    %edi,%eax
 876f422:	33 45 b4             	xor    -0x4c(%ebp),%eax
 876f425:	01 c2                	add    %eax,%edx
 876f427:	89 f0                	mov    %esi,%eax
 876f429:	c1 c8 1b             	ror    $0x1b,%eax
 876f42c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 876f42f:	8b 55 88             	mov    -0x78(%ebp),%edx
 876f432:	33 55 98             	xor    -0x68(%ebp),%edx
 876f435:	89 45 90             	mov    %eax,-0x70(%ebp)
 876f438:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 876f43b:	89 55 98             	mov    %edx,-0x68(%ebp)
 876f43e:	8b 55 8c             	mov    -0x74(%ebp),%edx
 876f441:	31 55 98             	xor    %edx,-0x68(%ebp)
 876f444:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 876f44a:	c1 c8 02             	ror    $0x2,%eax
 876f44d:	31 55 98             	xor    %edx,-0x68(%ebp)
 876f450:	c1 4d 98 1f          	rorl   $0x1f,-0x68(%ebp)
 876f454:	8b 55 98             	mov    -0x68(%ebp),%edx
 876f457:	8d bc 17 d6 c1 62 ca 	lea    -0x359d3e2a(%edi,%edx,1),%edi
 876f45e:	8b 55 90             	mov    -0x70(%ebp),%edx
 876f461:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 876f464:	89 c7                	mov    %eax,%edi
 876f466:	31 cf                	xor    %ecx,%edi
 876f468:	31 f7                	xor    %esi,%edi
 876f46a:	03 7d b4             	add    -0x4c(%ebp),%edi
 876f46d:	c1 ca 1b             	ror    $0x1b,%edx
 876f470:	c1 ce 02             	ror    $0x2,%esi
 876f473:	01 d7                	add    %edx,%edi
 876f475:	8b 55 a0             	mov    -0x60(%ebp),%edx
 876f478:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 876f47b:	8b 7d 9c             	mov    -0x64(%ebp),%edi
 876f47e:	33 7d 84             	xor    -0x7c(%ebp),%edi
 876f481:	31 d7                	xor    %edx,%edi
 876f483:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 876f489:	31 d7                	xor    %edx,%edi
 876f48b:	8b 55 90             	mov    -0x70(%ebp),%edx
 876f48e:	c1 cf 1f             	ror    $0x1f,%edi
 876f491:	89 7d 84             	mov    %edi,-0x7c(%ebp)
 876f494:	8d bc 39 d6 c1 62 ca 	lea    -0x359d3e2a(%ecx,%edi,1),%edi
 876f49b:	89 f1                	mov    %esi,%ecx
 876f49d:	31 c1                	xor    %eax,%ecx
 876f49f:	33 4d 90             	xor    -0x70(%ebp),%ecx
 876f4a2:	c1 ca 02             	ror    $0x2,%edx
 876f4a5:	8d 0c 0f             	lea    (%edi,%ecx,1),%ecx
 876f4a8:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 876f4ab:	c1 cf 1b             	ror    $0x1b,%edi
 876f4ae:	01 f9                	add    %edi,%ecx
 876f4b0:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 876f4b3:	33 7d 88             	xor    -0x78(%ebp),%edi
 876f4b6:	89 7d 88             	mov    %edi,-0x78(%ebp)
 876f4b9:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 876f4bc:	31 7d 88             	xor    %edi,-0x78(%ebp)
 876f4bf:	8b bd 7c ff ff ff    	mov    -0x84(%ebp),%edi
 876f4c5:	31 7d 88             	xor    %edi,-0x78(%ebp)
 876f4c8:	c1 4d 88 1f          	rorl   $0x1f,-0x78(%ebp)
 876f4cc:	8b 7d 88             	mov    -0x78(%ebp),%edi
 876f4cf:	8d 84 38 d6 c1 62 ca 	lea    -0x359d3e2a(%eax,%edi,1),%eax
 876f4d6:	89 cf                	mov    %ecx,%edi
 876f4d8:	89 45 90             	mov    %eax,-0x70(%ebp)
 876f4db:	89 d0                	mov    %edx,%eax
 876f4dd:	31 f0                	xor    %esi,%eax
 876f4df:	33 45 b4             	xor    -0x4c(%ebp),%eax
 876f4e2:	03 45 90             	add    -0x70(%ebp),%eax
 876f4e5:	c1 cf 1b             	ror    $0x1b,%edi
 876f4e8:	01 f8                	add    %edi,%eax
 876f4ea:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 876f4ed:	c1 cf 02             	ror    $0x2,%edi
 876f4f0:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 876f4f3:	8b 7d 80             	mov    -0x80(%ebp),%edi
 876f4f6:	33 7d 9c             	xor    -0x64(%ebp),%edi
 876f4f9:	33 7d ac             	xor    -0x54(%ebp),%edi
 876f4fc:	33 7d 98             	xor    -0x68(%ebp),%edi
 876f4ff:	c1 cf 1f             	ror    $0x1f,%edi
 876f502:	8d b4 3e d6 c1 62 ca 	lea    -0x359d3e2a(%esi,%edi,1),%esi
 876f509:	89 75 9c             	mov    %esi,-0x64(%ebp)
 876f50c:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 876f50f:	31 d6                	xor    %edx,%esi
 876f511:	31 ce                	xor    %ecx,%esi
 876f513:	03 75 9c             	add    -0x64(%ebp),%esi
 876f516:	c1 c9 02             	ror    $0x2,%ecx
 876f519:	89 75 90             	mov    %esi,-0x70(%ebp)
 876f51c:	89 c6                	mov    %eax,%esi
 876f51e:	c1 ce 1b             	ror    $0x1b,%esi
 876f521:	89 75 9c             	mov    %esi,-0x64(%ebp)
 876f524:	8b 75 90             	mov    -0x70(%ebp),%esi
 876f527:	03 75 9c             	add    -0x64(%ebp),%esi
 876f52a:	89 4d 9c             	mov    %ecx,-0x64(%ebp)
 876f52d:	89 b5 68 ff ff ff    	mov    %esi,-0x98(%ebp)
 876f533:	8b 75 a8             	mov    -0x58(%ebp),%esi
 876f536:	33 75 94             	xor    -0x6c(%ebp),%esi
 876f539:	33 b5 70 ff ff ff    	xor    -0x90(%ebp),%esi
 876f53f:	33 75 84             	xor    -0x7c(%ebp),%esi
 876f542:	c1 ce 1f             	ror    $0x1f,%esi
 876f545:	8d 8c 32 d6 c1 62 ca 	lea    -0x359d3e2a(%edx,%esi,1),%ecx
 876f54c:	8b 55 9c             	mov    -0x64(%ebp),%edx
 876f54f:	33 55 b4             	xor    -0x4c(%ebp),%edx
 876f552:	31 c2                	xor    %eax,%edx
 876f554:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 876f557:	8b 8d 68 ff ff ff    	mov    -0x98(%ebp),%ecx
 876f55d:	c1 c8 02             	ror    $0x2,%eax
 876f560:	c1 c9 1b             	ror    $0x1b,%ecx
 876f563:	8d 0c 0a             	lea    (%edx,%ecx,1),%ecx
 876f566:	89 8d 6c ff ff ff    	mov    %ecx,-0x94(%ebp)
 876f56c:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 876f56f:	89 45 94             	mov    %eax,-0x6c(%ebp)
 876f572:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 876f575:	33 4d 80             	xor    -0x80(%ebp),%ecx
 876f578:	33 8d 74 ff ff ff    	xor    -0x8c(%ebp),%ecx
 876f57e:	33 4d 88             	xor    -0x78(%ebp),%ecx
 876f581:	c1 c9 1f             	ror    $0x1f,%ecx
 876f584:	8d 94 08 d6 c1 62 ca 	lea    -0x359d3e2a(%eax,%ecx,1),%edx
 876f58b:	8b 45 94             	mov    -0x6c(%ebp),%eax
 876f58e:	33 45 9c             	xor    -0x64(%ebp),%eax
 876f591:	33 85 68 ff ff ff    	xor    -0x98(%ebp),%eax
 876f597:	8d 04 02             	lea    (%edx,%eax,1),%eax
 876f59a:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 876f5a0:	c1 ca 1b             	ror    $0x1b,%edx
 876f5a3:	8d 14 10             	lea    (%eax,%edx,1),%edx
 876f5a6:	8b 45 8c             	mov    -0x74(%ebp),%eax
 876f5a9:	89 55 90             	mov    %edx,-0x70(%ebp)
 876f5ac:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 876f5b2:	33 45 a8             	xor    -0x58(%ebp),%eax
 876f5b5:	c1 ca 02             	ror    $0x2,%edx
 876f5b8:	89 95 68 ff ff ff    	mov    %edx,-0x98(%ebp)
 876f5be:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 876f5c4:	31 d0                	xor    %edx,%eax
 876f5c6:	8b 55 9c             	mov    -0x64(%ebp),%edx
 876f5c9:	31 f8                	xor    %edi,%eax
 876f5cb:	c1 c8 1f             	ror    $0x1f,%eax
 876f5ce:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 876f5d4:	8d 94 02 d6 c1 62 ca 	lea    -0x359d3e2a(%edx,%eax,1),%edx
 876f5db:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 876f5e1:	33 45 94             	xor    -0x6c(%ebp),%eax
 876f5e4:	33 85 6c ff ff ff    	xor    -0x94(%ebp),%eax
 876f5ea:	8d 14 10             	lea    (%eax,%edx,1),%edx
 876f5ed:	8b 45 90             	mov    -0x70(%ebp),%eax
 876f5f0:	c1 c8 1b             	ror    $0x1b,%eax
 876f5f3:	01 c2                	add    %eax,%edx
 876f5f5:	8b 45 a0             	mov    -0x60(%ebp),%eax
 876f5f8:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 876f5fb:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 876f601:	33 45 b0             	xor    -0x50(%ebp),%eax
 876f604:	c1 ca 02             	ror    $0x2,%edx
 876f607:	89 95 6c ff ff ff    	mov    %edx,-0x94(%ebp)
 876f60d:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 876f613:	31 d0                	xor    %edx,%eax
 876f615:	8b 55 94             	mov    -0x6c(%ebp),%edx
 876f618:	31 f0                	xor    %esi,%eax
 876f61a:	c1 c8 1f             	ror    $0x1f,%eax
 876f61d:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 876f623:	8d 94 02 d6 c1 62 ca 	lea    -0x359d3e2a(%edx,%eax,1),%edx
 876f62a:	89 55 a8             	mov    %edx,-0x58(%ebp)
 876f62d:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 876f633:	33 95 68 ff ff ff    	xor    -0x98(%ebp),%edx
 876f639:	33 55 90             	xor    -0x70(%ebp),%edx
 876f63c:	03 55 a8             	add    -0x58(%ebp),%edx
 876f63f:	89 55 b0             	mov    %edx,-0x50(%ebp)
 876f642:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 876f645:	8b 45 90             	mov    -0x70(%ebp),%eax
 876f648:	c1 ca 1b             	ror    $0x1b,%edx
 876f64b:	03 55 b0             	add    -0x50(%ebp),%edx
 876f64e:	c1 c8 02             	ror    $0x2,%eax
 876f651:	89 45 90             	mov    %eax,-0x70(%ebp)
 876f654:	8b 45 98             	mov    -0x68(%ebp),%eax
 876f657:	89 55 9c             	mov    %edx,-0x64(%ebp)
 876f65a:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 876f65d:	33 55 8c             	xor    -0x74(%ebp),%edx
 876f660:	31 c2                	xor    %eax,%edx
 876f662:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 876f668:	31 ca                	xor    %ecx,%edx
 876f66a:	c1 ca 1f             	ror    $0x1f,%edx
 876f66d:	89 55 8c             	mov    %edx,-0x74(%ebp)
 876f670:	8d 84 10 d6 c1 62 ca 	lea    -0x359d3e2a(%eax,%edx,1),%eax
 876f677:	8b 55 90             	mov    -0x70(%ebp),%edx
 876f67a:	33 95 6c ff ff ff    	xor    -0x94(%ebp),%edx
 876f680:	33 55 b4             	xor    -0x4c(%ebp),%edx
 876f683:	01 c2                	add    %eax,%edx
 876f685:	8b 45 ac             	mov    -0x54(%ebp),%eax
 876f688:	89 55 b0             	mov    %edx,-0x50(%ebp)
 876f68b:	8b 55 9c             	mov    -0x64(%ebp),%edx
 876f68e:	c1 ca 1b             	ror    $0x1b,%edx
 876f691:	03 55 b0             	add    -0x50(%ebp),%edx
 876f694:	33 45 a0             	xor    -0x60(%ebp),%eax
 876f697:	89 55 94             	mov    %edx,-0x6c(%ebp)
 876f69a:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 876f69d:	c1 ca 02             	ror    $0x2,%edx
 876f6a0:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 876f6a3:	8b 55 84             	mov    -0x7c(%ebp),%edx
 876f6a6:	31 d0                	xor    %edx,%eax
 876f6a8:	8b 95 1c ff ff ff    	mov    -0xe4(%ebp),%edx
 876f6ae:	31 d0                	xor    %edx,%eax
 876f6b0:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 876f6b6:	c1 c8 1f             	ror    $0x1f,%eax
 876f6b9:	89 45 a0             	mov    %eax,-0x60(%ebp)
 876f6bc:	8d 94 02 d6 c1 62 ca 	lea    -0x359d3e2a(%edx,%eax,1),%edx
 876f6c3:	89 55 a8             	mov    %edx,-0x58(%ebp)
 876f6c6:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 876f6c9:	33 55 90             	xor    -0x70(%ebp),%edx
 876f6cc:	33 55 9c             	xor    -0x64(%ebp),%edx
 876f6cf:	03 55 a8             	add    -0x58(%ebp),%edx
 876f6d2:	89 55 b0             	mov    %edx,-0x50(%ebp)
 876f6d5:	8b 55 94             	mov    -0x6c(%ebp),%edx
 876f6d8:	c1 ca 1b             	ror    $0x1b,%edx
 876f6db:	03 55 b0             	add    -0x50(%ebp),%edx
 876f6de:	89 55 80             	mov    %edx,-0x80(%ebp)
 876f6e1:	8b 45 9c             	mov    -0x64(%ebp),%eax
 876f6e4:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 876f6ea:	33 55 a4             	xor    -0x5c(%ebp),%edx
 876f6ed:	c1 c8 02             	ror    $0x2,%eax
 876f6f0:	89 45 9c             	mov    %eax,-0x64(%ebp)
 876f6f3:	8b 45 88             	mov    -0x78(%ebp),%eax
 876f6f6:	31 c2                	xor    %eax,%edx
 876f6f8:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 876f6fe:	31 c2                	xor    %eax,%edx
 876f700:	8b 45 90             	mov    -0x70(%ebp),%eax
 876f703:	c1 ca 1f             	ror    $0x1f,%edx
 876f706:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 876f709:	8d 84 10 d6 c1 62 ca 	lea    -0x359d3e2a(%eax,%edx,1),%eax
 876f710:	8b 55 9c             	mov    -0x64(%ebp),%edx
 876f713:	33 55 b4             	xor    -0x4c(%ebp),%edx
 876f716:	33 55 94             	xor    -0x6c(%ebp),%edx
 876f719:	01 c2                	add    %eax,%edx
 876f71b:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 876f721:	89 55 b0             	mov    %edx,-0x50(%ebp)
 876f724:	8b 55 80             	mov    -0x80(%ebp),%edx
 876f727:	33 45 ac             	xor    -0x54(%ebp),%eax
 876f72a:	c1 ca 1b             	ror    $0x1b,%edx
 876f72d:	31 f8                	xor    %edi,%eax
 876f72f:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 876f732:	03 55 b0             	add    -0x50(%ebp),%edx
 876f735:	89 55 a8             	mov    %edx,-0x58(%ebp)
 876f738:	8b 55 94             	mov    -0x6c(%ebp),%edx
 876f73b:	c1 ca 02             	ror    $0x2,%edx
 876f73e:	89 55 94             	mov    %edx,-0x6c(%ebp)
 876f741:	8b 55 8c             	mov    -0x74(%ebp),%edx
 876f744:	31 d0                	xor    %edx,%eax
 876f746:	8b 55 a8             	mov    -0x58(%ebp),%edx
 876f749:	c1 c8 1f             	ror    $0x1f,%eax
 876f74c:	8d bc 07 d6 c1 62 ca 	lea    -0x359d3e2a(%edi,%eax,1),%edi
 876f753:	89 7d b0             	mov    %edi,-0x50(%ebp)
 876f756:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 876f759:	33 7d 9c             	xor    -0x64(%ebp),%edi
 876f75c:	33 7d 80             	xor    -0x80(%ebp),%edi
 876f75f:	03 7d b0             	add    -0x50(%ebp),%edi
 876f762:	c1 ca 1b             	ror    $0x1b,%edx
 876f765:	89 45 ac             	mov    %eax,-0x54(%ebp)
 876f768:	8b 45 80             	mov    -0x80(%ebp),%eax
 876f76b:	8d 14 17             	lea    (%edi,%edx,1),%edx
 876f76e:	8b bd 78 ff ff ff    	mov    -0x88(%ebp),%edi
 876f774:	33 bd 70 ff ff ff    	xor    -0x90(%ebp),%edi
 876f77a:	89 55 b0             	mov    %edx,-0x50(%ebp)
 876f77d:	c1 c8 02             	ror    $0x2,%eax
 876f780:	31 f7                	xor    %esi,%edi
 876f782:	8b 75 9c             	mov    -0x64(%ebp),%esi
 876f785:	33 7d a0             	xor    -0x60(%ebp),%edi
 876f788:	89 45 80             	mov    %eax,-0x80(%ebp)
 876f78b:	c1 cf 1f             	ror    $0x1f,%edi
 876f78e:	8d 94 3e d6 c1 62 ca 	lea    -0x359d3e2a(%esi,%edi,1),%edx
 876f795:	8b 75 94             	mov    -0x6c(%ebp),%esi
 876f798:	31 c6                	xor    %eax,%esi
 876f79a:	33 75 a8             	xor    -0x58(%ebp),%esi
 876f79d:	01 d6                	add    %edx,%esi
 876f79f:	8b 55 b0             	mov    -0x50(%ebp),%edx
 876f7a2:	c1 ca 1b             	ror    $0x1b,%edx
 876f7a5:	8d 14 16             	lea    (%esi,%edx,1),%edx
 876f7a8:	89 55 a0             	mov    %edx,-0x60(%ebp)
 876f7ab:	8b b5 7c ff ff ff    	mov    -0x84(%ebp),%esi
 876f7b1:	33 b5 74 ff ff ff    	xor    -0x8c(%ebp),%esi
 876f7b7:	8b 45 a8             	mov    -0x58(%ebp),%eax
 876f7ba:	31 ce                	xor    %ecx,%esi
 876f7bc:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 876f7bf:	33 75 a4             	xor    -0x5c(%ebp),%esi
 876f7c2:	c1 c8 02             	ror    $0x2,%eax
 876f7c5:	89 45 a8             	mov    %eax,-0x58(%ebp)
 876f7c8:	c1 ce 1f             	ror    $0x1f,%esi
 876f7cb:	8d 94 31 d6 c1 62 ca 	lea    -0x359d3e2a(%ecx,%esi,1),%edx
 876f7d2:	8b 4d 80             	mov    -0x80(%ebp),%ecx
 876f7d5:	31 c1                	xor    %eax,%ecx
 876f7d7:	8b 45 b0             	mov    -0x50(%ebp),%eax
 876f7da:	33 4d b0             	xor    -0x50(%ebp),%ecx
 876f7dd:	01 d1                	add    %edx,%ecx
 876f7df:	8b 55 a0             	mov    -0x60(%ebp),%edx
 876f7e2:	c1 c8 02             	ror    $0x2,%eax
 876f7e5:	89 45 b0             	mov    %eax,-0x50(%ebp)
 876f7e8:	c1 ca 1b             	ror    $0x1b,%edx
 876f7eb:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 876f7ee:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 876f7f1:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 876f7f4:	8b 55 80             	mov    -0x80(%ebp),%edx
 876f7f7:	33 8d 78 ff ff ff    	xor    -0x88(%ebp),%ecx
 876f7fd:	33 8d 1c ff ff ff    	xor    -0xe4(%ebp),%ecx
 876f803:	33 4d ac             	xor    -0x54(%ebp),%ecx
 876f806:	c1 c9 1f             	ror    $0x1f,%ecx
 876f809:	8d 8c 0a d6 c1 62 ca 	lea    -0x359d3e2a(%edx,%ecx,1),%ecx
 876f810:	8b 55 a8             	mov    -0x58(%ebp),%edx
 876f813:	31 c2                	xor    %eax,%edx
 876f815:	8b 45 b0             	mov    -0x50(%ebp),%eax
 876f818:	33 55 a0             	xor    -0x60(%ebp),%edx
 876f81b:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 876f81e:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 876f821:	c1 c9 1b             	ror    $0x1b,%ecx
 876f824:	8d 0c 0a             	lea    (%edx,%ecx,1),%ecx
 876f827:	8b 55 84             	mov    -0x7c(%ebp),%edx
 876f82a:	89 4d ac             	mov    %ecx,-0x54(%ebp)
 876f82d:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 876f830:	33 95 7c ff ff ff    	xor    -0x84(%ebp),%edx
 876f836:	33 95 20 ff ff ff    	xor    -0xe0(%ebp),%edx
 876f83c:	c1 c9 02             	ror    $0x2,%ecx
 876f83f:	31 fa                	xor    %edi,%edx
 876f841:	8b 7d a8             	mov    -0x58(%ebp),%edi
 876f844:	31 c8                	xor    %ecx,%eax
 876f846:	89 4d a0             	mov    %ecx,-0x60(%ebp)
 876f849:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 876f84c:	c1 ca 1f             	ror    $0x1f,%edx
 876f84f:	33 45 a4             	xor    -0x5c(%ebp),%eax
 876f852:	8d 94 17 d6 c1 62 ca 	lea    -0x359d3e2a(%edi,%edx,1),%edx
 876f859:	8b bd 64 ff ff ff    	mov    -0x9c(%ebp),%edi
 876f85f:	01 c2                	add    %eax,%edx
 876f861:	8b 45 88             	mov    -0x78(%ebp),%eax
 876f864:	c1 c9 1b             	ror    $0x1b,%ecx
 876f867:	01 ca                	add    %ecx,%edx
 876f869:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 876f86c:	33 45 98             	xor    -0x68(%ebp),%eax
 876f86f:	33 45 8c             	xor    -0x74(%ebp),%eax
 876f872:	c1 c9 02             	ror    $0x2,%ecx
 876f875:	31 f0                	xor    %esi,%eax
 876f877:	c1 c8 1f             	ror    $0x1f,%eax
 876f87a:	8d b4 38 d6 c1 62 ca 	lea    -0x359d3e2a(%eax,%edi,1),%esi
 876f881:	8b 45 a0             	mov    -0x60(%ebp),%eax
 876f884:	03 75 b0             	add    -0x50(%ebp),%esi
 876f887:	31 c8                	xor    %ecx,%eax
 876f889:	33 45 ac             	xor    -0x54(%ebp),%eax
 876f88c:	8d 04 06             	lea    (%esi,%eax,1),%eax
 876f88f:	89 d6                	mov    %edx,%esi
 876f891:	c1 ce 1b             	ror    $0x1b,%esi
 876f894:	01 f0                	add    %esi,%eax
 876f896:	8b 75 08             	mov    0x8(%ebp),%esi
 876f899:	89 46 10             	mov    %eax,0x10(%esi)
 876f89c:	8b 7d a0             	mov    -0x60(%ebp),%edi
 876f89f:	01 56 14             	add    %edx,0x14(%esi)
 876f8a2:	8b 55 ac             	mov    -0x54(%ebp),%edx
 876f8a5:	01 4e 1c             	add    %ecx,0x1c(%esi)
 876f8a8:	01 7e 20             	add    %edi,0x20(%esi)
 876f8ab:	c1 ca 02             	ror    $0x2,%edx
 876f8ae:	01 56 18             	add    %edx,0x18(%esi)
 876f8b1:	81 c4 dc 00 00 00    	add    $0xdc,%esp
 876f8b7:	5e                   	pop    %esi
 876f8b8:	5f                   	pop    %edi
 876f8b9:	5d                   	pop    %ebp
 876f8ba:	c3                   	ret
 876f8bb:	90                   	nop
 876f8bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::SHA::Transform @ 0x876e390

/* TaoCrypt::SHA::Transform() */

void __thiscall TaoCrypt::SHA::Transform(SHA *this)

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
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  
  uVar1 = *(uint *)(this + 0x10);
  uVar7 = *(uint *)(this + 0x1c);
  uVar12 = *(uint *)(this + 0x14);
  uVar6 = *(uint *)(this + 0x18);
  uVar16 = *(uint *)(this + 0x30) + *(int *)(this + 0x20) + 0x5a827999 +
           (uVar1 >> 0x1b | uVar1 << 5) + ((uVar7 ^ uVar6) & uVar12 ^ uVar7);
  uVar23 = uVar12 >> 2 | uVar12 << 0x1e;
  uVar7 = uVar7 + 0x5a827999 + *(uint *)(this + 0x34) + ((uVar23 ^ uVar6) & uVar1 ^ uVar6) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar12 = *(uint *)(this + 0x38);
  uVar18 = uVar1 >> 2 | uVar1 << 0x1e;
  uVar2 = ((uVar18 ^ uVar23) & uVar16 ^ uVar23) + uVar6 + 0x5a827999 + uVar12 +
          (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar6 = *(uint *)(this + 0x3c);
  uVar3 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar8 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar16 = uVar23 + 0x5a827999 + uVar6 + ((uVar3 ^ uVar18) & uVar7 ^ uVar18) +
           (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar23 = *(uint *)(this + 0x40);
  uVar7 = uVar18 + 0x5a827999 + uVar23 + ((uVar8 ^ uVar3) & uVar2 ^ uVar3) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar18 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = *(uint *)(this + 0x44);
  uVar24 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = ((uVar18 ^ uVar8) & uVar16 ^ uVar8) + uVar3 + 0x5a827999 + uVar2 +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar3 = *(uint *)(this + 0x48);
  uVar9 = uVar8 + 0x5a827999 + uVar3 + ((uVar24 ^ uVar18) & uVar7 ^ uVar18) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar8 = *(uint *)(this + 0x4c);
  uVar7 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar13 = ((uVar7 ^ uVar24) & uVar16 ^ uVar24) + uVar18 + 0x5a827999 + uVar8 +
           (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar4 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar18 = *(uint *)(this + 0x50);
  uVar10 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar16 = uVar24 + 0x5a827999 + uVar18 + ((uVar4 ^ uVar7) & uVar9 ^ uVar7) +
           (uVar13 >> 0x1b | uVar13 * 0x20);
  uVar9 = *(uint *)(this + 0x54);
  uVar7 = uVar7 + 0x5a827999 + uVar9 + ((uVar10 ^ uVar4) & uVar13 ^ uVar4) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar14 = uVar13 >> 2 | uVar13 * 0x40000000;
  uVar13 = *(uint *)(this + 0x58);
  uVar25 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar24 = ((uVar14 ^ uVar10) & uVar16 ^ uVar10) + uVar4 + 0x5a827999 + uVar13 +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar4 = *(uint *)(this + 0x5c);
  uVar19 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar16 = uVar10 + 0x5a827999 + uVar4 + ((uVar25 ^ uVar14) & uVar7 ^ uVar14) +
           (uVar24 >> 0x1b | uVar24 * 0x20);
  uVar10 = *(uint *)(this + 0x60);
  uVar7 = uVar14 + 0x5a827999 + uVar10 + ((uVar19 ^ uVar25) & uVar24 ^ uVar25) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar5 = uVar24 >> 2 | uVar24 * 0x40000000;
  uVar24 = *(uint *)(this + 100);
  uVar11 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar26 = ((uVar5 ^ uVar19) & uVar16 ^ uVar19) + uVar25 + 0x5a827999 + uVar24 +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar15 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar14 = *(uint *)(this + 0x68);
  uVar25 = uVar19 + 0x5a827999 + uVar14 + ((uVar11 ^ uVar5) & uVar7 ^ uVar5) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar19 = *(uint *)(this + 0x6c);
  uVar16 = ((uVar15 ^ uVar11) & uVar26 ^ uVar11) + uVar5 + 0x5a827999 + uVar19 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar27 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar7 = uVar12 ^ *(uint *)(this + 0x30) ^ uVar18 ^ uVar24;
  uVar5 = uVar7 >> 0x1f | uVar7 << 1;
  uVar20 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar25 = ((uVar27 ^ uVar15) & uVar25 ^ uVar15) + uVar11 + 0x5a827999 + uVar5 +
           (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar7 = uVar6 ^ *(uint *)(this + 0x34) ^ uVar9 ^ uVar14;
  uVar26 = uVar7 >> 0x1f | uVar7 << 1;
  uVar11 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar15 + 0x5a827999 + uVar26 + ((uVar20 ^ uVar27) & uVar16 ^ uVar27) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar7 = uVar23 ^ uVar12 ^ uVar13 ^ uVar19;
  uVar15 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar27 + 0x5a827999 + uVar15 + ((uVar11 ^ uVar20) & uVar25 ^ uVar20) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar12 = uVar2 ^ uVar6 ^ uVar4 ^ uVar5;
  uVar6 = uVar12 >> 0x1f | uVar12 << 1;
  uVar12 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar25 = ((uVar12 ^ uVar11) & uVar16 ^ uVar11) + uVar20 + 0x5a827999 + uVar6 +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar20 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar3 ^ uVar23 ^ uVar10 ^ uVar26;
  uVar23 = uVar16 >> 0x1f | uVar16 << 1;
  uVar28 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar16 = (uVar20 ^ uVar12 ^ uVar7) + uVar11 + 0x6ed9eba1 + uVar23 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar7 = uVar8 ^ uVar2 ^ uVar24 ^ uVar15;
  uVar2 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar12 + 0x6ed9eba1 + uVar2 + (uVar28 ^ uVar20 ^ uVar25) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar25 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar12 = uVar18 ^ uVar3 ^ uVar14 ^ uVar6;
  uVar3 = uVar12 >> 0x1f | uVar12 << 1;
  uVar27 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar12 = (uVar25 ^ uVar28 ^ uVar16) + uVar20 + 0x6ed9eba1 + uVar3 + (uVar7 >> 0x1b | uVar7 * 0x20)
  ;
  uVar16 = uVar9 ^ uVar8 ^ uVar19 ^ uVar23;
  uVar20 = uVar16 >> 0x1f | uVar16 << 1;
  uVar11 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar16 = uVar28 + 0x6ed9eba1 + uVar20 + (uVar27 ^ uVar25 ^ uVar7) +
           (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar7 = uVar13 ^ uVar18 ^ uVar5 ^ uVar2;
  uVar8 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar25 + 0x6ed9eba1 + uVar8 + (uVar11 ^ uVar27 ^ uVar12) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar12 = uVar4 ^ uVar9 ^ uVar26 ^ uVar3;
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar28 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar25 = (uVar18 ^ uVar11 ^ uVar16) + uVar27 + 0x6ed9eba1 + uVar12 +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar16 = uVar10 ^ uVar13 ^ uVar15 ^ uVar20;
  uVar21 = uVar16 >> 0x1f | uVar16 << 1;
  uVar16 = uVar11 + 0x6ed9eba1 + uVar21 + (uVar28 ^ uVar18 ^ uVar7) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar9 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar7 = uVar24 ^ uVar4 ^ uVar6 ^ uVar8;
  uVar22 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar18 + 0x6ed9eba1 + uVar22 + (uVar9 ^ uVar28 ^ uVar25) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar13 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar18 = uVar14 ^ uVar10 ^ uVar23 ^ uVar12;
  uVar27 = uVar18 >> 0x1f | uVar18 << 1;
  uVar4 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar11 = (uVar13 ^ uVar9 ^ uVar16) + uVar28 + 0x6ed9eba1 + uVar27 + (uVar7 >> 0x1b | uVar7 * 0x20)
  ;
  uVar16 = uVar19 ^ uVar24 ^ uVar2 ^ uVar21;
  uVar18 = uVar16 >> 0x1f | uVar16 << 1;
  uVar10 = (uVar4 ^ uVar13 ^ uVar7) + uVar9 + 0x6ed9eba1 + uVar18 + (uVar11 >> 0x1b | uVar11 * 0x20)
  ;
  uVar24 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar16 = uVar5 ^ uVar14 ^ uVar3 ^ uVar22;
  uVar9 = uVar16 >> 0x1f | uVar16 << 1;
  uVar25 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar11 = (uVar24 ^ uVar4 ^ uVar11) + uVar13 + 0x6ed9eba1 + uVar9 +
           (uVar10 >> 0x1b | uVar10 * 0x20);
  uVar16 = uVar26 ^ uVar19 ^ uVar20 ^ uVar27;
  uVar13 = uVar16 >> 0x1f | uVar16 << 1;
  uVar7 = (uVar25 ^ uVar24 ^ uVar10) + uVar4 + 0x6ed9eba1 + uVar13 +
          (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar14 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar16 = uVar15 ^ uVar5 ^ uVar8 ^ uVar18;
  uVar4 = uVar16 >> 0x1f | uVar16 << 1;
  uVar5 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar19 = (uVar14 ^ uVar25 ^ uVar11) + uVar24 + 0x6ed9eba1 + uVar4 + (uVar7 >> 0x1b | uVar7 * 0x20)
  ;
  uVar16 = uVar6 ^ uVar26 ^ uVar12 ^ uVar9;
  uVar28 = uVar16 >> 0x1f | uVar16 << 1;
  uVar24 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar7 = (uVar5 ^ uVar14 ^ uVar7) + uVar25 + 0x6ed9eba1 + uVar28 + (uVar19 >> 0x1b | uVar19 * 0x20)
  ;
  uVar16 = uVar23 ^ uVar15 ^ uVar21 ^ uVar13;
  uVar10 = uVar16 >> 0x1f | uVar16 << 1;
  uVar14 = (uVar24 ^ uVar5 ^ uVar19) + uVar14 + 0x6ed9eba1 + uVar10 + (uVar7 >> 0x1b | uVar7 * 0x20)
  ;
  uVar19 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar16 = uVar2 ^ uVar6 ^ uVar22 ^ uVar4;
  uVar6 = uVar16 >> 0x1f | uVar16 << 1;
  uVar11 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar5 = (uVar19 ^ uVar24 ^ uVar7) + uVar5 + 0x6ed9eba1 + uVar6 + (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar16 = uVar3 ^ uVar23 ^ uVar27 ^ uVar28;
  uVar23 = uVar16 >> 0x1f | uVar16 << 1;
  uVar7 = (uVar11 ^ uVar19 ^ uVar14) + uVar24 + 0x6ed9eba1 + uVar23 + (uVar5 >> 0x1b | uVar5 * 0x20)
  ;
  uVar24 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar16 = uVar20 ^ uVar2 ^ uVar18 ^ uVar10;
  uVar2 = uVar16 >> 0x1f | uVar16 << 1;
  uVar25 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar19 = (uVar24 ^ uVar11 ^ uVar5) + uVar19 + 0x6ed9eba1 + uVar2 + (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar16 = uVar8 ^ uVar3 ^ uVar9 ^ uVar6;
  uVar17 = uVar16 >> 0x1f | uVar16 << 1;
  uVar5 = uVar11 + 0x6ed9eba1 + uVar17 + (uVar25 ^ uVar24 ^ uVar7) +
          (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar3 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar16 = uVar12 ^ uVar20 ^ uVar13 ^ uVar23;
  uVar14 = uVar16 >> 0x1f | uVar16 << 1;
  uVar16 = uVar24 + 0x6ed9eba1 + uVar14 + (uVar3 ^ uVar25 ^ uVar19) + (uVar5 >> 0x1b | uVar5 * 0x20)
  ;
  uVar24 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar7 = uVar21 ^ uVar8 ^ uVar4 ^ uVar2;
  uVar11 = uVar7 >> 0x1f | uVar7 << 1;
  uVar19 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar8 = ((uVar5 | uVar24) & uVar3 | uVar5 & uVar24) + uVar25 + 0x8f1bbcdc + uVar11 +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar7 = uVar22 ^ uVar12 ^ uVar28 ^ uVar17;
  uVar25 = uVar7 >> 0x1f | uVar7 << 1;
  uVar12 = ((uVar16 | uVar19) & uVar24 | uVar16 & uVar19) + uVar3 + 0x8f1bbcdc + uVar25 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar5 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar27 ^ uVar21 ^ uVar10 ^ uVar14;
  uVar3 = uVar16 >> 0x1f | uVar16 << 1;
  uVar15 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar16 = ((uVar8 | uVar5) & uVar19 | uVar8 & uVar5) + uVar24 + 0x8f1bbcdc + uVar3 +
           (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar7 = uVar18 ^ uVar22 ^ uVar6 ^ uVar11;
  uVar8 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = ((uVar12 | uVar15) & uVar5 | uVar12 & uVar15) + uVar19 + 0x8f1bbcdc + uVar8 +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar19 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar12 = uVar9 ^ uVar27 ^ uVar23 ^ uVar25;
  uVar24 = uVar12 >> 0x1f | uVar12 << 1;
  uVar20 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = ((uVar16 | uVar19) & uVar15 | uVar16 & uVar19) + uVar5 + 0x8f1bbcdc + uVar24 +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar12 = uVar13 ^ uVar18 ^ uVar2 ^ uVar3;
  uVar26 = uVar12 >> 0x1f | uVar12 << 1;
  uVar5 = uVar15 + 0x8f1bbcdc + uVar26 + ((uVar7 | uVar20) & uVar19 | uVar7 & uVar20) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar12 = uVar4 ^ uVar9 ^ uVar17 ^ uVar8;
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar9 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar19 = ((uVar16 | uVar9) & uVar20 | uVar16 & uVar9) + uVar19 + 0x8f1bbcdc + uVar12 +
           (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar15 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar28 ^ uVar13 ^ uVar14 ^ uVar24;
  uVar18 = uVar16 >> 0x1f | uVar16 << 1;
  uVar27 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar16 = uVar20 + 0x8f1bbcdc + uVar18 + ((uVar5 | uVar15) & uVar9 | uVar5 & uVar15) +
           (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar7 = uVar10 ^ uVar4 ^ uVar11 ^ uVar26;
  uVar5 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar6 ^ uVar28 ^ uVar25 ^ uVar12;
  uVar20 = uVar9 + 0x8f1bbcdc + uVar5 + ((uVar19 | uVar27) & uVar15 | uVar19 & uVar27) +
           (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar9 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar4 = ((uVar16 | uVar7) & uVar27 | uVar16 & uVar7) + uVar15 + 0x8f1bbcdc + uVar9 +
          (uVar20 >> 0x1b | uVar20 * 0x20);
  uVar19 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar23 ^ uVar10 ^ uVar3 ^ uVar18;
  uVar13 = uVar16 >> 0x1f | uVar16 << 1;
  uVar28 = uVar20 >> 2 | uVar20 * 0x40000000;
  uVar10 = uVar27 + 0x8f1bbcdc + uVar13 + ((uVar20 | uVar19) & uVar7 | uVar20 & uVar19) +
           (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar16 = uVar2 ^ uVar6 ^ uVar8 ^ uVar5;
  uVar6 = uVar16 >> 0x1f | uVar16 << 1;
  uVar16 = ((uVar4 | uVar28) & uVar19 | uVar4 & uVar28) + uVar7 + 0x8f1bbcdc + uVar6 +
           (uVar10 >> 0x1b | uVar10 * 0x20);
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar7 = uVar17 ^ uVar23 ^ uVar24 ^ uVar9;
  uVar23 = uVar7 >> 0x1f | uVar7 << 1;
  uVar27 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar7 = ((uVar10 | uVar4) & uVar28 | uVar10 & uVar4) + uVar19 + 0x8f1bbcdc + uVar23 +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar2 = uVar14 ^ uVar2 ^ uVar26 ^ uVar13;
  uVar15 = uVar2 >> 0x1f | uVar2 << 1;
  uVar10 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar19 = uVar28 + 0x8f1bbcdc + uVar15 + ((uVar16 | uVar27) & uVar4 | uVar16 & uVar27) +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar16 = uVar11 ^ uVar17 ^ uVar12 ^ uVar6;
  uVar2 = uVar16 >> 0x1f | uVar16 << 1;
  uVar16 = uVar4 + 0x8f1bbcdc + uVar2 + ((uVar7 | uVar10) & uVar27 | uVar7 & uVar10) +
           (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar20 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar7 = uVar25 ^ uVar14 ^ uVar18 ^ uVar23;
  uVar4 = uVar7 >> 0x1f | uVar7 << 1;
  uVar17 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar7 = ((uVar19 | uVar20) & uVar10 | uVar19 & uVar20) + uVar27 + 0x8f1bbcdc + uVar4 +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar14 = uVar3 ^ uVar11 ^ uVar5 ^ uVar15;
  uVar27 = uVar14 >> 0x1f | uVar14 << 1;
  uVar19 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar10 + 0x8f1bbcdc + uVar27 + ((uVar16 | uVar17) & uVar20 | uVar16 & uVar17) +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar10 = uVar8 ^ uVar25 ^ uVar9 ^ uVar2;
  uVar28 = uVar10 >> 0x1f | uVar10 << 1;
  uVar10 = uVar20 + 0x8f1bbcdc + uVar28 + ((uVar7 | uVar19) & uVar17 | uVar7 & uVar19) +
           (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar11 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar7 = uVar24 ^ uVar3 ^ uVar13 ^ uVar4;
  uVar3 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = ((uVar16 | uVar11) & uVar19 | uVar16 & uVar11) + uVar17 + 0x8f1bbcdc + uVar3 +
          (uVar10 >> 0x1b | uVar10 * 0x20);
  uVar14 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar26 ^ uVar8 ^ uVar6 ^ uVar27;
  uVar8 = uVar16 >> 0x1f | uVar16 << 1;
  uVar25 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar19 = ((uVar10 | uVar14) & uVar11 | uVar10 & uVar14) + uVar19 + 0x8f1bbcdc + uVar8 +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar16 = uVar12 ^ uVar24 ^ uVar23 ^ uVar28;
  uVar10 = uVar16 >> 0x1f | uVar16 << 1;
  uVar16 = (uVar25 ^ uVar14 ^ uVar7) + uVar11 + 0xca62c1d6 + uVar10 +
           (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar20 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar7 = uVar18 ^ uVar26 ^ uVar15 ^ uVar3;
  uVar24 = uVar7 >> 0x1f | uVar7 << 1;
  uVar11 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar7 = (uVar20 ^ uVar25 ^ uVar19) + uVar14 + 0xca62c1d6 + uVar24 +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar12 = uVar5 ^ uVar12 ^ uVar2 ^ uVar8;
  uVar14 = uVar12 >> 0x1f | uVar12 << 1;
  uVar12 = uVar25 + 0xca62c1d6 + uVar14 + (uVar11 ^ uVar20 ^ uVar16) +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar19 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar9 ^ uVar18 ^ uVar4 ^ uVar10;
  uVar18 = uVar16 >> 0x1f | uVar16 << 1;
  uVar25 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar26 = (uVar19 ^ uVar11 ^ uVar7) + uVar20 + 0xca62c1d6 + uVar18 +
           (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar16 = uVar13 ^ uVar5 ^ uVar27 ^ uVar24;
  uVar17 = uVar16 >> 0x1f | uVar16 << 1;
  uVar5 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar7 = uVar11 + 0xca62c1d6 + uVar17 + (uVar25 ^ uVar19 ^ uVar12) +
          (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar16 = uVar6 ^ uVar9 ^ uVar28 ^ uVar14;
  uVar9 = uVar16 >> 0x1f | uVar16 << 1;
  uVar16 = (uVar5 ^ uVar25 ^ uVar26) + uVar19 + 0xca62c1d6 + uVar9 + (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar26 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar12 = uVar23 ^ uVar13 ^ uVar3 ^ uVar18;
  uVar21 = uVar12 >> 0x1f | uVar12 << 1;
  uVar13 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar11 = (uVar26 ^ uVar5 ^ uVar7) + uVar25 + 0xca62c1d6 + uVar21 +
           (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar7 = uVar15 ^ uVar6 ^ uVar8 ^ uVar17;
  uVar20 = uVar7 >> 0x1f | uVar7 << 1;
  uVar12 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar5 + 0xca62c1d6 + uVar20 + (uVar13 ^ uVar26 ^ uVar16) +
           (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar7 = uVar2 ^ uVar23 ^ uVar10 ^ uVar9;
  uVar19 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar26 + 0xca62c1d6 + uVar19 + (uVar12 ^ uVar13 ^ uVar11) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar5 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar6 = uVar4 ^ uVar15 ^ uVar24 ^ uVar21;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar13 = (uVar5 ^ uVar12 ^ uVar16) + uVar13 + 0xca62c1d6 + uVar6 + (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar11 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar27 ^ uVar2 ^ uVar14 ^ uVar20;
  uVar23 = uVar16 >> 0x1f | uVar16 << 1;
  uVar12 = (uVar13 >> 0x1b | uVar13 * 0x20) +
           (uVar11 ^ uVar5 ^ uVar7) + uVar12 + 0xca62c1d6 + uVar23;
  uVar16 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar7 = uVar28 ^ uVar4 ^ uVar18 ^ uVar19;
  uVar25 = uVar7 >> 0x1f | uVar7 << 1;
  uVar2 = (uVar12 >> 0x1b | uVar12 * 0x20) +
          (uVar16 ^ uVar11 ^ uVar13) + uVar5 + 0xca62c1d6 + uVar25;
  uVar13 = uVar13 >> 2 | uVar13 * 0x40000000;
  uVar7 = uVar3 ^ uVar27 ^ uVar17 ^ uVar6;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar13 ^ uVar16 ^ uVar12) + uVar11 + 0xca62c1d6 + uVar7;
  uVar12 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar5 = uVar8 ^ uVar28 ^ uVar9 ^ uVar23;
  uVar5 = uVar5 >> 0x1f | uVar5 << 1;
  uVar11 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar12 ^ uVar13 ^ uVar2) + uVar16 + 0xca62c1d6 + uVar5;
  uVar26 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar16 = uVar10 ^ uVar3 ^ uVar21 ^ uVar25;
  uVar2 = uVar16 >> 0x1f | uVar16 << 1;
  uVar16 = (uVar26 ^ uVar12 ^ uVar4) + uVar13 + 0xca62c1d6 + uVar2 +
           (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar3 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar7 = uVar24 ^ uVar8 ^ uVar20 ^ uVar7;
  uVar15 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar26 ^ uVar3 ^ uVar11) + uVar12 + 0xca62c1d6 + uVar15 +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar5 = uVar14 ^ uVar10 ^ uVar19 ^ uVar5;
  uVar8 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar4 = uVar5 >> 0x1f | uVar5 << 1;
  uVar13 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = (uVar3 ^ uVar8 ^ uVar16) + uVar26 + 0xca62c1d6 + uVar4 + (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar2 = uVar18 ^ uVar24 ^ uVar6 ^ uVar2;
  uVar12 = uVar3 + 0xca62c1d6 + (uVar2 >> 0x1f | uVar2 << 1) + (uVar8 ^ uVar13 ^ uVar7) +
           (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar7 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar15 = uVar17 ^ uVar14 ^ uVar23 ^ uVar15;
  uVar6 = uVar8 + 0xca62c1d6 + (uVar15 >> 0x1f | uVar15 << 1) + (uVar13 ^ uVar7 ^ uVar16) +
          (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar16 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar4 = uVar9 ^ uVar18 ^ uVar25 ^ uVar4;
  *(uint *)(this + 0x10) =
       (uVar4 >> 0x1f | uVar4 << 1) + 0xca62c1d6 + uVar1 + uVar13 + (uVar7 ^ uVar16 ^ uVar12) +
       (uVar6 >> 0x1b | uVar6 * 0x20);
  *(uint *)(this + 0x14) = *(int *)(this + 0x14) + uVar6;
  *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar16;
  *(uint *)(this + 0x20) = *(int *)(this + 0x20) + uVar7;
  *(uint *)(this + 0x18) = *(int *)(this + 0x18) + (uVar12 >> 2 | uVar12 * 0x40000000);
  return;
}

```

---

## Update

```asm
// === 0876fc60 TaoCrypt::SHA::Update  [0x0876fc60-0x876ff5f] ===
 876fc60:	55                   	push   %ebp
 876fc61:	89 e5                	mov    %esp,%ebp
 876fc63:	83 ec 38             	sub    $0x38,%esp
 876fc66:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 876fc69:	8b 55 0c             	mov    0xc(%ebp),%edx
 876fc6c:	e8 87 31 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876fc71:	81 c3 27 cf bf 00    	add    $0xbfcf27,%ebx
 876fc77:	89 75 f8             	mov    %esi,-0x8(%ebp)
 876fc7a:	8b 75 08             	mov    0x8(%ebp),%esi
 876fc7d:	89 7d fc             	mov    %edi,-0x4(%ebp)
 876fc80:	8b 7d 10             	mov    0x10(%ebp),%edi
 876fc83:	8b 83 38 fa ff ff    	mov    -0x5c8(%ebx),%eax
 876fc89:	80 38 00             	cmpb   $0x0,(%eax)
 876fc8c:	0f 84 8e 00 00 00    	je     876fd20 <_ZN8TaoCrypt3SHA6UpdateEPKhj+0xc0>
 876fc92:	8d 46 30             	lea    0x30(%esi),%eax
 876fc95:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 876fc98:	8b 46 04             	mov    0x4(%esi),%eax
 876fc9b:	85 c0                	test   %eax,%eax
 876fc9d:	75 39                	jne    876fcd8 <_ZN8TaoCrypt3SHA6UpdateEPKhj+0x78>
 876fc9f:	89 f8                	mov    %edi,%eax
 876fca1:	c1 e8 06             	shr    $0x6,%eax
 876fca4:	85 c0                	test   %eax,%eax
 876fca6:	0f 85 94 00 00 00    	jne    876fd40 <_ZN8TaoCrypt3SHA6UpdateEPKhj+0xe0>
 876fcac:	85 ff                	test   %edi,%edi
 876fcae:	74 19                	je     876fcc9 <_ZN8TaoCrypt3SHA6UpdateEPKhj+0x69>
 876fcb0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 876fcb3:	03 46 04             	add    0x4(%esi),%eax
 876fcb6:	89 7c 24 08          	mov    %edi,0x8(%esp)
 876fcba:	89 54 24 04          	mov    %edx,0x4(%esp)
 876fcbe:	89 04 24             	mov    %eax,(%esp)
 876fcc1:	e8 da db 90 ff       	call   807d8a0 <memcpy@plt>
 876fcc6:	01 7e 04             	add    %edi,0x4(%esi)
 876fcc9:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 876fccc:	8b 75 f8             	mov    -0x8(%ebp),%esi
 876fccf:	8b 7d fc             	mov    -0x4(%ebp),%edi
 876fcd2:	89 ec                	mov    %ebp,%esp
 876fcd4:	5d                   	pop    %ebp
 876fcd5:	c3                   	ret
 876fcd6:	66 90                	xchg   %ax,%ax
 876fcd8:	b9 40 00 00 00       	mov    $0x40,%ecx
 876fcdd:	29 c1                	sub    %eax,%ecx
 876fcdf:	39 cf                	cmp    %ecx,%edi
 876fce1:	0f 46 cf             	cmovbe %edi,%ecx
 876fce4:	03 45 e4             	add    -0x1c(%ebp),%eax
 876fce7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 876fceb:	89 54 24 04          	mov    %edx,0x4(%esp)
 876fcef:	89 55 e0             	mov    %edx,-0x20(%ebp)
 876fcf2:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 876fcf5:	89 04 24             	mov    %eax,(%esp)
 876fcf8:	e8 a3 db 90 ff       	call   807d8a0 <memcpy@plt>
 876fcfd:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 876fd00:	8b 46 04             	mov    0x4(%esi),%eax
 876fd03:	8b 55 e0             	mov    -0x20(%ebp),%edx
 876fd06:	29 cf                	sub    %ecx,%edi
 876fd08:	01 c8                	add    %ecx,%eax
 876fd0a:	01 ca                	add    %ecx,%edx
 876fd0c:	83 f8 40             	cmp    $0x40,%eax
 876fd0f:	89 46 04             	mov    %eax,0x4(%esi)
 876fd12:	74 6c                	je     876fd80 <_ZN8TaoCrypt3SHA6UpdateEPKhj+0x120>
 876fd14:	85 c0                	test   %eax,%eax
 876fd16:	75 94                	jne    876fcac <_ZN8TaoCrypt3SHA6UpdateEPKhj+0x4c>
 876fd18:	eb 85                	jmp    876fc9f <_ZN8TaoCrypt3SHA6UpdateEPKhj+0x3f>
 876fd1a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 876fd20:	89 7c 24 08          	mov    %edi,0x8(%esp)
 876fd24:	89 34 24             	mov    %esi,(%esp)
 876fd27:	89 54 24 04          	mov    %edx,0x4(%esp)
 876fd2b:	e8 40 8f fe ff       	call   8758c70 <_ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj>
 876fd30:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 876fd33:	8b 75 f8             	mov    -0x8(%ebp),%esi
 876fd36:	8b 7d fc             	mov    -0x4(%ebp),%edi
 876fd39:	89 ec                	mov    %ebp,%esp
 876fd3b:	5d                   	pop    %ebp
 876fd3c:	c3                   	ret
 876fd3d:	8d 76 00             	lea    0x0(%esi),%esi
 876fd40:	89 54 24 04          	mov    %edx,0x4(%esp)
 876fd44:	89 55 e0             	mov    %edx,-0x20(%ebp)
 876fd47:	89 44 24 08          	mov    %eax,0x8(%esp)
 876fd4b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 876fd4e:	89 34 24             	mov    %esi,(%esp)
 876fd51:	e8 7a 88 ff ff       	call   87685d0 <_ZN8TaoCrypt3SHA12AsmTransformEPKhj>
 876fd56:	8b 45 dc             	mov    -0x24(%ebp),%eax
 876fd59:	89 34 24             	mov    %esi,(%esp)
 876fd5c:	c1 e0 06             	shl    $0x6,%eax
 876fd5f:	89 44 24 04          	mov    %eax,0x4(%esp)
 876fd63:	89 45 dc             	mov    %eax,-0x24(%ebp)
 876fd66:	e8 85 8e fe ff       	call   8758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>
 876fd6b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 876fd6e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 876fd71:	29 c7                	sub    %eax,%edi
 876fd73:	01 c2                	add    %eax,%edx
 876fd75:	e9 32 ff ff ff       	jmp    876fcac <_ZN8TaoCrypt3SHA6UpdateEPKhj+0x4c>
 876fd7a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 876fd80:	8b 4e 30             	mov    0x30(%esi),%ecx
 876fd83:	89 c8                	mov    %ecx,%eax
 876fd85:	c1 c8 18             	ror    $0x18,%eax
 876fd88:	c1 c9 08             	ror    $0x8,%ecx
 876fd8b:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876fd90:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876fd96:	09 c8                	or     %ecx,%eax
 876fd98:	8b 4e 34             	mov    0x34(%esi),%ecx
 876fd9b:	89 46 30             	mov    %eax,0x30(%esi)
 876fd9e:	89 c8                	mov    %ecx,%eax
 876fda0:	c1 c8 18             	ror    $0x18,%eax
 876fda3:	c1 c9 08             	ror    $0x8,%ecx
 876fda6:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876fdab:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876fdb1:	09 c8                	or     %ecx,%eax
 876fdb3:	8b 4e 38             	mov    0x38(%esi),%ecx
 876fdb6:	89 46 34             	mov    %eax,0x34(%esi)
 876fdb9:	89 c8                	mov    %ecx,%eax
 876fdbb:	c1 c8 18             	ror    $0x18,%eax
 876fdbe:	c1 c9 08             	ror    $0x8,%ecx
 876fdc1:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876fdc6:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876fdcc:	09 c8                	or     %ecx,%eax
 876fdce:	8b 4e 3c             	mov    0x3c(%esi),%ecx
 876fdd1:	89 46 38             	mov    %eax,0x38(%esi)
 876fdd4:	89 c8                	mov    %ecx,%eax
 876fdd6:	c1 c8 18             	ror    $0x18,%eax
 876fdd9:	c1 c9 08             	ror    $0x8,%ecx
 876fddc:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876fde1:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876fde7:	09 c8                	or     %ecx,%eax
 876fde9:	8b 4e 40             	mov    0x40(%esi),%ecx
 876fdec:	89 46 3c             	mov    %eax,0x3c(%esi)
 876fdef:	89 c8                	mov    %ecx,%eax
 876fdf1:	c1 c8 18             	ror    $0x18,%eax
 876fdf4:	c1 c9 08             	ror    $0x8,%ecx
 876fdf7:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876fdfc:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876fe02:	09 c8                	or     %ecx,%eax
 876fe04:	8b 4e 44             	mov    0x44(%esi),%ecx
 876fe07:	89 46 40             	mov    %eax,0x40(%esi)
 876fe0a:	89 c8                	mov    %ecx,%eax
 876fe0c:	c1 c8 18             	ror    $0x18,%eax
 876fe0f:	c1 c9 08             	ror    $0x8,%ecx
 876fe12:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876fe17:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876fe1d:	09 c8                	or     %ecx,%eax
 876fe1f:	8b 4e 48             	mov    0x48(%esi),%ecx
 876fe22:	89 46 44             	mov    %eax,0x44(%esi)
 876fe25:	89 c8                	mov    %ecx,%eax
 876fe27:	c1 c8 18             	ror    $0x18,%eax
 876fe2a:	c1 c9 08             	ror    $0x8,%ecx
 876fe2d:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876fe32:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876fe38:	09 c8                	or     %ecx,%eax
 876fe3a:	8b 4e 4c             	mov    0x4c(%esi),%ecx
 876fe3d:	89 46 48             	mov    %eax,0x48(%esi)
 876fe40:	89 c8                	mov    %ecx,%eax
 876fe42:	c1 c8 18             	ror    $0x18,%eax
 876fe45:	c1 c9 08             	ror    $0x8,%ecx
 876fe48:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876fe4d:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876fe53:	09 c8                	or     %ecx,%eax
 876fe55:	8b 4e 50             	mov    0x50(%esi),%ecx
 876fe58:	89 46 4c             	mov    %eax,0x4c(%esi)
 876fe5b:	89 c8                	mov    %ecx,%eax
 876fe5d:	c1 c8 18             	ror    $0x18,%eax
 876fe60:	c1 c9 08             	ror    $0x8,%ecx
 876fe63:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876fe68:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876fe6e:	09 c8                	or     %ecx,%eax
 876fe70:	8b 4e 54             	mov    0x54(%esi),%ecx
 876fe73:	89 46 50             	mov    %eax,0x50(%esi)
 876fe76:	89 c8                	mov    %ecx,%eax
 876fe78:	c1 c8 18             	ror    $0x18,%eax
 876fe7b:	c1 c9 08             	ror    $0x8,%ecx
 876fe7e:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876fe83:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876fe89:	09 c8                	or     %ecx,%eax
 876fe8b:	8b 4e 58             	mov    0x58(%esi),%ecx
 876fe8e:	89 46 54             	mov    %eax,0x54(%esi)
 876fe91:	89 c8                	mov    %ecx,%eax
 876fe93:	c1 c8 18             	ror    $0x18,%eax
 876fe96:	c1 c9 08             	ror    $0x8,%ecx
 876fe99:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876fe9e:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876fea4:	09 c8                	or     %ecx,%eax
 876fea6:	8b 4e 5c             	mov    0x5c(%esi),%ecx
 876fea9:	89 46 58             	mov    %eax,0x58(%esi)
 876feac:	89 c8                	mov    %ecx,%eax
 876feae:	c1 c8 18             	ror    $0x18,%eax
 876feb1:	c1 c9 08             	ror    $0x8,%ecx
 876feb4:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876feb9:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876febf:	09 c8                	or     %ecx,%eax
 876fec1:	8b 4e 60             	mov    0x60(%esi),%ecx
 876fec4:	89 46 5c             	mov    %eax,0x5c(%esi)
 876fec7:	89 c8                	mov    %ecx,%eax
 876fec9:	c1 c8 18             	ror    $0x18,%eax
 876fecc:	c1 c9 08             	ror    $0x8,%ecx
 876fecf:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876fed4:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876feda:	09 c8                	or     %ecx,%eax
 876fedc:	8b 4e 64             	mov    0x64(%esi),%ecx
 876fedf:	89 46 60             	mov    %eax,0x60(%esi)
 876fee2:	89 c8                	mov    %ecx,%eax
 876fee4:	c1 c8 18             	ror    $0x18,%eax
 876fee7:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876feec:	c1 c9 08             	ror    $0x8,%ecx
 876feef:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876fef5:	09 c8                	or     %ecx,%eax
 876fef7:	8b 4e 68             	mov    0x68(%esi),%ecx
 876fefa:	89 46 64             	mov    %eax,0x64(%esi)
 876fefd:	89 c8                	mov    %ecx,%eax
 876feff:	c1 c8 18             	ror    $0x18,%eax
 876ff02:	c1 c9 08             	ror    $0x8,%ecx
 876ff05:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876ff0a:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876ff10:	09 c8                	or     %ecx,%eax
 876ff12:	8b 4e 6c             	mov    0x6c(%esi),%ecx
 876ff15:	89 46 68             	mov    %eax,0x68(%esi)
 876ff18:	89 c8                	mov    %ecx,%eax
 876ff1a:	c1 c8 18             	ror    $0x18,%eax
 876ff1d:	c1 c9 08             	ror    $0x8,%ecx
 876ff20:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 876ff25:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 876ff2b:	09 c8                	or     %ecx,%eax
 876ff2d:	89 46 6c             	mov    %eax,0x6c(%esi)
 876ff30:	8b 06                	mov    (%esi),%eax
 876ff32:	89 34 24             	mov    %esi,(%esp)
 876ff35:	89 55 e0             	mov    %edx,-0x20(%ebp)
 876ff38:	ff 50 24             	call   *0x24(%eax)
 876ff3b:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
 876ff42:	00 
 876ff43:	89 34 24             	mov    %esi,(%esp)
 876ff46:	e8 a5 8c fe ff       	call   8758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>
 876ff4b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 876ff4e:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 876ff55:	e9 45 fd ff ff       	jmp    876fc9f <_ZN8TaoCrypt3SHA6UpdateEPKhj+0x3f>
 876ff5a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::SHA::Update @ 0x876fc60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA::Update(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::SHA::Update(SHA *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*PTR_isMMX_0936c5d0 == '\0') {
    HASHwithTransform::Update((HASHwithTransform *)this,param_1,param_2);
    return;
  }
  iVar3 = *(int *)(this + 4);
  if (iVar3 != 0) {
    uVar2 = 0x40U - iVar3;
    if (param_2 <= 0x40U - iVar3) {
      uVar2 = param_2;
    }
    memcpy(this + iVar3 + 0x30,param_1,uVar2);
    param_2 = param_2 - uVar2;
    iVar3 = *(int *)(this + 4) + uVar2;
    param_1 = param_1 + uVar2;
    *(int *)(this + 4) = iVar3;
    if (iVar3 == 0x40) {
      uVar2 = *(uint *)(this + 0x30);
      uVar1 = *(uint *)(this + 0x34);
      *(uint *)(this + 0x30) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      uVar2 = *(uint *)(this + 0x38);
      *(uint *)(this + 0x34) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar1 = *(uint *)(this + 0x3c);
      *(uint *)(this + 0x38) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      uVar2 = *(uint *)(this + 0x40);
      *(uint *)(this + 0x3c) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar1 = *(uint *)(this + 0x44);
      *(uint *)(this + 0x40) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      uVar2 = *(uint *)(this + 0x48);
      *(uint *)(this + 0x44) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar1 = *(uint *)(this + 0x4c);
      *(uint *)(this + 0x48) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      uVar2 = *(uint *)(this + 0x50);
      *(uint *)(this + 0x4c) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar1 = *(uint *)(this + 0x54);
      *(uint *)(this + 0x50) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      uVar2 = *(uint *)(this + 0x58);
      *(uint *)(this + 0x54) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar1 = *(uint *)(this + 0x5c);
      *(uint *)(this + 0x58) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      uVar2 = *(uint *)(this + 0x60);
      *(uint *)(this + 0x5c) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar1 = *(uint *)(this + 100);
      *(uint *)(this + 0x60) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      uVar2 = *(uint *)(this + 0x68);
      *(uint *)(this + 100) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar1 = *(uint *)(this + 0x6c);
      *(uint *)(this + 0x68) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      *(uint *)(this + 0x6c) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      (**(code **)(*(int *)this + 0x24))(this);
      HASHwithTransform::AddLength((HASHwithTransform *)this,0x40);
      *(undefined4 *)(this + 4) = 0;
    }
    else if (iVar3 != 0) goto LAB_0876fcac;
  }
  uVar2 = param_2 >> 6;
  if (uVar2 != 0) {
    AsmTransform(this,param_1,uVar2);
    HASHwithTransform::AddLength((HASHwithTransform *)this,uVar2 * 0x40);
    param_2 = param_2 + uVar2 * -0x40;
    param_1 = param_1 + uVar2 * 0x40;
  }
LAB_0876fcac:
  if (param_2 != 0) {
    memcpy(this + *(int *)(this + 4) + 0x30,param_1,param_2);
    *(uint *)(this + 4) = *(int *)(this + 4) + param_2;
  }
  return;
}

```

---

## operator=

```asm
// === 08770510 TaoCrypt::SHA::operator=  [0x08770510-0x87707df] ===
 8770510:	55                   	push   %ebp
 8770511:	89 e5                	mov    %esp,%ebp
 8770513:	81 ec 98 00 00 00    	sub    $0x98,%esp
 8770519:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 877051c:	8b 45 0c             	mov    0xc(%ebp),%eax
 877051f:	e8 d4 28 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8770524:	81 c3 74 c6 bf 00    	add    $0xbfc674,%ebx
 877052a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 877052d:	8b 75 08             	mov    0x8(%ebp),%esi
 8770530:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8770533:	8d bd 78 ff ff ff    	lea    -0x88(%ebp),%edi
 8770539:	89 44 24 04          	mov    %eax,0x4(%esp)
 877053d:	89 3c 24             	mov    %edi,(%esp)
 8770540:	e8 db fe ff ff       	call   8770420 <_ZN8TaoCrypt3SHAC1ERKS0_>
 8770545:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8770549:	89 34 24             	mov    %esi,(%esp)
 877054c:	e8 4f f6 ff ff       	call   876fba0 <_ZN8TaoCrypt3SHA4SwapERS0_>
 8770551:	89 f0                	mov    %esi,%eax
 8770553:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8770556:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8770559:	8b 7d fc             	mov    -0x4(%ebp),%edi
 877055c:	89 ec                	mov    %ebp,%esp
 877055e:	5d                   	pop    %ebp
 877055f:	c3                   	ret

08770560 <_ZNK8TaoCrypt3SHA12getByteOrderEv>:
 8770560:	55                   	push   %ebp
 8770561:	b8 01 00 00 00       	mov    $0x1,%eax
 8770566:	89 e5                	mov    %esp,%ebp
 8770568:	5d                   	pop    %ebp
 8770569:	c3                   	ret
 877056a:	90                   	nop
 877056b:	90                   	nop
 877056c:	90                   	nop
 877056d:	90                   	nop
 877056e:	90                   	nop
 877056f:	90                   	nop

08770570 <_ZNK8TaoCrypt3SHA12getBlockSizeEv>:
 8770570:	55                   	push   %ebp
 8770571:	b8 40 00 00 00       	mov    $0x40,%eax
 8770576:	89 e5                	mov    %esp,%ebp
 8770578:	5d                   	pop    %ebp
 8770579:	c3                   	ret
 877057a:	90                   	nop
 877057b:	90                   	nop
 877057c:	90                   	nop
 877057d:	90                   	nop
 877057e:	90                   	nop
 877057f:	90                   	nop

08770580 <_ZNK8TaoCrypt3SHA13getDigestSizeEv>:
 8770580:	55                   	push   %ebp
 8770581:	b8 14 00 00 00       	mov    $0x14,%eax
 8770586:	89 e5                	mov    %esp,%ebp
 8770588:	5d                   	pop    %ebp
 8770589:	c3                   	ret
 877058a:	90                   	nop
 877058b:	90                   	nop
 877058c:	90                   	nop
 877058d:	90                   	nop
 877058e:	90                   	nop
 877058f:	90                   	nop

08770590 <_ZNK8TaoCrypt3SHA10getPadSizeEv>:
 8770590:	55                   	push   %ebp
 8770591:	b8 38 00 00 00       	mov    $0x38,%eax
 8770596:	89 e5                	mov    %esp,%ebp
 8770598:	5d                   	pop    %ebp
 8770599:	c3                   	ret
 877059a:	90                   	nop
 877059b:	90                   	nop
 877059c:	90                   	nop
 877059d:	90                   	nop
 877059e:	90                   	nop
 877059f:	90                   	nop

087705a0 <_ZNK8TaoCrypt6SHA25612getByteOrderEv>:
 87705a0:	55                   	push   %ebp
 87705a1:	b8 01 00 00 00       	mov    $0x1,%eax
 87705a6:	89 e5                	mov    %esp,%ebp
 87705a8:	5d                   	pop    %ebp
 87705a9:	c3                   	ret
 87705aa:	90                   	nop
 87705ab:	90                   	nop
 87705ac:	90                   	nop
 87705ad:	90                   	nop
 87705ae:	90                   	nop
 87705af:	90                   	nop

087705b0 <_ZNK8TaoCrypt6SHA25612getBlockSizeEv>:
 87705b0:	55                   	push   %ebp
 87705b1:	b8 40 00 00 00       	mov    $0x40,%eax
 87705b6:	89 e5                	mov    %esp,%ebp
 87705b8:	5d                   	pop    %ebp
 87705b9:	c3                   	ret
 87705ba:	90                   	nop
 87705bb:	90                   	nop
 87705bc:	90                   	nop
 87705bd:	90                   	nop
 87705be:	90                   	nop
 87705bf:	90                   	nop

087705c0 <_ZNK8TaoCrypt6SHA25613getDigestSizeEv>:
 87705c0:	55                   	push   %ebp
 87705c1:	b8 20 00 00 00       	mov    $0x20,%eax
 87705c6:	89 e5                	mov    %esp,%ebp
 87705c8:	5d                   	pop    %ebp
 87705c9:	c3                   	ret
 87705ca:	90                   	nop
 87705cb:	90                   	nop
 87705cc:	90                   	nop
 87705cd:	90                   	nop
 87705ce:	90                   	nop
 87705cf:	90                   	nop

087705d0 <_ZNK8TaoCrypt6SHA25610getPadSizeEv>:
 87705d0:	55                   	push   %ebp
 87705d1:	b8 38 00 00 00       	mov    $0x38,%eax
 87705d6:	89 e5                	mov    %esp,%ebp
 87705d8:	5d                   	pop    %ebp
 87705d9:	c3                   	ret
 87705da:	90                   	nop
 87705db:	90                   	nop
 87705dc:	90                   	nop
 87705dd:	90                   	nop
 87705de:	90                   	nop
 87705df:	90                   	nop

087705e0 <_ZNK8TaoCrypt6SHA22412getByteOrderEv>:
 87705e0:	55                   	push   %ebp
 87705e1:	b8 01 00 00 00       	mov    $0x1,%eax
 87705e6:	89 e5                	mov    %esp,%ebp
 87705e8:	5d                   	pop    %ebp
 87705e9:	c3                   	ret
 87705ea:	90                   	nop
 87705eb:	90                   	nop
 87705ec:	90                   	nop
 87705ed:	90                   	nop
 87705ee:	90                   	nop
 87705ef:	90                   	nop

087705f0 <_ZNK8TaoCrypt6SHA22412getBlockSizeEv>:
 87705f0:	55                   	push   %ebp
 87705f1:	b8 40 00 00 00       	mov    $0x40,%eax
 87705f6:	89 e5                	mov    %esp,%ebp
 87705f8:	5d                   	pop    %ebp
 87705f9:	c3                   	ret
 87705fa:	90                   	nop
 87705fb:	90                   	nop
 87705fc:	90                   	nop
 87705fd:	90                   	nop
 87705fe:	90                   	nop
 87705ff:	90                   	nop

08770600 <_ZNK8TaoCrypt6SHA22413getDigestSizeEv>:
 8770600:	55                   	push   %ebp
 8770601:	b8 1c 00 00 00       	mov    $0x1c,%eax
 8770606:	89 e5                	mov    %esp,%ebp
 8770608:	5d                   	pop    %ebp
 8770609:	c3                   	ret
 877060a:	90                   	nop
 877060b:	90                   	nop
 877060c:	90                   	nop
 877060d:	90                   	nop
 877060e:	90                   	nop
 877060f:	90                   	nop

08770610 <_ZNK8TaoCrypt6SHA22410getPadSizeEv>:
 8770610:	55                   	push   %ebp
 8770611:	b8 38 00 00 00       	mov    $0x38,%eax
 8770616:	89 e5                	mov    %esp,%ebp
 8770618:	5d                   	pop    %ebp
 8770619:	c3                   	ret
 877061a:	90                   	nop
 877061b:	90                   	nop
 877061c:	90                   	nop
 877061d:	90                   	nop
 877061e:	90                   	nop
 877061f:	90                   	nop

08770620 <_ZNK8TaoCrypt6SHA51212getByteOrderEv>:
 8770620:	55                   	push   %ebp
 8770621:	b8 01 00 00 00       	mov    $0x1,%eax
 8770626:	89 e5                	mov    %esp,%ebp
 8770628:	5d                   	pop    %ebp
 8770629:	c3                   	ret
 877062a:	90                   	nop
 877062b:	90                   	nop
 877062c:	90                   	nop
 877062d:	90                   	nop
 877062e:	90                   	nop
 877062f:	90                   	nop

08770630 <_ZNK8TaoCrypt6SHA51212getBlockSizeEv>:
 8770630:	55                   	push   %ebp
 8770631:	b8 80 00 00 00       	mov    $0x80,%eax
 8770636:	89 e5                	mov    %esp,%ebp
 8770638:	5d                   	pop    %ebp
 8770639:	c3                   	ret
 877063a:	90                   	nop
 877063b:	90                   	nop
 877063c:	90                   	nop
 877063d:	90                   	nop
 877063e:	90                   	nop
 877063f:	90                   	nop

08770640 <_ZNK8TaoCrypt6SHA51213getDigestSizeEv>:
 8770640:	55                   	push   %ebp
 8770641:	b8 40 00 00 00       	mov    $0x40,%eax
 8770646:	89 e5                	mov    %esp,%ebp
 8770648:	5d                   	pop    %ebp
 8770649:	c3                   	ret
 877064a:	90                   	nop
 877064b:	90                   	nop
 877064c:	90                   	nop
 877064d:	90                   	nop
 877064e:	90                   	nop
 877064f:	90                   	nop

08770650 <_ZNK8TaoCrypt6SHA51210getPadSizeEv>:
 8770650:	55                   	push   %ebp
 8770651:	b8 70 00 00 00       	mov    $0x70,%eax
 8770656:	89 e5                	mov    %esp,%ebp
 8770658:	5d                   	pop    %ebp
 8770659:	c3                   	ret
 877065a:	90                   	nop
 877065b:	90                   	nop
 877065c:	90                   	nop
 877065d:	90                   	nop
 877065e:	90                   	nop
 877065f:	90                   	nop

08770660 <_ZNK8TaoCrypt6SHA38412getByteOrderEv>:
 8770660:	55                   	push   %ebp
 8770661:	b8 01 00 00 00       	mov    $0x1,%eax
 8770666:	89 e5                	mov    %esp,%ebp
 8770668:	5d                   	pop    %ebp
 8770669:	c3                   	ret
 877066a:	90                   	nop
 877066b:	90                   	nop
 877066c:	90                   	nop
 877066d:	90                   	nop
 877066e:	90                   	nop
 877066f:	90                   	nop

08770670 <_ZNK8TaoCrypt6SHA38412getBlockSizeEv>:
 8770670:	55                   	push   %ebp
 8770671:	b8 80 00 00 00       	mov    $0x80,%eax
 8770676:	89 e5                	mov    %esp,%ebp
 8770678:	5d                   	pop    %ebp
 8770679:	c3                   	ret
 877067a:	90                   	nop
 877067b:	90                   	nop
 877067c:	90                   	nop
 877067d:	90                   	nop
 877067e:	90                   	nop
 877067f:	90                   	nop

08770680 <_ZNK8TaoCrypt6SHA38413getDigestSizeEv>:
 8770680:	55                   	push   %ebp
 8770681:	b8 30 00 00 00       	mov    $0x30,%eax
 8770686:	89 e5                	mov    %esp,%ebp
 8770688:	5d                   	pop    %ebp
 8770689:	c3                   	ret
 877068a:	90                   	nop
 877068b:	90                   	nop
 877068c:	90                   	nop
 877068d:	90                   	nop
 877068e:	90                   	nop
 877068f:	90                   	nop

08770690 <_ZNK8TaoCrypt6SHA38410getPadSizeEv>:
 8770690:	55                   	push   %ebp
 8770691:	b8 70 00 00 00       	mov    $0x70,%eax
 8770696:	89 e5                	mov    %esp,%ebp
 8770698:	5d                   	pop    %ebp
 8770699:	c3                   	ret
 877069a:	90                   	nop
 877069b:	90                   	nop
 877069c:	90                   	nop
 877069d:	90                   	nop
 877069e:	90                   	nop
 877069f:	90                   	nop

087706a0 <_ZN8TaoCrypt3SHAD1Ev>:
 87706a0:	e8 1f 3f fb ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87706a5:	81 c1 f3 c4 bf 00    	add    $0xbfc4f3,%ecx
 87706ab:	55                   	push   %ebp
 87706ac:	89 e5                	mov    %esp,%ebp
 87706ae:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 87706b4:	8d 50 08             	lea    0x8(%eax),%edx
 87706b7:	8b 45 08             	mov    0x8(%ebp),%eax
 87706ba:	89 10                	mov    %edx,(%eax)
 87706bc:	5d                   	pop    %ebp
 87706bd:	c3                   	ret
 87706be:	90                   	nop
 87706bf:	90                   	nop

087706c0 <_ZN8TaoCrypt3SHAD0Ev>:
 87706c0:	e8 ff 3e fb ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87706c5:	81 c1 d3 c4 bf 00    	add    $0xbfc4d3,%ecx
 87706cb:	55                   	push   %ebp
 87706cc:	89 e5                	mov    %esp,%ebp
 87706ce:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 87706d4:	8d 50 08             	lea    0x8(%eax),%edx
 87706d7:	8b 45 08             	mov    0x8(%ebp),%eax
 87706da:	89 10                	mov    %edx,(%eax)
 87706dc:	5d                   	pop    %ebp
 87706dd:	c3                   	ret
 87706de:	90                   	nop
 87706df:	90                   	nop

087706e0 <_ZN8TaoCrypt6SHA256D1Ev>:
 87706e0:	e8 df 3e fb ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87706e5:	81 c1 b3 c4 bf 00    	add    $0xbfc4b3,%ecx
 87706eb:	55                   	push   %ebp
 87706ec:	89 e5                	mov    %esp,%ebp
 87706ee:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 87706f4:	8d 50 08             	lea    0x8(%eax),%edx
 87706f7:	8b 45 08             	mov    0x8(%ebp),%eax
 87706fa:	89 10                	mov    %edx,(%eax)
 87706fc:	5d                   	pop    %ebp
 87706fd:	c3                   	ret
 87706fe:	90                   	nop
 87706ff:	90                   	nop

08770700 <_ZN8TaoCrypt6SHA256D0Ev>:
 8770700:	e8 bf 3e fb ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8770705:	81 c1 93 c4 bf 00    	add    $0xbfc493,%ecx
 877070b:	55                   	push   %ebp
 877070c:	89 e5                	mov    %esp,%ebp
 877070e:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 8770714:	8d 50 08             	lea    0x8(%eax),%edx
 8770717:	8b 45 08             	mov    0x8(%ebp),%eax
 877071a:	89 10                	mov    %edx,(%eax)
 877071c:	5d                   	pop    %ebp
 877071d:	c3                   	ret
 877071e:	90                   	nop
 877071f:	90                   	nop

08770720 <_ZN8TaoCrypt6SHA224D1Ev>:
 8770720:	e8 9f 3e fb ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8770725:	81 c1 73 c4 bf 00    	add    $0xbfc473,%ecx
 877072b:	55                   	push   %ebp
 877072c:	89 e5                	mov    %esp,%ebp
 877072e:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 8770734:	8d 50 08             	lea    0x8(%eax),%edx
 8770737:	8b 45 08             	mov    0x8(%ebp),%eax
 877073a:	89 10                	mov    %edx,(%eax)
 877073c:	5d                   	pop    %ebp
 877073d:	c3                   	ret
 877073e:	90                   	nop
 877073f:	90                   	nop

08770740 <_ZN8TaoCrypt6SHA224D0Ev>:
 8770740:	e8 7f 3e fb ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8770745:	81 c1 53 c4 bf 00    	add    $0xbfc453,%ecx
 877074b:	55                   	push   %ebp
 877074c:	89 e5                	mov    %esp,%ebp
 877074e:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 8770754:	8d 50 08             	lea    0x8(%eax),%edx
 8770757:	8b 45 08             	mov    0x8(%ebp),%eax
 877075a:	89 10                	mov    %edx,(%eax)
 877075c:	5d                   	pop    %ebp
 877075d:	c3                   	ret
 877075e:	90                   	nop
 877075f:	90                   	nop

08770760 <_ZN8TaoCrypt6SHA512D1Ev>:
 8770760:	e8 5f 3e fb ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8770765:	81 c1 33 c4 bf 00    	add    $0xbfc433,%ecx
 877076b:	55                   	push   %ebp
 877076c:	89 e5                	mov    %esp,%ebp
 877076e:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 8770774:	8d 50 08             	lea    0x8(%eax),%edx
 8770777:	8b 45 08             	mov    0x8(%ebp),%eax
 877077a:	89 10                	mov    %edx,(%eax)
 877077c:	5d                   	pop    %ebp
 877077d:	c3                   	ret
 877077e:	90                   	nop
 877077f:	90                   	nop

08770780 <_ZN8TaoCrypt6SHA512D0Ev>:
 8770780:	e8 3f 3e fb ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8770785:	81 c1 13 c4 bf 00    	add    $0xbfc413,%ecx
 877078b:	55                   	push   %ebp
 877078c:	89 e5                	mov    %esp,%ebp
 877078e:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 8770794:	8d 50 08             	lea    0x8(%eax),%edx
 8770797:	8b 45 08             	mov    0x8(%ebp),%eax
 877079a:	89 10                	mov    %edx,(%eax)
 877079c:	5d                   	pop    %ebp
 877079d:	c3                   	ret
 877079e:	90                   	nop
 877079f:	90                   	nop

087707a0 <_ZN8TaoCrypt6SHA384D1Ev>:
 87707a0:	e8 1f 3e fb ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87707a5:	81 c1 f3 c3 bf 00    	add    $0xbfc3f3,%ecx
 87707ab:	55                   	push   %ebp
 87707ac:	89 e5                	mov    %esp,%ebp
 87707ae:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 87707b4:	8d 50 08             	lea    0x8(%eax),%edx
 87707b7:	8b 45 08             	mov    0x8(%ebp),%eax
 87707ba:	89 10                	mov    %edx,(%eax)
 87707bc:	5d                   	pop    %ebp
 87707bd:	c3                   	ret
 87707be:	90                   	nop
 87707bf:	90                   	nop

087707c0 <_ZN8TaoCrypt6SHA384D0Ev>:
 87707c0:	e8 ff 3d fb ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87707c5:	81 c1 d3 c3 bf 00    	add    $0xbfc3d3,%ecx
 87707cb:	55                   	push   %ebp
 87707cc:	89 e5                	mov    %esp,%ebp
 87707ce:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 87707d4:	8d 50 08             	lea    0x8(%eax),%edx
 87707d7:	8b 45 08             	mov    0x8(%ebp),%eax
 87707da:	89 10                	mov    %edx,(%eax)
 87707dc:	5d                   	pop    %ebp
 87707dd:	c3                   	ret
 87707de:	90                   	nop
 87707df:	90                   	nop

```

```c
// TaoCrypt::SHA::operator= @ 0x8770510

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::SHA const&) */

SHA * __thiscall TaoCrypt::SHA::operator=(SHA *this,SHA *param_1)

{
  SHA local_8c [124];
  
  SHA(local_8c,param_1);
  Swap(this,local_8c);
  return this;
}

```

