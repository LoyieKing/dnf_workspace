# __throw_out_of_range

`_ZSt20__throw_out_of_rangePKc`

`std::__throw_out_of_range(char const*)`

| 类 | 地址 |
|---|---|
| `std` | `0x086d9b70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9b70  _ZSt20__throw_out_of_rangePKc
#           std::__throw_out_of_range(char const*)
# range [0x086d9b70, 0x086d9c3f]
086d9b70 +0x00:  push   %ebp
086d9b71 +0x01:  mov    %esp,%ebp
086d9b73 +0x03:  sub    $0x38,%esp
086d9b76 +0x06:  mov    0x8(%ebp),%eax
086d9b79 +0x09:  mov    %ebx,-0xc(%ebp)
086d9b7c +0x0c:  lea    -0x20(%ebp),%ebx
086d9b7f +0x0f:  mov    %esi,-0x8(%ebp)
086d9b82 +0x12:  mov    %edi,-0x4(%ebp)
086d9b85 +0x15:  mov    %eax,(%esp)
086d9b88 +0x18:  call   0807d840 <_init+0x138>
086d9b8d +0x1d:  lea    -0x19(%ebp),%edx
086d9b90 +0x20:  mov    %edx,0x8(%esp)
086d9b94 +0x24:  mov    %ebx,(%esp)
086d9b97 +0x27:  mov    %eax,0x4(%esp)
086d9b9b +0x2b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086d9ba0 +0x30:  movl   $0x8,(%esp)
086d9ba7 +0x37:  call   08725800 <__cxa_allocate_exception>
086d9bac +0x3c:  mov    %ebx,0x4(%esp)
086d9bb0 +0x40:  mov    %eax,%esi
086d9bb2 +0x42:  mov    %eax,(%esp)
086d9bb5 +0x45:  call   086dd290 <_ZNSt12out_of_rangeC1ERKSs>  ; std::out_of_range::out_of_range(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086d9bba +0x4a:  mov    -0x20(%ebp),%eax
086d9bbd +0x4d:  sub    $0xc,%eax
086d9bc0 +0x50:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086d9bc5 +0x55:  jne    086d9bdf <+0x6f>
086d9bc7 +0x57:  movl   $&_ZNSt12out_of_rangeD1Ev,0x8(%esp)
086d9bcf +0x5f:  movl   $&_ZTISt12out_of_range,0x4(%esp)
086d9bd7 +0x67:  mov    %esi,(%esp)
086d9bda +0x6a:  call   08724c50 <__cxa_throw>
086d9bdf +0x6f:  mov    $&data#bb92cc41(.plt),%edx
086d9be4 +0x74:  test   %edx,%edx
086d9be6 +0x76:  je     086d9c23 <+0xb3>
086d9be8 +0x78:  or     $0xffffffff,%edx
086d9beb +0x7b:  lock xadd %edx,0x8(%eax)
086d9bf0 +0x80:  test   %edx,%edx
086d9bf2 +0x82:  jg     086d9bc7 <+0x57>
086d9bf4 +0x84:  lea    -0x1a(%ebp),%edx
086d9bf7 +0x87:  mov    %edx,0x4(%esp)
086d9bfb +0x8b:  mov    %eax,(%esp)
086d9bfe +0x8e:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
086d9c03 +0x93:  jmp    086d9bc7 <+0x57>
086d9c05 +0x95:  mov    %eax,%edi
086d9c07 +0x97:  mov    %esi,(%esp)
086d9c0a +0x9a:  call   087255a0 <__cxa_free_exception>
086d9c0f +0x9f:  mov    %ebx,(%esp)
086d9c12 +0xa2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086d9c17 +0xa7:  mov    %edi,(%esp)
086d9c1a +0xaa:  call   08ae3750 <_Unwind_Resume>
086d9c1f +0xaf:  mov    %eax,%edi
086d9c21 +0xb1:  jmp    086d9c17 <+0xa7>
086d9c23 +0xb3:  mov    0x8(%eax),%edx
086d9c26 +0xb6:  lea    -0x1(%edx),%ecx
086d9c29 +0xb9:  mov    %ecx,0x8(%eax)
086d9c2c +0xbc:  jmp    086d9bf0 <+0x80>
086d9c2e +0xbe:  cmp    $0xffffffff,%edx
086d9c31 +0xc1:  mov    %eax,%edi
086d9c33 +0xc3:  jne    086d9c17 <+0xa7>
086d9c35 +0xc5:  call   08724880 <_ZSt9terminatev>  ; std::terminate()
086d9c3a +0xca:  nop
086d9c3b +0xcb:  nop
086d9c3c +0xcc:  nop
086d9c3d +0xcd:  nop
086d9c3e +0xce:  nop
086d9c3f +0xcf:  nop
```

## 反编译 C

```c
// std::__throw_out_of_range @ 0x86d9b70

/* WARNING: Removing unreachable block (ram,0x086d9c23) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_out_of_range(char const*) */

void std::__throw_out_of_range(char *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  out_of_range *this;
  int local_24;
  allocator local_1d [13];
  
  pcVar3 = (char *)gettext(param_1);
                    /* try { // try from 086d9b9b to 086d9b9f has its CatchHandler @ 086d9c1f */
  string::string((string *)&local_24,pcVar3,local_1d);
  this = (out_of_range *)__cxa_allocate_exception(8);
                    /* try { // try from 086d9bb5 to 086d9bb9 has its CatchHandler @ 086d9c05 */
  out_of_range::out_of_range(this,(string *)&local_24);
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
  __cxa_throw(this,&out_of_range::typeinfo,out_of_range::~out_of_range);
}
```
