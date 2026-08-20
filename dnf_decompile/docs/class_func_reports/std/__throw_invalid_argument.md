# __throw_invalid_argument

`_ZSt24__throw_invalid_argumentPKc`

`std::__throw_invalid_argument(char const*)`

| 类 | 地址 |
|---|---|
| `std` | `0x086d9d10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9d10  _ZSt24__throw_invalid_argumentPKc
#           std::__throw_invalid_argument(char const*)
# range [0x086d9d10, 0x086d9ddf]
086d9d10 +0x00:  push   %ebp
086d9d11 +0x01:  mov    %esp,%ebp
086d9d13 +0x03:  sub    $0x38,%esp
086d9d16 +0x06:  mov    0x8(%ebp),%eax
086d9d19 +0x09:  mov    %ebx,-0xc(%ebp)
086d9d1c +0x0c:  lea    -0x20(%ebp),%ebx
086d9d1f +0x0f:  mov    %esi,-0x8(%ebp)
086d9d22 +0x12:  mov    %edi,-0x4(%ebp)
086d9d25 +0x15:  mov    %eax,(%esp)
086d9d28 +0x18:  call   0807d840 <_init+0x138>
086d9d2d +0x1d:  lea    -0x19(%ebp),%edx
086d9d30 +0x20:  mov    %edx,0x8(%esp)
086d9d34 +0x24:  mov    %ebx,(%esp)
086d9d37 +0x27:  mov    %eax,0x4(%esp)
086d9d3b +0x2b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086d9d40 +0x30:  movl   $0x8,(%esp)
086d9d47 +0x37:  call   08725800 <__cxa_allocate_exception>
086d9d4c +0x3c:  mov    %ebx,0x4(%esp)
086d9d50 +0x40:  mov    %eax,%esi
086d9d52 +0x42:  mov    %eax,(%esp)
086d9d55 +0x45:  call   086dd2f0 <_ZNSt16invalid_argumentC1ERKSs>  ; std::invalid_argument::invalid_argument(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086d9d5a +0x4a:  mov    -0x20(%ebp),%eax
086d9d5d +0x4d:  sub    $0xc,%eax
086d9d60 +0x50:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086d9d65 +0x55:  jne    086d9d7f <+0x6f>
086d9d67 +0x57:  movl   $&_ZNSt16invalid_argumentD1Ev,0x8(%esp)
086d9d6f +0x5f:  movl   $&_ZTISt16invalid_argument,0x4(%esp)
086d9d77 +0x67:  mov    %esi,(%esp)
086d9d7a +0x6a:  call   08724c50 <__cxa_throw>
086d9d7f +0x6f:  mov    $&data#bb92cc41(.plt),%edx
086d9d84 +0x74:  test   %edx,%edx
086d9d86 +0x76:  je     086d9dc3 <+0xb3>
086d9d88 +0x78:  or     $0xffffffff,%edx
086d9d8b +0x7b:  lock xadd %edx,0x8(%eax)
086d9d90 +0x80:  test   %edx,%edx
086d9d92 +0x82:  jg     086d9d67 <+0x57>
086d9d94 +0x84:  lea    -0x1a(%ebp),%edx
086d9d97 +0x87:  mov    %edx,0x4(%esp)
086d9d9b +0x8b:  mov    %eax,(%esp)
086d9d9e +0x8e:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
086d9da3 +0x93:  jmp    086d9d67 <+0x57>
086d9da5 +0x95:  mov    %eax,%edi
086d9da7 +0x97:  mov    %esi,(%esp)
086d9daa +0x9a:  call   087255a0 <__cxa_free_exception>
086d9daf +0x9f:  mov    %ebx,(%esp)
086d9db2 +0xa2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086d9db7 +0xa7:  mov    %edi,(%esp)
086d9dba +0xaa:  call   08ae3750 <_Unwind_Resume>
086d9dbf +0xaf:  mov    %eax,%edi
086d9dc1 +0xb1:  jmp    086d9db7 <+0xa7>
086d9dc3 +0xb3:  mov    0x8(%eax),%edx
086d9dc6 +0xb6:  lea    -0x1(%edx),%ecx
086d9dc9 +0xb9:  mov    %ecx,0x8(%eax)
086d9dcc +0xbc:  jmp    086d9d90 <+0x80>
086d9dce +0xbe:  cmp    $0xffffffff,%edx
086d9dd1 +0xc1:  mov    %eax,%edi
086d9dd3 +0xc3:  jne    086d9db7 <+0xa7>
086d9dd5 +0xc5:  call   08724880 <_ZSt9terminatev>  ; std::terminate()
086d9dda +0xca:  nop
086d9ddb +0xcb:  nop
086d9ddc +0xcc:  nop
086d9ddd +0xcd:  nop
086d9dde +0xce:  nop
086d9ddf +0xcf:  nop
```

## 反编译 C

```c
// std::__throw_invalid_argument @ 0x86d9d10

/* WARNING: Removing unreachable block (ram,0x086d9dc3) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_invalid_argument(char const*) */

void std::__throw_invalid_argument(char *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  invalid_argument *this;
  int local_24;
  allocator local_1d [13];
  
  pcVar3 = (char *)gettext(param_1);
                    /* try { // try from 086d9d3b to 086d9d3f has its CatchHandler @ 086d9dbf */
  string::string((string *)&local_24,pcVar3,local_1d);
  this = (invalid_argument *)__cxa_allocate_exception(8);
                    /* try { // try from 086d9d55 to 086d9d59 has its CatchHandler @ 086d9da5 */
  invalid_argument::invalid_argument(this,(string *)&local_24);
  if ((allocator *)(local_24 + -0xc) != (allocator *)&string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_24 + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      string::_Rep::_M_destroy((allocator *)(local_24 + -0xc));
    }
  }
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&invalid_argument::typeinfo,invalid_argument::~invalid_argument);
}
```
