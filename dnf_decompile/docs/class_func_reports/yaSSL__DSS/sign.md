# sign

`_ZN5yaSSL3DSS4signEPhPKhjRKNS_10RandomPoolE`

`yaSSL::DSS::sign(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::DSS` | `0x0879a820` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879a820  _ZN5yaSSL3DSS4signEPhPKhjRKNS_10RandomPoolE
#           yaSSL::DSS::sign(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&)
# range [0x0879a820, 0x0879a8c9]
0879a820 +0x00:  push   %ebp
0879a821 +0x01:  mov    %esp,%ebp
0879a823 +0x03:  push   %esi
0879a824 +0x04:  push   %ebx
0879a825 +0x05:  sub    $0x40,%esp
0879a828 +0x08:  mov    0x8(%ebp),%eax
0879a82b +0x0b:  call   08722df8 <__i686.get_pc_thunk.bx>
0879a830 +0x10:  add    $0xbd2368,%ebx
0879a836 +0x16:  lea    -0x2c(%ebp),%esi
0879a839 +0x19:  mov    0x4(%eax),%eax
0879a83c +0x1c:  mov    %esi,(%esp)
0879a83f +0x1f:  add    $0x40,%eax
0879a842 +0x22:  mov    %eax,0x4(%esp)
0879a846 +0x26:  call   08757540 <_ZN8TaoCrypt10DSA_SignerC1ERKNS_14DSA_PrivateKeyE>  ; TaoCrypt::DSA_Signer::DSA_Signer(TaoCrypt::DSA_PrivateKey const&)
0879a84b +0x2b:  mov    0x18(%ebp),%eax
0879a84e +0x2e:  mov    (%eax),%eax
0879a850 +0x30:  mov    %esi,(%esp)
0879a853 +0x33:  mov    %eax,0xc(%esp)
0879a857 +0x37:  mov    0xc(%ebp),%eax
0879a85a +0x3a:  mov    %eax,0x8(%esp)
0879a85e +0x3e:  mov    0x10(%ebp),%eax
0879a861 +0x41:  mov    %eax,0x4(%esp)
0879a865 +0x45:  call   087579f0 <_ZN8TaoCrypt10DSA_Signer4SignEPKhPhRNS_21RandomNumberGeneratorE>  ; TaoCrypt::DSA_Signer::Sign(unsigned char const*, unsigned char*, TaoCrypt::RandomNumberGenerator&)
0879a86a +0x4a:  mov    -0x18(%ebp),%eax
0879a86d +0x4d:  mov    -0x14(%ebp),%esi
0879a870 +0x50:  movl   $0x0,0x4(%esp)
0879a878 +0x58:  shl    $0x2,%eax
0879a87b +0x5b:  mov    %esi,(%esp)
0879a87e +0x5e:  mov    %eax,0x8(%esp)
0879a882 +0x62:  call   0807dcc0 <_init+0x5b8>
0879a887 +0x67:  mov    %esi,(%esp)
0879a88a +0x6a:  movb   $0x0,0x4(%esp)
0879a88f +0x6f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879a894 +0x74:  mov    -0x28(%ebp),%eax
0879a897 +0x77:  mov    -0x24(%ebp),%esi
0879a89a +0x7a:  movl   $0x0,0x4(%esp)
0879a8a2 +0x82:  shl    $0x2,%eax
0879a8a5 +0x85:  mov    %esi,(%esp)
0879a8a8 +0x88:  mov    %eax,0x8(%esp)
0879a8ac +0x8c:  call   0807dcc0 <_init+0x5b8>
0879a8b1 +0x91:  mov    %esi,(%esp)
0879a8b4 +0x94:  movb   $0x0,0x4(%esp)
0879a8b9 +0x99:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879a8be +0x9e:  add    $0x40,%esp
0879a8c1 +0xa1:  pop    %ebx
0879a8c2 +0xa2:  pop    %esi
0879a8c3 +0xa3:  pop    %ebp
0879a8c4 +0xa4:  ret
0879a8c5 +0xa5:  nop
0879a8c6 +0xa6:  lea    0x0(%esi),%esi
0879a8c9 +0xa9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::DSS::sign @ 0x879a820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DSS::sign(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&) */

void __thiscall
yaSSL::DSS::sign(DSS *this,uchar *param_1,uchar *param_2,uint param_3,RandomPool *param_4)

{
  uint uVar1;
  DSA_Signer local_30 [4];
  int local_2c;
  void *local_28;
  int local_1c;
  void *local_18;
  
  TaoCrypt::DSA_Signer::DSA_Signer(local_30,(DSA_PrivateKey *)(*(int *)(this + 4) + 0x40));
  TaoCrypt::DSA_Signer::Sign(local_30,param_2,param_1,*(RandomNumberGenerator **)param_4);
  uVar1 = 0;
  memset(local_18,0,local_1c << 2);
  operator_delete__(local_18,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  return;
}
```
