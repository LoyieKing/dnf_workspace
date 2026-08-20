# Swap

`_ZN8TaoCrypt6SHA2564SwapERS0_`

`TaoCrypt::SHA256::Swap(TaoCrypt::SHA256&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA256` | `0x0876fad0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0876fad0  _ZN8TaoCrypt6SHA2564SwapERS0_
#           TaoCrypt::SHA256::Swap(TaoCrypt::SHA256&)
# range [0x0876fad0, 0x0876fb9f]
0876fad0 +0x00:  push   %ebp
0876fad1 +0x01:  mov    %esp,%ebp
0876fad3 +0x03:  push   %edi
0876fad4 +0x04:  mov    0x8(%ebp),%ecx
0876fad7 +0x07:  push   %esi
0876fad8 +0x08:  mov    0xc(%ebp),%esi
0876fadb +0x0b:  mov    0x8(%ecx),%eax
0876fade +0x0e:  mov    0x8(%esi),%edx
0876fae1 +0x11:  mov    0x10(%esi),%edi
0876fae4 +0x14:  mov    %edx,0x8(%ecx)
0876fae7 +0x17:  mov    0xc(%esi),%edx
0876faea +0x1a:  mov    %eax,0x8(%esi)
0876faed +0x1d:  mov    0xc(%ecx),%eax
0876faf0 +0x20:  mov    %edi,0x10(%ecx)
0876faf3 +0x23:  mov    %edx,0xc(%ecx)
0876faf6 +0x26:  mov    0x4(%esi),%edx
0876faf9 +0x29:  mov    %eax,0xc(%esi)
0876fafc +0x2c:  mov    0x4(%ecx),%eax
0876faff +0x2f:  mov    %edx,0x4(%ecx)
0876fb02 +0x32:  lea    0x10(%esi),%edx
0876fb05 +0x35:  mov    0x4(%edx),%edi
0876fb08 +0x38:  mov    %eax,0x4(%esi)
0876fb0b +0x3b:  lea    0x10(%ecx),%eax
0876fb0e +0x3e:  mov    %edi,0x4(%eax)
0876fb11 +0x41:  mov    0x8(%edx),%edi
0876fb14 +0x44:  mov    %edi,0x8(%eax)
0876fb17 +0x47:  mov    0xc(%edx),%edi
0876fb1a +0x4a:  mov    %edi,0xc(%eax)
0876fb1d +0x4d:  mov    0x10(%edx),%edi
0876fb20 +0x50:  mov    %edi,0x10(%eax)
0876fb23 +0x53:  mov    0x14(%edx),%edi
0876fb26 +0x56:  mov    %edi,0x14(%eax)
0876fb29 +0x59:  mov    0x18(%edx),%edi
0876fb2c +0x5c:  mov    %edi,0x18(%eax)
0876fb2f +0x5f:  mov    0x1c(%edx),%edx
0876fb32 +0x62:  mov    %edx,0x1c(%eax)
0876fb35 +0x65:  lea    0x30(%esi),%edx
0876fb38 +0x68:  mov    0x30(%esi),%esi
0876fb3b +0x6b:  lea    0x30(%ecx),%eax
0876fb3e +0x6e:  mov    %esi,0x30(%ecx)
0876fb41 +0x71:  mov    0x4(%edx),%ecx
0876fb44 +0x74:  mov    %ecx,0x4(%eax)
0876fb47 +0x77:  mov    0x8(%edx),%ecx
0876fb4a +0x7a:  mov    %ecx,0x8(%eax)
0876fb4d +0x7d:  mov    0xc(%edx),%ecx
0876fb50 +0x80:  mov    %ecx,0xc(%eax)
0876fb53 +0x83:  mov    0x10(%edx),%ecx
0876fb56 +0x86:  mov    %ecx,0x10(%eax)
0876fb59 +0x89:  mov    0x14(%edx),%ecx
0876fb5c +0x8c:  mov    %ecx,0x14(%eax)
0876fb5f +0x8f:  mov    0x18(%edx),%ecx
0876fb62 +0x92:  mov    %ecx,0x18(%eax)
0876fb65 +0x95:  mov    0x1c(%edx),%ecx
0876fb68 +0x98:  mov    %ecx,0x1c(%eax)
0876fb6b +0x9b:  mov    0x20(%edx),%ecx
0876fb6e +0x9e:  mov    %ecx,0x20(%eax)
0876fb71 +0xa1:  mov    0x24(%edx),%ecx
0876fb74 +0xa4:  mov    %ecx,0x24(%eax)
0876fb77 +0xa7:  mov    0x28(%edx),%ecx
0876fb7a +0xaa:  mov    %ecx,0x28(%eax)
0876fb7d +0xad:  mov    0x2c(%edx),%ecx
0876fb80 +0xb0:  mov    %ecx,0x2c(%eax)
0876fb83 +0xb3:  mov    0x30(%edx),%ecx
0876fb86 +0xb6:  mov    %ecx,0x30(%eax)
0876fb89 +0xb9:  mov    0x34(%edx),%ecx
0876fb8c +0xbc:  mov    %ecx,0x34(%eax)
0876fb8f +0xbf:  mov    0x38(%edx),%ecx
0876fb92 +0xc2:  mov    %ecx,0x38(%eax)
0876fb95 +0xc5:  mov    0x3c(%edx),%edx
0876fb98 +0xc8:  mov    %edx,0x3c(%eax)
0876fb9b +0xcb:  pop    %esi
0876fb9c +0xcc:  pop    %edi
0876fb9d +0xcd:  pop    %ebp
0876fb9e +0xce:  ret
0876fb9f +0xcf:  nop
```

## 反编译 C

```c
// TaoCrypt::SHA256::Swap @ 0x876fad0

/* TaoCrypt::SHA256::Swap(TaoCrypt::SHA256&) */

void __thiscall TaoCrypt::SHA256::Swap(SHA256 *this,SHA256 *param_1)

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
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
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
