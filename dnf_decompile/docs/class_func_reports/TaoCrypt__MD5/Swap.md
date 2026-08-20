# Swap

`_ZN8TaoCrypt3MD54SwapERS0_`

`TaoCrypt::MD5::Swap(TaoCrypt::MD5&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD5` | `0x08767040` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767040  _ZN8TaoCrypt3MD54SwapERS0_
#           TaoCrypt::MD5::Swap(TaoCrypt::MD5&)
# range [0x08767040, 0x087670f9]
08767040 +0x00:  push   %ebp
08767041 +0x01:  mov    %esp,%ebp
08767043 +0x03:  push   %edi
08767044 +0x04:  mov    0x8(%ebp),%ecx
08767047 +0x07:  push   %esi
08767048 +0x08:  mov    0xc(%ebp),%esi
0876704b +0x0b:  mov    0x8(%ecx),%eax
0876704e +0x0e:  mov    0x8(%esi),%edx
08767051 +0x11:  mov    0x10(%esi),%edi
08767054 +0x14:  mov    %edx,0x8(%ecx)
08767057 +0x17:  mov    0xc(%esi),%edx
0876705a +0x1a:  mov    %eax,0x8(%esi)
0876705d +0x1d:  mov    0xc(%ecx),%eax
08767060 +0x20:  mov    %edi,0x10(%ecx)
08767063 +0x23:  mov    %edx,0xc(%ecx)
08767066 +0x26:  mov    0x4(%esi),%edx
08767069 +0x29:  mov    %eax,0xc(%esi)
0876706c +0x2c:  mov    0x4(%ecx),%eax
0876706f +0x2f:  mov    %edx,0x4(%ecx)
08767072 +0x32:  lea    0x10(%esi),%edx
08767075 +0x35:  mov    0x4(%edx),%edi
08767078 +0x38:  mov    %eax,0x4(%esi)
0876707b +0x3b:  lea    0x10(%ecx),%eax
0876707e +0x3e:  mov    %edi,0x4(%eax)
08767081 +0x41:  mov    0x8(%edx),%edi
08767084 +0x44:  mov    %edi,0x8(%eax)
08767087 +0x47:  mov    0xc(%edx),%edx
0876708a +0x4a:  mov    %edx,0xc(%eax)
0876708d +0x4d:  lea    0x30(%esi),%edx
08767090 +0x50:  mov    0x30(%esi),%esi
08767093 +0x53:  lea    0x30(%ecx),%eax
08767096 +0x56:  mov    %esi,0x30(%ecx)
08767099 +0x59:  mov    0x4(%edx),%ecx
0876709c +0x5c:  mov    %ecx,0x4(%eax)
0876709f +0x5f:  mov    0x8(%edx),%ecx
087670a2 +0x62:  mov    %ecx,0x8(%eax)
087670a5 +0x65:  mov    0xc(%edx),%ecx
087670a8 +0x68:  mov    %ecx,0xc(%eax)
087670ab +0x6b:  mov    0x10(%edx),%ecx
087670ae +0x6e:  mov    %ecx,0x10(%eax)
087670b1 +0x71:  mov    0x14(%edx),%ecx
087670b4 +0x74:  mov    %ecx,0x14(%eax)
087670b7 +0x77:  mov    0x18(%edx),%ecx
087670ba +0x7a:  mov    %ecx,0x18(%eax)
087670bd +0x7d:  mov    0x1c(%edx),%ecx
087670c0 +0x80:  mov    %ecx,0x1c(%eax)
087670c3 +0x83:  mov    0x20(%edx),%ecx
087670c6 +0x86:  mov    %ecx,0x20(%eax)
087670c9 +0x89:  mov    0x24(%edx),%ecx
087670cc +0x8c:  mov    %ecx,0x24(%eax)
087670cf +0x8f:  mov    0x28(%edx),%ecx
087670d2 +0x92:  mov    %ecx,0x28(%eax)
087670d5 +0x95:  mov    0x2c(%edx),%ecx
087670d8 +0x98:  mov    %ecx,0x2c(%eax)
087670db +0x9b:  mov    0x30(%edx),%ecx
087670de +0x9e:  mov    %ecx,0x30(%eax)
087670e1 +0xa1:  mov    0x34(%edx),%ecx
087670e4 +0xa4:  mov    %ecx,0x34(%eax)
087670e7 +0xa7:  mov    0x38(%edx),%ecx
087670ea +0xaa:  mov    %ecx,0x38(%eax)
087670ed +0xad:  mov    0x3c(%edx),%edx
087670f0 +0xb0:  mov    %edx,0x3c(%eax)
087670f3 +0xb3:  pop    %esi
087670f4 +0xb4:  pop    %edi
087670f5 +0xb5:  pop    %ebp
087670f6 +0xb6:  ret
087670f7 +0xb7:  nop
087670f8 +0xb8:  nop
087670f9 +0xb9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::MD5::Swap @ 0x8767040

/* TaoCrypt::MD5::Swap(TaoCrypt::MD5&) */

void __thiscall TaoCrypt::MD5::Swap(MD5 *this,MD5 *param_1)

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
