# SHA

`_ZN8TaoCrypt3SHAC1ERKS0_`

`TaoCrypt::SHA::SHA(TaoCrypt::SHA const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA` | `0x08770420` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08770420  _ZN8TaoCrypt3SHAC1ERKS0_
#           TaoCrypt::SHA::SHA(TaoCrypt::SHA const&)
# range [0x08770420, 0x08770509]
08770420 +0x00:  push   %ebp
08770421 +0x01:  mov    %esp,%ebp
08770423 +0x03:  push   %edi
08770424 +0x04:  push   %esi
08770425 +0x05:  push   %ebx
08770426 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
0877042b +0x0b:  add    $0xbfc76d,%ebx
08770431 +0x11:  sub    $0x1c,%esp
08770434 +0x14:  mov    0x8(%ebp),%esi
08770437 +0x17:  mov    0xc(%ebp),%edi
0877043a +0x1a:  movl   $0x40,0x8(%esp)
08770442 +0x22:  movl   $0x5,0x4(%esp)
0877044a +0x2a:  mov    %esi,(%esp)
0877044d +0x2d:  call   08758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>  ; TaoCrypt::HASHwithTransform::HASHwithTransform(unsigned int, unsigned int)
08770452 +0x32:  mov    -0xc(%ebx),%eax
08770458 +0x38:  lea    0x10(%edi),%edx
0877045b +0x3b:  mov    0x10(%edi),%ecx
0877045e +0x3e:  add    $0x8,%eax
08770461 +0x41:  mov    %eax,(%esi)
08770463 +0x43:  mov    0x4(%edi),%eax
08770466 +0x46:  mov    %ecx,0x10(%esi)
08770469 +0x49:  mov    0x4(%edx),%ecx
0877046c +0x4c:  mov    %eax,0x4(%esi)
0877046f +0x4f:  mov    0x8(%edi),%eax
08770472 +0x52:  mov    %eax,0x8(%esi)
08770475 +0x55:  mov    0xc(%edi),%eax
08770478 +0x58:  mov    %eax,0xc(%esi)
0877047b +0x5b:  lea    0x10(%esi),%eax
0877047e +0x5e:  mov    %ecx,0x4(%eax)
08770481 +0x61:  mov    0x8(%edx),%ecx
08770484 +0x64:  mov    %ecx,0x8(%eax)
08770487 +0x67:  mov    0xc(%edx),%ecx
0877048a +0x6a:  mov    %ecx,0xc(%eax)
0877048d +0x6d:  mov    0x10(%edx),%edx
08770490 +0x70:  mov    0x30(%edi),%ecx
08770493 +0x73:  mov    %edx,0x10(%eax)
08770496 +0x76:  lea    0x30(%edi),%edx
08770499 +0x79:  mov    %ecx,0x30(%esi)
0877049c +0x7c:  mov    0x4(%edx),%ecx
0877049f +0x7f:  lea    0x30(%esi),%eax
087704a2 +0x82:  mov    %ecx,0x4(%eax)
087704a5 +0x85:  mov    0x8(%edx),%ecx
087704a8 +0x88:  mov    %ecx,0x8(%eax)
087704ab +0x8b:  mov    0xc(%edx),%ecx
087704ae +0x8e:  mov    %ecx,0xc(%eax)
087704b1 +0x91:  mov    0x10(%edx),%ecx
087704b4 +0x94:  mov    %ecx,0x10(%eax)
087704b7 +0x97:  mov    0x14(%edx),%ecx
087704ba +0x9a:  mov    %ecx,0x14(%eax)
087704bd +0x9d:  mov    0x18(%edx),%ecx
087704c0 +0xa0:  mov    %ecx,0x18(%eax)
087704c3 +0xa3:  mov    0x1c(%edx),%ecx
087704c6 +0xa6:  mov    %ecx,0x1c(%eax)
087704c9 +0xa9:  mov    0x20(%edx),%ecx
087704cc +0xac:  mov    %ecx,0x20(%eax)
087704cf +0xaf:  mov    0x24(%edx),%ecx
087704d2 +0xb2:  mov    %ecx,0x24(%eax)
087704d5 +0xb5:  mov    0x28(%edx),%ecx
087704d8 +0xb8:  mov    %ecx,0x28(%eax)
087704db +0xbb:  mov    0x2c(%edx),%ecx
087704de +0xbe:  mov    %ecx,0x2c(%eax)
087704e1 +0xc1:  mov    0x30(%edx),%ecx
087704e4 +0xc4:  mov    %ecx,0x30(%eax)
087704e7 +0xc7:  mov    0x34(%edx),%ecx
087704ea +0xca:  mov    %ecx,0x34(%eax)
087704ed +0xcd:  mov    0x38(%edx),%ecx
087704f0 +0xd0:  mov    %ecx,0x38(%eax)
087704f3 +0xd3:  mov    0x3c(%edx),%edx
087704f6 +0xd6:  mov    %edx,0x3c(%eax)
087704f9 +0xd9:  add    $0x1c,%esp
087704fc +0xdc:  pop    %ebx
087704fd +0xdd:  pop    %esi
087704fe +0xde:  pop    %edi
087704ff +0xdf:  pop    %ebp
08770500 +0xe0:  ret
08770501 +0xe1:  nop
08770502 +0xe2:  lea    0x0(%esi,%eiz,1),%esi
08770509 +0xe9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::SHA::SHA @ 0x8770420

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA::SHA(TaoCrypt::SHA const&) */

void __thiscall TaoCrypt::SHA::SHA(SHA *this,SHA *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  HASHwithTransform::HASHwithTransform((HASHwithTransform *)this,5,0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined **)this = PTR_vtable_0936cb8c + 8;
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
