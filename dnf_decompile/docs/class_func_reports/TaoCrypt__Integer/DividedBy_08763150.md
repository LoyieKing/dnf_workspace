# DividedBy

`_ZNK8TaoCrypt7Integer9DividedByERKS0_`

`TaoCrypt::Integer::DividedBy(TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08763150` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08763150  _ZNK8TaoCrypt7Integer9DividedByERKS0_
#           TaoCrypt::Integer::DividedBy(TaoCrypt::Integer const&) const
# range [0x08763150, 0x087631d9]
08763150 +0x00:  push   %ebp
08763151 +0x01:  mov    %esp,%ebp
08763153 +0x03:  sub    $0x38,%esp
08763156 +0x06:  mov    %ebx,-0xc(%ebp)
08763159 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0876315e +0x0e:  add    $0xc09a3a,%ebx
08763164 +0x14:  mov    %esi,-0x8(%ebp)
08763167 +0x17:  mov    0x8(%ebp),%esi
0876316a +0x1a:  mov    %edi,-0x4(%ebp)
0876316d +0x1d:  lea    -0x28(%ebp),%edi
08763170 +0x20:  mov    %edi,(%esp)
08763173 +0x23:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08763178 +0x28:  mov    %esi,(%esp)
0876317b +0x2b:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08763180 +0x30:  mov    0x10(%ebp),%eax
08763183 +0x33:  mov    %esi,0x4(%esp)
08763187 +0x37:  mov    %edi,(%esp)
0876318a +0x3a:  mov    %eax,0xc(%esp)
0876318e +0x3e:  mov    0xc(%ebp),%eax
08763191 +0x41:  mov    %eax,0x8(%esp)
08763195 +0x45:  call   08762520 <_ZN8TaoCrypt7Integer6DivideERS0_S1_RKS0_S3_>  ; TaoCrypt::Integer::Divide(TaoCrypt::Integer&, TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
0876319a +0x4a:  mov    -0x28(%ebp),%eax
0876319d +0x4d:  mov    -0x24(%ebp),%edi
087631a0 +0x50:  movl   $0x0,0x4(%esp)
087631a8 +0x58:  shl    $0x2,%eax
087631ab +0x5b:  mov    %edi,(%esp)
087631ae +0x5e:  mov    %eax,0x8(%esp)
087631b2 +0x62:  call   0807dcc0 <_init+0x5b8>
087631b7 +0x67:  mov    %edi,(%esp)
087631ba +0x6a:  movb   $0x0,0x4(%esp)
087631bf +0x6f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087631c4 +0x74:  mov    %esi,%eax
087631c6 +0x76:  mov    -0xc(%ebp),%ebx
087631c9 +0x79:  mov    -0x8(%ebp),%esi
087631cc +0x7c:  mov    -0x4(%ebp),%edi
087631cf +0x7f:  mov    %ebp,%esp
087631d1 +0x81:  pop    %ebp
087631d2 +0x82:  ret    $0x4
087631d5 +0x85:  nop
087631d6 +0x86:  lea    0x0(%esi),%esi
087631d9 +0x89:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::DividedBy @ 0x8763150

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::DividedBy(TaoCrypt::Integer const&) const */

Integer * TaoCrypt::Integer::DividedBy(Integer *param_1)

{
  Integer *in_stack_00000008;
  Integer *in_stack_0000000c;
  uint uVar1;
  int local_2c;
  void *local_28;
  
  Integer((Integer *)&local_2c);
  Integer(param_1);
  Divide((Integer *)&local_2c,param_1,in_stack_00000008,in_stack_0000000c);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  return param_1;
}
```
