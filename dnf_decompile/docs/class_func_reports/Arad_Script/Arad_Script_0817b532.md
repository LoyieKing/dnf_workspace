# Arad_Script

`_ZN11Arad_ScriptC1EPKc`

`Arad_Script::Arad_Script(char const*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817b532` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817b532  _ZN11Arad_ScriptC1EPKc
#           Arad_Script::Arad_Script(char const*)
# range [0x0817b532, 0x0817b623]
0817b532 +0x00:  push   %ebp
0817b533 +0x01:  mov    %esp,%ebp
0817b535 +0x03:  push   %esi
0817b536 +0x04:  push   %ebx
0817b537 +0x05:  sub    $0x10,%esp
0817b53a +0x08:  mov    0x8(%ebp),%eax
0817b53d +0x0b:  add    $0x18,%eax
0817b540 +0x0e:  mov    %eax,(%esp)
0817b543 +0x11:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0817b548 +0x16:  mov    0x8(%ebp),%eax
0817b54b +0x19:  add    $0x1c,%eax
0817b54e +0x1c:  mov    %eax,(%esp)
0817b551 +0x1f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0817b556 +0x24:  mov    0x8(%ebp),%eax
0817b559 +0x27:  add    $0x20,%eax
0817b55c +0x2a:  mov    %eax,(%esp)
0817b55f +0x2d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0817b564 +0x32:  mov    0x8(%ebp),%eax
0817b567 +0x35:  add    $0x24,%eax
0817b56a +0x38:  mov    %eax,(%esp)
0817b56d +0x3b:  call   0817cbea <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x31>  ; global constructors keyed to Arad_Script::Arad_Script()+0x31
0817b572 +0x40:  mov    0x8(%ebp),%eax
0817b575 +0x43:  add    $0x3c,%eax
0817b578 +0x46:  mov    %eax,(%esp)
0817b57b +0x49:  call   0817cbea <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x31>  ; global constructors keyed to Arad_Script::Arad_Script()+0x31
0817b580 +0x4e:  mov    0xc(%ebp),%eax
0817b583 +0x51:  mov    %eax,(%esp)
0817b586 +0x54:  call   0817b70a <_ZN11Arad_Script14make_file_pathEPKc>  ; Arad_Script::make_file_path(char const*)
0817b58b +0x59:  mov    0x8(%ebp),%edx
0817b58e +0x5c:  add    $0x20,%edx
0817b591 +0x5f:  mov    %eax,0x4(%esp)
0817b595 +0x63:  mov    %edx,(%esp)
0817b598 +0x66:  call   08708000 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c10
0817b59d +0x6b:  jmp    0817b61d <+0xeb>
0817b59f +0x6d:  mov    %edx,%ebx
0817b5a1 +0x6f:  mov    %eax,%esi
0817b5a3 +0x71:  mov    0x8(%ebp),%eax
0817b5a6 +0x74:  add    $0x3c,%eax
0817b5a9 +0x77:  mov    %eax,(%esp)
0817b5ac +0x7a:  call   0817cbd6 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1d
0817b5b1 +0x7f:  mov    %esi,%eax
0817b5b3 +0x81:  mov    %ebx,%edx
0817b5b5 +0x83:  jmp    0817b5b7 <+0x85>
0817b5b7 +0x85:  mov    %edx,%ebx
0817b5b9 +0x87:  mov    %eax,%esi
0817b5bb +0x89:  mov    0x8(%ebp),%eax
0817b5be +0x8c:  add    $0x24,%eax
0817b5c1 +0x8f:  mov    %eax,(%esp)
0817b5c4 +0x92:  call   0817cbd6 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1d
0817b5c9 +0x97:  mov    %esi,%eax
0817b5cb +0x99:  mov    %ebx,%edx
0817b5cd +0x9b:  jmp    0817b5cf <+0x9d>
0817b5cf +0x9d:  mov    %edx,%ebx
0817b5d1 +0x9f:  mov    %eax,%esi
0817b5d3 +0xa1:  mov    0x8(%ebp),%eax
0817b5d6 +0xa4:  add    $0x20,%eax
0817b5d9 +0xa7:  mov    %eax,(%esp)
0817b5dc +0xaa:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817b5e1 +0xaf:  mov    %esi,%eax
0817b5e3 +0xb1:  mov    %ebx,%edx
0817b5e5 +0xb3:  jmp    0817b5e7 <+0xb5>
0817b5e7 +0xb5:  mov    %edx,%ebx
0817b5e9 +0xb7:  mov    %eax,%esi
0817b5eb +0xb9:  mov    0x8(%ebp),%eax
0817b5ee +0xbc:  add    $0x1c,%eax
0817b5f1 +0xbf:  mov    %eax,(%esp)
0817b5f4 +0xc2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817b5f9 +0xc7:  mov    %esi,%eax
0817b5fb +0xc9:  mov    %ebx,%edx
0817b5fd +0xcb:  jmp    0817b5ff <+0xcd>
0817b5ff +0xcd:  mov    %edx,%ebx
0817b601 +0xcf:  mov    %eax,%esi
0817b603 +0xd1:  mov    0x8(%ebp),%eax
0817b606 +0xd4:  add    $0x18,%eax
0817b609 +0xd7:  mov    %eax,(%esp)
0817b60c +0xda:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817b611 +0xdf:  mov    %esi,%eax
0817b613 +0xe1:  mov    %ebx,%edx
0817b615 +0xe3:  mov    %eax,(%esp)
0817b618 +0xe6:  call   08ae3750 <_Unwind_Resume>
0817b61d +0xeb:  add    $0x10,%esp
0817b620 +0xee:  pop    %ebx
0817b621 +0xef:  pop    %esi
0817b622 +0xf0:  pop    %ebp
0817b623 +0xf1:  ret
```

## 反编译 C

```c
// Arad_Script::Arad_Script @ 0x817b532

/* Arad_Script::Arad_Script(char const*) */

void __thiscall Arad_Script::Arad_Script(Arad_Script *this,char *param_1)

{
  char *pcVar1;
  
  std::string::string((string *)(this + 0x18));
                    /* try { // try from 0817b551 to 0817b555 has its CatchHandler @ 0817b5ff */
  std::string::string((string *)(this + 0x1c));
                    /* try { // try from 0817b55f to 0817b563 has its CatchHandler @ 0817b5e7 */
  std::string::string((string *)(this + 0x20));
                    /* try { // try from 0817b56d to 0817b571 has its CatchHandler @ 0817b5cf */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x24));
                    /* try { // try from 0817b57b to 0817b57f has its CatchHandler @ 0817b5b7 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x3c));
  pcVar1 = (char *)make_file_path(param_1);
                    /* try { // try from 0817b598 to 0817b59c has its CatchHandler @ 0817b59f */
  std::string::append((string *)(this + 0x20),pcVar1);
  return;
}
```
