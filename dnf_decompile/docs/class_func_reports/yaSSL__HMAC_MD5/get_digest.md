# get_digest

`_ZN5yaSSL8HMAC_MD510get_digestEPhPKhj`

`yaSSL::HMAC_MD5::get_digest(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_MD5` | `0x08799b60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799b60  _ZN5yaSSL8HMAC_MD510get_digestEPhPKhj
#           yaSSL::HMAC_MD5::get_digest(unsigned char*, unsigned char const*, unsigned int)
# range [0x08799b60, 0x08799c49]
08799b60 +0x00:  push   %ebp
08799b61 +0x01:  mov    %esp,%ebp
08799b63 +0x03:  sub    $0x38,%esp
08799b66 +0x06:  mov    %edi,-0x4(%ebp)
08799b69 +0x09:  mov    0x8(%ebp),%edi
08799b6c +0x0c:  mov    %ebx,-0xc(%ebp)
08799b6f +0x0f:  mov    %esi,-0x8(%ebp)
08799b72 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08799b77 +0x17:  add    $0xbd3021,%ebx
08799b7d +0x1d:  mov    0x4(%edi),%esi
08799b80 +0x20:  cmpb   $0x0,0xc(%esi)
08799b84 +0x24:  lea    0x10(%esi),%eax
08799b87 +0x27:  jne    08799ba9 <+0x49>
08799b89 +0x29:  movl   $0x40,0x8(%esp)
08799b91 +0x31:  mov    (%esi),%edx
08799b93 +0x33:  mov    %eax,-0x1c(%ebp)
08799b96 +0x36:  mov    %eax,(%esp)
08799b99 +0x39:  mov    %edx,0x4(%esp)
08799b9d +0x3d:  call   08767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>  ; TaoCrypt::MD5::Update(unsigned char const*, unsigned int)
08799ba2 +0x42:  mov    -0x1c(%ebp),%eax
08799ba5 +0x45:  movb   $0x1,0xc(%esi)
08799ba9 +0x49:  mov    0x14(%ebp),%edx
08799bac +0x4c:  mov    %eax,(%esp)
08799baf +0x4f:  mov    %edx,0x8(%esp)
08799bb3 +0x53:  mov    0x10(%ebp),%edx
08799bb6 +0x56:  mov    %edx,0x4(%esp)
08799bba +0x5a:  call   08767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>  ; TaoCrypt::MD5::Update(unsigned char const*, unsigned int)
08799bbf +0x5f:  mov    0x4(%edi),%esi
08799bc2 +0x62:  cmpb   $0x0,0xc(%esi)
08799bc6 +0x66:  lea    0x10(%esi),%edi
08799bc9 +0x69:  jne    08799be5 <+0x85>
08799bcb +0x6b:  movl   $0x40,0x8(%esp)
08799bd3 +0x73:  mov    (%esi),%eax
08799bd5 +0x75:  mov    %edi,(%esp)
08799bd8 +0x78:  mov    %eax,0x4(%esp)
08799bdc +0x7c:  call   08767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>  ; TaoCrypt::MD5::Update(unsigned char const*, unsigned int)
08799be1 +0x81:  movb   $0x1,0xc(%esi)
08799be5 +0x85:  mov    0x8(%esi),%eax
08799be8 +0x88:  mov    %edi,(%esp)
08799beb +0x8b:  mov    %eax,0x4(%esp)
08799bef +0x8f:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
08799bf4 +0x94:  movl   $0x40,0x8(%esp)
08799bfc +0x9c:  mov    0x4(%esi),%eax
08799bff +0x9f:  mov    %edi,(%esp)
08799c02 +0xa2:  mov    %eax,0x4(%esp)
08799c06 +0xa6:  call   08767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>  ; TaoCrypt::MD5::Update(unsigned char const*, unsigned int)
08799c0b +0xab:  movl   $0x10,0x8(%esp)
08799c13 +0xb3:  mov    0x8(%esi),%eax
08799c16 +0xb6:  mov    %edi,(%esp)
08799c19 +0xb9:  mov    %eax,0x4(%esp)
08799c1d +0xbd:  call   08767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>  ; TaoCrypt::MD5::Update(unsigned char const*, unsigned int)
08799c22 +0xc2:  mov    0xc(%ebp),%eax
08799c25 +0xc5:  mov    %edi,(%esp)
08799c28 +0xc8:  mov    %eax,0x4(%esp)
08799c2c +0xcc:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
08799c31 +0xd1:  movb   $0x0,0xc(%esi)
08799c35 +0xd5:  mov    -0xc(%ebp),%ebx
08799c38 +0xd8:  mov    -0x8(%ebp),%esi
08799c3b +0xdb:  mov    -0x4(%ebp),%edi
08799c3e +0xde:  mov    %ebp,%esp
08799c40 +0xe0:  pop    %ebp
08799c41 +0xe1:  ret
08799c42 +0xe2:  lea    0x0(%esi,%eiz,1),%esi
08799c49 +0xe9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::HMAC_MD5::get_digest @ 0x8799b60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_MD5::get_digest(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall
yaSSL::HMAC_MD5::get_digest(HMAC_MD5 *this,uchar *param_1,uchar *param_2,uint param_3)

{
  MD5 *this_00;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::MD5::Update((MD5 *)(puVar1 + 4),(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::MD5::Update((MD5 *)(puVar1 + 4),param_2,param_3);
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
