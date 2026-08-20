# client2Database

`_ZN8CodePage15client2DatabaseEPcS0_`

`CodePage::client2Database(char*, char*)`

| 类 | 地址 |
|---|---|
| `CodePage` | `0x08108ed2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08108ed2  _ZN8CodePage15client2DatabaseEPcS0_
#           CodePage::client2Database(char*, char*)
# range [0x08108ed2, 0x08108f36]
08108ed2 +0x00:  push   %ebp
08108ed3 +0x01:  mov    %esp,%ebp
08108ed5 +0x03:  push   %ebx
08108ed6 +0x04:  sub    $0x14,%esp
08108ed9 +0x07:  movl   $&_ZL15gClientEncoding,0x4(%esp)
08108ee1 +0x0f:  movl   $&_ZL17gDatabaseEncoding,(%esp)
08108ee8 +0x16:  call   08706a80 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x690>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x690
08108eed +0x1b:  test   %eax,%eax
08108eef +0x1d:  sete   %al
08108ef2 +0x20:  test   %al,%al
08108ef4 +0x22:  je     08108efd <+0x2b>
08108ef6 +0x24:  mov    $0x1,%eax
08108efb +0x29:  jmp    08108f31 <+0x5f>
08108efd +0x2b:  movl   $&_ZL17gDatabaseEncoding,(%esp)
08108f04 +0x32:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08108f09 +0x37:  mov    %eax,%ebx
08108f0b +0x39:  movl   $&_ZL15gClientEncoding,(%esp)
08108f12 +0x40:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08108f17 +0x45:  mov    0xc(%ebp),%edx
08108f1a +0x48:  mov    %edx,0xc(%esp)
08108f1e +0x4c:  mov    0x8(%ebp),%edx
08108f21 +0x4f:  mov    %edx,0x8(%esp)
08108f25 +0x53:  mov    %ebx,0x4(%esp)
08108f29 +0x57:  mov    %eax,(%esp)
08108f2c +0x5a:  call   08108bfb <_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_>  ; DNFFLib::CharacSetSwitch(char const*, char const*, char*, char*)
08108f31 +0x5f:  add    $0x14,%esp
08108f34 +0x62:  pop    %ebx
08108f35 +0x63:  pop    %ebp
08108f36 +0x64:  ret
```

## 反编译 C

```c
// CodePage::client2Database @ 0x8108ed2

/* CodePage::client2Database(char*, char*) */

undefined4 CodePage::client2Database(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar1 = std::string::compare((string *)&gDatabaseEncoding,(string *)&gClientEncoding);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    pcVar3 = (char *)std::string::c_str((string *)&gDatabaseEncoding);
    pcVar4 = (char *)std::string::c_str((string *)&gClientEncoding);
    uVar2 = DNFFLib::CharacSetSwitch(pcVar4,pcVar3,param_1,param_2);
  }
  return uVar2;
}
```
