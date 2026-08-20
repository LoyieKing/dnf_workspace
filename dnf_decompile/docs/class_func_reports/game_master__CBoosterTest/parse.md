# parse

`_ZN11game_master12CBoosterTest5parseEv`

`game_master::CBoosterTest::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CBoosterTest` | `0x084aeb5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aeb5e  _ZN11game_master12CBoosterTest5parseEv
#           game_master::CBoosterTest::parse()
# range [0x084aeb5e, 0x084aebad]
084aeb5e +0x00:  push   %ebp
084aeb5f +0x01:  mov    %esp,%ebp
084aeb61 +0x03:  push   %esi
084aeb62 +0x04:  push   %ebx
084aeb63 +0x05:  sub    $0x10,%esp
084aeb66 +0x08:  mov    0x8(%ebp),%eax
084aeb69 +0x0b:  mov    %eax,(%esp)
084aeb6c +0x0e:  call   084b40b0 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x163>  ; global constructors keyed to game_master::CMacro::Reset()+0x163
084aeb71 +0x13:  mov    0x8(%ebp),%eax
084aeb74 +0x16:  lea    0xc(%eax),%esi
084aeb77 +0x19:  mov    0x8(%ebp),%eax
084aeb7a +0x1c:  lea    0x8(%eax),%ebx
084aeb7d +0x1f:  mov    0x8(%ebp),%eax
084aeb80 +0x22:  mov    0x4(%eax),%eax
084aeb83 +0x25:  add    $0xc,%eax
084aeb86 +0x28:  mov    %eax,(%esp)
084aeb89 +0x2b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084aeb8e +0x30:  mov    %esi,0xc(%esp)
084aeb92 +0x34:  mov    %ebx,0x8(%esp)
084aeb96 +0x38:  movl   $"%d%d",0x4(%esp)
084aeb9e +0x40:  mov    %eax,(%esp)
084aeba1 +0x43:  call   0807d9e0 <_init+0x2d8>
084aeba6 +0x48:  add    $0x10,%esp
084aeba9 +0x4b:  pop    %ebx
084aebaa +0x4c:  pop    %esi
084aebab +0x4d:  pop    %ebp
084aebac +0x4e:  ret
084aebad +0x4f:  nop
```

## 反编译 C

```c
// game_master::CBoosterTest::parse @ 0x84aeb5e

/* game_master::CBoosterTest::parse() */

void __thiscall game_master::CBoosterTest::parse(CBoosterTest *this)

{
  char *__s;
  
  clear(this);
  __s = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  sscanf(__s,"%d%d",this + 8,this + 0xc);
  return;
}
```
