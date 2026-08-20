# clear

`_ZN14QuestMovieInfo5clearEv`

`QuestMovieInfo::clear()`

| 类 | 地址 |
|---|---|
| `QuestMovieInfo` | `0x089174d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089174d4  _ZN14QuestMovieInfo5clearEv
#           QuestMovieInfo::clear()
# range [0x089174d4, 0x089174f4]
089174d4 +0x00:  push   %ebp
089174d5 +0x01:  mov    %esp,%ebp
089174d7 +0x03:  sub    $0x18,%esp
089174da +0x06:  mov    0x8(%ebp),%eax
089174dd +0x09:  mov    %eax,(%esp)
089174e0 +0x0c:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
089174e5 +0x11:  mov    0x8(%ebp),%eax
089174e8 +0x14:  add    $0x4,%eax
089174eb +0x17:  mov    %eax,(%esp)
089174ee +0x1a:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
089174f3 +0x1f:  leave
089174f4 +0x20:  ret
```

## 反编译 C

```c
// QuestMovieInfo::clear @ 0x89174d4

/* QuestMovieInfo::clear() */

void __thiscall QuestMovieInfo::clear(QuestMovieInfo *this)

{
  std::string::clear((string *)this);
  std::string::clear((string *)(this + 4));
  return;
}
```
