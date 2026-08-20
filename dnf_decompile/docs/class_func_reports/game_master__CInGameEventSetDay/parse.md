# parse

`_ZN11game_master18CInGameEventSetDay5parseEv`

`game_master::CInGameEventSetDay::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CInGameEventSetDay` | `0x084b09d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b09d0  _ZN11game_master18CInGameEventSetDay5parseEv
#           game_master::CInGameEventSetDay::parse()
# range [0x084b09d0, 0x084b0a07]
084b09d0 +0x00:  push   %ebp
084b09d1 +0x01:  mov    %esp,%ebp
084b09d3 +0x03:  sub    $0x18,%esp
084b09d6 +0x06:  mov    0x8(%ebp),%eax
084b09d9 +0x09:  mov    0x4(%eax),%eax
084b09dc +0x0c:  add    $0xc,%eax
084b09df +0x0f:  mov    %eax,(%esp)
084b09e2 +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084b09e7 +0x17:  mov    0x8(%ebp),%eax
084b09ea +0x1a:  mov    0x4(%eax),%eax
084b09ed +0x1d:  add    $0xc,%eax
084b09f0 +0x20:  mov    %eax,(%esp)
084b09f3 +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b09f8 +0x28:  mov    %eax,(%esp)
084b09fb +0x2b:  call   0807e6f0 <_init+0xfe8>
084b0a00 +0x30:  mov    0x8(%ebp),%edx
084b0a03 +0x33:  mov    %eax,0x8(%edx)
084b0a06 +0x36:  leave
084b0a07 +0x37:  ret
```

## 反编译 C

```c
// game_master::CInGameEventSetDay::parse @ 0x84b09d0

/* game_master::CInGameEventSetDay::parse() */

void __thiscall game_master::CInGameEventSetDay::parse(CInGameEventSetDay *this)

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
