# parse

`_ZN11game_master11CChoiceItem5parseEv`

`game_master::CChoiceItem::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CChoiceItem` | `0x084b0a34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b0a34  _ZN11game_master11CChoiceItem5parseEv
#           game_master::CChoiceItem::parse()
# range [0x084b0a34, 0x084b0a6d]
084b0a34 +0x00:  push   %ebp
084b0a35 +0x01:  mov    %esp,%ebp
084b0a37 +0x03:  sub    $0x18,%esp
084b0a3a +0x06:  mov    0x8(%ebp),%eax
084b0a3d +0x09:  mov    0x4(%eax),%eax
084b0a40 +0x0c:  add    $0xc,%eax
084b0a43 +0x0f:  mov    %eax,(%esp)
084b0a46 +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084b0a4b +0x17:  mov    0x8(%ebp),%eax
084b0a4e +0x1a:  mov    0x4(%eax),%eax
084b0a51 +0x1d:  add    $0xc,%eax
084b0a54 +0x20:  mov    %eax,(%esp)
084b0a57 +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b0a5c +0x28:  mov    %eax,(%esp)
084b0a5f +0x2b:  call   0807e6f0 <_init+0xfe8>
084b0a64 +0x30:  mov    %eax,%edx
084b0a66 +0x32:  mov    0x8(%ebp),%eax
084b0a69 +0x35:  mov    %edx,0x8(%eax)
084b0a6c +0x38:  leave
084b0a6d +0x39:  ret
```

## 反编译 C

```c
// game_master::CChoiceItem::parse @ 0x84b0a34

/* game_master::CChoiceItem::parse() */

void __thiscall game_master::CChoiceItem::parse(CChoiceItem *this)

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
