# get_digest

`_ZN5yaSSL8HMAC_SHA10get_digestEPh`

`yaSSL::HMAC_SHA::get_digest(unsigned char*)`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_SHA` | `0x0879a730` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879a730  _ZN5yaSSL8HMAC_SHA10get_digestEPh
#           yaSSL::HMAC_SHA::get_digest(unsigned char*)
# range [0x0879a730, 0x0879a7cf]
0879a730 +0x00:  push   %ebp
0879a731 +0x01:  mov    %esp,%ebp
0879a733 +0x03:  sub    $0x28,%esp
0879a736 +0x06:  mov    0x8(%ebp),%eax
0879a739 +0x09:  mov    %ebx,-0xc(%ebp)
0879a73c +0x0c:  mov    %edi,-0x4(%ebp)
0879a73f +0x0f:  mov    %esi,-0x8(%ebp)
0879a742 +0x12:  mov    0x4(%eax),%esi
0879a745 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
0879a74a +0x1a:  add    $0xbd244e,%ebx
0879a750 +0x20:  cmpb   $0x0,0xc(%esi)
0879a754 +0x24:  lea    0x10(%esi),%edi
0879a757 +0x27:  jne    0879a773 <+0x43>
0879a759 +0x29:  movl   $0x40,0x8(%esp)
0879a761 +0x31:  mov    (%esi),%eax
0879a763 +0x33:  mov    %edi,(%esp)
0879a766 +0x36:  mov    %eax,0x4(%esp)
0879a76a +0x3a:  call   0876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>  ; TaoCrypt::SHA::Update(unsigned char const*, unsigned int)
0879a76f +0x3f:  movb   $0x1,0xc(%esi)
0879a773 +0x43:  mov    0x8(%esi),%eax
0879a776 +0x46:  mov    %edi,(%esp)
0879a779 +0x49:  mov    %eax,0x4(%esp)
0879a77d +0x4d:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
0879a782 +0x52:  movl   $0x40,0x8(%esp)
0879a78a +0x5a:  mov    0x4(%esi),%eax
0879a78d +0x5d:  mov    %edi,(%esp)
0879a790 +0x60:  mov    %eax,0x4(%esp)
0879a794 +0x64:  call   0876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>  ; TaoCrypt::SHA::Update(unsigned char const*, unsigned int)
0879a799 +0x69:  movl   $0x14,0x8(%esp)
0879a7a1 +0x71:  mov    0x8(%esi),%eax
0879a7a4 +0x74:  mov    %edi,(%esp)
0879a7a7 +0x77:  mov    %eax,0x4(%esp)
0879a7ab +0x7b:  call   0876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>  ; TaoCrypt::SHA::Update(unsigned char const*, unsigned int)
0879a7b0 +0x80:  mov    0xc(%ebp),%eax
0879a7b3 +0x83:  mov    %edi,(%esp)
0879a7b6 +0x86:  mov    %eax,0x4(%esp)
0879a7ba +0x8a:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
0879a7bf +0x8f:  movb   $0x0,0xc(%esi)
0879a7c3 +0x93:  mov    -0xc(%ebp),%ebx
0879a7c6 +0x96:  mov    -0x8(%ebp),%esi
0879a7c9 +0x99:  mov    -0x4(%ebp),%edi
0879a7cc +0x9c:  mov    %ebp,%esp
0879a7ce +0x9e:  pop    %ebp
0879a7cf +0x9f:  ret
```

## 反编译 C

```c
// yaSSL::HMAC_SHA::get_digest @ 0x879a730

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_SHA::get_digest(unsigned char*) */

void __thiscall yaSSL::HMAC_SHA::get_digest(HMAC_SHA *this,uchar *param_1)

{
  SHA *this_00;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  this_00 = (SHA *)(puVar1 + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::SHA::Update(this_00,(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,(uchar *)puVar1[2]);
  TaoCrypt::SHA::Update(this_00,(uchar *)puVar1[1],0x40);
  TaoCrypt::SHA::Update(this_00,(uchar *)puVar1[2],0x14);
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,param_1);
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}
```
