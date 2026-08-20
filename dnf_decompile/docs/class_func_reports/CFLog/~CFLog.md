# ~CFLog

`_ZN5CFLogD1Ev`

`CFLog::~CFLog()`

| 类 | 地址 |
|---|---|
| `CFLog` | `0x08106e5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08106e5c  _ZN5CFLogD1Ev
#           CFLog::~CFLog()
# range [0x08106e5c, 0x08106ec3]
08106e5c +0x00:  push   %ebp
08106e5d +0x01:  mov    %esp,%ebp
08106e5f +0x03:  push   %esi
08106e60 +0x04:  push   %ebx
08106e61 +0x05:  sub    $0x10,%esp
08106e64 +0x08:  mov    0x8(%ebp),%eax
08106e67 +0x0b:  movl   $&_ZTV5CFLog+0x8,(%eax)
08106e6d +0x11:  mov    0x8(%ebp),%eax
08106e70 +0x14:  mov    0x4(%eax),%eax
08106e73 +0x17:  mov    %eax,(%esp)
08106e76 +0x1a:  call   0807dea0 <_init+0x798>
08106e7b +0x1f:  jmp    08106e9b <+0x3f>
08106e7d +0x21:  mov    %edx,%ebx
08106e7f +0x23:  mov    %eax,%esi
08106e81 +0x25:  mov    0x8(%ebp),%eax
08106e84 +0x28:  add    $0x8,%eax
08106e87 +0x2b:  mov    %eax,(%esp)
08106e8a +0x2e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08106e8f +0x33:  mov    %esi,%eax
08106e91 +0x35:  mov    %ebx,%edx
08106e93 +0x37:  mov    %eax,(%esp)
08106e96 +0x3a:  call   08ae3750 <_Unwind_Resume>
08106e9b +0x3f:  mov    0x8(%ebp),%eax
08106e9e +0x42:  add    $0x8,%eax
08106ea1 +0x45:  mov    %eax,(%esp)
08106ea4 +0x48:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08106ea9 +0x4d:  mov    $0x0,%eax
08106eae +0x52:  test   %al,%al
08106eb0 +0x54:  je     08106ebd <+0x61>
08106eb2 +0x56:  mov    0x8(%ebp),%eax
08106eb5 +0x59:  mov    %eax,(%esp)
08106eb8 +0x5c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08106ebd +0x61:  add    $0x10,%esp
08106ec0 +0x64:  pop    %ebx
08106ec1 +0x65:  pop    %esi
08106ec2 +0x66:  pop    %ebp
08106ec3 +0x67:  ret
```

## 反编译 C

```c
// CFLog::~CFLog @ 0x8106e5c

/* WARNING: Removing unreachable block (ram,0x08106eb2) */
/* CFLog::~CFLog() */

void __thiscall CFLog::~CFLog(CFLog *this)

{
  *(undefined ***)this = &PTR__CFLog_08b44650;
                    /* try { // try from 08106e76 to 08106e7a has its CatchHandler @ 08106e7d */
  fclose(*(FILE **)(this + 4));
  std::string::~string((string *)(this + 8));
  return;
}
```
