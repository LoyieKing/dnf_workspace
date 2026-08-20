# Swap

`_ZN8TaoCrypt6SHA5124SwapERS0_`

`TaoCrypt::SHA512::Swap(TaoCrypt::SHA512&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA512` | `0x0876f950` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0876f950  _ZN8TaoCrypt6SHA5124SwapERS0_
#           TaoCrypt::SHA512::Swap(TaoCrypt::SHA512&)
# range [0x0876f950, 0x0876f9f9]
0876f950 +0x00:  push   %ebp
0876f951 +0x01:  mov    %esp,%ebp
0876f953 +0x03:  push   %edi
0876f954 +0x04:  mov    0x8(%ebp),%eax
0876f957 +0x07:  push   %esi
0876f958 +0x08:  mov    0xc(%ebp),%esi
0876f95b +0x0b:  mov    0x8(%eax),%edx
0876f95e +0x0e:  mov    0x8(%esi),%ecx
0876f961 +0x11:  mov    0x10(%esi),%edi
0876f964 +0x14:  mov    %ecx,0x8(%eax)
0876f967 +0x17:  mov    0xc(%esi),%ecx
0876f96a +0x1a:  mov    %edx,0x8(%esi)
0876f96d +0x1d:  mov    0xc(%eax),%edx
0876f970 +0x20:  mov    %edi,0x10(%eax)
0876f973 +0x23:  mov    %ecx,0xc(%eax)
0876f976 +0x26:  mov    0x4(%esi),%ecx
0876f979 +0x29:  mov    %edx,0xc(%esi)
0876f97c +0x2c:  mov    0x4(%eax),%edx
0876f97f +0x2f:  mov    %ecx,0x4(%eax)
0876f982 +0x32:  lea    0x10(%esi),%ecx
0876f985 +0x35:  mov    0x4(%ecx),%edi
0876f988 +0x38:  mov    %edx,0x4(%esi)
0876f98b +0x3b:  lea    0x10(%eax),%edx
0876f98e +0x3e:  add    $0x50,%eax
0876f991 +0x41:  add    $0x50,%esi
0876f994 +0x44:  mov    %edi,0x4(%edx)
0876f997 +0x47:  mov    0x8(%ecx),%edi
0876f99a +0x4a:  mov    %edi,0x8(%edx)
0876f99d +0x4d:  mov    0xc(%ecx),%edi
0876f9a0 +0x50:  mov    %edi,0xc(%edx)
0876f9a3 +0x53:  mov    0x10(%ecx),%edi
0876f9a6 +0x56:  mov    %edi,0x10(%edx)
0876f9a9 +0x59:  mov    0x14(%ecx),%edi
0876f9ac +0x5c:  mov    %edi,0x14(%edx)
0876f9af +0x5f:  mov    0x18(%ecx),%edi
0876f9b2 +0x62:  mov    %edi,0x18(%edx)
0876f9b5 +0x65:  mov    0x1c(%ecx),%edi
0876f9b8 +0x68:  mov    %edi,0x1c(%edx)
0876f9bb +0x6b:  mov    0x20(%ecx),%edi
0876f9be +0x6e:  mov    %edi,0x20(%edx)
0876f9c1 +0x71:  mov    0x24(%ecx),%edi
0876f9c4 +0x74:  mov    %edi,0x24(%edx)
0876f9c7 +0x77:  mov    0x28(%ecx),%edi
0876f9ca +0x7a:  mov    %edi,0x28(%edx)
0876f9cd +0x7d:  mov    0x2c(%ecx),%edi
0876f9d0 +0x80:  mov    %edi,0x2c(%edx)
0876f9d3 +0x83:  mov    0x30(%ecx),%edi
0876f9d6 +0x86:  mov    %edi,0x30(%edx)
0876f9d9 +0x89:  mov    0x34(%ecx),%edi
0876f9dc +0x8c:  mov    %edi,0x34(%edx)
0876f9df +0x8f:  mov    0x38(%ecx),%edi
0876f9e2 +0x92:  mov    %edi,0x38(%edx)
0876f9e5 +0x95:  mov    0x3c(%ecx),%ecx
0876f9e8 +0x98:  mov    %eax,%edi
0876f9ea +0x9a:  mov    %ecx,0x3c(%edx)
0876f9ed +0x9d:  mov    $0x20,%ecx
0876f9f2 +0xa2:  rep movsl %ds:(%esi),%es:(%edi)
0876f9f4 +0xa4:  pop    %esi
0876f9f5 +0xa5:  pop    %edi
0876f9f6 +0xa6:  pop    %ebp
0876f9f7 +0xa7:  ret
0876f9f8 +0xa8:  nop
0876f9f9 +0xa9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::SHA512::Swap @ 0x876f950

/* TaoCrypt::SHA512::Swap(TaoCrypt::SHA512&) */

void __thiscall TaoCrypt::SHA512::Swap(SHA512 *this,SHA512 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  SHA512 *pSVar5;
  SHA512 *pSVar6;
  
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
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  pSVar5 = param_1 + 0x50;
  pSVar6 = this + 0x50;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pSVar6 = *(undefined4 *)pSVar5;
    pSVar5 = pSVar5 + 4;
    pSVar6 = pSVar6 + 4;
  }
  return;
}
```
