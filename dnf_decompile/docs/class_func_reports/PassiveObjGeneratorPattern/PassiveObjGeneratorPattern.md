# PassiveObjGeneratorPattern

`_ZN26PassiveObjGeneratorPatternC1Ev`

`PassiveObjGeneratorPattern::PassiveObjGeneratorPattern()`

| 类 | 地址 |
|---|---|
| `PassiveObjGeneratorPattern` | `0x08a3ad70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a3ad70  _ZN26PassiveObjGeneratorPatternC1Ev
#           PassiveObjGeneratorPattern::PassiveObjGeneratorPattern()
# range [0x08a3ad70, 0x08a3ae09]
08a3ad70 +0x00:  push   %ebp
08a3ad71 +0x01:  mov    %esp,%ebp
08a3ad73 +0x03:  push   %esi
08a3ad74 +0x04:  push   %ebx
08a3ad75 +0x05:  sub    $0x10,%esp
08a3ad78 +0x08:  mov    0x8(%ebp),%eax
08a3ad7b +0x0b:  movb   $0x1,(%eax)
08a3ad7e +0x0e:  mov    0x8(%ebp),%eax
08a3ad81 +0x11:  add    $0x4,%eax
08a3ad84 +0x14:  mov    %eax,(%esp)
08a3ad87 +0x17:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a3ad8c +0x1c:  mov    0x8(%ebp),%eax
08a3ad8f +0x1f:  movl   $0x0,0x8(%eax)
08a3ad96 +0x26:  mov    0x8(%ebp),%eax
08a3ad99 +0x29:  movl   $0x0,0xc(%eax)
08a3ada0 +0x30:  mov    0x8(%ebp),%eax
08a3ada3 +0x33:  add    $0x10,%eax
08a3ada6 +0x36:  mov    %eax,(%esp)
08a3ada9 +0x39:  call   080e4d12 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x38>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x38
08a3adae +0x3e:  mov    0x8(%ebp),%eax
08a3adb1 +0x41:  add    $0x4,%eax
08a3adb4 +0x44:  mov    %eax,(%esp)
08a3adb7 +0x47:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
08a3adbc +0x4c:  mov    0x8(%ebp),%eax
08a3adbf +0x4f:  add    $0x10,%eax
08a3adc2 +0x52:  mov    %eax,(%esp)
08a3adc5 +0x55:  call   080e4cf6 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x1c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x1c
08a3adca +0x5a:  jmp    08a3ae02 <+0x92>
08a3adcc +0x5c:  mov    %edx,%ebx
08a3adce +0x5e:  mov    %eax,%esi
08a3add0 +0x60:  mov    0x8(%ebp),%eax
08a3add3 +0x63:  add    $0x10,%eax
08a3add6 +0x66:  mov    %eax,(%esp)
08a3add9 +0x69:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
08a3adde +0x6e:  mov    %esi,%eax
08a3ade0 +0x70:  mov    %ebx,%edx
08a3ade2 +0x72:  jmp    08a3ade4 <+0x74>
08a3ade4 +0x74:  mov    %edx,%ebx
08a3ade6 +0x76:  mov    %eax,%esi
08a3ade8 +0x78:  mov    0x8(%ebp),%eax
08a3adeb +0x7b:  add    $0x4,%eax
08a3adee +0x7e:  mov    %eax,(%esp)
08a3adf1 +0x81:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a3adf6 +0x86:  mov    %esi,%eax
08a3adf8 +0x88:  mov    %ebx,%edx
08a3adfa +0x8a:  mov    %eax,(%esp)
08a3adfd +0x8d:  call   08ae3750 <_Unwind_Resume>
08a3ae02 +0x92:  add    $0x10,%esp
08a3ae05 +0x95:  pop    %ebx
08a3ae06 +0x96:  pop    %esi
08a3ae07 +0x97:  pop    %ebp
08a3ae08 +0x98:  ret
08a3ae09 +0x99:  nop
```

## 反编译 C

```c
// PassiveObjGeneratorPattern::PassiveObjGeneratorPattern @ 0x8a3ad70

/* PassiveObjGeneratorPattern::PassiveObjGeneratorPattern() */

void __thiscall
PassiveObjGeneratorPattern::PassiveObjGeneratorPattern(PassiveObjGeneratorPattern *this)

{
  *this = (PassiveObjGeneratorPattern)0x1;
  std::string::string((string *)(this + 4));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
                    /* try { // try from 08a3ada9 to 08a3adad has its CatchHandler @ 08a3ade4 */
  std::vector<unsigned_char,std::allocator<unsigned_char>>::vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10));
                    /* try { // try from 08a3adb7 to 08a3adc9 has its CatchHandler @ 08a3adcc */
  std::string::clear((string *)(this + 4));
  std::vector<unsigned_char,std::allocator<unsigned_char>>::clear
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10));
  return;
}
```
