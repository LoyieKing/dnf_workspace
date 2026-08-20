# Swap

`_ZN8TaoCrypt6SHA2244SwapERS0_`

`TaoCrypt::SHA224::Swap(TaoCrypt::SHA224&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA224` | `0x0876fa00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0876fa00  _ZN8TaoCrypt6SHA2244SwapERS0_
#           TaoCrypt::SHA224::Swap(TaoCrypt::SHA224&)
# range [0x0876fa00, 0x0876faca]
0876fa00 +0x00:  push   %ebp
0876fa01 +0x01:  mov    %esp,%ebp
0876fa03 +0x03:  push   %edi
0876fa04 +0x04:  mov    0x8(%ebp),%ecx
0876fa07 +0x07:  push   %esi
0876fa08 +0x08:  mov    0xc(%ebp),%esi
0876fa0b +0x0b:  mov    0x8(%ecx),%eax
0876fa0e +0x0e:  mov    0x8(%esi),%edx
0876fa11 +0x11:  mov    0x10(%esi),%edi
0876fa14 +0x14:  mov    %edx,0x8(%ecx)
0876fa17 +0x17:  mov    0xc(%esi),%edx
0876fa1a +0x1a:  mov    %eax,0x8(%esi)
0876fa1d +0x1d:  mov    0xc(%ecx),%eax
0876fa20 +0x20:  mov    %edi,0x10(%ecx)
0876fa23 +0x23:  mov    %edx,0xc(%ecx)
0876fa26 +0x26:  mov    0x4(%esi),%edx
0876fa29 +0x29:  mov    %eax,0xc(%esi)
0876fa2c +0x2c:  mov    0x4(%ecx),%eax
0876fa2f +0x2f:  mov    %edx,0x4(%ecx)
0876fa32 +0x32:  lea    0x10(%esi),%edx
0876fa35 +0x35:  mov    0x4(%edx),%edi
0876fa38 +0x38:  mov    %eax,0x4(%esi)
0876fa3b +0x3b:  lea    0x10(%ecx),%eax
0876fa3e +0x3e:  mov    %edi,0x4(%eax)
0876fa41 +0x41:  mov    0x8(%edx),%edi
0876fa44 +0x44:  mov    %edi,0x8(%eax)
0876fa47 +0x47:  mov    0xc(%edx),%edi
0876fa4a +0x4a:  mov    %edi,0xc(%eax)
0876fa4d +0x4d:  mov    0x10(%edx),%edi
0876fa50 +0x50:  mov    %edi,0x10(%eax)
0876fa53 +0x53:  mov    0x14(%edx),%edi
0876fa56 +0x56:  mov    %edi,0x14(%eax)
0876fa59 +0x59:  mov    0x18(%edx),%edx
0876fa5c +0x5c:  mov    %edx,0x18(%eax)
0876fa5f +0x5f:  lea    0x30(%esi),%edx
0876fa62 +0x62:  mov    0x30(%esi),%esi
0876fa65 +0x65:  lea    0x30(%ecx),%eax
0876fa68 +0x68:  mov    %esi,0x30(%ecx)
0876fa6b +0x6b:  mov    0x4(%edx),%ecx
0876fa6e +0x6e:  mov    %ecx,0x4(%eax)
0876fa71 +0x71:  mov    0x8(%edx),%ecx
0876fa74 +0x74:  mov    %ecx,0x8(%eax)
0876fa77 +0x77:  mov    0xc(%edx),%ecx
0876fa7a +0x7a:  mov    %ecx,0xc(%eax)
0876fa7d +0x7d:  mov    0x10(%edx),%ecx
0876fa80 +0x80:  mov    %ecx,0x10(%eax)
0876fa83 +0x83:  mov    0x14(%edx),%ecx
0876fa86 +0x86:  mov    %ecx,0x14(%eax)
0876fa89 +0x89:  mov    0x18(%edx),%ecx
0876fa8c +0x8c:  mov    %ecx,0x18(%eax)
0876fa8f +0x8f:  mov    0x1c(%edx),%ecx
0876fa92 +0x92:  mov    %ecx,0x1c(%eax)
0876fa95 +0x95:  mov    0x20(%edx),%ecx
0876fa98 +0x98:  mov    %ecx,0x20(%eax)
0876fa9b +0x9b:  mov    0x24(%edx),%ecx
0876fa9e +0x9e:  mov    %ecx,0x24(%eax)
0876faa1 +0xa1:  mov    0x28(%edx),%ecx
0876faa4 +0xa4:  mov    %ecx,0x28(%eax)
0876faa7 +0xa7:  mov    0x2c(%edx),%ecx
0876faaa +0xaa:  mov    %ecx,0x2c(%eax)
0876faad +0xad:  mov    0x30(%edx),%ecx
0876fab0 +0xb0:  mov    %ecx,0x30(%eax)
0876fab3 +0xb3:  mov    0x34(%edx),%ecx
0876fab6 +0xb6:  mov    %ecx,0x34(%eax)
0876fab9 +0xb9:  mov    0x38(%edx),%ecx
0876fabc +0xbc:  mov    %ecx,0x38(%eax)
0876fabf +0xbf:  mov    0x3c(%edx),%edx
0876fac2 +0xc2:  mov    %edx,0x3c(%eax)
0876fac5 +0xc5:  pop    %esi
0876fac6 +0xc6:  pop    %edi
0876fac7 +0xc7:  pop    %ebp
0876fac8 +0xc8:  ret
0876fac9 +0xc9:  nop
0876faca +0xca:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::SHA224::Swap @ 0x876fa00

/* TaoCrypt::SHA224::Swap(TaoCrypt::SHA224&) */

void __thiscall TaoCrypt::SHA224::Swap(SHA224 *this,SHA224 *param_1)

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
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
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
