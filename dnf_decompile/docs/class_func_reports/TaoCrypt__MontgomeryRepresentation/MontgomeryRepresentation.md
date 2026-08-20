# MontgomeryRepresentation

`_ZN8TaoCrypt24MontgomeryRepresentationC1ERKNS_7IntegerE`

`TaoCrypt::MontgomeryRepresentation::MontgomeryRepresentation(TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MontgomeryRepresentation` | `0x0875f910` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875f910  _ZN8TaoCrypt24MontgomeryRepresentationC1ERKNS_7IntegerE
#           TaoCrypt::MontgomeryRepresentation::MontgomeryRepresentation(TaoCrypt::Integer const&)
# range [0x0875f910, 0x0875fa29]
0875f910 +0x000:  push   %ebp
0875f911 +0x001:  mov    %esp,%ebp
0875f913 +0x003:  push   %edi
0875f914 +0x004:  push   %esi
0875f915 +0x005:  push   %ebx
0875f916 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0875f91b +0x00b:  add    $0xc0d27d,%ebx
0875f921 +0x011:  sub    $0x2c,%esp
0875f924 +0x014:  mov    0x8(%ebp),%esi
0875f927 +0x017:  mov    0xc(%ebp),%edi
0875f92a +0x01a:  mov    %esi,0x8(%esi)
0875f92d +0x01d:  mov    -0x40(%ebx),%eax
0875f933 +0x023:  add    $0x8,%eax
0875f936 +0x026:  mov    %eax,0x4(%esi)
0875f939 +0x029:  mov    -0x2b0(%ebx),%eax
0875f93f +0x02f:  add    $0x8,%eax
0875f942 +0x032:  mov    %eax,(%esi)
0875f944 +0x034:  lea    0xc(%esi),%eax
0875f947 +0x037:  mov    %eax,(%esp)
0875f94a +0x03a:  mov    %edi,0x4(%esp)
0875f94e +0x03e:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0875f953 +0x043:  mov    (%edi),%eax
0875f955 +0x045:  movl   $0x0,0x4(%esp)
0875f95d +0x04d:  mov    %eax,0x8(%esp)
0875f961 +0x051:  lea    0x1c(%esi),%eax
0875f964 +0x054:  mov    %eax,(%esp)
0875f967 +0x057:  call   0875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>  ; TaoCrypt::Integer::Integer(unsigned int, unsigned int)
0875f96c +0x05c:  lea    0x2c(%esi),%eax
0875f96f +0x05f:  mov    %eax,(%esp)
0875f972 +0x062:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0875f977 +0x067:  mov    -0x52c(%ebx),%eax
0875f97d +0x06d:  add    $0x8,%eax
0875f980 +0x070:  mov    %eax,(%esi)
0875f982 +0x072:  mov    0xc(%esi),%eax
0875f985 +0x075:  movl   $0x0,0x4(%esp)
0875f98d +0x07d:  mov    %eax,0x8(%esp)
0875f991 +0x081:  lea    0x3c(%esi),%eax
0875f994 +0x084:  mov    %eax,(%esp)
0875f997 +0x087:  call   0875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>  ; TaoCrypt::Integer::Integer(unsigned int, unsigned int)
0875f99c +0x08c:  mov    0xc(%esi),%eax
0875f99f +0x08f:  lea    (%eax,%eax,4),%edx
0875f9a2 +0x092:  xor    %eax,%eax
0875f9a4 +0x094:  test   %edx,%edx
0875f9a6 +0x096:  mov    %edx,0x4c(%esi)
0875f9a9 +0x099:  je     0875f9bb <+0xab>
0875f9ab +0x09b:  shl    $0x2,%edx
0875f9ae +0x09e:  movb   $0x0,0x4(%esp)
0875f9b3 +0x0a3:  mov    %edx,(%esp)
0875f9b6 +0x0a6:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0875f9bb +0x0ab:  mov    0x4c(%esi),%edi
0875f9be +0x0ae:  mov    %eax,0x50(%esi)
0875f9c1 +0x0b1:  mov    %eax,0x4(%esp)
0875f9c5 +0x0b5:  lea    0x54(%esi),%eax
0875f9c8 +0x0b8:  movl   $0x0,0x10(%esp)
0875f9d0 +0x0c0:  mov    %edi,0xc(%esp)
0875f9d4 +0x0c4:  mov    %edi,0x8(%esp)
0875f9d8 +0x0c8:  mov    %eax,(%esp)
0875f9db +0x0cb:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
0875f9e0 +0x0d0:  mov    %edi,0x4c(%esi)
0875f9e3 +0x0d3:  shl    $0x2,%edi
0875f9e6 +0x0d6:  mov    %eax,0x50(%esi)
0875f9e9 +0x0d9:  mov    %edi,0x8(%esp)
0875f9ed +0x0dd:  movl   $0x0,0x4(%esp)
0875f9f5 +0x0e5:  mov    %eax,(%esp)
0875f9f8 +0x0e8:  call   0807dcc0 <_init+0x5b8>
0875f9fd +0x0ed:  mov    0xc(%esi),%eax
0875fa00 +0x0f0:  mov    %eax,0xc(%esp)
0875fa04 +0x0f4:  mov    0x10(%esi),%eax
0875fa07 +0x0f7:  mov    %eax,0x8(%esp)
0875fa0b +0x0fb:  mov    0x50(%esi),%eax
0875fa0e +0x0fe:  mov    %eax,0x4(%esp)
0875fa12 +0x102:  mov    0x40(%esi),%eax
0875fa15 +0x105:  mov    %eax,(%esp)
0875fa18 +0x108:  call   0875dfd0 <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj>  ; TaoCrypt::RecursiveInverseModPower2(unsigned int*, unsigned int*, unsigned int const*, unsigned int)
0875fa1d +0x10d:  add    $0x2c,%esp
0875fa20 +0x110:  pop    %ebx
0875fa21 +0x111:  pop    %esi
0875fa22 +0x112:  pop    %edi
0875fa23 +0x113:  pop    %ebp
0875fa24 +0x114:  ret
0875fa25 +0x115:  lea    0x0(%esi,%eiz,1),%esi
0875fa29 +0x119:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::MontgomeryRepresentation::MontgomeryRepresentation @ 0x875f910

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MontgomeryRepresentation::MontgomeryRepresentation(TaoCrypt::Integer const&) */

void __thiscall
TaoCrypt::MontgomeryRepresentation::MontgomeryRepresentation
          (MontgomeryRepresentation *this,Integer *param_1)

{
  int iVar1;
  uint *puVar2;
  void *__s;
  uint uVar3;
  
  *(MontgomeryRepresentation **)(this + 8) = this;
  *(undefined **)(this + 4) = PTR_vtable_0936cb58 + 8;
  *(undefined **)this = PTR_vtable_0936c8e8 + 8;
  Integer::Integer((Integer *)(this + 0xc),param_1);
  Integer::Integer((Integer *)(this + 0x1c),0,*(uint *)param_1);
  Integer::Integer((Integer *)(this + 0x2c));
  *(undefined **)this = PTR_vtable_0936c66c + 8;
  uVar3 = 0;
  Integer::Integer((Integer *)(this + 0x3c),0,*(uint *)(this + 0xc));
  iVar1 = *(int *)(this + 0xc) * 5;
  puVar2 = (uint *)0x0;
  *(int *)(this + 0x4c) = iVar1;
  if (iVar1 != 0) {
    puVar2 = operator_new__(*(int *)(this + 0xc) * 0x14,uVar3 & 0xffffff00);
  }
  uVar3 = *(uint *)(this + 0x4c);
  *(uint **)(this + 0x50) = puVar2;
  __s = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                          ((AllocatorWithCleanup<unsigned_int> *)(this + 0x54),puVar2,uVar3,uVar3,
                           false);
  *(uint *)(this + 0x4c) = uVar3;
  *(void **)(this + 0x50) = __s;
  memset(__s,0,uVar3 << 2);
  RecursiveInverseModPower2
            (*(uint **)(this + 0x40),*(uint **)(this + 0x50),*(uint **)(this + 0x10),
             *(uint *)(this + 0xc));
  return;
}
```
