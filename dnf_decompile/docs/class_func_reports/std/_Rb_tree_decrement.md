# _Rb_tree_decrement

`_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base`

`std::_Rb_tree_decrement(std::_Rb_tree_node_base*)`

| 类 | 地址 |
|---|---|
| `std` | `0x086df890` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df890  _ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base
#           std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
# range [0x086df890, 0x086df8df]
086df890 +0x00:  push   %ebp
086df891 +0x01:  mov    %esp,%ebp
086df893 +0x03:  mov    0x8(%ebp),%ecx
086df896 +0x06:  mov    (%ecx),%eax
086df898 +0x08:  test   %eax,%eax
086df89a +0x0a:  jne    086df8a6 <+0x16>
086df89c +0x0c:  mov    0x4(%ecx),%eax
086df89f +0x0f:  mov    0x4(%eax),%eax
086df8a2 +0x12:  cmp    %ecx,%eax
086df8a4 +0x14:  je     086df8bb <+0x2b>
086df8a6 +0x16:  mov    0x8(%ecx),%eax
086df8a9 +0x19:  test   %eax,%eax
086df8ab +0x1b:  jne    086df8b2 <+0x22>
086df8ad +0x1d:  jmp    086df8c0 <+0x30>
086df8af +0x1f:  nop
086df8b0 +0x20:  mov    %edx,%eax
086df8b2 +0x22:  mov    0xc(%eax),%edx
086df8b5 +0x25:  test   %edx,%edx
086df8b7 +0x27:  jne    086df8b0 <+0x20>
086df8b9 +0x29:  pop    %ebp
086df8ba +0x2a:  ret
086df8bb +0x2b:  mov    0xc(%eax),%eax
086df8be +0x2e:  pop    %ebp
086df8bf +0x2f:  ret
086df8c0 +0x30:  mov    0x4(%ecx),%edx
086df8c3 +0x33:  cmp    0x8(%edx),%ecx
086df8c6 +0x36:  mov    %edx,%eax
086df8c8 +0x38:  je     086df8d2 <+0x42>
086df8ca +0x3a:  jmp    086df8b9 <+0x29>
086df8cc +0x3c:  lea    0x0(%esi,%eiz,1),%esi
086df8d0 +0x40:  mov    %eax,%edx
086df8d2 +0x42:  mov    0x4(%edx),%eax
086df8d5 +0x45:  cmp    %edx,0x8(%eax)
086df8d8 +0x48:  je     086df8d0 <+0x40>
086df8da +0x4a:  pop    %ebp
086df8db +0x4b:  ret
086df8dc +0x4c:  nop
086df8dd +0x4d:  nop
086df8de +0x4e:  nop
086df8df +0x4f:  nop
```

## 反编译 C

```c
// std::_Rb_tree_decrement @ 0x86df890

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_decrement(std::_Rb_tree_node_base*) */

_Base_ptr std::_Rb_tree_decrement(_Rb_tree_node_base *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Base_ptr p_Var2;
  _Base_ptr p_Var3;
  bool bVar4;
  
  if ((param_1->_M_color == _S_red) && (p_Var1 = param_1->_M_parent->_M_parent, p_Var1 == param_1))
  {
    return p_Var1->_M_right;
  }
  p_Var2 = param_1->_M_left;
  if (param_1->_M_left == (_Base_ptr)0x0) {
    p_Var3 = param_1->_M_parent;
    if (param_1 == p_Var3->_M_left) {
      do {
        p_Var2 = p_Var3->_M_parent;
        bVar4 = p_Var2->_M_left == p_Var3;
        p_Var3 = p_Var2;
      } while (bVar4);
      return p_Var2;
    }
  }
  else {
    do {
      p_Var3 = p_Var2;
      p_Var2 = p_Var3->_M_right;
    } while (p_Var3->_M_right != (_Base_ptr)0x0);
  }
  return p_Var3;
}
```
