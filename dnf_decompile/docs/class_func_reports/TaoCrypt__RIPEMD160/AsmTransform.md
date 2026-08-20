# AsmTransform

`_ZN8TaoCrypt9RIPEMD16012AsmTransformEPKhj`

`TaoCrypt::RIPEMD160::AsmTransform(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RIPEMD160` | `0x087aa300` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087aa300  _ZN8TaoCrypt9RIPEMD16012AsmTransformEPKhj
#           TaoCrypt::RIPEMD160::AsmTransform(unsigned char const*, unsigned int)
# range [0x087aa300, 0x087aa31e]
087aa300 +0x00:  push   %ebp
087aa301 +0x01:  mov    %esp,%ebp
087aa303 +0x03:  movd   %edi,%mm3
087aa306 +0x06:  movd   %ebx,%mm4
087aa309 +0x09:  movd   %esi,%mm5
087aa30c +0x0c:  movd   %ebp,%mm6
087aa30f +0x0f:  mov    0x8(%ebp),%ecx
087aa312 +0x12:  mov    0xc(%ebp),%edi
087aa315 +0x15:  mov    0x10(%ebp),%edx
087aa318 +0x18:  lea    0x10(%ecx),%esi
087aa31b +0x1b:  sub    $0x18,%esp
087aa31e +0x1e:  movd   %esi,%mm1
```

## 反编译 C

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
