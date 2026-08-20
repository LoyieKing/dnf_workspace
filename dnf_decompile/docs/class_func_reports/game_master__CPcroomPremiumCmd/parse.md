# parse

`_ZN11game_master17CPcroomPremiumCmd5parseEv`

`game_master::CPcroomPremiumCmd::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CPcroomPremiumCmd` | `0x084a9db0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a9db0  _ZN11game_master17CPcroomPremiumCmd5parseEv
#           game_master::CPcroomPremiumCmd::parse()
# range [0x084a9db0, 0x084a9de7]
084a9db0 +0x00:  push   %ebp
084a9db1 +0x01:  mov    %esp,%ebp
084a9db3 +0x03:  sub    $0x18,%esp
084a9db6 +0x06:  mov    0x8(%ebp),%eax
084a9db9 +0x09:  mov    0x4(%eax),%eax
084a9dbc +0x0c:  add    $0xc,%eax
084a9dbf +0x0f:  mov    %eax,(%esp)
084a9dc2 +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084a9dc7 +0x17:  mov    0x8(%ebp),%eax
084a9dca +0x1a:  mov    0x4(%eax),%eax
084a9dcd +0x1d:  add    $0xc,%eax
084a9dd0 +0x20:  mov    %eax,(%esp)
084a9dd3 +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084a9dd8 +0x28:  mov    %eax,(%esp)
084a9ddb +0x2b:  call   0807e6f0 <_init+0xfe8>
084a9de0 +0x30:  mov    0x8(%ebp),%edx
084a9de3 +0x33:  mov    %eax,0x8(%edx)
084a9de6 +0x36:  leave
084a9de7 +0x37:  ret
```

## 反编译 C

```c
// game_master::CPcroomPremiumCmd::parse @ 0x84a9db0

/* game_master::CPcroomPremiumCmd::parse() */

void __thiscall game_master::CPcroomPremiumCmd::parse(CPcroomPremiumCmd *this)

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
