# parse

`_ZN11game_master17CAchievementClear5parseEv`

`game_master::CAchievementClear::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CAchievementClear` | `0x084b08f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b08f0  _ZN11game_master17CAchievementClear5parseEv
#           game_master::CAchievementClear::parse()
# range [0x084b08f0, 0x084b0929]
084b08f0 +0x00:  push   %ebp
084b08f1 +0x01:  mov    %esp,%ebp
084b08f3 +0x03:  sub    $0x18,%esp
084b08f6 +0x06:  mov    0x8(%ebp),%eax
084b08f9 +0x09:  mov    0x4(%eax),%eax
084b08fc +0x0c:  add    $0xc,%eax
084b08ff +0x0f:  mov    %eax,(%esp)
084b0902 +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084b0907 +0x17:  mov    0x8(%ebp),%eax
084b090a +0x1a:  mov    0x4(%eax),%eax
084b090d +0x1d:  add    $0xc,%eax
084b0910 +0x20:  mov    %eax,(%esp)
084b0913 +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b0918 +0x28:  mov    %eax,(%esp)
084b091b +0x2b:  call   0807e6f0 <_init+0xfe8>
084b0920 +0x30:  mov    %eax,%edx
084b0922 +0x32:  mov    0x8(%ebp),%eax
084b0925 +0x35:  mov    %edx,0x8(%eax)
084b0928 +0x38:  leave
084b0929 +0x39:  ret
```

## 反编译 C

```c
// game_master::CAchievementClear::parse @ 0x84b08f0

/* game_master::CAchievementClear::parse() */

void __thiscall game_master::CAchievementClear::parse(CAchievementClear *this)

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
