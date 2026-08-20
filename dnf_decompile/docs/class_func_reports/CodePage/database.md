# database

`_ZN8CodePage8databaseEv`

`CodePage::database()`

| 类 | 地址 |
|---|---|
| `CodePage` | `0x08108de0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08108de0  _ZN8CodePage8databaseEv
#           CodePage::database()
# range [0x08108de0, 0x08108df3]
08108de0 +0x00:  push   %ebp
08108de1 +0x01:  mov    %esp,%ebp
08108de3 +0x03:  sub    $0x18,%esp
08108de6 +0x06:  movl   $&_ZL17gDatabaseEncoding,(%esp)
08108ded +0x0d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08108df2 +0x12:  leave
08108df3 +0x13:  ret
```

## 反编译 C

```c
// CodePage::database @ 0x8108de0

/* CodePage::database() */

void CodePage::database(void)

{
  std::string::c_str((string *)&gDatabaseEncoding);
  return;
}
```
