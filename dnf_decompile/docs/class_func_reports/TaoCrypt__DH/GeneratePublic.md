# GeneratePublic

`_ZN8TaoCrypt2DH14GeneratePublicEPKhPh`

`TaoCrypt::DH::GeneratePublic(unsigned char const*, unsigned char*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DH` | `0x087a8990` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a8990  _ZN8TaoCrypt2DH14GeneratePublicEPKhPh
#           TaoCrypt::DH::GeneratePublic(unsigned char const*, unsigned char*)
# range [0x087a8990, 0x087a8a6e]
087a8990 +0x00:  push   %ebp
087a8991 +0x01:  mov    %esp,%ebp
087a8993 +0x03:  push   %edi
087a8994 +0x04:  push   %esi
087a8995 +0x05:  push   %ebx
087a8996 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
087a899b +0x0b:  add    $0xbc41fd,%ebx
087a89a1 +0x11:  sub    $0x4c,%esp
087a89a4 +0x14:  mov    0x8(%ebp),%esi
087a89a7 +0x17:  lea    -0x38(%ebp),%edi
087a89aa +0x1a:  mov    %esi,(%esp)
087a89ad +0x1d:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
087a89b2 +0x22:  mov    0xc(%ebp),%edx
087a89b5 +0x25:  movl   $0x0,0xc(%esp)
087a89bd +0x2d:  mov    %edx,0x4(%esp)
087a89c1 +0x31:  lea    -0x28(%ebp),%edx
087a89c4 +0x34:  mov    %edx,(%esp)
087a89c7 +0x37:  mov    %eax,-0x3c(%ebp)
087a89ca +0x3a:  mov    %eax,0x8(%esp)
087a89ce +0x3e:  mov    %edx,-0x40(%ebp)
087a89d1 +0x41:  call   08761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Integer(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
087a89d6 +0x46:  mov    -0x40(%ebp),%edx
087a89d9 +0x49:  mov    %esi,0xc(%esp)
087a89dd +0x4d:  add    $0x10,%esi
087a89e0 +0x50:  mov    %esi,0x4(%esp)
087a89e4 +0x54:  mov    %edi,(%esp)
087a89e7 +0x57:  mov    %edx,0x8(%esp)
087a89eb +0x5b:  call   0875f630 <_ZN8TaoCrypt13a_exp_b_mod_cERKNS_7IntegerES2_S2_>  ; TaoCrypt::a_exp_b_mod_c(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
087a89f0 +0x60:  mov    -0x3c(%ebp),%eax
087a89f3 +0x63:  sub    $0x4,%esp
087a89f6 +0x66:  mov    %eax,0x8(%esp)
087a89fa +0x6a:  mov    0x10(%ebp),%eax
087a89fd +0x6d:  mov    %edi,(%esp)
087a8a00 +0x70:  movl   $0x0,0xc(%esp)
087a8a08 +0x78:  mov    %eax,0x4(%esp)
087a8a0c +0x7c:  call   08760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>  ; TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const
087a8a11 +0x81:  mov    -0x38(%ebp),%eax
087a8a14 +0x84:  mov    -0x34(%ebp),%esi
087a8a17 +0x87:  movl   $0x0,0x4(%esp)
087a8a1f +0x8f:  shl    $0x2,%eax
087a8a22 +0x92:  mov    %esi,(%esp)
087a8a25 +0x95:  mov    %eax,0x8(%esp)
087a8a29 +0x99:  call   0807dcc0 <_init+0x5b8>
087a8a2e +0x9e:  mov    %esi,(%esp)
087a8a31 +0xa1:  movb   $0x0,0x4(%esp)
087a8a36 +0xa6:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a8a3b +0xab:  mov    -0x28(%ebp),%eax
087a8a3e +0xae:  mov    -0x24(%ebp),%esi
087a8a41 +0xb1:  movl   $0x0,0x4(%esp)
087a8a49 +0xb9:  shl    $0x2,%eax
087a8a4c +0xbc:  mov    %esi,(%esp)
087a8a4f +0xbf:  mov    %eax,0x8(%esp)
087a8a53 +0xc3:  call   0807dcc0 <_init+0x5b8>
087a8a58 +0xc8:  mov    %esi,(%esp)
087a8a5b +0xcb:  movb   $0x0,0x4(%esp)
087a8a60 +0xd0:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a8a65 +0xd5:  lea    -0xc(%ebp),%esp
087a8a68 +0xd8:  pop    %ebx
087a8a69 +0xd9:  pop    %esi
087a8a6a +0xda:  pop    %edi
087a8a6b +0xdb:  pop    %ebp
087a8a6c +0xdc:  ret
087a8a6d +0xdd:  nop
087a8a6e +0xde:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::DH::GeneratePublic @ 0x87a8990

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH::GeneratePublic(unsigned char const*, unsigned char*) */

void __thiscall TaoCrypt::DH::GeneratePublic(DH *this,uchar *param_1,uchar *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a899b;
  uVar1 = Integer::ByteCount((Integer *)this);
  Integer::Integer((Integer *)&local_2c,param_1,uVar1,0);
  a_exp_b_mod_c((TaoCrypt *)&local_3c,(Integer *)(this + 0x10),(Integer *)&local_2c,(Integer *)this)
  ;
  Integer::Encode((Integer *)&local_3c,param_2,uVar1,0);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  return;
}
```
