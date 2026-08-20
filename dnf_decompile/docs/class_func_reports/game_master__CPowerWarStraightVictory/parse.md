# parse

`_ZN11game_master24CPowerWarStraightVictory5parseEv`

`game_master::CPowerWarStraightVictory::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CPowerWarStraightVictory` | `0x084ab202` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ab202  _ZN11game_master24CPowerWarStraightVictory5parseEv
#           game_master::CPowerWarStraightVictory::parse()
# range [0x084ab202, 0x084ab23d]
084ab202 +0x00:  push   %ebp
084ab203 +0x01:  mov    %esp,%ebp
084ab205 +0x03:  sub    $0x18,%esp
084ab208 +0x06:  mov    0x8(%ebp),%eax
084ab20b +0x09:  mov    0x4(%eax),%eax
084ab20e +0x0c:  add    $0xc,%eax
084ab211 +0x0f:  mov    %eax,(%esp)
084ab214 +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084ab219 +0x17:  mov    0x8(%ebp),%eax
084ab21c +0x1a:  mov    0x4(%eax),%eax
084ab21f +0x1d:  add    $0xc,%eax
084ab222 +0x20:  mov    %eax,(%esp)
084ab225 +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084ab22a +0x28:  mov    %eax,(%esp)
084ab22d +0x2b:  call   0807e6f0 <_init+0xfe8>
084ab232 +0x30:  mov    %eax,%edx
084ab234 +0x32:  mov    0x8(%ebp),%eax
084ab237 +0x35:  mov    %dx,0x8(%eax)
084ab23b +0x39:  leave
084ab23c +0x3a:  ret
084ab23d +0x3b:  nop
```

## 反编译 C

```c
// game_master::CPowerWarStraightVictory::parse @ 0x84ab202

/* game_master::CPowerWarStraightVictory::parse() */

void __thiscall game_master::CPowerWarStraightVictory::parse(CPowerWarStraightVictory *this)

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
