# ~LevelupSupport2ndScript

`_ZN23LevelupSupport2ndScriptD1Ev`

`LevelupSupport2ndScript::~LevelupSupport2ndScript()`

| 类 | 地址 |
|---|---|
| `LevelupSupport2ndScript` | `0x08ab5530` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab5530  _ZN23LevelupSupport2ndScriptD1Ev
#           LevelupSupport2ndScript::~LevelupSupport2ndScript()
# range [0x08ab5530, 0x08ab55a3]
08ab5530 +0x00:  push   %ebp
08ab5531 +0x01:  mov    %esp,%ebp
08ab5533 +0x03:  push   %esi
08ab5534 +0x04:  push   %ebx
08ab5535 +0x05:  sub    $0x10,%esp
08ab5538 +0x08:  mov    0x8(%ebp),%eax
08ab553b +0x0b:  add    $0x20,%eax
08ab553e +0x0e:  mov    %eax,(%esp)
08ab5541 +0x11:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab5546 +0x16:  jmp    08ab5560 <+0x30>
08ab5548 +0x18:  mov    %edx,%ebx
08ab554a +0x1a:  mov    %eax,%esi
08ab554c +0x1c:  mov    0x8(%ebp),%eax
08ab554f +0x1f:  add    $0x1c,%eax
08ab5552 +0x22:  mov    %eax,(%esp)
08ab5555 +0x25:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab555a +0x2a:  mov    %esi,%eax
08ab555c +0x2c:  mov    %ebx,%edx
08ab555e +0x2e:  jmp    08ab5570 <+0x40>
08ab5560 +0x30:  mov    0x8(%ebp),%eax
08ab5563 +0x33:  add    $0x1c,%eax
08ab5566 +0x36:  mov    %eax,(%esp)
08ab5569 +0x39:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab556e +0x3e:  jmp    08ab558e <+0x5e>
08ab5570 +0x40:  mov    %edx,%ebx
08ab5572 +0x42:  mov    %eax,%esi
08ab5574 +0x44:  mov    0x8(%ebp),%eax
08ab5577 +0x47:  add    $0x4,%eax
08ab557a +0x4a:  mov    %eax,(%esp)
08ab557d +0x4d:  call   08ab5a8c <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x64>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x64
08ab5582 +0x52:  mov    %esi,%eax
08ab5584 +0x54:  mov    %ebx,%edx
08ab5586 +0x56:  mov    %eax,(%esp)
08ab5589 +0x59:  call   08ae3750 <_Unwind_Resume>
08ab558e +0x5e:  mov    0x8(%ebp),%eax
08ab5591 +0x61:  add    $0x4,%eax
08ab5594 +0x64:  mov    %eax,(%esp)
08ab5597 +0x67:  call   08ab5a8c <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x64>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x64
08ab559c +0x6c:  add    $0x10,%esp
08ab559f +0x6f:  pop    %ebx
08ab55a0 +0x70:  pop    %esi
08ab55a1 +0x71:  pop    %ebp
08ab55a2 +0x72:  ret
08ab55a3 +0x73:  nop
```

## 反编译 C

```c
// LevelupSupport2ndScript::~LevelupSupport2ndScript @ 0x8ab5530

/* LevelupSupport2ndScript::~LevelupSupport2ndScript() */

void __thiscall LevelupSupport2ndScript::~LevelupSupport2ndScript(LevelupSupport2ndScript *this)

{
                    /* try { // try from 08ab5541 to 08ab5545 has its CatchHandler @ 08ab5548 */
  std::string::~string((string *)(this + 0x20));
                    /* try { // try from 08ab5569 to 08ab556d has its CatchHandler @ 08ab5570 */
  std::string::~string((string *)(this + 0x1c));
  std::
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  ::~map((map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
          *)(this + 4));
  return;
}
```
