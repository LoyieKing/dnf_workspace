# Swap

`_ZN8TaoCrypt3SHA4SwapERS0_`

`TaoCrypt::SHA::Swap(TaoCrypt::SHA&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA` | `0x0876fba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0876fba0  _ZN8TaoCrypt3SHA4SwapERS0_
#           TaoCrypt::SHA::Swap(TaoCrypt::SHA&)
# range [0x0876fba0, 0x0876fc5e]
0876fba0 +0x00:  push   %ebp
0876fba1 +0x01:  mov    %esp,%ebp
0876fba3 +0x03:  push   %edi
0876fba4 +0x04:  mov    0x8(%ebp),%ecx
0876fba7 +0x07:  push   %esi
0876fba8 +0x08:  mov    0xc(%ebp),%esi
0876fbab +0x0b:  mov    0x8(%ecx),%eax
0876fbae +0x0e:  mov    0x8(%esi),%edx
0876fbb1 +0x11:  mov    0x10(%esi),%edi
0876fbb4 +0x14:  mov    %edx,0x8(%ecx)
0876fbb7 +0x17:  mov    0xc(%esi),%edx
0876fbba +0x1a:  mov    %eax,0x8(%esi)
0876fbbd +0x1d:  mov    0xc(%ecx),%eax
0876fbc0 +0x20:  mov    %edi,0x10(%ecx)
0876fbc3 +0x23:  mov    %edx,0xc(%ecx)
0876fbc6 +0x26:  mov    0x4(%esi),%edx
0876fbc9 +0x29:  mov    %eax,0xc(%esi)
0876fbcc +0x2c:  mov    0x4(%ecx),%eax
0876fbcf +0x2f:  mov    %edx,0x4(%ecx)
0876fbd2 +0x32:  lea    0x10(%esi),%edx
0876fbd5 +0x35:  mov    0x4(%edx),%edi
0876fbd8 +0x38:  mov    %eax,0x4(%esi)
0876fbdb +0x3b:  lea    0x10(%ecx),%eax
0876fbde +0x3e:  mov    %edi,0x4(%eax)
0876fbe1 +0x41:  mov    0x8(%edx),%edi
0876fbe4 +0x44:  mov    %edi,0x8(%eax)
0876fbe7 +0x47:  mov    0xc(%edx),%edi
0876fbea +0x4a:  mov    %edi,0xc(%eax)
0876fbed +0x4d:  mov    0x10(%edx),%edx
0876fbf0 +0x50:  mov    %edx,0x10(%eax)
0876fbf3 +0x53:  lea    0x30(%esi),%edx
0876fbf6 +0x56:  mov    0x30(%esi),%esi
0876fbf9 +0x59:  lea    0x30(%ecx),%eax
0876fbfc +0x5c:  mov    %esi,0x30(%ecx)
0876fbff +0x5f:  mov    0x4(%edx),%ecx
0876fc02 +0x62:  mov    %ecx,0x4(%eax)
0876fc05 +0x65:  mov    0x8(%edx),%ecx
0876fc08 +0x68:  mov    %ecx,0x8(%eax)
0876fc0b +0x6b:  mov    0xc(%edx),%ecx
0876fc0e +0x6e:  mov    %ecx,0xc(%eax)
0876fc11 +0x71:  mov    0x10(%edx),%ecx
0876fc14 +0x74:  mov    %ecx,0x10(%eax)
0876fc17 +0x77:  mov    0x14(%edx),%ecx
0876fc1a +0x7a:  mov    %ecx,0x14(%eax)
0876fc1d +0x7d:  mov    0x18(%edx),%ecx
0876fc20 +0x80:  mov    %ecx,0x18(%eax)
0876fc23 +0x83:  mov    0x1c(%edx),%ecx
0876fc26 +0x86:  mov    %ecx,0x1c(%eax)
0876fc29 +0x89:  mov    0x20(%edx),%ecx
0876fc2c +0x8c:  mov    %ecx,0x20(%eax)
0876fc2f +0x8f:  mov    0x24(%edx),%ecx
0876fc32 +0x92:  mov    %ecx,0x24(%eax)
0876fc35 +0x95:  mov    0x28(%edx),%ecx
0876fc38 +0x98:  mov    %ecx,0x28(%eax)
0876fc3b +0x9b:  mov    0x2c(%edx),%ecx
0876fc3e +0x9e:  mov    %ecx,0x2c(%eax)
0876fc41 +0xa1:  mov    0x30(%edx),%ecx
0876fc44 +0xa4:  mov    %ecx,0x30(%eax)
0876fc47 +0xa7:  mov    0x34(%edx),%ecx
0876fc4a +0xaa:  mov    %ecx,0x34(%eax)
0876fc4d +0xad:  mov    0x38(%edx),%ecx
0876fc50 +0xb0:  mov    %ecx,0x38(%eax)
0876fc53 +0xb3:  mov    0x3c(%edx),%edx
0876fc56 +0xb6:  mov    %edx,0x3c(%eax)
0876fc59 +0xb9:  pop    %esi
0876fc5a +0xba:  pop    %edi
0876fc5b +0xbb:  pop    %ebp
0876fc5c +0xbc:  ret
0876fc5d +0xbd:  nop
0876fc5e +0xbe:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::SHA::Swap @ 0x876fba0

/* TaoCrypt::SHA::Swap(TaoCrypt::SHA&) */

void __thiscall TaoCrypt::SHA::Swap(SHA *this,SHA *param_1)

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
