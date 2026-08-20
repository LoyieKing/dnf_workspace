# Square

`_ZNK8TaoCrypt24MontgomeryRepresentation6SquareERKNS_7IntegerE`

`TaoCrypt::MontgomeryRepresentation::Square(TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MontgomeryRepresentation` | `0x0875e400` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875e400  _ZNK8TaoCrypt24MontgomeryRepresentation6SquareERKNS_7IntegerE
#           TaoCrypt::MontgomeryRepresentation::Square(TaoCrypt::Integer const&) const
# range [0x0875e400, 0x0875e4ac]
0875e400 +0x00:  push   %ebp
0875e401 +0x01:  mov    %esp,%ebp
0875e403 +0x03:  push   %edi
0875e404 +0x04:  push   %esi
0875e405 +0x05:  push   %ebx
0875e406 +0x06:  sub    $0x3c,%esp
0875e409 +0x09:  mov    0x8(%ebp),%esi
0875e40c +0x0c:  mov    0xc(%ebp),%eax
0875e40f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
0875e414 +0x14:  add    $0xc0e784,%ebx
0875e41a +0x1a:  mov    0x20(%esi),%edx
0875e41d +0x1d:  mov    0x50(%esi),%edi
0875e420 +0x20:  mov    %eax,-0x28(%ebp)
0875e423 +0x23:  mov    %edx,-0x24(%ebp)
0875e426 +0x26:  mov    0xc(%esi),%edx
0875e429 +0x29:  mov    %edx,-0x1c(%ebp)
0875e42c +0x2c:  lea    (%edi,%edx,8),%edx
0875e42f +0x2f:  mov    %edx,-0x20(%ebp)
0875e432 +0x32:  mov    (%eax),%edx
0875e434 +0x34:  mov    %edx,0xc(%esp)
0875e438 +0x38:  mov    0x4(%eax),%edx
0875e43b +0x3b:  mov    %edi,(%esp)
0875e43e +0x3e:  mov    %edx,0x8(%esp)
0875e442 +0x42:  mov    -0x20(%ebp),%edx
0875e445 +0x45:  mov    %edx,0x4(%esp)
0875e449 +0x49:  call   0875c310 <_ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj>  ; TaoCrypt::RecursiveSquare(unsigned int*, unsigned int*, unsigned int const*, unsigned int)
0875e44e +0x4e:  mov    -0x28(%ebp),%eax
0875e451 +0x51:  mov    -0x1c(%ebp),%edx
0875e454 +0x54:  mov    (%eax),%eax
0875e456 +0x56:  sub    %eax,%edx
0875e458 +0x58:  lea    (%edi,%eax,8),%ecx
0875e45b +0x5b:  mov    %edx,%eax
0875e45d +0x5d:  add    %eax,%eax
0875e45f +0x5f:  je     0875e476 <+0x76>
0875e461 +0x61:  xor    %edx,%edx
0875e463 +0x63:  nop
0875e464 +0x64:  lea    0x0(%esi,%eiz,1),%esi
0875e468 +0x68:  movl   $0x0,(%ecx,%edx,4)
0875e46f +0x6f:  add    $0x1,%edx
0875e472 +0x72:  cmp    %edx,%eax
0875e474 +0x74:  ja     0875e468 <+0x68>
0875e476 +0x76:  mov    -0x1c(%ebp),%eax
0875e479 +0x79:  mov    -0x20(%ebp),%edx
0875e47c +0x7c:  mov    %eax,0x14(%esp)
0875e480 +0x80:  mov    0x40(%esi),%eax
0875e483 +0x83:  mov    %eax,0x10(%esp)
0875e487 +0x87:  mov    0x10(%esi),%eax
0875e48a +0x8a:  mov    %edi,0x8(%esp)
0875e48e +0x8e:  mov    %edx,0x4(%esp)
0875e492 +0x92:  mov    %eax,0xc(%esp)
0875e496 +0x96:  mov    -0x24(%ebp),%eax
0875e499 +0x99:  mov    %eax,(%esp)
0875e49c +0x9c:  call   0875e1e0 <_ZN8TaoCrypt16MontgomeryReduceEPjS0_PKjS2_S2_j>  ; TaoCrypt::MontgomeryReduce(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int const*, unsigned int)
0875e4a1 +0xa1:  add    $0x3c,%esp
0875e4a4 +0xa4:  lea    0x1c(%esi),%eax
0875e4a7 +0xa7:  pop    %ebx
0875e4a8 +0xa8:  pop    %esi
0875e4a9 +0xa9:  pop    %edi
0875e4aa +0xaa:  pop    %ebp
0875e4ab +0xab:  ret
0875e4ac +0xac:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::MontgomeryRepresentation::Square @ 0x875e400

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MontgomeryRepresentation::Square(TaoCrypt::Integer const&) const */

MontgomeryRepresentation * __thiscall
TaoCrypt::MontgomeryRepresentation::Square(MontgomeryRepresentation *this,Integer *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = *(uint **)(this + 0x20);
  puVar2 = *(uint **)(this + 0x50);
  uVar3 = *(uint *)(this + 0xc);
  RecursiveSquare(puVar2,puVar2 + uVar3 * 2,*(uint **)(param_1 + 4),*(uint *)param_1);
  iVar4 = *(int *)param_1;
  uVar5 = (uVar3 - iVar4) * 2;
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      puVar2[iVar4 * 2 + uVar6] = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  MontgomeryReduce(puVar1,puVar2 + uVar3 * 2,puVar2,*(uint **)(this + 0x10),*(uint **)(this + 0x40),
                   uVar3);
  return this + 0x1c;
}
```
