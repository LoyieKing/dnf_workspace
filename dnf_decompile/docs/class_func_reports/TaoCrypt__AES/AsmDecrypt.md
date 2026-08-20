# AsmDecrypt

`_ZNK8TaoCrypt3AES10AsmDecryptEPKhPhPv`

`TaoCrypt::AES::AsmDecrypt(unsigned char const*, unsigned char*, void*) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AES` | `0x087a1a90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1a90  _ZNK8TaoCrypt3AES10AsmDecryptEPKhPhPv
#           TaoCrypt::AES::AsmDecrypt(unsigned char const*, unsigned char*, void*) const
# range [0x087a1a90, 0x087a1ad3]
087a1a90 +0x00:  push   %ebp
087a1a91 +0x01:  mov    %esp,%ebp
087a1a93 +0x03:  movd   %edi,%mm3
087a1a96 +0x06:  movd   %ebx,%mm4
087a1a99 +0x09:  sub    $0x4,%esp
087a1a9c +0x0c:  movd   %ebp,%mm7
087a1a9f +0x0f:  mov    %esi,-0x4(%ebp)
087a1aa2 +0x12:  mov    0x8(%ebp),%ecx
087a1aa5 +0x15:  mov    0xc(%ebp),%esi
087a1aa8 +0x18:  mov    0x14(%ebp),%ebp
087a1aab +0x1b:  mov    0x38(%ecx),%edx
087a1aae +0x1e:  lea    0x3c(%ecx),%edi
087a1ab1 +0x21:  dec    %edx
087a1ab2 +0x22:  movd   %edi,%mm6
087a1ab5 +0x25:  movd   %edx,%mm5
087a1ab8 +0x28:  mov    (%esi),%eax
087a1aba +0x2a:  mov    0x4(%esi),%ebx
087a1abd +0x2d:  mov    0x8(%esi),%ecx
087a1ac0 +0x30:  mov    0xc(%esi),%edx
087a1ac3 +0x33:  bswap  %eax
087a1ac5 +0x35:  bswap  %ebx
087a1ac7 +0x37:  bswap  %ecx
087a1ac9 +0x39:  bswap  %edx
087a1acb +0x3b:  xor    (%edi),%eax
087a1acd +0x3d:  xor    0x4(%edi),%ebx
087a1ad0 +0x40:  xor    0x8(%edi),%ecx
087a1ad3 +0x43:  xor    0xc(%edi),%edx
```

## 反编译 C

```c
// TaoCrypt::AES::AsmDecrypt @ 0x87a1a90

/* TaoCrypt::AES::AsmDecrypt(unsigned char const*, unsigned char*, void*) const */

void __thiscall TaoCrypt::AES::AsmDecrypt(AES *this,uchar *param_1,uchar *param_2,void *param_3)

{
  AES *pAVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  AES *pAVar13;
  
  iVar6 = *(int *)(this + 0x38) + -1;
  uVar2 = *(uint *)param_1;
  uVar4 = *(uint *)(param_1 + 4);
  uVar7 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) ^
          *(uint *)(this + 0x3c);
  uVar8 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) ^
          *(uint *)(this + 0x40);
  uVar4 = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) ^
          *(uint *)(this + 0x44);
  uVar7 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) ^
          *(uint *)(this + 0x48);
  pAVar1 = this + 0x3c;
  do {
    pAVar13 = pAVar1;
    uVar9 = uVar2 >> 0x10;
    uVar10 = uVar8 >> 0x10;
    uVar3 = uVar2 >> 8;
    uVar11 = uVar4 >> 0x10;
    uVar5 = uVar8 >> 8;
    uVar12 = uVar2 & 0xff;
    uVar2 = *(uint *)((int)param_3 + (uVar2 >> 0x18) * 4) ^
            *(uint *)((int)param_3 + (uVar7 >> 0x10 & 0xff) * 4 + 0x400) ^
            *(uint *)((int)param_3 + (uVar4 >> 8 & 0xff) * 4 + 0x800) ^
            *(uint *)((int)param_3 + (uVar8 & 0xff) * 4 + 0xc00) ^ *(uint *)(pAVar13 + 0x10);
    uVar8 = *(uint *)((int)param_3 + (uVar8 >> 0x18) * 4) ^
            *(uint *)((int)param_3 + (uVar9 & 0xff) * 4 + 0x400) ^
            *(uint *)((int)param_3 + (uVar7 >> 8 & 0xff) * 4 + 0x800) ^
            *(uint *)((int)param_3 + (uVar4 & 0xff) * 4 + 0xc00) ^ *(uint *)(pAVar13 + 0x14);
    uVar4 = *(uint *)((int)param_3 + (uVar4 >> 0x18) * 4) ^
            *(uint *)((int)param_3 + (uVar10 & 0xff) * 4 + 0x400) ^
            *(uint *)((int)param_3 + (uVar3 & 0xff) * 4 + 0x800) ^
            *(uint *)((int)param_3 + (uVar7 & 0xff) * 4 + 0xc00) ^ *(uint *)(pAVar13 + 0x18);
    uVar7 = *(uint *)((int)param_3 + (uVar7 >> 0x18) * 4) ^
            *(uint *)((int)param_3 + (uVar11 & 0xff) * 4 + 0x400) ^
            *(uint *)((int)param_3 + (uVar5 & 0xff) * 4 + 0x800) ^
            *(uint *)((int)param_3 + uVar12 * 4 + 0xc00) ^ *(uint *)(pAVar13 + 0x1c);
    iVar6 = iVar6 + -1;
    pAVar1 = pAVar13 + 0x10;
  } while (iVar6 != 0);
  uVar3 = *(uint *)((int)param_3 + (uVar2 >> 0x18) * 4 + 0x1000) & 0xff000000 ^
          *(uint *)((int)param_3 + (uVar7 >> 0x10 & 0xff) * 4 + 0x1000) & 0xff0000 ^
          *(uint *)((int)param_3 + (uVar4 >> 8 & 0xff) * 4 + 0x1000) & 0xff00 ^
          *(uint *)((int)param_3 + (uVar8 & 0xff) * 4 + 0x1000) & 0xff ^ *(uint *)(pAVar13 + 0x20);
  uVar9 = *(uint *)((int)param_3 + (uVar8 >> 0x18) * 4 + 0x1000) & 0xff000000 ^
          *(uint *)((int)param_3 + (uVar2 >> 0x10 & 0xff) * 4 + 0x1000) & 0xff0000 ^
          *(uint *)((int)param_3 + (uVar7 >> 8 & 0xff) * 4 + 0x1000) & 0xff00 ^
          *(uint *)((int)param_3 + (uVar4 & 0xff) * 4 + 0x1000) & 0xff ^ *(uint *)(pAVar13 + 0x24);
  uVar5 = *(uint *)((int)param_3 + (uVar4 >> 0x18) * 4 + 0x1000) & 0xff000000 ^
          *(uint *)((int)param_3 + (uVar8 >> 0x10 & 0xff) * 4 + 0x1000) & 0xff0000 ^
          *(uint *)((int)param_3 + (uVar2 >> 8 & 0xff) * 4 + 0x1000) & 0xff00 ^
          *(uint *)((int)param_3 + (uVar7 & 0xff) * 4 + 0x1000) & 0xff ^ *(uint *)(pAVar13 + 0x28);
  uVar2 = *(uint *)((int)param_3 + (uVar7 >> 0x18) * 4 + 0x1000) & 0xff000000 ^
          *(uint *)((int)param_3 + (uVar4 >> 0x10 & 0xff) * 4 + 0x1000) & 0xff0000 ^
          *(uint *)((int)param_3 + (uVar8 >> 8 & 0xff) * 4 + 0x1000) & 0xff00 ^
          *(uint *)((int)param_3 + (uVar2 & 0xff) * 4 + 0x1000) & 0xff ^ *(uint *)(pAVar13 + 0x2c);
  *(uint *)param_2 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
  ;
  *(uint *)(param_2 + 4) =
       uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  *(uint *)(param_2 + 8) =
       uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  *(uint *)(param_2 + 0xc) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  return;
}
```
