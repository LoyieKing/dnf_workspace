# ~DeleteInvalidItemScript

`_ZN23DeleteInvalidItemScriptD1Ev`

`DeleteInvalidItemScript::~DeleteInvalidItemScript()`

| 类 | 地址 |
|---|---|
| `DeleteInvalidItemScript` | `0x08ac1dce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac1dce  _ZN23DeleteInvalidItemScriptD1Ev
#           DeleteInvalidItemScript::~DeleteInvalidItemScript()
# range [0x08ac1dce, 0x08ac1e5f]
08ac1dce +0x00:  push   %ebp
08ac1dcf +0x01:  mov    %esp,%ebp
08ac1dd1 +0x03:  push   %esi
08ac1dd2 +0x04:  push   %ebx
08ac1dd3 +0x05:  sub    $0x10,%esp
08ac1dd6 +0x08:  mov    0x8(%ebp),%eax
08ac1dd9 +0x0b:  mov    %eax,(%esp)
08ac1ddc +0x0e:  call   08ac2066 <_ZN23DeleteInvalidItemScript11clearScriptEv>  ; DeleteInvalidItemScript::clearScript()
08ac1de1 +0x13:  jmp    08ac1dfb <+0x2d>
08ac1de3 +0x15:  mov    %edx,%ebx
08ac1de5 +0x17:  mov    %eax,%esi
08ac1de7 +0x19:  mov    0x8(%ebp),%eax
08ac1dea +0x1c:  add    $0x8,%eax
08ac1ded +0x1f:  mov    %eax,(%esp)
08ac1df0 +0x22:  call   08ac2242 <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x53>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x53
08ac1df5 +0x27:  mov    %esi,%eax
08ac1df7 +0x29:  mov    %ebx,%edx
08ac1df9 +0x2b:  jmp    08ac1e0b <+0x3d>
08ac1dfb +0x2d:  mov    0x8(%ebp),%eax
08ac1dfe +0x30:  add    $0x8,%eax
08ac1e01 +0x33:  mov    %eax,(%esp)
08ac1e04 +0x36:  call   08ac2242 <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x53>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x53
08ac1e09 +0x3b:  jmp    08ac1e23 <+0x55>
08ac1e0b +0x3d:  mov    %edx,%ebx
08ac1e0d +0x3f:  mov    %eax,%esi
08ac1e0f +0x41:  mov    0x8(%ebp),%eax
08ac1e12 +0x44:  add    $0x4,%eax
08ac1e15 +0x47:  mov    %eax,(%esp)
08ac1e18 +0x4a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac1e1d +0x4f:  mov    %esi,%eax
08ac1e1f +0x51:  mov    %ebx,%edx
08ac1e21 +0x53:  jmp    08ac1e33 <+0x65>
08ac1e23 +0x55:  mov    0x8(%ebp),%eax
08ac1e26 +0x58:  add    $0x4,%eax
08ac1e29 +0x5b:  mov    %eax,(%esp)
08ac1e2c +0x5e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac1e31 +0x63:  jmp    08ac1e4e <+0x80>
08ac1e33 +0x65:  mov    %edx,%ebx
08ac1e35 +0x67:  mov    %eax,%esi
08ac1e37 +0x69:  mov    0x8(%ebp),%eax
08ac1e3a +0x6c:  mov    %eax,(%esp)
08ac1e3d +0x6f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac1e42 +0x74:  mov    %esi,%eax
08ac1e44 +0x76:  mov    %ebx,%edx
08ac1e46 +0x78:  mov    %eax,(%esp)
08ac1e49 +0x7b:  call   08ae3750 <_Unwind_Resume>
08ac1e4e +0x80:  mov    0x8(%ebp),%eax
08ac1e51 +0x83:  mov    %eax,(%esp)
08ac1e54 +0x86:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac1e59 +0x8b:  add    $0x10,%esp
08ac1e5c +0x8e:  pop    %ebx
08ac1e5d +0x8f:  pop    %esi
08ac1e5e +0x90:  pop    %ebp
08ac1e5f +0x91:  ret
```

## 反编译 C

```c
// DeleteInvalidItemScript::~DeleteInvalidItemScript @ 0x8ac1dce

/* DeleteInvalidItemScript::~DeleteInvalidItemScript() */

void __thiscall DeleteInvalidItemScript::~DeleteInvalidItemScript(DeleteInvalidItemScript *this)

{
                    /* try { // try from 08ac1ddc to 08ac1de0 has its CatchHandler @ 08ac1de3 */
  clearScript(this);
                    /* try { // try from 08ac1e04 to 08ac1e08 has its CatchHandler @ 08ac1e0b */
  std::
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  ::~map((map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
          *)(this + 8));
                    /* try { // try from 08ac1e2c to 08ac1e30 has its CatchHandler @ 08ac1e33 */
  std::string::~string((string *)(this + 4));
  std::string::~string((string *)this);
  return;
}
```
