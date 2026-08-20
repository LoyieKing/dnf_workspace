# _Rb_tree_decrement

`_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base`

`std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)`

| 类 | 地址 |
|---|---|
| `std` | `0x086df8e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df8e0  _ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base
#           std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
# range [0x086df8e0, 0x086df92f]
086df8e0 +0x00:  push   %ebp
086df8e1 +0x01:  mov    %esp,%ebp
086df8e3 +0x03:  mov    0x8(%ebp),%edx
086df8e6 +0x06:  mov    (%edx),%ecx
086df8e8 +0x08:  test   %ecx,%ecx
086df8ea +0x0a:  jne    086df8f4 <+0x14>
086df8ec +0x0c:  mov    0x4(%edx),%eax
086df8ef +0x0f:  cmp    0x4(%eax),%edx
086df8f2 +0x12:  je     086df90b <+0x2b>
086df8f4 +0x14:  mov    0x8(%edx),%eax
086df8f7 +0x17:  test   %eax,%eax
086df8f9 +0x19:  jne    086df902 <+0x22>
086df8fb +0x1b:  jmp    086df910 <+0x30>
086df8fd +0x1d:  lea    0x0(%esi),%esi
086df900 +0x20:  mov    %edx,%eax
086df902 +0x22:  mov    0xc(%eax),%edx
086df905 +0x25:  test   %edx,%edx
086df907 +0x27:  jne    086df900 <+0x20>
086df909 +0x29:  pop    %ebp
086df90a +0x2a:  ret
086df90b +0x2b:  mov    0xc(%edx),%eax
086df90e +0x2e:  pop    %ebp
086df90f +0x2f:  ret
086df910 +0x30:  mov    0x4(%edx),%eax
086df913 +0x33:  cmp    0x8(%eax),%edx
086df916 +0x36:  je     086df922 <+0x42>
086df918 +0x38:  jmp    086df909 <+0x29>
086df91a +0x3a:  lea    0x0(%esi),%esi
086df920 +0x40:  mov    %edx,%eax
086df922 +0x42:  mov    0x4(%eax),%edx
086df925 +0x45:  cmp    %eax,0x8(%edx)
086df928 +0x48:  je     086df920 <+0x40>
086df92a +0x4a:  mov    %edx,%eax
086df92c +0x4c:  pop    %ebp
086df92d +0x4d:  ret
086df92e +0x4e:  nop
086df92f +0x4f:  nop
```

## 反编译 C

```c
// std::_Rb_tree_decrement @ 0x86df8e0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_decrement(std::_Rb_tree_node_base const*) */

_Base_ptr std::_Rb_tree_decrement(_Rb_tree_node_base *param_1)

{
  _Base_ptr p_Var1;
  _Base_ptr p_Var2;
  bool bVar3;
  
  if ((param_1->_M_color == _S_red) && (param_1 == param_1->_M_parent->_M_parent)) {
    return param_1->_M_right;
  }
  p_Var1 = param_1->_M_left;
  if (param_1->_M_left == (_Base_ptr)0x0) {
    p_Var2 = param_1->_M_parent;
    if (param_1 == p_Var2->_M_left) {
      do {
        p_Var1 = p_Var2->_M_parent;
        bVar3 = p_Var1->_M_left == p_Var2;
        p_Var2 = p_Var1;
      } while (bVar3);
      return p_Var1;
    }
  }
  else {
    do {
      p_Var2 = p_Var1;
      p_Var1 = p_Var2->_M_right;
    } while (p_Var2->_M_right != (_Base_ptr)0x0);
  }
  return p_Var2;
}
```
