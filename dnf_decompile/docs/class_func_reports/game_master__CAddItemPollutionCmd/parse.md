# parse

`_ZN11game_master20CAddItemPollutionCmd5parseEv`

`game_master::CAddItemPollutionCmd::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CAddItemPollutionCmd` | `0x084aa9c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aa9c8  _ZN11game_master20CAddItemPollutionCmd5parseEv
#           game_master::CAddItemPollutionCmd::parse()
# range [0x084aa9c8, 0x084aa9ff]
084aa9c8 +0x00:  push   %ebp
084aa9c9 +0x01:  mov    %esp,%ebp
084aa9cb +0x03:  sub    $0x18,%esp
084aa9ce +0x06:  mov    0x8(%ebp),%eax
084aa9d1 +0x09:  mov    0x4(%eax),%eax
084aa9d4 +0x0c:  add    $0xc,%eax
084aa9d7 +0x0f:  mov    %eax,(%esp)
084aa9da +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084aa9df +0x17:  mov    0x8(%ebp),%eax
084aa9e2 +0x1a:  mov    0x4(%eax),%eax
084aa9e5 +0x1d:  add    $0xc,%eax
084aa9e8 +0x20:  mov    %eax,(%esp)
084aa9eb +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084aa9f0 +0x28:  mov    %eax,(%esp)
084aa9f3 +0x2b:  call   0807e6f0 <_init+0xfe8>
084aa9f8 +0x30:  mov    0x8(%ebp),%edx
084aa9fb +0x33:  mov    %eax,0x8(%edx)
084aa9fe +0x36:  leave
084aa9ff +0x37:  ret
```

## 反编译 C

```c
// game_master::CAddItemPollutionCmd::parse @ 0x84aa9c8

/* game_master::CAddItemPollutionCmd::parse() */

void __thiscall game_master::CAddItemPollutionCmd::parse(CAddItemPollutionCmd *this)

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
