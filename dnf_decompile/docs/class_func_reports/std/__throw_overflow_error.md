# __throw_overflow_error

`_ZSt22__throw_overflow_errorPKc`

`std::__throw_overflow_error(char const*)`

| 类 | 地址 |
|---|---|
| `std` | `0x086d9900` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9900  _ZSt22__throw_overflow_errorPKc
#           std::__throw_overflow_error(char const*)
# range [0x086d9900, 0x086d99cf]
086d9900 +0x00:  push   %ebp
086d9901 +0x01:  mov    %esp,%ebp
086d9903 +0x03:  sub    $0x38,%esp
086d9906 +0x06:  mov    0x8(%ebp),%eax
086d9909 +0x09:  mov    %ebx,-0xc(%ebp)
086d990c +0x0c:  lea    -0x20(%ebp),%ebx
086d990f +0x0f:  mov    %esi,-0x8(%ebp)
086d9912 +0x12:  mov    %edi,-0x4(%ebp)
086d9915 +0x15:  mov    %eax,(%esp)
086d9918 +0x18:  call   0807d840 <_init+0x138>
086d991d +0x1d:  lea    -0x19(%ebp),%edx
086d9920 +0x20:  mov    %edx,0x8(%esp)
086d9924 +0x24:  mov    %ebx,(%esp)
086d9927 +0x27:  mov    %eax,0x4(%esp)
086d992b +0x2b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086d9930 +0x30:  movl   $0x8,(%esp)
086d9937 +0x37:  call   08725800 <__cxa_allocate_exception>
086d993c +0x3c:  mov    %ebx,0x4(%esp)
086d9940 +0x40:  mov    %eax,%esi
086d9942 +0x42:  mov    %eax,(%esp)
086d9945 +0x45:  call   086dd1f0 <_ZNSt14overflow_errorC1ERKSs>  ; std::overflow_error::overflow_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086d994a +0x4a:  mov    -0x20(%ebp),%eax
086d994d +0x4d:  sub    $0xc,%eax
086d9950 +0x50:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086d9955 +0x55:  jne    086d996f <+0x6f>
086d9957 +0x57:  movl   $&_ZNSt14overflow_errorD1Ev,0x8(%esp)
086d995f +0x5f:  movl   $&_ZTISt14overflow_error,0x4(%esp)
086d9967 +0x67:  mov    %esi,(%esp)
086d996a +0x6a:  call   08724c50 <__cxa_throw>
086d996f +0x6f:  mov    $&data#bb92cc41(.plt),%edx
086d9974 +0x74:  test   %edx,%edx
086d9976 +0x76:  je     086d99b3 <+0xb3>
086d9978 +0x78:  or     $0xffffffff,%edx
086d997b +0x7b:  lock xadd %edx,0x8(%eax)
086d9980 +0x80:  test   %edx,%edx
086d9982 +0x82:  jg     086d9957 <+0x57>
086d9984 +0x84:  lea    -0x1a(%ebp),%edx
086d9987 +0x87:  mov    %edx,0x4(%esp)
086d998b +0x8b:  mov    %eax,(%esp)
086d998e +0x8e:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
086d9993 +0x93:  jmp    086d9957 <+0x57>
086d9995 +0x95:  mov    %eax,%edi
086d9997 +0x97:  mov    %esi,(%esp)
086d999a +0x9a:  call   087255a0 <__cxa_free_exception>
086d999f +0x9f:  mov    %ebx,(%esp)
086d99a2 +0xa2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086d99a7 +0xa7:  mov    %edi,(%esp)
086d99aa +0xaa:  call   08ae3750 <_Unwind_Resume>
086d99af +0xaf:  mov    %eax,%edi
086d99b1 +0xb1:  jmp    086d99a7 <+0xa7>
086d99b3 +0xb3:  mov    0x8(%eax),%edx
086d99b6 +0xb6:  lea    -0x1(%edx),%ecx
086d99b9 +0xb9:  mov    %ecx,0x8(%eax)
086d99bc +0xbc:  jmp    086d9980 <+0x80>
086d99be +0xbe:  cmp    $0xffffffff,%edx
086d99c1 +0xc1:  mov    %eax,%edi
086d99c3 +0xc3:  jne    086d99a7 <+0xa7>
086d99c5 +0xc5:  call   08724880 <_ZSt9terminatev>  ; std::terminate()
086d99ca +0xca:  nop
086d99cb +0xcb:  nop
086d99cc +0xcc:  nop
086d99cd +0xcd:  nop
086d99ce +0xce:  nop
086d99cf +0xcf:  nop
```

## 反编译 C

```c
// std::__throw_overflow_error @ 0x86d9900

/* WARNING: Removing unreachable block (ram,0x086d99b3) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_overflow_error(char const*) */

void std::__throw_overflow_error(char *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  overflow_error *this;
  int local_24;
  allocator local_1d [13];
  
  pcVar3 = (char *)gettext(param_1);
                    /* try { // try from 086d992b to 086d992f has its CatchHandler @ 086d99af */
  string::string((string *)&local_24,pcVar3,local_1d);
  this = (overflow_error *)__cxa_allocate_exception(8);
                    /* try { // try from 086d9945 to 086d9949 has its CatchHandler @ 086d9995 */
  overflow_error::overflow_error(this,(string *)&local_24);
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
  __cxa_throw(this,&overflow_error::typeinfo,overflow_error::~overflow_error);
}
```
