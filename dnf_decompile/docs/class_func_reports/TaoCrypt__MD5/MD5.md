# MD5

`_ZN8TaoCrypt3MD5C1ERKS0_`

`TaoCrypt::MD5::MD5(TaoCrypt::MD5 const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD5` | `0x08767250` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767250  _ZN8TaoCrypt3MD5C1ERKS0_
#           TaoCrypt::MD5::MD5(TaoCrypt::MD5 const&)
# range [0x08767250, 0x0876732c]
08767250 +0x00:  push   %ebp
08767251 +0x01:  mov    %esp,%ebp
08767253 +0x03:  push   %edi
08767254 +0x04:  push   %esi
08767255 +0x05:  push   %ebx
08767256 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
0876725b +0x0b:  add    $0xc0593d,%ebx
08767261 +0x11:  sub    $0x1c,%esp
08767264 +0x14:  mov    0x8(%ebp),%esi
08767267 +0x17:  mov    0xc(%ebp),%edi
0876726a +0x1a:  movl   $0x40,0x8(%esp)
08767272 +0x22:  movl   $0x4,0x4(%esp)
0876727a +0x2a:  mov    %esi,(%esp)
0876727d +0x2d:  call   08758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>  ; TaoCrypt::HASHwithTransform::HASHwithTransform(unsigned int, unsigned int)
08767282 +0x32:  mov    -0x340(%ebx),%eax
08767288 +0x38:  lea    0x10(%edi),%edx
0876728b +0x3b:  mov    0x10(%edi),%ecx
0876728e +0x3e:  add    $0x8,%eax
08767291 +0x41:  mov    %eax,(%esi)
08767293 +0x43:  mov    0x4(%edi),%eax
08767296 +0x46:  mov    %ecx,0x10(%esi)
08767299 +0x49:  mov    0x4(%edx),%ecx
0876729c +0x4c:  mov    %eax,0x4(%esi)
0876729f +0x4f:  mov    0x8(%edi),%eax
087672a2 +0x52:  mov    %eax,0x8(%esi)
087672a5 +0x55:  mov    0xc(%edi),%eax
087672a8 +0x58:  mov    %eax,0xc(%esi)
087672ab +0x5b:  lea    0x10(%esi),%eax
087672ae +0x5e:  mov    %ecx,0x4(%eax)
087672b1 +0x61:  mov    0x8(%edx),%ecx
087672b4 +0x64:  mov    %ecx,0x8(%eax)
087672b7 +0x67:  mov    0xc(%edx),%edx
087672ba +0x6a:  mov    0x30(%edi),%ecx
087672bd +0x6d:  mov    %edx,0xc(%eax)
087672c0 +0x70:  lea    0x30(%edi),%edx
087672c3 +0x73:  mov    %ecx,0x30(%esi)
087672c6 +0x76:  mov    0x4(%edx),%ecx
087672c9 +0x79:  lea    0x30(%esi),%eax
087672cc +0x7c:  mov    %ecx,0x4(%eax)
087672cf +0x7f:  mov    0x8(%edx),%ecx
087672d2 +0x82:  mov    %ecx,0x8(%eax)
087672d5 +0x85:  mov    0xc(%edx),%ecx
087672d8 +0x88:  mov    %ecx,0xc(%eax)
087672db +0x8b:  mov    0x10(%edx),%ecx
087672de +0x8e:  mov    %ecx,0x10(%eax)
087672e1 +0x91:  mov    0x14(%edx),%ecx
087672e4 +0x94:  mov    %ecx,0x14(%eax)
087672e7 +0x97:  mov    0x18(%edx),%ecx
087672ea +0x9a:  mov    %ecx,0x18(%eax)
087672ed +0x9d:  mov    0x1c(%edx),%ecx
087672f0 +0xa0:  mov    %ecx,0x1c(%eax)
087672f3 +0xa3:  mov    0x20(%edx),%ecx
087672f6 +0xa6:  mov    %ecx,0x20(%eax)
087672f9 +0xa9:  mov    0x24(%edx),%ecx
087672fc +0xac:  mov    %ecx,0x24(%eax)
087672ff +0xaf:  mov    0x28(%edx),%ecx
08767302 +0xb2:  mov    %ecx,0x28(%eax)
08767305 +0xb5:  mov    0x2c(%edx),%ecx
08767308 +0xb8:  mov    %ecx,0x2c(%eax)
0876730b +0xbb:  mov    0x30(%edx),%ecx
0876730e +0xbe:  mov    %ecx,0x30(%eax)
08767311 +0xc1:  mov    0x34(%edx),%ecx
08767314 +0xc4:  mov    %ecx,0x34(%eax)
08767317 +0xc7:  mov    0x38(%edx),%ecx
0876731a +0xca:  mov    %ecx,0x38(%eax)
0876731d +0xcd:  mov    0x3c(%edx),%edx
08767320 +0xd0:  mov    %edx,0x3c(%eax)
08767323 +0xd3:  add    $0x1c,%esp
08767326 +0xd6:  pop    %ebx
08767327 +0xd7:  pop    %esi
08767328 +0xd8:  pop    %edi
08767329 +0xd9:  pop    %ebp
0876732a +0xda:  ret
0876732b +0xdb:  nop
0876732c +0xdc:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::MD5::MD5 @ 0x8767250

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MD5::MD5(TaoCrypt::MD5 const&) */

void __thiscall TaoCrypt::MD5::MD5(MD5 *this,MD5 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  HASHwithTransform::HASHwithTransform((HASHwithTransform *)this,4,0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined **)this = PTR_vtable_0936c858 + 8;
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
