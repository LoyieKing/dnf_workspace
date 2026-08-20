# __throw_system_error

`_ZSt20__throw_system_errori`

`std::__throw_system_error(int)`

| 类 | 地址 |
|---|---|
| `std` | `0x086d96b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d96b0  _ZSt20__throw_system_errori
#           std::__throw_system_error(int)
# range [0x086d96b0, 0x086d977f]
086d96b0 +0x00:  push   %ebp
086d96b1 +0x01:  mov    %esp,%ebp
086d96b3 +0x03:  sub    $0x38,%esp
086d96b6 +0x06:  mov    %ebx,-0xc(%ebp)
086d96b9 +0x09:  mov    %esi,-0x8(%ebp)
086d96bc +0x0c:  lea    -0x20(%ebp),%esi
086d96bf +0x0f:  mov    %edi,-0x4(%ebp)
086d96c2 +0x12:  call   086df570 <_ZSt16generic_categoryv>  ; std::generic_category()
086d96c7 +0x17:  movl   $0x10,(%esp)
086d96ce +0x1e:  mov    %eax,%edi
086d96d0 +0x20:  call   08725800 <__cxa_allocate_exception>
086d96d5 +0x25:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
086d96dd +0x2d:  mov    %esi,(%esp)
086d96e0 +0x30:  mov    %eax,%ebx
086d96e2 +0x32:  lea    -0x19(%ebp),%eax
086d96e5 +0x35:  mov    %eax,0x8(%esp)
086d96e9 +0x39:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086d96ee +0x3e:  mov    %esi,0x4(%esp)
086d96f2 +0x42:  mov    %ebx,(%esp)
086d96f5 +0x45:  call   086dd180 <_ZNSt13runtime_errorC1ERKSs>  ; std::runtime_error::runtime_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086d96fa +0x4a:  mov    -0x20(%ebp),%eax
086d96fd +0x4d:  sub    $0xc,%eax
086d9700 +0x50:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086d9705 +0x55:  jne    086d972e <+0x7e>
086d9707 +0x57:  mov    0x8(%ebp),%eax
086d970a +0x5a:  movl   $&_ZTVSt12system_error+0x8,(%ebx)
086d9710 +0x60:  mov    %edi,0xc(%ebx)
086d9713 +0x63:  mov    %eax,0x8(%ebx)
086d9716 +0x66:  movl   $&_ZNSt12system_errorD1Ev,0x8(%esp)
086d971e +0x6e:  movl   $&_ZTISt12system_error,0x4(%esp)
086d9726 +0x76:  mov    %ebx,(%esp)
086d9729 +0x79:  call   08724c50 <__cxa_throw>
086d972e +0x7e:  mov    $&data#bb92cc41(.plt),%edx
086d9733 +0x83:  test   %edx,%edx
086d9735 +0x85:  je     086d9772 <+0xc2>
086d9737 +0x87:  or     $0xffffffff,%edx
086d973a +0x8a:  lock xadd %edx,0x8(%eax)
086d973f +0x8f:  test   %edx,%edx
086d9741 +0x91:  jg     086d9707 <+0x57>
086d9743 +0x93:  lea    -0x1a(%ebp),%edx
086d9746 +0x96:  mov    %edx,0x4(%esp)
086d974a +0x9a:  mov    %eax,(%esp)
086d974d +0x9d:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
086d9752 +0xa2:  jmp    086d9707 <+0x57>
086d9754 +0xa4:  mov    %eax,%edi
086d9756 +0xa6:  mov    %esi,(%esp)
086d9759 +0xa9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086d975e +0xae:  mov    %ebx,(%esp)
086d9761 +0xb1:  call   087255a0 <__cxa_free_exception>
086d9766 +0xb6:  mov    %edi,(%esp)
086d9769 +0xb9:  call   08ae3750 <_Unwind_Resume>
086d976e +0xbe:  mov    %eax,%edi
086d9770 +0xc0:  jmp    086d975e <+0xae>
086d9772 +0xc2:  mov    0x8(%eax),%edx
086d9775 +0xc5:  lea    -0x1(%edx),%ecx
086d9778 +0xc8:  mov    %ecx,0x8(%eax)
086d977b +0xcb:  jmp    086d973f <+0x8f>
086d977d +0xcd:  nop
086d977e +0xce:  nop
086d977f +0xcf:  nop
```

## 反编译 C

```c
// std::__throw_system_error @ 0x86d96b0

/* WARNING: Removing unreachable block (ram,0x086d9772) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_system_error(int) */

void std::__throw_system_error(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  runtime_error *this;
  int local_24;
  allocator local_1d [13];
  
  uVar3 = generic_category();
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 086d96e9 to 086d96ed has its CatchHandler @ 086d976e */
  string::string((string *)&local_24,"",local_1d);
                    /* try { // try from 086d96f5 to 086d96f9 has its CatchHandler @ 086d9754 */
  runtime_error::runtime_error(this,(string *)&local_24);
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
  *(undefined ***)this = &PTR__system_error_08cfe570;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(int *)(this + 8) = param_1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&system_error::typeinfo,system_error::~system_error);
}
```
