# get_digest

`_ZN5yaSSL8HMAC_RMD10get_digestEPhPKhj`

`yaSSL::HMAC_RMD::get_digest(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_RMD` | `0x08799570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799570  _ZN5yaSSL8HMAC_RMD10get_digestEPhPKhj
#           yaSSL::HMAC_RMD::get_digest(unsigned char*, unsigned char const*, unsigned int)
# range [0x08799570, 0x08799659]
08799570 +0x00:  push   %ebp
08799571 +0x01:  mov    %esp,%ebp
08799573 +0x03:  sub    $0x38,%esp
08799576 +0x06:  mov    %edi,-0x4(%ebp)
08799579 +0x09:  mov    0x8(%ebp),%edi
0879957c +0x0c:  mov    %ebx,-0xc(%ebp)
0879957f +0x0f:  mov    %esi,-0x8(%ebp)
08799582 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08799587 +0x17:  add    $0xbd3611,%ebx
0879958d +0x1d:  mov    0x4(%edi),%esi
08799590 +0x20:  cmpb   $0x0,0xc(%esi)
08799594 +0x24:  lea    0x10(%esi),%eax
08799597 +0x27:  jne    087995b9 <+0x49>
08799599 +0x29:  movl   $0x40,0x8(%esp)
087995a1 +0x31:  mov    (%esi),%edx
087995a3 +0x33:  mov    %eax,-0x1c(%ebp)
087995a6 +0x36:  mov    %eax,(%esp)
087995a9 +0x39:  mov    %edx,0x4(%esp)
087995ad +0x3d:  call   087ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>  ; TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int)
087995b2 +0x42:  mov    -0x1c(%ebp),%eax
087995b5 +0x45:  movb   $0x1,0xc(%esi)
087995b9 +0x49:  mov    0x14(%ebp),%edx
087995bc +0x4c:  mov    %eax,(%esp)
087995bf +0x4f:  mov    %edx,0x8(%esp)
087995c3 +0x53:  mov    0x10(%ebp),%edx
087995c6 +0x56:  mov    %edx,0x4(%esp)
087995ca +0x5a:  call   087ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>  ; TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int)
087995cf +0x5f:  mov    0x4(%edi),%esi
087995d2 +0x62:  cmpb   $0x0,0xc(%esi)
087995d6 +0x66:  lea    0x10(%esi),%edi
087995d9 +0x69:  jne    087995f5 <+0x85>
087995db +0x6b:  movl   $0x40,0x8(%esp)
087995e3 +0x73:  mov    (%esi),%eax
087995e5 +0x75:  mov    %edi,(%esp)
087995e8 +0x78:  mov    %eax,0x4(%esp)
087995ec +0x7c:  call   087ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>  ; TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int)
087995f1 +0x81:  movb   $0x1,0xc(%esi)
087995f5 +0x85:  mov    0x8(%esi),%eax
087995f8 +0x88:  mov    %edi,(%esp)
087995fb +0x8b:  mov    %eax,0x4(%esp)
087995ff +0x8f:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
08799604 +0x94:  movl   $0x40,0x8(%esp)
0879960c +0x9c:  mov    0x4(%esi),%eax
0879960f +0x9f:  mov    %edi,(%esp)
08799612 +0xa2:  mov    %eax,0x4(%esp)
08799616 +0xa6:  call   087ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>  ; TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int)
0879961b +0xab:  movl   $0x14,0x8(%esp)
08799623 +0xb3:  mov    0x8(%esi),%eax
08799626 +0xb6:  mov    %edi,(%esp)
08799629 +0xb9:  mov    %eax,0x4(%esp)
0879962d +0xbd:  call   087ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>  ; TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int)
08799632 +0xc2:  mov    0xc(%ebp),%eax
08799635 +0xc5:  mov    %edi,(%esp)
08799638 +0xc8:  mov    %eax,0x4(%esp)
0879963c +0xcc:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
08799641 +0xd1:  movb   $0x0,0xc(%esi)
08799645 +0xd5:  mov    -0xc(%ebp),%ebx
08799648 +0xd8:  mov    -0x8(%ebp),%esi
0879964b +0xdb:  mov    -0x4(%ebp),%edi
0879964e +0xde:  mov    %ebp,%esp
08799650 +0xe0:  pop    %ebp
08799651 +0xe1:  ret
08799652 +0xe2:  lea    0x0(%esi,%eiz,1),%esi
08799659 +0xe9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::HMAC_RMD::get_digest @ 0x8799570

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_RMD::get_digest(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall
yaSSL::HMAC_RMD::get_digest(HMAC_RMD *this,uchar *param_1,uchar *param_2,uint param_3)

{
  RIPEMD160 *this_00;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::RIPEMD160::Update((RIPEMD160 *)(puVar1 + 4),(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::RIPEMD160::Update((RIPEMD160 *)(puVar1 + 4),param_2,param_3);
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
