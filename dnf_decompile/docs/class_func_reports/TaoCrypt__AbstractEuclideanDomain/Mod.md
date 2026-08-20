# Mod

`_ZNK8TaoCrypt23AbstractEuclideanDomain3ModERKNS_7IntegerES3_`

`TaoCrypt::AbstractEuclideanDomain::Mod(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AbstractEuclideanDomain` | `0x087a3f20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a3f20  _ZNK8TaoCrypt23AbstractEuclideanDomain3ModERKNS_7IntegerES3_
#           TaoCrypt::AbstractEuclideanDomain::Mod(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
# range [0x087a3f20, 0x087a3fa9]
087a3f20 +0x00:  push   %ebp
087a3f21 +0x01:  mov    %esp,%ebp
087a3f23 +0x03:  sub    $0x58,%esp
087a3f26 +0x06:  mov    %ebx,-0xc(%ebp)
087a3f29 +0x09:  lea    -0x28(%ebp),%eax
087a3f2c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087a3f31 +0x11:  add    $0xbc8c67,%ebx
087a3f37 +0x17:  mov    %esi,-0x8(%ebp)
087a3f3a +0x1a:  mov    %edi,-0x4(%ebp)
087a3f3d +0x1d:  mov    0x8(%ebp),%edi
087a3f40 +0x20:  mov    %eax,(%esp)
087a3f43 +0x23:  mov    %eax,-0x2c(%ebp)
087a3f46 +0x26:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087a3f4b +0x2b:  mov    0x10(%ebp),%ecx
087a3f4e +0x2e:  lea    0xc(%edi),%esi
087a3f51 +0x31:  mov    (%edi),%edx
087a3f53 +0x33:  mov    -0x2c(%ebp),%eax
087a3f56 +0x36:  mov    %esi,0x4(%esp)
087a3f5a +0x3a:  mov    %ecx,0x10(%esp)
087a3f5e +0x3e:  mov    0xc(%ebp),%ecx
087a3f61 +0x41:  mov    %edi,(%esp)
087a3f64 +0x44:  mov    %eax,0x8(%esp)
087a3f68 +0x48:  mov    %ecx,0xc(%esp)
087a3f6c +0x4c:  call   *0x60(%edx)
087a3f6f +0x4f:  mov    -0x28(%ebp),%eax
087a3f72 +0x52:  mov    -0x24(%ebp),%edi
087a3f75 +0x55:  movl   $0x0,0x4(%esp)
087a3f7d +0x5d:  shl    $0x2,%eax
087a3f80 +0x60:  mov    %edi,(%esp)
087a3f83 +0x63:  mov    %eax,0x8(%esp)
087a3f87 +0x67:  call   0807dcc0 <_init+0x5b8>
087a3f8c +0x6c:  mov    %edi,(%esp)
087a3f8f +0x6f:  movb   $0x0,0x4(%esp)
087a3f94 +0x74:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a3f99 +0x79:  mov    %esi,%eax
087a3f9b +0x7b:  mov    -0xc(%ebp),%ebx
087a3f9e +0x7e:  mov    -0x8(%ebp),%esi
087a3fa1 +0x81:  mov    -0x4(%ebp),%edi
087a3fa4 +0x84:  mov    %ebp,%esp
087a3fa6 +0x86:  pop    %ebp
087a3fa7 +0x87:  ret
087a3fa8 +0x88:  nop
087a3fa9 +0x89:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::AbstractEuclideanDomain::Mod @ 0x87a3f20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractEuclideanDomain::Mod(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
    */

AbstractEuclideanDomain * __thiscall
TaoCrypt::AbstractEuclideanDomain::Mod
          (AbstractEuclideanDomain *this,Integer *param_1,Integer *param_2)

{
  uint uVar1;
  int local_2c;
  void *local_28;
  
  Integer::Integer((Integer *)&local_2c);
  (**(code **)(*(int *)this + 0x60))(this,this + 0xc,(Integer *)&local_2c,param_1,param_2);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  return this + 0xc;
}
```
