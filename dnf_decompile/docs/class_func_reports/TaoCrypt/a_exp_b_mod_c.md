# a_exp_b_mod_c

`_ZN8TaoCrypt13a_exp_b_mod_cERKNS_7IntegerES2_S2_`

`TaoCrypt::a_exp_b_mod_c(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0875f630` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875f630  _ZN8TaoCrypt13a_exp_b_mod_cERKNS_7IntegerES2_S2_
#           TaoCrypt::a_exp_b_mod_c(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
# range [0x0875f630, 0x0875f759]
0875f630 +0x000:  push   %ebp
0875f631 +0x001:  mov    %esp,%ebp
0875f633 +0x003:  push   %edi
0875f634 +0x004:  push   %esi
0875f635 +0x005:  push   %ebx
0875f636 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0875f63b +0x00b:  add    $0xc0d55d,%ebx
0875f641 +0x011:  sub    $0x6c,%esp
0875f644 +0x014:  mov    0x14(%ebp),%edx
0875f647 +0x017:  mov    0x8(%ebp),%esi
0875f64a +0x01a:  mov    %edx,0x4(%esp)
0875f64e +0x01e:  mov    %edx,-0x60(%ebp)
0875f651 +0x021:  mov    -0x40(%ebx),%eax
0875f657 +0x027:  mov    -0x2b0(%ebx),%ecx
0875f65d +0x02d:  add    $0x8,%eax
0875f660 +0x030:  lea    0x8(%ecx),%edi
0875f663 +0x033:  mov    %eax,-0x50(%ebp)
0875f666 +0x036:  lea    -0x48(%ebp),%ecx
0875f669 +0x039:  lea    -0x54(%ebp),%eax
0875f66c +0x03c:  mov    %ecx,(%esp)
0875f66f +0x03f:  mov    %eax,-0x4c(%ebp)
0875f672 +0x042:  mov    %eax,-0x5c(%ebp)
0875f675 +0x045:  mov    %edi,-0x54(%ebp)
0875f678 +0x048:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0875f67d +0x04d:  mov    -0x60(%ebp),%edx
0875f680 +0x050:  mov    (%edx),%edx
0875f682 +0x052:  movl   $0x0,0x4(%esp)
0875f68a +0x05a:  mov    %edx,0x8(%esp)
0875f68e +0x05e:  lea    -0x38(%ebp),%edx
0875f691 +0x061:  mov    %edx,(%esp)
0875f694 +0x064:  call   0875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>  ; TaoCrypt::Integer::Integer(unsigned int, unsigned int)
0875f699 +0x069:  lea    -0x28(%ebp),%edx
0875f69c +0x06c:  mov    %edx,(%esp)
0875f69f +0x06f:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0875f6a4 +0x074:  mov    0x10(%ebp),%edx
0875f6a7 +0x077:  mov    -0x5c(%ebp),%eax
0875f6aa +0x07a:  mov    %esi,(%esp)
0875f6ad +0x07d:  mov    %edx,0xc(%esp)
0875f6b1 +0x081:  mov    0xc(%ebp),%edx
0875f6b4 +0x084:  mov    %eax,0x4(%esp)
0875f6b8 +0x088:  mov    %edx,0x8(%esp)
0875f6bc +0x08c:  call   087a3e60 <_ZNK8TaoCrypt12AbstractRing12ExponentiateERKNS_7IntegerES3_>  ; TaoCrypt::AbstractRing::Exponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
0875f6c1 +0x091:  mov    -0x28(%ebp),%eax
0875f6c4 +0x094:  mov    %edi,-0x54(%ebp)
0875f6c7 +0x097:  mov    -0x24(%ebp),%edi
0875f6ca +0x09a:  shl    $0x2,%eax
0875f6cd +0x09d:  sub    $0x4,%esp
0875f6d0 +0x0a0:  mov    %edi,(%esp)
0875f6d3 +0x0a3:  mov    %eax,0x8(%esp)
0875f6d7 +0x0a7:  movl   $0x0,0x4(%esp)
0875f6df +0x0af:  call   0807dcc0 <_init+0x5b8>
0875f6e4 +0x0b4:  mov    %edi,(%esp)
0875f6e7 +0x0b7:  movb   $0x0,0x4(%esp)
0875f6ec +0x0bc:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0875f6f1 +0x0c1:  mov    -0x38(%ebp),%eax
0875f6f4 +0x0c4:  mov    -0x34(%ebp),%edi
0875f6f7 +0x0c7:  movl   $0x0,0x4(%esp)
0875f6ff +0x0cf:  shl    $0x2,%eax
0875f702 +0x0d2:  mov    %edi,(%esp)
0875f705 +0x0d5:  mov    %eax,0x8(%esp)
0875f709 +0x0d9:  call   0807dcc0 <_init+0x5b8>
0875f70e +0x0de:  mov    %edi,(%esp)
0875f711 +0x0e1:  movb   $0x0,0x4(%esp)
0875f716 +0x0e6:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0875f71b +0x0eb:  mov    -0x48(%ebp),%eax
0875f71e +0x0ee:  mov    -0x44(%ebp),%edi
0875f721 +0x0f1:  movl   $0x0,0x4(%esp)
0875f729 +0x0f9:  shl    $0x2,%eax
0875f72c +0x0fc:  mov    %edi,(%esp)
0875f72f +0x0ff:  mov    %eax,0x8(%esp)
0875f733 +0x103:  call   0807dcc0 <_init+0x5b8>
0875f738 +0x108:  mov    %edi,(%esp)
0875f73b +0x10b:  movb   $0x0,0x4(%esp)
0875f740 +0x110:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0875f745 +0x115:  lea    -0xc(%ebp),%esp
0875f748 +0x118:  mov    %esi,%eax
0875f74a +0x11a:  pop    %ebx
0875f74b +0x11b:  pop    %esi
0875f74c +0x11c:  pop    %edi
0875f74d +0x11d:  pop    %ebp
0875f74e +0x11e:  ret    $0x4
0875f751 +0x121:  nop
0875f752 +0x122:  lea    0x0(%esi,%eiz,1),%esi
0875f759 +0x129:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::a_exp_b_mod_c @ 0x875f630

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::a_exp_b_mod_c(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer
   const&) */

TaoCrypt * __thiscall
TaoCrypt::a_exp_b_mod_c(TaoCrypt *this,Integer *param_1,Integer *param_2,Integer *param_3)

{
  undefined *puVar1;
  size_t __n;
  uint uVar2;
  undefined *local_58;
  undefined *local_54;
  Integer *local_50;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x875f63b;
  local_54 = PTR_vtable_0936cb58 + 8;
  puVar1 = PTR_vtable_0936c8e8 + 8;
  local_58 = puVar1;
  local_50 = (Integer *)&local_58;
  Integer::Integer((Integer *)&local_4c,param_3);
  Integer::Integer((Integer *)&local_3c,0,*(uint *)param_3);
  Integer::Integer((Integer *)&local_2c);
  AbstractRing::Exponentiate((Integer *)this,(Integer *)&local_58);
  __n = local_2c << 2;
  uVar2 = 0;
  local_58 = puVar1;
  memset(local_28,0,__n);
  operator_delete__(local_28,uVar2 & 0xffffff00,__n,param_2);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48,uVar2 & 0xffffff00);
  return this;
}
```
