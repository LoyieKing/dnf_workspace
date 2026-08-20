# client

`_ZN8CodePage6clientEv`

`CodePage::client()`

| 类 | 地址 |
|---|---|
| `CodePage` | `0x08108df4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08108df4  _ZN8CodePage6clientEv
#           CodePage::client()
# range [0x08108df4, 0x08108e07]
08108df4 +0x00:  push   %ebp
08108df5 +0x01:  mov    %esp,%ebp
08108df7 +0x03:  sub    $0x18,%esp
08108dfa +0x06:  movl   $&_ZL15gClientEncoding,(%esp)
08108e01 +0x0d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08108e06 +0x12:  leave
08108e07 +0x13:  ret
```

## 反编译 C

```c
// CodePage::client @ 0x8108df4

/* CodePage::client() */

void CodePage::client(void)

{
  std::string::c_str((string *)&gClientEncoding);
  return;
}
```
