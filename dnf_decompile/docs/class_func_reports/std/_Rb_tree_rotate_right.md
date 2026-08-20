# _Rb_tree_rotate_right

`_ZSt21_Rb_tree_rotate_rightPSt18_Rb_tree_node_baseRS0_`

`std::_Rb_tree_rotate_right(std::_Rb_tree_node_base*, std::_Rb_tree_node_base*&)`

| 类 | 地址 |
|---|---|
| `std` | `0x086df980` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df980  _ZSt21_Rb_tree_rotate_rightPSt18_Rb_tree_node_baseRS0_
#           std::_Rb_tree_rotate_right(std::_Rb_tree_node_base*, std::_Rb_tree_node_base*&)
# range [0x086df980, 0x086df9cf]
086df980 +0x00:  push   %ebp
086df981 +0x01:  mov    %esp,%ebp
086df983 +0x03:  mov    0x8(%ebp),%eax
086df986 +0x06:  push   %ebx
086df987 +0x07:  mov    0xc(%ebp),%ebx
086df98a +0x0a:  mov    0x8(%eax),%edx
086df98d +0x0d:  mov    0xc(%edx),%ecx
086df990 +0x10:  test   %ecx,%ecx
086df992 +0x12:  mov    %ecx,0x8(%eax)
086df995 +0x15:  je     086df99a <+0x1a>
086df997 +0x17:  mov    %eax,0x4(%ecx)
086df99a +0x1a:  mov    0x4(%eax),%ecx
086df99d +0x1d:  mov    %ecx,0x4(%edx)
086df9a0 +0x20:  cmp    %eax,(%ebx)
086df9a2 +0x22:  je     086df9b8 <+0x38>
086df9a4 +0x24:  mov    0x4(%eax),%ecx
086df9a7 +0x27:  cmp    %eax,0xc(%ecx)
086df9aa +0x2a:  je     086df9c8 <+0x48>
086df9ac +0x2c:  mov    %edx,0x8(%ecx)
086df9af +0x2f:  mov    %eax,0xc(%edx)
086df9b2 +0x32:  mov    %edx,0x4(%eax)
086df9b5 +0x35:  pop    %ebx
086df9b6 +0x36:  pop    %ebp
086df9b7 +0x37:  ret
086df9b8 +0x38:  mov    %edx,(%ebx)
086df9ba +0x3a:  mov    %eax,0xc(%edx)
086df9bd +0x3d:  mov    %edx,0x4(%eax)
086df9c0 +0x40:  pop    %ebx
086df9c1 +0x41:  pop    %ebp
086df9c2 +0x42:  ret
086df9c3 +0x43:  nop
086df9c4 +0x44:  lea    0x0(%esi,%eiz,1),%esi
086df9c8 +0x48:  mov    %edx,0xc(%ecx)
086df9cb +0x4b:  jmp    086df9af <+0x2f>
086df9cd +0x4d:  nop
086df9ce +0x4e:  nop
086df9cf +0x4f:  nop
```

## 反编译 C

```c
// std::_Rb_tree_rotate_right @ 0x86df980

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_rotate_right(std::_Rb_tree_node_base*, std::_Rb_tree_node_base*&) */

void std::_Rb_tree_rotate_right(_Rb_tree_node_base *param_1,_Rb_tree_node_base **param_2)

{
  _Base_ptr p_Var1;
  _Base_ptr p_Var2;
  
  p_Var1 = param_1->_M_left;
  p_Var2 = p_Var1->_M_right;
  param_1->_M_left = p_Var2;
  if (p_Var2 != (_Base_ptr)0x0) {
    p_Var2->_M_parent = param_1;
  }
  p_Var1->_M_parent = param_1->_M_parent;
  if (*param_2 != param_1) {
    p_Var2 = param_1->_M_parent;
    if (p_Var2->_M_right == param_1) {
      p_Var2->_M_right = p_Var1;
    }
    else {
      p_Var2->_M_left = p_Var1;
    }
    p_Var1->_M_right = param_1;
    param_1->_M_parent = p_Var1;
    return;
  }
  *param_2 = p_Var1;
  p_Var1->_M_right = param_1;
  param_1->_M_parent = p_Var1;
  return;
}
```
