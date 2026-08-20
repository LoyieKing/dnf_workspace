# parse

`_ZN11game_master12CItemInfoCmd5parseEv`

`game_master::CItemInfoCmd::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CItemInfoCmd` | `0x084aa29e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aa29e  _ZN11game_master12CItemInfoCmd5parseEv
#           game_master::CItemInfoCmd::parse()
# range [0x084aa29e, 0x084aa2d1]
084aa29e +0x00:  push   %ebp
084aa29f +0x01:  mov    %esp,%ebp
084aa2a1 +0x03:  sub    $0x18,%esp
084aa2a4 +0x06:  mov    0x8(%ebp),%eax
084aa2a7 +0x09:  mov    0x4(%eax),%eax
084aa2aa +0x0c:  add    $0xc,%eax
084aa2ad +0x0f:  mov    %eax,(%esp)
084aa2b0 +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084aa2b5 +0x17:  mov    0x8(%ebp),%eax
084aa2b8 +0x1a:  mov    0x4(%eax),%eax
084aa2bb +0x1d:  lea    0xc(%eax),%edx
084aa2be +0x20:  mov    0x8(%ebp),%eax
084aa2c1 +0x23:  add    $0x8,%eax
084aa2c4 +0x26:  mov    %edx,0x4(%esp)
084aa2c8 +0x2a:  mov    %eax,(%esp)
084aa2cb +0x2d:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
084aa2d0 +0x32:  leave
084aa2d1 +0x33:  ret
```

## 反编译 C

```c
// game_master::CItemInfoCmd::parse @ 0x84aa29e

/* game_master::CItemInfoCmd::parse() */

void __thiscall game_master::CItemInfoCmd::parse(CItemInfoCmd *this)

{
  trim((string *)(*(int *)(this + 4) + 0xc));
  std::string::operator=((string *)(this + 8),(string *)(*(int *)(this + 4) + 0xc));
  return;
}
```
