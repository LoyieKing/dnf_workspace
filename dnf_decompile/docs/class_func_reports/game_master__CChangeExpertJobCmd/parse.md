# parse

`_ZN11game_master19CChangeExpertJobCmd5parseEv`

`game_master::CChangeExpertJobCmd::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CChangeExpertJobCmd` | `0x084a98c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a98c8  _ZN11game_master19CChangeExpertJobCmd5parseEv
#           game_master::CChangeExpertJobCmd::parse()
# range [0x084a98c8, 0x084a98ff]
084a98c8 +0x00:  push   %ebp
084a98c9 +0x01:  mov    %esp,%ebp
084a98cb +0x03:  sub    $0x18,%esp
084a98ce +0x06:  mov    0x8(%ebp),%eax
084a98d1 +0x09:  mov    0x4(%eax),%eax
084a98d4 +0x0c:  add    $0xc,%eax
084a98d7 +0x0f:  mov    %eax,(%esp)
084a98da +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084a98df +0x17:  mov    0x8(%ebp),%eax
084a98e2 +0x1a:  mov    0x4(%eax),%eax
084a98e5 +0x1d:  add    $0xc,%eax
084a98e8 +0x20:  mov    %eax,(%esp)
084a98eb +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084a98f0 +0x28:  mov    %eax,(%esp)
084a98f3 +0x2b:  call   0807e6f0 <_init+0xfe8>
084a98f8 +0x30:  mov    0x8(%ebp),%edx
084a98fb +0x33:  mov    %eax,0x8(%edx)
084a98fe +0x36:  leave
084a98ff +0x37:  ret
```

## 反编译 C

```c
// game_master::CChangeExpertJobCmd::parse @ 0x84a98c8

/* game_master::CChangeExpertJobCmd::parse() */

void __thiscall game_master::CChangeExpertJobCmd::parse(CChangeExpertJobCmd *this)

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
