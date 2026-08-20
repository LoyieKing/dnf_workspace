# initCodePage

`_ZN8CodePage12initCodePageEv`

`CodePage::initCodePage()`

| 类 | 地址 |
|---|---|
| `CodePage` | `0x08108d88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08108d88  _ZN8CodePage12initCodePageEv
#           CodePage::initCodePage()
# range [0x08108d88, 0x08108dcb]
08108d88 +0x00:  push   %ebp
08108d89 +0x01:  mov    %esp,%ebp
08108d8b +0x03:  sub    $0x18,%esp
08108d8e +0x06:  movl   $"UTF-8",0x4(%esp)
08108d96 +0x0e:  movl   $&_ZL15gClientEncoding,(%esp)
08108d9d +0x15:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08108da2 +0x1a:  movl   $"GBK",0x4(%esp)
08108daa +0x22:  movl   $&_ZL15gScriptEncoding,(%esp)
08108db1 +0x29:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08108db6 +0x2e:  movl   $"UTF-8",0x4(%esp)
08108dbe +0x36:  movl   $&_ZL17gDatabaseEncoding,(%esp)
08108dc5 +0x3d:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08108dca +0x42:  leave
08108dcb +0x43:  ret
```

## 反编译 C

```c
// CodePage::initCodePage @ 0x8108d88

/* CodePage::initCodePage() */

void CodePage::initCodePage(void)

{
  std::string::operator=((string *)&gClientEncoding,"UTF-8");
  std::string::operator=((string *)&gScriptEncoding,"GBK");
  std::string::operator=((string *)&gDatabaseEncoding,"UTF-8");
  return;
}
```
