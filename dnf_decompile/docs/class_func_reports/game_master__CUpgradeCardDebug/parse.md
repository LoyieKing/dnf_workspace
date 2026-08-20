# parse

`_ZN11game_master17CUpgradeCardDebug5parseEv`

`game_master::CUpgradeCardDebug::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CUpgradeCardDebug` | `0x084b1b5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b1b5e  _ZN11game_master17CUpgradeCardDebug5parseEv
#           game_master::CUpgradeCardDebug::parse()
# range [0x084b1b5e, 0x084b1b95]
084b1b5e +0x00:  push   %ebp
084b1b5f +0x01:  mov    %esp,%ebp
084b1b61 +0x03:  sub    $0x18,%esp
084b1b64 +0x06:  mov    0x8(%ebp),%eax
084b1b67 +0x09:  mov    0x4(%eax),%eax
084b1b6a +0x0c:  add    $0xc,%eax
084b1b6d +0x0f:  mov    %eax,(%esp)
084b1b70 +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084b1b75 +0x17:  mov    0x8(%ebp),%eax
084b1b78 +0x1a:  mov    0x4(%eax),%eax
084b1b7b +0x1d:  add    $0xc,%eax
084b1b7e +0x20:  mov    %eax,(%esp)
084b1b81 +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b1b86 +0x28:  mov    %eax,(%esp)
084b1b89 +0x2b:  call   0807e6f0 <_init+0xfe8>
084b1b8e +0x30:  mov    0x8(%ebp),%edx
084b1b91 +0x33:  mov    %eax,0x8(%edx)
084b1b94 +0x36:  leave
084b1b95 +0x37:  ret
```

## 反编译 C

```c
// game_master::CUpgradeCardDebug::parse @ 0x84b1b5e

/* game_master::CUpgradeCardDebug::parse() */

void __thiscall game_master::CUpgradeCardDebug::parse(CUpgradeCardDebug *this)

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
