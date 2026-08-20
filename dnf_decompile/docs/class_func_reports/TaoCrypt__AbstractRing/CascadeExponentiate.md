# CascadeExponentiate

`_ZNK8TaoCrypt12AbstractRing19CascadeExponentiateERKNS_7IntegerES3_S3_S3_`

`TaoCrypt::AbstractRing::CascadeExponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AbstractRing` | `0x087a4840` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a4840  _ZNK8TaoCrypt12AbstractRing19CascadeExponentiateERKNS_7IntegerES3_S3_S3_
#           TaoCrypt::AbstractRing::CascadeExponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
# range [0x087a4840, 0x087a489e]
087a4840 +0x00:  push   %ebp
087a4841 +0x01:  mov    %esp,%ebp
087a4843 +0x03:  sub    $0x28,%esp
087a4846 +0x06:  mov    0xc(%ebp),%eax
087a4849 +0x09:  mov    %ebx,-0x8(%ebp)
087a484c +0x0c:  mov    %esi,-0x4(%ebp)
087a484f +0x0f:  mov    0x8(%ebp),%esi
087a4852 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
087a4857 +0x17:  add    $0xbc8341,%ebx
087a485d +0x1d:  mov    (%eax),%edx
087a485f +0x1f:  mov    %eax,(%esp)
087a4862 +0x22:  call   *0x5c(%edx)
087a4865 +0x25:  mov    0x1c(%ebp),%edx
087a4868 +0x28:  mov    %esi,(%esp)
087a486b +0x2b:  mov    %edx,0x14(%esp)
087a486f +0x2f:  mov    0x18(%ebp),%edx
087a4872 +0x32:  mov    %eax,0x4(%esp)
087a4876 +0x36:  mov    %edx,0x10(%esp)
087a487a +0x3a:  mov    0x14(%ebp),%edx
087a487d +0x3d:  mov    %edx,0xc(%esp)
087a4881 +0x41:  mov    0x10(%ebp),%edx
087a4884 +0x44:  mov    %edx,0x8(%esp)
087a4888 +0x48:  call   087a40d0 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_>  ; TaoCrypt::AbstractGroup::CascadeScalarMultiply(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
087a488d +0x4d:  mov    %esi,%eax
087a488f +0x4f:  mov    -0x8(%ebp),%ebx
087a4892 +0x52:  mov    -0x4(%ebp),%esi
087a4895 +0x55:  sub    $0x4,%esp
087a4898 +0x58:  mov    %ebp,%esp
087a489a +0x5a:  pop    %ebp
087a489b +0x5b:  ret    $0x4
087a489e +0x5e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::AbstractRing::CascadeExponentiate @ 0x87a4840

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractRing::CascadeExponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&,
   TaoCrypt::Integer const&, TaoCrypt::Integer const&) const */

Integer * TaoCrypt::AbstractRing::CascadeExponentiate
                    (Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  Integer *pIVar1;
  
  pIVar1 = (Integer *)(**(code **)(*(int *)param_2 + 0x5c))(param_2);
  AbstractGroup::CascadeScalarMultiply(param_1,pIVar1,param_3,param_4);
  return param_1;
}
```
