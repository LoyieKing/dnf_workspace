# RIPEMD160

`_ZN8TaoCrypt9RIPEMD160C1ERKS0_`

`TaoCrypt::RIPEMD160::RIPEMD160(TaoCrypt::RIPEMD160 const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RIPEMD160` | `0x087ab530` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087ab530  _ZN8TaoCrypt9RIPEMD160C1ERKS0_
#           TaoCrypt::RIPEMD160::RIPEMD160(TaoCrypt::RIPEMD160 const&)
# range [0x087ab530, 0x087ab619]
087ab530 +0x00:  push   %ebp
087ab531 +0x01:  mov    %esp,%ebp
087ab533 +0x03:  push   %edi
087ab534 +0x04:  push   %esi
087ab535 +0x05:  push   %ebx
087ab536 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
087ab53b +0x0b:  add    $0xbc165d,%ebx
087ab541 +0x11:  sub    $0x1c,%esp
087ab544 +0x14:  mov    0x8(%ebp),%esi
087ab547 +0x17:  mov    0xc(%ebp),%edi
087ab54a +0x1a:  movl   $0x40,0x8(%esp)
087ab552 +0x22:  movl   $0x5,0x4(%esp)
087ab55a +0x2a:  mov    %esi,(%esp)
087ab55d +0x2d:  call   08758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>  ; TaoCrypt::HASHwithTransform::HASHwithTransform(unsigned int, unsigned int)
087ab562 +0x32:  mov    -0x5d0(%ebx),%eax
087ab568 +0x38:  lea    0x10(%edi),%edx
087ab56b +0x3b:  mov    0x10(%edi),%ecx
087ab56e +0x3e:  add    $0x8,%eax
087ab571 +0x41:  mov    %eax,(%esi)
087ab573 +0x43:  mov    0x4(%edi),%eax
087ab576 +0x46:  mov    %ecx,0x10(%esi)
087ab579 +0x49:  mov    0x4(%edx),%ecx
087ab57c +0x4c:  mov    %eax,0x4(%esi)
087ab57f +0x4f:  mov    0x8(%edi),%eax
087ab582 +0x52:  mov    %eax,0x8(%esi)
087ab585 +0x55:  mov    0xc(%edi),%eax
087ab588 +0x58:  mov    %eax,0xc(%esi)
087ab58b +0x5b:  lea    0x10(%esi),%eax
087ab58e +0x5e:  mov    %ecx,0x4(%eax)
087ab591 +0x61:  mov    0x8(%edx),%ecx
087ab594 +0x64:  mov    %ecx,0x8(%eax)
087ab597 +0x67:  mov    0xc(%edx),%ecx
087ab59a +0x6a:  mov    %ecx,0xc(%eax)
087ab59d +0x6d:  mov    0x10(%edx),%edx
087ab5a0 +0x70:  mov    0x30(%edi),%ecx
087ab5a3 +0x73:  mov    %edx,0x10(%eax)
087ab5a6 +0x76:  lea    0x30(%edi),%edx
087ab5a9 +0x79:  mov    %ecx,0x30(%esi)
087ab5ac +0x7c:  mov    0x4(%edx),%ecx
087ab5af +0x7f:  lea    0x30(%esi),%eax
087ab5b2 +0x82:  mov    %ecx,0x4(%eax)
087ab5b5 +0x85:  mov    0x8(%edx),%ecx
087ab5b8 +0x88:  mov    %ecx,0x8(%eax)
087ab5bb +0x8b:  mov    0xc(%edx),%ecx
087ab5be +0x8e:  mov    %ecx,0xc(%eax)
087ab5c1 +0x91:  mov    0x10(%edx),%ecx
087ab5c4 +0x94:  mov    %ecx,0x10(%eax)
087ab5c7 +0x97:  mov    0x14(%edx),%ecx
087ab5ca +0x9a:  mov    %ecx,0x14(%eax)
087ab5cd +0x9d:  mov    0x18(%edx),%ecx
087ab5d0 +0xa0:  mov    %ecx,0x18(%eax)
087ab5d3 +0xa3:  mov    0x1c(%edx),%ecx
087ab5d6 +0xa6:  mov    %ecx,0x1c(%eax)
087ab5d9 +0xa9:  mov    0x20(%edx),%ecx
087ab5dc +0xac:  mov    %ecx,0x20(%eax)
087ab5df +0xaf:  mov    0x24(%edx),%ecx
087ab5e2 +0xb2:  mov    %ecx,0x24(%eax)
087ab5e5 +0xb5:  mov    0x28(%edx),%ecx
087ab5e8 +0xb8:  mov    %ecx,0x28(%eax)
087ab5eb +0xbb:  mov    0x2c(%edx),%ecx
087ab5ee +0xbe:  mov    %ecx,0x2c(%eax)
087ab5f1 +0xc1:  mov    0x30(%edx),%ecx
087ab5f4 +0xc4:  mov    %ecx,0x30(%eax)
087ab5f7 +0xc7:  mov    0x34(%edx),%ecx
087ab5fa +0xca:  mov    %ecx,0x34(%eax)
087ab5fd +0xcd:  mov    0x38(%edx),%ecx
087ab600 +0xd0:  mov    %ecx,0x38(%eax)
087ab603 +0xd3:  mov    0x3c(%edx),%edx
087ab606 +0xd6:  mov    %edx,0x3c(%eax)
087ab609 +0xd9:  add    $0x1c,%esp
087ab60c +0xdc:  pop    %ebx
087ab60d +0xdd:  pop    %esi
087ab60e +0xde:  pop    %edi
087ab60f +0xdf:  pop    %ebp
087ab610 +0xe0:  ret
087ab611 +0xe1:  nop
087ab612 +0xe2:  lea    0x0(%esi,%eiz,1),%esi
087ab619 +0xe9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::RIPEMD160::RIPEMD160 @ 0x87ab530

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RIPEMD160::RIPEMD160(TaoCrypt::RIPEMD160 const&) */

void __thiscall TaoCrypt::RIPEMD160::RIPEMD160(RIPEMD160 *this,RIPEMD160 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  HASHwithTransform::HASHwithTransform((HASHwithTransform *)this,5,0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined **)this = PTR_vtable_0936c5c8 + 8;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x30) = uVar1;
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
