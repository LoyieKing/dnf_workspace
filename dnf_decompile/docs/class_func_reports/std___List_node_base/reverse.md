# reverse

`_ZNSt15_List_node_base7reverseEv`

`std::_List_node_base::reverse()`

| 类 | 地址 |
|---|---|
| `std::_List_node_base` | `0x086dacf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dacf0  _ZNSt15_List_node_base7reverseEv
#           std::_List_node_base::reverse()
# range [0x086dacf0, 0x086dad1f]
086dacf0 +0x00:  push   %ebp
086dacf1 +0x01:  mov    %esp,%ebp
086dacf3 +0x03:  push   %ebx
086dacf4 +0x04:  mov    0x8(%ebp),%ebx
086dacf7 +0x07:  mov    %ebx,%eax
086dacf9 +0x09:  jmp    086dad02 <+0x12>
086dacfb +0x0b:  nop
086dacfc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
086dad00 +0x10:  mov    %edx,%eax
086dad02 +0x12:  mov    (%eax),%edx
086dad04 +0x14:  mov    0x4(%eax),%ecx
086dad07 +0x17:  cmp    %edx,%ebx
086dad09 +0x19:  mov    %ecx,(%eax)
086dad0b +0x1b:  mov    %edx,0x4(%eax)
086dad0e +0x1e:  jne    086dad00 <+0x10>
086dad10 +0x20:  pop    %ebx
086dad11 +0x21:  pop    %ebp
086dad12 +0x22:  ret
086dad13 +0x23:  nop
086dad14 +0x24:  nop
086dad15 +0x25:  nop
086dad16 +0x26:  nop
086dad17 +0x27:  nop
086dad18 +0x28:  nop
086dad19 +0x29:  nop
086dad1a +0x2a:  nop
086dad1b +0x2b:  nop
086dad1c +0x2c:  nop
086dad1d +0x2d:  nop
086dad1e +0x2e:  nop
086dad1f +0x2f:  nop
```

## 反编译 C

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
