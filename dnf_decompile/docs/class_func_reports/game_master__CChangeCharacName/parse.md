# parse

`_ZN11game_master17CChangeCharacName5parseEv`

`game_master::CChangeCharacName::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CChangeCharacName` | `0x084ab524` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ab524  _ZN11game_master17CChangeCharacName5parseEv
#           game_master::CChangeCharacName::parse()
# range [0x084ab524, 0x084ab557]
084ab524 +0x00:  push   %ebp
084ab525 +0x01:  mov    %esp,%ebp
084ab527 +0x03:  sub    $0x18,%esp
084ab52a +0x06:  mov    0x8(%ebp),%eax
084ab52d +0x09:  mov    0x4(%eax),%eax
084ab530 +0x0c:  add    $0xc,%eax
084ab533 +0x0f:  mov    %eax,(%esp)
084ab536 +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084ab53b +0x17:  mov    0x8(%ebp),%eax
084ab53e +0x1a:  mov    0x4(%eax),%eax
084ab541 +0x1d:  lea    0xc(%eax),%edx
084ab544 +0x20:  mov    0x8(%ebp),%eax
084ab547 +0x23:  add    $0x8,%eax
084ab54a +0x26:  mov    %edx,0x4(%esp)
084ab54e +0x2a:  mov    %eax,(%esp)
084ab551 +0x2d:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
084ab556 +0x32:  leave
084ab557 +0x33:  ret
```

## 反编译 C

```c
// game_master::CChangeCharacName::parse @ 0x84ab524

/* game_master::CChangeCharacName::parse() */

void __thiscall game_master::CChangeCharacName::parse(CChangeCharacName *this)

{
  trim((string *)(*(int *)(this + 4) + 0xc));
  std::string::operator=((string *)(this + 8),(string *)(*(int *)(this + 4) + 0xc));
  return;
}
```
