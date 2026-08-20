# Swap

`_ZN8TaoCrypt9RIPEMD1604SwapERS0_`

`TaoCrypt::RIPEMD160::Swap(TaoCrypt::RIPEMD160&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RIPEMD160` | `0x087ab320` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087ab320  _ZN8TaoCrypt9RIPEMD1604SwapERS0_
#           TaoCrypt::RIPEMD160::Swap(TaoCrypt::RIPEMD160&)
# range [0x087ab320, 0x087ab3de]
087ab320 +0x00:  push   %ebp
087ab321 +0x01:  mov    %esp,%ebp
087ab323 +0x03:  push   %edi
087ab324 +0x04:  mov    0x8(%ebp),%ecx
087ab327 +0x07:  push   %esi
087ab328 +0x08:  mov    0xc(%ebp),%esi
087ab32b +0x0b:  mov    0x8(%ecx),%eax
087ab32e +0x0e:  mov    0x8(%esi),%edx
087ab331 +0x11:  mov    0x10(%esi),%edi
087ab334 +0x14:  mov    %edx,0x8(%ecx)
087ab337 +0x17:  mov    0xc(%esi),%edx
087ab33a +0x1a:  mov    %eax,0x8(%esi)
087ab33d +0x1d:  mov    0xc(%ecx),%eax
087ab340 +0x20:  mov    %edi,0x10(%ecx)
087ab343 +0x23:  mov    %edx,0xc(%ecx)
087ab346 +0x26:  mov    0x4(%esi),%edx
087ab349 +0x29:  mov    %eax,0xc(%esi)
087ab34c +0x2c:  mov    0x4(%ecx),%eax
087ab34f +0x2f:  mov    %edx,0x4(%ecx)
087ab352 +0x32:  lea    0x10(%esi),%edx
087ab355 +0x35:  mov    0x4(%edx),%edi
087ab358 +0x38:  mov    %eax,0x4(%esi)
087ab35b +0x3b:  lea    0x10(%ecx),%eax
087ab35e +0x3e:  mov    %edi,0x4(%eax)
087ab361 +0x41:  mov    0x8(%edx),%edi
087ab364 +0x44:  mov    %edi,0x8(%eax)
087ab367 +0x47:  mov    0xc(%edx),%edi
087ab36a +0x4a:  mov    %edi,0xc(%eax)
087ab36d +0x4d:  mov    0x10(%edx),%edx
087ab370 +0x50:  mov    %edx,0x10(%eax)
087ab373 +0x53:  lea    0x30(%esi),%edx
087ab376 +0x56:  mov    0x30(%esi),%esi
087ab379 +0x59:  lea    0x30(%ecx),%eax
087ab37c +0x5c:  mov    %esi,0x30(%ecx)
087ab37f +0x5f:  mov    0x4(%edx),%ecx
087ab382 +0x62:  mov    %ecx,0x4(%eax)
087ab385 +0x65:  mov    0x8(%edx),%ecx
087ab388 +0x68:  mov    %ecx,0x8(%eax)
087ab38b +0x6b:  mov    0xc(%edx),%ecx
087ab38e +0x6e:  mov    %ecx,0xc(%eax)
087ab391 +0x71:  mov    0x10(%edx),%ecx
087ab394 +0x74:  mov    %ecx,0x10(%eax)
087ab397 +0x77:  mov    0x14(%edx),%ecx
087ab39a +0x7a:  mov    %ecx,0x14(%eax)
087ab39d +0x7d:  mov    0x18(%edx),%ecx
087ab3a0 +0x80:  mov    %ecx,0x18(%eax)
087ab3a3 +0x83:  mov    0x1c(%edx),%ecx
087ab3a6 +0x86:  mov    %ecx,0x1c(%eax)
087ab3a9 +0x89:  mov    0x20(%edx),%ecx
087ab3ac +0x8c:  mov    %ecx,0x20(%eax)
087ab3af +0x8f:  mov    0x24(%edx),%ecx
087ab3b2 +0x92:  mov    %ecx,0x24(%eax)
087ab3b5 +0x95:  mov    0x28(%edx),%ecx
087ab3b8 +0x98:  mov    %ecx,0x28(%eax)
087ab3bb +0x9b:  mov    0x2c(%edx),%ecx
087ab3be +0x9e:  mov    %ecx,0x2c(%eax)
087ab3c1 +0xa1:  mov    0x30(%edx),%ecx
087ab3c4 +0xa4:  mov    %ecx,0x30(%eax)
087ab3c7 +0xa7:  mov    0x34(%edx),%ecx
087ab3ca +0xaa:  mov    %ecx,0x34(%eax)
087ab3cd +0xad:  mov    0x38(%edx),%ecx
087ab3d0 +0xb0:  mov    %ecx,0x38(%eax)
087ab3d3 +0xb3:  mov    0x3c(%edx),%edx
087ab3d6 +0xb6:  mov    %edx,0x3c(%eax)
087ab3d9 +0xb9:  pop    %esi
087ab3da +0xba:  pop    %edi
087ab3db +0xbb:  pop    %ebp
087ab3dc +0xbc:  ret
087ab3dd +0xbd:  nop
087ab3de +0xbe:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::RIPEMD160::Swap @ 0x87ab320

/* TaoCrypt::RIPEMD160::Swap(TaoCrypt::RIPEMD160&) */

void __thiscall TaoCrypt::RIPEMD160::Swap(RIPEMD160 *this,RIPEMD160 *param_1)

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
