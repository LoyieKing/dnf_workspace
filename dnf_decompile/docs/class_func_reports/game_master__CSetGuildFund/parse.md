# parse

`_ZN11game_master13CSetGuildFund5parseEv`

`game_master::CSetGuildFund::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CSetGuildFund` | `0x084ac668` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ac668  _ZN11game_master13CSetGuildFund5parseEv
#           game_master::CSetGuildFund::parse()
# range [0x084ac668, 0x084ac69f]
084ac668 +0x00:  push   %ebp
084ac669 +0x01:  mov    %esp,%ebp
084ac66b +0x03:  sub    $0x18,%esp
084ac66e +0x06:  mov    0x8(%ebp),%eax
084ac671 +0x09:  mov    0x4(%eax),%eax
084ac674 +0x0c:  add    $0xc,%eax
084ac677 +0x0f:  mov    %eax,(%esp)
084ac67a +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084ac67f +0x17:  mov    0x8(%ebp),%eax
084ac682 +0x1a:  mov    0x4(%eax),%eax
084ac685 +0x1d:  add    $0xc,%eax
084ac688 +0x20:  mov    %eax,(%esp)
084ac68b +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084ac690 +0x28:  mov    %eax,(%esp)
084ac693 +0x2b:  call   0807e6f0 <_init+0xfe8>
084ac698 +0x30:  mov    0x8(%ebp),%edx
084ac69b +0x33:  mov    %eax,0x8(%edx)
084ac69e +0x36:  leave
084ac69f +0x37:  ret
```

## 反编译 C

```c
// game_master::CSetGuildFund::parse @ 0x84ac668

/* game_master::CSetGuildFund::parse() */

void __thiscall game_master::CSetGuildFund::parse(CSetGuildFund *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}
```
