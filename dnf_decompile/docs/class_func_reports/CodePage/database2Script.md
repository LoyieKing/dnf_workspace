# database2Script

`_ZN8CodePage15database2ScriptEPcS0_`

`CodePage::database2Script(char*, char*)`

| 类 | 地址 |
|---|---|
| `CodePage` | `0x08108e6d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08108e6d  _ZN8CodePage15database2ScriptEPcS0_
#           CodePage::database2Script(char*, char*)
# range [0x08108e6d, 0x08108ed1]
08108e6d +0x00:  push   %ebp
08108e6e +0x01:  mov    %esp,%ebp
08108e70 +0x03:  push   %ebx
08108e71 +0x04:  sub    $0x14,%esp
08108e74 +0x07:  movl   $&_ZL15gScriptEncoding,0x4(%esp)
08108e7c +0x0f:  movl   $&_ZL17gDatabaseEncoding,(%esp)
08108e83 +0x16:  call   08706a80 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x690>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x690
08108e88 +0x1b:  test   %eax,%eax
08108e8a +0x1d:  sete   %al
08108e8d +0x20:  test   %al,%al
08108e8f +0x22:  je     08108e98 <+0x2b>
08108e91 +0x24:  mov    $0x1,%eax
08108e96 +0x29:  jmp    08108ecc <+0x5f>
08108e98 +0x2b:  movl   $&_ZL15gScriptEncoding,(%esp)
08108e9f +0x32:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08108ea4 +0x37:  mov    %eax,%ebx
08108ea6 +0x39:  movl   $&_ZL17gDatabaseEncoding,(%esp)
08108ead +0x40:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08108eb2 +0x45:  mov    0xc(%ebp),%edx
08108eb5 +0x48:  mov    %edx,0xc(%esp)
08108eb9 +0x4c:  mov    0x8(%ebp),%edx
08108ebc +0x4f:  mov    %edx,0x8(%esp)
08108ec0 +0x53:  mov    %ebx,0x4(%esp)
08108ec4 +0x57:  mov    %eax,(%esp)
08108ec7 +0x5a:  call   08108bfb <_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_>  ; DNFFLib::CharacSetSwitch(char const*, char const*, char*, char*)
08108ecc +0x5f:  add    $0x14,%esp
08108ecf +0x62:  pop    %ebx
08108ed0 +0x63:  pop    %ebp
08108ed1 +0x64:  ret
```

## 反编译 C

```c
// CodePage::database2Script @ 0x8108e6d

/* CodePage::database2Script(char*, char*) */

undefined4 CodePage::database2Script(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar1 = std::string::compare((string *)&gDatabaseEncoding,(string *)&gScriptEncoding);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    pcVar3 = (char *)std::string::c_str((string *)&gScriptEncoding);
    pcVar4 = (char *)std::string::c_str((string *)&gDatabaseEncoding);
    uVar2 = DNFFLib::CharacSetSwitch(pcVar4,pcVar3,param_1,param_2);
  }
  return uVar2;
}
```
