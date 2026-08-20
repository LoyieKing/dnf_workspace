# MD4

`_ZN8TaoCrypt3MD4C1ERKS0_`

`TaoCrypt::MD4::MD4(TaoCrypt::MD4 const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD4` | `0x08766010` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08766010  _ZN8TaoCrypt3MD4C1ERKS0_
#           TaoCrypt::MD4::MD4(TaoCrypt::MD4 const&)
# range [0x08766010, 0x087660ec]
08766010 +0x00:  push   %ebp
08766011 +0x01:  mov    %esp,%ebp
08766013 +0x03:  push   %edi
08766014 +0x04:  push   %esi
08766015 +0x05:  push   %ebx
08766016 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
0876601b +0x0b:  add    $0xc06b7d,%ebx
08766021 +0x11:  sub    $0x1c,%esp
08766024 +0x14:  mov    0x8(%ebp),%esi
08766027 +0x17:  mov    0xc(%ebp),%edi
0876602a +0x1a:  movl   $0x40,0x8(%esp)
08766032 +0x22:  movl   $0x4,0x4(%esp)
0876603a +0x2a:  mov    %esi,(%esp)
0876603d +0x2d:  call   08758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>  ; TaoCrypt::HASHwithTransform::HASHwithTransform(unsigned int, unsigned int)
08766042 +0x32:  mov    -0x600(%ebx),%eax
08766048 +0x38:  lea    0x10(%edi),%edx
0876604b +0x3b:  mov    0x10(%edi),%ecx
0876604e +0x3e:  add    $0x8,%eax
08766051 +0x41:  mov    %eax,(%esi)
08766053 +0x43:  mov    0x4(%edi),%eax
08766056 +0x46:  mov    %ecx,0x10(%esi)
08766059 +0x49:  mov    0x4(%edx),%ecx
0876605c +0x4c:  mov    %eax,0x4(%esi)
0876605f +0x4f:  mov    0x8(%edi),%eax
08766062 +0x52:  mov    %eax,0x8(%esi)
08766065 +0x55:  mov    0xc(%edi),%eax
08766068 +0x58:  mov    %eax,0xc(%esi)
0876606b +0x5b:  lea    0x10(%esi),%eax
0876606e +0x5e:  mov    %ecx,0x4(%eax)
08766071 +0x61:  mov    0x8(%edx),%ecx
08766074 +0x64:  mov    %ecx,0x8(%eax)
08766077 +0x67:  mov    0xc(%edx),%edx
0876607a +0x6a:  mov    0x30(%edi),%ecx
0876607d +0x6d:  mov    %edx,0xc(%eax)
08766080 +0x70:  lea    0x30(%edi),%edx
08766083 +0x73:  mov    %ecx,0x30(%esi)
08766086 +0x76:  mov    0x4(%edx),%ecx
08766089 +0x79:  lea    0x30(%esi),%eax
0876608c +0x7c:  mov    %ecx,0x4(%eax)
0876608f +0x7f:  mov    0x8(%edx),%ecx
08766092 +0x82:  mov    %ecx,0x8(%eax)
08766095 +0x85:  mov    0xc(%edx),%ecx
08766098 +0x88:  mov    %ecx,0xc(%eax)
0876609b +0x8b:  mov    0x10(%edx),%ecx
0876609e +0x8e:  mov    %ecx,0x10(%eax)
087660a1 +0x91:  mov    0x14(%edx),%ecx
087660a4 +0x94:  mov    %ecx,0x14(%eax)
087660a7 +0x97:  mov    0x18(%edx),%ecx
087660aa +0x9a:  mov    %ecx,0x18(%eax)
087660ad +0x9d:  mov    0x1c(%edx),%ecx
087660b0 +0xa0:  mov    %ecx,0x1c(%eax)
087660b3 +0xa3:  mov    0x20(%edx),%ecx
087660b6 +0xa6:  mov    %ecx,0x20(%eax)
087660b9 +0xa9:  mov    0x24(%edx),%ecx
087660bc +0xac:  mov    %ecx,0x24(%eax)
087660bf +0xaf:  mov    0x28(%edx),%ecx
087660c2 +0xb2:  mov    %ecx,0x28(%eax)
087660c5 +0xb5:  mov    0x2c(%edx),%ecx
087660c8 +0xb8:  mov    %ecx,0x2c(%eax)
087660cb +0xbb:  mov    0x30(%edx),%ecx
087660ce +0xbe:  mov    %ecx,0x30(%eax)
087660d1 +0xc1:  mov    0x34(%edx),%ecx
087660d4 +0xc4:  mov    %ecx,0x34(%eax)
087660d7 +0xc7:  mov    0x38(%edx),%ecx
087660da +0xca:  mov    %ecx,0x38(%eax)
087660dd +0xcd:  mov    0x3c(%edx),%edx
087660e0 +0xd0:  mov    %edx,0x3c(%eax)
087660e3 +0xd3:  add    $0x1c,%esp
087660e6 +0xd6:  pop    %ebx
087660e7 +0xd7:  pop    %esi
087660e8 +0xd8:  pop    %edi
087660e9 +0xd9:  pop    %ebp
087660ea +0xda:  ret
087660eb +0xdb:  nop
087660ec +0xdc:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::MD4::MD4 @ 0x8766010

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MD4::MD4(TaoCrypt::MD4 const&) */

void __thiscall TaoCrypt::MD4::MD4(MD4 *this,MD4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  HASHwithTransform::HASHwithTransform((HASHwithTransform *)this,4,0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined **)this = PTR_vtable_0936c598 + 8;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
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
