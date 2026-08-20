# AsmProcess

`_ZN8TaoCrypt4ARC410AsmProcessEPhPKhj`

`TaoCrypt::ARC4::AsmProcess(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::ARC4` | `0x087a5990` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a5990  _ZN8TaoCrypt4ARC410AsmProcessEPhPKhj
#           TaoCrypt::ARC4::AsmProcess(unsigned char*, unsigned char const*, unsigned int)
# range [0x087a5990, 0x087a59c0]
087a5990 +0x00:  push   %ebp
087a5991 +0x01:  mov    %esp,%ebp
087a5993 +0x03:  movd   %edi,%mm3
087a5996 +0x06:  movd   %ebx,%mm4
087a5999 +0x09:  movd   %esi,%mm5
087a599c +0x0c:  movd   %ebp,%mm6
087a599f +0x0f:  mov    0x8(%ebp),%ecx
087a59a2 +0x12:  mov    0xc(%ebp),%edi
087a59a5 +0x15:  mov    0x10(%ebp),%esi
087a59a8 +0x18:  mov    0x14(%ebp),%ebp
087a59ab +0x1b:  sub    $0x4,%esp
087a59ae +0x1e:  cmp    $0x0,%ebp
087a59b1 +0x21:  je     087a5a03 <nothing>
087a59b3 +0x23:  mov    %ebp,(%esp)
087a59b6 +0x26:  movzbl 0x1(%ecx),%edx
087a59ba +0x2a:  lea    0x2(%ecx),%ebp
087a59bd +0x2d:  movzbl (%ecx),%ecx
087a59c0 +0x30:  movzbl 0x0(%ebp,%ecx,1),%eax
```

## 反编译 C

```c
// TaoCrypt::ARC4::AsmProcess @ 0x87a5990

/* TaoCrypt::ARC4::AsmProcess(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::ARC4::AsmProcess(ARC4 *this,uchar *param_1,uchar *param_2,uint param_3)

{
  ARC4 AVar1;
  ARC4 AVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_8;
  
  if (param_3 != 0) {
    local_8 = param_3;
    uVar7 = (uint)(byte)this[1];
    uVar5 = (uint)(byte)*this;
    AVar1 = this[uVar5 + 2];
    do {
      uVar4 = (uint)(byte)AVar1;
      uVar8 = uVar7 + uVar4;
      uVar7 = uVar8 & 0xff;
      AVar2 = this[uVar7 + 2];
      this[uVar5 + 2] = AVar2;
      this[uVar7 + 2] = AVar1;
      uVar6 = uVar5 + 1;
      uVar5 = uVar6 & 0xff;
      AVar1 = this[uVar5 + 2];
      bVar3 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = (byte)this[(uVar4 + (byte)AVar2 & 0xff) + 2] ^ bVar3;
      param_1 = param_1 + 1;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
    *this = SUB41(uVar6,0);
    this[1] = SUB41(uVar8,0);
  }
  return;
}
```
