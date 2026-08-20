# parse

`_ZN11game_master19CRequestDisjointCmd5parseEv`

`game_master::CRequestDisjointCmd::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CRequestDisjointCmd` | `0x084a97c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a97c0  _ZN11game_master19CRequestDisjointCmd5parseEv
#           game_master::CRequestDisjointCmd::parse()
# range [0x084a97c0, 0x084a97f3]
084a97c0 +0x00:  push   %ebp
084a97c1 +0x01:  mov    %esp,%ebp
084a97c3 +0x03:  sub    $0x18,%esp
084a97c6 +0x06:  mov    0x8(%ebp),%eax
084a97c9 +0x09:  mov    0x4(%eax),%eax
084a97cc +0x0c:  add    $0xc,%eax
084a97cf +0x0f:  mov    %eax,(%esp)
084a97d2 +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084a97d7 +0x17:  mov    0x8(%ebp),%eax
084a97da +0x1a:  mov    0x4(%eax),%eax
084a97dd +0x1d:  lea    0xc(%eax),%edx
084a97e0 +0x20:  mov    0x8(%ebp),%eax
084a97e3 +0x23:  add    $0x8,%eax
084a97e6 +0x26:  mov    %edx,0x4(%esp)
084a97ea +0x2a:  mov    %eax,(%esp)
084a97ed +0x2d:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
084a97f2 +0x32:  leave
084a97f3 +0x33:  ret
```

## 反编译 C

```c
// game_master::CRequestDisjointCmd::parse @ 0x84a97c0

/* game_master::CRequestDisjointCmd::parse() */

void __thiscall game_master::CRequestDisjointCmd::parse(CRequestDisjointCmd *this)

{
  trim((string *)(*(int *)(this + 4) + 0xc));
  std::string::operator=((string *)(this + 8),(string *)(*(int *)(this + 4) + 0xc));
  return;
}
```
