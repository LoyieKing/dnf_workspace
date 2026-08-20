# Multiply

`_ZNK8TaoCrypt24MontgomeryRepresentation8MultiplyERKNS_7IntegerES3_`

`TaoCrypt::MontgomeryRepresentation::Multiply(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MontgomeryRepresentation` | `0x0875e4b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875e4b0  _ZNK8TaoCrypt24MontgomeryRepresentation8MultiplyERKNS_7IntegerES3_
#           TaoCrypt::MontgomeryRepresentation::Multiply(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
# range [0x0875e4b0, 0x0875e57c]
0875e4b0 +0x00:  push   %ebp
0875e4b1 +0x01:  mov    %esp,%ebp
0875e4b3 +0x03:  push   %edi
0875e4b4 +0x04:  push   %esi
0875e4b5 +0x05:  push   %ebx
0875e4b6 +0x06:  sub    $0x4c,%esp
0875e4b9 +0x09:  mov    0x8(%ebp),%esi
0875e4bc +0x0c:  mov    0x10(%ebp),%eax
0875e4bf +0x0f:  mov    0xc(%ebp),%edx
0875e4c2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
0875e4c7 +0x17:  add    $0xc0e6d1,%ebx
0875e4cd +0x1d:  mov    0x20(%esi),%ecx
0875e4d0 +0x20:  mov    0x50(%esi),%edi
0875e4d3 +0x23:  mov    %eax,-0x30(%ebp)
0875e4d6 +0x26:  mov    %edx,-0x2c(%ebp)
0875e4d9 +0x29:  mov    %ecx,-0x28(%ebp)
0875e4dc +0x2c:  mov    0xc(%esi),%ecx
0875e4df +0x2f:  mov    %ecx,-0x20(%ebp)
0875e4e2 +0x32:  lea    (%edi,%ecx,8),%ecx
0875e4e5 +0x35:  mov    %ecx,-0x24(%ebp)
0875e4e8 +0x38:  mov    (%eax),%ecx
0875e4ea +0x3a:  mov    %ecx,0x14(%esp)
0875e4ee +0x3e:  mov    0x4(%eax),%ecx
0875e4f1 +0x41:  mov    %ecx,0x10(%esp)
0875e4f5 +0x45:  mov    (%edx),%ecx
0875e4f7 +0x47:  mov    %ecx,0xc(%esp)
0875e4fb +0x4b:  mov    0x4(%edx),%ecx
0875e4fe +0x4e:  mov    %edi,(%esp)
0875e501 +0x51:  mov    %ecx,0x8(%esp)
0875e505 +0x55:  mov    -0x24(%ebp),%ecx
0875e508 +0x58:  mov    %ecx,0x4(%esp)
0875e50c +0x5c:  call   0875c610 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j>  ; TaoCrypt::AsymmetricMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)
0875e511 +0x61:  mov    -0x30(%ebp),%eax
0875e514 +0x64:  mov    -0x2c(%ebp),%edx
0875e517 +0x67:  mov    (%eax),%eax
0875e519 +0x69:  mov    (%edx),%edx
0875e51b +0x6b:  mov    %eax,-0x1c(%ebp)
0875e51e +0x6e:  mov    -0x20(%ebp),%eax
0875e521 +0x71:  add    %eax,%eax
0875e523 +0x73:  sub    %edx,%eax
0875e525 +0x75:  add    -0x1c(%ebp),%edx
0875e528 +0x78:  sub    -0x1c(%ebp),%eax
0875e52b +0x7b:  lea    (%edi,%edx,4),%ecx
0875e52e +0x7e:  je     0875e546 <+0x96>
0875e530 +0x80:  xor    %edx,%edx
0875e532 +0x82:  lea    0x0(%esi),%esi
0875e538 +0x88:  movl   $0x0,(%ecx,%edx,4)
0875e53f +0x8f:  add    $0x1,%edx
0875e542 +0x92:  cmp    %edx,%eax
0875e544 +0x94:  ja     0875e538 <+0x88>
0875e546 +0x96:  mov    -0x20(%ebp),%eax
0875e549 +0x99:  mov    -0x24(%ebp),%ecx
0875e54c +0x9c:  mov    %eax,0x14(%esp)
0875e550 +0xa0:  mov    0x40(%esi),%eax
0875e553 +0xa3:  mov    %eax,0x10(%esp)
0875e557 +0xa7:  mov    0x10(%esi),%eax
0875e55a +0xaa:  mov    %edi,0x8(%esp)
0875e55e +0xae:  mov    %ecx,0x4(%esp)
0875e562 +0xb2:  mov    %eax,0xc(%esp)
0875e566 +0xb6:  mov    -0x28(%ebp),%eax
0875e569 +0xb9:  mov    %eax,(%esp)
0875e56c +0xbc:  call   0875e1e0 <_ZN8TaoCrypt16MontgomeryReduceEPjS0_PKjS2_S2_j>  ; TaoCrypt::MontgomeryReduce(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int const*, unsigned int)
0875e571 +0xc1:  add    $0x4c,%esp
0875e574 +0xc4:  lea    0x1c(%esi),%eax
0875e577 +0xc7:  pop    %ebx
0875e578 +0xc8:  pop    %esi
0875e579 +0xc9:  pop    %edi
0875e57a +0xca:  pop    %ebp
0875e57b +0xcb:  ret
0875e57c +0xcc:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::MontgomeryRepresentation::Multiply @ 0x875e4b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MontgomeryRepresentation::Multiply(TaoCrypt::Integer const&, TaoCrypt::Integer const&)
   const */

MontgomeryRepresentation * __thiscall
TaoCrypt::MontgomeryRepresentation::Multiply
          (MontgomeryRepresentation *this,Integer *param_1,Integer *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = *(uint **)(this + 0x20);
  puVar2 = *(uint **)(this + 0x50);
  uVar3 = *(uint *)(this + 0xc);
  AsymmetricMultiply(puVar2,puVar2 + uVar3 * 2,*(uint **)(param_1 + 4),*(uint *)param_1,
                     *(uint **)(param_2 + 4),*(uint *)param_2);
  iVar4 = *(int *)param_2;
  iVar5 = *(int *)param_1;
  iVar6 = uVar3 * 2 - iVar5;
  if (iVar6 != iVar4) {
    uVar7 = 0;
    do {
      puVar2[iVar5 + iVar4 + uVar7] = 0;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(iVar6 - iVar4));
  }
  MontgomeryReduce(puVar1,puVar2 + uVar3 * 2,puVar2,*(uint **)(this + 0x10),*(uint **)(this + 0x40),
                   uVar3);
  return this + 0x1c;
}
```
