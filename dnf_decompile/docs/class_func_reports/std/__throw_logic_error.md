# __throw_logic_error

`_ZSt19__throw_logic_errorPKc`

`std::__throw_logic_error(char const*)`

| 类 | 地址 |
|---|---|
| `std` | `0x086d95e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d95e0  _ZSt19__throw_logic_errorPKc
#           std::__throw_logic_error(char const*)
# range [0x086d95e0, 0x086d96af]
086d95e0 +0x00:  push   %ebp
086d95e1 +0x01:  mov    %esp,%ebp
086d95e3 +0x03:  sub    $0x38,%esp
086d95e6 +0x06:  mov    0x8(%ebp),%eax
086d95e9 +0x09:  mov    %ebx,-0xc(%ebp)
086d95ec +0x0c:  lea    -0x20(%ebp),%ebx
086d95ef +0x0f:  mov    %esi,-0x8(%ebp)
086d95f2 +0x12:  mov    %edi,-0x4(%ebp)
086d95f5 +0x15:  mov    %eax,(%esp)
086d95f8 +0x18:  call   0807d840 <_init+0x138>
086d95fd +0x1d:  lea    -0x19(%ebp),%edx
086d9600 +0x20:  mov    %edx,0x8(%esp)
086d9604 +0x24:  mov    %ebx,(%esp)
086d9607 +0x27:  mov    %eax,0x4(%esp)
086d960b +0x2b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086d9610 +0x30:  movl   $0x8,(%esp)
086d9617 +0x37:  call   08725800 <__cxa_allocate_exception>
086d961c +0x3c:  mov    %ebx,0x4(%esp)
086d9620 +0x40:  mov    %eax,%esi
086d9622 +0x42:  mov    %eax,(%esp)
086d9625 +0x45:  call   086dd250 <_ZNSt11logic_errorC1ERKSs>  ; std::logic_error::logic_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086d962a +0x4a:  mov    -0x20(%ebp),%eax
086d962d +0x4d:  sub    $0xc,%eax
086d9630 +0x50:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086d9635 +0x55:  jne    086d964f <+0x6f>
086d9637 +0x57:  movl   $&_ZNSt11logic_errorD1Ev,0x8(%esp)
086d963f +0x5f:  movl   $&_ZTISt11logic_error,0x4(%esp)
086d9647 +0x67:  mov    %esi,(%esp)
086d964a +0x6a:  call   08724c50 <__cxa_throw>
086d964f +0x6f:  mov    $&data#bb92cc41(.plt),%edx
086d9654 +0x74:  test   %edx,%edx
086d9656 +0x76:  je     086d9693 <+0xb3>
086d9658 +0x78:  or     $0xffffffff,%edx
086d965b +0x7b:  lock xadd %edx,0x8(%eax)
086d9660 +0x80:  test   %edx,%edx
086d9662 +0x82:  jg     086d9637 <+0x57>
086d9664 +0x84:  lea    -0x1a(%ebp),%edx
086d9667 +0x87:  mov    %edx,0x4(%esp)
086d966b +0x8b:  mov    %eax,(%esp)
086d966e +0x8e:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
086d9673 +0x93:  jmp    086d9637 <+0x57>
086d9675 +0x95:  mov    %eax,%edi
086d9677 +0x97:  mov    %esi,(%esp)
086d967a +0x9a:  call   087255a0 <__cxa_free_exception>
086d967f +0x9f:  mov    %ebx,(%esp)
086d9682 +0xa2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086d9687 +0xa7:  mov    %edi,(%esp)
086d968a +0xaa:  call   08ae3750 <_Unwind_Resume>
086d968f +0xaf:  mov    %eax,%edi
086d9691 +0xb1:  jmp    086d9687 <+0xa7>
086d9693 +0xb3:  mov    0x8(%eax),%edx
086d9696 +0xb6:  lea    -0x1(%edx),%ecx
086d9699 +0xb9:  mov    %ecx,0x8(%eax)
086d969c +0xbc:  jmp    086d9660 <+0x80>
086d969e +0xbe:  cmp    $0xffffffff,%edx
086d96a1 +0xc1:  mov    %eax,%edi
086d96a3 +0xc3:  jne    086d9687 <+0xa7>
086d96a5 +0xc5:  call   08724880 <_ZSt9terminatev>  ; std::terminate()
086d96aa +0xca:  nop
086d96ab +0xcb:  nop
086d96ac +0xcc:  nop
086d96ad +0xcd:  nop
086d96ae +0xce:  nop
086d96af +0xcf:  nop
```

## 反编译 C

```c
// std::__throw_logic_error @ 0x86d95e0

/* WARNING: Removing unreachable block (ram,0x086d9693) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_logic_error(char const*) */

void std::__throw_logic_error(char *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  logic_error *this;
  int local_24;
  allocator local_1d [13];
  
  pcVar3 = (char *)gettext(param_1);
                    /* try { // try from 086d960b to 086d960f has its CatchHandler @ 086d968f */
  string::string((string *)&local_24,pcVar3,local_1d);
  this = (logic_error *)__cxa_allocate_exception(8);
                    /* try { // try from 086d9625 to 086d9629 has its CatchHandler @ 086d9675 */
  logic_error::logic_error(this,(string *)&local_24);
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
  __cxa_throw(this,&logic_error::typeinfo,logic_error::~logic_error);
}
```
