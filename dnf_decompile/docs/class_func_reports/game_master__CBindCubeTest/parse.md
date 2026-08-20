# parse

`_ZN11game_master13CBindCubeTest5parseEv`

`game_master::CBindCubeTest::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CBindCubeTest` | `0x084acbe4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084acbe4  _ZN11game_master13CBindCubeTest5parseEv
#           game_master::CBindCubeTest::parse()
# range [0x084acbe4, 0x084acc1d]
084acbe4 +0x00:  push   %ebp
084acbe5 +0x01:  mov    %esp,%ebp
084acbe7 +0x03:  sub    $0x18,%esp
084acbea +0x06:  mov    0x8(%ebp),%eax
084acbed +0x09:  mov    0x4(%eax),%eax
084acbf0 +0x0c:  add    $0xc,%eax
084acbf3 +0x0f:  mov    %eax,(%esp)
084acbf6 +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084acbfb +0x17:  mov    0x8(%ebp),%eax
084acbfe +0x1a:  mov    0x4(%eax),%eax
084acc01 +0x1d:  add    $0xc,%eax
084acc04 +0x20:  mov    %eax,(%esp)
084acc07 +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084acc0c +0x28:  mov    %eax,(%esp)
084acc0f +0x2b:  call   0807e6f0 <_init+0xfe8>
084acc14 +0x30:  mov    %eax,%edx
084acc16 +0x32:  mov    0x8(%ebp),%eax
084acc19 +0x35:  mov    %dl,0x8(%eax)
084acc1c +0x38:  leave
084acc1d +0x39:  ret
```

## 反编译 C

```c
// game_master::CBindCubeTest::parse @ 0x84acbe4

/* game_master::CBindCubeTest::parse() */

void __thiscall game_master::CBindCubeTest::parse(CBindCubeTest *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  this[8] = SUB41(iVar1,0);
  return;
}
```
