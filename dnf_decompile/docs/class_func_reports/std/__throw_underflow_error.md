# __throw_underflow_error

`_ZSt23__throw_underflow_errorPKc`

`std::__throw_underflow_error(char const*)`

| 类 | 地址 |
|---|---|
| `std` | `0x086d9830` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9830  _ZSt23__throw_underflow_errorPKc
#           std::__throw_underflow_error(char const*)
# range [0x086d9830, 0x086d98ff]
086d9830 +0x00:  push   %ebp
086d9831 +0x01:  mov    %esp,%ebp
086d9833 +0x03:  sub    $0x38,%esp
086d9836 +0x06:  mov    0x8(%ebp),%eax
086d9839 +0x09:  mov    %ebx,-0xc(%ebp)
086d983c +0x0c:  lea    -0x20(%ebp),%ebx
086d983f +0x0f:  mov    %esi,-0x8(%ebp)
086d9842 +0x12:  mov    %edi,-0x4(%ebp)
086d9845 +0x15:  mov    %eax,(%esp)
086d9848 +0x18:  call   0807d840 <_init+0x138>
086d984d +0x1d:  lea    -0x19(%ebp),%edx
086d9850 +0x20:  mov    %edx,0x8(%esp)
086d9854 +0x24:  mov    %ebx,(%esp)
086d9857 +0x27:  mov    %eax,0x4(%esp)
086d985b +0x2b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086d9860 +0x30:  movl   $0x8,(%esp)
086d9867 +0x37:  call   08725800 <__cxa_allocate_exception>
086d986c +0x3c:  mov    %ebx,0x4(%esp)
086d9870 +0x40:  mov    %eax,%esi
086d9872 +0x42:  mov    %eax,(%esp)
086d9875 +0x45:  call   086dd1c0 <_ZNSt15underflow_errorC1ERKSs>  ; std::underflow_error::underflow_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086d987a +0x4a:  mov    -0x20(%ebp),%eax
086d987d +0x4d:  sub    $0xc,%eax
086d9880 +0x50:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086d9885 +0x55:  jne    086d989f <+0x6f>
086d9887 +0x57:  movl   $&_ZNSt15underflow_errorD1Ev,0x8(%esp)
086d988f +0x5f:  movl   $&_ZTISt15underflow_error,0x4(%esp)
086d9897 +0x67:  mov    %esi,(%esp)
086d989a +0x6a:  call   08724c50 <__cxa_throw>
086d989f +0x6f:  mov    $&data#bb92cc41(.plt),%edx
086d98a4 +0x74:  test   %edx,%edx
086d98a6 +0x76:  je     086d98e3 <+0xb3>
086d98a8 +0x78:  or     $0xffffffff,%edx
086d98ab +0x7b:  lock xadd %edx,0x8(%eax)
086d98b0 +0x80:  test   %edx,%edx
086d98b2 +0x82:  jg     086d9887 <+0x57>
086d98b4 +0x84:  lea    -0x1a(%ebp),%edx
086d98b7 +0x87:  mov    %edx,0x4(%esp)
086d98bb +0x8b:  mov    %eax,(%esp)
086d98be +0x8e:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
086d98c3 +0x93:  jmp    086d9887 <+0x57>
086d98c5 +0x95:  mov    %eax,%edi
086d98c7 +0x97:  mov    %esi,(%esp)
086d98ca +0x9a:  call   087255a0 <__cxa_free_exception>
086d98cf +0x9f:  mov    %ebx,(%esp)
086d98d2 +0xa2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086d98d7 +0xa7:  mov    %edi,(%esp)
086d98da +0xaa:  call   08ae3750 <_Unwind_Resume>
086d98df +0xaf:  mov    %eax,%edi
086d98e1 +0xb1:  jmp    086d98d7 <+0xa7>
086d98e3 +0xb3:  mov    0x8(%eax),%edx
086d98e6 +0xb6:  lea    -0x1(%edx),%ecx
086d98e9 +0xb9:  mov    %ecx,0x8(%eax)
086d98ec +0xbc:  jmp    086d98b0 <+0x80>
086d98ee +0xbe:  cmp    $0xffffffff,%edx
086d98f1 +0xc1:  mov    %eax,%edi
086d98f3 +0xc3:  jne    086d98d7 <+0xa7>
086d98f5 +0xc5:  call   08724880 <_ZSt9terminatev>  ; std::terminate()
086d98fa +0xca:  nop
086d98fb +0xcb:  nop
086d98fc +0xcc:  nop
086d98fd +0xcd:  nop
086d98fe +0xce:  nop
086d98ff +0xcf:  nop
```

## 反编译 C

```c
// std::__throw_underflow_error @ 0x86d9830

/* WARNING: Removing unreachable block (ram,0x086d98e3) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_underflow_error(char const*) */

void std::__throw_underflow_error(char *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  underflow_error *this;
  int local_24;
  allocator local_1d [13];
  
  pcVar3 = (char *)gettext(param_1);
                    /* try { // try from 086d985b to 086d985f has its CatchHandler @ 086d98df */
  string::string((string *)&local_24,pcVar3,local_1d);
  this = (underflow_error *)__cxa_allocate_exception(8);
                    /* try { // try from 086d9875 to 086d9879 has its CatchHandler @ 086d98c5 */
  underflow_error::underflow_error(this,(string *)&local_24);
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
  __cxa_throw(this,&underflow_error::typeinfo,underflow_error::~underflow_error);
}
```
