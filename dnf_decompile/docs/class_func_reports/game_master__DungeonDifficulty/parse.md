# parse

`_ZN11game_master17DungeonDifficulty5parseEv`

`game_master::DungeonDifficulty::parse()`

| 类 | 地址 |
|---|---|
| `game_master::DungeonDifficulty` | `0x084b2110` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b2110  _ZN11game_master17DungeonDifficulty5parseEv
#           game_master::DungeonDifficulty::parse()
# range [0x084b2110, 0x084b2151]
084b2110 +0x00:  push   %ebp
084b2111 +0x01:  mov    %esp,%ebp
084b2113 +0x03:  sub    $0x18,%esp
084b2116 +0x06:  mov    0x8(%ebp),%eax
084b2119 +0x09:  movb   $0x0,0x8(%eax)
084b211d +0x0d:  mov    0x8(%ebp),%eax
084b2120 +0x10:  mov    0x4(%eax),%eax
084b2123 +0x13:  add    $0xc,%eax
084b2126 +0x16:  mov    %eax,(%esp)
084b2129 +0x19:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084b212e +0x1e:  mov    0x8(%ebp),%eax
084b2131 +0x21:  mov    0x4(%eax),%eax
084b2134 +0x24:  add    $0xc,%eax
084b2137 +0x27:  mov    %eax,(%esp)
084b213a +0x2a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b213f +0x2f:  mov    %eax,(%esp)
084b2142 +0x32:  call   0807e6f0 <_init+0xfe8>
084b2147 +0x37:  mov    %eax,%edx
084b2149 +0x39:  mov    0x8(%ebp),%eax
084b214c +0x3c:  mov    %dl,0x8(%eax)
084b214f +0x3f:  leave
084b2150 +0x40:  ret
084b2151 +0x41:  nop
```

## 反编译 C

```c
// game_master::DungeonDifficulty::parse @ 0x84b2110

/* game_master::DungeonDifficulty::parse() */

void __thiscall game_master::DungeonDifficulty::parse(DungeonDifficulty *this)

{
  char *__nptr;
  int iVar1;
  
  this[8] = (DungeonDifficulty)0x0;
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  this[8] = SUB41(iVar1,0);
  return;
}
```
