# swap

`_ZNSt15_List_node_base4swapERS_S0_`

`std::_List_node_base::swap(std::_List_node_base&, std::_List_node_base&)`

| 类 | 地址 |
|---|---|
| `std::_List_node_base` | `0x086dac30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dac30  _ZNSt15_List_node_base4swapERS_S0_
#           std::_List_node_base::swap(std::_List_node_base&, std::_List_node_base&)
# range [0x086dac30, 0x086dacaf]
086dac30 +0x00:  push   %ebp
086dac31 +0x01:  mov    %esp,%ebp
086dac33 +0x03:  mov    0x8(%ebp),%edx
086dac36 +0x06:  push   %ebx
086dac37 +0x07:  mov    0xc(%ebp),%eax
086dac3a +0x0a:  mov    (%edx),%ecx
086dac3c +0x0c:  cmp    %edx,%ecx
086dac3e +0x0e:  je     086dac70 <+0x40>
086dac40 +0x10:  mov    (%eax),%ebx
086dac42 +0x12:  cmp    %eax,%ebx
086dac44 +0x14:  je     086dac90 <+0x60>
086dac46 +0x16:  mov    %ebx,(%edx)
086dac48 +0x18:  mov    0x4(%eax),%ebx
086dac4b +0x1b:  mov    %ecx,(%eax)
086dac4d +0x1d:  mov    0x4(%edx),%ecx
086dac50 +0x20:  mov    %ebx,0x4(%edx)
086dac53 +0x23:  mov    %ecx,0x4(%eax)
086dac56 +0x26:  mov    (%edx),%ecx
086dac58 +0x28:  mov    0x4(%edx),%ebx
086dac5b +0x2b:  mov    %edx,0x4(%ecx)
086dac5e +0x2e:  mov    0x4(%eax),%ecx
086dac61 +0x31:  mov    %edx,(%ebx)
086dac63 +0x33:  mov    (%eax),%edx
086dac65 +0x35:  mov    %eax,(%ecx)
086dac67 +0x37:  mov    %eax,0x4(%edx)
086dac6a +0x3a:  pop    %ebx
086dac6b +0x3b:  pop    %ebp
086dac6c +0x3c:  ret
086dac6d +0x3d:  lea    0x0(%esi),%esi
086dac70 +0x40:  mov    (%eax),%edx
086dac72 +0x42:  cmp    %eax,%edx
086dac74 +0x44:  je     086dac6a <+0x3a>
086dac76 +0x46:  mov    0x4(%eax),%ebx
086dac79 +0x49:  mov    %edx,(%ecx)
086dac7b +0x4b:  mov    %ebx,0x4(%ecx)
086dac7e +0x4e:  mov    %ecx,(%ebx)
086dac80 +0x50:  mov    %ecx,0x4(%edx)
086dac83 +0x53:  mov    %eax,(%eax)
086dac85 +0x55:  mov    %eax,0x4(%eax)
086dac88 +0x58:  pop    %ebx
086dac89 +0x59:  pop    %ebp
086dac8a +0x5a:  ret
086dac8b +0x5b:  nop
086dac8c +0x5c:  lea    0x0(%esi,%eiz,1),%esi
086dac90 +0x60:  mov    0x4(%edx),%eax
086dac93 +0x63:  mov    %ecx,(%ebx)
086dac95 +0x65:  mov    %eax,0x4(%ebx)
086dac98 +0x68:  mov    %ebx,(%eax)
086dac9a +0x6a:  mov    %ebx,0x4(%ecx)
086dac9d +0x6d:  mov    %edx,(%edx)
086dac9f +0x6f:  mov    %edx,0x4(%edx)
086daca2 +0x72:  pop    %ebx
086daca3 +0x73:  pop    %ebp
086daca4 +0x74:  ret
086daca5 +0x75:  nop
086daca6 +0x76:  nop
086daca7 +0x77:  nop
086daca8 +0x78:  nop
086daca9 +0x79:  nop
086dacaa +0x7a:  nop
086dacab +0x7b:  nop
086dacac +0x7c:  nop
086dacad +0x7d:  nop
086dacae +0x7e:  nop
086dacaf +0x7f:  nop
```

## 反编译 C

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
