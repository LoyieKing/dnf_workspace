# PassiveObjGeneratorObject

`_ZN25PassiveObjGeneratorObjectC1Ev`

`PassiveObjGeneratorObject::PassiveObjGeneratorObject()`

| 类 | 地址 |
|---|---|
| `PassiveObjGeneratorObject` | `0x08a3ae56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a3ae56  _ZN25PassiveObjGeneratorObjectC1Ev
#           PassiveObjGeneratorObject::PassiveObjGeneratorObject()
# range [0x08a3ae56, 0x08a3aec9]
08a3ae56 +0x00:  push   %ebp
08a3ae57 +0x01:  mov    %esp,%ebp
08a3ae59 +0x03:  push   %esi
08a3ae5a +0x04:  push   %ebx
08a3ae5b +0x05:  sub    $0x20,%esp
08a3ae5e +0x08:  mov    0x8(%ebp),%eax
08a3ae61 +0x0b:  movl   $0x0,(%eax)
08a3ae67 +0x11:  mov    0x8(%ebp),%eax
08a3ae6a +0x14:  mov    $0x0,%edx
08a3ae6f +0x19:  mov    %edx,0x4(%eax)
08a3ae72 +0x1c:  lea    -0x9(%ebp),%eax
08a3ae75 +0x1f:  mov    %eax,(%esp)
08a3ae78 +0x22:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08a3ae7d +0x27:  mov    0x8(%ebp),%eax
08a3ae80 +0x2a:  lea    0x8(%eax),%edx
08a3ae83 +0x2d:  lea    -0x9(%ebp),%eax
08a3ae86 +0x30:  mov    %eax,0x8(%esp)
08a3ae8a +0x34:  movl   $"",0x4(%esp)
08a3ae92 +0x3c:  mov    %edx,(%esp)
08a3ae95 +0x3f:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08a3ae9a +0x44:  jmp    08a3aeb7 <+0x61>
08a3ae9c +0x46:  mov    %edx,%ebx
08a3ae9e +0x48:  mov    %eax,%esi
08a3aea0 +0x4a:  lea    -0x9(%ebp),%eax
08a3aea3 +0x4d:  mov    %eax,(%esp)
08a3aea6 +0x50:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08a3aeab +0x55:  mov    %esi,%eax
08a3aead +0x57:  mov    %ebx,%edx
08a3aeaf +0x59:  mov    %eax,(%esp)
08a3aeb2 +0x5c:  call   08ae3750 <_Unwind_Resume>
08a3aeb7 +0x61:  lea    -0x9(%ebp),%eax
08a3aeba +0x64:  mov    %eax,(%esp)
08a3aebd +0x67:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08a3aec2 +0x6c:  add    $0x20,%esp
08a3aec5 +0x6f:  pop    %ebx
08a3aec6 +0x70:  pop    %esi
08a3aec7 +0x71:  pop    %ebp
08a3aec8 +0x72:  ret
08a3aec9 +0x73:  nop
```

## 反编译 C

```c
// PassiveObjGeneratorObject::PassiveObjGeneratorObject @ 0x8a3ae56

/* PassiveObjGeneratorObject::PassiveObjGeneratorObject() */

void __thiscall
PassiveObjGeneratorObject::PassiveObjGeneratorObject(PassiveObjGeneratorObject *this)

{
  allocator<char> local_d;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::allocator<char>::allocator();
                    /* try { // try from 08a3ae95 to 08a3ae99 has its CatchHandler @ 08a3ae9c */
  std::string::string((string *)(this + 8),"",(allocator *)&local_d);
  std::allocator<char>::~allocator(&local_d);
  return;
}
```
