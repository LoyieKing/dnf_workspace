# __throw_range_error

`_ZSt19__throw_range_errorPKc`

`std::__throw_range_error(char const*)`

| 类 | 地址 |
|---|---|
| `std` | `0x086d99d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d99d0  _ZSt19__throw_range_errorPKc
#           std::__throw_range_error(char const*)
# range [0x086d99d0, 0x086d9a9f]
086d99d0 +0x00:  push   %ebp
086d99d1 +0x01:  mov    %esp,%ebp
086d99d3 +0x03:  sub    $0x38,%esp
086d99d6 +0x06:  mov    0x8(%ebp),%eax
086d99d9 +0x09:  mov    %ebx,-0xc(%ebp)
086d99dc +0x0c:  lea    -0x20(%ebp),%ebx
086d99df +0x0f:  mov    %esi,-0x8(%ebp)
086d99e2 +0x12:  mov    %edi,-0x4(%ebp)
086d99e5 +0x15:  mov    %eax,(%esp)
086d99e8 +0x18:  call   0807d840 <_init+0x138>
086d99ed +0x1d:  lea    -0x19(%ebp),%edx
086d99f0 +0x20:  mov    %edx,0x8(%esp)
086d99f4 +0x24:  mov    %ebx,(%esp)
086d99f7 +0x27:  mov    %eax,0x4(%esp)
086d99fb +0x2b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086d9a00 +0x30:  movl   $0x8,(%esp)
086d9a07 +0x37:  call   08725800 <__cxa_allocate_exception>
086d9a0c +0x3c:  mov    %ebx,0x4(%esp)
086d9a10 +0x40:  mov    %eax,%esi
086d9a12 +0x42:  mov    %eax,(%esp)
086d9a15 +0x45:  call   086dd220 <_ZNSt11range_errorC1ERKSs>  ; std::range_error::range_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086d9a1a +0x4a:  mov    -0x20(%ebp),%eax
086d9a1d +0x4d:  sub    $0xc,%eax
086d9a20 +0x50:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086d9a25 +0x55:  jne    086d9a3f <+0x6f>
086d9a27 +0x57:  movl   $&_ZNSt11range_errorD1Ev,0x8(%esp)
086d9a2f +0x5f:  movl   $&_ZTISt11range_error,0x4(%esp)
086d9a37 +0x67:  mov    %esi,(%esp)
086d9a3a +0x6a:  call   08724c50 <__cxa_throw>
086d9a3f +0x6f:  mov    $&data#bb92cc41(.plt),%edx
086d9a44 +0x74:  test   %edx,%edx
086d9a46 +0x76:  je     086d9a83 <+0xb3>
086d9a48 +0x78:  or     $0xffffffff,%edx
086d9a4b +0x7b:  lock xadd %edx,0x8(%eax)
086d9a50 +0x80:  test   %edx,%edx
086d9a52 +0x82:  jg     086d9a27 <+0x57>
086d9a54 +0x84:  lea    -0x1a(%ebp),%edx
086d9a57 +0x87:  mov    %edx,0x4(%esp)
086d9a5b +0x8b:  mov    %eax,(%esp)
086d9a5e +0x8e:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
086d9a63 +0x93:  jmp    086d9a27 <+0x57>
086d9a65 +0x95:  mov    %eax,%edi
086d9a67 +0x97:  mov    %esi,(%esp)
086d9a6a +0x9a:  call   087255a0 <__cxa_free_exception>
086d9a6f +0x9f:  mov    %ebx,(%esp)
086d9a72 +0xa2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086d9a77 +0xa7:  mov    %edi,(%esp)
086d9a7a +0xaa:  call   08ae3750 <_Unwind_Resume>
086d9a7f +0xaf:  mov    %eax,%edi
086d9a81 +0xb1:  jmp    086d9a77 <+0xa7>
086d9a83 +0xb3:  mov    0x8(%eax),%edx
086d9a86 +0xb6:  lea    -0x1(%edx),%ecx
086d9a89 +0xb9:  mov    %ecx,0x8(%eax)
086d9a8c +0xbc:  jmp    086d9a50 <+0x80>
086d9a8e +0xbe:  cmp    $0xffffffff,%edx
086d9a91 +0xc1:  mov    %eax,%edi
086d9a93 +0xc3:  jne    086d9a77 <+0xa7>
086d9a95 +0xc5:  call   08724880 <_ZSt9terminatev>  ; std::terminate()
086d9a9a +0xca:  nop
086d9a9b +0xcb:  nop
086d9a9c +0xcc:  nop
086d9a9d +0xcd:  nop
086d9a9e +0xce:  nop
086d9a9f +0xcf:  nop
```

## 反编译 C

```c
// std::__throw_range_error @ 0x86d99d0

/* WARNING: Removing unreachable block (ram,0x086d9a83) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_range_error(char const*) */

void std::__throw_range_error(char *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  range_error *this;
  int local_24;
  allocator local_1d [13];
  
  pcVar3 = (char *)gettext(param_1);
                    /* try { // try from 086d99fb to 086d99ff has its CatchHandler @ 086d9a7f */
  string::string((string *)&local_24,pcVar3,local_1d);
  this = (range_error *)__cxa_allocate_exception(8);
                    /* try { // try from 086d9a15 to 086d9a19 has its CatchHandler @ 086d9a65 */
  range_error::range_error(this,(string *)&local_24);
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
  __cxa_throw(this,&range_error::typeinfo,range_error::~range_error);
}
```
