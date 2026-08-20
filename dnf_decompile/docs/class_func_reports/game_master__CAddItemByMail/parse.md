# parse

`_ZN11game_master14CAddItemByMail5parseEv`

`game_master::CAddItemByMail::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CAddItemByMail` | `0x084ac2aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ac2aa  _ZN11game_master14CAddItemByMail5parseEv
#           game_master::CAddItemByMail::parse()
# range [0x084ac2aa, 0x084ac2e1]
084ac2aa +0x00:  push   %ebp
084ac2ab +0x01:  mov    %esp,%ebp
084ac2ad +0x03:  sub    $0x18,%esp
084ac2b0 +0x06:  mov    0x8(%ebp),%eax
084ac2b3 +0x09:  mov    0x4(%eax),%eax
084ac2b6 +0x0c:  add    $0xc,%eax
084ac2b9 +0x0f:  mov    %eax,(%esp)
084ac2bc +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084ac2c1 +0x17:  mov    0x8(%ebp),%eax
084ac2c4 +0x1a:  mov    0x4(%eax),%eax
084ac2c7 +0x1d:  add    $0xc,%eax
084ac2ca +0x20:  mov    %eax,(%esp)
084ac2cd +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084ac2d2 +0x28:  mov    %eax,(%esp)
084ac2d5 +0x2b:  call   0807e6f0 <_init+0xfe8>
084ac2da +0x30:  mov    0x8(%ebp),%edx
084ac2dd +0x33:  mov    %eax,0x8(%edx)
084ac2e0 +0x36:  leave
084ac2e1 +0x37:  ret
```

## 反编译 C

```c
// game_master::CAddItemByMail::parse @ 0x84ac2aa

/* game_master::CAddItemByMail::parse() */

void __thiscall game_master::CAddItemByMail::parse(CAddItemByMail *this)

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
