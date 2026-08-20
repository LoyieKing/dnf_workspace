# get_digest

`_ZN5yaSSL8HMAC_MD510get_digestEPh`

`yaSSL::HMAC_MD5::get_digest(unsigned char*)`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_MD5` | `0x0879a690` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879a690  _ZN5yaSSL8HMAC_MD510get_digestEPh
#           yaSSL::HMAC_MD5::get_digest(unsigned char*)
# range [0x0879a690, 0x0879a72f]
0879a690 +0x00:  push   %ebp
0879a691 +0x01:  mov    %esp,%ebp
0879a693 +0x03:  sub    $0x28,%esp
0879a696 +0x06:  mov    0x8(%ebp),%eax
0879a699 +0x09:  mov    %ebx,-0xc(%ebp)
0879a69c +0x0c:  mov    %edi,-0x4(%ebp)
0879a69f +0x0f:  mov    %esi,-0x8(%ebp)
0879a6a2 +0x12:  mov    0x4(%eax),%esi
0879a6a5 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
0879a6aa +0x1a:  add    $0xbd24ee,%ebx
0879a6b0 +0x20:  cmpb   $0x0,0xc(%esi)
0879a6b4 +0x24:  lea    0x10(%esi),%edi
0879a6b7 +0x27:  jne    0879a6d3 <+0x43>
0879a6b9 +0x29:  movl   $0x40,0x8(%esp)
0879a6c1 +0x31:  mov    (%esi),%eax
0879a6c3 +0x33:  mov    %edi,(%esp)
0879a6c6 +0x36:  mov    %eax,0x4(%esp)
0879a6ca +0x3a:  call   08767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>  ; TaoCrypt::MD5::Update(unsigned char const*, unsigned int)
0879a6cf +0x3f:  movb   $0x1,0xc(%esi)
0879a6d3 +0x43:  mov    0x8(%esi),%eax
0879a6d6 +0x46:  mov    %edi,(%esp)
0879a6d9 +0x49:  mov    %eax,0x4(%esp)
0879a6dd +0x4d:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
0879a6e2 +0x52:  movl   $0x40,0x8(%esp)
0879a6ea +0x5a:  mov    0x4(%esi),%eax
0879a6ed +0x5d:  mov    %edi,(%esp)
0879a6f0 +0x60:  mov    %eax,0x4(%esp)
0879a6f4 +0x64:  call   08767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>  ; TaoCrypt::MD5::Update(unsigned char const*, unsigned int)
0879a6f9 +0x69:  movl   $0x10,0x8(%esp)
0879a701 +0x71:  mov    0x8(%esi),%eax
0879a704 +0x74:  mov    %edi,(%esp)
0879a707 +0x77:  mov    %eax,0x4(%esp)
0879a70b +0x7b:  call   08767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>  ; TaoCrypt::MD5::Update(unsigned char const*, unsigned int)
0879a710 +0x80:  mov    0xc(%ebp),%eax
0879a713 +0x83:  mov    %edi,(%esp)
0879a716 +0x86:  mov    %eax,0x4(%esp)
0879a71a +0x8a:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
0879a71f +0x8f:  movb   $0x0,0xc(%esi)
0879a723 +0x93:  mov    -0xc(%ebp),%ebx
0879a726 +0x96:  mov    -0x8(%ebp),%esi
0879a729 +0x99:  mov    -0x4(%ebp),%edi
0879a72c +0x9c:  mov    %ebp,%esp
0879a72e +0x9e:  pop    %ebp
0879a72f +0x9f:  ret
```

## 反编译 C

```c
// yaSSL::HMAC_MD5::get_digest @ 0x879a690

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_MD5::get_digest(unsigned char*) */

void __thiscall yaSSL::HMAC_MD5::get_digest(HMAC_MD5 *this,uchar *param_1)

{
  MD5 *this_00;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  this_00 = (MD5 *)(puVar1 + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::MD5::Update(this_00,(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,(uchar *)puVar1[2]);
  TaoCrypt::MD5::Update(this_00,(uchar *)puVar1[1],0x40);
  TaoCrypt::MD5::Update(this_00,(uchar *)puVar1[2],0x10);
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,param_1);
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}
```
