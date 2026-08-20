# a_times_b_mod_c

`_ZN8TaoCrypt15a_times_b_mod_cERKNS_7IntegerES2_S2_`

`TaoCrypt::a_times_b_mod_c(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x08762990` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08762990  _ZN8TaoCrypt15a_times_b_mod_cERKNS_7IntegerES2_S2_
#           TaoCrypt::a_times_b_mod_c(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
# range [0x08762990, 0x08762a1a]
08762990 +0x00:  push   %ebp
08762991 +0x01:  mov    %esp,%ebp
08762993 +0x03:  sub    $0x38,%esp
08762996 +0x06:  mov    0x10(%ebp),%eax
08762999 +0x09:  mov    %ebx,-0xc(%ebp)
0876299c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087629a1 +0x11:  add    $0xc0a1f7,%ebx
087629a7 +0x17:  mov    %edi,-0x4(%ebp)
087629aa +0x1a:  lea    -0x28(%ebp),%edi
087629ad +0x1d:  mov    %eax,0x8(%esp)
087629b1 +0x21:  mov    0xc(%ebp),%eax
087629b4 +0x24:  mov    %esi,-0x8(%ebp)
087629b7 +0x27:  mov    0x8(%ebp),%esi
087629ba +0x2a:  mov    %edi,(%esp)
087629bd +0x2d:  mov    %eax,0x4(%esp)
087629c1 +0x31:  call   08762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>  ; TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const
087629c6 +0x36:  mov    0x14(%ebp),%eax
087629c9 +0x39:  sub    $0x4,%esp
087629cc +0x3c:  mov    %eax,0x8(%esp)
087629d0 +0x40:  mov    %edi,0x4(%esp)
087629d4 +0x44:  mov    %esi,(%esp)
087629d7 +0x47:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
087629dc +0x4c:  mov    -0x28(%ebp),%eax
087629df +0x4f:  mov    -0x24(%ebp),%edi
087629e2 +0x52:  shl    $0x2,%eax
087629e5 +0x55:  sub    $0x4,%esp
087629e8 +0x58:  mov    %edi,(%esp)
087629eb +0x5b:  mov    %eax,0x8(%esp)
087629ef +0x5f:  movl   $0x0,0x4(%esp)
087629f7 +0x67:  call   0807dcc0 <_init+0x5b8>
087629fc +0x6c:  mov    %edi,(%esp)
087629ff +0x6f:  movb   $0x0,0x4(%esp)
08762a04 +0x74:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762a09 +0x79:  mov    %esi,%eax
08762a0b +0x7b:  mov    -0xc(%ebp),%ebx
08762a0e +0x7e:  mov    -0x8(%ebp),%esi
08762a11 +0x81:  mov    -0x4(%ebp),%edi
08762a14 +0x84:  mov    %ebp,%esp
08762a16 +0x86:  pop    %ebp
08762a17 +0x87:  ret    $0x4
08762a1a +0x8a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::a_times_b_mod_c @ 0x8762990

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::a_times_b_mod_c(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer
   const&) */

Integer * TaoCrypt::a_times_b_mod_c(Integer *param_1,Integer *param_2,Integer *param_3)

{
  uint uVar1;
  int local_2c;
  void *local_28;
  
  Integer::Times((Integer *)&local_2c);
  Integer::Modulo(param_1);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  return param_1;
}
```
