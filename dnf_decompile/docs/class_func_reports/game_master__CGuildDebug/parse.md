# parse

`_ZN11game_master11CGuildDebug5parseEv`

`game_master::CGuildDebug::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CGuildDebug` | `0x084ac720` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ac720  _ZN11game_master11CGuildDebug5parseEv
#           game_master::CGuildDebug::parse()
# range [0x084ac720, 0x084ac76b]
084ac720 +0x00:  push   %ebp
084ac721 +0x01:  mov    %esp,%ebp
084ac723 +0x03:  sub    $0x18,%esp
084ac726 +0x06:  mov    0x8(%ebp),%eax
084ac729 +0x09:  mov    0x4(%eax),%eax
084ac72c +0x0c:  add    $0xc,%eax
084ac72f +0x0f:  mov    %eax,(%esp)
084ac732 +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084ac737 +0x17:  mov    0x8(%ebp),%eax
084ac73a +0x1a:  mov    0x4(%eax),%eax
084ac73d +0x1d:  add    $0xc,%eax
084ac740 +0x20:  mov    %eax,(%esp)
084ac743 +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084ac748 +0x28:  mov    %eax,(%esp)
084ac74b +0x2b:  call   0807e6f0 <_init+0xfe8>
084ac750 +0x30:  mov    0x8(%ebp),%edx
084ac753 +0x33:  mov    %eax,0x8(%edx)
084ac756 +0x36:  mov    0x8(%ebp),%eax
084ac759 +0x39:  movl   $0x0,0xc(%eax)
084ac760 +0x40:  mov    0x8(%ebp),%eax
084ac763 +0x43:  movl   $0x0,0x10(%eax)
084ac76a +0x4a:  leave
084ac76b +0x4b:  ret
```

## 反编译 C

```c
// game_master::CGuildDebug::parse @ 0x84ac720

/* game_master::CGuildDebug::parse() */

void __thiscall game_master::CGuildDebug::parse(CGuildDebug *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}
```
