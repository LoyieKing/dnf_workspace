# LevelupSupport2ndScript

`_ZN23LevelupSupport2ndScriptC1Ev`

`LevelupSupport2ndScript::LevelupSupport2ndScript()`

| 类 | 地址 |
|---|---|
| `LevelupSupport2ndScript` | `0x08ab54be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab54be  _ZN23LevelupSupport2ndScriptC1Ev
#           LevelupSupport2ndScript::LevelupSupport2ndScript()
# range [0x08ab54be, 0x08ab552f]
08ab54be +0x00:  push   %ebp
08ab54bf +0x01:  mov    %esp,%ebp
08ab54c1 +0x03:  push   %esi
08ab54c2 +0x04:  push   %ebx
08ab54c3 +0x05:  sub    $0x10,%esp
08ab54c6 +0x08:  mov    0x8(%ebp),%eax
08ab54c9 +0x0b:  add    $0x4,%eax
08ab54cc +0x0e:  mov    %eax,(%esp)
08ab54cf +0x11:  call   08ab5c7c <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x254>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x254
08ab54d4 +0x16:  mov    0x8(%ebp),%eax
08ab54d7 +0x19:  add    $0x1c,%eax
08ab54da +0x1c:  mov    %eax,(%esp)
08ab54dd +0x1f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ab54e2 +0x24:  mov    0x8(%ebp),%eax
08ab54e5 +0x27:  add    $0x20,%eax
08ab54e8 +0x2a:  mov    %eax,(%esp)
08ab54eb +0x2d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ab54f0 +0x32:  jmp    08ab5528 <+0x6a>
08ab54f2 +0x34:  mov    %edx,%ebx
08ab54f4 +0x36:  mov    %eax,%esi
08ab54f6 +0x38:  mov    0x8(%ebp),%eax
08ab54f9 +0x3b:  add    $0x1c,%eax
08ab54fc +0x3e:  mov    %eax,(%esp)
08ab54ff +0x41:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab5504 +0x46:  mov    %esi,%eax
08ab5506 +0x48:  mov    %ebx,%edx
08ab5508 +0x4a:  jmp    08ab550a <+0x4c>
08ab550a +0x4c:  mov    %edx,%ebx
08ab550c +0x4e:  mov    %eax,%esi
08ab550e +0x50:  mov    0x8(%ebp),%eax
08ab5511 +0x53:  add    $0x4,%eax
08ab5514 +0x56:  mov    %eax,(%esp)
08ab5517 +0x59:  call   08ab5a8c <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x64>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x64
08ab551c +0x5e:  mov    %esi,%eax
08ab551e +0x60:  mov    %ebx,%edx
08ab5520 +0x62:  mov    %eax,(%esp)
08ab5523 +0x65:  call   08ae3750 <_Unwind_Resume>
08ab5528 +0x6a:  add    $0x10,%esp
08ab552b +0x6d:  pop    %ebx
08ab552c +0x6e:  pop    %esi
08ab552d +0x6f:  pop    %ebp
08ab552e +0x70:  ret
08ab552f +0x71:  nop
```

## 反编译 C

```c
// LevelupSupport2ndScript::LevelupSupport2ndScript @ 0x8ab54be

/* LevelupSupport2ndScript::LevelupSupport2ndScript() */

void __thiscall LevelupSupport2ndScript::LevelupSupport2ndScript(LevelupSupport2ndScript *this)

{
  std::
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  ::map((map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
         *)(this + 4));
                    /* try { // try from 08ab54dd to 08ab54e1 has its CatchHandler @ 08ab550a */
  std::string::string((string *)(this + 0x1c));
                    /* try { // try from 08ab54eb to 08ab54ef has its CatchHandler @ 08ab54f2 */
  std::string::string((string *)(this + 0x20));
  return;
}
```
