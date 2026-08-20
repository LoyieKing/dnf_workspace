# _Rb_tree_increment

`_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base`

`std::_Rb_tree_increment(std::_Rb_tree_node_base*)`

| 类 | 地址 |
|---|---|
| `std` | `0x086df800` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df800  _ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base
#           std::_Rb_tree_increment(std::_Rb_tree_node_base*)
# range [0x086df800, 0x086df84f]
086df800 +0x00:  push   %ebp
086df801 +0x01:  mov    %esp,%ebp
086df803 +0x03:  mov    0x8(%ebp),%eax
086df806 +0x06:  mov    0xc(%eax),%edx
086df809 +0x09:  test   %edx,%edx
086df80b +0x0b:  je     086df820 <+0x20>
086df80d +0x0d:  lea    0x0(%esi),%esi
086df810 +0x10:  mov    %edx,%eax
086df812 +0x12:  mov    0x8(%edx),%edx
086df815 +0x15:  test   %edx,%edx
086df817 +0x17:  jne    086df810 <+0x10>
086df819 +0x19:  pop    %ebp
086df81a +0x1a:  ret
086df81b +0x1b:  nop
086df81c +0x1c:  lea    0x0(%esi,%eiz,1),%esi
086df820 +0x20:  mov    0x4(%eax),%edx
086df823 +0x23:  xor    %ecx,%ecx
086df825 +0x25:  cmp    0xc(%edx),%eax
086df828 +0x28:  jne    086df83d <+0x3d>
086df82a +0x2a:  lea    0x0(%esi),%esi
086df830 +0x30:  mov    %edx,%eax
086df832 +0x32:  mov    0x4(%edx),%edx
086df835 +0x35:  cmp    %eax,0xc(%edx)
086df838 +0x38:  je     086df830 <+0x30>
086df83a +0x3a:  mov    0xc(%eax),%ecx
086df83d +0x3d:  cmp    %ecx,%edx
086df83f +0x3f:  je     086df819 <+0x19>
086df841 +0x41:  mov    %edx,%eax
086df843 +0x43:  pop    %ebp
086df844 +0x44:  ret
086df845 +0x45:  nop
086df846 +0x46:  nop
086df847 +0x47:  nop
086df848 +0x48:  nop
086df849 +0x49:  nop
086df84a +0x4a:  nop
086df84b +0x4b:  nop
086df84c +0x4c:  nop
086df84d +0x4d:  nop
086df84e +0x4e:  nop
086df84f +0x4f:  nop
```

## 反编译 C

```c
// std::_Rb_tree_increment @ 0x86df800

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_increment(std::_Rb_tree_node_base*) */

_Rb_tree_node_base * std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
  _Base_ptr p_Var1;
  _Base_ptr p_Var2;
  
  p_Var2 = param_1->_M_right;
  if (param_1->_M_right == (_Rb_tree_node_base *)0x0) {
    p_Var2 = param_1->_M_parent;
    p_Var1 = (_Base_ptr)0x0;
    if (param_1 == p_Var2->_M_right) {
      do {
        param_1 = p_Var2;
        p_Var2 = param_1->_M_parent;
      } while (p_Var2->_M_right == param_1);
      p_Var1 = param_1->_M_right;
    }
    if (p_Var2 != p_Var1) {
      return p_Var2;
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
