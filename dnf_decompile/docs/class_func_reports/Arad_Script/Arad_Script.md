# Arad_Script

`_ZN11Arad_ScriptC1Ev`

`Arad_Script::Arad_Script()`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817b474` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817b474  _ZN11Arad_ScriptC1Ev
#           Arad_Script::Arad_Script()
# range [0x0817b474, 0x0817b531]
0817b474 +0x00:  push   %ebp
0817b475 +0x01:  mov    %esp,%ebp
0817b477 +0x03:  push   %esi
0817b478 +0x04:  push   %ebx
0817b479 +0x05:  sub    $0x10,%esp
0817b47c +0x08:  mov    0x8(%ebp),%eax
0817b47f +0x0b:  add    $0x18,%eax
0817b482 +0x0e:  mov    %eax,(%esp)
0817b485 +0x11:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0817b48a +0x16:  mov    0x8(%ebp),%eax
0817b48d +0x19:  add    $0x1c,%eax
0817b490 +0x1c:  mov    %eax,(%esp)
0817b493 +0x1f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0817b498 +0x24:  mov    0x8(%ebp),%eax
0817b49b +0x27:  add    $0x20,%eax
0817b49e +0x2a:  mov    %eax,(%esp)
0817b4a1 +0x2d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0817b4a6 +0x32:  mov    0x8(%ebp),%eax
0817b4a9 +0x35:  add    $0x24,%eax
0817b4ac +0x38:  mov    %eax,(%esp)
0817b4af +0x3b:  call   0817cbea <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x31>  ; global constructors keyed to Arad_Script::Arad_Script()+0x31
0817b4b4 +0x40:  mov    0x8(%ebp),%eax
0817b4b7 +0x43:  add    $0x3c,%eax
0817b4ba +0x46:  mov    %eax,(%esp)
0817b4bd +0x49:  call   0817cbea <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x31>  ; global constructors keyed to Arad_Script::Arad_Script()+0x31
0817b4c2 +0x4e:  jmp    0817b52a <+0xb6>
0817b4c4 +0x50:  mov    %edx,%ebx
0817b4c6 +0x52:  mov    %eax,%esi
0817b4c8 +0x54:  mov    0x8(%ebp),%eax
0817b4cb +0x57:  add    $0x24,%eax
0817b4ce +0x5a:  mov    %eax,(%esp)
0817b4d1 +0x5d:  call   0817cbd6 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1d
0817b4d6 +0x62:  mov    %esi,%eax
0817b4d8 +0x64:  mov    %ebx,%edx
0817b4da +0x66:  jmp    0817b4dc <+0x68>
0817b4dc +0x68:  mov    %edx,%ebx
0817b4de +0x6a:  mov    %eax,%esi
0817b4e0 +0x6c:  mov    0x8(%ebp),%eax
0817b4e3 +0x6f:  add    $0x20,%eax
0817b4e6 +0x72:  mov    %eax,(%esp)
0817b4e9 +0x75:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817b4ee +0x7a:  mov    %esi,%eax
0817b4f0 +0x7c:  mov    %ebx,%edx
0817b4f2 +0x7e:  jmp    0817b4f4 <+0x80>
0817b4f4 +0x80:  mov    %edx,%ebx
0817b4f6 +0x82:  mov    %eax,%esi
0817b4f8 +0x84:  mov    0x8(%ebp),%eax
0817b4fb +0x87:  add    $0x1c,%eax
0817b4fe +0x8a:  mov    %eax,(%esp)
0817b501 +0x8d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817b506 +0x92:  mov    %esi,%eax
0817b508 +0x94:  mov    %ebx,%edx
0817b50a +0x96:  jmp    0817b50c <+0x98>
0817b50c +0x98:  mov    %edx,%ebx
0817b50e +0x9a:  mov    %eax,%esi
0817b510 +0x9c:  mov    0x8(%ebp),%eax
0817b513 +0x9f:  add    $0x18,%eax
0817b516 +0xa2:  mov    %eax,(%esp)
0817b519 +0xa5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817b51e +0xaa:  mov    %esi,%eax
0817b520 +0xac:  mov    %ebx,%edx
0817b522 +0xae:  mov    %eax,(%esp)
0817b525 +0xb1:  call   08ae3750 <_Unwind_Resume>
0817b52a +0xb6:  add    $0x10,%esp
0817b52d +0xb9:  pop    %ebx
0817b52e +0xba:  pop    %esi
0817b52f +0xbb:  pop    %ebp
0817b530 +0xbc:  ret
0817b531 +0xbd:  nop
```

## 反编译 C

```c
// Arad_Script::Arad_Script @ 0x817b474

/* Arad_Script::Arad_Script() */

void __thiscall Arad_Script::Arad_Script(Arad_Script *this)

{
  std::string::string((string *)(this + 0x18));
                    /* try { // try from 0817b493 to 0817b497 has its CatchHandler @ 0817b50c */
  std::string::string((string *)(this + 0x1c));
                    /* try { // try from 0817b4a1 to 0817b4a5 has its CatchHandler @ 0817b4f4 */
  std::string::string((string *)(this + 0x20));
                    /* try { // try from 0817b4af to 0817b4b3 has its CatchHandler @ 0817b4dc */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x24));
                    /* try { // try from 0817b4bd to 0817b4c1 has its CatchHandler @ 0817b4c4 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x3c));
  return;
}
```
