# Gcd

`_ZN8TaoCrypt7Integer3GcdERKS0_S2_`

`TaoCrypt::Integer::Gcd(TaoCrypt::Integer const&, TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875f760` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875f760  _ZN8TaoCrypt7Integer3GcdERKS0_S2_
#           TaoCrypt::Integer::Gcd(TaoCrypt::Integer const&, TaoCrypt::Integer const&)
# range [0x0875f760, 0x0875f859]
0875f760 +0x00:  push   %ebp
0875f761 +0x01:  mov    %esp,%ebp
0875f763 +0x03:  push   %edi
0875f764 +0x04:  push   %esi
0875f765 +0x05:  push   %ebx
0875f766 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
0875f76b +0x0b:  add    $0xc0d42d,%ebx
0875f771 +0x11:  sub    $0x5c,%esp
0875f774 +0x14:  mov    0x8(%ebp),%esi
0875f777 +0x17:  mov    -0x40(%ebx),%eax
0875f77d +0x1d:  mov    -0x398(%ebx),%edx
0875f783 +0x23:  add    $0x8,%eax
0875f786 +0x26:  lea    0x8(%edx),%edi
0875f789 +0x29:  mov    %eax,-0x40(%ebp)
0875f78c +0x2c:  lea    -0x38(%ebp),%edx
0875f78f +0x2f:  lea    -0x44(%ebp),%eax
0875f792 +0x32:  mov    %eax,-0x3c(%ebp)
0875f795 +0x35:  mov    %eax,-0x50(%ebp)
0875f798 +0x38:  mov    %edi,-0x44(%ebp)
0875f79b +0x3b:  mov    %edx,(%esp)
0875f79e +0x3e:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0875f7a3 +0x43:  mov    -0x50c(%ebx),%edx
0875f7a9 +0x49:  lea    -0x28(%ebp),%ecx
0875f7ac +0x4c:  mov    %ecx,(%esp)
0875f7af +0x4f:  add    $0x8,%edx
0875f7b2 +0x52:  mov    %edx,-0x44(%ebp)
0875f7b5 +0x55:  mov    %edx,-0x4c(%ebp)
0875f7b8 +0x58:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0875f7bd +0x5d:  mov    0x10(%ebp),%ecx
0875f7c0 +0x60:  mov    -0x50(%ebp),%eax
0875f7c3 +0x63:  mov    %ecx,0x8(%esp)
0875f7c7 +0x67:  mov    0xc(%ebp),%ecx
0875f7ca +0x6a:  mov    %eax,(%esp)
0875f7cd +0x6d:  mov    %ecx,0x4(%esp)
0875f7d1 +0x71:  call   087a54e0 <_ZNK8TaoCrypt23AbstractEuclideanDomain3GcdERKNS_7IntegerES3_>  ; TaoCrypt::AbstractEuclideanDomain::Gcd(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
0875f7d6 +0x76:  mov    %esi,(%esp)
0875f7d9 +0x79:  mov    %eax,0x4(%esp)
0875f7dd +0x7d:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0875f7e2 +0x82:  mov    -0x4c(%ebp),%edx
0875f7e5 +0x85:  mov    -0x28(%ebp),%eax
0875f7e8 +0x88:  movl   $0x0,0x4(%esp)
0875f7f0 +0x90:  mov    %edx,-0x44(%ebp)
0875f7f3 +0x93:  mov    -0x24(%ebp),%edx
0875f7f6 +0x96:  shl    $0x2,%eax
0875f7f9 +0x99:  mov    %eax,0x8(%esp)
0875f7fd +0x9d:  mov    %edx,(%esp)
0875f800 +0xa0:  mov    %edx,-0x4c(%ebp)
0875f803 +0xa3:  call   0807dcc0 <_init+0x5b8>
0875f808 +0xa8:  mov    -0x4c(%ebp),%edx
0875f80b +0xab:  movb   $0x0,0x4(%esp)
0875f810 +0xb0:  mov    %edx,(%esp)
0875f813 +0xb3:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0875f818 +0xb8:  mov    -0x38(%ebp),%eax
0875f81b +0xbb:  mov    %edi,-0x44(%ebp)
0875f81e +0xbe:  mov    -0x34(%ebp),%edi
0875f821 +0xc1:  movl   $0x0,0x4(%esp)
0875f829 +0xc9:  shl    $0x2,%eax
0875f82c +0xcc:  mov    %edi,(%esp)
0875f82f +0xcf:  mov    %eax,0x8(%esp)
0875f833 +0xd3:  call   0807dcc0 <_init+0x5b8>
0875f838 +0xd8:  mov    %edi,(%esp)
0875f83b +0xdb:  movb   $0x0,0x4(%esp)
0875f840 +0xe0:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0875f845 +0xe5:  add    $0x5c,%esp
0875f848 +0xe8:  mov    %esi,%eax
0875f84a +0xea:  pop    %ebx
0875f84b +0xeb:  pop    %esi
0875f84c +0xec:  pop    %edi
0875f84d +0xed:  pop    %ebp
0875f84e +0xee:  ret    $0x4
0875f851 +0xf1:  nop
0875f852 +0xf2:  lea    0x0(%esi,%eiz,1),%esi
0875f859 +0xf9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::Gcd @ 0x875f760

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Gcd(TaoCrypt::Integer const&, TaoCrypt::Integer const&) */

Integer * __thiscall TaoCrypt::Integer::Gcd(Integer *this,Integer *param_1,Integer *param_2)

{
  undefined *puVar1;
  Integer *pIVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *local_48;
  undefined *local_44;
  AbstractEuclideanDomain *local_40;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x875f76b;
  local_44 = PTR_vtable_0936cb58 + 8;
  puVar1 = PTR_vtable_0936c800 + 8;
  local_48 = puVar1;
  local_40 = (AbstractEuclideanDomain *)&local_48;
  Integer((Integer *)&local_3c);
  puVar3 = PTR_vtable_0936c68c + 8;
  local_48 = puVar3;
  Integer((Integer *)&local_2c);
  pIVar2 = (Integer *)
           AbstractEuclideanDomain::Gcd((AbstractEuclideanDomain *)&local_48,param_1,param_2);
  Integer(this,pIVar2);
  uVar4 = 0;
  local_48 = puVar3;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar4 & 0xffffff00);
  uVar4 = 0;
  local_48 = puVar1;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar4 & 0xffffff00);
  return this;
}
```
