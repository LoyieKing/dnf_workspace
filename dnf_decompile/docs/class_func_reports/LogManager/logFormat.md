# logFormat

`_ZN10LogManager9logFormatEiPKcS1_iS1_z`

`LogManager::logFormat(int, char const*, char const*, int, char const*, ...)`

| 类 | 地址 |
|---|---|
| `LogManager` | `0x08ad3c0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3c0a  _ZN10LogManager9logFormatEiPKcS1_iS1_z
#           LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
# range [0x08ad3c0a, 0x08ad3da1]
08ad3c0a +0x000:  ret
08ad3c0b +0x001:  mov    %esp,%ebp
08ad3c0d +0x003:  push   %esi
08ad3c0e +0x004:  push   %ebx
08ad3c0f +0x005:  sub    $0x4030,%esp
08ad3c15 +0x00b:  call   08ad3ba0 <_ZL11prepareDatav>  ; prepareData()
08ad3c1a +0x010:  mov    0x8(%ebp),%edx
08ad3c1d +0x013:  mov    &_ZL6s_data,%eax
08ad3c22 +0x018:  mov    %edx,0x4(%esp)
08ad3c26 +0x01c:  mov    %eax,(%esp)
08ad3c29 +0x01f:  call   08ad435e <_GLOBAL__I__ZN9LogWriterC2Ev+0x3a7>  ; global constructors keyed to LogWriter::LogWriter()+0x3a7
08ad3c2e +0x024:  mov    %eax,(%esp)
08ad3c31 +0x027:  call   08ad436c <_GLOBAL__I__ZN9LogWriterC2Ev+0x3b5>  ; global constructors keyed to LogWriter::LogWriter()+0x3b5
08ad3c36 +0x02c:  cmp    $0xffffffff,%eax
08ad3c39 +0x02f:  setne  %al
08ad3c3c +0x032:  test   %al,%al
08ad3c3e +0x034:  je     08ad3d97 <+0x18d>
08ad3c44 +0x03a:  lea    0x1c(%ebp),%eax
08ad3c47 +0x03d:  mov    %eax,-0x10(%ebp)
08ad3c4a +0x040:  mov    -0x10(%ebp),%eax
08ad3c4d +0x043:  mov    %eax,0xc(%esp)
08ad3c51 +0x047:  mov    0x18(%ebp),%eax
08ad3c54 +0x04a:  mov    %eax,0x8(%esp)
08ad3c58 +0x04e:  movl   $0x4000,0x4(%esp)
08ad3c60 +0x056:  lea    -0x4014(%ebp),%eax
08ad3c66 +0x05c:  mov    %eax,(%esp)
08ad3c69 +0x05f:  call   0807e5f0 <_init+0xee8>
08ad3c6e +0x064:  cmp    $0xffffffff,%eax
08ad3c71 +0x067:  sete   %al
08ad3c74 +0x06a:  test   %al,%al
08ad3c76 +0x06c:  je     08ad3c7c <+0x72>
08ad3c78 +0x06e:  movb   $0x0,-0x15(%ebp)
08ad3c7c +0x072:  mov    &_ZL8s_indent,%eax
08ad3c81 +0x077:  test   %eax,%eax
08ad3c83 +0x079:  jle    08ad3d50 <+0x146>
08ad3c89 +0x07f:  lea    -0x14(%ebp),%eax
08ad3c8c +0x082:  mov    %eax,(%esp)
08ad3c8f +0x085:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ad3c94 +0x08a:  movl   $0x0,-0xc(%ebp)
08ad3c9b +0x091:  jmp    08ad3cb4 <+0xaa>
08ad3c9d +0x093:  movl   $"\t",0x4(%esp)
08ad3ca5 +0x09b:  lea    -0x14(%ebp),%eax
08ad3ca8 +0x09e:  mov    %eax,(%esp)
08ad3cab +0x0a1:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08ad3cb0 +0x0a6:  addl   $0x1,-0xc(%ebp)
08ad3cb4 +0x0aa:  mov    &_ZL8s_indent,%eax
08ad3cb9 +0x0af:  cmp    %eax,-0xc(%ebp)
08ad3cbc +0x0b2:  setl   %al
08ad3cbf +0x0b5:  test   %al,%al
08ad3cc1 +0x0b7:  jne    08ad3c9d <+0x93>
08ad3cc3 +0x0b9:  lea    -0x4014(%ebp),%eax
08ad3cc9 +0x0bf:  mov    %eax,0x4(%esp)
08ad3ccd +0x0c3:  lea    -0x14(%ebp),%eax
08ad3cd0 +0x0c6:  mov    %eax,(%esp)
08ad3cd3 +0x0c9:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08ad3cd8 +0x0ce:  mov    0x8(%ebp),%edx
08ad3cdb +0x0d1:  mov    &_ZL6s_data,%eax
08ad3ce0 +0x0d6:  mov    %edx,0x4(%esp)
08ad3ce4 +0x0da:  mov    %eax,(%esp)
08ad3ce7 +0x0dd:  call   08ad435e <_GLOBAL__I__ZN9LogWriterC2Ev+0x3a7>  ; global constructors keyed to LogWriter::LogWriter()+0x3a7
08ad3cec +0x0e2:  mov    %eax,(%esp)
08ad3cef +0x0e5:  call   08ad4386 <_GLOBAL__I__ZN9LogWriterC2Ev+0x3cf>  ; global constructors keyed to LogWriter::LogWriter()+0x3cf
08ad3cf4 +0x0ea:  mov    %eax,%ebx
08ad3cf6 +0x0ec:  mov    (%ebx),%eax
08ad3cf8 +0x0ee:  add    $0x8,%eax
08ad3cfb +0x0f1:  mov    (%eax),%esi
08ad3cfd +0x0f3:  lea    -0x14(%ebp),%eax
08ad3d00 +0x0f6:  mov    %eax,(%esp)
08ad3d03 +0x0f9:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ad3d08 +0x0fe:  mov    %eax,0x10(%esp)
08ad3d0c +0x102:  mov    0x14(%ebp),%eax
08ad3d0f +0x105:  mov    %eax,0xc(%esp)
08ad3d13 +0x109:  mov    0x10(%ebp),%eax
08ad3d16 +0x10c:  mov    %eax,0x8(%esp)
08ad3d1a +0x110:  mov    0xc(%ebp),%eax
08ad3d1d +0x113:  mov    %eax,0x4(%esp)
08ad3d21 +0x117:  mov    %ebx,(%esp)
08ad3d24 +0x11a:  call   *%esi
08ad3d26 +0x11c:  jmp    08ad3d43 <+0x139>
08ad3d28 +0x11e:  mov    %edx,%ebx
08ad3d2a +0x120:  mov    %eax,%esi
08ad3d2c +0x122:  lea    -0x14(%ebp),%eax
08ad3d2f +0x125:  mov    %eax,(%esp)
08ad3d32 +0x128:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ad3d37 +0x12d:  mov    %esi,%eax
08ad3d39 +0x12f:  mov    %ebx,%edx
08ad3d3b +0x131:  mov    %eax,(%esp)
08ad3d3e +0x134:  call   08ae3750 <_Unwind_Resume>
08ad3d43 +0x139:  lea    -0x14(%ebp),%eax
08ad3d46 +0x13c:  mov    %eax,(%esp)
08ad3d49 +0x13f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ad3d4e +0x144:  jmp    08ad3d97 <+0x18d>
08ad3d50 +0x146:  mov    0x8(%ebp),%edx
08ad3d53 +0x149:  mov    &_ZL6s_data,%eax
08ad3d58 +0x14e:  mov    %edx,0x4(%esp)
08ad3d5c +0x152:  mov    %eax,(%esp)
08ad3d5f +0x155:  call   08ad435e <_GLOBAL__I__ZN9LogWriterC2Ev+0x3a7>  ; global constructors keyed to LogWriter::LogWriter()+0x3a7
08ad3d64 +0x15a:  mov    %eax,(%esp)
08ad3d67 +0x15d:  call   08ad4386 <_GLOBAL__I__ZN9LogWriterC2Ev+0x3cf>  ; global constructors keyed to LogWriter::LogWriter()+0x3cf
08ad3d6c +0x162:  mov    (%eax),%edx
08ad3d6e +0x164:  add    $0x8,%edx
08ad3d71 +0x167:  mov    (%edx),%ecx
08ad3d73 +0x169:  lea    -0x4014(%ebp),%edx
08ad3d79 +0x16f:  mov    %edx,0x10(%esp)
08ad3d7d +0x173:  mov    0x14(%ebp),%edx
08ad3d80 +0x176:  mov    %edx,0xc(%esp)
08ad3d84 +0x17a:  mov    0x10(%ebp),%edx
08ad3d87 +0x17d:  mov    %edx,0x8(%esp)
08ad3d8b +0x181:  mov    0xc(%ebp),%edx
08ad3d8e +0x184:  mov    %edx,0x4(%esp)
08ad3d92 +0x188:  mov    %eax,(%esp)
08ad3d95 +0x18b:  call   *%ecx
08ad3d97 +0x18d:  add    $0x4030,%esp
08ad3d9d +0x193:  pop    %ebx
08ad3d9e +0x194:  pop    %esi
08ad3d9f +0x195:  pop    %ebp
08ad3da0 +0x196:  ret
08ad3da1 +0x197:  nop
```

## 反编译 C

```c
// LogManager::logFormat @ 0x8ad3c0a

/* LogManager::logFormat(int, char const*, char const*, int, char const*, ...) */

void LogManager::logFormat(int param_1,char *param_2,char *param_3,int param_4,char *param_5,...)

{
  return;
}
```
