# adjust_base_script_directory

`_ZN12CEnvironment28adjust_base_script_directoryEv`

`CEnvironment::adjust_base_script_directory()`

| 类 | 地址 |
|---|---|
| `CEnvironment` | `0x08293084` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08293084  _ZN12CEnvironment28adjust_base_script_directoryEv
#           CEnvironment::adjust_base_script_directory()
# range [0x08293084, 0x082930b7]
08293084 +0x00:  push   %ebp
08293085 +0x01:  mov    %esp,%ebp
08293087 +0x03:  sub    $0x18,%esp
0829308a +0x06:  mov    0x8(%ebp),%eax
0829308d +0x09:  add    $0x2f8,%eax
08293092 +0x0e:  mov    %eax,(%esp)
08293095 +0x11:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
0829309a +0x16:  test   %al,%al
0829309c +0x18:  je     082930b6 <+0x32>
0829309e +0x1a:  mov    0x8(%ebp),%eax
082930a1 +0x1d:  add    $0x2f8,%eax
082930a6 +0x22:  movl   $"./Script/",0x4(%esp)
082930ae +0x2a:  mov    %eax,(%esp)
082930b1 +0x2d:  call   08708690 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x22a0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x22a0
082930b6 +0x32:  leave
082930b7 +0x33:  ret
```

## 反编译 C

```c
// CEnvironment::adjust_base_script_directory @ 0x8293084

/* CEnvironment::adjust_base_script_directory() */

void __thiscall CEnvironment::adjust_base_script_directory(CEnvironment *this)

{
  char cVar1;
  
  cVar1 = std::string::empty((string *)(this + 0x2f8));
  if (cVar1 != '\0') {
    std::string::assign((string *)(this + 0x2f8),"./Script/");
  }
  return;
}
```
