# isAllow

`_ZN19RestrictGeolocation7isAllowESs`

`RestrictGeolocation::isAllow(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)`

| 类 | 地址 |
|---|---|
| `RestrictGeolocation` | `0x08170ecc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08170ecc  _ZN19RestrictGeolocation7isAllowESs
#           RestrictGeolocation::isAllow(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
# range [0x08170ecc, 0x08170f39]
08170ecc +0x00:  push   %ebp
08170ecd +0x01:  mov    %esp,%ebp
08170ecf +0x03:  push   %esi
08170ed0 +0x04:  push   %ebx
08170ed1 +0x05:  sub    $0x20,%esp
08170ed4 +0x08:  mov    0xc(%ebp),%eax
08170ed7 +0x0b:  mov    %eax,0x4(%esp)
08170edb +0x0f:  lea    -0xc(%ebp),%eax
08170ede +0x12:  mov    %eax,(%esp)
08170ee1 +0x15:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08170ee6 +0x1a:  lea    -0xc(%ebp),%eax
08170ee9 +0x1d:  mov    %eax,0x4(%esp)
08170eed +0x21:  mov    0x8(%ebp),%eax
08170ef0 +0x24:  mov    %eax,(%esp)
08170ef3 +0x27:  call   0817109a <_ZN19RestrictGeolocation18isAllowCountryCodeESs>  ; RestrictGeolocation::isAllowCountryCode(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
08170ef8 +0x2c:  mov    %eax,%ebx
08170efa +0x2e:  lea    -0xc(%ebp),%eax
08170efd +0x31:  mov    %eax,(%esp)
08170f00 +0x34:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08170f05 +0x39:  test   %bl,%bl
08170f07 +0x3b:  jne    08170f26 <+0x5a>
08170f09 +0x3d:  jmp    08170f2d <+0x61>
08170f0b +0x3f:  mov    %edx,%ebx
08170f0d +0x41:  mov    %eax,%esi
08170f0f +0x43:  lea    -0xc(%ebp),%eax
08170f12 +0x46:  mov    %eax,(%esp)
08170f15 +0x49:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08170f1a +0x4e:  mov    %esi,%eax
08170f1c +0x50:  mov    %ebx,%edx
08170f1e +0x52:  mov    %eax,(%esp)
08170f21 +0x55:  call   08ae3750 <_Unwind_Resume>
08170f26 +0x5a:  mov    $0x1,%eax
08170f2b +0x5f:  jmp    08170f32 <+0x66>
08170f2d +0x61:  mov    $0x0,%eax
08170f32 +0x66:  add    $0x20,%esp
08170f35 +0x69:  pop    %ebx
08170f36 +0x6a:  pop    %esi
08170f37 +0x6b:  pop    %ebp
08170f38 +0x6c:  ret
08170f39 +0x6d:  nop
```

## 反编译 C

```c
// RestrictGeolocation::isAllow @ 0x8170ecc

/* RestrictGeolocation::isAllow(std::string) */

bool __thiscall RestrictGeolocation::isAllow(RestrictGeolocation *this,string param_1)

{
  char cVar1;
  string local_10 [4];
  
  std::string::string(local_10,(string *)param_1._M_dataplus._M_p);
                    /* try { // try from 08170ef3 to 08170ef7 has its CatchHandler @ 08170f0b */
  cVar1 = isAllowCountryCode((string)this);
  std::string::~string(local_10);
  return cVar1 != '\0';
}
```
