# database2Client

`_ZN8CodePage15database2ClientEPcS0_`

`CodePage::database2Client(char*, char*)`

| 类 | 地址 |
|---|---|
| `CodePage` | `0x08108f37` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08108f37  _ZN8CodePage15database2ClientEPcS0_
#           CodePage::database2Client(char*, char*)
# range [0x08108f37, 0x08108f9b]
08108f37 +0x00:  push   %ebp
08108f38 +0x01:  mov    %esp,%ebp
08108f3a +0x03:  push   %ebx
08108f3b +0x04:  sub    $0x14,%esp
08108f3e +0x07:  movl   $&_ZL15gClientEncoding,0x4(%esp)
08108f46 +0x0f:  movl   $&_ZL17gDatabaseEncoding,(%esp)
08108f4d +0x16:  call   08706a80 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x690>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x690
08108f52 +0x1b:  test   %eax,%eax
08108f54 +0x1d:  sete   %al
08108f57 +0x20:  test   %al,%al
08108f59 +0x22:  je     08108f62 <+0x2b>
08108f5b +0x24:  mov    $0x1,%eax
08108f60 +0x29:  jmp    08108f96 <+0x5f>
08108f62 +0x2b:  movl   $&_ZL15gClientEncoding,(%esp)
08108f69 +0x32:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08108f6e +0x37:  mov    %eax,%ebx
08108f70 +0x39:  movl   $&_ZL17gDatabaseEncoding,(%esp)
08108f77 +0x40:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08108f7c +0x45:  mov    0xc(%ebp),%edx
08108f7f +0x48:  mov    %edx,0xc(%esp)
08108f83 +0x4c:  mov    0x8(%ebp),%edx
08108f86 +0x4f:  mov    %edx,0x8(%esp)
08108f8a +0x53:  mov    %ebx,0x4(%esp)
08108f8e +0x57:  mov    %eax,(%esp)
08108f91 +0x5a:  call   08108bfb <_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_>  ; DNFFLib::CharacSetSwitch(char const*, char const*, char*, char*)
08108f96 +0x5f:  add    $0x14,%esp
08108f99 +0x62:  pop    %ebx
08108f9a +0x63:  pop    %ebp
08108f9b +0x64:  ret
```

## 反编译 C

```c
// CodePage::database2Client @ 0x8108f37

/* CodePage::database2Client(char*, char*) */

undefined4 CodePage::database2Client(char *param_1,char *param_2)

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
    pcVar3 = (char *)std::string::c_str((string *)&gClientEncoding);
    pcVar4 = (char *)std::string::c_str((string *)&gDatabaseEncoding);
    uVar2 = DNFFLib::CharacSetSwitch(pcVar4,pcVar3,param_1,param_2);
  }
  return uVar2;
}
```
