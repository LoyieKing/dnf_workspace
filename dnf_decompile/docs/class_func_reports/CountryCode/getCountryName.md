# getCountryName

`_ZNK11CountryCode14getCountryNameEv`

`CountryCode::getCountryName() const`

| 类 | 地址 |
|---|---|
| `CountryCode` | `0x08ad3246` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3246  _ZNK11CountryCode14getCountryNameEv
#           CountryCode::getCountryName() const
# range [0x08ad3246, 0x08ad32bb]
08ad3246 +0x00:  push   %ebp
08ad3247 +0x01:  mov    %esp,%ebp
08ad3249 +0x03:  push   %esi
08ad324a +0x04:  push   %ebx
08ad324b +0x05:  sub    $0x20,%esp
08ad324e +0x08:  mov    0x8(%ebp),%ebx
08ad3251 +0x0b:  mov    %ebx,%esi
08ad3253 +0x0d:  lea    -0x9(%ebp),%eax
08ad3256 +0x10:  mov    %eax,(%esp)
08ad3259 +0x13:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08ad325e +0x18:  mov    0xc(%ebp),%eax
08ad3261 +0x1b:  movzbl (%eax),%eax
08ad3264 +0x1e:  movzbl %al,%eax
08ad3267 +0x21:  mov    &_ZL7ccTable+0x4(,%eax,8),%eax
08ad326e +0x28:  mov    %eax,(%esp)
08ad3271 +0x2b:  call   08adeb75 <_Z9toTStringPKc>  ; toTString(char const*)
08ad3276 +0x30:  lea    -0x9(%ebp),%edx
08ad3279 +0x33:  mov    %edx,0x8(%esp)
08ad327d +0x37:  mov    %eax,0x4(%esp)
08ad3281 +0x3b:  mov    %esi,(%esp)
08ad3284 +0x3e:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08ad3289 +0x43:  jmp    08ad32a6 <+0x60>
08ad328b +0x45:  mov    %edx,%ebx
08ad328d +0x47:  mov    %eax,%esi
08ad328f +0x49:  lea    -0x9(%ebp),%eax
08ad3292 +0x4c:  mov    %eax,(%esp)
08ad3295 +0x4f:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08ad329a +0x54:  mov    %esi,%eax
08ad329c +0x56:  mov    %ebx,%edx
08ad329e +0x58:  mov    %eax,(%esp)
08ad32a1 +0x5b:  call   08ae3750 <_Unwind_Resume>
08ad32a6 +0x60:  lea    -0x9(%ebp),%eax
08ad32a9 +0x63:  mov    %eax,(%esp)
08ad32ac +0x66:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08ad32b1 +0x6b:  mov    %ebx,%eax
08ad32b3 +0x6d:  mov    %ebx,%eax
08ad32b5 +0x6f:  add    $0x20,%esp
08ad32b8 +0x72:  pop    %ebx
08ad32b9 +0x73:  pop    %esi
08ad32ba +0x74:  pop    %ebp
08ad32bb +0x75:  ret    $0x4
```

## 反编译 C

```c
// CountryCode::getCountryName @ 0x8ad3246

/* DWARF original prototype: tstring getCountryName(CountryCode * this) */

tstring __thiscall CountryCode::getCountryName(CountryCode *this)

{
  TCHAR *pTVar1;
  byte *in_stack_00000008;
  allocator<char> local_d;
  
  std::allocator<char>::allocator();
                    /* try { // try from 08ad3271 to 08ad3288 has its CatchHandler @ 08ad328b */
  pTVar1 = toTString(ccTable[*in_stack_00000008].name);
  std::string::string((string *)this,pTVar1,(allocator *)&local_d);
  std::allocator<char>::~allocator(&local_d);
  return (tstring)(_Alloc_hider)this;
}
```
