# __throw_ios_failure

`_ZSt19__throw_ios_failurePKc`

`std::__throw_ios_failure(char const*)`

| 类 | 地址 |
|---|---|
| `std` | `0x086d9780` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9780  _ZSt19__throw_ios_failurePKc
#           std::__throw_ios_failure(char const*)
# range [0x086d9780, 0x086d982f]
086d9780 +0x00:  push   %ebp
086d9781 +0x01:  mov    %esp,%ebp
086d9783 +0x03:  push   %esi
086d9784 +0x04:  push   %ebx
086d9785 +0x05:  sub    $0x20,%esp
086d9788 +0x08:  mov    0x8(%ebp),%eax
086d978b +0x0b:  lea    -0x10(%ebp),%ebx
086d978e +0x0e:  mov    %eax,(%esp)
086d9791 +0x11:  call   0807d840 <_init+0x138>
086d9796 +0x16:  lea    -0x9(%ebp),%edx
086d9799 +0x19:  mov    %edx,0x8(%esp)
086d979d +0x1d:  mov    %ebx,(%esp)
086d97a0 +0x20:  mov    %eax,0x4(%esp)
086d97a4 +0x24:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086d97a9 +0x29:  movl   $0x8,(%esp)
086d97b0 +0x30:  call   08725800 <__cxa_allocate_exception>
086d97b5 +0x35:  mov    %ebx,0x4(%esp)
086d97b9 +0x39:  mov    %eax,%esi
086d97bb +0x3b:  mov    %eax,(%esp)
086d97be +0x3e:  call   086da0e0 <_ZNSt8ios_base7failureC1ERKSs>  ; std::ios_base::failure::failure(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086d97c3 +0x43:  mov    -0x10(%ebp),%eax
086d97c6 +0x46:  sub    $0xc,%eax
086d97c9 +0x49:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086d97ce +0x4e:  jne    086d97e8 <+0x68>
086d97d0 +0x50:  movl   $&_ZNSt8ios_base7failureD1Ev,0x8(%esp)
086d97d8 +0x58:  movl   $&_ZTINSt8ios_base7failureE,0x4(%esp)
086d97e0 +0x60:  mov    %esi,(%esp)
086d97e3 +0x63:  call   08724c50 <__cxa_throw>
086d97e8 +0x68:  mov    $&data#bb92cc41(.plt),%edx
086d97ed +0x6d:  test   %edx,%edx
086d97ef +0x6f:  je     086d9816 <+0x96>
086d97f1 +0x71:  or     $0xffffffff,%edx
086d97f4 +0x74:  lock xadd %edx,0x8(%eax)
086d97f9 +0x79:  test   %edx,%edx
086d97fb +0x7b:  jg     086d97d0 <+0x50>
086d97fd +0x7d:  lea    -0xa(%ebp),%edx
086d9800 +0x80:  mov    %edx,0x4(%esp)
086d9804 +0x84:  mov    %eax,(%esp)
086d9807 +0x87:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
086d980c +0x8c:  jmp    086d97d0 <+0x50>
086d980e +0x8e:  mov    %eax,(%esp)
086d9811 +0x91:  call   08ae3750 <_Unwind_Resume>
086d9816 +0x96:  mov    0x8(%eax),%edx
086d9819 +0x99:  lea    -0x1(%edx),%ecx
086d981c +0x9c:  mov    %ecx,0x8(%eax)
086d981f +0x9f:  jmp    086d97f9 <+0x79>
086d9821 +0xa1:  nop
086d9822 +0xa2:  nop
086d9823 +0xa3:  nop
086d9824 +0xa4:  nop
086d9825 +0xa5:  nop
086d9826 +0xa6:  nop
086d9827 +0xa7:  nop
086d9828 +0xa8:  nop
086d9829 +0xa9:  nop
086d982a +0xaa:  nop
086d982b +0xab:  nop
086d982c +0xac:  nop
086d982d +0xad:  nop
086d982e +0xae:  nop
086d982f +0xaf:  nop
```

## 反编译 C

```c
// std::__throw_ios_failure @ 0x86d9780

/* WARNING: Removing unreachable block (ram,0x086d9816) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_ios_failure(char const*) */

void std::__throw_ios_failure(char *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  failure *this;
  int local_14;
  allocator local_d;
  
  pcVar3 = (char *)gettext(param_1);
                    /* try { // try from 086d97a4 to 086d97a8 has its CatchHandler @ 086d980e */
  string::string((string *)&local_14,pcVar3,&local_d);
  this = (failure *)__cxa_allocate_exception(8);
  ios_base::failure::failure(this,(string *)&local_14);
  if ((allocator *)(local_14 + -0xc) != (allocator *)&string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_14 + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      string::_Rep::_M_destroy((allocator *)(local_14 + -0xc));
    }
  }
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&ios_base::failure::typeinfo,ios_base::failure::~failure);
}
```
