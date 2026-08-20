# _Rb_tree_rotate_left

`_ZSt20_Rb_tree_rotate_leftPSt18_Rb_tree_node_baseRS0_`

`std::_Rb_tree_rotate_left(std::_Rb_tree_node_base*, std::_Rb_tree_node_base*&)`

| 类 | 地址 |
|---|---|
| `std` | `0x086df930` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df930  _ZSt20_Rb_tree_rotate_leftPSt18_Rb_tree_node_baseRS0_
#           std::_Rb_tree_rotate_left(std::_Rb_tree_node_base*, std::_Rb_tree_node_base*&)
# range [0x086df930, 0x086df97f]
086df930 +0x00:  push   %ebp
086df931 +0x01:  mov    %esp,%ebp
086df933 +0x03:  mov    0x8(%ebp),%eax
086df936 +0x06:  push   %ebx
086df937 +0x07:  mov    0xc(%ebp),%ebx
086df93a +0x0a:  mov    0xc(%eax),%edx
086df93d +0x0d:  mov    0x8(%edx),%ecx
086df940 +0x10:  test   %ecx,%ecx
086df942 +0x12:  mov    %ecx,0xc(%eax)
086df945 +0x15:  je     086df94a <+0x1a>
086df947 +0x17:  mov    %eax,0x4(%ecx)
086df94a +0x1a:  mov    0x4(%eax),%ecx
086df94d +0x1d:  mov    %ecx,0x4(%edx)
086df950 +0x20:  cmp    %eax,(%ebx)
086df952 +0x22:  je     086df968 <+0x38>
086df954 +0x24:  mov    0x4(%eax),%ecx
086df957 +0x27:  cmp    %eax,0x8(%ecx)
086df95a +0x2a:  je     086df978 <+0x48>
086df95c +0x2c:  mov    %edx,0xc(%ecx)
086df95f +0x2f:  mov    %eax,0x8(%edx)
086df962 +0x32:  mov    %edx,0x4(%eax)
086df965 +0x35:  pop    %ebx
086df966 +0x36:  pop    %ebp
086df967 +0x37:  ret
086df968 +0x38:  mov    %edx,(%ebx)
086df96a +0x3a:  mov    %eax,0x8(%edx)
086df96d +0x3d:  mov    %edx,0x4(%eax)
086df970 +0x40:  pop    %ebx
086df971 +0x41:  pop    %ebp
086df972 +0x42:  ret
086df973 +0x43:  nop
086df974 +0x44:  lea    0x0(%esi,%eiz,1),%esi
086df978 +0x48:  mov    %edx,0x8(%ecx)
086df97b +0x4b:  jmp    086df95f <+0x2f>
086df97d +0x4d:  nop
086df97e +0x4e:  nop
086df97f +0x4f:  nop
```

## 反编译 C

```c
// std::_Rb_tree_rotate_left @ 0x86df930

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_rotate_left(std::_Rb_tree_node_base*, std::_Rb_tree_node_base*&) */

void std::_Rb_tree_rotate_left(_Rb_tree_node_base *param_1,_Rb_tree_node_base **param_2)

{
  _Base_ptr p_Var1;
  _Base_ptr p_Var2;
  
  p_Var1 = param_1->_M_right;
  p_Var2 = p_Var1->_M_left;
  param_1->_M_right = p_Var2;
  if (p_Var2 != (_Base_ptr)0x0) {
    p_Var2->_M_parent = param_1;
  }
  p_Var1->_M_parent = param_1->_M_parent;
  if (*param_2 != param_1) {
    p_Var2 = param_1->_M_parent;
    if (p_Var2->_M_left == param_1) {
      p_Var2->_M_left = p_Var1;
    }
    else {
      p_Var2->_M_right = p_Var1;
    }
    p_Var1->_M_left = param_1;
    param_1->_M_parent = p_Var1;
    return;
  }
  *param_2 = p_Var1;
  p_Var1->_M_left = param_1;
  param_1->_M_parent = p_Var1;
  return;
}
```
