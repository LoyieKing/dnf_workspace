# Swap

`_ZN8TaoCrypt6SHA3844SwapERS0_`

`TaoCrypt::SHA384::Swap(TaoCrypt::SHA384&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA384` | `0x0876f8c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0876f8c0  _ZN8TaoCrypt6SHA3844SwapERS0_
#           TaoCrypt::SHA384::Swap(TaoCrypt::SHA384&)
# range [0x0876f8c0, 0x0876f94f]
0876f8c0 +0x00:  push   %ebp
0876f8c1 +0x01:  mov    %esp,%ebp
0876f8c3 +0x03:  push   %edi
0876f8c4 +0x04:  mov    0x8(%ebp),%eax
0876f8c7 +0x07:  push   %esi
0876f8c8 +0x08:  mov    0xc(%ebp),%esi
0876f8cb +0x0b:  mov    0x8(%eax),%edx
0876f8ce +0x0e:  mov    0x8(%esi),%ecx
0876f8d1 +0x11:  mov    0x10(%esi),%edi
0876f8d4 +0x14:  mov    %ecx,0x8(%eax)
0876f8d7 +0x17:  mov    0xc(%esi),%ecx
0876f8da +0x1a:  mov    %edx,0x8(%esi)
0876f8dd +0x1d:  mov    0xc(%eax),%edx
0876f8e0 +0x20:  mov    %edi,0x10(%eax)
0876f8e3 +0x23:  mov    %ecx,0xc(%eax)
0876f8e6 +0x26:  mov    0x4(%esi),%ecx
0876f8e9 +0x29:  mov    %edx,0xc(%esi)
0876f8ec +0x2c:  mov    0x4(%eax),%edx
0876f8ef +0x2f:  mov    %ecx,0x4(%eax)
0876f8f2 +0x32:  lea    0x10(%esi),%ecx
0876f8f5 +0x35:  mov    0x4(%ecx),%edi
0876f8f8 +0x38:  mov    %edx,0x4(%esi)
0876f8fb +0x3b:  lea    0x10(%eax),%edx
0876f8fe +0x3e:  add    $0x50,%eax
0876f901 +0x41:  add    $0x50,%esi
0876f904 +0x44:  mov    %edi,0x4(%edx)
0876f907 +0x47:  mov    0x8(%ecx),%edi
0876f90a +0x4a:  mov    %edi,0x8(%edx)
0876f90d +0x4d:  mov    0xc(%ecx),%edi
0876f910 +0x50:  mov    %edi,0xc(%edx)
0876f913 +0x53:  mov    0x10(%ecx),%edi
0876f916 +0x56:  mov    %edi,0x10(%edx)
0876f919 +0x59:  mov    0x14(%ecx),%edi
0876f91c +0x5c:  mov    %edi,0x14(%edx)
0876f91f +0x5f:  mov    0x18(%ecx),%edi
0876f922 +0x62:  mov    %edi,0x18(%edx)
0876f925 +0x65:  mov    0x1c(%ecx),%edi
0876f928 +0x68:  mov    %edi,0x1c(%edx)
0876f92b +0x6b:  mov    0x20(%ecx),%edi
0876f92e +0x6e:  mov    %edi,0x20(%edx)
0876f931 +0x71:  mov    0x24(%ecx),%edi
0876f934 +0x74:  mov    %edi,0x24(%edx)
0876f937 +0x77:  mov    0x28(%ecx),%edi
0876f93a +0x7a:  mov    %edi,0x28(%edx)
0876f93d +0x7d:  mov    0x2c(%ecx),%ecx
0876f940 +0x80:  mov    %eax,%edi
0876f942 +0x82:  mov    %ecx,0x2c(%edx)
0876f945 +0x85:  mov    $0x20,%ecx
0876f94a +0x8a:  rep movsl %ds:(%esi),%es:(%edi)
0876f94c +0x8c:  pop    %esi
0876f94d +0x8d:  pop    %edi
0876f94e +0x8e:  pop    %ebp
0876f94f +0x8f:  ret
```

## 反编译 C

```c
// TaoCrypt::SHA384::Swap @ 0x876f8c0

/* TaoCrypt::SHA384::Swap(TaoCrypt::SHA384&) */

void __thiscall TaoCrypt::SHA384::Swap(SHA384 *this,SHA384 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  SHA384 *pSVar5;
  SHA384 *pSVar6;
  
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
