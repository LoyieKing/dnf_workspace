# __throw_length_error

`_ZSt20__throw_length_errorPKc`

`std::__throw_length_error(char const*)`

| 类 | 地址 |
|---|---|
| `std` | `0x086d9c40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9c40  _ZSt20__throw_length_errorPKc
#           std::__throw_length_error(char const*)
# range [0x086d9c40, 0x086d9d0f]
086d9c40 +0x00:  push   %ebp
086d9c41 +0x01:  mov    %esp,%ebp
086d9c43 +0x03:  sub    $0x38,%esp
086d9c46 +0x06:  mov    0x8(%ebp),%eax
086d9c49 +0x09:  mov    %ebx,-0xc(%ebp)
086d9c4c +0x0c:  lea    -0x20(%ebp),%ebx
086d9c4f +0x0f:  mov    %esi,-0x8(%ebp)
086d9c52 +0x12:  mov    %edi,-0x4(%ebp)
086d9c55 +0x15:  mov    %eax,(%esp)
086d9c58 +0x18:  call   0807d840 <_init+0x138>
086d9c5d +0x1d:  lea    -0x19(%ebp),%edx
086d9c60 +0x20:  mov    %edx,0x8(%esp)
086d9c64 +0x24:  mov    %ebx,(%esp)
086d9c67 +0x27:  mov    %eax,0x4(%esp)
086d9c6b +0x2b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086d9c70 +0x30:  movl   $0x8,(%esp)
086d9c77 +0x37:  call   08725800 <__cxa_allocate_exception>
086d9c7c +0x3c:  mov    %ebx,0x4(%esp)
086d9c80 +0x40:  mov    %eax,%esi
086d9c82 +0x42:  mov    %eax,(%esp)
086d9c85 +0x45:  call   086dd2c0 <_ZNSt12length_errorC1ERKSs>  ; std::length_error::length_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086d9c8a +0x4a:  mov    -0x20(%ebp),%eax
086d9c8d +0x4d:  sub    $0xc,%eax
086d9c90 +0x50:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086d9c95 +0x55:  jne    086d9caf <+0x6f>
086d9c97 +0x57:  movl   $&_ZNSt12length_errorD1Ev,0x8(%esp)
086d9c9f +0x5f:  movl   $&_ZTISt12length_error,0x4(%esp)
086d9ca7 +0x67:  mov    %esi,(%esp)
086d9caa +0x6a:  call   08724c50 <__cxa_throw>
086d9caf +0x6f:  mov    $&data#bb92cc41(.plt),%edx
086d9cb4 +0x74:  test   %edx,%edx
086d9cb6 +0x76:  je     086d9cf3 <+0xb3>
086d9cb8 +0x78:  or     $0xffffffff,%edx
086d9cbb +0x7b:  lock xadd %edx,0x8(%eax)
086d9cc0 +0x80:  test   %edx,%edx
086d9cc2 +0x82:  jg     086d9c97 <+0x57>
086d9cc4 +0x84:  lea    -0x1a(%ebp),%edx
086d9cc7 +0x87:  mov    %edx,0x4(%esp)
086d9ccb +0x8b:  mov    %eax,(%esp)
086d9cce +0x8e:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
086d9cd3 +0x93:  jmp    086d9c97 <+0x57>
086d9cd5 +0x95:  mov    %eax,%edi
086d9cd7 +0x97:  mov    %esi,(%esp)
086d9cda +0x9a:  call   087255a0 <__cxa_free_exception>
086d9cdf +0x9f:  mov    %ebx,(%esp)
086d9ce2 +0xa2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086d9ce7 +0xa7:  mov    %edi,(%esp)
086d9cea +0xaa:  call   08ae3750 <_Unwind_Resume>
086d9cef +0xaf:  mov    %eax,%edi
086d9cf1 +0xb1:  jmp    086d9ce7 <+0xa7>
086d9cf3 +0xb3:  mov    0x8(%eax),%edx
086d9cf6 +0xb6:  lea    -0x1(%edx),%ecx
086d9cf9 +0xb9:  mov    %ecx,0x8(%eax)
086d9cfc +0xbc:  jmp    086d9cc0 <+0x80>
086d9cfe +0xbe:  cmp    $0xffffffff,%edx
086d9d01 +0xc1:  mov    %eax,%edi
086d9d03 +0xc3:  jne    086d9ce7 <+0xa7>
086d9d05 +0xc5:  call   08724880 <_ZSt9terminatev>  ; std::terminate()
086d9d0a +0xca:  nop
086d9d0b +0xcb:  nop
086d9d0c +0xcc:  nop
086d9d0d +0xcd:  nop
086d9d0e +0xce:  nop
086d9d0f +0xcf:  nop
```

## 反编译 C

```c
// std::__throw_length_error @ 0x86d9c40

/* WARNING: Removing unreachable block (ram,0x086d9cf3) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_length_error(char const*) */

void std::__throw_length_error(char *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  length_error *this;
  int local_24;
  allocator local_1d [13];
  
  pcVar3 = (char *)gettext(param_1);
                    /* try { // try from 086d9c6b to 086d9c6f has its CatchHandler @ 086d9cef */
  string::string((string *)&local_24,pcVar3,local_1d);
  this = (length_error *)__cxa_allocate_exception(8);
                    /* try { // try from 086d9c85 to 086d9c89 has its CatchHandler @ 086d9cd5 */
  length_error::length_error(this,(string *)&local_24);
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
  __cxa_throw(this,&length_error::typeinfo,length_error::~length_error);
}
```
