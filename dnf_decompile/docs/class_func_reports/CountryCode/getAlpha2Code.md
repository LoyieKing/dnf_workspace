# getAlpha2Code

`_ZNK11CountryCode13getAlpha2CodeEv`

`CountryCode::getAlpha2Code() const`

| 类 | 地址 |
|---|---|
| `CountryCode` | `0x08ad319a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad319a  _ZNK11CountryCode13getAlpha2CodeEv
#           CountryCode::getAlpha2Code() const
# range [0x08ad319a, 0x08ad322f]
08ad319a +0x00:  push   %ebp
08ad319b +0x01:  mov    %esp,%ebp
08ad319d +0x03:  push   %esi
08ad319e +0x04:  push   %ebx
08ad319f +0x05:  sub    $0x20,%esp
08ad31a2 +0x08:  mov    0x8(%ebp),%ebx
08ad31a5 +0x0b:  movw   $0x0,-0xc(%ebp)
08ad31ab +0x11:  movb   $0x0,-0xa(%ebp)
08ad31af +0x15:  mov    0xc(%ebp),%eax
08ad31b2 +0x18:  movzbl (%eax),%eax
08ad31b5 +0x1b:  movzbl %al,%eax
08ad31b8 +0x1e:  movzbl &_ZL7ccTable(,%eax,8),%eax
08ad31c0 +0x26:  mov    %al,-0xc(%ebp)
08ad31c3 +0x29:  mov    0xc(%ebp),%eax
08ad31c6 +0x2c:  movzbl (%eax),%eax
08ad31c9 +0x2f:  movzbl %al,%eax
08ad31cc +0x32:  movzbl &_ZL7ccTable+0x1(,%eax,8),%eax
08ad31d4 +0x3a:  mov    %al,-0xb(%ebp)
08ad31d7 +0x3d:  mov    %ebx,%esi
08ad31d9 +0x3f:  lea    -0x9(%ebp),%eax
08ad31dc +0x42:  mov    %eax,(%esp)
08ad31df +0x45:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08ad31e4 +0x4a:  lea    -0x9(%ebp),%eax
08ad31e7 +0x4d:  mov    %eax,0x8(%esp)
08ad31eb +0x51:  lea    -0xc(%ebp),%eax
08ad31ee +0x54:  mov    %eax,0x4(%esp)
08ad31f2 +0x58:  mov    %esi,(%esp)
08ad31f5 +0x5b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08ad31fa +0x60:  jmp    08ad3217 <+0x7d>
08ad31fc +0x62:  mov    %edx,%ebx
08ad31fe +0x64:  mov    %eax,%esi
08ad3200 +0x66:  lea    -0x9(%ebp),%eax
08ad3203 +0x69:  mov    %eax,(%esp)
08ad3206 +0x6c:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08ad320b +0x71:  mov    %esi,%eax
08ad320d +0x73:  mov    %ebx,%edx
08ad320f +0x75:  mov    %eax,(%esp)
08ad3212 +0x78:  call   08ae3750 <_Unwind_Resume>
08ad3217 +0x7d:  lea    -0x9(%ebp),%eax
08ad321a +0x80:  mov    %eax,(%esp)
08ad321d +0x83:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08ad3222 +0x88:  mov    %ebx,%eax
08ad3224 +0x8a:  mov    %ebx,%eax
08ad3226 +0x8c:  add    $0x20,%esp
08ad3229 +0x8f:  pop    %ebx
08ad322a +0x90:  pop    %esi
08ad322b +0x91:  pop    %ebp
08ad322c +0x92:  ret    $0x4
08ad322f +0x95:  nop
```

## 反编译 C

```c
// CountryCode::getAlpha2Code @ 0x8ad319a

/* DWARF original prototype: tstring getAlpha2Code(CountryCode * this) */

tstring __thiscall CountryCode::getAlpha2Code(CountryCode *this)

{
  byte *in_stack_00000008;
  byte local_10;
  byte bStack_f;
  undefined1 local_e;
  allocator<char> local_d;
  
                    /* Unresolved local var: TCHAR[3] t@[???] */
  local_e = 0;
  _local_10 = CONCAT11(ccTable[*in_stack_00000008].alpha2_2,ccTable[*in_stack_00000008].alpha2_1);
  std::allocator<char>::allocator();
                    /* try { // try from 08ad31f5 to 08ad31f9 has its CatchHandler @ 08ad31fc */
  std::string::string((string *)this,(char *)&local_10,(allocator *)&local_d);
  std::allocator<char>::~allocator(&local_d);
  return (tstring)(_Alloc_hider)this;
}
```
