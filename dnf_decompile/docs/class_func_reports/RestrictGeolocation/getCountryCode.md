# getCountryCode

`_ZN19RestrictGeolocation14getCountryCodeEPcjSs`

`RestrictGeolocation::getCountryCode(char*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >)`

| 类 | 地址 |
|---|---|
| `RestrictGeolocation` | `0x08170f3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08170f3a  _ZN19RestrictGeolocation14getCountryCodeEPcjSs
#           RestrictGeolocation::getCountryCode(char*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
# range [0x08170f3a, 0x08170feb]
08170f3a +0x00:  push   %ebp
08170f3b +0x01:  mov    %esp,%ebp
08170f3d +0x03:  sub    $0x28,%esp
08170f40 +0x06:  mov    0x8(%ebp),%eax
08170f43 +0x09:  mov    (%eax),%eax
08170f45 +0x0b:  test   %eax,%eax
08170f47 +0x0d:  jne    08170f7f <+0x45>
08170f49 +0x0f:  movl   $0x5,0xc(%esp)
08170f51 +0x17:  movl   $0x7e,0x8(%esp)
08170f59 +0x1f:  movl   $&_ZZN19RestrictGeolocation14getCountryCodeEPcjSsE19__PRETTY_FUNCTION__,0x4(%esp)
08170f61 +0x27:  lea    -0x18(%ebp),%eax
08170f64 +0x2a:  mov    %eax,(%esp)
08170f67 +0x2d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08170f6c +0x32:  movl   $"[Taiwan, GeoIP] Geo instance is null.",0x4(%esp)
08170f74 +0x3a:  lea    -0x18(%ebp),%eax
08170f77 +0x3d:  mov    %eax,(%esp)
08170f7a +0x40:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08170f7f +0x45:  mov    0x10(%ebp),%eax
08170f82 +0x48:  mov    %eax,0x8(%esp)
08170f86 +0x4c:  movl   $0x0,0x4(%esp)
08170f8e +0x54:  mov    0xc(%ebp),%eax
08170f91 +0x57:  mov    %eax,(%esp)
08170f94 +0x5a:  call   0807dcc0 <_init+0x5b8>
08170f99 +0x5f:  mov    0x14(%ebp),%eax
08170f9c +0x62:  mov    %eax,(%esp)
08170f9f +0x65:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08170fa4 +0x6a:  mov    0x8(%ebp),%edx
08170fa7 +0x6d:  mov    (%edx),%edx
08170fa9 +0x6f:  mov    %eax,0x4(%esp)
08170fad +0x73:  mov    %edx,(%esp)
08170fb0 +0x76:  call   0807e0d0 <_init+0x9c8>
08170fb5 +0x7b:  test   %eax,%eax
08170fb7 +0x7d:  setne  %al
08170fba +0x80:  test   %al,%al
08170fbc +0x82:  je     08170fe9 <+0xaf>
08170fbe +0x84:  mov    0x14(%ebp),%eax
08170fc1 +0x87:  mov    %eax,(%esp)
08170fc4 +0x8a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08170fc9 +0x8f:  mov    0x8(%ebp),%edx
08170fcc +0x92:  mov    (%edx),%edx
08170fce +0x94:  mov    %eax,0x4(%esp)
08170fd2 +0x98:  mov    %edx,(%esp)
08170fd5 +0x9b:  call   0807e0d0 <_init+0x9c8>
08170fda +0xa0:  mov    %eax,0x4(%esp)
08170fde +0xa4:  mov    0xc(%ebp),%eax
08170fe1 +0xa7:  mov    %eax,(%esp)
08170fe4 +0xaa:  call   0807def0 <_init+0x7e8>
08170fe9 +0xaf:  leave
08170fea +0xb0:  ret
08170feb +0xb1:  nop
```

## 反编译 C

```c
// RestrictGeolocation::getCountryCode @ 0x8170f3a

/* RestrictGeolocation::getCountryCode(char*, unsigned int, std::string) */

void __thiscall
RestrictGeolocation::getCountryCode
          (RestrictGeolocation *this,char *param_1,uint param_2,string param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *__src;
  cMyTrace local_1c [24];
  
  if (*(int *)this == 0) {
    cMyTrace::cMyTrace(local_1c,
                       "void RestrictGeolocation::getCountryCode(char*, unsigned int, std::string)",
                       0x7e,5);
    cMyTrace::operator()(local_1c,"[Taiwan, GeoIP] Geo instance is null.");
  }
  memset(param_1,0,param_2);
  uVar1 = std::string::c_str((string *)param_3._M_dataplus._M_p);
  iVar2 = GeoIP_country_code_by_addr(*(undefined4 *)this,uVar1);
  if (iVar2 != 0) {
    uVar1 = std::string::c_str((string *)param_3._M_dataplus._M_p);
    __src = (char *)GeoIP_country_code_by_addr(*(undefined4 *)this,uVar1);
    strcpy(param_1,__src);
  }
  return;
}
```
