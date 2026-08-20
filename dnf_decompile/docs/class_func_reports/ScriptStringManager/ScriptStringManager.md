# ScriptStringManager

`_ZN19ScriptStringManagerC1Ev`

`ScriptStringManager::ScriptStringManager()`

| 类 | 地址 |
|---|---|
| `ScriptStringManager` | `0x08acf110` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acf110  _ZN19ScriptStringManagerC1Ev
#           ScriptStringManager::ScriptStringManager()
# range [0x08acf110, 0x08acf159]
08acf110 +0x00:  push   %ebp
08acf111 +0x01:  mov    %esp,%ebp
08acf113 +0x03:  mov    0x8(%ebp),%eax
08acf116 +0x06:  lea    0x14(%eax),%edx
08acf119 +0x09:  movl   $&_ZTV19ScriptStringManager+0x8,(%eax)
08acf11f +0x0f:  movl   $0x0,0x4(%eax)
08acf126 +0x16:  movl   $0x0,0x8(%eax)
08acf12d +0x1d:  movl   $0x0,0xc(%eax)
08acf134 +0x24:  movl   $0x0,0x24(%eax)
08acf13b +0x2b:  movl   $0x0,0x14(%eax)
08acf142 +0x32:  movl   $0x0,0x18(%eax)
08acf149 +0x39:  mov    %edx,0x1c(%eax)
08acf14c +0x3c:  mov    %edx,0x20(%eax)
08acf14f +0x3f:  pop    %ebp
08acf150 +0x40:  ret
08acf151 +0x41:  nop
08acf152 +0x42:  lea    0x0(%esi,%eiz,1),%esi
08acf159 +0x49:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// ScriptStringManager::ScriptStringManager @ 0x8acf110

/* DWARF original prototype: void ScriptStringManager(ScriptStringManager * this) */

void __thiscall ScriptStringManager::ScriptStringManager(ScriptStringManager *this)

{
  _Rb_tree_node_base *p_Var1;
  
  p_Var1 = &(this->string_map_)._M_t._M_impl._M_header;
  this->_vptr_ScriptStringManager = (_func_int_varargs **)&PTR__ScriptStringManager_08e2ec70;
  (this->strings_).
  super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  ._M_impl._M_start = (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)0x0;
  (this->strings_).
  super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  ._M_impl._M_finish = (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)0x0;
  (this->strings_).
  super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  ._M_impl._M_end_of_storage =
       (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)0x0;
  (this->string_map_)._M_t._M_impl._M_node_count = 0;
  (this->string_map_)._M_t._M_impl._M_header._M_color = _S_red;
  (this->string_map_)._M_t._M_impl._M_header._M_parent = (_Base_ptr)0x0;
  (this->string_map_)._M_t._M_impl._M_header._M_left = p_Var1;
  (this->string_map_)._M_t._M_impl._M_header._M_right = p_Var1;
  return;
}
```
