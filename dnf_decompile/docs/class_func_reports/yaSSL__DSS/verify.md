# verify

`_ZN5yaSSL3DSS6verifyEPKhjS2_j`

`yaSSL::DSS::verify(unsigned char const*, unsigned int, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::DSS` | `0x0879a8d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879a8d0  _ZN5yaSSL3DSS6verifyEPKhjS2_j
#           yaSSL::DSS::verify(unsigned char const*, unsigned int, unsigned char const*, unsigned int)
# range [0x0879a8d0, 0x0879a97a]
0879a8d0 +0x00:  push   %ebp
0879a8d1 +0x01:  mov    %esp,%ebp
0879a8d3 +0x03:  sub    $0x58,%esp
0879a8d6 +0x06:  mov    0x8(%ebp),%eax
0879a8d9 +0x09:  mov    %ebx,-0xc(%ebp)
0879a8dc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0879a8e1 +0x11:  add    $0xbd22b7,%ebx
0879a8e7 +0x17:  mov    %esi,-0x8(%ebp)
0879a8ea +0x1a:  lea    -0x3c(%ebp),%esi
0879a8ed +0x1d:  mov    %edi,-0x4(%ebp)
0879a8f0 +0x20:  mov    0x4(%eax),%eax
0879a8f3 +0x23:  mov    %esi,(%esp)
0879a8f6 +0x26:  mov    %eax,0x4(%esp)
0879a8fa +0x2a:  call   08757500 <_ZN8TaoCrypt12DSA_VerifierC1ERKNS_13DSA_PublicKeyE>  ; TaoCrypt::DSA_Verifier::DSA_Verifier(TaoCrypt::DSA_PublicKey const&)
0879a8ff +0x2f:  mov    0x14(%ebp),%eax
0879a902 +0x32:  mov    %esi,(%esp)
0879a905 +0x35:  mov    %eax,0x8(%esp)
0879a909 +0x39:  mov    0xc(%ebp),%eax
0879a90c +0x3c:  mov    %eax,0x4(%esp)
0879a910 +0x40:  call   08757f50 <_ZN8TaoCrypt12DSA_Verifier6VerifyEPKhS2_>  ; TaoCrypt::DSA_Verifier::Verify(unsigned char const*, unsigned char const*)
0879a915 +0x45:  mov    -0x24(%ebp),%esi
0879a918 +0x48:  movl   $0x0,0x4(%esp)
0879a920 +0x50:  mov    %esi,(%esp)
0879a923 +0x53:  mov    %eax,%edi
0879a925 +0x55:  mov    -0x28(%ebp),%eax
0879a928 +0x58:  shl    $0x2,%eax
0879a92b +0x5b:  mov    %eax,0x8(%esp)
0879a92f +0x5f:  call   0807dcc0 <_init+0x5b8>
0879a934 +0x64:  mov    %esi,(%esp)
0879a937 +0x67:  movb   $0x0,0x4(%esp)
0879a93c +0x6c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879a941 +0x71:  mov    -0x38(%ebp),%eax
0879a944 +0x74:  mov    -0x34(%ebp),%esi
0879a947 +0x77:  movl   $0x0,0x4(%esp)
0879a94f +0x7f:  shl    $0x2,%eax
0879a952 +0x82:  mov    %esi,(%esp)
0879a955 +0x85:  mov    %eax,0x8(%esp)
0879a959 +0x89:  call   0807dcc0 <_init+0x5b8>
0879a95e +0x8e:  mov    %esi,(%esp)
0879a961 +0x91:  movb   $0x0,0x4(%esp)
0879a966 +0x96:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879a96b +0x9b:  mov    %edi,%eax
0879a96d +0x9d:  mov    -0xc(%ebp),%ebx
0879a970 +0xa0:  mov    -0x8(%ebp),%esi
0879a973 +0xa3:  mov    -0x4(%ebp),%edi
0879a976 +0xa6:  mov    %ebp,%esp
0879a978 +0xa8:  pop    %ebp
0879a979 +0xa9:  ret
0879a97a +0xaa:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::DSS::verify @ 0x879a8d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DSS::verify(unsigned char const*, unsigned int, unsigned char const*, unsigned int) */

undefined4 yaSSL::DSS::verify(uchar *param_1,uint param_2,uchar *param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  DSA_Verifier local_40 [4];
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  TaoCrypt::DSA_Verifier::DSA_Verifier(local_40,*(DSA_PublicKey **)(param_1 + 4));
  uVar1 = TaoCrypt::DSA_Verifier::Verify(local_40,(uchar *)param_2,(uchar *)param_4);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  return uVar1;
}
```
