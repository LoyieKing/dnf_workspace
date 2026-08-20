# ConvertOut

`_ZNK8TaoCrypt24MontgomeryRepresentation10ConvertOutERKNS_7IntegerE`

`TaoCrypt::MontgomeryRepresentation::ConvertOut(TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MontgomeryRepresentation` | `0x0875f380` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875f380  _ZNK8TaoCrypt24MontgomeryRepresentation10ConvertOutERKNS_7IntegerE
#           TaoCrypt::MontgomeryRepresentation::ConvertOut(TaoCrypt::Integer const&) const
# range [0x0875f380, 0x0875f449]
0875f380 +0x00:  push   %ebp
0875f381 +0x01:  mov    %esp,%ebp
0875f383 +0x03:  push   %edi
0875f384 +0x04:  push   %esi
0875f385 +0x05:  push   %ebx
0875f386 +0x06:  sub    $0x3c,%esp
0875f389 +0x09:  mov    0xc(%ebp),%eax
0875f38c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0875f391 +0x11:  add    $0xc0d807,%ebx
0875f397 +0x17:  mov    0x20(%eax),%edx
0875f39a +0x1a:  mov    0x50(%eax),%ecx
0875f39d +0x1d:  mov    0xc(%eax),%eax
0875f3a0 +0x20:  mov    %edx,-0x20(%ebp)
0875f3a3 +0x23:  mov    0x10(%ebp),%edx
0875f3a6 +0x26:  mov    %eax,-0x1c(%ebp)
0875f3a9 +0x29:  xor    %eax,%eax
0875f3ab +0x2b:  mov    (%edx),%esi
0875f3ad +0x2d:  mov    0x4(%edx),%edi
0875f3b0 +0x30:  xor    %edx,%edx
0875f3b2 +0x32:  test   %esi,%esi
0875f3b4 +0x34:  je     0875f3ca <+0x4a>
0875f3b6 +0x36:  xchg   %ax,%ax
0875f3b8 +0x38:  mov    (%edi,%eax,4),%edx
0875f3bb +0x3b:  mov    %edx,(%ecx,%eax,4)
0875f3be +0x3e:  add    $0x1,%eax
0875f3c1 +0x41:  cmp    %eax,%esi
0875f3c3 +0x43:  ja     0875f3b8 <+0x38>
0875f3c5 +0x45:  mov    0x10(%ebp),%eax
0875f3c8 +0x48:  mov    (%eax),%edx
0875f3ca +0x4a:  mov    -0x1c(%ebp),%eax
0875f3cd +0x4d:  lea    (%ecx,%edx,4),%esi
0875f3d0 +0x50:  add    %eax,%eax
0875f3d2 +0x52:  sub    %edx,%eax
0875f3d4 +0x54:  mov    %eax,%edx
0875f3d6 +0x56:  je     0875f3ee <+0x6e>
0875f3d8 +0x58:  xor    %eax,%eax
0875f3da +0x5a:  lea    0x0(%esi),%esi
0875f3e0 +0x60:  movl   $0x0,(%esi,%eax,4)
0875f3e7 +0x67:  add    $0x1,%eax
0875f3ea +0x6a:  cmp    %eax,%edx
0875f3ec +0x6c:  ja     0875f3e0 <+0x60>
0875f3ee +0x6e:  mov    -0x1c(%ebp),%edx
0875f3f1 +0x71:  mov    %edx,0x14(%esp)
0875f3f5 +0x75:  mov    0xc(%ebp),%edx
0875f3f8 +0x78:  mov    0x40(%edx),%eax
0875f3fb +0x7b:  mov    %eax,0x10(%esp)
0875f3ff +0x7f:  mov    0x10(%edx),%eax
0875f402 +0x82:  mov    -0x1c(%ebp),%edx
0875f405 +0x85:  mov    %ecx,0x8(%esp)
0875f409 +0x89:  mov    %eax,0xc(%esp)
0875f40d +0x8d:  lea    (%ecx,%edx,8),%eax
0875f410 +0x90:  mov    %eax,0x4(%esp)
0875f414 +0x94:  mov    -0x20(%ebp),%eax
0875f417 +0x97:  mov    %eax,(%esp)
0875f41a +0x9a:  call   0875e1e0 <_ZN8TaoCrypt16MontgomeryReduceEPjS0_PKjS2_S2_j>  ; TaoCrypt::MontgomeryReduce(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int const*, unsigned int)
0875f41f +0x9f:  mov    0xc(%ebp),%eax
0875f422 +0xa2:  mov    0x8(%ebp),%edx
0875f425 +0xa5:  add    $0x1c,%eax
0875f428 +0xa8:  mov    %eax,0x4(%esp)
0875f42c +0xac:  mov    %edx,(%esp)
0875f42f +0xaf:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0875f434 +0xb4:  mov    0x8(%ebp),%eax
0875f437 +0xb7:  add    $0x3c,%esp
0875f43a +0xba:  pop    %ebx
0875f43b +0xbb:  pop    %esi
0875f43c +0xbc:  pop    %edi
0875f43d +0xbd:  pop    %ebp
0875f43e +0xbe:  ret    $0x4
0875f441 +0xc1:  nop
0875f442 +0xc2:  lea    0x0(%esi,%eiz,1),%esi
0875f449 +0xc9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::MontgomeryRepresentation::ConvertOut @ 0x875f380

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MontgomeryRepresentation::ConvertOut(TaoCrypt::Integer const&) const */

Integer * TaoCrypt::MontgomeryRepresentation::ConvertOut(Integer *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int in_stack_00000008;
  uint *in_stack_0000000c;
  
  puVar1 = *(uint **)(in_stack_00000008 + 0x20);
  puVar2 = *(uint **)(in_stack_00000008 + 0x50);
  uVar3 = *(uint *)(in_stack_00000008 + 0xc);
  uVar4 = 0;
  uVar5 = *in_stack_0000000c;
  uVar6 = in_stack_0000000c[1];
  uVar7 = 0;
  if (uVar5 != 0) {
    do {
      puVar2[uVar4] = *(uint *)(uVar6 + uVar4 * 4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
    uVar7 = *in_stack_0000000c;
  }
  uVar5 = uVar3 * 2 - uVar7;
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      puVar2[uVar7 + uVar6] = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  MontgomeryReduce(puVar1,puVar2 + uVar3 * 2,puVar2,*(uint **)(in_stack_00000008 + 0x10),
                   *(uint **)(in_stack_00000008 + 0x40),uVar3);
  Integer::Integer(param_1,(Integer *)(in_stack_00000008 + 0x1c));
  return param_1;
}
```
