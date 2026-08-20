# Swap

`_ZN8TaoCrypt3MD44SwapERS0_`

`TaoCrypt::MD4::Swap(TaoCrypt::MD4&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD4` | `0x08765f50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08765f50  _ZN8TaoCrypt3MD44SwapERS0_
#           TaoCrypt::MD4::Swap(TaoCrypt::MD4&)
# range [0x08765f50, 0x08766009]
08765f50 +0x00:  push   %ebp
08765f51 +0x01:  mov    %esp,%ebp
08765f53 +0x03:  push   %edi
08765f54 +0x04:  mov    0x8(%ebp),%ecx
08765f57 +0x07:  push   %esi
08765f58 +0x08:  mov    0xc(%ebp),%esi
08765f5b +0x0b:  mov    0x8(%ecx),%eax
08765f5e +0x0e:  mov    0x8(%esi),%edx
08765f61 +0x11:  mov    0x10(%esi),%edi
08765f64 +0x14:  mov    %edx,0x8(%ecx)
08765f67 +0x17:  mov    0xc(%esi),%edx
08765f6a +0x1a:  mov    %eax,0x8(%esi)
08765f6d +0x1d:  mov    0xc(%ecx),%eax
08765f70 +0x20:  mov    %edi,0x10(%ecx)
08765f73 +0x23:  mov    %edx,0xc(%ecx)
08765f76 +0x26:  mov    0x4(%esi),%edx
08765f79 +0x29:  mov    %eax,0xc(%esi)
08765f7c +0x2c:  mov    0x4(%ecx),%eax
08765f7f +0x2f:  mov    %edx,0x4(%ecx)
08765f82 +0x32:  lea    0x10(%esi),%edx
08765f85 +0x35:  mov    0x4(%edx),%edi
08765f88 +0x38:  mov    %eax,0x4(%esi)
08765f8b +0x3b:  lea    0x10(%ecx),%eax
08765f8e +0x3e:  mov    %edi,0x4(%eax)
08765f91 +0x41:  mov    0x8(%edx),%edi
08765f94 +0x44:  mov    %edi,0x8(%eax)
08765f97 +0x47:  mov    0xc(%edx),%edx
08765f9a +0x4a:  mov    %edx,0xc(%eax)
08765f9d +0x4d:  lea    0x30(%esi),%edx
08765fa0 +0x50:  mov    0x30(%esi),%esi
08765fa3 +0x53:  lea    0x30(%ecx),%eax
08765fa6 +0x56:  mov    %esi,0x30(%ecx)
08765fa9 +0x59:  mov    0x4(%edx),%ecx
08765fac +0x5c:  mov    %ecx,0x4(%eax)
08765faf +0x5f:  mov    0x8(%edx),%ecx
08765fb2 +0x62:  mov    %ecx,0x8(%eax)
08765fb5 +0x65:  mov    0xc(%edx),%ecx
08765fb8 +0x68:  mov    %ecx,0xc(%eax)
08765fbb +0x6b:  mov    0x10(%edx),%ecx
08765fbe +0x6e:  mov    %ecx,0x10(%eax)
08765fc1 +0x71:  mov    0x14(%edx),%ecx
08765fc4 +0x74:  mov    %ecx,0x14(%eax)
08765fc7 +0x77:  mov    0x18(%edx),%ecx
08765fca +0x7a:  mov    %ecx,0x18(%eax)
08765fcd +0x7d:  mov    0x1c(%edx),%ecx
08765fd0 +0x80:  mov    %ecx,0x1c(%eax)
08765fd3 +0x83:  mov    0x20(%edx),%ecx
08765fd6 +0x86:  mov    %ecx,0x20(%eax)
08765fd9 +0x89:  mov    0x24(%edx),%ecx
08765fdc +0x8c:  mov    %ecx,0x24(%eax)
08765fdf +0x8f:  mov    0x28(%edx),%ecx
08765fe2 +0x92:  mov    %ecx,0x28(%eax)
08765fe5 +0x95:  mov    0x2c(%edx),%ecx
08765fe8 +0x98:  mov    %ecx,0x2c(%eax)
08765feb +0x9b:  mov    0x30(%edx),%ecx
08765fee +0x9e:  mov    %ecx,0x30(%eax)
08765ff1 +0xa1:  mov    0x34(%edx),%ecx
08765ff4 +0xa4:  mov    %ecx,0x34(%eax)
08765ff7 +0xa7:  mov    0x38(%edx),%ecx
08765ffa +0xaa:  mov    %ecx,0x38(%eax)
08765ffd +0xad:  mov    0x3c(%edx),%edx
08766000 +0xb0:  mov    %edx,0x3c(%eax)
08766003 +0xb3:  pop    %esi
08766004 +0xb4:  pop    %edi
08766005 +0xb5:  pop    %ebp
08766006 +0xb6:  ret
08766007 +0xb7:  nop
08766008 +0xb8:  nop
08766009 +0xb9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::MD4::Swap @ 0x8765f50

/* TaoCrypt::MD4::Swap(TaoCrypt::MD4&) */

void __thiscall TaoCrypt::MD4::Swap(MD4 *this,MD4 *param_1)

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
