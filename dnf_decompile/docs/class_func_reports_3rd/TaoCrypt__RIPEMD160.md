# TaoCrypt__RIPEMD160

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## AsmTransform

```asm
// === 087aa300 TaoCrypt::RIPEMD160::AsmTransform  [0x087aa300-0x87aa320] ===
 87aa300:	55                   	push   %ebp
 87aa301:	89 e5                	mov    %esp,%ebp
 87aa303:	0f 6e df             	movd   %edi,%mm3
 87aa306:	0f 6e e3             	movd   %ebx,%mm4
 87aa309:	0f 6e ee             	movd   %esi,%mm5
 87aa30c:	0f 6e f5             	movd   %ebp,%mm6
 87aa30f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87aa312:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87aa315:	8b 55 10             	mov    0x10(%ebp),%edx
 87aa318:	8d 71 10             	lea    0x10(%ecx),%esi
 87aa31b:	83 ec 18             	sub    $0x18,%esp
 87aa31e:	0f 6e ce             	movd   %esi,%mm1

```

```c
// TaoCrypt::RIPEMD160::AsmTransform @ 0x87aa300

/* TaoCrypt::RIPEMD160::AsmTransform(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::RIPEMD160::AsmTransform(RIPEMD160 *this,uchar *param_1,uint param_2)

{
  RIPEMD160 *pRVar1;
  int iVar2;
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
  
  pRVar1 = this + 0x10;
  do {
    uVar5 = *(uint *)(this + 0x14);
    uVar4 = *(uint *)(this + 0x18);
    uVar7 = *(uint *)(this + 0x1c);
    uVar3 = *(int *)pRVar1 + *(int *)param_1 + (uVar4 ^ uVar5 ^ uVar7);
    uVar6 = uVar4 << 10 | uVar4 >> 0x16;
    uVar4 = (uVar3 * 0x800 | uVar3 >> 0x15) + *(int *)(this + 0x20);
    uVar10 = *(int *)(this + 0x20) + *(int *)((int)param_1 + 4) + (uVar5 ^ uVar4 ^ uVar6);
    uVar3 = uVar5 << 10 | uVar5 >> 0x16;
    uVar10 = (uVar10 * 0x4000 | uVar10 >> 0x12) + uVar7;
    uVar7 = uVar7 + *(int *)((int)param_1 + 8) + (uVar4 ^ uVar10 ^ uVar3);
    uVar5 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar7 = (uVar7 * 0x8000 | uVar7 >> 0x11) + uVar6;
    uVar4 = uVar6 + *(int *)((int)param_1 + 0xc) + (uVar10 ^ uVar7 ^ uVar5);
    uVar6 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar4 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar3;
    uVar3 = uVar3 + *(int *)((int)param_1 + 0x10) + (uVar7 ^ uVar4 ^ uVar6);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar3 = (uVar3 * 0x20 | uVar3 >> 0x1b) + uVar5;
    uVar5 = uVar5 + *(int *)((int)param_1 + 0x14) + (uVar4 ^ uVar3 ^ uVar7);
    uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar5 = (uVar5 * 0x100 | uVar5 >> 0x18) + uVar6;
    uVar6 = uVar6 + *(int *)((int)param_1 + 0x18) + (uVar3 ^ uVar5 ^ uVar4);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar6 = (uVar6 * 0x80 | uVar6 >> 0x19) + uVar7;
    uVar7 = uVar7 + *(int *)((int)param_1 + 0x1c) + (uVar5 ^ uVar6 ^ uVar3);
    uVar5 = uVar5 * 0x400 | uVar5 >> 0x16;
    uVar7 = (uVar7 * 0x200 | uVar7 >> 0x17) + uVar4;
    uVar4 = uVar4 + *(int *)((int)param_1 + 0x20) + (uVar6 ^ uVar7 ^ uVar5);
    uVar6 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar4 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar3;
    uVar3 = uVar3 + *(int *)((int)param_1 + 0x24) + (uVar7 ^ uVar4 ^ uVar6);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x13) + uVar5;
    uVar5 = uVar5 + *(int *)((int)param_1 + 0x28) + (uVar4 ^ uVar3 ^ uVar7);
    uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar5 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar6;
    uVar6 = uVar6 + *(int *)((int)param_1 + 0x2c) + (uVar3 ^ uVar5 ^ uVar4);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar6 = (uVar6 * 0x8000 | uVar6 >> 0x11) + uVar7;
    uVar7 = uVar7 + *(int *)((int)param_1 + 0x30) + (uVar5 ^ uVar6 ^ uVar3);
    uVar5 = uVar5 * 0x400 | uVar5 >> 0x16;
    uVar7 = (uVar7 * 0x40 | uVar7 >> 0x1a) + uVar4;
    uVar4 = uVar4 + *(int *)((int)param_1 + 0x34) + (uVar6 ^ uVar7 ^ uVar5);
    uVar10 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar4 = (uVar4 * 0x80 | uVar4 >> 0x19) + uVar3;
    uVar6 = uVar3 + *(int *)((int)param_1 + 0x38) + (uVar7 ^ uVar4 ^ uVar10);
    uVar3 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar6 = (uVar6 * 0x200 | uVar6 >> 0x17) + uVar5;
    uVar5 = uVar5 + *(int *)((int)param_1 + 0x3c) + (uVar4 ^ uVar6 ^ uVar3);
    uVar7 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar4 = (uVar5 * 0x100 | uVar5 >> 0x18) + uVar10;
    uVar5 = ((uVar6 ^ uVar7) & uVar4 ^ uVar7) + 0x5a827999 + uVar10 + *(int *)((int)param_1 + 0x1c);
    uVar6 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar10 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar3;
    uVar5 = ((uVar4 ^ uVar6) & uVar10 ^ uVar6) + 0x5a827999 + uVar3 + *(int *)((int)param_1 + 0x10);
    uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar3 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar7;
    uVar5 = ((uVar10 ^ uVar4) & uVar3 ^ uVar4) + 0x5a827999 + uVar7 + *(int *)((int)param_1 + 0x34);
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar7 = (uVar5 * 0x100 | uVar5 >> 0x18) + uVar6;
    uVar5 = ((uVar3 ^ uVar10) & uVar7 ^ uVar10) + 0x5a827999 + uVar6 + *(int *)((int)param_1 + 4);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x13) + uVar4;
    uVar5 = ((uVar7 ^ uVar3) & uVar6 ^ uVar3) + 0x5a827999 + uVar4 + *(int *)((int)param_1 + 0x28);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar4 = (uVar5 * 0x800 | uVar5 >> 0x15) + uVar10;
    uVar5 = ((uVar6 ^ uVar7) & uVar4 ^ uVar7) + 0x5a827999 + uVar10 + *(int *)((int)param_1 + 0x18);
    uVar6 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar10 = (uVar5 * 0x200 | uVar5 >> 0x17) + uVar3;
    uVar5 = ((uVar4 ^ uVar6) & uVar10 ^ uVar6) + 0x5a827999 + uVar3 + *(int *)((int)param_1 + 0x3c);
    uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar3 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar7;
    uVar5 = ((uVar10 ^ uVar4) & uVar3 ^ uVar4) + 0x5a827999 + uVar7 + *(int *)((int)param_1 + 0xc);
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar7 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar6;
    uVar5 = ((uVar3 ^ uVar10) & uVar7 ^ uVar10) + 0x5a827999 + uVar6 + *(int *)((int)param_1 + 0x30)
    ;
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar6 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar4;
    uVar5 = ((uVar7 ^ uVar3) & uVar6 ^ uVar3) + 0x5a827999 + uVar4 + *(int *)param_1;
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar4 = (uVar5 * 0x1000 | uVar5 >> 0x14) + uVar10;
    uVar5 = ((uVar6 ^ uVar7) & uVar4 ^ uVar7) + 0x5a827999 + uVar10 + *(int *)((int)param_1 + 0x24);
    uVar6 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar10 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar3;
    uVar5 = ((uVar4 ^ uVar6) & uVar10 ^ uVar6) + 0x5a827999 + uVar3 + *(int *)((int)param_1 + 0x14);
    uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar3 = (uVar5 * 0x200 | uVar5 >> 0x17) + uVar7;
    uVar5 = ((uVar10 ^ uVar4) & uVar3 ^ uVar4) + 0x5a827999 + uVar7 + *(int *)((int)param_1 + 8);
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar7 = (uVar5 * 0x800 | uVar5 >> 0x15) + uVar6;
    uVar5 = ((uVar3 ^ uVar10) & uVar7 ^ uVar10) + 0x5a827999 + uVar6 + *(int *)((int)param_1 + 0x38)
    ;
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar6 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar4;
    uVar5 = ((uVar7 ^ uVar3) & uVar6 ^ uVar3) + 0x5a827999 + uVar4 + *(int *)((int)param_1 + 0x2c);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x13) + uVar10;
    uVar5 = ((uVar6 ^ uVar7) & uVar4 ^ uVar7) + 0x5a827999 + uVar10 + *(int *)((int)param_1 + 0x20);
    uVar6 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar10 = (uVar5 * 0x1000 | uVar5 >> 0x14) + uVar3;
    uVar5 = ((~uVar4 | uVar10) ^ uVar6) + 0x6ed9eba1 + uVar3 + *(int *)((int)param_1 + 0xc);
    uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar3 = (uVar5 * 0x800 | uVar5 >> 0x15) + uVar7;
    uVar5 = ((~uVar10 | uVar3) ^ uVar4) + 0x6ed9eba1 + uVar7 + *(int *)((int)param_1 + 0x28);
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar7 = (uVar5 * 0x2000 | uVar5 >> 0x13) + uVar6;
    uVar5 = ((~uVar3 | uVar7) ^ uVar10) + 0x6ed9eba1 + uVar6 + *(int *)((int)param_1 + 0x38);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar6 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar4;
    uVar5 = ((~uVar7 | uVar6) ^ uVar3) + 0x6ed9eba1 + uVar4 + *(int *)((int)param_1 + 0x10);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar4 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar10;
    uVar5 = ((~uVar6 | uVar4) ^ uVar7) + 0x6ed9eba1 + uVar10 + *(int *)((int)param_1 + 0x24);
    uVar6 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar10 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar3;
    uVar5 = ((~uVar4 | uVar10) ^ uVar6) + 0x6ed9eba1 + uVar3 + *(int *)((int)param_1 + 0x3c);
    uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar3 = (uVar5 * 0x200 | uVar5 >> 0x17) + uVar7;
    uVar5 = ((~uVar10 | uVar3) ^ uVar4) + 0x6ed9eba1 + uVar7 + *(int *)((int)param_1 + 0x20);
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar7 = (uVar5 * 0x2000 | uVar5 >> 0x13) + uVar6;
    uVar5 = ((~uVar3 | uVar7) ^ uVar10) + 0x6ed9eba1 + uVar6 + *(int *)((int)param_1 + 4);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar6 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar4;
    uVar5 = ((~uVar7 | uVar6) ^ uVar3) + 0x6ed9eba1 + uVar4 + *(int *)((int)param_1 + 8);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar4 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar10;
    uVar5 = ((~uVar6 | uVar4) ^ uVar7) + 0x6ed9eba1 + uVar10 + *(int *)((int)param_1 + 0x1c);
    uVar6 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar10 = (uVar5 * 0x100 | uVar5 >> 0x18) + uVar3;
    uVar5 = ((~uVar4 | uVar10) ^ uVar6) + 0x6ed9eba1 + uVar3 + *(int *)param_1;
    uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar3 = (uVar5 * 0x2000 | uVar5 >> 0x13) + uVar7;
    uVar5 = ((~uVar10 | uVar3) ^ uVar4) + 0x6ed9eba1 + uVar7 + *(int *)((int)param_1 + 0x18);
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar7 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar6;
    uVar5 = ((~uVar3 | uVar7) ^ uVar10) + 0x6ed9eba1 + uVar6 + *(int *)((int)param_1 + 0x34);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar6 = (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar4;
    uVar5 = ((~uVar7 | uVar6) ^ uVar3) + 0x6ed9eba1 + uVar4 + *(int *)((int)param_1 + 0x2c);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar4 = (uVar5 * 0x1000 | uVar5 >> 0x14) + uVar10;
    uVar5 = ((~uVar6 | uVar4) ^ uVar7) + 0x6ed9eba1 + uVar10 + *(int *)((int)param_1 + 0x14);
    uVar6 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar10 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar3;
    uVar5 = ((~uVar4 | uVar10) ^ uVar6) + 0x6ed9eba1 + uVar3 + *(int *)((int)param_1 + 0x30);
    uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar3 = (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar7;
    uVar5 = ((uVar10 ^ uVar3) & uVar4 ^ uVar10) + 0x8f1bbcdc + uVar7 + *(int *)((int)param_1 + 4);
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar7 = (uVar5 * 0x800 | uVar5 >> 0x15) + uVar6;
    uVar5 = ((uVar3 ^ uVar7) & uVar10 ^ uVar3) + 0x8f1bbcdc + uVar6 + *(int *)((int)param_1 + 0x24);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar6 = (uVar5 * 0x1000 | uVar5 >> 0x14) + uVar4;
    uVar5 = ((uVar7 ^ uVar6) & uVar3 ^ uVar7) + 0x8f1bbcdc + uVar4 + *(int *)((int)param_1 + 0x2c);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar4 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar10;
    uVar5 = ((uVar6 ^ uVar4) & uVar7 ^ uVar6) + 0x8f1bbcdc + uVar10 + *(int *)((int)param_1 + 0x28);
    uVar6 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar10 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar3;
    uVar5 = ((uVar4 ^ uVar10) & uVar6 ^ uVar4) + 0x8f1bbcdc + uVar3 + *(int *)param_1;
    uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar3 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar7;
    uVar5 = ((uVar10 ^ uVar3) & uVar4 ^ uVar10) + 0x8f1bbcdc + uVar7 + *(int *)((int)param_1 + 0x20)
    ;
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar7 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar6;
    uVar5 = ((uVar3 ^ uVar7) & uVar10 ^ uVar3) + 0x8f1bbcdc + uVar6 + *(int *)((int)param_1 + 0x30);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar6 = (uVar5 * 0x200 | uVar5 >> 0x17) + uVar4;
    uVar5 = ((uVar7 ^ uVar6) & uVar3 ^ uVar7) + 0x8f1bbcdc + uVar4 + *(int *)((int)param_1 + 0x10);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar4 = (uVar5 * 0x100 | uVar5 >> 0x18) + uVar10;
    uVar5 = ((uVar6 ^ uVar4) & uVar7 ^ uVar6) + 0x8f1bbcdc + uVar10 + *(int *)((int)param_1 + 0x34);
    uVar6 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar10 = (uVar5 * 0x200 | uVar5 >> 0x17) + uVar3;
    uVar5 = ((uVar4 ^ uVar10) & uVar6 ^ uVar4) + 0x8f1bbcdc + uVar3 + *(int *)((int)param_1 + 0xc);
    uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar3 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar7;
    uVar5 = ((uVar10 ^ uVar3) & uVar4 ^ uVar10) + 0x8f1bbcdc + uVar7 + *(int *)((int)param_1 + 0x1c)
    ;
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar7 = (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar6;
    uVar5 = ((uVar3 ^ uVar7) & uVar10 ^ uVar3) + 0x8f1bbcdc + uVar6 + *(int *)((int)param_1 + 0x3c);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar6 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar4;
    uVar5 = ((uVar7 ^ uVar6) & uVar3 ^ uVar7) + 0x8f1bbcdc + uVar4 + *(int *)((int)param_1 + 0x38);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar4 = (uVar5 * 0x100 | uVar5 >> 0x18) + uVar10;
    uVar5 = ((uVar6 ^ uVar4) & uVar7 ^ uVar6) + 0x8f1bbcdc + uVar10 + *(int *)((int)param_1 + 0x14);
    uVar10 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar6 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar3;
    uVar5 = ((uVar4 ^ uVar6) & uVar10 ^ uVar4) + 0x8f1bbcdc + uVar3 + *(int *)((int)param_1 + 0x18);
    uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar3 = (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar7;
    uVar5 = ((uVar6 ^ uVar3) & uVar4 ^ uVar6) + 0x8f1bbcdc + uVar7 + *(int *)((int)param_1 + 8);
    uVar11 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar7 = (uVar5 * 0x1000 | uVar5 >> 0x14) + uVar10;
    uVar6 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar5 = ((~uVar11 | uVar3) ^ uVar7) + 0xa953fd4e + uVar10 + *(int *)((int)param_1 + 0x10);
    uVar10 = (uVar5 * 0x200 | uVar5 >> 0x17) + uVar4;
    uVar3 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar5 = ((~uVar6 | uVar7) ^ uVar10) + 0xa953fd4e + uVar4 + *(int *)param_1;
    uVar4 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar11;
    uVar8 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar5 = ((~uVar3 | uVar10) ^ uVar4) + 0xa953fd4e + uVar11 + *(int *)((int)param_1 + 0x14);
    uVar10 = (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar6;
    uVar7 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar5 = ((~uVar8 | uVar4) ^ uVar10) + 0xa953fd4e + uVar6 + *(int *)((int)param_1 + 0x24);
    uVar6 = (uVar5 * 0x800 | uVar5 >> 0x15) + uVar3;
    uVar11 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar5 = ((~uVar7 | uVar10) ^ uVar6) + 0xa953fd4e + uVar3 + *(int *)((int)param_1 + 0x1c);
    uVar4 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar8;
    uVar10 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar5 = ((~uVar11 | uVar6) ^ uVar4) + 0xa953fd4e + uVar8 + *(int *)((int)param_1 + 0x30);
    uVar6 = (uVar5 * 0x100 | uVar5 >> 0x18) + uVar7;
    uVar3 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar5 = ((~uVar10 | uVar4) ^ uVar6) + 0xa953fd4e + uVar7 + *(int *)((int)param_1 + 8);
    uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x13) + uVar11;
    uVar8 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar5 = ((~uVar3 | uVar6) ^ uVar4) + 0xa953fd4e + uVar11 + *(int *)((int)param_1 + 0x28);
    uVar11 = (uVar5 * 0x1000 | uVar5 >> 0x14) + uVar10;
    uVar7 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar5 = ((~uVar8 | uVar4) ^ uVar11) + 0xa953fd4e + uVar10 + *(int *)((int)param_1 + 0x38);
    uVar6 = (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar3;
    uVar12 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar5 = ((~uVar7 | uVar11) ^ uVar6) + 0xa953fd4e + uVar3 + *(int *)((int)param_1 + 4);
    uVar4 = (uVar5 * 0x1000 | uVar5 >> 0x14) + uVar8;
    uVar10 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar5 = ((~uVar12 | uVar6) ^ uVar4) + 0xa953fd4e + uVar8 + *(int *)((int)param_1 + 0xc);
    uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x13) + uVar7;
    uVar3 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar5 = ((~uVar10 | uVar4) ^ uVar6) + 0xa953fd4e + uVar7 + *(int *)((int)param_1 + 0x20);
    uVar4 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar12;
    uVar7 = uVar6 * 0x400 | uVar6 >> 0x16;
    uVar5 = ((~uVar3 | uVar6) ^ uVar4) + 0xa953fd4e + uVar12 + *(int *)((int)param_1 + 0x2c);
    uVar8 = (uVar5 * 0x800 | uVar5 >> 0x15) + uVar10;
    uVar6 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar5 = ((~uVar7 | uVar4) ^ uVar8) + 0xa953fd4e + uVar10 + *(int *)((int)param_1 + 0x18);
    uVar12 = (uVar5 * 0x100 | uVar5 >> 0x18) + uVar3;
    uVar13 = uVar8 * 0x400 | uVar8 >> 0x16;
    uVar5 = ((~uVar6 | uVar8) ^ uVar12) + 0xa953fd4e + uVar3 + *(int *)((int)param_1 + 0x3c);
    uVar8 = (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar7;
    uVar5 = ((~uVar13 | uVar12) ^ uVar8) + 0xa953fd4e + uVar7 + *(int *)((int)param_1 + 0x34);
    uVar7 = *(uint *)(this + 0x14);
    uVar4 = *(uint *)(this + 0x18);
    uVar3 = *(uint *)(this + 0x1c);
    uVar11 = uVar4 << 10 | uVar4 >> 0x16;
    uVar4 = ((~uVar3 | uVar4) ^ uVar7) + 0x50a28be6 + *(int *)pRVar1 + *(int *)((int)param_1 + 0x14)
    ;
    uVar10 = (uVar4 * 0x100 | uVar4 >> 0x18) + *(int *)(this + 0x20);
    uVar9 = uVar7 << 10 | uVar7 >> 0x16;
    uVar4 = ((~uVar11 | uVar7) ^ uVar10) + 0x50a28be6 +
            *(int *)(this + 0x20) + *(int *)((int)param_1 + 0x38);
    uVar14 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar3;
    uVar7 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar4 = ((~uVar9 | uVar10) ^ uVar14) + 0x50a28be6 + uVar3 + *(int *)((int)param_1 + 0x1c);
    uVar10 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar11;
    uVar15 = uVar14 * 0x400 | uVar14 >> 0x16;
    uVar4 = ((~uVar7 | uVar14) ^ uVar10) + 0x50a28be6 + uVar11 + *(int *)param_1;
    uVar3 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar9;
    uVar11 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar4 = ((~uVar15 | uVar10) ^ uVar3) + 0x50a28be6 + uVar9 + *(int *)((int)param_1 + 0x24);
    uVar9 = (uVar4 * 0x2000 | uVar4 >> 0x13) + uVar7;
    uVar10 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar4 = ((~uVar11 | uVar3) ^ uVar9) + 0x50a28be6 + uVar7 + *(int *)((int)param_1 + 8);
    uVar7 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar15;
    uVar14 = uVar9 * 0x400 | uVar9 >> 0x16;
    uVar4 = ((~uVar10 | uVar9) ^ uVar7) + 0x50a28be6 + uVar15 + *(int *)((int)param_1 + 0x2c);
    uVar9 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar11;
    uVar3 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar4 = ((~uVar14 | uVar7) ^ uVar9) + 0x50a28be6 + uVar11 + *(int *)((int)param_1 + 0x10);
    uVar11 = (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar10;
    uVar15 = uVar9 * 0x400 | uVar9 >> 0x16;
    uVar4 = ((~uVar3 | uVar9) ^ uVar11) + 0x50a28be6 + uVar10 + *(int *)((int)param_1 + 0x34);
    uVar7 = (uVar4 * 0x80 | uVar4 >> 0x19) + uVar14;
    uVar9 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar4 = ((~uVar15 | uVar11) ^ uVar7) + 0x50a28be6 + uVar14 + *(int *)((int)param_1 + 0x18);
    uVar11 = (uVar4 * 0x80 | uVar4 >> 0x19) + uVar3;
    uVar10 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar4 = ((~uVar9 | uVar7) ^ uVar11) + 0x50a28be6 + uVar3 + *(int *)((int)param_1 + 0x3c);
    uVar7 = (uVar4 * 0x100 | uVar4 >> 0x18) + uVar15;
    uVar14 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar4 = ((~uVar10 | uVar11) ^ uVar7) + 0x50a28be6 + uVar15 + *(int *)((int)param_1 + 0x20);
    uVar15 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar9;
    uVar3 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar4 = ((~uVar14 | uVar7) ^ uVar15) + 0x50a28be6 + uVar9 + *(int *)((int)param_1 + 4);
    uVar11 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar10;
    uVar16 = uVar15 * 0x400 | uVar15 >> 0x16;
    uVar4 = ((~uVar3 | uVar15) ^ uVar11) + 0x50a28be6 + uVar10 + *(int *)((int)param_1 + 0x28);
    uVar7 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar14;
    uVar9 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar4 = ((~uVar16 | uVar11) ^ uVar7) + 0x50a28be6 + uVar14 + *(int *)((int)param_1 + 0xc);
    uVar11 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar3;
    uVar10 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar4 = ((~uVar9 | uVar7) ^ uVar11) + 0x50a28be6 + uVar3 + *(int *)((int)param_1 + 0x30);
    uVar7 = (uVar4 * 0x40 | uVar4 >> 0x1a) + uVar16;
    uVar4 = ((uVar11 ^ uVar7) & uVar10 ^ uVar11) + 0x5c4dd124 +
            uVar16 + *(int *)((int)param_1 + 0x18);
    uVar14 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar3 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar9;
    uVar4 = ((uVar7 ^ uVar3) & uVar14 ^ uVar7) + 0x5c4dd124 + uVar9 + *(int *)((int)param_1 + 0x2c);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar11 = (uVar4 * 0x2000 | uVar4 >> 0x13) + uVar10;
    uVar4 = ((uVar3 ^ uVar11) & uVar7 ^ uVar3) + 0x5c4dd124 + uVar10 + *(int *)((int)param_1 + 0xc);
    uVar9 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar3 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar14;
    uVar4 = ((uVar11 ^ uVar3) & uVar9 ^ uVar11) + 0x5c4dd124 +
            uVar14 + *(int *)((int)param_1 + 0x1c);
    uVar10 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar11 = (uVar4 * 0x80 | uVar4 >> 0x19) + uVar7;
    uVar4 = ((uVar3 ^ uVar11) & uVar10 ^ uVar3) + 0x5c4dd124 + uVar7 + *(int *)param_1;
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar7 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar9;
    uVar4 = ((uVar11 ^ uVar7) & uVar3 ^ uVar11) + 0x5c4dd124 + uVar9 + *(int *)((int)param_1 + 0x34)
    ;
    uVar11 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar9 = (uVar4 * 0x100 | uVar4 >> 0x18) + uVar10;
    uVar4 = ((uVar7 ^ uVar9) & uVar11 ^ uVar7) + 0x5c4dd124 + uVar10 + *(int *)((int)param_1 + 0x14)
    ;
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar10 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar3;
    uVar4 = ((uVar9 ^ uVar10) & uVar7 ^ uVar9) + 0x5c4dd124 + uVar3 + *(int *)((int)param_1 + 0x28);
    uVar9 = uVar9 * 0x400 | uVar9 >> 0x16;
    uVar3 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar11;
    uVar4 = ((uVar10 ^ uVar3) & uVar9 ^ uVar10) + 0x5c4dd124 +
            uVar11 + *(int *)((int)param_1 + 0x38);
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar11 = (uVar4 * 0x80 | uVar4 >> 0x19) + uVar7;
    uVar4 = ((uVar3 ^ uVar11) & uVar10 ^ uVar3) + 0x5c4dd124 + uVar7 + *(int *)((int)param_1 + 0x3c)
    ;
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar7 = (uVar4 * 0x80 | uVar4 >> 0x19) + uVar9;
    uVar4 = ((uVar11 ^ uVar7) & uVar3 ^ uVar11) + 0x5c4dd124 + uVar9 + *(int *)((int)param_1 + 0x20)
    ;
    uVar11 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar9 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar10;
    uVar4 = ((uVar7 ^ uVar9) & uVar11 ^ uVar7) + 0x5c4dd124 + uVar10 + *(int *)((int)param_1 + 0x30)
    ;
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar10 = (uVar4 * 0x80 | uVar4 >> 0x19) + uVar3;
    uVar4 = ((uVar9 ^ uVar10) & uVar7 ^ uVar9) + 0x5c4dd124 + uVar3 + *(int *)((int)param_1 + 0x10);
    uVar9 = uVar9 * 0x400 | uVar9 >> 0x16;
    uVar3 = (uVar4 * 0x40 | uVar4 >> 0x1a) + uVar11;
    uVar4 = ((uVar10 ^ uVar3) & uVar9 ^ uVar10) + 0x5c4dd124 +
            uVar11 + *(int *)((int)param_1 + 0x24);
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar11 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar7;
    uVar4 = ((uVar3 ^ uVar11) & uVar10 ^ uVar3) + 0x5c4dd124 + uVar7 + *(int *)((int)param_1 + 4);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar7 = (uVar4 * 0x2000 | uVar4 >> 0x13) + uVar9;
    uVar4 = ((uVar11 ^ uVar7) & uVar3 ^ uVar11) + 0x5c4dd124 + uVar9 + *(int *)((int)param_1 + 8);
    uVar11 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar9 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar10;
    uVar4 = ((~uVar7 | uVar9) ^ uVar11) + 0x6d703ef3 + uVar10 + *(int *)((int)param_1 + 0x3c);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar10 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar3;
    uVar4 = ((~uVar9 | uVar10) ^ uVar7) + 0x6d703ef3 + uVar3 + *(int *)((int)param_1 + 0x14);
    uVar9 = uVar9 * 0x400 | uVar9 >> 0x16;
    uVar3 = (uVar4 * 0x80 | uVar4 >> 0x19) + uVar11;
    uVar4 = ((~uVar10 | uVar3) ^ uVar9) + 0x6d703ef3 + uVar11 + *(int *)((int)param_1 + 4);
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar11 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar7;
    uVar4 = ((~uVar3 | uVar11) ^ uVar10) + 0x6d703ef3 + uVar7 + *(int *)((int)param_1 + 0xc);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar7 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar9;
    uVar4 = ((~uVar11 | uVar7) ^ uVar3) + 0x6d703ef3 + uVar9 + *(int *)((int)param_1 + 0x1c);
    uVar11 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar9 = (uVar4 * 0x100 | uVar4 >> 0x18) + uVar10;
    uVar4 = ((~uVar7 | uVar9) ^ uVar11) + 0x6d703ef3 + uVar10 + *(int *)((int)param_1 + 0x38);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar10 = (uVar4 * 0x40 | uVar4 >> 0x1a) + uVar3;
    uVar4 = ((~uVar9 | uVar10) ^ uVar7) + 0x6d703ef3 + uVar3 + *(int *)((int)param_1 + 0x18);
    uVar9 = uVar9 * 0x400 | uVar9 >> 0x16;
    uVar3 = (uVar4 * 0x40 | uVar4 >> 0x1a) + uVar11;
    uVar4 = ((~uVar10 | uVar3) ^ uVar9) + 0x6d703ef3 + uVar11 + *(int *)((int)param_1 + 0x24);
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar11 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar7;
    uVar4 = ((~uVar3 | uVar11) ^ uVar10) + 0x6d703ef3 + uVar7 + *(int *)((int)param_1 + 0x2c);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar7 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar9;
    uVar4 = ((~uVar11 | uVar7) ^ uVar3) + 0x6d703ef3 + uVar9 + *(int *)((int)param_1 + 0x20);
    uVar11 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar9 = (uVar4 * 0x2000 | uVar4 >> 0x13) + uVar10;
    uVar4 = ((~uVar7 | uVar9) ^ uVar11) + 0x6d703ef3 + uVar10 + *(int *)((int)param_1 + 0x30);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar10 = (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar3;
    uVar4 = ((~uVar9 | uVar10) ^ uVar7) + 0x6d703ef3 + uVar3 + *(int *)((int)param_1 + 8);
    uVar9 = uVar9 * 0x400 | uVar9 >> 0x16;
    uVar3 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar11;
    uVar4 = ((~uVar10 | uVar3) ^ uVar9) + 0x6d703ef3 + uVar11 + *(int *)((int)param_1 + 0x28);
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar11 = (uVar4 * 0x2000 | uVar4 >> 0x13) + uVar7;
    uVar4 = ((~uVar3 | uVar11) ^ uVar10) + 0x6d703ef3 + uVar7 + *(int *)param_1;
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar7 = (uVar4 * 0x2000 | uVar4 >> 0x13) + uVar9;
    uVar4 = ((~uVar11 | uVar7) ^ uVar3) + 0x6d703ef3 + uVar9 + *(int *)((int)param_1 + 0x10);
    uVar11 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar9 = (uVar4 * 0x80 | uVar4 >> 0x19) + uVar10;
    uVar4 = ((~uVar7 | uVar9) ^ uVar11) + 0x6d703ef3 + uVar10 + *(int *)((int)param_1 + 0x34);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar10 = (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar3;
    uVar4 = ((uVar9 ^ uVar7) & uVar10 ^ uVar7) + 0x7a6d76e9 + uVar3 + *(int *)((int)param_1 + 0x20);
    uVar9 = uVar9 * 0x400 | uVar9 >> 0x16;
    uVar3 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar11;
    uVar4 = ((uVar10 ^ uVar9) & uVar3 ^ uVar9) + 0x7a6d76e9 + uVar11 + *(int *)((int)param_1 + 0x18)
    ;
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar11 = (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar7;
    uVar4 = ((uVar3 ^ uVar10) & uVar11 ^ uVar10) + 0x7a6d76e9 +
            uVar7 + *(int *)((int)param_1 + 0x10);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar7 = (uVar4 * 0x100 | uVar4 >> 0x18) + uVar9;
    uVar4 = ((uVar11 ^ uVar3) & uVar7 ^ uVar3) + 0x7a6d76e9 + uVar9 + *(int *)((int)param_1 + 4);
    uVar11 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar9 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar10;
    uVar4 = ((uVar7 ^ uVar11) & uVar9 ^ uVar11) + 0x7a6d76e9 + uVar10 + *(int *)((int)param_1 + 0xc)
    ;
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar10 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar3;
    uVar4 = ((uVar9 ^ uVar7) & uVar10 ^ uVar7) + 0x7a6d76e9 + uVar3 + *(int *)((int)param_1 + 0x2c);
    uVar9 = uVar9 * 0x400 | uVar9 >> 0x16;
    uVar3 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar11;
    uVar4 = ((uVar10 ^ uVar9) & uVar3 ^ uVar9) + 0x7a6d76e9 + uVar11 + *(int *)((int)param_1 + 0x3c)
    ;
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar11 = (uVar4 * 0x40 | uVar4 >> 0x1a) + uVar7;
    uVar4 = ((uVar3 ^ uVar10) & uVar11 ^ uVar10) + 0x7a6d76e9 + uVar7 + *(int *)param_1;
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar7 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar9;
    uVar4 = ((uVar11 ^ uVar3) & uVar7 ^ uVar3) + 0x7a6d76e9 + uVar9 + *(int *)((int)param_1 + 0x14);
    uVar11 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar9 = (uVar4 * 0x40 | uVar4 >> 0x1a) + uVar10;
    uVar4 = ((uVar7 ^ uVar11) & uVar9 ^ uVar11) + 0x7a6d76e9 +
            uVar10 + *(int *)((int)param_1 + 0x30);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar10 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar3;
    uVar4 = ((uVar9 ^ uVar7) & uVar10 ^ uVar7) + 0x7a6d76e9 + uVar3 + *(int *)((int)param_1 + 8);
    uVar9 = uVar9 * 0x400 | uVar9 >> 0x16;
    uVar3 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar11;
    uVar4 = ((uVar10 ^ uVar9) & uVar3 ^ uVar9) + 0x7a6d76e9 + uVar11 + *(int *)((int)param_1 + 0x34)
    ;
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar11 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar7;
    uVar4 = ((uVar3 ^ uVar10) & uVar11 ^ uVar10) + 0x7a6d76e9 +
            uVar7 + *(int *)((int)param_1 + 0x24);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar7 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar9;
    uVar4 = ((uVar11 ^ uVar3) & uVar7 ^ uVar3) + 0x7a6d76e9 + uVar9 + *(int *)((int)param_1 + 0x1c);
    uVar11 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar9 = (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar10;
    uVar4 = ((uVar7 ^ uVar11) & uVar9 ^ uVar11) + 0x7a6d76e9 +
            uVar10 + *(int *)((int)param_1 + 0x28);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar10 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar3;
    uVar4 = ((uVar9 ^ uVar7) & uVar10 ^ uVar7) + 0x7a6d76e9 + uVar3 + *(int *)((int)param_1 + 0x38);
    uVar9 = uVar9 * 0x400 | uVar9 >> 0x16;
    uVar3 = (uVar4 * 0x100 | uVar4 >> 0x18) + uVar11;
    uVar4 = uVar11 + *(int *)((int)param_1 + 0x30) + (uVar10 ^ uVar3 ^ uVar9);
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar11 = (uVar4 * 0x100 | uVar4 >> 0x18) + uVar7;
    uVar4 = uVar7 + *(int *)((int)param_1 + 0x3c) + (uVar3 ^ uVar11 ^ uVar10);
    uVar7 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar4 = (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar9;
    uVar3 = uVar9 + *(int *)((int)param_1 + 0x28) + (uVar11 ^ uVar4 ^ uVar7);
    uVar11 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar9 = (uVar3 * 0x1000 | uVar3 >> 0x14) + uVar10;
    uVar3 = uVar10 + *(int *)((int)param_1 + 0x10) + (uVar4 ^ uVar9 ^ uVar11);
    uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar3 = (uVar3 * 0x200 | uVar3 >> 0x17) + uVar7;
    uVar7 = uVar7 + *(int *)((int)param_1 + 4) + (uVar9 ^ uVar3 ^ uVar4);
    uVar9 = uVar9 * 0x400 | uVar9 >> 0x16;
    uVar7 = (uVar7 * 0x1000 | uVar7 >> 0x14) + uVar11;
    uVar10 = uVar11 + *(int *)((int)param_1 + 0x14) + (uVar3 ^ uVar7 ^ uVar9);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar10 = (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar4;
    uVar4 = uVar4 + *(int *)((int)param_1 + 0x20) + (uVar7 ^ uVar10 ^ uVar3);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar9;
    uVar11 = uVar9 + *(int *)((int)param_1 + 0x1c) + (uVar10 ^ uVar4 ^ uVar7);
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar11 = (uVar11 * 0x40 | uVar11 >> 0x1a) + uVar3;
    uVar3 = uVar3 + *(int *)((int)param_1 + 0x18) + (uVar4 ^ uVar11 ^ uVar10);
    uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar3 = (uVar3 * 0x100 | uVar3 >> 0x18) + uVar7;
    uVar7 = uVar7 + *(int *)((int)param_1 + 8) + (uVar11 ^ uVar3 ^ uVar4);
    uVar11 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x13) + uVar10;
    uVar10 = uVar10 + *(int *)((int)param_1 + 0x34) + (uVar3 ^ uVar7 ^ uVar11);
    uVar3 = uVar3 * 0x400 | uVar3 >> 0x16;
    uVar10 = (uVar10 * 0x40 | uVar10 >> 0x1a) + uVar4;
    uVar4 = uVar4 + *(int *)((int)param_1 + 0x38) + (uVar7 ^ uVar10 ^ uVar3);
    uVar7 = uVar7 * 0x400 | uVar7 >> 0x16;
    uVar4 = (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar11;
    uVar11 = uVar11 + *(int *)param_1 + (uVar10 ^ uVar4 ^ uVar7);
    uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
    uVar11 = (uVar11 * 0x8000 | uVar11 >> 0x11) + uVar3;
    uVar3 = uVar3 + *(int *)((int)param_1 + 0xc) + (uVar4 ^ uVar11 ^ uVar10);
    uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
    uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x13) + uVar7;
    uVar7 = uVar7 + *(int *)((int)param_1 + 0x24) + (uVar11 ^ uVar3 ^ uVar4);
    uVar11 = uVar11 * 0x400 | uVar11 >> 0x16;
    uVar7 = (uVar7 * 0x800 | uVar7 >> 0x15) + uVar10;
    uVar10 = uVar10 + *(int *)((int)param_1 + 0x2c) + (uVar3 ^ uVar7 ^ uVar11);
    param_1 = (uchar *)((int)param_1 + 0x40);
    iVar2 = *(int *)(this + 0x14);
    *(uint *)(this + 0x14) = uVar11;
    *(uint *)(this + 0x14) =
         *(int *)(this + 0x14) + (uVar12 * 0x400 | uVar12 >> 0x16) + *(int *)(this + 0x18);
    *(uint *)(this + 0x18) = uVar4;
    *(uint *)(this + 0x18) = *(int *)(this + 0x18) + uVar13 + *(int *)(this + 0x1c);
    *(uint *)(this + 0x1c) = (uVar10 * 0x800 | uVar10 >> 0x15) + uVar4;
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar6 + *(int *)(this + 0x20);
    *(uint *)(this + 0x20) = uVar7;
    *(uint *)(this + 0x20) =
         *(int *)(this + 0x20) + (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar6 + *(int *)pRVar1;
    *(uint *)pRVar1 = uVar8 + (uVar3 * 0x400 | uVar3 >> 0x16) + iVar2;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}

```

---

## Init

```asm
// === 087a8ce0 TaoCrypt::RIPEMD160::Init  [0x087a8ce0-0x87a8d1f] ===
 87a8ce0:	55                   	push   %ebp
 87a8ce1:	89 e5                	mov    %esp,%ebp
 87a8ce3:	8b 45 08             	mov    0x8(%ebp),%eax
 87a8ce6:	c7 40 10 01 23 45 67 	movl   $0x67452301,0x10(%eax)
 87a8ced:	c7 40 14 89 ab cd ef 	movl   $0xefcdab89,0x14(%eax)
 87a8cf4:	c7 40 18 fe dc ba 98 	movl   $0x98badcfe,0x18(%eax)
 87a8cfb:	c7 40 1c 76 54 32 10 	movl   $0x10325476,0x1c(%eax)
 87a8d02:	c7 40 20 f0 e1 d2 c3 	movl   $0xc3d2e1f0,0x20(%eax)
 87a8d09:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87a8d10:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87a8d17:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87a8d1e:	5d                   	pop    %ebp
 87a8d1f:	c3                   	ret

```

```c
// TaoCrypt::RIPEMD160::Init @ 0x87a8ce0

/* TaoCrypt::RIPEMD160::Init() */

void __thiscall TaoCrypt::RIPEMD160::Init(RIPEMD160 *this)

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

## RIPEMD160

```asm
// === 087ab530 TaoCrypt::RIPEMD160::RIPEMD160  [0x087ab530-0x87ab61f] ===
 87ab530:	55                   	push   %ebp
 87ab531:	89 e5                	mov    %esp,%ebp
 87ab533:	57                   	push   %edi
 87ab534:	56                   	push   %esi
 87ab535:	53                   	push   %ebx
 87ab536:	e8 bd 78 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87ab53b:	81 c3 5d 16 bc 00    	add    $0xbc165d,%ebx
 87ab541:	83 ec 1c             	sub    $0x1c,%esp
 87ab544:	8b 75 08             	mov    0x8(%ebp),%esi
 87ab547:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87ab54a:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 87ab551:	00 
 87ab552:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 87ab559:	00 
 87ab55a:	89 34 24             	mov    %esi,(%esp)
 87ab55d:	e8 6e d6 fa ff       	call   8758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>
 87ab562:	8b 83 30 fa ff ff    	mov    -0x5d0(%ebx),%eax
 87ab568:	8d 57 10             	lea    0x10(%edi),%edx
 87ab56b:	8b 4f 10             	mov    0x10(%edi),%ecx
 87ab56e:	83 c0 08             	add    $0x8,%eax
 87ab571:	89 06                	mov    %eax,(%esi)
 87ab573:	8b 47 04             	mov    0x4(%edi),%eax
 87ab576:	89 4e 10             	mov    %ecx,0x10(%esi)
 87ab579:	8b 4a 04             	mov    0x4(%edx),%ecx
 87ab57c:	89 46 04             	mov    %eax,0x4(%esi)
 87ab57f:	8b 47 08             	mov    0x8(%edi),%eax
 87ab582:	89 46 08             	mov    %eax,0x8(%esi)
 87ab585:	8b 47 0c             	mov    0xc(%edi),%eax
 87ab588:	89 46 0c             	mov    %eax,0xc(%esi)
 87ab58b:	8d 46 10             	lea    0x10(%esi),%eax
 87ab58e:	89 48 04             	mov    %ecx,0x4(%eax)
 87ab591:	8b 4a 08             	mov    0x8(%edx),%ecx
 87ab594:	89 48 08             	mov    %ecx,0x8(%eax)
 87ab597:	8b 4a 0c             	mov    0xc(%edx),%ecx
 87ab59a:	89 48 0c             	mov    %ecx,0xc(%eax)
 87ab59d:	8b 52 10             	mov    0x10(%edx),%edx
 87ab5a0:	8b 4f 30             	mov    0x30(%edi),%ecx
 87ab5a3:	89 50 10             	mov    %edx,0x10(%eax)
 87ab5a6:	8d 57 30             	lea    0x30(%edi),%edx
 87ab5a9:	89 4e 30             	mov    %ecx,0x30(%esi)
 87ab5ac:	8b 4a 04             	mov    0x4(%edx),%ecx
 87ab5af:	8d 46 30             	lea    0x30(%esi),%eax
 87ab5b2:	89 48 04             	mov    %ecx,0x4(%eax)
 87ab5b5:	8b 4a 08             	mov    0x8(%edx),%ecx
 87ab5b8:	89 48 08             	mov    %ecx,0x8(%eax)
 87ab5bb:	8b 4a 0c             	mov    0xc(%edx),%ecx
 87ab5be:	89 48 0c             	mov    %ecx,0xc(%eax)
 87ab5c1:	8b 4a 10             	mov    0x10(%edx),%ecx
 87ab5c4:	89 48 10             	mov    %ecx,0x10(%eax)
 87ab5c7:	8b 4a 14             	mov    0x14(%edx),%ecx
 87ab5ca:	89 48 14             	mov    %ecx,0x14(%eax)
 87ab5cd:	8b 4a 18             	mov    0x18(%edx),%ecx
 87ab5d0:	89 48 18             	mov    %ecx,0x18(%eax)
 87ab5d3:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 87ab5d6:	89 48 1c             	mov    %ecx,0x1c(%eax)
 87ab5d9:	8b 4a 20             	mov    0x20(%edx),%ecx
 87ab5dc:	89 48 20             	mov    %ecx,0x20(%eax)
 87ab5df:	8b 4a 24             	mov    0x24(%edx),%ecx
 87ab5e2:	89 48 24             	mov    %ecx,0x24(%eax)
 87ab5e5:	8b 4a 28             	mov    0x28(%edx),%ecx
 87ab5e8:	89 48 28             	mov    %ecx,0x28(%eax)
 87ab5eb:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 87ab5ee:	89 48 2c             	mov    %ecx,0x2c(%eax)
 87ab5f1:	8b 4a 30             	mov    0x30(%edx),%ecx
 87ab5f4:	89 48 30             	mov    %ecx,0x30(%eax)
 87ab5f7:	8b 4a 34             	mov    0x34(%edx),%ecx
 87ab5fa:	89 48 34             	mov    %ecx,0x34(%eax)
 87ab5fd:	8b 4a 38             	mov    0x38(%edx),%ecx
 87ab600:	89 48 38             	mov    %ecx,0x38(%eax)
 87ab603:	8b 52 3c             	mov    0x3c(%edx),%edx
 87ab606:	89 50 3c             	mov    %edx,0x3c(%eax)
 87ab609:	83 c4 1c             	add    $0x1c,%esp
 87ab60c:	5b                   	pop    %ebx
 87ab60d:	5e                   	pop    %esi
 87ab60e:	5f                   	pop    %edi
 87ab60f:	5d                   	pop    %ebp
 87ab610:	c3                   	ret
 87ab611:	90                   	nop
 87ab612:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87ab619:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::RIPEMD160::RIPEMD160 @ 0x87ab530

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RIPEMD160::RIPEMD160(TaoCrypt::RIPEMD160 const&) */

void __thiscall TaoCrypt::RIPEMD160::RIPEMD160(RIPEMD160 *this,RIPEMD160 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  HASHwithTransform::HASHwithTransform((HASHwithTransform *)this,5,0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined **)this = PTR_vtable_0936c5c8 + 8;
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
// === 087ab320 TaoCrypt::RIPEMD160::Swap  [0x087ab320-0x87ab3df] ===
 87ab320:	55                   	push   %ebp
 87ab321:	89 e5                	mov    %esp,%ebp
 87ab323:	57                   	push   %edi
 87ab324:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87ab327:	56                   	push   %esi
 87ab328:	8b 75 0c             	mov    0xc(%ebp),%esi
 87ab32b:	8b 41 08             	mov    0x8(%ecx),%eax
 87ab32e:	8b 56 08             	mov    0x8(%esi),%edx
 87ab331:	8b 7e 10             	mov    0x10(%esi),%edi
 87ab334:	89 51 08             	mov    %edx,0x8(%ecx)
 87ab337:	8b 56 0c             	mov    0xc(%esi),%edx
 87ab33a:	89 46 08             	mov    %eax,0x8(%esi)
 87ab33d:	8b 41 0c             	mov    0xc(%ecx),%eax
 87ab340:	89 79 10             	mov    %edi,0x10(%ecx)
 87ab343:	89 51 0c             	mov    %edx,0xc(%ecx)
 87ab346:	8b 56 04             	mov    0x4(%esi),%edx
 87ab349:	89 46 0c             	mov    %eax,0xc(%esi)
 87ab34c:	8b 41 04             	mov    0x4(%ecx),%eax
 87ab34f:	89 51 04             	mov    %edx,0x4(%ecx)
 87ab352:	8d 56 10             	lea    0x10(%esi),%edx
 87ab355:	8b 7a 04             	mov    0x4(%edx),%edi
 87ab358:	89 46 04             	mov    %eax,0x4(%esi)
 87ab35b:	8d 41 10             	lea    0x10(%ecx),%eax
 87ab35e:	89 78 04             	mov    %edi,0x4(%eax)
 87ab361:	8b 7a 08             	mov    0x8(%edx),%edi
 87ab364:	89 78 08             	mov    %edi,0x8(%eax)
 87ab367:	8b 7a 0c             	mov    0xc(%edx),%edi
 87ab36a:	89 78 0c             	mov    %edi,0xc(%eax)
 87ab36d:	8b 52 10             	mov    0x10(%edx),%edx
 87ab370:	89 50 10             	mov    %edx,0x10(%eax)
 87ab373:	8d 56 30             	lea    0x30(%esi),%edx
 87ab376:	8b 76 30             	mov    0x30(%esi),%esi
 87ab379:	8d 41 30             	lea    0x30(%ecx),%eax
 87ab37c:	89 71 30             	mov    %esi,0x30(%ecx)
 87ab37f:	8b 4a 04             	mov    0x4(%edx),%ecx
 87ab382:	89 48 04             	mov    %ecx,0x4(%eax)
 87ab385:	8b 4a 08             	mov    0x8(%edx),%ecx
 87ab388:	89 48 08             	mov    %ecx,0x8(%eax)
 87ab38b:	8b 4a 0c             	mov    0xc(%edx),%ecx
 87ab38e:	89 48 0c             	mov    %ecx,0xc(%eax)
 87ab391:	8b 4a 10             	mov    0x10(%edx),%ecx
 87ab394:	89 48 10             	mov    %ecx,0x10(%eax)
 87ab397:	8b 4a 14             	mov    0x14(%edx),%ecx
 87ab39a:	89 48 14             	mov    %ecx,0x14(%eax)
 87ab39d:	8b 4a 18             	mov    0x18(%edx),%ecx
 87ab3a0:	89 48 18             	mov    %ecx,0x18(%eax)
 87ab3a3:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 87ab3a6:	89 48 1c             	mov    %ecx,0x1c(%eax)
 87ab3a9:	8b 4a 20             	mov    0x20(%edx),%ecx
 87ab3ac:	89 48 20             	mov    %ecx,0x20(%eax)
 87ab3af:	8b 4a 24             	mov    0x24(%edx),%ecx
 87ab3b2:	89 48 24             	mov    %ecx,0x24(%eax)
 87ab3b5:	8b 4a 28             	mov    0x28(%edx),%ecx
 87ab3b8:	89 48 28             	mov    %ecx,0x28(%eax)
 87ab3bb:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 87ab3be:	89 48 2c             	mov    %ecx,0x2c(%eax)
 87ab3c1:	8b 4a 30             	mov    0x30(%edx),%ecx
 87ab3c4:	89 48 30             	mov    %ecx,0x30(%eax)
 87ab3c7:	8b 4a 34             	mov    0x34(%edx),%ecx
 87ab3ca:	89 48 34             	mov    %ecx,0x34(%eax)
 87ab3cd:	8b 4a 38             	mov    0x38(%edx),%ecx
 87ab3d0:	89 48 38             	mov    %ecx,0x38(%eax)
 87ab3d3:	8b 52 3c             	mov    0x3c(%edx),%edx
 87ab3d6:	89 50 3c             	mov    %edx,0x3c(%eax)
 87ab3d9:	5e                   	pop    %esi
 87ab3da:	5f                   	pop    %edi
 87ab3db:	5d                   	pop    %ebp
 87ab3dc:	c3                   	ret
 87ab3dd:	90                   	nop
 87ab3de:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::RIPEMD160::Swap @ 0x87ab320

/* TaoCrypt::RIPEMD160::Swap(TaoCrypt::RIPEMD160&) */

void __thiscall TaoCrypt::RIPEMD160::Swap(RIPEMD160 *this,RIPEMD160 *param_1)

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
// === 087a8d20 TaoCrypt::RIPEMD160::Transform  [0x087a8d20-0x87aa2ff] ===
 87a8d20:	55                   	push   %ebp
 87a8d21:	89 e5                	mov    %esp,%ebp
 87a8d23:	57                   	push   %edi
 87a8d24:	56                   	push   %esi
 87a8d25:	81 ec 88 00 00 00    	sub    $0x88,%esp
 87a8d2b:	8b 45 08             	mov    0x8(%ebp),%eax
 87a8d2e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a8d31:	8b 55 08             	mov    0x8(%ebp),%edx
 87a8d34:	8b 75 08             	mov    0x8(%ebp),%esi
 87a8d37:	8b 40 10             	mov    0x10(%eax),%eax
 87a8d3a:	8b 49 18             	mov    0x18(%ecx),%ecx
 87a8d3d:	8b 52 14             	mov    0x14(%edx),%edx
 87a8d40:	8b 76 1c             	mov    0x1c(%esi),%esi
 87a8d43:	89 45 b8             	mov    %eax,-0x48(%ebp)
 87a8d46:	8b 45 08             	mov    0x8(%ebp),%eax
 87a8d49:	89 4d bc             	mov    %ecx,-0x44(%ebp)
 87a8d4c:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 87a8d4f:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a8d52:	89 75 c0             	mov    %esi,-0x40(%ebp)
 87a8d55:	8b 40 30             	mov    0x30(%eax),%eax
 87a8d58:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87a8d5b:	8b 7f 20             	mov    0x20(%edi),%edi
 87a8d5e:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 87a8d64:	01 c1                	add    %eax,%ecx
 87a8d66:	8b 45 bc             	mov    -0x44(%ebp),%eax
 87a8d69:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 87a8d6c:	31 d0                	xor    %edx,%eax
 87a8d6e:	8b 55 bc             	mov    -0x44(%ebp),%edx
 87a8d71:	31 f0                	xor    %esi,%eax
 87a8d73:	8b 75 08             	mov    0x8(%ebp),%esi
 87a8d76:	01 c1                	add    %eax,%ecx
 87a8d78:	c1 c9 15             	ror    $0x15,%ecx
 87a8d7b:	c1 ca 16             	ror    $0x16,%edx
 87a8d7e:	01 f9                	add    %edi,%ecx
 87a8d80:	8b 76 34             	mov    0x34(%esi),%esi
 87a8d83:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87a8d86:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87a8d89:	33 45 dc             	xor    -0x24(%ebp),%eax
 87a8d8c:	89 f2                	mov    %esi,%edx
 87a8d8e:	01 fa                	add    %edi,%edx
 87a8d90:	8b 7d dc             	mov    -0x24(%ebp),%edi
 87a8d93:	31 c8                	xor    %ecx,%eax
 87a8d95:	8d 04 02             	lea    (%edx,%eax,1),%eax
 87a8d98:	89 b5 7c ff ff ff    	mov    %esi,-0x84(%ebp)
 87a8d9e:	c1 c8 12             	ror    $0x12,%eax
 87a8da1:	03 45 c0             	add    -0x40(%ebp),%eax
 87a8da4:	c1 cf 16             	ror    $0x16,%edi
 87a8da7:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 87a8daa:	8b 55 08             	mov    0x8(%ebp),%edx
 87a8dad:	8b 75 c0             	mov    -0x40(%ebp),%esi
 87a8db0:	8b 52 38             	mov    0x38(%edx),%edx
 87a8db3:	89 55 80             	mov    %edx,-0x80(%ebp)
 87a8db6:	01 d6                	add    %edx,%esi
 87a8db8:	89 fa                	mov    %edi,%edx
 87a8dba:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a8dbd:	31 ca                	xor    %ecx,%edx
 87a8dbf:	31 c2                	xor    %eax,%edx
 87a8dc1:	01 d6                	add    %edx,%esi
 87a8dc3:	89 c2                	mov    %eax,%edx
 87a8dc5:	c1 c8 16             	ror    $0x16,%eax
 87a8dc8:	8b 7f 3c             	mov    0x3c(%edi),%edi
 87a8dcb:	c1 ce 11             	ror    $0x11,%esi
 87a8dce:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a8dd1:	8b 45 08             	mov    0x8(%ebp),%eax
 87a8dd4:	c1 c9 16             	ror    $0x16,%ecx
 87a8dd7:	03 75 e0             	add    -0x20(%ebp),%esi
 87a8dda:	31 ca                	xor    %ecx,%edx
 87a8ddc:	89 7d 84             	mov    %edi,-0x7c(%ebp)
 87a8ddf:	8b 7d e0             	mov    -0x20(%ebp),%edi
 87a8de2:	03 7d 84             	add    -0x7c(%ebp),%edi
 87a8de5:	31 f2                	xor    %esi,%edx
 87a8de7:	8b 40 40             	mov    0x40(%eax),%eax
 87a8dea:	8d 14 17             	lea    (%edi,%edx,1),%edx
 87a8ded:	8b 7d f4             	mov    -0xc(%ebp),%edi
 87a8df0:	c1 ca 14             	ror    $0x14,%edx
 87a8df3:	89 45 88             	mov    %eax,-0x78(%ebp)
 87a8df6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87a8df9:	03 55 e4             	add    -0x1c(%ebp),%edx
 87a8dfc:	03 45 88             	add    -0x78(%ebp),%eax
 87a8dff:	31 f7                	xor    %esi,%edi
 87a8e01:	31 d7                	xor    %edx,%edi
 87a8e03:	01 c7                	add    %eax,%edi
 87a8e05:	8b 45 08             	mov    0x8(%ebp),%eax
 87a8e08:	c1 cf 1b             	ror    $0x1b,%edi
 87a8e0b:	01 cf                	add    %ecx,%edi
 87a8e0d:	c1 ce 16             	ror    $0x16,%esi
 87a8e10:	8b 40 44             	mov    0x44(%eax),%eax
 87a8e13:	89 45 8c             	mov    %eax,-0x74(%ebp)
 87a8e16:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 87a8e19:	89 d1                	mov    %edx,%ecx
 87a8e1b:	31 f1                	xor    %esi,%ecx
 87a8e1d:	31 f9                	xor    %edi,%ecx
 87a8e1f:	01 c1                	add    %eax,%ecx
 87a8e21:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a8e24:	c1 c9 18             	ror    $0x18,%ecx
 87a8e27:	03 4d f4             	add    -0xc(%ebp),%ecx
 87a8e2a:	c1 ca 16             	ror    $0x16,%edx
 87a8e2d:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 87a8e30:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a8e33:	8b 49 48             	mov    0x48(%ecx),%ecx
 87a8e36:	89 4d 90             	mov    %ecx,-0x70(%ebp)
 87a8e39:	01 c8                	add    %ecx,%eax
 87a8e3b:	89 f9                	mov    %edi,%ecx
 87a8e3d:	31 d1                	xor    %edx,%ecx
 87a8e3f:	33 4d f0             	xor    -0x10(%ebp),%ecx
 87a8e42:	c1 cf 16             	ror    $0x16,%edi
 87a8e45:	01 c8                	add    %ecx,%eax
 87a8e47:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a8e4a:	c1 c8 19             	ror    $0x19,%eax
 87a8e4d:	01 f0                	add    %esi,%eax
 87a8e4f:	8b 49 4c             	mov    0x4c(%ecx),%ecx
 87a8e52:	89 4d 94             	mov    %ecx,-0x6c(%ebp)
 87a8e55:	01 ce                	add    %ecx,%esi
 87a8e57:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a8e5a:	31 f9                	xor    %edi,%ecx
 87a8e5c:	31 c1                	xor    %eax,%ecx
 87a8e5e:	01 ce                	add    %ecx,%esi
 87a8e60:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a8e63:	c1 ce 17             	ror    $0x17,%esi
 87a8e66:	01 d6                	add    %edx,%esi
 87a8e68:	c1 c9 16             	ror    $0x16,%ecx
 87a8e6b:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 87a8e6e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a8e71:	8b 49 50             	mov    0x50(%ecx),%ecx
 87a8e74:	89 4d 98             	mov    %ecx,-0x68(%ebp)
 87a8e77:	01 ca                	add    %ecx,%edx
 87a8e79:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a8e7c:	31 c1                	xor    %eax,%ecx
 87a8e7e:	31 f1                	xor    %esi,%ecx
 87a8e80:	01 ca                	add    %ecx,%edx
 87a8e82:	89 c1                	mov    %eax,%ecx
 87a8e84:	8b 45 08             	mov    0x8(%ebp),%eax
 87a8e87:	c1 ca 15             	ror    $0x15,%edx
 87a8e8a:	01 fa                	add    %edi,%edx
 87a8e8c:	c1 c9 16             	ror    $0x16,%ecx
 87a8e8f:	8b 40 54             	mov    0x54(%eax),%eax
 87a8e92:	01 c7                	add    %eax,%edi
 87a8e94:	89 45 9c             	mov    %eax,-0x64(%ebp)
 87a8e97:	89 f0                	mov    %esi,%eax
 87a8e99:	31 c8                	xor    %ecx,%eax
 87a8e9b:	31 d0                	xor    %edx,%eax
 87a8e9d:	8d 04 07             	lea    (%edi,%eax,1),%eax
 87a8ea0:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a8ea3:	c1 c8 13             	ror    $0x13,%eax
 87a8ea6:	03 45 f0             	add    -0x10(%ebp),%eax
 87a8ea9:	c1 ce 16             	ror    $0x16,%esi
 87a8eac:	8b 7f 58             	mov    0x58(%edi),%edi
 87a8eaf:	89 7d a0             	mov    %edi,-0x60(%ebp)
 87a8eb2:	8b 7d f0             	mov    -0x10(%ebp),%edi
 87a8eb5:	03 7d a0             	add    -0x60(%ebp),%edi
 87a8eb8:	89 7d f0             	mov    %edi,-0x10(%ebp)
 87a8ebb:	89 d7                	mov    %edx,%edi
 87a8ebd:	31 f7                	xor    %esi,%edi
 87a8ebf:	31 c7                	xor    %eax,%edi
 87a8ec1:	03 7d f0             	add    -0x10(%ebp),%edi
 87a8ec4:	c1 ca 16             	ror    $0x16,%edx
 87a8ec7:	c1 cf 12             	ror    $0x12,%edi
 87a8eca:	01 cf                	add    %ecx,%edi
 87a8ecc:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a8ecf:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a8ed2:	8b 7f 5c             	mov    0x5c(%edi),%edi
 87a8ed5:	89 7d a4             	mov    %edi,-0x5c(%ebp)
 87a8ed8:	01 f9                	add    %edi,%ecx
 87a8eda:	89 c7                	mov    %eax,%edi
 87a8edc:	31 d7                	xor    %edx,%edi
 87a8ede:	33 7d f4             	xor    -0xc(%ebp),%edi
 87a8ee1:	c1 c8 16             	ror    $0x16,%eax
 87a8ee4:	01 f9                	add    %edi,%ecx
 87a8ee6:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a8ee9:	c1 c9 11             	ror    $0x11,%ecx
 87a8eec:	01 f1                	add    %esi,%ecx
 87a8eee:	8b 7f 60             	mov    0x60(%edi),%edi
 87a8ef1:	89 7d a8             	mov    %edi,-0x58(%ebp)
 87a8ef4:	01 fe                	add    %edi,%esi
 87a8ef6:	8b 7d f4             	mov    -0xc(%ebp),%edi
 87a8ef9:	31 c7                	xor    %eax,%edi
 87a8efb:	31 cf                	xor    %ecx,%edi
 87a8efd:	01 fe                	add    %edi,%esi
 87a8eff:	8b 7d f4             	mov    -0xc(%ebp),%edi
 87a8f02:	c1 ce 1a             	ror    $0x1a,%esi
 87a8f05:	01 d6                	add    %edx,%esi
 87a8f07:	c1 cf 16             	ror    $0x16,%edi
 87a8f0a:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a8f0d:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a8f10:	8b 7f 64             	mov    0x64(%edi),%edi
 87a8f13:	89 7d ac             	mov    %edi,-0x54(%ebp)
 87a8f16:	01 fa                	add    %edi,%edx
 87a8f18:	8b 7d f4             	mov    -0xc(%ebp),%edi
 87a8f1b:	31 cf                	xor    %ecx,%edi
 87a8f1d:	31 f7                	xor    %esi,%edi
 87a8f1f:	01 fa                	add    %edi,%edx
 87a8f21:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a8f24:	c1 ca 19             	ror    $0x19,%edx
 87a8f27:	01 c2                	add    %eax,%edx
 87a8f29:	c1 c9 16             	ror    $0x16,%ecx
 87a8f2c:	8b 7f 68             	mov    0x68(%edi),%edi
 87a8f2f:	01 f8                	add    %edi,%eax
 87a8f31:	89 7d b0             	mov    %edi,-0x50(%ebp)
 87a8f34:	89 f7                	mov    %esi,%edi
 87a8f36:	31 cf                	xor    %ecx,%edi
 87a8f38:	31 d7                	xor    %edx,%edi
 87a8f3a:	8d 3c 38             	lea    (%eax,%edi,1),%edi
 87a8f3d:	8b 45 08             	mov    0x8(%ebp),%eax
 87a8f40:	c1 cf 17             	ror    $0x17,%edi
 87a8f43:	03 7d f4             	add    -0xc(%ebp),%edi
 87a8f46:	c1 ce 16             	ror    $0x16,%esi
 87a8f49:	8b 40 6c             	mov    0x6c(%eax),%eax
 87a8f4c:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 87a8f4f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a8f52:	03 45 b4             	add    -0x4c(%ebp),%eax
 87a8f55:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a8f58:	89 d0                	mov    %edx,%eax
 87a8f5a:	31 f0                	xor    %esi,%eax
 87a8f5c:	31 f8                	xor    %edi,%eax
 87a8f5e:	03 45 f4             	add    -0xc(%ebp),%eax
 87a8f61:	c1 ca 16             	ror    $0x16,%edx
 87a8f64:	c1 c8 18             	ror    $0x18,%eax
 87a8f67:	01 c8                	add    %ecx,%eax
 87a8f69:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a8f6c:	8b 45 94             	mov    -0x6c(%ebp),%eax
 87a8f6f:	8d 8c 01 99 79 82 5a 	lea    0x5a827999(%ecx,%eax,1),%ecx
 87a8f76:	89 f8                	mov    %edi,%eax
 87a8f78:	31 d0                	xor    %edx,%eax
 87a8f7a:	23 45 f4             	and    -0xc(%ebp),%eax
 87a8f7d:	c1 cf 16             	ror    $0x16,%edi
 87a8f80:	31 d0                	xor    %edx,%eax
 87a8f82:	01 c1                	add    %eax,%ecx
 87a8f84:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a8f87:	c1 c9 19             	ror    $0x19,%ecx
 87a8f8a:	01 f1                	add    %esi,%ecx
 87a8f8c:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 87a8f8f:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 87a8f92:	31 f8                	xor    %edi,%eax
 87a8f94:	23 45 f0             	and    -0x10(%ebp),%eax
 87a8f97:	8d b4 0e 99 79 82 5a 	lea    0x5a827999(%esi,%ecx,1),%esi
 87a8f9e:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 87a8fa1:	31 f8                	xor    %edi,%eax
 87a8fa3:	01 c6                	add    %eax,%esi
 87a8fa5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a8fa8:	c1 ce 1a             	ror    $0x1a,%esi
 87a8fab:	01 d6                	add    %edx,%esi
 87a8fad:	8d 94 0a 99 79 82 5a 	lea    0x5a827999(%edx,%ecx,1),%edx
 87a8fb4:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a8fb7:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87a8fba:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a8fbd:	c1 c8 16             	ror    $0x16,%eax
 87a8fc0:	c1 c9 16             	ror    $0x16,%ecx
 87a8fc3:	31 c2                	xor    %eax,%edx
 87a8fc5:	21 f2                	and    %esi,%edx
 87a8fc7:	31 c2                	xor    %eax,%edx
 87a8fc9:	03 55 f4             	add    -0xc(%ebp),%edx
 87a8fcc:	c1 ca 18             	ror    $0x18,%edx
 87a8fcf:	01 fa                	add    %edi,%edx
 87a8fd1:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87a8fd4:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 87a8fda:	8d bc 17 99 79 82 5a 	lea    0x5a827999(%edi,%edx,1),%edi
 87a8fe1:	89 f2                	mov    %esi,%edx
 87a8fe3:	31 ca                	xor    %ecx,%edx
 87a8fe5:	23 55 f4             	and    -0xc(%ebp),%edx
 87a8fe8:	31 ca                	xor    %ecx,%edx
 87a8fea:	01 d7                	add    %edx,%edi
 87a8fec:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87a8fef:	c1 cf 13             	ror    $0x13,%edi
 87a8ff2:	01 c7                	add    %eax,%edi
 87a8ff4:	c1 ce 16             	ror    $0x16,%esi
 87a8ff7:	8d 84 10 99 79 82 5a 	lea    0x5a827999(%eax,%edx,1),%eax
 87a8ffe:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87a9001:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a9004:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a9007:	c1 ca 16             	ror    $0x16,%edx
 87a900a:	31 f0                	xor    %esi,%eax
 87a900c:	21 f8                	and    %edi,%eax
 87a900e:	31 f0                	xor    %esi,%eax
 87a9010:	03 45 f0             	add    -0x10(%ebp),%eax
 87a9013:	c1 c8 15             	ror    $0x15,%eax
 87a9016:	01 c8                	add    %ecx,%eax
 87a9018:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a901b:	8b 45 90             	mov    -0x70(%ebp),%eax
 87a901e:	8d 8c 01 99 79 82 5a 	lea    0x5a827999(%ecx,%eax,1),%ecx
 87a9025:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a9028:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87a902b:	89 f9                	mov    %edi,%ecx
 87a902d:	31 d1                	xor    %edx,%ecx
 87a902f:	23 4d f0             	and    -0x10(%ebp),%ecx
 87a9032:	c1 cf 16             	ror    $0x16,%edi
 87a9035:	c1 c8 16             	ror    $0x16,%eax
 87a9038:	31 d1                	xor    %edx,%ecx
 87a903a:	03 4d f4             	add    -0xc(%ebp),%ecx
 87a903d:	c1 c9 17             	ror    $0x17,%ecx
 87a9040:	01 f1                	add    %esi,%ecx
 87a9042:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87a9045:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 87a9048:	8d b4 0e 99 79 82 5a 	lea    0x5a827999(%esi,%ecx,1),%esi
 87a904f:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a9052:	31 f9                	xor    %edi,%ecx
 87a9054:	23 4d f4             	and    -0xc(%ebp),%ecx
 87a9057:	31 f9                	xor    %edi,%ecx
 87a9059:	01 ce                	add    %ecx,%esi
 87a905b:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 87a905e:	c1 ce 19             	ror    $0x19,%esi
 87a9061:	01 d6                	add    %edx,%esi
 87a9063:	8d 94 0a 99 79 82 5a 	lea    0x5a827999(%edx,%ecx,1),%edx
 87a906a:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a906d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87a9070:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 87a9073:	31 c2                	xor    %eax,%edx
 87a9075:	21 f2                	and    %esi,%edx
 87a9077:	31 c2                	xor    %eax,%edx
 87a9079:	03 55 f0             	add    -0x10(%ebp),%edx
 87a907c:	c1 c9 16             	ror    $0x16,%ecx
 87a907f:	c1 ca 11             	ror    $0x11,%edx
 87a9082:	01 fa                	add    %edi,%edx
 87a9084:	89 55 ec             	mov    %edx,-0x14(%ebp)
 87a9087:	8b 55 a8             	mov    -0x58(%ebp),%edx
 87a908a:	8d bc 17 99 79 82 5a 	lea    0x5a827999(%edi,%edx,1),%edi
 87a9091:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 87a9097:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a909a:	89 f7                	mov    %esi,%edi
 87a909c:	31 cf                	xor    %ecx,%edi
 87a909e:	23 7d ec             	and    -0x14(%ebp),%edi
 87a90a1:	c1 ce 16             	ror    $0x16,%esi
 87a90a4:	31 cf                	xor    %ecx,%edi
 87a90a6:	03 7d f4             	add    -0xc(%ebp),%edi
 87a90a9:	c1 cf 19             	ror    $0x19,%edi
 87a90ac:	01 c7                	add    %eax,%edi
 87a90ae:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a90b1:	8d bc 10 99 79 82 5a 	lea    0x5a827999(%eax,%edx,1),%edi
 87a90b8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 87a90bb:	8b 55 ec             	mov    -0x14(%ebp),%edx
 87a90be:	31 f0                	xor    %esi,%eax
 87a90c0:	23 45 f4             	and    -0xc(%ebp),%eax
 87a90c3:	c1 ca 16             	ror    $0x16,%edx
 87a90c6:	31 f0                	xor    %esi,%eax
 87a90c8:	8d 04 07             	lea    (%edi,%eax,1),%eax
 87a90cb:	8b 7d 9c             	mov    -0x64(%ebp),%edi
 87a90ce:	c1 c8 14             	ror    $0x14,%eax
 87a90d1:	01 c8                	add    %ecx,%eax
 87a90d3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a90d6:	8d 84 39 99 79 82 5a 	lea    0x5a827999(%ecx,%edi,1),%eax
 87a90dd:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 87a90e0:	8b 7d f4             	mov    -0xc(%ebp),%edi
 87a90e3:	31 d1                	xor    %edx,%ecx
 87a90e5:	23 4d f0             	and    -0x10(%ebp),%ecx
 87a90e8:	c1 cf 16             	ror    $0x16,%edi
 87a90eb:	31 d1                	xor    %edx,%ecx
 87a90ed:	8d 0c 08             	lea    (%eax,%ecx,1),%ecx
 87a90f0:	8b 45 8c             	mov    -0x74(%ebp),%eax
 87a90f3:	c1 c9 11             	ror    $0x11,%ecx
 87a90f6:	01 f1                	add    %esi,%ecx
 87a90f8:	8d b4 06 99 79 82 5a 	lea    0x5a827999(%esi,%eax,1),%esi
 87a90ff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a9102:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a9105:	8b 75 f0             	mov    -0x10(%ebp),%esi
 87a9108:	c1 c8 16             	ror    $0x16,%eax
 87a910b:	31 fe                	xor    %edi,%esi
 87a910d:	21 ce                	and    %ecx,%esi
 87a910f:	31 fe                	xor    %edi,%esi
 87a9111:	03 75 f4             	add    -0xc(%ebp),%esi
 87a9114:	c1 ce 17             	ror    $0x17,%esi
 87a9117:	01 d6                	add    %edx,%esi
 87a9119:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a911c:	8b 75 80             	mov    -0x80(%ebp),%esi
 87a911f:	8d 94 32 99 79 82 5a 	lea    0x5a827999(%edx,%esi,1),%edx
 87a9126:	8b 75 f4             	mov    -0xc(%ebp),%esi
 87a9129:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a912c:	89 ca                	mov    %ecx,%edx
 87a912e:	31 c2                	xor    %eax,%edx
 87a9130:	23 55 f4             	and    -0xc(%ebp),%edx
 87a9133:	c1 c9 16             	ror    $0x16,%ecx
 87a9136:	31 ce                	xor    %ecx,%esi
 87a9138:	31 c2                	xor    %eax,%edx
 87a913a:	03 55 f0             	add    -0x10(%ebp),%edx
 87a913d:	c1 ca 15             	ror    $0x15,%edx
 87a9140:	01 fa                	add    %edi,%edx
 87a9142:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a9145:	8b 55 b0             	mov    -0x50(%ebp),%edx
 87a9148:	23 75 f0             	and    -0x10(%ebp),%esi
 87a914b:	8d bc 17 99 79 82 5a 	lea    0x5a827999(%edi,%edx,1),%edi
 87a9152:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87a9155:	31 ce                	xor    %ecx,%esi
 87a9157:	01 f7                	add    %esi,%edi
 87a9159:	8b 75 f4             	mov    -0xc(%ebp),%esi
 87a915c:	c1 cf 19             	ror    $0x19,%edi
 87a915f:	01 c7                	add    %eax,%edi
 87a9161:	8d 84 10 99 79 82 5a 	lea    0x5a827999(%eax,%edx,1),%eax
 87a9168:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a916b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a916e:	c1 ce 16             	ror    $0x16,%esi
 87a9171:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a9174:	31 f0                	xor    %esi,%eax
 87a9176:	21 f8                	and    %edi,%eax
 87a9178:	31 f0                	xor    %esi,%eax
 87a917a:	03 45 f4             	add    -0xc(%ebp),%eax
 87a917d:	c1 ca 16             	ror    $0x16,%edx
 87a9180:	c1 c8 13             	ror    $0x13,%eax
 87a9183:	01 c8                	add    %ecx,%eax
 87a9185:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a9188:	8b 45 98             	mov    -0x68(%ebp),%eax
 87a918b:	8d 8c 01 99 79 82 5a 	lea    0x5a827999(%ecx,%eax,1),%ecx
 87a9192:	89 f8                	mov    %edi,%eax
 87a9194:	31 d0                	xor    %edx,%eax
 87a9196:	23 45 f4             	and    -0xc(%ebp),%eax
 87a9199:	c1 cf 16             	ror    $0x16,%edi
 87a919c:	31 d0                	xor    %edx,%eax
 87a919e:	01 c1                	add    %eax,%ecx
 87a91a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a91a3:	c1 c9 14             	ror    $0x14,%ecx
 87a91a6:	01 f1                	add    %esi,%ecx
 87a91a8:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 87a91ab:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 87a91ae:	f7 d0                	not    %eax
 87a91b0:	0b 45 f0             	or     -0x10(%ebp),%eax
 87a91b3:	8d b4 0e a1 eb d9 6e 	lea    0x6ed9eba1(%esi,%ecx,1),%esi
 87a91ba:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 87a91bd:	31 f8                	xor    %edi,%eax
 87a91bf:	01 c6                	add    %eax,%esi
 87a91c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a91c4:	c1 ce 15             	ror    $0x15,%esi
 87a91c7:	01 d6                	add    %edx,%esi
 87a91c9:	8d 94 0a a1 eb d9 6e 	lea    0x6ed9eba1(%edx,%ecx,1),%edx
 87a91d0:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a91d3:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87a91d6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a91d9:	c1 c8 16             	ror    $0x16,%eax
 87a91dc:	c1 c9 16             	ror    $0x16,%ecx
 87a91df:	f7 d2                	not    %edx
 87a91e1:	09 f2                	or     %esi,%edx
 87a91e3:	31 c2                	xor    %eax,%edx
 87a91e5:	03 55 f4             	add    -0xc(%ebp),%edx
 87a91e8:	c1 ca 13             	ror    $0x13,%edx
 87a91eb:	01 fa                	add    %edi,%edx
 87a91ed:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87a91f0:	8b 55 b0             	mov    -0x50(%ebp),%edx
 87a91f3:	8d bc 17 a1 eb d9 6e 	lea    0x6ed9eba1(%edi,%edx,1),%edi
 87a91fa:	89 f2                	mov    %esi,%edx
 87a91fc:	f7 d2                	not    %edx
 87a91fe:	0b 55 f4             	or     -0xc(%ebp),%edx
 87a9201:	31 ca                	xor    %ecx,%edx
 87a9203:	01 d7                	add    %edx,%edi
 87a9205:	8b 55 88             	mov    -0x78(%ebp),%edx
 87a9208:	c1 cf 1a             	ror    $0x1a,%edi
 87a920b:	01 c7                	add    %eax,%edi
 87a920d:	c1 ce 16             	ror    $0x16,%esi
 87a9210:	8d 84 10 a1 eb d9 6e 	lea    0x6ed9eba1(%eax,%edx,1),%eax
 87a9217:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87a921a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a921d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a9220:	c1 ca 16             	ror    $0x16,%edx
 87a9223:	f7 d0                	not    %eax
 87a9225:	09 f8                	or     %edi,%eax
 87a9227:	31 f0                	xor    %esi,%eax
 87a9229:	03 45 f0             	add    -0x10(%ebp),%eax
 87a922c:	c1 c8 19             	ror    $0x19,%eax
 87a922f:	01 c8                	add    %ecx,%eax
 87a9231:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a9234:	8b 45 9c             	mov    -0x64(%ebp),%eax
 87a9237:	8d 8c 01 a1 eb d9 6e 	lea    0x6ed9eba1(%ecx,%eax,1),%ecx
 87a923e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a9241:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87a9244:	89 f9                	mov    %edi,%ecx
 87a9246:	f7 d1                	not    %ecx
 87a9248:	0b 4d f0             	or     -0x10(%ebp),%ecx
 87a924b:	c1 cf 16             	ror    $0x16,%edi
 87a924e:	c1 c8 16             	ror    $0x16,%eax
 87a9251:	31 d1                	xor    %edx,%ecx
 87a9253:	03 4d f4             	add    -0xc(%ebp),%ecx
 87a9256:	c1 c9 12             	ror    $0x12,%ecx
 87a9259:	01 f1                	add    %esi,%ecx
 87a925b:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87a925e:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 87a9261:	8d b4 0e a1 eb d9 6e 	lea    0x6ed9eba1(%esi,%ecx,1),%esi
 87a9268:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a926b:	f7 d1                	not    %ecx
 87a926d:	0b 4d f4             	or     -0xc(%ebp),%ecx
 87a9270:	31 f9                	xor    %edi,%ecx
 87a9272:	01 ce                	add    %ecx,%esi
 87a9274:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 87a9277:	c1 ce 17             	ror    $0x17,%esi
 87a927a:	01 d6                	add    %edx,%esi
 87a927c:	8d 94 0a a1 eb d9 6e 	lea    0x6ed9eba1(%edx,%ecx,1),%edx
 87a9283:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a9286:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87a9289:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 87a928c:	f7 d2                	not    %edx
 87a928e:	09 f2                	or     %esi,%edx
 87a9290:	31 c2                	xor    %eax,%edx
 87a9292:	03 55 f0             	add    -0x10(%ebp),%edx
 87a9295:	c1 c9 16             	ror    $0x16,%ecx
 87a9298:	c1 ca 13             	ror    $0x13,%edx
 87a929b:	01 fa                	add    %edi,%edx
 87a929d:	89 55 ec             	mov    %edx,-0x14(%ebp)
 87a92a0:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 87a92a6:	8d bc 17 a1 eb d9 6e 	lea    0x6ed9eba1(%edi,%edx,1),%edi
 87a92ad:	8b 55 80             	mov    -0x80(%ebp),%edx
 87a92b0:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a92b3:	89 f7                	mov    %esi,%edi
 87a92b5:	f7 d7                	not    %edi
 87a92b7:	0b 7d ec             	or     -0x14(%ebp),%edi
 87a92ba:	31 cf                	xor    %ecx,%edi
 87a92bc:	03 7d f4             	add    -0xc(%ebp),%edi
 87a92bf:	c1 cf 11             	ror    $0x11,%edi
 87a92c2:	01 c7                	add    %eax,%edi
 87a92c4:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a92c7:	8d bc 10 a1 eb d9 6e 	lea    0x6ed9eba1(%eax,%edx,1),%edi
 87a92ce:	8b 45 ec             	mov    -0x14(%ebp),%eax
 87a92d1:	c1 ce 16             	ror    $0x16,%esi
 87a92d4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 87a92d7:	f7 d0                	not    %eax
 87a92d9:	0b 45 f4             	or     -0xc(%ebp),%eax
 87a92dc:	c1 ca 16             	ror    $0x16,%edx
 87a92df:	31 f0                	xor    %esi,%eax
 87a92e1:	8d 04 07             	lea    (%edi,%eax,1),%eax
 87a92e4:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 87a92e7:	c1 c8 12             	ror    $0x12,%eax
 87a92ea:	01 c8                	add    %ecx,%eax
 87a92ec:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a92ef:	8d 84 39 a1 eb d9 6e 	lea    0x6ed9eba1(%ecx,%edi,1),%eax
 87a92f6:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 87a92f9:	8b 7d f4             	mov    -0xc(%ebp),%edi
 87a92fc:	f7 d1                	not    %ecx
 87a92fe:	0b 4d f0             	or     -0x10(%ebp),%ecx
 87a9301:	c1 cf 16             	ror    $0x16,%edi
 87a9304:	31 d1                	xor    %edx,%ecx
 87a9306:	8d 0c 08             	lea    (%eax,%ecx,1),%ecx
 87a9309:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 87a930f:	c1 c9 18             	ror    $0x18,%ecx
 87a9312:	01 f1                	add    %esi,%ecx
 87a9314:	8d b4 06 a1 eb d9 6e 	lea    0x6ed9eba1(%esi,%eax,1),%esi
 87a931b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a931e:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a9321:	8b 75 f0             	mov    -0x10(%ebp),%esi
 87a9324:	c1 c8 16             	ror    $0x16,%eax
 87a9327:	f7 d6                	not    %esi
 87a9329:	09 ce                	or     %ecx,%esi
 87a932b:	31 fe                	xor    %edi,%esi
 87a932d:	03 75 f4             	add    -0xc(%ebp),%esi
 87a9330:	c1 ce 13             	ror    $0x13,%esi
 87a9333:	01 d6                	add    %edx,%esi
 87a9335:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a9338:	8b 75 90             	mov    -0x70(%ebp),%esi
 87a933b:	8d 94 32 a1 eb d9 6e 	lea    0x6ed9eba1(%edx,%esi,1),%edx
 87a9342:	8b 75 f4             	mov    -0xc(%ebp),%esi
 87a9345:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a9348:	89 ca                	mov    %ecx,%edx
 87a934a:	f7 d2                	not    %edx
 87a934c:	0b 55 f4             	or     -0xc(%ebp),%edx
 87a934f:	f7 d6                	not    %esi
 87a9351:	c1 c9 16             	ror    $0x16,%ecx
 87a9354:	31 c2                	xor    %eax,%edx
 87a9356:	03 55 f0             	add    -0x10(%ebp),%edx
 87a9359:	c1 ca 1a             	ror    $0x1a,%edx
 87a935c:	01 fa                	add    %edi,%edx
 87a935e:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a9361:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87a9364:	0b 75 f0             	or     -0x10(%ebp),%esi
 87a9367:	8d bc 17 a1 eb d9 6e 	lea    0x6ed9eba1(%edi,%edx,1),%edi
 87a936e:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87a9371:	31 ce                	xor    %ecx,%esi
 87a9373:	01 f7                	add    %esi,%edi
 87a9375:	8b 75 f4             	mov    -0xc(%ebp),%esi
 87a9378:	c1 cf 1b             	ror    $0x1b,%edi
 87a937b:	01 c7                	add    %eax,%edi
 87a937d:	8d 84 10 a1 eb d9 6e 	lea    0x6ed9eba1(%eax,%edx,1),%eax
 87a9384:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a9387:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a938a:	c1 ce 16             	ror    $0x16,%esi
 87a938d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a9390:	f7 d0                	not    %eax
 87a9392:	09 f8                	or     %edi,%eax
 87a9394:	31 f0                	xor    %esi,%eax
 87a9396:	03 45 f4             	add    -0xc(%ebp),%eax
 87a9399:	c1 c8 14             	ror    $0x14,%eax
 87a939c:	01 c8                	add    %ecx,%eax
 87a939e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a93a1:	8b 45 8c             	mov    -0x74(%ebp),%eax
 87a93a4:	c1 ca 16             	ror    $0x16,%edx
 87a93a7:	8d 8c 01 a1 eb d9 6e 	lea    0x6ed9eba1(%ecx,%eax,1),%ecx
 87a93ae:	89 f8                	mov    %edi,%eax
 87a93b0:	f7 d0                	not    %eax
 87a93b2:	0b 45 f4             	or     -0xc(%ebp),%eax
 87a93b5:	c1 cf 16             	ror    $0x16,%edi
 87a93b8:	31 d0                	xor    %edx,%eax
 87a93ba:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 87a93bd:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 87a93c0:	c1 c8 19             	ror    $0x19,%eax
 87a93c3:	01 f0                	add    %esi,%eax
 87a93c5:	8d b4 0e a1 eb d9 6e 	lea    0x6ed9eba1(%esi,%ecx,1),%esi
 87a93cc:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 87a93cf:	f7 d1                	not    %ecx
 87a93d1:	09 c1                	or     %eax,%ecx
 87a93d3:	31 f9                	xor    %edi,%ecx
 87a93d5:	8d 0c 0e             	lea    (%esi,%ecx,1),%ecx
 87a93d8:	8b 75 f4             	mov    -0xc(%ebp),%esi
 87a93db:	c1 c9 1b             	ror    $0x1b,%ecx
 87a93de:	01 d1                	add    %edx,%ecx
 87a93e0:	c1 ce 16             	ror    $0x16,%esi
 87a93e3:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a93e6:	8b b5 7c ff ff ff    	mov    -0x84(%ebp),%esi
 87a93ec:	8d 94 32 dc bc 1b 8f 	lea    -0x70e44324(%edx,%esi,1),%edx
 87a93f3:	89 c6                	mov    %eax,%esi
 87a93f5:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a93f8:	89 ca                	mov    %ecx,%edx
 87a93fa:	31 c2                	xor    %eax,%edx
 87a93fc:	23 55 f4             	and    -0xc(%ebp),%edx
 87a93ff:	c1 ce 16             	ror    $0x16,%esi
 87a9402:	31 c2                	xor    %eax,%edx
 87a9404:	8b 45 9c             	mov    -0x64(%ebp),%eax
 87a9407:	03 55 f0             	add    -0x10(%ebp),%edx
 87a940a:	c1 ca 15             	ror    $0x15,%edx
 87a940d:	01 fa                	add    %edi,%edx
 87a940f:	8d bc 07 dc bc 1b 8f 	lea    -0x70e44324(%edi,%eax,1),%edi
 87a9416:	89 d0                	mov    %edx,%eax
 87a9418:	31 c8                	xor    %ecx,%eax
 87a941a:	21 f0                	and    %esi,%eax
 87a941c:	31 c8                	xor    %ecx,%eax
 87a941e:	c1 c9 16             	ror    $0x16,%ecx
 87a9421:	01 c7                	add    %eax,%edi
 87a9423:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a9426:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 87a9429:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 87a942c:	c1 cf 14             	ror    $0x14,%edi
 87a942f:	03 7d f4             	add    -0xc(%ebp),%edi
 87a9432:	8d 8c 08 dc bc 1b 8f 	lea    -0x70e44324(%eax,%ecx,1),%ecx
 87a9439:	89 f8                	mov    %edi,%eax
 87a943b:	31 d0                	xor    %edx,%eax
 87a943d:	23 45 f0             	and    -0x10(%ebp),%eax
 87a9440:	31 d0                	xor    %edx,%eax
 87a9442:	01 c8                	add    %ecx,%eax
 87a9444:	8b 8d 78 ff ff ff    	mov    -0x88(%ebp),%ecx
 87a944a:	c1 c8 12             	ror    $0x12,%eax
 87a944d:	01 f0                	add    %esi,%eax
 87a944f:	c1 ca 16             	ror    $0x16,%edx
 87a9452:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87a9455:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87a9458:	8d b4 16 dc bc 1b 8f 	lea    -0x70e44324(%esi,%edx,1),%esi
 87a945f:	89 c2                	mov    %eax,%edx
 87a9461:	31 fa                	xor    %edi,%edx
 87a9463:	23 55 f4             	and    -0xc(%ebp),%edx
 87a9466:	31 fa                	xor    %edi,%edx
 87a9468:	01 d6                	add    %edx,%esi
 87a946a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a946d:	c1 ce 11             	ror    $0x11,%esi
 87a9470:	03 75 f0             	add    -0x10(%ebp),%esi
 87a9473:	c1 cf 16             	ror    $0x16,%edi
 87a9476:	8d 8c 0a dc bc 1b 8f 	lea    -0x70e44324(%edx,%ecx,1),%ecx
 87a947d:	89 f2                	mov    %esi,%edx
 87a947f:	31 c2                	xor    %eax,%edx
 87a9481:	21 fa                	and    %edi,%edx
 87a9483:	31 c2                	xor    %eax,%edx
 87a9485:	c1 c8 16             	ror    $0x16,%eax
 87a9488:	01 d1                	add    %edx,%ecx
 87a948a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87a948d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a9490:	8b 45 98             	mov    -0x68(%ebp),%eax
 87a9493:	c1 c9 12             	ror    $0x12,%ecx
 87a9496:	03 4d f4             	add    -0xc(%ebp),%ecx
 87a9499:	8d 84 02 dc bc 1b 8f 	lea    -0x70e44324(%edx,%eax,1),%eax
 87a94a0:	89 ca                	mov    %ecx,%edx
 87a94a2:	31 f2                	xor    %esi,%edx
 87a94a4:	23 55 f0             	and    -0x10(%ebp),%edx
 87a94a7:	31 f2                	xor    %esi,%edx
 87a94a9:	c1 ce 16             	ror    $0x16,%esi
 87a94ac:	01 c2                	add    %eax,%edx
 87a94ae:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a94b1:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a94b4:	8b 75 a8             	mov    -0x58(%ebp),%esi
 87a94b7:	c1 ca 11             	ror    $0x11,%edx
 87a94ba:	01 fa                	add    %edi,%edx
 87a94bc:	8d bc 37 dc bc 1b 8f 	lea    -0x70e44324(%edi,%esi,1),%edi
 87a94c3:	89 d6                	mov    %edx,%esi
 87a94c5:	31 ce                	xor    %ecx,%esi
 87a94c7:	23 75 f4             	and    -0xc(%ebp),%esi
 87a94ca:	31 ce                	xor    %ecx,%esi
 87a94cc:	8d 34 37             	lea    (%edi,%esi,1),%esi
 87a94cf:	8b 7d 88             	mov    -0x78(%ebp),%edi
 87a94d2:	c1 ce 17             	ror    $0x17,%esi
 87a94d5:	03 75 f0             	add    -0x10(%ebp),%esi
 87a94d8:	c1 c9 16             	ror    $0x16,%ecx
 87a94db:	8d bc 38 dc bc 1b 8f 	lea    -0x70e44324(%eax,%edi,1),%edi
 87a94e2:	89 f0                	mov    %esi,%eax
 87a94e4:	31 d0                	xor    %edx,%eax
 87a94e6:	21 c8                	and    %ecx,%eax
 87a94e8:	31 d0                	xor    %edx,%eax
 87a94ea:	01 c7                	add    %eax,%edi
 87a94ec:	c1 cf 18             	ror    $0x18,%edi
 87a94ef:	03 7d f4             	add    -0xc(%ebp),%edi
 87a94f2:	c1 ca 16             	ror    $0x16,%edx
 87a94f5:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a94f8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87a94fb:	8b 45 ac             	mov    -0x54(%ebp),%eax
 87a94fe:	8d 84 02 dc bc 1b 8f 	lea    -0x70e44324(%edx,%eax,1),%eax
 87a9505:	8b 55 84             	mov    -0x7c(%ebp),%edx
 87a9508:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a950b:	89 f8                	mov    %edi,%eax
 87a950d:	31 f0                	xor    %esi,%eax
 87a950f:	23 45 f0             	and    -0x10(%ebp),%eax
 87a9512:	31 f0                	xor    %esi,%eax
 87a9514:	03 45 f4             	add    -0xc(%ebp),%eax
 87a9517:	c1 ce 16             	ror    $0x16,%esi
 87a951a:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a951d:	8d b4 11 dc bc 1b 8f 	lea    -0x70e44324(%ecx,%edx,1),%esi
 87a9524:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a9527:	c1 c8 17             	ror    $0x17,%eax
 87a952a:	01 c8                	add    %ecx,%eax
 87a952c:	89 c1                	mov    %eax,%ecx
 87a952e:	31 f9                	xor    %edi,%ecx
 87a9530:	23 4d f4             	and    -0xc(%ebp),%ecx
 87a9533:	31 f9                	xor    %edi,%ecx
 87a9535:	8d 0c 0e             	lea    (%esi,%ecx,1),%ecx
 87a9538:	8b 75 94             	mov    -0x6c(%ebp),%esi
 87a953b:	c1 c9 12             	ror    $0x12,%ecx
 87a953e:	03 4d f0             	add    -0x10(%ebp),%ecx
 87a9541:	c1 cf 16             	ror    $0x16,%edi
 87a9544:	8d b4 32 dc bc 1b 8f 	lea    -0x70e44324(%edx,%esi,1),%esi
 87a954b:	89 ca                	mov    %ecx,%edx
 87a954d:	31 c2                	xor    %eax,%edx
 87a954f:	21 fa                	and    %edi,%edx
 87a9551:	31 c2                	xor    %eax,%edx
 87a9553:	c1 c8 16             	ror    $0x16,%eax
 87a9556:	01 d6                	add    %edx,%esi
 87a9558:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87a955b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a955e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87a9561:	c1 ce 1b             	ror    $0x1b,%esi
 87a9564:	03 75 f4             	add    -0xc(%ebp),%esi
 87a9567:	8d 84 02 dc bc 1b 8f 	lea    -0x70e44324(%edx,%eax,1),%eax
 87a956e:	89 f2                	mov    %esi,%edx
 87a9570:	31 ca                	xor    %ecx,%edx
 87a9572:	23 55 f0             	and    -0x10(%ebp),%edx
 87a9575:	31 ca                	xor    %ecx,%edx
 87a9577:	c1 c9 16             	ror    $0x16,%ecx
 87a957a:	01 c2                	add    %eax,%edx
 87a957c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a957f:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87a9582:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 87a9585:	c1 ca 1a             	ror    $0x1a,%edx
 87a9588:	01 fa                	add    %edi,%edx
 87a958a:	8d bc 0f dc bc 1b 8f 	lea    -0x70e44324(%edi,%ecx,1),%edi
 87a9591:	89 d1                	mov    %edx,%ecx
 87a9593:	31 f1                	xor    %esi,%ecx
 87a9595:	23 4d f4             	and    -0xc(%ebp),%ecx
 87a9598:	31 f1                	xor    %esi,%ecx
 87a959a:	8d 0c 0f             	lea    (%edi,%ecx,1),%ecx
 87a959d:	8b 7d 8c             	mov    -0x74(%ebp),%edi
 87a95a0:	c1 c9 18             	ror    $0x18,%ecx
 87a95a3:	03 4d f0             	add    -0x10(%ebp),%ecx
 87a95a6:	c1 ce 16             	ror    $0x16,%esi
 87a95a9:	8d bc 38 dc bc 1b 8f 	lea    -0x70e44324(%eax,%edi,1),%edi
 87a95b0:	89 c8                	mov    %ecx,%eax
 87a95b2:	31 d0                	xor    %edx,%eax
 87a95b4:	21 f0                	and    %esi,%eax
 87a95b6:	31 d0                	xor    %edx,%eax
 87a95b8:	c1 ca 16             	ror    $0x16,%edx
 87a95bb:	01 c7                	add    %eax,%edi
 87a95bd:	8b 45 90             	mov    -0x70(%ebp),%eax
 87a95c0:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a95c3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87a95c6:	c1 cf 1a             	ror    $0x1a,%edi
 87a95c9:	03 7d f4             	add    -0xc(%ebp),%edi
 87a95cc:	8d 84 02 dc bc 1b 8f 	lea    -0x70e44324(%edx,%eax,1),%eax
 87a95d3:	8b 55 80             	mov    -0x80(%ebp),%edx
 87a95d6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a95d9:	89 f8                	mov    %edi,%eax
 87a95db:	31 c8                	xor    %ecx,%eax
 87a95dd:	23 45 f0             	and    -0x10(%ebp),%eax
 87a95e0:	31 c8                	xor    %ecx,%eax
 87a95e2:	03 45 f4             	add    -0xc(%ebp),%eax
 87a95e5:	c1 c9 16             	ror    $0x16,%ecx
 87a95e8:	c1 c8 1b             	ror    $0x1b,%eax
 87a95eb:	01 f0                	add    %esi,%eax
 87a95ed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a95f0:	31 f8                	xor    %edi,%eax
 87a95f2:	21 c8                	and    %ecx,%eax
 87a95f4:	31 f8                	xor    %edi,%eax
 87a95f6:	8d b4 16 dc bc 1b 8f 	lea    -0x70e44324(%esi,%edx,1),%esi
 87a95fd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a9600:	01 c6                	add    %eax,%esi
 87a9602:	8b 45 88             	mov    -0x78(%ebp),%eax
 87a9605:	c1 cf 16             	ror    $0x16,%edi
 87a9608:	c1 ce 14             	ror    $0x14,%esi
 87a960b:	03 75 f0             	add    -0x10(%ebp),%esi
 87a960e:	8d 84 02 4e fd 53 a9 	lea    -0x56ac02b2(%edx,%eax,1),%eax
 87a9615:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a9618:	89 f8                	mov    %edi,%eax
 87a961a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a961d:	f7 d0                	not    %eax
 87a961f:	0b 45 f4             	or     -0xc(%ebp),%eax
 87a9622:	31 f0                	xor    %esi,%eax
 87a9624:	01 c2                	add    %eax,%edx
 87a9626:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a9629:	c1 ca 17             	ror    $0x17,%edx
 87a962c:	01 ca                	add    %ecx,%edx
 87a962e:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a9631:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 87a9637:	c1 c8 16             	ror    $0x16,%eax
 87a963a:	8d 8c 11 4e fd 53 a9 	lea    -0x56ac02b2(%ecx,%edx,1),%ecx
 87a9641:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a9644:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87a9647:	89 c1                	mov    %eax,%ecx
 87a9649:	f7 d1                	not    %ecx
 87a964b:	09 f1                	or     %esi,%ecx
 87a964d:	33 4d f0             	xor    -0x10(%ebp),%ecx
 87a9650:	03 4d f4             	add    -0xc(%ebp),%ecx
 87a9653:	c1 c9 11             	ror    $0x11,%ecx
 87a9656:	01 f9                	add    %edi,%ecx
 87a9658:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87a965b:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 87a965e:	c1 ce 16             	ror    $0x16,%esi
 87a9661:	c1 ca 16             	ror    $0x16,%edx
 87a9664:	8d bc 0f 4e fd 53 a9 	lea    -0x56ac02b2(%edi,%ecx,1),%edi
 87a966b:	89 f1                	mov    %esi,%ecx
 87a966d:	f7 d1                	not    %ecx
 87a966f:	0b 4d f0             	or     -0x10(%ebp),%ecx
 87a9672:	33 4d f4             	xor    -0xc(%ebp),%ecx
 87a9675:	01 cf                	add    %ecx,%edi
 87a9677:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 87a967a:	c1 cf 1b             	ror    $0x1b,%edi
 87a967d:	01 c7                	add    %eax,%edi
 87a967f:	8d 84 08 4e fd 53 a9 	lea    -0x56ac02b2(%eax,%ecx,1),%eax
 87a9686:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 87a9689:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a968c:	89 d0                	mov    %edx,%eax
 87a968e:	f7 d0                	not    %eax
 87a9690:	0b 45 f4             	or     -0xc(%ebp),%eax
 87a9693:	c1 c9 16             	ror    $0x16,%ecx
 87a9696:	31 f8                	xor    %edi,%eax
 87a9698:	03 45 f0             	add    -0x10(%ebp),%eax
 87a969b:	c1 c8 15             	ror    $0x15,%eax
 87a969e:	01 f0                	add    %esi,%eax
 87a96a0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 87a96a3:	8b 45 94             	mov    -0x6c(%ebp),%eax
 87a96a6:	8d b4 06 4e fd 53 a9 	lea    -0x56ac02b2(%esi,%eax,1),%esi
 87a96ad:	8b 45 a8             	mov    -0x58(%ebp),%eax
 87a96b0:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a96b3:	89 ce                	mov    %ecx,%esi
 87a96b5:	f7 d6                	not    %esi
 87a96b7:	09 fe                	or     %edi,%esi
 87a96b9:	33 75 ec             	xor    -0x14(%ebp),%esi
 87a96bc:	03 75 f4             	add    -0xc(%ebp),%esi
 87a96bf:	c1 cf 16             	ror    $0x16,%edi
 87a96c2:	c1 ce 1a             	ror    $0x1a,%esi
 87a96c5:	01 d6                	add    %edx,%esi
 87a96c7:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a96ca:	8d b4 02 4e fd 53 a9 	lea    -0x56ac02b2(%edx,%eax,1),%esi
 87a96d1:	89 fa                	mov    %edi,%edx
 87a96d3:	f7 d2                	not    %edx
 87a96d5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 87a96d8:	0b 55 ec             	or     -0x14(%ebp),%edx
 87a96db:	33 55 f4             	xor    -0xc(%ebp),%edx
 87a96de:	c1 c8 16             	ror    $0x16,%eax
 87a96e1:	8d 14 16             	lea    (%esi,%edx,1),%edx
 87a96e4:	8b 75 80             	mov    -0x80(%ebp),%esi
 87a96e7:	c1 ca 18             	ror    $0x18,%edx
 87a96ea:	01 ca                	add    %ecx,%edx
 87a96ec:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a96ef:	8d 94 31 4e fd 53 a9 	lea    -0x56ac02b2(%ecx,%esi,1),%edx
 87a96f6:	89 c1                	mov    %eax,%ecx
 87a96f8:	8b 75 f4             	mov    -0xc(%ebp),%esi
 87a96fb:	f7 d1                	not    %ecx
 87a96fd:	0b 4d f4             	or     -0xc(%ebp),%ecx
 87a9700:	33 4d f0             	xor    -0x10(%ebp),%ecx
 87a9703:	c1 ce 16             	ror    $0x16,%esi
 87a9706:	8d 0c 0a             	lea    (%edx,%ecx,1),%ecx
 87a9709:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87a970c:	c1 c9 13             	ror    $0x13,%ecx
 87a970f:	01 f9                	add    %edi,%ecx
 87a9711:	8d bc 17 4e fd 53 a9 	lea    -0x56ac02b2(%edi,%edx,1),%edi
 87a9718:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a971b:	89 f7                	mov    %esi,%edi
 87a971d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a9720:	f7 d7                	not    %edi
 87a9722:	0b 7d f0             	or     -0x10(%ebp),%edi
 87a9725:	31 cf                	xor    %ecx,%edi
 87a9727:	03 7d f4             	add    -0xc(%ebp),%edi
 87a972a:	c1 cf 14             	ror    $0x14,%edi
 87a972d:	01 c7                	add    %eax,%edi
 87a972f:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a9732:	8b 7d b0             	mov    -0x50(%ebp),%edi
 87a9735:	c1 ca 16             	ror    $0x16,%edx
 87a9738:	8d 84 38 4e fd 53 a9 	lea    -0x56ac02b2(%eax,%edi,1),%eax
 87a973f:	8b bd 7c ff ff ff    	mov    -0x84(%ebp),%edi
 87a9745:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a9748:	89 d0                	mov    %edx,%eax
 87a974a:	f7 d0                	not    %eax
 87a974c:	09 c8                	or     %ecx,%eax
 87a974e:	33 45 f4             	xor    -0xc(%ebp),%eax
 87a9751:	03 45 f0             	add    -0x10(%ebp),%eax
 87a9754:	c1 c9 16             	ror    $0x16,%ecx
 87a9757:	c1 c8 1b             	ror    $0x1b,%eax
 87a975a:	01 f0                	add    %esi,%eax
 87a975c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a975f:	8d 84 3e 4e fd 53 a9 	lea    -0x56ac02b2(%esi,%edi,1),%eax
 87a9766:	89 ce                	mov    %ecx,%esi
 87a9768:	f7 d6                	not    %esi
 87a976a:	8b 7d f4             	mov    -0xc(%ebp),%edi
 87a976d:	0b 75 f4             	or     -0xc(%ebp),%esi
 87a9770:	33 75 f0             	xor    -0x10(%ebp),%esi
 87a9773:	c1 cf 16             	ror    $0x16,%edi
 87a9776:	8d 34 30             	lea    (%eax,%esi,1),%esi
 87a9779:	8b 45 84             	mov    -0x7c(%ebp),%eax
 87a977c:	c1 ce 14             	ror    $0x14,%esi
 87a977f:	01 d6                	add    %edx,%esi
 87a9781:	8d 94 02 4e fd 53 a9 	lea    -0x56ac02b2(%edx,%eax,1),%edx
 87a9788:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a978b:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87a978e:	89 fa                	mov    %edi,%edx
 87a9790:	f7 d2                	not    %edx
 87a9792:	0b 55 f0             	or     -0x10(%ebp),%edx
 87a9795:	c1 c8 16             	ror    $0x16,%eax
 87a9798:	31 f2                	xor    %esi,%edx
 87a979a:	03 55 f4             	add    -0xc(%ebp),%edx
 87a979d:	c1 ca 13             	ror    $0x13,%edx
 87a97a0:	01 ca                	add    %ecx,%edx
 87a97a2:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87a97a5:	8b 55 98             	mov    -0x68(%ebp),%edx
 87a97a8:	8d 8c 11 4e fd 53 a9 	lea    -0x56ac02b2(%ecx,%edx,1),%ecx
 87a97af:	89 c2                	mov    %eax,%edx
 87a97b1:	f7 d2                	not    %edx
 87a97b3:	09 f2                	or     %esi,%edx
 87a97b5:	33 55 f4             	xor    -0xc(%ebp),%edx
 87a97b8:	c1 ce 16             	ror    $0x16,%esi
 87a97bb:	01 d1                	add    %edx,%ecx
 87a97bd:	89 f2                	mov    %esi,%edx
 87a97bf:	c1 c9 12             	ror    $0x12,%ecx
 87a97c2:	f7 d2                	not    %edx
 87a97c4:	01 f9                	add    %edi,%ecx
 87a97c6:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 87a97c9:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 87a97cc:	0b 55 f4             	or     -0xc(%ebp),%edx
 87a97cf:	33 55 f0             	xor    -0x10(%ebp),%edx
 87a97d2:	8d bc 0f 4e fd 53 a9 	lea    -0x56ac02b2(%edi,%ecx,1),%edi
 87a97d9:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 87a97dc:	01 d7                	add    %edx,%edi
 87a97de:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87a97e1:	c1 cf 15             	ror    $0x15,%edi
 87a97e4:	01 c7                	add    %eax,%edi
 87a97e6:	8d 84 08 4e fd 53 a9 	lea    -0x56ac02b2(%eax,%ecx,1),%eax
 87a97ed:	c1 ca 16             	ror    $0x16,%edx
 87a97f0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a97f3:	89 d0                	mov    %edx,%eax
 87a97f5:	f7 d0                	not    %eax
 87a97f7:	0b 45 f0             	or     -0x10(%ebp),%eax
 87a97fa:	31 f8                	xor    %edi,%eax
 87a97fc:	03 45 f4             	add    -0xc(%ebp),%eax
 87a97ff:	c1 c8 18             	ror    $0x18,%eax
 87a9802:	01 f0                	add    %esi,%eax
 87a9804:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a9807:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a980a:	c1 c8 16             	ror    $0x16,%eax
 87a980d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 87a9810:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87a9813:	8d 8c 06 4e fd 53 a9 	lea    -0x56ac02b2(%esi,%eax,1),%ecx
 87a981a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87a981d:	f7 d0                	not    %eax
 87a981f:	09 f8                	or     %edi,%eax
 87a9821:	33 45 d4             	xor    -0x2c(%ebp),%eax
 87a9824:	c1 cf 16             	ror    $0x16,%edi
 87a9827:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 87a982a:	c1 c8 1b             	ror    $0x1b,%eax
 87a982d:	01 d0                	add    %edx,%eax
 87a982f:	89 45 cc             	mov    %eax,-0x34(%ebp)
 87a9832:	8b 45 b8             	mov    -0x48(%ebp),%eax
 87a9835:	89 7d d0             	mov    %edi,-0x30(%ebp)
 87a9838:	8b 7d 8c             	mov    -0x74(%ebp),%edi
 87a983b:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 87a983e:	8d b4 38 e6 8b a2 50 	lea    0x50a28be6(%eax,%edi,1),%esi
 87a9845:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a9848:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 87a984b:	8d 94 0a 4e fd 53 a9 	lea    -0x56ac02b2(%edx,%ecx,1),%edx
 87a9852:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 87a9855:	89 55 c8             	mov    %edx,-0x38(%ebp)
 87a9858:	f7 d0                	not    %eax
 87a985a:	0b 45 bc             	or     -0x44(%ebp),%eax
 87a985d:	33 45 dc             	xor    -0x24(%ebp),%eax
 87a9860:	8d 94 0f e6 8b a2 50 	lea    0x50a28be6(%edi,%ecx,1),%edx
 87a9867:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 87a986a:	01 c6                	add    %eax,%esi
 87a986c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87a986f:	c1 ce 18             	ror    $0x18,%esi
 87a9872:	03 75 c4             	add    -0x3c(%ebp),%esi
 87a9875:	f7 d0                	not    %eax
 87a9877:	0b 45 dc             	or     -0x24(%ebp),%eax
 87a987a:	31 f0                	xor    %esi,%eax
 87a987c:	01 c2                	add    %eax,%edx
 87a987e:	8b 45 94             	mov    -0x6c(%ebp),%eax
 87a9881:	c1 ca 17             	ror    $0x17,%edx
 87a9884:	03 55 c0             	add    -0x40(%ebp),%edx
 87a9887:	8d bc 01 e6 8b a2 50 	lea    0x50a28be6(%ecx,%eax,1),%edi
 87a988e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87a9891:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a9894:	f7 d0                	not    %eax
 87a9896:	09 f0                	or     %esi,%eax
 87a9898:	31 d0                	xor    %edx,%eax
 87a989a:	01 c7                	add    %eax,%edi
 87a989c:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 87a98a2:	c1 ce 16             	ror    $0x16,%esi
 87a98a5:	c1 cf 17             	ror    $0x17,%edi
 87a98a8:	03 7d e0             	add    -0x20(%ebp),%edi
 87a98ab:	8d 84 01 e6 8b a2 50 	lea    0x50a28be6(%ecx,%eax,1),%eax
 87a98b2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a98b5:	89 f0                	mov    %esi,%eax
 87a98b7:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 87a98ba:	f7 d0                	not    %eax
 87a98bc:	09 d0                	or     %edx,%eax
 87a98be:	31 f8                	xor    %edi,%eax
 87a98c0:	01 c1                	add    %eax,%ecx
 87a98c2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87a98c5:	c1 c9 15             	ror    $0x15,%ecx
 87a98c8:	03 4d e4             	add    -0x1c(%ebp),%ecx
 87a98cb:	c1 ca 16             	ror    $0x16,%edx
 87a98ce:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 87a98d1:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 87a98d4:	8d 8c 08 e6 8b a2 50 	lea    0x50a28be6(%eax,%ecx,1),%ecx
 87a98db:	89 d0                	mov    %edx,%eax
 87a98dd:	f7 d0                	not    %eax
 87a98df:	09 f8                	or     %edi,%eax
 87a98e1:	33 45 f0             	xor    -0x10(%ebp),%eax
 87a98e4:	c1 cf 16             	ror    $0x16,%edi
 87a98e7:	01 c8                	add    %ecx,%eax
 87a98e9:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a98ec:	c1 c8 13             	ror    $0x13,%eax
 87a98ef:	01 f0                	add    %esi,%eax
 87a98f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a98f4:	8b 45 80             	mov    -0x80(%ebp),%eax
 87a98f7:	c1 c9 16             	ror    $0x16,%ecx
 87a98fa:	8d b4 06 e6 8b a2 50 	lea    0x50a28be6(%esi,%eax,1),%esi
 87a9901:	89 f8                	mov    %edi,%eax
 87a9903:	f7 d0                	not    %eax
 87a9905:	0b 45 f0             	or     -0x10(%ebp),%eax
 87a9908:	33 45 f4             	xor    -0xc(%ebp),%eax
 87a990b:	01 c6                	add    %eax,%esi
 87a990d:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 87a9910:	c1 ce 11             	ror    $0x11,%esi
 87a9913:	01 d6                	add    %edx,%esi
 87a9915:	8d 94 02 e6 8b a2 50 	lea    0x50a28be6(%edx,%eax,1),%edx
 87a991c:	89 c8                	mov    %ecx,%eax
 87a991e:	f7 d0                	not    %eax
 87a9920:	0b 45 f4             	or     -0xc(%ebp),%eax
 87a9923:	31 f0                	xor    %esi,%eax
 87a9925:	01 c2                	add    %eax,%edx
 87a9927:	c1 ca 11             	ror    $0x11,%edx
 87a992a:	01 fa                	add    %edi,%edx
 87a992c:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a992f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a9932:	8b 55 88             	mov    -0x78(%ebp),%edx
 87a9935:	c1 c8 16             	ror    $0x16,%eax
 87a9938:	8d bc 17 e6 8b a2 50 	lea    0x50a28be6(%edi,%edx,1),%edi
 87a993f:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87a9942:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a9945:	89 c7                	mov    %eax,%edi
 87a9947:	f7 d7                	not    %edi
 87a9949:	09 f7                	or     %esi,%edi
 87a994b:	33 7d f0             	xor    -0x10(%ebp),%edi
 87a994e:	03 7d f4             	add    -0xc(%ebp),%edi
 87a9951:	c1 ce 16             	ror    $0x16,%esi
 87a9954:	c1 cf 1b             	ror    $0x1b,%edi
 87a9957:	01 cf                	add    %ecx,%edi
 87a9959:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a995c:	8d bc 11 e6 8b a2 50 	lea    0x50a28be6(%ecx,%edx,1),%edi
 87a9963:	89 f1                	mov    %esi,%ecx
 87a9965:	f7 d1                	not    %ecx
 87a9967:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a996a:	0b 4d f0             	or     -0x10(%ebp),%ecx
 87a996d:	33 4d f4             	xor    -0xc(%ebp),%ecx
 87a9970:	c1 ca 16             	ror    $0x16,%edx
 87a9973:	8d 0c 0f             	lea    (%edi,%ecx,1),%ecx
 87a9976:	8b 7d 90             	mov    -0x70(%ebp),%edi
 87a9979:	c1 c9 19             	ror    $0x19,%ecx
 87a997c:	01 c1                	add    %eax,%ecx
 87a997e:	8d 84 38 e6 8b a2 50 	lea    0x50a28be6(%eax,%edi,1),%eax
 87a9985:	8b 7d f4             	mov    -0xc(%ebp),%edi
 87a9988:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a998b:	89 d0                	mov    %edx,%eax
 87a998d:	f7 d0                	not    %eax
 87a998f:	0b 45 f4             	or     -0xc(%ebp),%eax
 87a9992:	31 c8                	xor    %ecx,%eax
 87a9994:	03 45 f0             	add    -0x10(%ebp),%eax
 87a9997:	c1 c8 19             	ror    $0x19,%eax
 87a999a:	01 f0                	add    %esi,%eax
 87a999c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 87a999f:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87a99a2:	c1 cf 16             	ror    $0x16,%edi
 87a99a5:	8d b4 06 e6 8b a2 50 	lea    0x50a28be6(%esi,%eax,1),%esi
 87a99ac:	8b 45 98             	mov    -0x68(%ebp),%eax
 87a99af:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a99b2:	89 fe                	mov    %edi,%esi
 87a99b4:	f7 d6                	not    %esi
 87a99b6:	09 ce                	or     %ecx,%esi
 87a99b8:	33 75 ec             	xor    -0x14(%ebp),%esi
 87a99bb:	03 75 f4             	add    -0xc(%ebp),%esi
 87a99be:	c1 c9 16             	ror    $0x16,%ecx
 87a99c1:	c1 ce 18             	ror    $0x18,%esi
 87a99c4:	01 d6                	add    %edx,%esi
 87a99c6:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a99c9:	8d b4 02 e6 8b a2 50 	lea    0x50a28be6(%edx,%eax,1),%esi
 87a99d0:	89 ca                	mov    %ecx,%edx
 87a99d2:	f7 d2                	not    %edx
 87a99d4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 87a99d7:	0b 55 ec             	or     -0x14(%ebp),%edx
 87a99da:	33 55 f4             	xor    -0xc(%ebp),%edx
 87a99dd:	c1 c8 16             	ror    $0x16,%eax
 87a99e0:	8d 14 16             	lea    (%esi,%edx,1),%edx
 87a99e3:	89 c6                	mov    %eax,%esi
 87a99e5:	c1 ca 15             	ror    $0x15,%edx
 87a99e8:	f7 d6                	not    %esi
 87a99ea:	01 fa                	add    %edi,%edx
 87a99ec:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a99ef:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 87a99f5:	0b 75 f4             	or     -0xc(%ebp),%esi
 87a99f8:	33 75 f0             	xor    -0x10(%ebp),%esi
 87a99fb:	8d bc 17 e6 8b a2 50 	lea    0x50a28be6(%edi,%edx,1),%edi
 87a9a02:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87a9a05:	01 f7                	add    %esi,%edi
 87a9a07:	8b 75 f4             	mov    -0xc(%ebp),%esi
 87a9a0a:	c1 cf 12             	ror    $0x12,%edi
 87a9a0d:	01 cf                	add    %ecx,%edi
 87a9a0f:	8d 8c 11 e6 8b a2 50 	lea    0x50a28be6(%ecx,%edx,1),%ecx
 87a9a16:	c1 ce 16             	ror    $0x16,%esi
 87a9a19:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87a9a1c:	89 f1                	mov    %esi,%ecx
 87a9a1e:	f7 d1                	not    %ecx
 87a9a20:	0b 4d f0             	or     -0x10(%ebp),%ecx
 87a9a23:	31 f9                	xor    %edi,%ecx
 87a9a25:	03 4d f4             	add    -0xc(%ebp),%ecx
 87a9a28:	c1 c9 12             	ror    $0x12,%ecx
 87a9a2b:	01 c1                	add    %eax,%ecx
 87a9a2d:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87a9a30:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a9a33:	c1 c9 16             	ror    $0x16,%ecx
 87a9a36:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 87a9a39:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 87a9a3c:	8d 94 08 e6 8b a2 50 	lea    0x50a28be6(%eax,%ecx,1),%edx
 87a9a43:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a9a46:	f7 d0                	not    %eax
 87a9a48:	09 f8                	or     %edi,%eax
 87a9a4a:	33 45 f4             	xor    -0xc(%ebp),%eax
 87a9a4d:	c1 cf 16             	ror    $0x16,%edi
 87a9a50:	8d 0c 02             	lea    (%edx,%eax,1),%ecx
 87a9a53:	8b 45 a8             	mov    -0x58(%ebp),%eax
 87a9a56:	c1 c9 14             	ror    $0x14,%ecx
 87a9a59:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87a9a5c:	01 f1                	add    %esi,%ecx
 87a9a5e:	8d b4 06 e6 8b a2 50 	lea    0x50a28be6(%esi,%eax,1),%esi
 87a9a65:	89 f8                	mov    %edi,%eax
 87a9a67:	f7 d0                	not    %eax
 87a9a69:	0b 45 f4             	or     -0xc(%ebp),%eax
 87a9a6c:	31 c8                	xor    %ecx,%eax
 87a9a6e:	8d 04 06             	lea    (%esi,%eax,1),%eax
 87a9a71:	8b 75 90             	mov    -0x70(%ebp),%esi
 87a9a74:	c1 c8 1a             	ror    $0x1a,%eax
 87a9a77:	03 45 f0             	add    -0x10(%ebp),%eax
 87a9a7a:	c1 ca 16             	ror    $0x16,%edx
 87a9a7d:	89 55 ec             	mov    %edx,-0x14(%ebp)
 87a9a80:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a9a83:	8d b4 32 24 d1 4d 5c 	lea    0x5c4dd124(%edx,%esi,1),%esi
 87a9a8a:	89 c2                	mov    %eax,%edx
 87a9a8c:	31 ca                	xor    %ecx,%edx
 87a9a8e:	23 55 ec             	and    -0x14(%ebp),%edx
 87a9a91:	31 ca                	xor    %ecx,%edx
 87a9a93:	c1 c9 16             	ror    $0x16,%ecx
 87a9a96:	01 f2                	add    %esi,%edx
 87a9a98:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87a9a9b:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 87a9a9e:	c1 ca 17             	ror    $0x17,%edx
 87a9aa1:	01 fa                	add    %edi,%edx
 87a9aa3:	8d bc 0f 24 d1 4d 5c 	lea    0x5c4dd124(%edi,%ecx,1),%edi
 87a9aaa:	89 d1                	mov    %edx,%ecx
 87a9aac:	31 c1                	xor    %eax,%ecx
 87a9aae:	23 4d f4             	and    -0xc(%ebp),%ecx
 87a9ab1:	31 c1                	xor    %eax,%ecx
 87a9ab3:	c1 c8 16             	ror    $0x16,%eax
 87a9ab6:	01 cf                	add    %ecx,%edi
 87a9ab8:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 87a9abb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a9abe:	8b 45 84             	mov    -0x7c(%ebp),%eax
 87a9ac1:	c1 cf 13             	ror    $0x13,%edi
 87a9ac4:	03 7d ec             	add    -0x14(%ebp),%edi
 87a9ac7:	8d b4 01 24 d1 4d 5c 	lea    0x5c4dd124(%ecx,%eax,1),%esi
 87a9ace:	89 f9                	mov    %edi,%ecx
 87a9ad0:	8b 45 94             	mov    -0x6c(%ebp),%eax
 87a9ad3:	31 d1                	xor    %edx,%ecx
 87a9ad5:	23 4d f0             	and    -0x10(%ebp),%ecx
 87a9ad8:	31 d1                	xor    %edx,%ecx
 87a9ada:	01 ce                	add    %ecx,%esi
 87a9adc:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 87a9adf:	c1 ce 11             	ror    $0x11,%esi
 87a9ae2:	03 75 f4             	add    -0xc(%ebp),%esi
 87a9ae5:	c1 ca 16             	ror    $0x16,%edx
 87a9ae8:	8d 84 01 24 d1 4d 5c 	lea    0x5c4dd124(%ecx,%eax,1),%eax
 87a9aef:	89 f1                	mov    %esi,%ecx
 87a9af1:	31 f9                	xor    %edi,%ecx
 87a9af3:	21 d1                	and    %edx,%ecx
 87a9af5:	31 f9                	xor    %edi,%ecx
 87a9af7:	c1 cf 16             	ror    $0x16,%edi
 87a9afa:	01 c1                	add    %eax,%ecx
 87a9afc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a9aff:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a9b02:	8b bd 78 ff ff ff    	mov    -0x88(%ebp),%edi
 87a9b08:	c1 c9 19             	ror    $0x19,%ecx
 87a9b0b:	03 4d f0             	add    -0x10(%ebp),%ecx
 87a9b0e:	8d bc 38 24 d1 4d 5c 	lea    0x5c4dd124(%eax,%edi,1),%edi
 87a9b15:	89 c8                	mov    %ecx,%eax
 87a9b17:	31 f0                	xor    %esi,%eax
 87a9b19:	23 45 f4             	and    -0xc(%ebp),%eax
 87a9b1c:	31 f0                	xor    %esi,%eax
 87a9b1e:	01 c7                	add    %eax,%edi
 87a9b20:	8b 45 ac             	mov    -0x54(%ebp),%eax
 87a9b23:	c1 cf 14             	ror    $0x14,%edi
 87a9b26:	01 d7                	add    %edx,%edi
 87a9b28:	c1 ce 16             	ror    $0x16,%esi
 87a9b2b:	8d 94 02 24 d1 4d 5c 	lea    0x5c4dd124(%edx,%eax,1),%edx
 87a9b32:	89 f8                	mov    %edi,%eax
 87a9b34:	31 c8                	xor    %ecx,%eax
 87a9b36:	21 f0                	and    %esi,%eax
 87a9b38:	31 c8                	xor    %ecx,%eax
 87a9b3a:	c1 c9 16             	ror    $0x16,%ecx
 87a9b3d:	01 c2                	add    %eax,%edx
 87a9b3f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a9b42:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 87a9b45:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 87a9b48:	c1 ca 18             	ror    $0x18,%edx
 87a9b4b:	03 55 f4             	add    -0xc(%ebp),%edx
 87a9b4e:	8d 8c 08 24 d1 4d 5c 	lea    0x5c4dd124(%eax,%ecx,1),%ecx
 87a9b55:	89 d0                	mov    %edx,%eax
 87a9b57:	31 f8                	xor    %edi,%eax
 87a9b59:	23 45 f0             	and    -0x10(%ebp),%eax
 87a9b5c:	31 f8                	xor    %edi,%eax
 87a9b5e:	c1 cf 16             	ror    $0x16,%edi
 87a9b61:	01 c8                	add    %ecx,%eax
 87a9b63:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a9b66:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 87a9b69:	c1 c8 17             	ror    $0x17,%eax
 87a9b6c:	01 f0                	add    %esi,%eax
 87a9b6e:	8d bc 0e 24 d1 4d 5c 	lea    0x5c4dd124(%esi,%ecx,1),%edi
 87a9b75:	89 c6                	mov    %eax,%esi
 87a9b77:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a9b7a:	31 d6                	xor    %edx,%esi
 87a9b7c:	23 75 f4             	and    -0xc(%ebp),%esi
 87a9b7f:	31 d6                	xor    %edx,%esi
 87a9b81:	8d 34 37             	lea    (%edi,%esi,1),%esi
 87a9b84:	8b 7d b0             	mov    -0x50(%ebp),%edi
 87a9b87:	c1 ce 15             	ror    $0x15,%esi
 87a9b8a:	03 75 f0             	add    -0x10(%ebp),%esi
 87a9b8d:	c1 ca 16             	ror    $0x16,%edx
 87a9b90:	8d bc 39 24 d1 4d 5c 	lea    0x5c4dd124(%ecx,%edi,1),%edi
 87a9b97:	89 f1                	mov    %esi,%ecx
 87a9b99:	31 c1                	xor    %eax,%ecx
 87a9b9b:	21 d1                	and    %edx,%ecx
 87a9b9d:	31 c1                	xor    %eax,%ecx
 87a9b9f:	c1 c8 16             	ror    $0x16,%eax
 87a9ba2:	01 cf                	add    %ecx,%edi
 87a9ba4:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 87a9ba7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a9baa:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87a9bad:	c1 cf 19             	ror    $0x19,%edi
 87a9bb0:	03 7d f4             	add    -0xc(%ebp),%edi
 87a9bb3:	8d 84 01 24 d1 4d 5c 	lea    0x5c4dd124(%ecx,%eax,1),%eax
 87a9bba:	89 f9                	mov    %edi,%ecx
 87a9bbc:	31 f1                	xor    %esi,%ecx
 87a9bbe:	23 4d f0             	and    -0x10(%ebp),%ecx
 87a9bc1:	31 f1                	xor    %esi,%ecx
 87a9bc3:	01 c1                	add    %eax,%ecx
 87a9bc5:	8b 45 98             	mov    -0x68(%ebp),%eax
 87a9bc8:	c1 c9 19             	ror    $0x19,%ecx
 87a9bcb:	01 d1                	add    %edx,%ecx
 87a9bcd:	c1 ce 16             	ror    $0x16,%esi
 87a9bd0:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a9bd3:	8d b4 02 24 d1 4d 5c 	lea    0x5c4dd124(%edx,%eax,1),%esi
 87a9bda:	89 ca                	mov    %ecx,%edx
 87a9bdc:	31 fa                	xor    %edi,%edx
 87a9bde:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a9be1:	23 55 f4             	and    -0xc(%ebp),%edx
 87a9be4:	31 fa                	xor    %edi,%edx
 87a9be6:	8d 14 16             	lea    (%esi,%edx,1),%edx
 87a9be9:	8b 75 a8             	mov    -0x58(%ebp),%esi
 87a9bec:	c1 ca 14             	ror    $0x14,%edx
 87a9bef:	03 55 f0             	add    -0x10(%ebp),%edx
 87a9bf2:	c1 cf 16             	ror    $0x16,%edi
 87a9bf5:	8d b4 30 24 d1 4d 5c 	lea    0x5c4dd124(%eax,%esi,1),%esi
 87a9bfc:	89 d0                	mov    %edx,%eax
 87a9bfe:	31 c8                	xor    %ecx,%eax
 87a9c00:	21 f8                	and    %edi,%eax
 87a9c02:	31 c8                	xor    %ecx,%eax
 87a9c04:	c1 c9 16             	ror    $0x16,%ecx
 87a9c07:	01 c6                	add    %eax,%esi
 87a9c09:	8b 45 88             	mov    -0x78(%ebp),%eax
 87a9c0c:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 87a9c0f:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 87a9c12:	c1 ce 19             	ror    $0x19,%esi
 87a9c15:	03 75 f4             	add    -0xc(%ebp),%esi
 87a9c18:	8d 84 01 24 d1 4d 5c 	lea    0x5c4dd124(%ecx,%eax,1),%eax
 87a9c1f:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
 87a9c25:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a9c28:	89 f0                	mov    %esi,%eax
 87a9c2a:	31 d0                	xor    %edx,%eax
 87a9c2c:	23 45 f0             	and    -0x10(%ebp),%eax
 87a9c2f:	31 d0                	xor    %edx,%eax
 87a9c31:	c1 ca 16             	ror    $0x16,%edx
 87a9c34:	03 45 f4             	add    -0xc(%ebp),%eax
 87a9c37:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87a9c3a:	8b 55 9c             	mov    -0x64(%ebp),%edx
 87a9c3d:	c1 c8 1a             	ror    $0x1a,%eax
 87a9c40:	01 f8                	add    %edi,%eax
 87a9c42:	8d bc 17 24 d1 4d 5c 	lea    0x5c4dd124(%edi,%edx,1),%edi
 87a9c49:	89 c2                	mov    %eax,%edx
 87a9c4b:	31 f2                	xor    %esi,%edx
 87a9c4d:	23 55 f4             	and    -0xc(%ebp),%edx
 87a9c50:	31 f2                	xor    %esi,%edx
 87a9c52:	01 d7                	add    %edx,%edi
 87a9c54:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a9c57:	c1 cf 11             	ror    $0x11,%edi
 87a9c5a:	03 7d f0             	add    -0x10(%ebp),%edi
 87a9c5d:	c1 ce 16             	ror    $0x16,%esi
 87a9c60:	8d 8c 0a 24 d1 4d 5c 	lea    0x5c4dd124(%edx,%ecx,1),%ecx
 87a9c67:	89 fa                	mov    %edi,%edx
 87a9c69:	31 c2                	xor    %eax,%edx
 87a9c6b:	21 f2                	and    %esi,%edx
 87a9c6d:	31 c2                	xor    %eax,%edx
 87a9c6f:	01 d1                	add    %edx,%ecx
 87a9c71:	8b 55 80             	mov    -0x80(%ebp),%edx
 87a9c74:	c1 c9 13             	ror    $0x13,%ecx
 87a9c77:	03 4d f4             	add    -0xc(%ebp),%ecx
 87a9c7a:	c1 c8 16             	ror    $0x16,%eax
 87a9c7d:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 87a9c80:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 87a9c83:	8d 94 11 24 d1 4d 5c 	lea    0x5c4dd124(%ecx,%edx,1),%edx
 87a9c8a:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87a9c8d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a9c90:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 87a9c93:	31 fa                	xor    %edi,%edx
 87a9c95:	21 c2                	and    %eax,%edx
 87a9c97:	31 fa                	xor    %edi,%edx
 87a9c99:	03 55 f4             	add    -0xc(%ebp),%edx
 87a9c9c:	c1 cf 16             	ror    $0x16,%edi
 87a9c9f:	c1 ca 15             	ror    $0x15,%edx
 87a9ca2:	01 f2                	add    %esi,%edx
 87a9ca4:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87a9ca7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a9caa:	8d b4 0e f3 3e 70 6d 	lea    0x6d703ef3(%esi,%ecx,1),%esi
 87a9cb1:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a9cb4:	f7 d2                	not    %edx
 87a9cb6:	0b 55 f4             	or     -0xc(%ebp),%edx
 87a9cb9:	c1 c9 16             	ror    $0x16,%ecx
 87a9cbc:	31 fa                	xor    %edi,%edx
 87a9cbe:	01 d6                	add    %edx,%esi
 87a9cc0:	8b 55 8c             	mov    -0x74(%ebp),%edx
 87a9cc3:	c1 ce 17             	ror    $0x17,%esi
 87a9cc6:	01 c6                	add    %eax,%esi
 87a9cc8:	8d 84 10 f3 3e 70 6d 	lea    0x6d703ef3(%eax,%edx,1),%eax
 87a9ccf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87a9cd2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a9cd5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a9cd8:	c1 ca 16             	ror    $0x16,%edx
 87a9cdb:	f7 d0                	not    %eax
 87a9cdd:	09 f0                	or     %esi,%eax
 87a9cdf:	31 c8                	xor    %ecx,%eax
 87a9ce1:	03 45 f0             	add    -0x10(%ebp),%eax
 87a9ce4:	c1 c8 19             	ror    $0x19,%eax
 87a9ce7:	01 f8                	add    %edi,%eax
 87a9ce9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a9cec:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 87a9cf2:	8d bc 07 f3 3e 70 6d 	lea    0x6d703ef3(%edi,%eax,1),%edi
 87a9cf9:	8b 45 84             	mov    -0x7c(%ebp),%eax
 87a9cfc:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a9cff:	89 f7                	mov    %esi,%edi
 87a9d01:	f7 d7                	not    %edi
 87a9d03:	0b 7d f0             	or     -0x10(%ebp),%edi
 87a9d06:	c1 ce 16             	ror    $0x16,%esi
 87a9d09:	31 d7                	xor    %edx,%edi
 87a9d0b:	03 7d f4             	add    -0xc(%ebp),%edi
 87a9d0e:	c1 cf 11             	ror    $0x11,%edi
 87a9d11:	01 cf                	add    %ecx,%edi
 87a9d13:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a9d16:	8d bc 01 f3 3e 70 6d 	lea    0x6d703ef3(%ecx,%eax,1),%edi
 87a9d1d:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a9d20:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a9d23:	f7 d1                	not    %ecx
 87a9d25:	0b 4d f4             	or     -0xc(%ebp),%ecx
 87a9d28:	31 f1                	xor    %esi,%ecx
 87a9d2a:	8d 0c 0f             	lea    (%edi,%ecx,1),%ecx
 87a9d2d:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 87a9d30:	c1 c9 15             	ror    $0x15,%ecx
 87a9d33:	01 d1                	add    %edx,%ecx
 87a9d35:	c1 c8 16             	ror    $0x16,%eax
 87a9d38:	8d 94 3a f3 3e 70 6d 	lea    0x6d703ef3(%edx,%edi,1),%edx
 87a9d3f:	8b 7d f4             	mov    -0xc(%ebp),%edi
 87a9d42:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a9d45:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87a9d48:	c1 cf 16             	ror    $0x16,%edi
 87a9d4b:	f7 d2                	not    %edx
 87a9d4d:	09 ca                	or     %ecx,%edx
 87a9d4f:	31 c2                	xor    %eax,%edx
 87a9d51:	03 55 f0             	add    -0x10(%ebp),%edx
 87a9d54:	c1 ca 18             	ror    $0x18,%edx
 87a9d57:	01 f2                	add    %esi,%edx
 87a9d59:	89 55 ec             	mov    %edx,-0x14(%ebp)
 87a9d5c:	8b 55 b0             	mov    -0x50(%ebp),%edx
 87a9d5f:	8d b4 16 f3 3e 70 6d 	lea    0x6d703ef3(%esi,%edx,1),%esi
 87a9d66:	8b 55 90             	mov    -0x70(%ebp),%edx
 87a9d69:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a9d6c:	89 ce                	mov    %ecx,%esi
 87a9d6e:	f7 d6                	not    %esi
 87a9d70:	0b 75 ec             	or     -0x14(%ebp),%esi
 87a9d73:	c1 c9 16             	ror    $0x16,%ecx
 87a9d76:	31 fe                	xor    %edi,%esi
 87a9d78:	03 75 f4             	add    -0xc(%ebp),%esi
 87a9d7b:	c1 ce 1a             	ror    $0x1a,%esi
 87a9d7e:	01 c6                	add    %eax,%esi
 87a9d80:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a9d83:	8d b4 10 f3 3e 70 6d 	lea    0x6d703ef3(%eax,%edx,1),%esi
 87a9d8a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 87a9d8d:	f7 d0                	not    %eax
 87a9d8f:	0b 45 f4             	or     -0xc(%ebp),%eax
 87a9d92:	31 c8                	xor    %ecx,%eax
 87a9d94:	8d 04 06             	lea    (%esi,%eax,1),%eax
 87a9d97:	c1 c8 1a             	ror    $0x1a,%eax
 87a9d9a:	01 f8                	add    %edi,%eax
 87a9d9c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a9d9f:	8b 75 9c             	mov    -0x64(%ebp),%esi
 87a9da2:	8b 55 ec             	mov    -0x14(%ebp),%edx
 87a9da5:	8d bc 37 f3 3e 70 6d 	lea    0x6d703ef3(%edi,%esi,1),%edi
 87a9dac:	8b 75 f4             	mov    -0xc(%ebp),%esi
 87a9daf:	c1 ca 16             	ror    $0x16,%edx
 87a9db2:	f7 d6                	not    %esi
 87a9db4:	09 c6                	or     %eax,%esi
 87a9db6:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 87a9db9:	31 d6                	xor    %edx,%esi
 87a9dbb:	01 f7                	add    %esi,%edi
 87a9dbd:	8b 75 f4             	mov    -0xc(%ebp),%esi
 87a9dc0:	c1 cf 12             	ror    $0x12,%edi
 87a9dc3:	01 cf                	add    %ecx,%edi
 87a9dc5:	8d 8c 01 f3 3e 70 6d 	lea    0x6d703ef3(%ecx,%eax,1),%ecx
 87a9dcc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a9dcf:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87a9dd2:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a9dd5:	c1 ce 16             	ror    $0x16,%esi
 87a9dd8:	c1 c8 16             	ror    $0x16,%eax
 87a9ddb:	f7 d1                	not    %ecx
 87a9ddd:	09 f9                	or     %edi,%ecx
 87a9ddf:	31 f1                	xor    %esi,%ecx
 87a9de1:	03 4d f4             	add    -0xc(%ebp),%ecx
 87a9de4:	c1 c9 14             	ror    $0x14,%ecx
 87a9de7:	01 d1                	add    %edx,%ecx
 87a9de9:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87a9dec:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 87a9def:	8d 94 0a f3 3e 70 6d 	lea    0x6d703ef3(%edx,%ecx,1),%edx
 87a9df6:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 87a9df9:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a9dfc:	89 fa                	mov    %edi,%edx
 87a9dfe:	f7 d2                	not    %edx
 87a9e00:	0b 55 f4             	or     -0xc(%ebp),%edx
 87a9e03:	f7 d1                	not    %ecx
 87a9e05:	31 c2                	xor    %eax,%edx
 87a9e07:	03 55 f0             	add    -0x10(%ebp),%edx
 87a9e0a:	c1 cf 16             	ror    $0x16,%edi
 87a9e0d:	c1 ca 13             	ror    $0x13,%edx
 87a9e10:	01 f2                	add    %esi,%edx
 87a9e12:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a9e15:	8b 55 a8             	mov    -0x58(%ebp),%edx
 87a9e18:	0b 4d f0             	or     -0x10(%ebp),%ecx
 87a9e1b:	8d b4 16 f3 3e 70 6d 	lea    0x6d703ef3(%esi,%edx,1),%esi
 87a9e22:	8b 55 80             	mov    -0x80(%ebp),%edx
 87a9e25:	31 f9                	xor    %edi,%ecx
 87a9e27:	01 ce                	add    %ecx,%esi
 87a9e29:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 87a9e2c:	c1 ce 1b             	ror    $0x1b,%esi
 87a9e2f:	01 c6                	add    %eax,%esi
 87a9e31:	8d 84 10 f3 3e 70 6d 	lea    0x6d703ef3(%eax,%edx,1),%eax
 87a9e38:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a9e3b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a9e3e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a9e41:	c1 c9 16             	ror    $0x16,%ecx
 87a9e44:	c1 ca 16             	ror    $0x16,%edx
 87a9e47:	f7 d0                	not    %eax
 87a9e49:	09 f0                	or     %esi,%eax
 87a9e4b:	31 c8                	xor    %ecx,%eax
 87a9e4d:	03 45 f4             	add    -0xc(%ebp),%eax
 87a9e50:	c1 c8 12             	ror    $0x12,%eax
 87a9e53:	01 f8                	add    %edi,%eax
 87a9e55:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a9e58:	8b 45 a0             	mov    -0x60(%ebp),%eax
 87a9e5b:	8d bc 07 f3 3e 70 6d 	lea    0x6d703ef3(%edi,%eax,1),%edi
 87a9e62:	89 f0                	mov    %esi,%eax
 87a9e64:	f7 d0                	not    %eax
 87a9e66:	0b 45 f4             	or     -0xc(%ebp),%eax
 87a9e69:	c1 ce 16             	ror    $0x16,%esi
 87a9e6c:	31 d0                	xor    %edx,%eax
 87a9e6e:	01 c7                	add    %eax,%edi
 87a9e70:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 87a9e76:	c1 cf 13             	ror    $0x13,%edi
 87a9e79:	01 cf                	add    %ecx,%edi
 87a9e7b:	8d 8c 01 f3 3e 70 6d 	lea    0x6d703ef3(%ecx,%eax,1),%ecx
 87a9e82:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a9e85:	f7 d0                	not    %eax
 87a9e87:	09 f8                	or     %edi,%eax
 87a9e89:	31 f0                	xor    %esi,%eax
 87a9e8b:	01 c1                	add    %eax,%ecx
 87a9e8d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a9e90:	c1 c9 13             	ror    $0x13,%ecx
 87a9e93:	01 d1                	add    %edx,%ecx
 87a9e95:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 87a9e98:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 87a9e9b:	c1 c8 16             	ror    $0x16,%eax
 87a9e9e:	8d 94 0a f3 3e 70 6d 	lea    0x6d703ef3(%edx,%ecx,1),%edx
 87a9ea5:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87a9ea8:	89 fa                	mov    %edi,%edx
 87a9eaa:	f7 d2                	not    %edx
 87a9eac:	0b 55 f0             	or     -0x10(%ebp),%edx
 87a9eaf:	31 c2                	xor    %eax,%edx
 87a9eb1:	03 55 f4             	add    -0xc(%ebp),%edx
 87a9eb4:	c1 ca 19             	ror    $0x19,%edx
 87a9eb7:	01 f2                	add    %esi,%edx
 87a9eb9:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87a9ebc:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87a9ebf:	c1 cf 16             	ror    $0x16,%edi
 87a9ec2:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a9ec5:	8d b4 16 f3 3e 70 6d 	lea    0x6d703ef3(%esi,%edx,1),%esi
 87a9ecc:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87a9ecf:	c1 c9 16             	ror    $0x16,%ecx
 87a9ed2:	f7 d2                	not    %edx
 87a9ed4:	0b 55 f4             	or     -0xc(%ebp),%edx
 87a9ed7:	31 fa                	xor    %edi,%edx
 87a9ed9:	01 d6                	add    %edx,%esi
 87a9edb:	8b 55 98             	mov    -0x68(%ebp),%edx
 87a9ede:	c1 ce 1b             	ror    $0x1b,%esi
 87a9ee1:	01 c6                	add    %eax,%esi
 87a9ee3:	8d 84 10 e9 76 6d 7a 	lea    0x7a6d76e9(%eax,%edx,1),%eax
 87a9eea:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87a9eed:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a9ef0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a9ef3:	c1 ca 16             	ror    $0x16,%edx
 87a9ef6:	31 c8                	xor    %ecx,%eax
 87a9ef8:	21 f0                	and    %esi,%eax
 87a9efa:	31 c8                	xor    %ecx,%eax
 87a9efc:	03 45 f0             	add    -0x10(%ebp),%eax
 87a9eff:	c1 c8 11             	ror    $0x11,%eax
 87a9f02:	01 f8                	add    %edi,%eax
 87a9f04:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a9f07:	8b 45 90             	mov    -0x70(%ebp),%eax
 87a9f0a:	8d bc 07 e9 76 6d 7a 	lea    0x7a6d76e9(%edi,%eax,1),%edi
 87a9f11:	8b 45 88             	mov    -0x78(%ebp),%eax
 87a9f14:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a9f17:	89 f7                	mov    %esi,%edi
 87a9f19:	31 d7                	xor    %edx,%edi
 87a9f1b:	23 7d f0             	and    -0x10(%ebp),%edi
 87a9f1e:	c1 ce 16             	ror    $0x16,%esi
 87a9f21:	31 d7                	xor    %edx,%edi
 87a9f23:	03 7d f4             	add    -0xc(%ebp),%edi
 87a9f26:	c1 cf 1b             	ror    $0x1b,%edi
 87a9f29:	01 cf                	add    %ecx,%edi
 87a9f2b:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87a9f2e:	8d bc 01 e9 76 6d 7a 	lea    0x7a6d76e9(%ecx,%eax,1),%edi
 87a9f35:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a9f38:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a9f3b:	31 f1                	xor    %esi,%ecx
 87a9f3d:	23 4d f4             	and    -0xc(%ebp),%ecx
 87a9f40:	c1 c8 16             	ror    $0x16,%eax
 87a9f43:	31 f1                	xor    %esi,%ecx
 87a9f45:	8d 0c 0f             	lea    (%edi,%ecx,1),%ecx
 87a9f48:	8b bd 7c ff ff ff    	mov    -0x84(%ebp),%edi
 87a9f4e:	c1 c9 18             	ror    $0x18,%ecx
 87a9f51:	01 d1                	add    %edx,%ecx
 87a9f53:	8d 94 3a e9 76 6d 7a 	lea    0x7a6d76e9(%edx,%edi,1),%edx
 87a9f5a:	8b 7d f4             	mov    -0xc(%ebp),%edi
 87a9f5d:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87a9f60:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87a9f63:	31 c2                	xor    %eax,%edx
 87a9f65:	21 ca                	and    %ecx,%edx
 87a9f67:	31 c2                	xor    %eax,%edx
 87a9f69:	03 55 f0             	add    -0x10(%ebp),%edx
 87a9f6c:	c1 ca 15             	ror    $0x15,%edx
 87a9f6f:	01 f2                	add    %esi,%edx
 87a9f71:	89 55 ec             	mov    %edx,-0x14(%ebp)
 87a9f74:	8b 55 84             	mov    -0x7c(%ebp),%edx
 87a9f77:	c1 cf 16             	ror    $0x16,%edi
 87a9f7a:	8d b4 16 e9 76 6d 7a 	lea    0x7a6d76e9(%esi,%edx,1),%esi
 87a9f81:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87a9f84:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a9f87:	89 ce                	mov    %ecx,%esi
 87a9f89:	31 fe                	xor    %edi,%esi
 87a9f8b:	23 75 ec             	and    -0x14(%ebp),%esi
 87a9f8e:	c1 c9 16             	ror    $0x16,%ecx
 87a9f91:	31 fe                	xor    %edi,%esi
 87a9f93:	03 75 f4             	add    -0xc(%ebp),%esi
 87a9f96:	c1 ce 12             	ror    $0x12,%esi
 87a9f99:	01 c6                	add    %eax,%esi
 87a9f9b:	89 75 f4             	mov    %esi,-0xc(%ebp)
 87a9f9e:	8d b4 10 e9 76 6d 7a 	lea    0x7a6d76e9(%eax,%edx,1),%esi
 87a9fa5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 87a9fa8:	31 c8                	xor    %ecx,%eax
 87a9faa:	23 45 f4             	and    -0xc(%ebp),%eax
 87a9fad:	31 c8                	xor    %ecx,%eax
 87a9faf:	8d 04 06             	lea    (%esi,%eax,1),%eax
 87a9fb2:	c1 c8 12             	ror    $0x12,%eax
 87a9fb5:	01 f8                	add    %edi,%eax
 87a9fb7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a9fba:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 87a9fbd:	8b 55 ec             	mov    -0x14(%ebp),%edx
 87a9fc0:	8d bc 37 e9 76 6d 7a 	lea    0x7a6d76e9(%edi,%esi,1),%edi
 87a9fc7:	8b 75 f4             	mov    -0xc(%ebp),%esi
 87a9fca:	c1 ca 16             	ror    $0x16,%edx
 87a9fcd:	31 d6                	xor    %edx,%esi
 87a9fcf:	21 c6                	and    %eax,%esi
 87a9fd1:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 87a9fd7:	31 d6                	xor    %edx,%esi
 87a9fd9:	01 f7                	add    %esi,%edi
 87a9fdb:	8b 75 f4             	mov    -0xc(%ebp),%esi
 87a9fde:	c1 cf 1a             	ror    $0x1a,%edi
 87a9fe1:	01 cf                	add    %ecx,%edi
 87a9fe3:	8d 8c 01 e9 76 6d 7a 	lea    0x7a6d76e9(%ecx,%eax,1),%ecx
 87a9fea:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a9fed:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87a9ff0:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87a9ff3:	c1 ce 16             	ror    $0x16,%esi
 87a9ff6:	c1 c8 16             	ror    $0x16,%eax
 87a9ff9:	31 f1                	xor    %esi,%ecx
 87a9ffb:	21 f9                	and    %edi,%ecx
 87a9ffd:	31 f1                	xor    %esi,%ecx
 87a9fff:	03 4d f4             	add    -0xc(%ebp),%ecx
 87aa002:	c1 c9 12             	ror    $0x12,%ecx
 87aa005:	01 d1                	add    %edx,%ecx
 87aa007:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87aa00a:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 87aa00d:	8d 94 0a e9 76 6d 7a 	lea    0x7a6d76e9(%edx,%ecx,1),%edx
 87aa014:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 87aa017:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87aa01a:	89 fa                	mov    %edi,%edx
 87aa01c:	31 c2                	xor    %eax,%edx
 87aa01e:	23 55 f4             	and    -0xc(%ebp),%edx
 87aa021:	31 c2                	xor    %eax,%edx
 87aa023:	03 55 f0             	add    -0x10(%ebp),%edx
 87aa026:	c1 ca 1a             	ror    $0x1a,%edx
 87aa029:	01 f2                	add    %esi,%edx
 87aa02b:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87aa02e:	8b 55 a8             	mov    -0x58(%ebp),%edx
 87aa031:	c1 cf 16             	ror    $0x16,%edi
 87aa034:	31 f9                	xor    %edi,%ecx
 87aa036:	23 4d f0             	and    -0x10(%ebp),%ecx
 87aa039:	8d b4 16 e9 76 6d 7a 	lea    0x7a6d76e9(%esi,%edx,1),%esi
 87aa040:	8b 55 80             	mov    -0x80(%ebp),%edx
 87aa043:	31 f9                	xor    %edi,%ecx
 87aa045:	01 ce                	add    %ecx,%esi
 87aa047:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 87aa04a:	c1 ce 17             	ror    $0x17,%esi
 87aa04d:	01 c6                	add    %eax,%esi
 87aa04f:	8d 84 10 e9 76 6d 7a 	lea    0x7a6d76e9(%eax,%edx,1),%eax
 87aa056:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87aa059:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87aa05c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87aa05f:	c1 c9 16             	ror    $0x16,%ecx
 87aa062:	c1 ca 16             	ror    $0x16,%edx
 87aa065:	31 c8                	xor    %ecx,%eax
 87aa067:	21 f0                	and    %esi,%eax
 87aa069:	31 c8                	xor    %ecx,%eax
 87aa06b:	03 45 f4             	add    -0xc(%ebp),%eax
 87aa06e:	c1 c8 14             	ror    $0x14,%eax
 87aa071:	01 f8                	add    %edi,%eax
 87aa073:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87aa076:	8b 45 ac             	mov    -0x54(%ebp),%eax
 87aa079:	8d bc 07 e9 76 6d 7a 	lea    0x7a6d76e9(%edi,%eax,1),%edi
 87aa080:	89 f0                	mov    %esi,%eax
 87aa082:	31 d0                	xor    %edx,%eax
 87aa084:	23 45 f4             	and    -0xc(%ebp),%eax
 87aa087:	c1 ce 16             	ror    $0x16,%esi
 87aa08a:	31 d0                	xor    %edx,%eax
 87aa08c:	01 c7                	add    %eax,%edi
 87aa08e:	8b 45 9c             	mov    -0x64(%ebp),%eax
 87aa091:	c1 cf 17             	ror    $0x17,%edi
 87aa094:	01 cf                	add    %ecx,%edi
 87aa096:	8d 8c 01 e9 76 6d 7a 	lea    0x7a6d76e9(%ecx,%eax,1),%ecx
 87aa09d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87aa0a0:	31 f0                	xor    %esi,%eax
 87aa0a2:	21 f8                	and    %edi,%eax
 87aa0a4:	31 f0                	xor    %esi,%eax
 87aa0a6:	01 c1                	add    %eax,%ecx
 87aa0a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87aa0ab:	c1 c9 14             	ror    $0x14,%ecx
 87aa0ae:	01 d1                	add    %edx,%ecx
 87aa0b0:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 87aa0b3:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 87aa0b6:	c1 c8 16             	ror    $0x16,%eax
 87aa0b9:	8d 94 0a e9 76 6d 7a 	lea    0x7a6d76e9(%edx,%ecx,1),%edx
 87aa0c0:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87aa0c3:	89 fa                	mov    %edi,%edx
 87aa0c5:	31 c2                	xor    %eax,%edx
 87aa0c7:	23 55 f0             	and    -0x10(%ebp),%edx
 87aa0ca:	31 c2                	xor    %eax,%edx
 87aa0cc:	03 55 f4             	add    -0xc(%ebp),%edx
 87aa0cf:	c1 cf 16             	ror    $0x16,%edi
 87aa0d2:	c1 ca 1b             	ror    $0x1b,%edx
 87aa0d5:	01 f2                	add    %esi,%edx
 87aa0d7:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87aa0da:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87aa0dd:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 87aa0e0:	8d b4 16 e9 76 6d 7a 	lea    0x7a6d76e9(%esi,%edx,1),%esi
 87aa0e7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 87aa0ea:	c1 c9 16             	ror    $0x16,%ecx
 87aa0ed:	31 fa                	xor    %edi,%edx
 87aa0ef:	23 55 f4             	and    -0xc(%ebp),%edx
 87aa0f2:	31 fa                	xor    %edi,%edx
 87aa0f4:	01 d6                	add    %edx,%esi
 87aa0f6:	8b 55 b0             	mov    -0x50(%ebp),%edx
 87aa0f9:	c1 ce 11             	ror    $0x11,%esi
 87aa0fc:	01 c6                	add    %eax,%esi
 87aa0fe:	8d 84 10 e9 76 6d 7a 	lea    0x7a6d76e9(%eax,%edx,1),%eax
 87aa105:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87aa108:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87aa10b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87aa10e:	c1 ca 16             	ror    $0x16,%edx
 87aa111:	31 c8                	xor    %ecx,%eax
 87aa113:	21 f0                	and    %esi,%eax
 87aa115:	31 c8                	xor    %ecx,%eax
 87aa117:	03 45 f0             	add    -0x10(%ebp),%eax
 87aa11a:	c1 c8 18             	ror    $0x18,%eax
 87aa11d:	01 f8                	add    %edi,%eax
 87aa11f:	03 7d a8             	add    -0x58(%ebp),%edi
 87aa122:	89 7d ec             	mov    %edi,-0x14(%ebp)
 87aa125:	89 f7                	mov    %esi,%edi
 87aa127:	31 d7                	xor    %edx,%edi
 87aa129:	31 c7                	xor    %eax,%edi
 87aa12b:	03 7d ec             	add    -0x14(%ebp),%edi
 87aa12e:	c1 ce 16             	ror    $0x16,%esi
 87aa131:	c1 cf 18             	ror    $0x18,%edi
 87aa134:	01 cf                	add    %ecx,%edi
 87aa136:	89 7d ec             	mov    %edi,-0x14(%ebp)
 87aa139:	89 c7                	mov    %eax,%edi
 87aa13b:	03 4d b4             	add    -0x4c(%ebp),%ecx
 87aa13e:	31 f7                	xor    %esi,%edi
 87aa140:	33 7d ec             	xor    -0x14(%ebp),%edi
 87aa143:	c1 c8 16             	ror    $0x16,%eax
 87aa146:	01 f9                	add    %edi,%ecx
 87aa148:	8b 7d ec             	mov    -0x14(%ebp),%edi
 87aa14b:	c1 c9 1b             	ror    $0x1b,%ecx
 87aa14e:	01 d1                	add    %edx,%ecx
 87aa150:	03 55 a0             	add    -0x60(%ebp),%edx
 87aa153:	31 c7                	xor    %eax,%edi
 87aa155:	31 cf                	xor    %ecx,%edi
 87aa157:	01 fa                	add    %edi,%edx
 87aa159:	8b 7d ec             	mov    -0x14(%ebp),%edi
 87aa15c:	c1 ca 14             	ror    $0x14,%edx
 87aa15f:	01 f2                	add    %esi,%edx
 87aa161:	03 75 88             	add    -0x78(%ebp),%esi
 87aa164:	c1 cf 16             	ror    $0x16,%edi
 87aa167:	89 7d ec             	mov    %edi,-0x14(%ebp)
 87aa16a:	31 cf                	xor    %ecx,%edi
 87aa16c:	31 d7                	xor    %edx,%edi
 87aa16e:	01 fe                	add    %edi,%esi
 87aa170:	89 d7                	mov    %edx,%edi
 87aa172:	c1 ce 17             	ror    $0x17,%esi
 87aa175:	01 c6                	add    %eax,%esi
 87aa177:	c1 c9 16             	ror    $0x16,%ecx
 87aa17a:	03 85 7c ff ff ff    	add    -0x84(%ebp),%eax
 87aa180:	31 cf                	xor    %ecx,%edi
 87aa182:	31 f7                	xor    %esi,%edi
 87aa184:	c1 ca 16             	ror    $0x16,%edx
 87aa187:	01 f8                	add    %edi,%eax
 87aa189:	8b 7d ec             	mov    -0x14(%ebp),%edi
 87aa18c:	03 7d 8c             	add    -0x74(%ebp),%edi
 87aa18f:	c1 c8 14             	ror    $0x14,%eax
 87aa192:	03 45 ec             	add    -0x14(%ebp),%eax
 87aa195:	89 7d f0             	mov    %edi,-0x10(%ebp)
 87aa198:	89 f7                	mov    %esi,%edi
 87aa19a:	31 d7                	xor    %edx,%edi
 87aa19c:	31 c7                	xor    %eax,%edi
 87aa19e:	03 7d f0             	add    -0x10(%ebp),%edi
 87aa1a1:	c1 ce 16             	ror    $0x16,%esi
 87aa1a4:	c1 cf 1b             	ror    $0x1b,%edi
 87aa1a7:	01 cf                	add    %ecx,%edi
 87aa1a9:	89 7d f0             	mov    %edi,-0x10(%ebp)
 87aa1ac:	89 c7                	mov    %eax,%edi
 87aa1ae:	03 4d 98             	add    -0x68(%ebp),%ecx
 87aa1b1:	31 f7                	xor    %esi,%edi
 87aa1b3:	33 7d f0             	xor    -0x10(%ebp),%edi
 87aa1b6:	01 f9                	add    %edi,%ecx
 87aa1b8:	8b 7d f0             	mov    -0x10(%ebp),%edi
 87aa1bb:	c1 c9 12             	ror    $0x12,%ecx
 87aa1be:	01 d1                	add    %edx,%ecx
 87aa1c0:	c1 c8 16             	ror    $0x16,%eax
 87aa1c3:	03 55 94             	add    -0x6c(%ebp),%edx
 87aa1c6:	31 c7                	xor    %eax,%edi
 87aa1c8:	31 cf                	xor    %ecx,%edi
 87aa1ca:	01 fa                	add    %edi,%edx
 87aa1cc:	8b 7d f0             	mov    -0x10(%ebp),%edi
 87aa1cf:	c1 ca 1a             	ror    $0x1a,%edx
 87aa1d2:	01 f2                	add    %esi,%edx
 87aa1d4:	03 75 90             	add    -0x70(%ebp),%esi
 87aa1d7:	c1 cf 16             	ror    $0x16,%edi
 87aa1da:	89 7d f0             	mov    %edi,-0x10(%ebp)
 87aa1dd:	31 cf                	xor    %ecx,%edi
 87aa1df:	31 d7                	xor    %edx,%edi
 87aa1e1:	01 fe                	add    %edi,%esi
 87aa1e3:	89 d7                	mov    %edx,%edi
 87aa1e5:	c1 ce 18             	ror    $0x18,%esi
 87aa1e8:	01 c6                	add    %eax,%esi
 87aa1ea:	c1 c9 16             	ror    $0x16,%ecx
 87aa1ed:	03 45 80             	add    -0x80(%ebp),%eax
 87aa1f0:	31 cf                	xor    %ecx,%edi
 87aa1f2:	31 f7                	xor    %esi,%edi
 87aa1f4:	c1 ca 16             	ror    $0x16,%edx
 87aa1f7:	01 f8                	add    %edi,%eax
 87aa1f9:	8b 7d f0             	mov    -0x10(%ebp),%edi
 87aa1fc:	03 7d ac             	add    -0x54(%ebp),%edi
 87aa1ff:	c1 c8 13             	ror    $0x13,%eax
 87aa202:	03 45 f0             	add    -0x10(%ebp),%eax
 87aa205:	89 7d f0             	mov    %edi,-0x10(%ebp)
 87aa208:	89 f7                	mov    %esi,%edi
 87aa20a:	31 d7                	xor    %edx,%edi
 87aa20c:	31 c7                	xor    %eax,%edi
 87aa20e:	03 7d f0             	add    -0x10(%ebp),%edi
 87aa211:	c1 ce 16             	ror    $0x16,%esi
 87aa214:	c1 cf 1a             	ror    $0x1a,%edi
 87aa217:	01 cf                	add    %ecx,%edi
 87aa219:	89 7d f0             	mov    %edi,-0x10(%ebp)
 87aa21c:	89 c7                	mov    %eax,%edi
 87aa21e:	03 4d b0             	add    -0x50(%ebp),%ecx
 87aa221:	31 f7                	xor    %esi,%edi
 87aa223:	33 7d f0             	xor    -0x10(%ebp),%edi
 87aa226:	01 f9                	add    %edi,%ecx
 87aa228:	8b 7d f0             	mov    -0x10(%ebp),%edi
 87aa22b:	c1 c9 1b             	ror    $0x1b,%ecx
 87aa22e:	01 d1                	add    %edx,%ecx
 87aa230:	c1 c8 16             	ror    $0x16,%eax
 87aa233:	03 95 78 ff ff ff    	add    -0x88(%ebp),%edx
 87aa239:	31 c7                	xor    %eax,%edi
 87aa23b:	31 cf                	xor    %ecx,%edi
 87aa23d:	01 fa                	add    %edi,%edx
 87aa23f:	8b 7d f0             	mov    -0x10(%ebp),%edi
 87aa242:	c1 ca 11             	ror    $0x11,%edx
 87aa245:	01 f2                	add    %esi,%edx
 87aa247:	03 75 84             	add    -0x7c(%ebp),%esi
 87aa24a:	c1 cf 16             	ror    $0x16,%edi
 87aa24d:	89 7d f0             	mov    %edi,-0x10(%ebp)
 87aa250:	31 cf                	xor    %ecx,%edi
 87aa252:	31 d7                	xor    %edx,%edi
 87aa254:	01 fe                	add    %edi,%esi
 87aa256:	89 d7                	mov    %edx,%edi
 87aa258:	c1 ce 13             	ror    $0x13,%esi
 87aa25b:	01 c6                	add    %eax,%esi
 87aa25d:	c1 c9 16             	ror    $0x16,%ecx
 87aa260:	03 45 9c             	add    -0x64(%ebp),%eax
 87aa263:	31 cf                	xor    %ecx,%edi
 87aa265:	31 f7                	xor    %esi,%edi
 87aa267:	c1 ca 16             	ror    $0x16,%edx
 87aa26a:	01 f8                	add    %edi,%eax
 87aa26c:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 87aa26f:	c1 c8 15             	ror    $0x15,%eax
 87aa272:	03 45 f0             	add    -0x10(%ebp),%eax
 87aa275:	c1 cf 16             	ror    $0x16,%edi
 87aa278:	89 45 ec             	mov    %eax,-0x14(%ebp)
 87aa27b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87aa27e:	03 45 a4             	add    -0x5c(%ebp),%eax
 87aa281:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87aa284:	8b 45 bc             	mov    -0x44(%ebp),%eax
 87aa287:	01 d0                	add    %edx,%eax
 87aa289:	31 f2                	xor    %esi,%edx
 87aa28b:	01 f8                	add    %edi,%eax
 87aa28d:	8b 7d 08             	mov    0x8(%ebp),%edi
 87aa290:	89 47 14             	mov    %eax,0x14(%edi)
 87aa293:	8b 47 1c             	mov    0x1c(%edi),%eax
 87aa296:	01 c8                	add    %ecx,%eax
 87aa298:	03 45 d0             	add    -0x30(%ebp),%eax
 87aa29b:	89 47 18             	mov    %eax,0x18(%edi)
 87aa29e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87aa2a1:	03 47 20             	add    0x20(%edi),%eax
 87aa2a4:	01 c1                	add    %eax,%ecx
 87aa2a6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 87aa2a9:	33 55 ec             	xor    -0x14(%ebp),%edx
 87aa2ac:	03 55 f0             	add    -0x10(%ebp),%edx
 87aa2af:	c1 ce 16             	ror    $0x16,%esi
 87aa2b2:	c1 ca 15             	ror    $0x15,%edx
 87aa2b5:	01 d1                	add    %edx,%ecx
 87aa2b7:	8b 55 08             	mov    0x8(%ebp),%edx
 87aa2ba:	89 4f 1c             	mov    %ecx,0x1c(%edi)
 87aa2bd:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 87aa2c0:	03 4f 10             	add    0x10(%edi),%ecx
 87aa2c3:	8b 7d d0             	mov    -0x30(%ebp),%edi
 87aa2c6:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 87aa2c9:	f7 d7                	not    %edi
 87aa2cb:	0b 7d d4             	or     -0x2c(%ebp),%edi
 87aa2ce:	33 7d cc             	xor    -0x34(%ebp),%edi
 87aa2d1:	03 7d c8             	add    -0x38(%ebp),%edi
 87aa2d4:	c1 cf 1a             	ror    $0x1a,%edi
 87aa2d7:	01 f8                	add    %edi,%eax
 87aa2d9:	89 42 20             	mov    %eax,0x20(%edx)
 87aa2dc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87aa2df:	8d 04 06             	lea    (%esi,%eax,1),%eax
 87aa2e2:	03 45 cc             	add    -0x34(%ebp),%eax
 87aa2e5:	89 42 10             	mov    %eax,0x10(%edx)
 87aa2e8:	81 c4 88 00 00 00    	add    $0x88,%esp
 87aa2ee:	5e                   	pop    %esi
 87aa2ef:	5f                   	pop    %edi
 87aa2f0:	5d                   	pop    %ebp
 87aa2f1:	c3                   	ret
 87aa2f2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87aa2f9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::RIPEMD160::Transform @ 0x87a8d20

/* TaoCrypt::RIPEMD160::Transform() */

void __thiscall TaoCrypt::RIPEMD160::Transform(RIPEMD160 *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
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
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  
  uVar24 = *(uint *)(this + 0x18);
  uVar1 = *(uint *)(this + 0x14);
  uVar22 = *(uint *)(this + 0x1c);
  iVar2 = *(int *)(this + 0x30);
  iVar3 = *(int *)(this + 0x20);
  uVar20 = *(int *)(this + 0x10) + iVar2 + (uVar24 ^ uVar1 ^ uVar22);
  uVar23 = uVar24 >> 0x16 | uVar24 << 10;
  uVar21 = (uVar20 >> 0x15 | uVar20 * 0x800) + iVar3;
  iVar4 = *(int *)(this + 0x34);
  uVar20 = iVar4 + iVar3 + (uVar23 ^ uVar1 ^ uVar21);
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar22;
  uVar27 = uVar1 >> 0x16 | uVar1 << 10;
  iVar5 = *(int *)(this + 0x38);
  uVar25 = uVar22 + iVar5 + (uVar27 ^ uVar21 ^ uVar20);
  uVar19 = uVar20 >> 0x16 | uVar20 * 0x400;
  iVar6 = *(int *)(this + 0x3c);
  uVar21 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar26 = (uVar25 >> 0x11 | uVar25 * 0x8000) + uVar23;
  iVar7 = *(int *)(this + 0x40);
  uVar20 = uVar23 + iVar6 + (uVar20 ^ uVar21 ^ uVar26);
  uVar25 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar27;
  uVar20 = (uVar19 ^ uVar26 ^ uVar25) + uVar27 + iVar7;
  uVar28 = (uVar20 >> 0x1b | uVar20 * 0x20) + uVar21;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  iVar8 = *(int *)(this + 0x44);
  uVar20 = (uVar25 ^ uVar26 ^ uVar28) + uVar21 + iVar8;
  uVar21 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar19;
  uVar25 = uVar25 >> 0x16 | uVar25 * 0x400;
  iVar9 = *(int *)(this + 0x48);
  uVar29 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar20 = uVar19 + iVar9 + (uVar28 ^ uVar25 ^ uVar21);
  uVar20 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar26;
  iVar10 = *(int *)(this + 0x4c);
  uVar19 = uVar26 + iVar10 + (uVar21 ^ uVar29 ^ uVar20);
  uVar26 = (uVar19 >> 0x17 | uVar19 * 0x200) + uVar25;
  uVar19 = uVar21 >> 0x16 | uVar21 * 0x400;
  iVar11 = *(int *)(this + 0x50);
  uVar21 = uVar25 + iVar11 + (uVar19 ^ uVar20 ^ uVar26);
  uVar25 = (uVar21 >> 0x15 | uVar21 * 0x800) + uVar29;
  uVar21 = uVar20 >> 0x16 | uVar20 * 0x400;
  iVar12 = *(int *)(this + 0x54);
  uVar20 = uVar29 + iVar12 + (uVar26 ^ uVar21 ^ uVar25);
  uVar20 = (uVar20 >> 0x13 | uVar20 * 0x2000) + uVar19;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  iVar13 = *(int *)(this + 0x58);
  uVar19 = (uVar25 ^ uVar26 ^ uVar20) + uVar19 + iVar13;
  uVar25 = uVar25 >> 0x16 | uVar25 * 0x400;
  uVar28 = (uVar19 >> 0x12 | uVar19 * 0x4000) + uVar21;
  iVar14 = *(int *)(this + 0x5c);
  uVar19 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar21 + iVar14 + (uVar20 ^ uVar25 ^ uVar28);
  uVar20 = (uVar20 >> 0x11 | uVar20 * 0x8000) + uVar26;
  iVar15 = *(int *)(this + 0x60);
  uVar21 = uVar26 + iVar15 + (uVar28 ^ uVar19 ^ uVar20);
  uVar26 = (uVar21 >> 0x1a | uVar21 * 0x40) + uVar25;
  uVar28 = uVar28 >> 0x16 | uVar28 * 0x400;
  iVar16 = *(int *)(this + 100);
  uVar21 = uVar25 + iVar16 + (uVar28 ^ uVar20 ^ uVar26);
  uVar25 = (uVar21 >> 0x19 | uVar21 * 0x80) + uVar19;
  uVar21 = uVar20 >> 0x16 | uVar20 * 0x400;
  iVar17 = *(int *)(this + 0x68);
  uVar20 = uVar19 + iVar17 + (uVar26 ^ uVar21 ^ uVar25);
  uVar19 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar28;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  iVar18 = *(int *)(this + 0x6c);
  uVar20 = (uVar25 ^ uVar26 ^ uVar19) + uVar28 + iVar18;
  uVar25 = uVar25 >> 0x16 | uVar25 * 0x400;
  uVar20 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar21;
  uVar28 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = uVar21 + 0x5a827999 + iVar10 + ((uVar19 ^ uVar25) & uVar20 ^ uVar25);
  uVar19 = (uVar19 >> 0x19 | uVar19 * 0x80) + uVar26;
  uVar21 = uVar26 + 0x5a827999 + iVar7 + ((uVar20 ^ uVar28) & uVar19 ^ uVar28);
  uVar26 = (uVar21 >> 0x1a | uVar21 * 0x40) + uVar25;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar21 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = ((uVar19 ^ uVar20) & uVar26 ^ uVar20) + uVar25 + 0x5a827999 + iVar16;
  uVar19 = (uVar19 >> 0x18 | uVar19 * 0x100) + uVar28;
  uVar25 = uVar28 + 0x5a827999 + iVar4 + ((uVar26 ^ uVar21) & uVar19 ^ uVar21);
  uVar28 = (uVar25 >> 0x13 | uVar25 * 0x2000) + uVar20;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar25 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar20 = ((uVar19 ^ uVar26) & uVar28 ^ uVar26) + uVar20 + 0x5a827999 + iVar13;
  uVar20 = (uVar20 >> 0x15 | uVar20 * 0x800) + uVar21;
  uVar29 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar19 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar21 = ((uVar28 ^ uVar25) & uVar20 ^ uVar25) + uVar21 + 0x5a827999 + iVar9;
  uVar21 = (uVar21 >> 0x17 | uVar21 * 0x200) + uVar26;
  uVar20 = uVar26 + 0x5a827999 + iVar18 + ((uVar20 ^ uVar29) & uVar21 ^ uVar29);
  uVar26 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar25;
  uVar20 = ((uVar21 ^ uVar19) & uVar26 ^ uVar19) + uVar25 + 0x5a827999 + iVar6;
  uVar21 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar20 = (uVar20 >> 0x11 | uVar20 * 0x8000) + uVar29;
  uVar28 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar25 = ((uVar26 ^ uVar21) & uVar20 ^ uVar21) + uVar29 + 0x5a827999 + iVar15;
  uVar26 = (uVar25 >> 0x19 | uVar25 * 0x80) + uVar19;
  uVar25 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar19 + 0x5a827999 + iVar2 + ((uVar20 ^ uVar28) & uVar26 ^ uVar28);
  uVar19 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar21;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = uVar21 + 0x5a827999 + iVar12 + ((uVar26 ^ uVar25) & uVar19 ^ uVar25);
  uVar21 = (uVar20 >> 0x11 | uVar20 * 0x8000) + uVar28;
  uVar20 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = ((uVar19 ^ uVar29) & uVar21 ^ uVar29) + uVar28 + 0x5a827999 + iVar8;
  uVar26 = (uVar19 >> 0x17 | uVar19 * 0x200) + uVar25;
  uVar19 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar21 = ((uVar21 ^ uVar20) & uVar26 ^ uVar20) + uVar25 + 0x5a827999 + iVar5;
  uVar21 = (uVar21 >> 0x15 | uVar21 * 0x800) + uVar29;
  uVar25 = uVar29 + 0x5a827999 + iVar17 + ((uVar26 ^ uVar19) & uVar21 ^ uVar19);
  uVar28 = (uVar25 >> 0x19 | uVar25 * 0x80) + uVar20;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = ((uVar21 ^ uVar26) & uVar28 ^ uVar26) + uVar20 + 0x5a827999 + iVar14;
  uVar25 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar20 = (uVar20 >> 0x13 | uVar20 * 0x2000) + uVar19;
  uVar29 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar19 = uVar19 + 0x5a827999 + iVar11 + ((uVar28 ^ uVar25) & uVar20 ^ uVar25);
  uVar19 = (uVar19 >> 0x14 | uVar19 * 0x1000) + uVar26;
  uVar21 = uVar26 + 0x6ed9eba1 + iVar6 + ((~uVar20 | uVar19) ^ uVar29);
  uVar26 = (uVar21 >> 0x15 | uVar21 * 0x800) + uVar25;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar21 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = ((~uVar19 | uVar26) ^ uVar20) + uVar25 + 0x6ed9eba1 + iVar13;
  uVar19 = (uVar19 >> 0x13 | uVar19 * 0x2000) + uVar29;
  uVar25 = uVar29 + 0x6ed9eba1 + iVar17 + ((~uVar26 | uVar19) ^ uVar21);
  uVar28 = (uVar25 >> 0x1a | uVar25 * 0x40) + uVar20;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar25 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar20 = ((~uVar19 | uVar28) ^ uVar26) + uVar20 + 0x6ed9eba1 + iVar7;
  uVar20 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar21;
  uVar29 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar19 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar21 = ((~uVar28 | uVar20) ^ uVar25) + uVar21 + 0x6ed9eba1 + iVar12;
  uVar21 = (uVar21 >> 0x12 | uVar21 * 0x4000) + uVar26;
  uVar20 = uVar26 + 0x6ed9eba1 + iVar18 + ((~uVar20 | uVar21) ^ uVar29);
  uVar26 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar25;
  uVar20 = ((~uVar21 | uVar26) ^ uVar19) + uVar25 + 0x6ed9eba1 + iVar11;
  uVar21 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar20 = (uVar20 >> 0x13 | uVar20 * 0x2000) + uVar29;
  uVar25 = ((~uVar26 | uVar20) ^ uVar21) + uVar29 + 0x6ed9eba1 + iVar4;
  uVar28 = (uVar25 >> 0x11 | uVar25 * 0x8000) + uVar19;
  uVar25 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar26 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar19 + 0x6ed9eba1 + iVar5 + ((~uVar20 | uVar28) ^ uVar25);
  uVar19 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar21;
  uVar29 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar20 = uVar21 + 0x6ed9eba1 + iVar10 + ((~uVar28 | uVar19) ^ uVar26);
  uVar21 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar25;
  uVar20 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = ((~uVar19 | uVar21) ^ uVar29) + uVar25 + 0x6ed9eba1 + iVar2;
  uVar28 = (uVar19 >> 0x13 | uVar19 * 0x2000) + uVar26;
  uVar25 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar19 = ((~uVar21 | uVar28) ^ uVar20) + uVar26 + 0x6ed9eba1 + iVar9;
  uVar21 = (uVar19 >> 0x1a | uVar19 * 0x40) + uVar29;
  uVar19 = uVar29 + 0x6ed9eba1 + iVar16 + ((~uVar28 | uVar21) ^ uVar25);
  uVar29 = (uVar19 >> 0x1b | uVar19 * 0x20) + uVar20;
  uVar28 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar20 = ((~uVar21 | uVar29) ^ uVar28) + uVar20 + 0x6ed9eba1 + iVar14;
  uVar19 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar25;
  uVar26 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar30 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar20 = uVar25 + 0x6ed9eba1 + iVar8 + ((~uVar29 | uVar19) ^ uVar26);
  uVar21 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar28;
  uVar20 = uVar28 + 0x6ed9eba1 + iVar15 + ((~uVar19 | uVar21) ^ uVar30);
  uVar20 = (uVar20 >> 0x1b | uVar20 * 0x20) + uVar26;
  uVar25 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar28 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar19 = ((uVar20 ^ uVar21) & uVar25 ^ uVar21) + uVar26 + 0x8f1bbcdc + iVar4;
  uVar19 = (uVar19 >> 0x15 | uVar19 * 0x800) + uVar30;
  uVar21 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar30 + 0x8f1bbcdc + iVar12 + ((uVar19 ^ uVar20) & uVar28 ^ uVar20);
  uVar29 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar25;
  uVar20 = ((uVar29 ^ uVar19) & uVar21 ^ uVar19) + uVar25 + 0x8f1bbcdc + iVar14;
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar28;
  uVar25 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = uVar28 + 0x8f1bbcdc + iVar13 + ((uVar20 ^ uVar29) & uVar25 ^ uVar29);
  uVar26 = (uVar19 >> 0x11 | uVar19 * 0x8000) + uVar21;
  uVar29 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar19 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar21 + 0x8f1bbcdc + iVar2 + ((uVar26 ^ uVar20) & uVar29 ^ uVar20);
  uVar21 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar25;
  uVar28 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = ((uVar21 ^ uVar26) & uVar19 ^ uVar26) + uVar25 + 0x8f1bbcdc + iVar11;
  uVar25 = (uVar20 >> 0x11 | uVar20 * 0x8000) + uVar29;
  uVar20 = uVar29 + 0x8f1bbcdc + iVar15 + ((uVar25 ^ uVar21) & uVar28 ^ uVar21);
  uVar26 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar19;
  uVar21 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar20 = uVar19 + 0x8f1bbcdc + iVar7 + ((uVar26 ^ uVar25) & uVar21 ^ uVar25);
  uVar29 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar28;
  uVar25 = uVar25 >> 0x16 | uVar25 * 0x400;
  uVar20 = ((uVar29 ^ uVar26) & uVar25 ^ uVar26) + uVar28 + 0x8f1bbcdc + iVar16;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar19 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar21;
  uVar20 = uVar21 + 0x8f1bbcdc + iVar6 + ((uVar19 ^ uVar29) & uVar26 ^ uVar29);
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar25;
  uVar29 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar21 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = uVar25 + 0x8f1bbcdc + iVar10 + ((uVar20 ^ uVar19) & uVar29 ^ uVar19);
  uVar28 = (uVar19 >> 0x1b | uVar19 * 0x20) + uVar26;
  uVar19 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = ((uVar28 ^ uVar20) & uVar21 ^ uVar20) + uVar26 + 0x8f1bbcdc + iVar18;
  uVar26 = (uVar20 >> 0x1a | uVar20 * 0x40) + uVar29;
  uVar20 = uVar29 + 0x8f1bbcdc + iVar17 + ((uVar26 ^ uVar28) & uVar19 ^ uVar28);
  uVar25 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar21;
  uVar29 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar28 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = uVar21 + 0x8f1bbcdc + iVar8 + ((uVar25 ^ uVar26) & uVar29 ^ uVar26);
  uVar26 = (uVar20 >> 0x1a | uVar20 * 0x40) + uVar19;
  uVar20 = ((uVar26 ^ uVar25) & uVar28 ^ uVar25) + uVar19 + 0x8f1bbcdc + iVar9;
  uVar19 = uVar25 >> 0x16 | uVar25 * 0x400;
  uVar20 = (uVar20 >> 0x1b | uVar20 * 0x20) + uVar29;
  uVar21 = uVar29 + 0x8f1bbcdc + iVar5 + ((uVar20 ^ uVar26) & uVar19 ^ uVar26);
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar25 = (uVar21 >> 0x14 | uVar21 * 0x1000) + uVar28;
  uVar21 = uVar28 + 0xa953fd4e + iVar7 + ((~uVar29 | uVar20) ^ uVar25);
  uVar21 = (uVar21 >> 0x17 | uVar21 * 0x200) + uVar19;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar19 = ((~uVar20 | uVar25) ^ uVar21) + uVar19 + 0xa953fd4e + iVar2;
  uVar19 = (uVar19 >> 0x11 | uVar19 * 0x8000) + uVar29;
  uVar26 = uVar25 >> 0x16 | uVar25 * 0x400;
  uVar25 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar21 = uVar29 + 0xa953fd4e + iVar8 + ((~uVar26 | uVar21) ^ uVar19);
  uVar28 = (uVar21 >> 0x1b | uVar21 * 0x20) + uVar20;
  uVar21 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar20 = ((~uVar25 | uVar19) ^ uVar28) + uVar20 + 0xa953fd4e + iVar12;
  uVar20 = (uVar20 >> 0x15 | uVar20 * 0x800) + uVar26;
  uVar19 = ((~uVar21 | uVar28) ^ uVar20) + uVar26 + 0xa953fd4e + iVar10;
  uVar29 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar26 = (uVar19 >> 0x1a | uVar19 * 0x40) + uVar25;
  uVar19 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar25 + 0xa953fd4e + iVar15 + ((~uVar29 | uVar20) ^ uVar26);
  uVar25 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar21;
  uVar28 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = uVar21 + 0xa953fd4e + iVar5 + ((~uVar19 | uVar26) ^ uVar25);
  uVar21 = (uVar20 >> 0x13 | uVar20 * 0x2000) + uVar29;
  uVar20 = ((~uVar28 | uVar25) ^ uVar21) + uVar29 + 0xa953fd4e + iVar13;
  uVar26 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar19;
  uVar25 = uVar25 >> 0x16 | uVar25 * 0x400;
  uVar20 = ((~uVar25 | uVar21) ^ uVar26) + uVar19 + 0xa953fd4e + iVar17;
  uVar21 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar19 = (uVar20 >> 0x1b | uVar20 * 0x20) + uVar28;
  uVar30 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = uVar28 + 0xa953fd4e + iVar4 + ((~uVar21 | uVar26) ^ uVar19);
  uVar26 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar25;
  uVar20 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = ((~uVar30 | uVar19) ^ uVar26) + uVar25 + 0xa953fd4e + iVar6;
  uVar25 = (uVar19 >> 0x13 | uVar19 * 0x2000) + uVar21;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar19 = uVar21 + 0xa953fd4e + iVar11 + ((~uVar20 | uVar26) ^ uVar25);
  uVar21 = (uVar19 >> 0x12 | uVar19 * 0x4000) + uVar30;
  uVar19 = uVar30 + 0xa953fd4e + iVar14 + ((~uVar29 | uVar25) ^ uVar21);
  uVar26 = (uVar19 >> 0x15 | uVar19 * 0x800) + uVar20;
  uVar28 = uVar25 >> 0x16 | uVar25 * 0x400;
  uVar20 = ((~uVar28 | uVar21) ^ uVar26) + uVar20 + 0xa953fd4e + iVar9;
  uVar19 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar29;
  uVar21 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar31 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = uVar29 + 0xa953fd4e + iVar18 + ((~uVar21 | uVar26) ^ uVar19);
  uVar25 = (uVar20 >> 0x1b | uVar20 * 0x20) + uVar28;
  uVar20 = *(int *)(this + 0x10) + 0x50a28be6 + iVar8 + ((~uVar22 | uVar24) ^ uVar1);
  uVar29 = (uVar20 >> 0x18 | uVar20 * 0x100) + iVar3;
  uVar20 = iVar3 + 0x50a28be6 + iVar17 + ((~uVar23 | uVar1) ^ uVar29);
  uVar26 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar22;
  uVar20 = uVar22 + 0x50a28be6 + iVar10 + ((~uVar27 | uVar29) ^ uVar26);
  uVar29 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar30 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar23;
  uVar20 = uVar23 + 0x50a28be6 + iVar2 + ((~uVar29 | uVar26) ^ uVar30);
  uVar22 = (uVar20 >> 0x15 | uVar20 * 0x800) + uVar27;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar32 = uVar30 >> 0x16 | uVar30 * 0x400;
  uVar20 = ((~uVar26 | uVar30) ^ uVar22) + uVar27 + 0x50a28be6 + iVar12;
  uVar20 = (uVar20 >> 0x13 | uVar20 * 0x2000) + uVar29;
  uVar23 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = uVar29 + 0x50a28be6 + iVar5 + ((~uVar32 | uVar22) ^ uVar20);
  uVar29 = (uVar22 >> 0x11 | uVar22 * 0x8000) + uVar26;
  uVar22 = uVar26 + 0x50a28be6 + iVar14 + ((~uVar23 | uVar20) ^ uVar29);
  uVar26 = (uVar22 >> 0x11 | uVar22 * 0x8000) + uVar32;
  uVar22 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = ((~uVar22 | uVar29) ^ uVar26) + uVar32 + 0x50a28be6 + iVar7;
  uVar27 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar30 = (uVar20 >> 0x1b | uVar20 * 0x20) + uVar23;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = uVar23 + 0x50a28be6 + iVar16 + ((~uVar27 | uVar26) ^ uVar30);
  uVar23 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar22;
  uVar20 = ((~uVar29 | uVar30) ^ uVar23) + uVar22 + 0x50a28be6 + iVar9;
  uVar20 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar27;
  uVar30 = uVar30 >> 0x16 | uVar30 * 0x400;
  uVar22 = ((~uVar30 | uVar23) ^ uVar20) + uVar27 + 0x50a28be6 + iVar18;
  uVar23 = uVar23 >> 0x16 | uVar23 * 0x400;
  uVar27 = (uVar22 >> 0x18 | uVar22 * 0x100) + uVar29;
  uVar22 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar29 + 0x50a28be6 + iVar11 + ((~uVar23 | uVar20) ^ uVar27);
  uVar26 = (uVar20 >> 0x15 | uVar20 * 0x800) + uVar30;
  uVar20 = uVar30 + 0x50a28be6 + iVar4 + ((~uVar22 | uVar27) ^ uVar26);
  uVar30 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar23;
  uVar29 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar20 = ((~uVar29 | uVar26) ^ uVar30) + uVar23 + 0x50a28be6 + iVar13;
  uVar23 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar22;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar27 = uVar30 >> 0x16 | uVar30 * 0x400;
  uVar20 = uVar22 + 0x50a28be6 + iVar6 + ((~uVar26 | uVar30) ^ uVar23);
  uVar22 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar29;
  uVar20 = uVar29 + 0x50a28be6 + iVar15 + ((~uVar27 | uVar23) ^ uVar22);
  uVar20 = (uVar20 >> 0x1a | uVar20 * 0x40) + uVar26;
  uVar29 = uVar23 >> 0x16 | uVar23 * 0x400;
  uVar23 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = ((uVar20 ^ uVar22) & uVar29 ^ uVar22) + uVar26 + 0x5c4dd124 + iVar9;
  uVar26 = (uVar22 >> 0x17 | uVar22 * 0x200) + uVar27;
  uVar22 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar27 + 0x5c4dd124 + iVar14 + ((uVar26 ^ uVar20) & uVar23 ^ uVar20);
  uVar30 = (uVar20 >> 0x13 | uVar20 * 0x2000) + uVar29;
  uVar20 = uVar29 + 0x5c4dd124 + iVar6 + ((uVar30 ^ uVar26) & uVar22 ^ uVar26);
  uVar27 = (uVar20 >> 0x11 | uVar20 * 0x8000) + uVar23;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar32 = uVar30 >> 0x16 | uVar30 * 0x400;
  uVar20 = ((uVar27 ^ uVar30) & uVar29 ^ uVar30) + uVar23 + 0x5c4dd124 + iVar10;
  uVar20 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar22;
  uVar22 = uVar22 + 0x5c4dd124 + iVar2 + ((uVar20 ^ uVar27) & uVar32 ^ uVar27);
  uVar22 = (uVar22 >> 0x14 | uVar22 * 0x1000) + uVar29;
  uVar27 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar26 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar29 + 0x5c4dd124 + iVar16 + ((uVar22 ^ uVar20) & uVar27 ^ uVar20);
  uVar23 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar32;
  uVar30 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar20 = ((uVar23 ^ uVar22) & uVar26 ^ uVar22) + uVar32 + 0x5c4dd124 + iVar8;
  uVar22 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar27;
  uVar20 = uVar27 + 0x5c4dd124 + iVar13 + ((uVar22 ^ uVar23) & uVar30 ^ uVar23);
  uVar27 = (uVar20 >> 0x15 | uVar20 * 0x800) + uVar26;
  uVar29 = uVar23 >> 0x16 | uVar23 * 0x400;
  uVar23 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar20 = uVar26 + 0x5c4dd124 + iVar17 + ((uVar27 ^ uVar22) & uVar29 ^ uVar22);
  uVar26 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar30;
  uVar20 = ((uVar26 ^ uVar27) & uVar23 ^ uVar27) + uVar30 + 0x5c4dd124 + iVar18;
  uVar22 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar29;
  uVar27 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar20 = uVar29 + 0x5c4dd124 + iVar11 + ((uVar22 ^ uVar26) & uVar27 ^ uVar26);
  uVar20 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar23;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar26 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = uVar23 + 0x5c4dd124 + iVar15 + ((uVar20 ^ uVar22) & uVar29 ^ uVar22);
  uVar22 = (uVar22 >> 0x19 | uVar22 * 0x80) + uVar27;
  uVar23 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = ((uVar22 ^ uVar20) & uVar26 ^ uVar20) + uVar27 + 0x5c4dd124 + iVar7;
  uVar20 = (uVar20 >> 0x1a | uVar20 * 0x40) + uVar29;
  uVar29 = uVar29 + 0x5c4dd124 + iVar12 + ((uVar20 ^ uVar22) & uVar23 ^ uVar22);
  uVar27 = (uVar29 >> 0x11 | uVar29 * 0x8000) + uVar26;
  uVar29 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = uVar26 + 0x5c4dd124 + iVar4 + ((uVar27 ^ uVar20) & uVar29 ^ uVar20);
  uVar22 = (uVar22 >> 0x13 | uVar22 * 0x2000) + uVar23;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar23 = ((uVar22 ^ uVar27) & uVar20 ^ uVar27) + uVar23 + 0x5c4dd124 + iVar5;
  uVar32 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar26 = (uVar23 >> 0x15 | uVar23 * 0x800) + uVar29;
  uVar23 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = uVar29 + 0x6d703ef3 + iVar18 + ((~uVar22 | uVar26) ^ uVar32);
  uVar27 = (uVar22 >> 0x17 | uVar22 * 0x200) + uVar20;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = ((~uVar26 | uVar27) ^ uVar23) + uVar20 + 0x6d703ef3 + iVar8;
  uVar22 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar32;
  uVar30 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar20 = ((~uVar27 | uVar22) ^ uVar29) + uVar32 + 0x6d703ef3 + iVar4;
  uVar26 = (uVar20 >> 0x11 | uVar20 * 0x8000) + uVar23;
  uVar20 = uVar23 + 0x6d703ef3 + iVar6 + ((~uVar22 | uVar26) ^ uVar30);
  uVar23 = (uVar20 >> 0x15 | uVar20 * 0x800) + uVar29;
  uVar20 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar27 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar22 = ((~uVar26 | uVar23) ^ uVar20) + uVar29 + 0x6d703ef3 + iVar10;
  uVar22 = (uVar22 >> 0x18 | uVar22 * 0x100) + uVar30;
  uVar26 = uVar23 >> 0x16 | uVar23 * 0x400;
  uVar23 = ((~uVar23 | uVar22) ^ uVar27) + uVar30 + 0x6d703ef3 + iVar17;
  uVar29 = (uVar23 >> 0x1a | uVar23 * 0x40) + uVar20;
  uVar20 = uVar20 + 0x6d703ef3 + iVar9 + ((~uVar22 | uVar29) ^ uVar26);
  uVar20 = (uVar20 >> 0x1a | uVar20 * 0x40) + uVar27;
  uVar23 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = uVar27 + 0x6d703ef3 + iVar12 + ((~uVar29 | uVar20) ^ uVar23);
  uVar27 = (uVar22 >> 0x12 | uVar22 * 0x4000) + uVar26;
  uVar29 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar22 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = ((~uVar20 | uVar27) ^ uVar29) + uVar26 + 0x6d703ef3 + iVar14;
  uVar20 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar23;
  uVar23 = ((~uVar27 | uVar20) ^ uVar22) + uVar23 + 0x6d703ef3 + iVar11;
  uVar32 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar26 = (uVar23 >> 0x13 | uVar23 * 0x2000) + uVar29;
  uVar23 = uVar29 + 0x6d703ef3 + iVar15 + ((~uVar20 | uVar26) ^ uVar32);
  uVar27 = (uVar23 >> 0x1b | uVar23 * 0x20) + uVar22;
  uVar23 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = ((~uVar26 | uVar27) ^ uVar23) + uVar22 + 0x6d703ef3 + iVar5;
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar32;
  uVar30 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar22 = uVar32 + 0x6d703ef3 + iVar13 + ((~uVar27 | uVar20) ^ uVar29);
  uVar27 = (uVar22 >> 0x13 | uVar22 * 0x2000) + uVar23;
  uVar22 = uVar23 + 0x6d703ef3 + iVar2 + ((~uVar20 | uVar27) ^ uVar30);
  uVar22 = (uVar22 >> 0x13 | uVar22 * 0x2000) + uVar29;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar23 = ((~uVar27 | uVar22) ^ uVar20) + uVar29 + 0x6d703ef3 + iVar7;
  uVar26 = (uVar23 >> 0x19 | uVar23 * 0x80) + uVar30;
  uVar32 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar23 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = uVar30 + 0x6d703ef3 + iVar16 + ((~uVar22 | uVar26) ^ uVar32);
  uVar22 = (uVar22 >> 0x1b | uVar22 * 0x20) + uVar20;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = ((uVar26 ^ uVar23) & uVar22 ^ uVar23) + uVar20 + 0x7a6d76e9 + iVar11;
  uVar20 = (uVar20 >> 0x11 | uVar20 * 0x8000) + uVar32;
  uVar27 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = ((uVar22 ^ uVar29) & uVar20 ^ uVar29) + uVar32 + 0x7a6d76e9 + iVar9;
  uVar30 = (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar22 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar23 + 0x7a6d76e9 + iVar7 + ((uVar20 ^ uVar27) & uVar30 ^ uVar27);
  uVar20 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar29;
  uVar23 = ((uVar30 ^ uVar22) & uVar20 ^ uVar22) + uVar29 + 0x7a6d76e9 + iVar4;
  uVar26 = (uVar23 >> 0x15 | uVar23 * 0x800) + uVar27;
  uVar30 = uVar30 >> 0x16 | uVar30 * 0x400;
  uVar23 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = ((uVar20 ^ uVar30) & uVar26 ^ uVar30) + uVar27 + 0x7a6d76e9 + iVar6;
  uVar29 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar22;
  uVar20 = uVar22 + 0x7a6d76e9 + iVar14 + ((uVar26 ^ uVar23) & uVar29 ^ uVar23);
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar30;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar22 = uVar30 + 0x7a6d76e9 + iVar18 + ((uVar29 ^ uVar26) & uVar20 ^ uVar26);
  uVar27 = (uVar22 >> 0x1a | uVar22 * 0x40) + uVar23;
  uVar29 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar22 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = ((uVar20 ^ uVar29) & uVar27 ^ uVar29) + uVar23 + 0x7a6d76e9 + iVar2;
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar26;
  uVar23 = ((uVar27 ^ uVar22) & uVar20 ^ uVar22) + uVar26 + 0x7a6d76e9 + iVar8;
  uVar26 = (uVar23 >> 0x1a | uVar23 * 0x40) + uVar29;
  uVar32 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar23 = uVar29 + 0x7a6d76e9 + iVar15 + ((uVar20 ^ uVar32) & uVar26 ^ uVar32);
  uVar27 = (uVar23 >> 0x17 | uVar23 * 0x200) + uVar22;
  uVar23 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = ((uVar26 ^ uVar23) & uVar27 ^ uVar23) + uVar22 + 0x7a6d76e9 + iVar5;
  uVar20 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar32;
  uVar30 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar22 = uVar32 + 0x7a6d76e9 + iVar16 + ((uVar27 ^ uVar29) & uVar20 ^ uVar29);
  uVar26 = (uVar22 >> 0x17 | uVar22 * 0x200) + uVar23;
  uVar22 = uVar23 + 0x7a6d76e9 + iVar12 + ((uVar20 ^ uVar30) & uVar26 ^ uVar30);
  uVar22 = (uVar22 >> 0x14 | uVar22 * 0x1000) + uVar29;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar23 = ((uVar26 ^ uVar20) & uVar22 ^ uVar20) + uVar29 + 0x7a6d76e9 + iVar10;
  uVar27 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar26 = (uVar23 >> 0x1b | uVar23 * 0x20) + uVar30;
  uVar23 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = uVar30 + 0x7a6d76e9 + iVar13 + ((uVar22 ^ uVar27) & uVar26 ^ uVar27);
  uVar22 = (uVar22 >> 0x11 | uVar22 * 0x8000) + uVar20;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = ((uVar26 ^ uVar23) & uVar22 ^ uVar23) + uVar20 + 0x7a6d76e9 + iVar17;
  uVar20 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar27;
  uVar26 = (uVar22 ^ uVar29 ^ uVar20) + uVar27 + iVar15;
  uVar27 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar30 = (uVar26 >> 0x18 | uVar26 * 0x100) + uVar23;
  uVar22 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar23 + iVar18 + (uVar20 ^ uVar27 ^ uVar30);
  uVar20 = (uVar20 >> 0x1b | uVar20 * 0x20) + uVar29;
  uVar23 = uVar29 + iVar13 + (uVar30 ^ uVar22 ^ uVar20);
  uVar26 = (uVar23 >> 0x14 | uVar23 * 0x1000) + uVar27;
  uVar30 = uVar30 >> 0x16 | uVar30 * 0x400;
  uVar23 = uVar27 + iVar7 + (uVar30 ^ uVar20 ^ uVar26);
  uVar27 = (uVar23 >> 0x17 | uVar23 * 0x200) + uVar22;
  uVar23 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = uVar22 + iVar4 + (uVar26 ^ uVar23 ^ uVar27);
  uVar20 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar30;
  uVar22 = (uVar27 ^ uVar29 ^ uVar20) + uVar30 + iVar8;
  uVar26 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar27 = (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar22 = uVar23 + iVar11 + (uVar20 ^ uVar26 ^ uVar27);
  uVar22 = (uVar22 >> 0x12 | uVar22 * 0x4000) + uVar29;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar23 = uVar29 + iVar10 + (uVar27 ^ uVar20 ^ uVar22);
  uVar23 = (uVar23 >> 0x1a | uVar23 * 0x40) + uVar26;
  uVar27 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar26 = uVar26 + iVar9 + (uVar27 ^ uVar22 ^ uVar23);
  uVar29 = (uVar26 >> 0x18 | uVar26 * 0x100) + uVar20;
  uVar22 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar26 = uVar23 >> 0x16 | uVar23 * 0x400;
  uVar20 = uVar20 + iVar5 + (uVar23 ^ uVar22 ^ uVar29);
  uVar20 = (uVar20 >> 0x13 | uVar20 * 0x2000) + uVar27;
  uVar23 = (uVar29 ^ uVar26 ^ uVar20) + uVar27 + iVar16;
  uVar29 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar27 = (uVar23 >> 0x1a | uVar23 * 0x40) + uVar22;
  uVar22 = uVar22 + iVar17 + (uVar20 ^ uVar29 ^ uVar27);
  uVar22 = (uVar22 >> 0x1b | uVar22 * 0x20) + uVar26;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar23 = uVar26 + iVar2 + (uVar27 ^ uVar20 ^ uVar22);
  uVar23 = (uVar23 >> 0x11 | uVar23 * 0x8000) + uVar29;
  uVar27 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar26 = uVar29 + iVar6 + (uVar27 ^ uVar22 ^ uVar23);
  uVar29 = (uVar26 >> 0x13 | uVar26 * 0x2000) + uVar20;
  uVar22 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar26 = uVar23 >> 0x16 | uVar23 * 0x400;
  uVar20 = uVar20 + iVar12 + (uVar23 ^ uVar22 ^ uVar29);
  uVar20 = (uVar20 >> 0x15 | uVar20 * 0x800) + uVar27;
  *(uint *)(this + 0x14) = uVar24 + uVar26 + (uVar19 >> 0x16 | uVar19 * 0x400);
  *(uint *)(this + 0x18) = *(int *)(this + 0x1c) + uVar22 + uVar31;
  uVar24 = (uVar26 ^ uVar29 ^ uVar20) + uVar27 + iVar14;
  *(uint *)(this + 0x1c) =
       uVar22 + uVar21 + *(int *)(this + 0x20) + (uVar24 >> 0x15 | uVar24 * 0x800);
  uVar24 = ((~uVar31 | uVar19) ^ uVar25) + uVar28 + 0xa953fd4e + iVar16;
  *(uint *)(this + 0x20) =
       uVar21 + *(int *)(this + 0x10) + uVar20 + (uVar24 >> 0x1a | uVar24 * 0x40);
  *(uint *)(this + 0x10) = (uVar29 >> 0x16 | uVar29 * 0x400) + uVar1 + uVar25;
  return;
}

```

---

## Update

```asm
// === 087ab3e0 TaoCrypt::RIPEMD160::Update  [0x087ab3e0-0x87ab52f] ===
 87ab3e0:	55                   	push   %ebp
 87ab3e1:	89 e5                	mov    %esp,%ebp
 87ab3e3:	83 ec 38             	sub    $0x38,%esp
 87ab3e6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87ab3e9:	8b 55 0c             	mov    0xc(%ebp),%edx
 87ab3ec:	e8 07 7a f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87ab3f1:	81 c3 a7 17 bc 00    	add    $0xbc17a7,%ebx
 87ab3f7:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87ab3fa:	8b 75 08             	mov    0x8(%ebp),%esi
 87ab3fd:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87ab400:	8b 7d 10             	mov    0x10(%ebp),%edi
 87ab403:	8b 83 38 fa ff ff    	mov    -0x5c8(%ebx),%eax
 87ab409:	80 38 00             	cmpb   $0x0,(%eax)
 87ab40c:	0f 84 8e 00 00 00    	je     87ab4a0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj+0xc0>
 87ab412:	8d 46 30             	lea    0x30(%esi),%eax
 87ab415:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87ab418:	8b 46 04             	mov    0x4(%esi),%eax
 87ab41b:	85 c0                	test   %eax,%eax
 87ab41d:	75 39                	jne    87ab458 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj+0x78>
 87ab41f:	89 f8                	mov    %edi,%eax
 87ab421:	c1 e8 06             	shr    $0x6,%eax
 87ab424:	85 c0                	test   %eax,%eax
 87ab426:	0f 85 94 00 00 00    	jne    87ab4c0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj+0xe0>
 87ab42c:	85 ff                	test   %edi,%edi
 87ab42e:	74 19                	je     87ab449 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj+0x69>
 87ab430:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87ab433:	03 46 04             	add    0x4(%esi),%eax
 87ab436:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87ab43a:	89 54 24 04          	mov    %edx,0x4(%esp)
 87ab43e:	89 04 24             	mov    %eax,(%esp)
 87ab441:	e8 5a 24 8d ff       	call   807d8a0 <memcpy@plt>
 87ab446:	01 7e 04             	add    %edi,0x4(%esi)
 87ab449:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87ab44c:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87ab44f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87ab452:	89 ec                	mov    %ebp,%esp
 87ab454:	5d                   	pop    %ebp
 87ab455:	c3                   	ret
 87ab456:	66 90                	xchg   %ax,%ax
 87ab458:	b9 40 00 00 00       	mov    $0x40,%ecx
 87ab45d:	29 c1                	sub    %eax,%ecx
 87ab45f:	39 cf                	cmp    %ecx,%edi
 87ab461:	0f 46 cf             	cmovbe %edi,%ecx
 87ab464:	03 45 e4             	add    -0x1c(%ebp),%eax
 87ab467:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87ab46b:	89 54 24 04          	mov    %edx,0x4(%esp)
 87ab46f:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87ab472:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 87ab475:	89 04 24             	mov    %eax,(%esp)
 87ab478:	e8 23 24 8d ff       	call   807d8a0 <memcpy@plt>
 87ab47d:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87ab480:	8b 46 04             	mov    0x4(%esi),%eax
 87ab483:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87ab486:	29 cf                	sub    %ecx,%edi
 87ab488:	01 c8                	add    %ecx,%eax
 87ab48a:	01 ca                	add    %ecx,%edx
 87ab48c:	83 f8 40             	cmp    $0x40,%eax
 87ab48f:	89 46 04             	mov    %eax,0x4(%esi)
 87ab492:	74 6c                	je     87ab500 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj+0x120>
 87ab494:	85 c0                	test   %eax,%eax
 87ab496:	75 94                	jne    87ab42c <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj+0x4c>
 87ab498:	eb 85                	jmp    87ab41f <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj+0x3f>
 87ab49a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87ab4a0:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87ab4a4:	89 34 24             	mov    %esi,(%esp)
 87ab4a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 87ab4ab:	e8 c0 d7 fa ff       	call   8758c70 <_ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj>
 87ab4b0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87ab4b3:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87ab4b6:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87ab4b9:	89 ec                	mov    %ebp,%esp
 87ab4bb:	5d                   	pop    %ebp
 87ab4bc:	c3                   	ret
 87ab4bd:	8d 76 00             	lea    0x0(%esi),%esi
 87ab4c0:	89 54 24 04          	mov    %edx,0x4(%esp)
 87ab4c4:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87ab4c7:	89 44 24 08          	mov    %eax,0x8(%esp)
 87ab4cb:	89 45 dc             	mov    %eax,-0x24(%ebp)
 87ab4ce:	89 34 24             	mov    %esi,(%esp)
 87ab4d1:	e8 2a ee ff ff       	call   87aa300 <_ZN8TaoCrypt9RIPEMD16012AsmTransformEPKhj>
 87ab4d6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87ab4d9:	89 34 24             	mov    %esi,(%esp)
 87ab4dc:	c1 e0 06             	shl    $0x6,%eax
 87ab4df:	89 44 24 04          	mov    %eax,0x4(%esp)
 87ab4e3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 87ab4e6:	e8 05 d7 fa ff       	call   8758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>
 87ab4eb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87ab4ee:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87ab4f1:	29 c7                	sub    %eax,%edi
 87ab4f3:	01 c2                	add    %eax,%edx
 87ab4f5:	e9 32 ff ff ff       	jmp    87ab42c <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj+0x4c>
 87ab4fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87ab500:	8b 06                	mov    (%esi),%eax
 87ab502:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87ab505:	89 34 24             	mov    %esi,(%esp)
 87ab508:	ff 50 24             	call   *0x24(%eax)
 87ab50b:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
 87ab512:	00 
 87ab513:	89 34 24             	mov    %esi,(%esp)
 87ab516:	e8 d5 d6 fa ff       	call   8758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>
 87ab51b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87ab51e:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 87ab525:	e9 f5 fe ff ff       	jmp    87ab41f <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj+0x3f>
 87ab52a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::RIPEMD160::Update @ 0x87ab3e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::RIPEMD160::Update(RIPEMD160 *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*PTR_isMMX_0936c5d0 == '\0') {
    HASHwithTransform::Update((HASHwithTransform *)this,param_1,param_2);
    return;
  }
  iVar2 = *(int *)(this + 4);
  if (iVar2 != 0) {
    uVar1 = 0x40U - iVar2;
    if (param_2 <= 0x40U - iVar2) {
      uVar1 = param_2;
    }
    memcpy(this + iVar2 + 0x30,param_1,uVar1);
    param_2 = param_2 - uVar1;
    iVar2 = *(int *)(this + 4) + uVar1;
    param_1 = param_1 + uVar1;
    *(int *)(this + 4) = iVar2;
    if (iVar2 == 0x40) {
      (**(code **)(*(int *)this + 0x24))(this);
      HASHwithTransform::AddLength((HASHwithTransform *)this,0x40);
      *(undefined4 *)(this + 4) = 0;
    }
    else if (iVar2 != 0) goto LAB_087ab42c;
  }
  uVar1 = param_2 >> 6;
  if (uVar1 != 0) {
    AsmTransform(this,param_1,uVar1);
    HASHwithTransform::AddLength((HASHwithTransform *)this,uVar1 * 0x40);
    param_2 = param_2 + uVar1 * -0x40;
    param_1 = param_1 + uVar1 * 0x40;
  }
LAB_087ab42c:
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
// === 087ab620 TaoCrypt::RIPEMD160::operator=  [0x087ab620-0x87ab6ef] ===
 87ab620:	55                   	push   %ebp
 87ab621:	89 e5                	mov    %esp,%ebp
 87ab623:	81 ec 98 00 00 00    	sub    $0x98,%esp
 87ab629:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87ab62c:	8b 45 0c             	mov    0xc(%ebp),%eax
 87ab62f:	e8 c4 77 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87ab634:	81 c3 64 15 bc 00    	add    $0xbc1564,%ebx
 87ab63a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87ab63d:	8b 75 08             	mov    0x8(%ebp),%esi
 87ab640:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87ab643:	8d bd 78 ff ff ff    	lea    -0x88(%ebp),%edi
 87ab649:	89 44 24 04          	mov    %eax,0x4(%esp)
 87ab64d:	89 3c 24             	mov    %edi,(%esp)
 87ab650:	e8 db fe ff ff       	call   87ab530 <_ZN8TaoCrypt9RIPEMD160C1ERKS0_>
 87ab655:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87ab659:	89 34 24             	mov    %esi,(%esp)
 87ab65c:	e8 bf fc ff ff       	call   87ab320 <_ZN8TaoCrypt9RIPEMD1604SwapERS0_>
 87ab661:	89 f0                	mov    %esi,%eax
 87ab663:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87ab666:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87ab669:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87ab66c:	89 ec                	mov    %ebp,%esp
 87ab66e:	5d                   	pop    %ebp
 87ab66f:	c3                   	ret

087ab670 <_ZNK8TaoCrypt9RIPEMD16012getByteOrderEv>:
 87ab670:	55                   	push   %ebp
 87ab671:	31 c0                	xor    %eax,%eax
 87ab673:	89 e5                	mov    %esp,%ebp
 87ab675:	5d                   	pop    %ebp
 87ab676:	c3                   	ret
 87ab677:	90                   	nop
 87ab678:	90                   	nop
 87ab679:	90                   	nop
 87ab67a:	90                   	nop
 87ab67b:	90                   	nop
 87ab67c:	90                   	nop
 87ab67d:	90                   	nop
 87ab67e:	90                   	nop
 87ab67f:	90                   	nop

087ab680 <_ZNK8TaoCrypt9RIPEMD16012getBlockSizeEv>:
 87ab680:	55                   	push   %ebp
 87ab681:	b8 40 00 00 00       	mov    $0x40,%eax
 87ab686:	89 e5                	mov    %esp,%ebp
 87ab688:	5d                   	pop    %ebp
 87ab689:	c3                   	ret
 87ab68a:	90                   	nop
 87ab68b:	90                   	nop
 87ab68c:	90                   	nop
 87ab68d:	90                   	nop
 87ab68e:	90                   	nop
 87ab68f:	90                   	nop

087ab690 <_ZNK8TaoCrypt9RIPEMD16013getDigestSizeEv>:
 87ab690:	55                   	push   %ebp
 87ab691:	b8 14 00 00 00       	mov    $0x14,%eax
 87ab696:	89 e5                	mov    %esp,%ebp
 87ab698:	5d                   	pop    %ebp
 87ab699:	c3                   	ret
 87ab69a:	90                   	nop
 87ab69b:	90                   	nop
 87ab69c:	90                   	nop
 87ab69d:	90                   	nop
 87ab69e:	90                   	nop
 87ab69f:	90                   	nop

087ab6a0 <_ZNK8TaoCrypt9RIPEMD16010getPadSizeEv>:
 87ab6a0:	55                   	push   %ebp
 87ab6a1:	b8 38 00 00 00       	mov    $0x38,%eax
 87ab6a6:	89 e5                	mov    %esp,%ebp
 87ab6a8:	5d                   	pop    %ebp
 87ab6a9:	c3                   	ret
 87ab6aa:	90                   	nop
 87ab6ab:	90                   	nop
 87ab6ac:	90                   	nop
 87ab6ad:	90                   	nop
 87ab6ae:	90                   	nop
 87ab6af:	90                   	nop

087ab6b0 <_ZN8TaoCrypt9RIPEMD160D1Ev>:
 87ab6b0:	e8 0f 8f f7 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87ab6b5:	81 c1 e3 14 bc 00    	add    $0xbc14e3,%ecx
 87ab6bb:	55                   	push   %ebp
 87ab6bc:	89 e5                	mov    %esp,%ebp
 87ab6be:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 87ab6c4:	8d 50 08             	lea    0x8(%eax),%edx
 87ab6c7:	8b 45 08             	mov    0x8(%ebp),%eax
 87ab6ca:	89 10                	mov    %edx,(%eax)
 87ab6cc:	5d                   	pop    %ebp
 87ab6cd:	c3                   	ret
 87ab6ce:	90                   	nop
 87ab6cf:	90                   	nop

087ab6d0 <_ZN8TaoCrypt9RIPEMD160D0Ev>:
 87ab6d0:	e8 ef 8e f7 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87ab6d5:	81 c1 c3 14 bc 00    	add    $0xbc14c3,%ecx
 87ab6db:	55                   	push   %ebp
 87ab6dc:	89 e5                	mov    %esp,%ebp
 87ab6de:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 87ab6e4:	8d 50 08             	lea    0x8(%eax),%edx
 87ab6e7:	8b 45 08             	mov    0x8(%ebp),%eax
 87ab6ea:	89 10                	mov    %edx,(%eax)
 87ab6ec:	5d                   	pop    %ebp
 87ab6ed:	c3                   	ret
 87ab6ee:	90                   	nop
 87ab6ef:	90                   	nop

```

```c
// TaoCrypt::RIPEMD160::operator= @ 0x87ab620

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RIPEMD160::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::RIPEMD160 const&) */

RIPEMD160 * __thiscall TaoCrypt::RIPEMD160::operator=(RIPEMD160 *this,RIPEMD160 *param_1)

{
  RIPEMD160 local_8c [124];
  
  RIPEMD160(local_8c,param_1);
  Swap(this,local_8c);
  return this;
}

```

