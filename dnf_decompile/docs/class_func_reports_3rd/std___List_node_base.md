# std___List_node_base

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## hook

```asm
// === 086dad20 std::_List_node_base::hook  [0x086dad20-0x86dad3f] ===
 86dad20:	55                   	push   %ebp
 86dad21:	89 e5                	mov    %esp,%ebp
 86dad23:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dad26:	8b 55 08             	mov    0x8(%ebp),%edx
 86dad29:	8b 48 04             	mov    0x4(%eax),%ecx
 86dad2c:	89 02                	mov    %eax,(%edx)
 86dad2e:	89 4a 04             	mov    %ecx,0x4(%edx)
 86dad31:	8b 48 04             	mov    0x4(%eax),%ecx
 86dad34:	89 50 04             	mov    %edx,0x4(%eax)
 86dad37:	89 11                	mov    %edx,(%ecx)
 86dad39:	5d                   	pop    %ebp
 86dad3a:	c3                   	ret
 86dad3b:	90                   	nop
 86dad3c:	90                   	nop
 86dad3d:	90                   	nop
 86dad3e:	90                   	nop
 86dad3f:	90                   	nop

```

```c
// std::_List_node_base::hook @ 0x86dad20

/* std::_List_node_base::hook(std::_List_node_base*) */

void __thiscall std::_List_node_base::hook(_List_node_base *this,_List_node_base *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(_List_node_base **)this = param_1;
  *(undefined4 *)(this + 4) = uVar1;
  puVar2 = *(undefined4 **)(param_1 + 4);
  *(_List_node_base **)(param_1 + 4) = this;
  *puVar2 = this;
  return;
}

```

---

## reverse

```asm
// === 086dacf0 std::_List_node_base::reverse  [0x086dacf0-0x86dad1f] ===
 86dacf0:	55                   	push   %ebp
 86dacf1:	89 e5                	mov    %esp,%ebp
 86dacf3:	53                   	push   %ebx
 86dacf4:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dacf7:	89 d8                	mov    %ebx,%eax
 86dacf9:	eb 07                	jmp    86dad02 <_ZNSt15_List_node_base7reverseEv+0x12>
 86dacfb:	90                   	nop
 86dacfc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 86dad00:	89 d0                	mov    %edx,%eax
 86dad02:	8b 10                	mov    (%eax),%edx
 86dad04:	8b 48 04             	mov    0x4(%eax),%ecx
 86dad07:	39 d3                	cmp    %edx,%ebx
 86dad09:	89 08                	mov    %ecx,(%eax)
 86dad0b:	89 50 04             	mov    %edx,0x4(%eax)
 86dad0e:	75 f0                	jne    86dad00 <_ZNSt15_List_node_base7reverseEv+0x10>
 86dad10:	5b                   	pop    %ebx
 86dad11:	5d                   	pop    %ebp
 86dad12:	c3                   	ret
 86dad13:	90                   	nop
 86dad14:	90                   	nop
 86dad15:	90                   	nop
 86dad16:	90                   	nop
 86dad17:	90                   	nop
 86dad18:	90                   	nop
 86dad19:	90                   	nop
 86dad1a:	90                   	nop
 86dad1b:	90                   	nop
 86dad1c:	90                   	nop
 86dad1d:	90                   	nop
 86dad1e:	90                   	nop
 86dad1f:	90                   	nop

```

```c
// std::_List_node_base::reverse @ 0x86dacf0

/* std::_List_node_base::reverse() */

void __thiscall std::_List_node_base::reverse(_List_node_base *this)

{
  _List_node_base *p_Var1;
  _List_node_base *p_Var2;
  
  p_Var2 = this;
  do {
    p_Var1 = *(_List_node_base **)p_Var2;
    *(int *)p_Var2 = *(int *)(p_Var2 + 4);
    *(_List_node_base **)(p_Var2 + 4) = p_Var1;
    p_Var2 = p_Var1;
  } while (this != p_Var1);
  return;
}

```

---

## swap

```asm
// === 086dac30 std::_List_node_base::swap  [0x086dac30-0x86dacaf] ===
 86dac30:	55                   	push   %ebp
 86dac31:	89 e5                	mov    %esp,%ebp
 86dac33:	8b 55 08             	mov    0x8(%ebp),%edx
 86dac36:	53                   	push   %ebx
 86dac37:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dac3a:	8b 0a                	mov    (%edx),%ecx
 86dac3c:	39 d1                	cmp    %edx,%ecx
 86dac3e:	74 30                	je     86dac70 <_ZNSt15_List_node_base4swapERS_S0_+0x40>
 86dac40:	8b 18                	mov    (%eax),%ebx
 86dac42:	39 c3                	cmp    %eax,%ebx
 86dac44:	74 4a                	je     86dac90 <_ZNSt15_List_node_base4swapERS_S0_+0x60>
 86dac46:	89 1a                	mov    %ebx,(%edx)
 86dac48:	8b 58 04             	mov    0x4(%eax),%ebx
 86dac4b:	89 08                	mov    %ecx,(%eax)
 86dac4d:	8b 4a 04             	mov    0x4(%edx),%ecx
 86dac50:	89 5a 04             	mov    %ebx,0x4(%edx)
 86dac53:	89 48 04             	mov    %ecx,0x4(%eax)
 86dac56:	8b 0a                	mov    (%edx),%ecx
 86dac58:	8b 5a 04             	mov    0x4(%edx),%ebx
 86dac5b:	89 51 04             	mov    %edx,0x4(%ecx)
 86dac5e:	8b 48 04             	mov    0x4(%eax),%ecx
 86dac61:	89 13                	mov    %edx,(%ebx)
 86dac63:	8b 10                	mov    (%eax),%edx
 86dac65:	89 01                	mov    %eax,(%ecx)
 86dac67:	89 42 04             	mov    %eax,0x4(%edx)
 86dac6a:	5b                   	pop    %ebx
 86dac6b:	5d                   	pop    %ebp
 86dac6c:	c3                   	ret
 86dac6d:	8d 76 00             	lea    0x0(%esi),%esi
 86dac70:	8b 10                	mov    (%eax),%edx
 86dac72:	39 c2                	cmp    %eax,%edx
 86dac74:	74 f4                	je     86dac6a <_ZNSt15_List_node_base4swapERS_S0_+0x3a>
 86dac76:	8b 58 04             	mov    0x4(%eax),%ebx
 86dac79:	89 11                	mov    %edx,(%ecx)
 86dac7b:	89 59 04             	mov    %ebx,0x4(%ecx)
 86dac7e:	89 0b                	mov    %ecx,(%ebx)
 86dac80:	89 4a 04             	mov    %ecx,0x4(%edx)
 86dac83:	89 00                	mov    %eax,(%eax)
 86dac85:	89 40 04             	mov    %eax,0x4(%eax)
 86dac88:	5b                   	pop    %ebx
 86dac89:	5d                   	pop    %ebp
 86dac8a:	c3                   	ret
 86dac8b:	90                   	nop
 86dac8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 86dac90:	8b 42 04             	mov    0x4(%edx),%eax
 86dac93:	89 0b                	mov    %ecx,(%ebx)
 86dac95:	89 43 04             	mov    %eax,0x4(%ebx)
 86dac98:	89 18                	mov    %ebx,(%eax)
 86dac9a:	89 59 04             	mov    %ebx,0x4(%ecx)
 86dac9d:	89 12                	mov    %edx,(%edx)
 86dac9f:	89 52 04             	mov    %edx,0x4(%edx)
 86daca2:	5b                   	pop    %ebx
 86daca3:	5d                   	pop    %ebp
 86daca4:	c3                   	ret
 86daca5:	90                   	nop
 86daca6:	90                   	nop
 86daca7:	90                   	nop
 86daca8:	90                   	nop
 86daca9:	90                   	nop
 86dacaa:	90                   	nop
 86dacab:	90                   	nop
 86dacac:	90                   	nop
 86dacad:	90                   	nop
 86dacae:	90                   	nop
 86dacaf:	90                   	nop

```

```c
// std::_List_node_base::swap @ 0x86dac30

/* std::_List_node_base::swap(std::_List_node_base&, std::_List_node_base&) */

void std::_List_node_base::swap(_List_node_base *param_1,_List_node_base *param_2)

{
  _List_node_base *p_Var1;
  _List_node_base *p_Var2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  
  p_Var1 = *(_List_node_base **)param_1;
  if (p_Var1 == param_1) {
    p_Var2 = *(_List_node_base **)param_2;
    if (p_Var2 != param_2) {
      piVar7 = *(int **)(param_2 + 4);
      *(_List_node_base **)p_Var1 = p_Var2;
      *(int **)(p_Var1 + 4) = piVar7;
      *piVar7 = (int)p_Var1;
      *(_List_node_base **)(p_Var2 + 4) = p_Var1;
      *(_List_node_base **)param_2 = param_2;
      *(_List_node_base **)(param_2 + 4) = param_2;
      return;
    }
  }
  else {
    p_Var2 = *(_List_node_base **)param_2;
    if (p_Var2 == param_2) {
      puVar4 = *(undefined4 **)(param_1 + 4);
      *(_List_node_base **)p_Var2 = p_Var1;
      *(undefined4 **)(p_Var2 + 4) = puVar4;
      *puVar4 = p_Var2;
      *(_List_node_base **)(p_Var1 + 4) = p_Var2;
      *(_List_node_base **)param_1 = param_1;
      *(_List_node_base **)(param_1 + 4) = param_1;
      return;
    }
    *(_List_node_base **)param_1 = p_Var2;
    *(_List_node_base **)param_2 = p_Var1;
    uVar3 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_2 + 4) = uVar3;
    puVar4 = *(undefined4 **)(param_1 + 4);
    *(_List_node_base **)(*(int *)param_1 + 4) = param_1;
    puVar5 = *(undefined4 **)(param_2 + 4);
    *puVar4 = param_1;
    iVar6 = *(int *)param_2;
    *puVar5 = param_2;
    *(_List_node_base **)(iVar6 + 4) = param_2;
  }
  return;
}

```

---

## transfer

```asm
// === 086dacb0 std::_List_node_base::transfer  [0x086dacb0-0x86dacef] ===
 86dacb0:	55                   	push   %ebp
 86dacb1:	89 e5                	mov    %esp,%ebp
 86dacb3:	83 ec 08             	sub    $0x8,%esp
 86dacb6:	8b 55 08             	mov    0x8(%ebp),%edx
 86dacb9:	8b 45 10             	mov    0x10(%ebp),%eax
 86dacbc:	89 1c 24             	mov    %ebx,(%esp)
 86dacbf:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86dacc2:	89 74 24 04          	mov    %esi,0x4(%esp)
 86dacc6:	39 c2                	cmp    %eax,%edx
 86dacc8:	74 1b                	je     86dace5 <_ZNSt15_List_node_base8transferEPS_S0_+0x35>
 86dacca:	8b 59 04             	mov    0x4(%ecx),%ebx
 86daccd:	8b 70 04             	mov    0x4(%eax),%esi
 86dacd0:	89 16                	mov    %edx,(%esi)
 86dacd2:	89 03                	mov    %eax,(%ebx)
 86dacd4:	8b 5a 04             	mov    0x4(%edx),%ebx
 86dacd7:	89 72 04             	mov    %esi,0x4(%edx)
 86dacda:	8b 51 04             	mov    0x4(%ecx),%edx
 86dacdd:	89 0b                	mov    %ecx,(%ebx)
 86dacdf:	89 50 04             	mov    %edx,0x4(%eax)
 86dace2:	89 59 04             	mov    %ebx,0x4(%ecx)
 86dace5:	8b 1c 24             	mov    (%esp),%ebx
 86dace8:	8b 74 24 04          	mov    0x4(%esp),%esi
 86dacec:	89 ec                	mov    %ebp,%esp
 86dacee:	5d                   	pop    %ebp
 86dacef:	c3                   	ret

```

```c
// std::_List_node_base::transfer @ 0x86dacb0

/* std::_List_node_base::transfer(std::_List_node_base*, std::_List_node_base*) */

void __thiscall
std::_List_node_base::transfer
          (_List_node_base *this,_List_node_base *param_1,_List_node_base *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (this != param_2) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    puVar2 = *(undefined4 **)(param_2 + 4);
    *puVar2 = this;
    *puVar1 = param_2;
    puVar1 = *(undefined4 **)(this + 4);
    *(undefined4 **)(this + 4) = puVar2;
    uVar3 = *(undefined4 *)(param_1 + 4);
    *puVar1 = param_1;
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 **)(param_1 + 4) = puVar1;
  }
  return;
}

```

---

## unhook

```asm
// === 086dad40 std::_List_node_base::unhook  [0x086dad40-0x86dad7f] ===
 86dad40:	55                   	push   %ebp
 86dad41:	89 e5                	mov    %esp,%ebp
 86dad43:	8b 55 08             	mov    0x8(%ebp),%edx
 86dad46:	8b 02                	mov    (%edx),%eax
 86dad48:	8b 52 04             	mov    0x4(%edx),%edx
 86dad4b:	89 02                	mov    %eax,(%edx)
 86dad4d:	89 50 04             	mov    %edx,0x4(%eax)
 86dad50:	5d                   	pop    %ebp
 86dad51:	c3                   	ret
 86dad52:	90                   	nop
 86dad53:	90                   	nop
 86dad54:	90                   	nop
 86dad55:	90                   	nop
 86dad56:	90                   	nop
 86dad57:	90                   	nop
 86dad58:	90                   	nop
 86dad59:	90                   	nop
 86dad5a:	90                   	nop
 86dad5b:	90                   	nop
 86dad5c:	90                   	nop
 86dad5d:	90                   	nop
 86dad5e:	90                   	nop
 86dad5f:	90                   	nop

086dad60 <_ZNK9__gnu_cxx24__concurrence_lock_error4whatEv>:
 86dad60:	55                   	push   %ebp
 86dad61:	b8 40 df cf 08       	mov    $0x8cfdf40,%eax
 86dad66:	89 e5                	mov    %esp,%ebp
 86dad68:	5d                   	pop    %ebp
 86dad69:	c3                   	ret
 86dad6a:	90                   	nop
 86dad6b:	90                   	nop
 86dad6c:	90                   	nop
 86dad6d:	90                   	nop
 86dad6e:	90                   	nop
 86dad6f:	90                   	nop

086dad70 <_ZNK9__gnu_cxx26__concurrence_unlock_error4whatEv>:
 86dad70:	55                   	push   %ebp
 86dad71:	b8 64 df cf 08       	mov    $0x8cfdf64,%eax
 86dad76:	89 e5                	mov    %esp,%ebp
 86dad78:	5d                   	pop    %ebp
 86dad79:	c3                   	ret
 86dad7a:	90                   	nop
 86dad7b:	90                   	nop
 86dad7c:	90                   	nop
 86dad7d:	90                   	nop
 86dad7e:	90                   	nop
 86dad7f:	90                   	nop

```

```c
// std::_List_node_base::unhook @ 0x86dad40

/* std::_List_node_base::unhook() */

void __thiscall std::_List_node_base::unhook(_List_node_base *this)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)this;
  piVar2 = *(int **)(this + 4);
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  return;
}

```

