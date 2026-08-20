# get_digest

`_ZN5yaSSL8HMAC_RMD10get_digestEPh`

`yaSSL::HMAC_RMD::get_digest(unsigned char*)`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_RMD` | `0x0879a5f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879a5f0  _ZN5yaSSL8HMAC_RMD10get_digestEPh
#           yaSSL::HMAC_RMD::get_digest(unsigned char*)
# range [0x0879a5f0, 0x0879a68f]
0879a5f0 +0x00:  push   %ebp
0879a5f1 +0x01:  mov    %esp,%ebp
0879a5f3 +0x03:  sub    $0x28,%esp
0879a5f6 +0x06:  mov    0x8(%ebp),%eax
0879a5f9 +0x09:  mov    %ebx,-0xc(%ebp)
0879a5fc +0x0c:  mov    %edi,-0x4(%ebp)
0879a5ff +0x0f:  mov    %esi,-0x8(%ebp)
0879a602 +0x12:  mov    0x4(%eax),%esi
0879a605 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
0879a60a +0x1a:  add    $0xbd258e,%ebx
0879a610 +0x20:  cmpb   $0x0,0xc(%esi)
0879a614 +0x24:  lea    0x10(%esi),%edi
0879a617 +0x27:  jne    0879a633 <+0x43>
0879a619 +0x29:  movl   $0x40,0x8(%esp)
0879a621 +0x31:  mov    (%esi),%eax
0879a623 +0x33:  mov    %edi,(%esp)
0879a626 +0x36:  mov    %eax,0x4(%esp)
0879a62a +0x3a:  call   087ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>  ; TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int)
0879a62f +0x3f:  movb   $0x1,0xc(%esi)
0879a633 +0x43:  mov    0x8(%esi),%eax
0879a636 +0x46:  mov    %edi,(%esp)
0879a639 +0x49:  mov    %eax,0x4(%esp)
0879a63d +0x4d:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
0879a642 +0x52:  movl   $0x40,0x8(%esp)
0879a64a +0x5a:  mov    0x4(%esi),%eax
0879a64d +0x5d:  mov    %edi,(%esp)
0879a650 +0x60:  mov    %eax,0x4(%esp)
0879a654 +0x64:  call   087ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>  ; TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int)
0879a659 +0x69:  movl   $0x14,0x8(%esp)
0879a661 +0x71:  mov    0x8(%esi),%eax
0879a664 +0x74:  mov    %edi,(%esp)
0879a667 +0x77:  mov    %eax,0x4(%esp)
0879a66b +0x7b:  call   087ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>  ; TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int)
0879a670 +0x80:  mov    0xc(%ebp),%eax
0879a673 +0x83:  mov    %edi,(%esp)
0879a676 +0x86:  mov    %eax,0x4(%esp)
0879a67a +0x8a:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
0879a67f +0x8f:  movb   $0x0,0xc(%esi)
0879a683 +0x93:  mov    -0xc(%ebp),%ebx
0879a686 +0x96:  mov    -0x8(%ebp),%esi
0879a689 +0x99:  mov    -0x4(%ebp),%edi
0879a68c +0x9c:  mov    %ebp,%esp
0879a68e +0x9e:  pop    %ebp
0879a68f +0x9f:  ret
```

## 反编译 C

```c
// yaSSL::HMAC_RMD::get_digest @ 0x879a5f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_RMD::get_digest(unsigned char*) */

void __thiscall yaSSL::HMAC_RMD::get_digest(HMAC_RMD *this,uchar *param_1)

{
  RIPEMD160 *this_00;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  this_00 = (RIPEMD160 *)(puVar1 + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::RIPEMD160::Update(this_00,(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,(uchar *)puVar1[2]);
  TaoCrypt::RIPEMD160::Update(this_00,(uchar *)puVar1[1],0x40);
  TaoCrypt::RIPEMD160::Update(this_00,(uchar *)puVar1[2],0x14);
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,param_1);
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}
```
