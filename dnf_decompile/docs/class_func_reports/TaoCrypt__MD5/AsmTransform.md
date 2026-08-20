# AsmTransform

`_ZN8TaoCrypt3MD512AsmTransformEPKhj`

`TaoCrypt::MD5::AsmTransform(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD5` | `0x08766210` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08766210  _ZN8TaoCrypt3MD512AsmTransformEPKhj
#           TaoCrypt::MD5::AsmTransform(unsigned char const*, unsigned int)
# range [0x08766210, 0x0876623b]
08766210 +0x00:  push   %ebp
08766211 +0x01:  mov    %esp,%ebp
08766213 +0x03:  movd   %edi,%mm3
08766216 +0x06:  movd   %ebx,%mm4
08766219 +0x09:  movd   %esi,%mm5
0876621c +0x0c:  movd   %ebp,%mm6
0876621f +0x0f:  mov    0x8(%ebp),%ecx
08766222 +0x12:  mov    0xc(%ebp),%edi
08766225 +0x15:  mov    0x10(%ebp),%eax
08766228 +0x18:  mov    %ecx,%esi
0876622a +0x1a:  add    $0x10,%esi
0876622d +0x1d:  movd   %eax,%mm2
08766230 +0x20:  movd   %esi,%mm1
08766233 +0x23:  mov    (%esi),%eax
08766235 +0x25:  mov    0x4(%esi),%ebx
08766238 +0x28:  mov    0x8(%esi),%ecx
0876623b +0x2b:  mov    0xc(%esi),%edx
```

## 反编译 C

```c
// TaoCrypt::MD5::AsmTransform @ 0x8766210

/* TaoCrypt::MD5::AsmTransform(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::MD5::AsmTransform(MD5 *this,uchar *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  MD5 *pMVar7;
  
  pMVar7 = this + 0x10;
  iVar1 = *(int *)pMVar7;
  uVar5 = *(uint *)(this + 0x14);
  uVar3 = *(uint *)(this + 0x18);
  uVar4 = *(uint *)(this + 0x1c);
  do {
    uVar2 = *(int *)param_1 + -0x28955b88 + iVar1 + ((uVar3 ^ uVar4) & uVar5 ^ uVar4);
    uVar2 = (uVar2 * 0x80 | uVar2 >> 0x19) + uVar5;
    uVar4 = *(int *)((int)param_1 + 4) + -0x173848aa + uVar4 + ((uVar5 ^ uVar3) & uVar2 ^ uVar3);
    uVar4 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar2;
    uVar3 = *(int *)((int)param_1 + 8) + 0x242070db + uVar3 + ((uVar2 ^ uVar5) & uVar4 ^ uVar5);
    uVar3 = (uVar3 * 0x20000 | uVar3 >> 0xf) + uVar4;
    uVar5 = *(int *)((int)param_1 + 0xc) + -0x3e423112 + uVar5 + ((uVar4 ^ uVar2) & uVar3 ^ uVar2);
    uVar6 = (uVar5 * 0x400000 | uVar5 >> 10) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x10) + -0xa83f051 + uVar2 + ((uVar3 ^ uVar4) & uVar6 ^ uVar4);
    uVar5 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar6;
    uVar4 = *(int *)((int)param_1 + 0x14) + 0x4787c62a + uVar4 + ((uVar6 ^ uVar3) & uVar5 ^ uVar3);
    uVar4 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x18) + -0x57cfb9ed + uVar3 + ((uVar5 ^ uVar6) & uVar4 ^ uVar6);
    uVar3 = (uVar3 * 0x20000 | uVar3 >> 0xf) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x1c) + -0x2b96aff + uVar6 + ((uVar4 ^ uVar5) & uVar3 ^ uVar5);
    uVar2 = (uVar2 * 0x400000 | uVar2 >> 10) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x20) + 0x698098d8 + uVar5 + ((uVar3 ^ uVar4) & uVar2 ^ uVar4);
    uVar5 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x24) + -0x74bb0851 + uVar4 + ((uVar2 ^ uVar3) & uVar5 ^ uVar3);
    uVar4 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x28) + -0xa44f + uVar3 + ((uVar5 ^ uVar2) & uVar4 ^ uVar2);
    uVar3 = (uVar3 * 0x20000 | uVar3 >> 0xf) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x2c) + -0x76a32842 + uVar2 + ((uVar4 ^ uVar5) & uVar3 ^ uVar5);
    uVar2 = (uVar2 * 0x400000 | uVar2 >> 10) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x30) + 0x6b901122 + uVar5 + ((uVar3 ^ uVar4) & uVar2 ^ uVar4);
    uVar5 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x34) + -0x2678e6d + uVar4 + ((uVar2 ^ uVar3) & uVar5 ^ uVar3);
    uVar4 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x38) + -0x5986bc72 + uVar3 + ((uVar5 ^ uVar2) & uVar4 ^ uVar2);
    uVar3 = (uVar3 * 0x20000 | uVar3 >> 0xf) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x3c) + 0x49b40821 + uVar2 + ((uVar4 ^ uVar5) & uVar3 ^ uVar5);
    uVar2 = (uVar2 * 0x400000 | uVar2 >> 10) + uVar3;
    uVar5 = *(int *)((int)param_1 + 4) + -0x9e1da9e + uVar5 + ((uVar3 ^ uVar2) & uVar4 ^ uVar3);
    uVar5 = (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x18) + -0x3fbf4cc0 + uVar4 + ((uVar2 ^ uVar5) & uVar3 ^ uVar2);
    uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x2c) + 0x265e5a51 + uVar3 + ((uVar5 ^ uVar4) & uVar2 ^ uVar5);
    uVar3 = (uVar3 * 0x4000 | uVar3 >> 0x12) + uVar4;
    uVar2 = *(int *)param_1 + -0x16493856 + uVar2 + ((uVar4 ^ uVar3) & uVar5 ^ uVar4);
    uVar2 = (uVar2 * 0x100000 | uVar2 >> 0xc) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x14) + -0x29d0efa3 + uVar5 + ((uVar3 ^ uVar2) & uVar4 ^ uVar3);
    uVar5 = (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x28) + 0x2441453 + uVar4 + ((uVar2 ^ uVar5) & uVar3 ^ uVar2);
    uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x3c) + -0x275e197f + uVar3 + ((uVar5 ^ uVar4) & uVar2 ^ uVar5);
    uVar3 = (uVar3 * 0x4000 | uVar3 >> 0x12) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x10) + -0x182c0438 + uVar2 + ((uVar4 ^ uVar3) & uVar5 ^ uVar4);
    uVar2 = (uVar2 * 0x100000 | uVar2 >> 0xc) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x24) + 0x21e1cde6 + uVar5 + ((uVar3 ^ uVar2) & uVar4 ^ uVar3);
    uVar5 = (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x38) + -0x3cc8f82a + uVar4 + ((uVar2 ^ uVar5) & uVar3 ^ uVar2);
    uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0xc) + -0xb2af279 + uVar3 + ((uVar5 ^ uVar4) & uVar2 ^ uVar5);
    uVar3 = (uVar3 * 0x4000 | uVar3 >> 0x12) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x20) + 0x455a14ed + uVar2 + ((uVar4 ^ uVar3) & uVar5 ^ uVar4);
    uVar2 = (uVar2 * 0x100000 | uVar2 >> 0xc) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x34) + -0x561c16fb + uVar5 + ((uVar3 ^ uVar2) & uVar4 ^ uVar3);
    uVar5 = (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar2;
    uVar4 = *(int *)((int)param_1 + 8) + -0x3105c08 + uVar4 + ((uVar2 ^ uVar5) & uVar3 ^ uVar2);
    uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x1c) + 0x676f02d9 + uVar3 + ((uVar5 ^ uVar4) & uVar2 ^ uVar5);
    uVar3 = (uVar3 * 0x4000 | uVar3 >> 0x12) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x30) + -0x72d5b376 + uVar2 + ((uVar4 ^ uVar3) & uVar5 ^ uVar4);
    uVar2 = (uVar2 * 0x100000 | uVar2 >> 0xc) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x14) + -0x5c6be + uVar5 + (uVar3 ^ uVar4 ^ uVar2);
    uVar5 = (uVar5 * 0x10 | uVar5 >> 0x1c) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x20) + -0x788e097f + uVar4 + (uVar2 ^ uVar3 ^ uVar5);
    uVar4 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x2c) + 0x6d9d6122 + uVar3 + (uVar5 ^ uVar2 ^ uVar4);
    uVar3 = (uVar3 * 0x10000 | uVar3 >> 0x10) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x38) + -0x21ac7f4 + uVar2 + (uVar4 ^ uVar5 ^ uVar3);
    uVar2 = (uVar2 * 0x800000 | uVar2 >> 9) + uVar3;
    uVar5 = *(int *)((int)param_1 + 4) + -0x5b4115bc + uVar5 + (uVar3 ^ uVar4 ^ uVar2);
    uVar5 = (uVar5 * 0x10 | uVar5 >> 0x1c) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x10) + 0x4bdecfa9 + uVar4 + (uVar2 ^ uVar3 ^ uVar5);
    uVar4 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x1c) + -0x944b4a0 + uVar3 + (uVar5 ^ uVar2 ^ uVar4);
    uVar3 = (uVar3 * 0x10000 | uVar3 >> 0x10) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x28) + -0x41404390 + uVar2 + (uVar4 ^ uVar5 ^ uVar3);
    uVar2 = (uVar2 * 0x800000 | uVar2 >> 9) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x34) + 0x289b7ec6 + uVar5 + (uVar3 ^ uVar4 ^ uVar2);
    uVar5 = (uVar5 * 0x10 | uVar5 >> 0x1c) + uVar2;
    uVar4 = *(int *)param_1 + -0x155ed806 + uVar4 + (uVar2 ^ uVar3 ^ uVar5);
    uVar4 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0xc) + -0x2b10cf7b + uVar3 + (uVar5 ^ uVar2 ^ uVar4);
    uVar3 = (uVar3 * 0x10000 | uVar3 >> 0x10) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x18) + 0x4881d05 + uVar2 + (uVar4 ^ uVar5 ^ uVar3);
    uVar2 = (uVar2 * 0x800000 | uVar2 >> 9) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x24) + -0x262b2fc7 + uVar5 + (uVar3 ^ uVar4 ^ uVar2);
    uVar5 = (uVar5 * 0x10 | uVar5 >> 0x1c) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x30) + -0x1924661b + uVar4 + (uVar2 ^ uVar3 ^ uVar5);
    uVar4 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x3c) + 0x1fa27cf8 + uVar3 + (uVar5 ^ uVar2 ^ uVar4);
    uVar3 = (uVar3 * 0x10000 | uVar3 >> 0x10) + uVar4;
    uVar2 = *(int *)((int)param_1 + 8) + -0x3b53a99b + uVar2 + (uVar4 ^ uVar5 ^ uVar3);
    uVar2 = (uVar2 * 0x800000 | uVar2 >> 9) + uVar3;
    uVar5 = *(int *)param_1 + -0xbd6ddbc + uVar5 + ((~uVar4 | uVar2) ^ uVar3);
    uVar5 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x1c) + 0x432aff97 + uVar4 + ((~uVar3 | uVar5) ^ uVar2);
    uVar4 = (uVar4 * 0x400 | uVar4 >> 0x16) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x38) + -0x546bdc59 + uVar3 + ((~uVar2 | uVar4) ^ uVar5);
    uVar3 = (uVar3 * 0x8000 | uVar3 >> 0x11) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x14) + -0x36c5fc7 + uVar2 + ((~uVar5 | uVar3) ^ uVar4);
    uVar2 = (uVar2 * 0x200000 | uVar2 >> 0xb) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x30) + 0x655b59c3 + uVar5 + ((~uVar4 | uVar2) ^ uVar3);
    uVar5 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0xc) + -0x70f3336e + uVar4 + ((~uVar3 | uVar5) ^ uVar2);
    uVar4 = (uVar4 * 0x400 | uVar4 >> 0x16) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x28) + -0x100b83 + uVar3 + ((~uVar2 | uVar4) ^ uVar5);
    uVar3 = (uVar3 * 0x8000 | uVar3 >> 0x11) + uVar4;
    uVar2 = *(int *)((int)param_1 + 4) + -0x7a7ba22f + uVar2 + ((~uVar5 | uVar3) ^ uVar4);
    uVar2 = (uVar2 * 0x200000 | uVar2 >> 0xb) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x20) + 0x6fa87e4f + uVar5 + ((~uVar4 | uVar2) ^ uVar3);
    uVar5 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x3c) + -0x1d31920 + uVar4 + ((~uVar3 | uVar5) ^ uVar2);
    uVar4 = (uVar4 * 0x400 | uVar4 >> 0x16) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x18) + -0x5cfebcec + uVar3 + ((~uVar2 | uVar4) ^ uVar5);
    uVar3 = (uVar3 * 0x8000 | uVar3 >> 0x11) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x34) + 0x4e0811a1 + uVar2 + ((~uVar5 | uVar3) ^ uVar4);
    uVar2 = (uVar2 * 0x200000 | uVar2 >> 0xb) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x10) + -0x8ac817e + uVar5 + ((~uVar4 | uVar2) ^ uVar3);
    uVar5 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x2c) + -0x42c50dcb + uVar4 + ((~uVar3 | uVar5) ^ uVar2);
    uVar4 = (uVar4 * 0x400 | uVar4 >> 0x16) + uVar5;
    uVar3 = *(int *)((int)param_1 + 8) + 0x2ad7d2bb + uVar3 + ((~uVar2 | uVar4) ^ uVar5);
    uVar3 = (uVar3 * 0x8000 | uVar3 >> 0x11) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x24) + -0x14792c6f + uVar2 + ((~uVar5 | uVar3) ^ uVar4);
    *(uint *)pMVar7 = *(int *)pMVar7 + uVar5;
    *(uint *)(this + 0x14) = *(int *)(this + 0x14) + (uVar2 * 0x200000 | uVar2 >> 0xb) + uVar3;
    *(uint *)(this + 0x18) = *(int *)(this + 0x18) + uVar3;
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar4;
    param_1 = (uchar *)((int)param_1 + 0x40);
    iVar1 = *(int *)pMVar7;
    uVar5 = *(uint *)(this + 0x14);
    uVar3 = *(uint *)(this + 0x18);
    uVar4 = *(uint *)(this + 0x1c);
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}
```
