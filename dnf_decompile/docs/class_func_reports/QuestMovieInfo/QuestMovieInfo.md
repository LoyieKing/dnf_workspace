# QuestMovieInfo

`_ZN14QuestMovieInfoC1Ev`

`QuestMovieInfo::QuestMovieInfo()`

| 类 | 地址 |
|---|---|
| `QuestMovieInfo` | `0x089173f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089173f0  _ZN14QuestMovieInfoC1Ev
#           QuestMovieInfo::QuestMovieInfo()
# range [0x089173f0, 0x08917457]
089173f0 +0x00:  push   %ebp
089173f1 +0x01:  mov    %esp,%ebp
089173f3 +0x03:  push   %esi
089173f4 +0x04:  push   %ebx
089173f5 +0x05:  sub    $0x10,%esp
089173f8 +0x08:  mov    0x8(%ebp),%eax
089173fb +0x0b:  mov    %eax,(%esp)
089173fe +0x0e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08917403 +0x13:  mov    0x8(%ebp),%eax
08917406 +0x16:  add    $0x4,%eax
08917409 +0x19:  mov    %eax,(%esp)
0891740c +0x1c:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08917411 +0x21:  mov    0x8(%ebp),%eax
08917414 +0x24:  mov    %eax,(%esp)
08917417 +0x27:  call   089174d4 <_ZN14QuestMovieInfo5clearEv>  ; QuestMovieInfo::clear()
0891741c +0x2c:  jmp    08917451 <+0x61>
0891741e +0x2e:  mov    %edx,%ebx
08917420 +0x30:  mov    %eax,%esi
08917422 +0x32:  mov    0x8(%ebp),%eax
08917425 +0x35:  add    $0x4,%eax
08917428 +0x38:  mov    %eax,(%esp)
0891742b +0x3b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08917430 +0x40:  mov    %esi,%eax
08917432 +0x42:  mov    %ebx,%edx
08917434 +0x44:  jmp    08917436 <+0x46>
08917436 +0x46:  mov    %edx,%ebx
08917438 +0x48:  mov    %eax,%esi
0891743a +0x4a:  mov    0x8(%ebp),%eax
0891743d +0x4d:  mov    %eax,(%esp)
08917440 +0x50:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08917445 +0x55:  mov    %esi,%eax
08917447 +0x57:  mov    %ebx,%edx
08917449 +0x59:  mov    %eax,(%esp)
0891744c +0x5c:  call   08ae3750 <_Unwind_Resume>
08917451 +0x61:  add    $0x10,%esp
08917454 +0x64:  pop    %ebx
08917455 +0x65:  pop    %esi
08917456 +0x66:  pop    %ebp
08917457 +0x67:  ret
```

## 反编译 C

```c
// QuestMovieInfo::QuestMovieInfo @ 0x89173f0

/* QuestMovieInfo::QuestMovieInfo() */

void __thiscall QuestMovieInfo::QuestMovieInfo(QuestMovieInfo *this)

{
  std::string::string((string *)this);
                    /* try { // try from 0891740c to 08917410 has its CatchHandler @ 08917436 */
  std::string::string((string *)(this + 4));
                    /* try { // try from 08917417 to 0891741b has its CatchHandler @ 0891741e */
  clear(this);
  return;
}
```
