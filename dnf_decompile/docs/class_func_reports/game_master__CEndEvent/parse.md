# parse

`_ZN11game_master9CEndEvent5parseEv`

`game_master::CEndEvent::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CEndEvent` | `0x084ab914` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ab914  _ZN11game_master9CEndEvent5parseEv
#           game_master::CEndEvent::parse()
# range [0x084ab914, 0x084ab94b]
084ab914 +0x00:  push   %ebp
084ab915 +0x01:  mov    %esp,%ebp
084ab917 +0x03:  sub    $0x18,%esp
084ab91a +0x06:  mov    0x8(%ebp),%eax
084ab91d +0x09:  mov    0x4(%eax),%eax
084ab920 +0x0c:  add    $0xc,%eax
084ab923 +0x0f:  mov    %eax,(%esp)
084ab926 +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084ab92b +0x17:  mov    0x8(%ebp),%eax
084ab92e +0x1a:  mov    0x4(%eax),%eax
084ab931 +0x1d:  add    $0xc,%eax
084ab934 +0x20:  mov    %eax,(%esp)
084ab937 +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084ab93c +0x28:  mov    %eax,(%esp)
084ab93f +0x2b:  call   0807e6f0 <_init+0xfe8>
084ab944 +0x30:  mov    0x8(%ebp),%edx
084ab947 +0x33:  mov    %eax,0x8(%edx)
084ab94a +0x36:  leave
084ab94b +0x37:  ret
```

## 反编译 C

```c
// game_master::CEndEvent::parse @ 0x84ab914

/* game_master::CEndEvent::parse() */

void __thiscall game_master::CEndEvent::parse(CEndEvent *this)

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
