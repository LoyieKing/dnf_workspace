# ~Arad_Script

`_ZN11Arad_ScriptD1Ev`

`Arad_Script::~Arad_Script()`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817b624` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817b624  _ZN11Arad_ScriptD1Ev
#           Arad_Script::~Arad_Script()
# range [0x0817b624, 0x0817b709]
0817b624 +0x00:  push   %ebp
0817b625 +0x01:  mov    %esp,%ebp
0817b627 +0x03:  push   %esi
0817b628 +0x04:  push   %ebx
0817b629 +0x05:  sub    $0x10,%esp
0817b62c +0x08:  mov    0x8(%ebp),%eax
0817b62f +0x0b:  mov    0x14(%eax),%eax
0817b632 +0x0e:  test   %eax,%eax
0817b634 +0x10:  je     0817b64e <+0x2a>
0817b636 +0x12:  mov    0x8(%ebp),%eax
0817b639 +0x15:  mov    0x14(%eax),%eax
0817b63c +0x18:  test   %eax,%eax
0817b63e +0x1a:  je     0817b64e <+0x2a>
0817b640 +0x1c:  mov    0x8(%ebp),%eax
0817b643 +0x1f:  mov    0x14(%eax),%eax
0817b646 +0x22:  mov    %eax,(%esp)
0817b649 +0x25:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0817b64e +0x2a:  mov    0x8(%ebp),%eax
0817b651 +0x2d:  add    $0x3c,%eax
0817b654 +0x30:  mov    %eax,(%esp)
0817b657 +0x33:  call   0817cbd6 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1d
0817b65c +0x38:  jmp    0817b676 <+0x52>
0817b65e +0x3a:  mov    %edx,%ebx
0817b660 +0x3c:  mov    %eax,%esi
0817b662 +0x3e:  mov    0x8(%ebp),%eax
0817b665 +0x41:  add    $0x24,%eax
0817b668 +0x44:  mov    %eax,(%esp)
0817b66b +0x47:  call   0817cbd6 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1d
0817b670 +0x4c:  mov    %esi,%eax
0817b672 +0x4e:  mov    %ebx,%edx
0817b674 +0x50:  jmp    0817b686 <+0x62>
0817b676 +0x52:  mov    0x8(%ebp),%eax
0817b679 +0x55:  add    $0x24,%eax
0817b67c +0x58:  mov    %eax,(%esp)
0817b67f +0x5b:  call   0817cbd6 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1d
0817b684 +0x60:  jmp    0817b69e <+0x7a>
0817b686 +0x62:  mov    %edx,%ebx
0817b688 +0x64:  mov    %eax,%esi
0817b68a +0x66:  mov    0x8(%ebp),%eax
0817b68d +0x69:  add    $0x20,%eax
0817b690 +0x6c:  mov    %eax,(%esp)
0817b693 +0x6f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817b698 +0x74:  mov    %esi,%eax
0817b69a +0x76:  mov    %ebx,%edx
0817b69c +0x78:  jmp    0817b6ae <+0x8a>
0817b69e +0x7a:  mov    0x8(%ebp),%eax
0817b6a1 +0x7d:  add    $0x20,%eax
0817b6a4 +0x80:  mov    %eax,(%esp)
0817b6a7 +0x83:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817b6ac +0x88:  jmp    0817b6c6 <+0xa2>
0817b6ae +0x8a:  mov    %edx,%ebx
0817b6b0 +0x8c:  mov    %eax,%esi
0817b6b2 +0x8e:  mov    0x8(%ebp),%eax
0817b6b5 +0x91:  add    $0x1c,%eax
0817b6b8 +0x94:  mov    %eax,(%esp)
0817b6bb +0x97:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817b6c0 +0x9c:  mov    %esi,%eax
0817b6c2 +0x9e:  mov    %ebx,%edx
0817b6c4 +0xa0:  jmp    0817b6d6 <+0xb2>
0817b6c6 +0xa2:  mov    0x8(%ebp),%eax
0817b6c9 +0xa5:  add    $0x1c,%eax
0817b6cc +0xa8:  mov    %eax,(%esp)
0817b6cf +0xab:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817b6d4 +0xb0:  jmp    0817b6f4 <+0xd0>
0817b6d6 +0xb2:  mov    %edx,%ebx
0817b6d8 +0xb4:  mov    %eax,%esi
0817b6da +0xb6:  mov    0x8(%ebp),%eax
0817b6dd +0xb9:  add    $0x18,%eax
0817b6e0 +0xbc:  mov    %eax,(%esp)
0817b6e3 +0xbf:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817b6e8 +0xc4:  mov    %esi,%eax
0817b6ea +0xc6:  mov    %ebx,%edx
0817b6ec +0xc8:  mov    %eax,(%esp)
0817b6ef +0xcb:  call   08ae3750 <_Unwind_Resume>
0817b6f4 +0xd0:  mov    0x8(%ebp),%eax
0817b6f7 +0xd3:  add    $0x18,%eax
0817b6fa +0xd6:  mov    %eax,(%esp)
0817b6fd +0xd9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817b702 +0xde:  add    $0x10,%esp
0817b705 +0xe1:  pop    %ebx
0817b706 +0xe2:  pop    %esi
0817b707 +0xe3:  pop    %ebp
0817b708 +0xe4:  ret
0817b709 +0xe5:  nop
```

## 反编译 C

```c
// Arad_Script::~Arad_Script @ 0x817b624

/* Arad_Script::~Arad_Script() */

void __thiscall Arad_Script::~Arad_Script(Arad_Script *this)

{
  if ((*(int *)(this + 0x14) != 0) && (*(int *)(this + 0x14) != 0)) {
    operator_delete__(*(void **)(this + 0x14));
  }
                    /* try { // try from 0817b657 to 0817b65b has its CatchHandler @ 0817b65e */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x3c));
                    /* try { // try from 0817b67f to 0817b683 has its CatchHandler @ 0817b686 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x24));
                    /* try { // try from 0817b6a7 to 0817b6ab has its CatchHandler @ 0817b6ae */
  std::string::~string((string *)(this + 0x20));
                    /* try { // try from 0817b6cf to 0817b6d3 has its CatchHandler @ 0817b6d6 */
  std::string::~string((string *)(this + 0x1c));
  std::string::~string((string *)(this + 0x18));
  return;
}
```
