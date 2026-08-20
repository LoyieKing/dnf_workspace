# parse

`_ZN11game_master13CGetCashInven5parseEv`

`game_master::CGetCashInven::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CGetCashInven` | `0x084ac80a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ac80a  _ZN11game_master13CGetCashInven5parseEv
#           game_master::CGetCashInven::parse()
# range [0x084ac80a, 0x084ac845]
084ac80a +0x00:  push   %ebp
084ac80b +0x01:  mov    %esp,%ebp
084ac80d +0x03:  sub    $0x18,%esp
084ac810 +0x06:  mov    0x8(%ebp),%eax
084ac813 +0x09:  mov    0x4(%eax),%eax
084ac816 +0x0c:  add    $0xc,%eax
084ac819 +0x0f:  mov    %eax,(%esp)
084ac81c +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084ac821 +0x17:  mov    0x8(%ebp),%eax
084ac824 +0x1a:  mov    0x4(%eax),%eax
084ac827 +0x1d:  add    $0xc,%eax
084ac82a +0x20:  mov    %eax,(%esp)
084ac82d +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084ac832 +0x28:  mov    %eax,(%esp)
084ac835 +0x2b:  call   0807e6f0 <_init+0xfe8>
084ac83a +0x30:  mov    %eax,%edx
084ac83c +0x32:  mov    0x8(%ebp),%eax
084ac83f +0x35:  mov    %dx,0x8(%eax)
084ac843 +0x39:  leave
084ac844 +0x3a:  ret
084ac845 +0x3b:  nop
```

## 反编译 C

```c
// game_master::CGetCashInven::parse @ 0x84ac80a

/* game_master::CGetCashInven::parse() */

void __thiscall game_master::CGetCashInven::parse(CGetCashInven *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(short *)(this + 8) = (short)iVar1;
  return;
}
```
