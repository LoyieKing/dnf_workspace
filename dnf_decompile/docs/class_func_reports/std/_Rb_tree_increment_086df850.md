# _Rb_tree_increment

`_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base`

`std::_Rb_tree_increment(std::_Rb_tree_node_base const*)`

| 类 | 地址 |
|---|---|
| `std` | `0x086df850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df850  _ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base
#           std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
# range [0x086df850, 0x086df88f]
086df850 +0x00:  push   %ebp
086df851 +0x01:  mov    %esp,%ebp
086df853 +0x03:  mov    0x8(%ebp),%eax
086df856 +0x06:  mov    0xc(%eax),%edx
086df859 +0x09:  test   %edx,%edx
086df85b +0x0b:  jne    086df862 <+0x12>
086df85d +0x0d:  jmp    086df86d <+0x1d>
086df85f +0x0f:  nop
086df860 +0x10:  mov    %eax,%edx
086df862 +0x12:  mov    0x8(%edx),%eax
086df865 +0x15:  test   %eax,%eax
086df867 +0x17:  jne    086df860 <+0x10>
086df869 +0x19:  mov    %edx,%eax
086df86b +0x1b:  pop    %ebp
086df86c +0x1c:  ret
086df86d +0x1d:  mov    0x4(%eax),%edx
086df870 +0x20:  xor    %ecx,%ecx
086df872 +0x22:  cmp    0xc(%edx),%eax
086df875 +0x25:  jne    086df885 <+0x35>
086df877 +0x27:  nop
086df878 +0x28:  mov    %edx,%eax
086df87a +0x2a:  mov    0x4(%edx),%edx
086df87d +0x2d:  cmp    %eax,0xc(%edx)
086df880 +0x30:  je     086df878 <+0x28>
086df882 +0x32:  mov    0xc(%eax),%ecx
086df885 +0x35:  cmp    %ecx,%edx
086df887 +0x37:  je     086df86b <+0x1b>
086df889 +0x39:  mov    %edx,%eax
086df88b +0x3b:  jmp    086df86b <+0x1b>
086df88d +0x3d:  nop
086df88e +0x3e:  nop
086df88f +0x3f:  nop
```

## 反编译 C

```c
// std::_Rb_tree_increment @ 0x86df850

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_increment(std::_Rb_tree_node_base const*) */

_Rb_tree_node_base * std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  
  p_Var2 = param_1->_M_right;
  if (param_1->_M_right == (_Rb_tree_node_base *)0x0) {
    p_Var2 = param_1->_M_parent;
    p_Var1 = (_Rb_tree_node_base *)0x0;
    if (param_1 == p_Var2->_M_right) {
      do {
        param_1 = p_Var2;
        p_Var2 = param_1->_M_parent;
      } while (p_Var2->_M_right == param_1);
      p_Var1 = param_1->_M_right;
    }
    if (p_Var2 != p_Var1) {
      param_1 = p_Var2;
    }
  }
  else {
    do {
      param_1 = p_Var2;
      p_Var2 = param_1->_M_left;
    } while (param_1->_M_left != (_Base_ptr)0x0);
  }
  return param_1;
}
```
