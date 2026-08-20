# get_digest

`_ZN5yaSSL8HMAC_SHA10get_digestEPhPKhj`

`yaSSL::HMAC_SHA::get_digest(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_SHA` | `0x08799890` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799890  _ZN5yaSSL8HMAC_SHA10get_digestEPhPKhj
#           yaSSL::HMAC_SHA::get_digest(unsigned char*, unsigned char const*, unsigned int)
# range [0x08799890, 0x08799979]
08799890 +0x00:  push   %ebp
08799891 +0x01:  mov    %esp,%ebp
08799893 +0x03:  sub    $0x38,%esp
08799896 +0x06:  mov    %edi,-0x4(%ebp)
08799899 +0x09:  mov    0x8(%ebp),%edi
0879989c +0x0c:  mov    %ebx,-0xc(%ebp)
0879989f +0x0f:  mov    %esi,-0x8(%ebp)
087998a2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
087998a7 +0x17:  add    $0xbd32f1,%ebx
087998ad +0x1d:  mov    0x4(%edi),%esi
087998b0 +0x20:  cmpb   $0x0,0xc(%esi)
087998b4 +0x24:  lea    0x10(%esi),%eax
087998b7 +0x27:  jne    087998d9 <+0x49>
087998b9 +0x29:  movl   $0x40,0x8(%esp)
087998c1 +0x31:  mov    (%esi),%edx
087998c3 +0x33:  mov    %eax,-0x1c(%ebp)
087998c6 +0x36:  mov    %eax,(%esp)
087998c9 +0x39:  mov    %edx,0x4(%esp)
087998cd +0x3d:  call   0876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>  ; TaoCrypt::SHA::Update(unsigned char const*, unsigned int)
087998d2 +0x42:  mov    -0x1c(%ebp),%eax
087998d5 +0x45:  movb   $0x1,0xc(%esi)
087998d9 +0x49:  mov    0x14(%ebp),%edx
087998dc +0x4c:  mov    %eax,(%esp)
087998df +0x4f:  mov    %edx,0x8(%esp)
087998e3 +0x53:  mov    0x10(%ebp),%edx
087998e6 +0x56:  mov    %edx,0x4(%esp)
087998ea +0x5a:  call   0876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>  ; TaoCrypt::SHA::Update(unsigned char const*, unsigned int)
087998ef +0x5f:  mov    0x4(%edi),%esi
087998f2 +0x62:  cmpb   $0x0,0xc(%esi)
087998f6 +0x66:  lea    0x10(%esi),%edi
087998f9 +0x69:  jne    08799915 <+0x85>
087998fb +0x6b:  movl   $0x40,0x8(%esp)
08799903 +0x73:  mov    (%esi),%eax
08799905 +0x75:  mov    %edi,(%esp)
08799908 +0x78:  mov    %eax,0x4(%esp)
0879990c +0x7c:  call   0876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>  ; TaoCrypt::SHA::Update(unsigned char const*, unsigned int)
08799911 +0x81:  movb   $0x1,0xc(%esi)
08799915 +0x85:  mov    0x8(%esi),%eax
08799918 +0x88:  mov    %edi,(%esp)
0879991b +0x8b:  mov    %eax,0x4(%esp)
0879991f +0x8f:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
08799924 +0x94:  movl   $0x40,0x8(%esp)
0879992c +0x9c:  mov    0x4(%esi),%eax
0879992f +0x9f:  mov    %edi,(%esp)
08799932 +0xa2:  mov    %eax,0x4(%esp)
08799936 +0xa6:  call   0876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>  ; TaoCrypt::SHA::Update(unsigned char const*, unsigned int)
0879993b +0xab:  movl   $0x14,0x8(%esp)
08799943 +0xb3:  mov    0x8(%esi),%eax
08799946 +0xb6:  mov    %edi,(%esp)
08799949 +0xb9:  mov    %eax,0x4(%esp)
0879994d +0xbd:  call   0876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>  ; TaoCrypt::SHA::Update(unsigned char const*, unsigned int)
08799952 +0xc2:  mov    0xc(%ebp),%eax
08799955 +0xc5:  mov    %edi,(%esp)
08799958 +0xc8:  mov    %eax,0x4(%esp)
0879995c +0xcc:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
08799961 +0xd1:  movb   $0x0,0xc(%esi)
08799965 +0xd5:  mov    -0xc(%ebp),%ebx
08799968 +0xd8:  mov    -0x8(%ebp),%esi
0879996b +0xdb:  mov    -0x4(%ebp),%edi
0879996e +0xde:  mov    %ebp,%esp
08799970 +0xe0:  pop    %ebp
08799971 +0xe1:  ret
08799972 +0xe2:  lea    0x0(%esi,%eiz,1),%esi
08799979 +0xe9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::HMAC_SHA::get_digest @ 0x8799890

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_SHA::get_digest(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall
yaSSL::HMAC_SHA::get_digest(HMAC_SHA *this,uchar *param_1,uchar *param_2,uint param_3)

{
  SHA *this_00;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::SHA::Update((SHA *)(puVar1 + 4),(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::SHA::Update((SHA *)(puVar1 + 4),param_2,param_3);
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
