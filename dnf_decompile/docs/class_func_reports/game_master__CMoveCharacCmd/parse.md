# parse

`_ZN11game_master14CMoveCharacCmd5parseEv`

`game_master::CMoveCharacCmd::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CMoveCharacCmd` | `0x084a8cce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8cce  _ZN11game_master14CMoveCharacCmd5parseEv
#           game_master::CMoveCharacCmd::parse()
# range [0x084a8cce, 0x084a8d01]
084a8cce +0x00:  push   %ebp
084a8ccf +0x01:  mov    %esp,%ebp
084a8cd1 +0x03:  sub    $0x18,%esp
084a8cd4 +0x06:  mov    0x8(%ebp),%eax
084a8cd7 +0x09:  mov    0x4(%eax),%eax
084a8cda +0x0c:  add    $0xc,%eax
084a8cdd +0x0f:  mov    %eax,(%esp)
084a8ce0 +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084a8ce5 +0x17:  mov    0x8(%ebp),%eax
084a8ce8 +0x1a:  mov    0x4(%eax),%eax
084a8ceb +0x1d:  lea    0xc(%eax),%edx
084a8cee +0x20:  mov    0x8(%ebp),%eax
084a8cf1 +0x23:  add    $0x8,%eax
084a8cf4 +0x26:  mov    %edx,0x4(%esp)
084a8cf8 +0x2a:  mov    %eax,(%esp)
084a8cfb +0x2d:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
084a8d00 +0x32:  leave
084a8d01 +0x33:  ret
```

## 反编译 C

```c
// game_master::CMoveCharacCmd::parse @ 0x84a8cce

/* game_master::CMoveCharacCmd::parse() */

void __thiscall game_master::CMoveCharacCmd::parse(CMoveCharacCmd *this)

{
  trim((string *)(*(int *)(this + 4) + 0xc));
  std::string::operator=((string *)(this + 8),(string *)(*(int *)(this + 4) + 0xc));
  return;
}
```
