# ApplyFunction

`_ZNK8TaoCrypt13RSA_PublicKey13ApplyFunctionERKNS_7IntegerE`

`TaoCrypt::RSA_PublicKey::ApplyFunction(TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RSA_PublicKey` | `0x08767e00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767e00  _ZNK8TaoCrypt13RSA_PublicKey13ApplyFunctionERKNS_7IntegerE
#           TaoCrypt::RSA_PublicKey::ApplyFunction(TaoCrypt::Integer const&) const
# range [0x08767e00, 0x08767e49]
08767e00 +0x00:  push   %ebp
08767e01 +0x01:  mov    %esp,%ebp
08767e03 +0x03:  sub    $0x18,%esp
08767e06 +0x06:  mov    0xc(%ebp),%eax
08767e09 +0x09:  mov    %ebx,-0x8(%ebp)
08767e0c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08767e11 +0x11:  add    $0xc04d87,%ebx
08767e17 +0x17:  mov    %esi,-0x4(%ebp)
08767e1a +0x1a:  mov    0x8(%ebp),%esi
08767e1d +0x1d:  mov    %eax,0xc(%esp)
08767e21 +0x21:  add    $0x10,%eax
08767e24 +0x24:  mov    %eax,0x8(%esp)
08767e28 +0x28:  mov    0x10(%ebp),%eax
08767e2b +0x2b:  mov    %esi,(%esp)
08767e2e +0x2e:  mov    %eax,0x4(%esp)
08767e32 +0x32:  call   0875f630 <_ZN8TaoCrypt13a_exp_b_mod_cERKNS_7IntegerES2_S2_>  ; TaoCrypt::a_exp_b_mod_c(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08767e37 +0x37:  mov    %esi,%eax
08767e39 +0x39:  mov    -0x8(%ebp),%ebx
08767e3c +0x3c:  mov    -0x4(%ebp),%esi
08767e3f +0x3f:  sub    $0x4,%esp
08767e42 +0x42:  mov    %ebp,%esp
08767e44 +0x44:  pop    %ebp
08767e45 +0x45:  ret    $0x4
08767e48 +0x48:  nop
08767e49 +0x49:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::RSA_PublicKey::ApplyFunction @ 0x8767e00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_PublicKey::ApplyFunction(TaoCrypt::Integer const&) const */

Integer * TaoCrypt::RSA_PublicKey::ApplyFunction(Integer *param_1)

{
  Integer *in_stack_00000008;
  Integer *in_stack_0000000c;
  
  a_exp_b_mod_c((TaoCrypt *)param_1,in_stack_0000000c,in_stack_00000008 + 0x10,in_stack_00000008);
  return param_1;
}
```
