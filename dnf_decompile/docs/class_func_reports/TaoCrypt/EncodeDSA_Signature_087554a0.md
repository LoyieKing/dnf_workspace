# EncodeDSA_Signature

`_ZN8TaoCrypt19EncodeDSA_SignatureEPKhPh`

`TaoCrypt::EncodeDSA_Signature(unsigned char const*, unsigned char*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x087554a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087554a0  _ZN8TaoCrypt19EncodeDSA_SignatureEPKhPh
#           TaoCrypt::EncodeDSA_Signature(unsigned char const*, unsigned char*)
# range [0x087554a0, 0x0875556c]
087554a0 +0x00:  push   %ebp
087554a1 +0x01:  mov    %esp,%ebp
087554a3 +0x03:  push   %edi
087554a4 +0x04:  push   %esi
087554a5 +0x05:  push   %ebx
087554a6 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
087554ab +0x0b:  add    $0xc176ed,%ebx
087554b1 +0x11:  sub    $0x3c,%esp
087554b4 +0x14:  mov    0x8(%ebp),%edi
087554b7 +0x17:  lea    -0x28(%ebp),%esi
087554ba +0x1a:  mov    %esi,(%esp)
087554bd +0x1d:  movl   $0x0,0xc(%esp)
087554c5 +0x25:  mov    %edi,0x4(%esp)
087554c9 +0x29:  add    $0x14,%edi
087554cc +0x2c:  movl   $0x14,0x8(%esp)
087554d4 +0x34:  call   08761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Integer(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
087554d9 +0x39:  mov    %edi,0x4(%esp)
087554dd +0x3d:  lea    -0x38(%ebp),%edi
087554e0 +0x40:  mov    %edi,(%esp)
087554e3 +0x43:  movl   $0x0,0xc(%esp)
087554eb +0x4b:  movl   $0x14,0x8(%esp)
087554f3 +0x53:  call   08761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Integer(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
087554f8 +0x58:  mov    0xc(%ebp),%eax
087554fb +0x5b:  mov    %edi,0x4(%esp)
087554ff +0x5f:  mov    %esi,(%esp)
08755502 +0x62:  mov    %eax,0x8(%esp)
08755506 +0x66:  call   087545b0 <_ZN8TaoCrypt19EncodeDSA_SignatureERKNS_7IntegerES2_Ph>  ; TaoCrypt::EncodeDSA_Signature(TaoCrypt::Integer const&, TaoCrypt::Integer const&, unsigned char*)
0875550b +0x6b:  mov    -0x34(%ebp),%esi
0875550e +0x6e:  movl   $0x0,0x4(%esp)
08755516 +0x76:  mov    %esi,(%esp)
08755519 +0x79:  mov    %eax,%edi
0875551b +0x7b:  mov    -0x38(%ebp),%eax
0875551e +0x7e:  shl    $0x2,%eax
08755521 +0x81:  mov    %eax,0x8(%esp)
08755525 +0x85:  call   0807dcc0 <_init+0x5b8>
0875552a +0x8a:  mov    %esi,(%esp)
0875552d +0x8d:  movb   $0x0,0x4(%esp)
08755532 +0x92:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755537 +0x97:  mov    -0x28(%ebp),%eax
0875553a +0x9a:  mov    -0x24(%ebp),%esi
0875553d +0x9d:  movl   $0x0,0x4(%esp)
08755545 +0xa5:  shl    $0x2,%eax
08755548 +0xa8:  mov    %esi,(%esp)
0875554b +0xab:  mov    %eax,0x8(%esp)
0875554f +0xaf:  call   0807dcc0 <_init+0x5b8>
08755554 +0xb4:  mov    %esi,(%esp)
08755557 +0xb7:  movb   $0x0,0x4(%esp)
0875555c +0xbc:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755561 +0xc1:  add    $0x3c,%esp
08755564 +0xc4:  mov    %edi,%eax
08755566 +0xc6:  pop    %ebx
08755567 +0xc7:  pop    %esi
08755568 +0xc8:  pop    %edi
08755569 +0xc9:  pop    %ebp
0875556a +0xca:  ret
0875556b +0xcb:  nop
0875556c +0xcc:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::EncodeDSA_Signature @ 0x87554a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::EncodeDSA_Signature(unsigned char const*, unsigned char*) */

undefined4 TaoCrypt::EncodeDSA_Signature(uchar *param_1,uchar *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x87554ab;
  Integer::Integer((Integer *)&local_2c,param_1,0x14,0);
  Integer::Integer((Integer *)&local_3c,param_1 + 0x14,0x14,0);
  uVar1 = EncodeDSA_Signature((Integer *)&local_2c,(Integer *)&local_3c,param_2);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  return uVar1;
}
```
