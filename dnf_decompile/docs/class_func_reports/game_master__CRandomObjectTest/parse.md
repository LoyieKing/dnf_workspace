# parse

`_ZN11game_master17CRandomObjectTest5parseEv`

`game_master::CRandomObjectTest::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CRandomObjectTest` | `0x084b0032` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b0032  _ZN11game_master17CRandomObjectTest5parseEv
#           game_master::CRandomObjectTest::parse()
# range [0x084b0032, 0x084b0081]
084b0032 +0x00:  push   %ebp
084b0033 +0x01:  mov    %esp,%ebp
084b0035 +0x03:  push   %esi
084b0036 +0x04:  push   %ebx
084b0037 +0x05:  sub    $0x10,%esp
084b003a +0x08:  mov    0x8(%ebp),%eax
084b003d +0x0b:  mov    %eax,(%esp)
084b0040 +0x0e:  call   084b40ca <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x17d>  ; global constructors keyed to game_master::CMacro::Reset()+0x17d
084b0045 +0x13:  mov    0x8(%ebp),%eax
084b0048 +0x16:  lea    0xc(%eax),%esi
084b004b +0x19:  mov    0x8(%ebp),%eax
084b004e +0x1c:  lea    0x8(%eax),%ebx
084b0051 +0x1f:  mov    0x8(%ebp),%eax
084b0054 +0x22:  mov    0x4(%eax),%eax
084b0057 +0x25:  add    $0xc,%eax
084b005a +0x28:  mov    %eax,(%esp)
084b005d +0x2b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b0062 +0x30:  mov    %esi,0xc(%esp)
084b0066 +0x34:  mov    %ebx,0x8(%esp)
084b006a +0x38:  movl   $"%d%d",0x4(%esp)
084b0072 +0x40:  mov    %eax,(%esp)
084b0075 +0x43:  call   0807d9e0 <_init+0x2d8>
084b007a +0x48:  add    $0x10,%esp
084b007d +0x4b:  pop    %ebx
084b007e +0x4c:  pop    %esi
084b007f +0x4d:  pop    %ebp
084b0080 +0x4e:  ret
084b0081 +0x4f:  nop
```

## 反编译 C

```c
// game_master::CRandomObjectTest::parse @ 0x84b0032

/* game_master::CRandomObjectTest::parse() */

void __thiscall game_master::CRandomObjectTest::parse(CRandomObjectTest *this)

{
  char *__s;
  
  clear(this);
  __s = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  sscanf(__s,"%d%d",this + 8,this + 0xc);
  return;
}
```
