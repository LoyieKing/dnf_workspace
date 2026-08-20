# DeleteInvalidItemScript

`_ZN23DeleteInvalidItemScriptC1Ev`

`DeleteInvalidItemScript::DeleteInvalidItemScript()`

| 类 | 地址 |
|---|---|
| `DeleteInvalidItemScript` | `0x08ac1d40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac1d40  _ZN23DeleteInvalidItemScriptC1Ev
#           DeleteInvalidItemScript::DeleteInvalidItemScript()
# range [0x08ac1d40, 0x08ac1dcd]
08ac1d40 +0x00:  push   %ebp
08ac1d41 +0x01:  mov    %esp,%ebp
08ac1d43 +0x03:  push   %esi
08ac1d44 +0x04:  push   %ebx
08ac1d45 +0x05:  sub    $0x10,%esp
08ac1d48 +0x08:  mov    0x8(%ebp),%eax
08ac1d4b +0x0b:  mov    %eax,(%esp)
08ac1d4e +0x0e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ac1d53 +0x13:  mov    0x8(%ebp),%eax
08ac1d56 +0x16:  add    $0x4,%eax
08ac1d59 +0x19:  mov    %eax,(%esp)
08ac1d5c +0x1c:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ac1d61 +0x21:  mov    0x8(%ebp),%eax
08ac1d64 +0x24:  add    $0x8,%eax
08ac1d67 +0x27:  mov    %eax,(%esp)
08ac1d6a +0x2a:  call   08ac2256 <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x67>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x67
08ac1d6f +0x2f:  mov    0x8(%ebp),%eax
08ac1d72 +0x32:  mov    %eax,(%esp)
08ac1d75 +0x35:  call   08ac2066 <_ZN23DeleteInvalidItemScript11clearScriptEv>  ; DeleteInvalidItemScript::clearScript()
08ac1d7a +0x3a:  jmp    08ac1dc7 <+0x87>
08ac1d7c +0x3c:  mov    %edx,%ebx
08ac1d7e +0x3e:  mov    %eax,%esi
08ac1d80 +0x40:  mov    0x8(%ebp),%eax
08ac1d83 +0x43:  add    $0x8,%eax
08ac1d86 +0x46:  mov    %eax,(%esp)
08ac1d89 +0x49:  call   08ac2242 <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x53>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x53
08ac1d8e +0x4e:  mov    %esi,%eax
08ac1d90 +0x50:  mov    %ebx,%edx
08ac1d92 +0x52:  jmp    08ac1d94 <+0x54>
08ac1d94 +0x54:  mov    %edx,%ebx
08ac1d96 +0x56:  mov    %eax,%esi
08ac1d98 +0x58:  mov    0x8(%ebp),%eax
08ac1d9b +0x5b:  add    $0x4,%eax
08ac1d9e +0x5e:  mov    %eax,(%esp)
08ac1da1 +0x61:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac1da6 +0x66:  mov    %esi,%eax
08ac1da8 +0x68:  mov    %ebx,%edx
08ac1daa +0x6a:  jmp    08ac1dac <+0x6c>
08ac1dac +0x6c:  mov    %edx,%ebx
08ac1dae +0x6e:  mov    %eax,%esi
08ac1db0 +0x70:  mov    0x8(%ebp),%eax
08ac1db3 +0x73:  mov    %eax,(%esp)
08ac1db6 +0x76:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac1dbb +0x7b:  mov    %esi,%eax
08ac1dbd +0x7d:  mov    %ebx,%edx
08ac1dbf +0x7f:  mov    %eax,(%esp)
08ac1dc2 +0x82:  call   08ae3750 <_Unwind_Resume>
08ac1dc7 +0x87:  add    $0x10,%esp
08ac1dca +0x8a:  pop    %ebx
08ac1dcb +0x8b:  pop    %esi
08ac1dcc +0x8c:  pop    %ebp
08ac1dcd +0x8d:  ret
```

## 反编译 C

```c
// DeleteInvalidItemScript::DeleteInvalidItemScript @ 0x8ac1d40

/* DeleteInvalidItemScript::DeleteInvalidItemScript() */

void __thiscall DeleteInvalidItemScript::DeleteInvalidItemScript(DeleteInvalidItemScript *this)

{
  std::string::string((string *)this);
                    /* try { // try from 08ac1d5c to 08ac1d60 has its CatchHandler @ 08ac1dac */
  std::string::string((string *)(this + 4));
                    /* try { // try from 08ac1d6a to 08ac1d6e has its CatchHandler @ 08ac1d94 */
  std::
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  ::map((map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
         *)(this + 8));
                    /* try { // try from 08ac1d75 to 08ac1d79 has its CatchHandler @ 08ac1d7c */
  clearScript(this);
  return;
}
```
