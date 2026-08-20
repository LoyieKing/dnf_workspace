# operator=

`_ZN14QuestMovieInfoaSERS_`

`QuestMovieInfo::operator=(QuestMovieInfo&)`

| 类 | 地址 |
|---|---|
| `QuestMovieInfo` | `0x08917458` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08917458  _ZN14QuestMovieInfoaSERS_
#           QuestMovieInfo::operator=(QuestMovieInfo&)
# range [0x08917458, 0x0891748d]
08917458 +0x00:  push   %ebp
08917459 +0x01:  mov    %esp,%ebp
0891745b +0x03:  sub    $0x18,%esp
0891745e +0x06:  mov    0xc(%ebp),%edx
08917461 +0x09:  mov    0x8(%ebp),%eax
08917464 +0x0c:  mov    %edx,0x4(%esp)
08917468 +0x10:  mov    %eax,(%esp)
0891746b +0x13:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08917470 +0x18:  mov    0xc(%ebp),%eax
08917473 +0x1b:  lea    0x4(%eax),%edx
08917476 +0x1e:  mov    0x8(%ebp),%eax
08917479 +0x21:  add    $0x4,%eax
0891747c +0x24:  mov    %edx,0x4(%esp)
08917480 +0x28:  mov    %eax,(%esp)
08917483 +0x2b:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08917488 +0x30:  mov    0x8(%ebp),%eax
0891748b +0x33:  leave
0891748c +0x34:  ret
0891748d +0x35:  nop
```

## 反编译 C

```c
// QuestMovieInfo::operator= @ 0x8917458

/* QuestMovieInfo::TEMPNAMEPLACEHOLDERVALUE(QuestMovieInfo&) */

QuestMovieInfo * __thiscall QuestMovieInfo::operator=(QuestMovieInfo *this,QuestMovieInfo *param_1)

{
  std::string::operator=((string *)this,(string *)param_1);
  std::string::operator=((string *)(this + 4),(string *)(param_1 + 4));
  return this;
}
```
