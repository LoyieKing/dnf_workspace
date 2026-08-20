# global

`_ZNSt6locale6globalERKS_`

`std::locale::global(std::locale const&)`

| 类 | 地址 |
|---|---|
| `std::locale` | `0x086dce60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dce60  _ZNSt6locale6globalERKS_
#           std::locale::global(std::locale const&)
# range [0x086dce60, 0x086dd04f]
086dce60 +0x000:  push   %ebp
086dce61 +0x001:  mov    %esp,%ebp
086dce63 +0x003:  push   %edi
086dce64 +0x004:  push   %esi
086dce65 +0x005:  push   %ebx
086dce66 +0x006:  mov    $&data#bb92cc41(.plt),%ebx
086dce6b +0x00b:  sub    $0x3c,%esp
086dce6e +0x00e:  call   086dcdf0 <_ZNSt6locale13_S_initializeEv>  ; std::locale::_S_initialize()
086dce73 +0x013:  call   086dbd40 <_ZN12_GLOBAL__N_116get_locale_mutexEv>  ; (anonymous namespace)::get_locale_mutex()
086dce78 +0x018:  test   %ebx,%ebx
086dce7a +0x01a:  mov    %eax,%esi
086dce7c +0x01c:  je     086dcf57 <+0xf7>
086dce82 +0x022:  mov    %eax,(%esp)
086dce85 +0x025:  call   0807e1f0 <_init+0xae8>
086dce8a +0x02a:  test   %eax,%eax
086dce8c +0x02c:  jne    086dcf2d <+0xcd>
086dce92 +0x032:  mov    &_ZNSt6locale9_S_globalE,%eax
086dce97 +0x037:  mov    0xc(%ebp),%edx
086dce9a +0x03a:  mov    %eax,-0x2c(%ebp)
086dce9d +0x03d:  mov    (%edx),%eax
086dce9f +0x03f:  lock addl $0x1,(%eax)
086dcea3 +0x043:  mov    (%edx),%eax
086dcea5 +0x045:  mov    %eax,&_ZNSt6locale9_S_globalE
086dceaa +0x04a:  mov    0xc(%ebp),%eax
086dcead +0x04d:  lea    -0x20(%ebp),%edi
086dceb0 +0x050:  mov    %edi,(%esp)
086dceb3 +0x053:  mov    %eax,0x4(%esp)
086dceb7 +0x057:  call   086dafd0 <_ZNKSt6locale4nameEv>  ; std::locale::name() const
086dcebc +0x05c:  sub    $0x4,%esp
086dcebf +0x05f:  movl   $"*",0x4(%esp)
086dcec7 +0x067:  mov    %edi,(%esp)
086dceca +0x06a:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
086dcecf +0x06f:  test   %eax,%eax
086dced1 +0x071:  jne    086dcf18 <+0xb8>
086dced3 +0x073:  mov    -0x20(%ebp),%eax
086dced6 +0x076:  sub    $0xc,%eax
086dced9 +0x079:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086dcede +0x07e:  jne    086dcf97 <+0x137>
086dcee4 +0x084:  test   %ebx,%ebx
086dcee6 +0x086:  je     086dcef4 <+0x94>
086dcee8 +0x088:  mov    %esi,(%esp)
086dceeb +0x08b:  call   0807dee0 <_init+0x7d8>
086dcef0 +0x090:  test   %eax,%eax
086dcef2 +0x092:  jne    086dcf6d <+0x10d>
086dcef4 +0x094:  mov    0x8(%ebp),%eax
086dcef7 +0x097:  mov    -0x2c(%ebp),%edx
086dcefa +0x09a:  mov    %eax,(%esp)
086dcefd +0x09d:  mov    %edx,0x4(%esp)
086dcf01 +0x0a1:  call   086dad80 <_ZNSt6localeC1EPNS_5_ImplE>  ; std::locale::locale(std::locale::_Impl*)
086dcf06 +0x0a6:  mov    0x8(%ebp),%eax
086dcf09 +0x0a9:  lea    -0xc(%ebp),%esp
086dcf0c +0x0ac:  pop    %ebx
086dcf0d +0x0ad:  pop    %esi
086dcf0e +0x0ae:  pop    %edi
086dcf0f +0x0af:  pop    %ebp
086dcf10 +0x0b0:  ret    $0x4
086dcf13 +0x0b3:  nop
086dcf14 +0x0b4:  lea    0x0(%esi,%eiz,1),%esi
086dcf18 +0x0b8:  mov    -0x20(%ebp),%eax
086dcf1b +0x0bb:  movl   $0x6,(%esp)
086dcf22 +0x0c2:  mov    %eax,0x4(%esp)
086dcf26 +0x0c6:  call   0807e900 <_init+0x11f8>
086dcf2b +0x0cb:  jmp    086dced3 <+0x73>
086dcf2d +0x0cd:  movl   $0x4,(%esp)
086dcf34 +0x0d4:  call   08725800 <__cxa_allocate_exception>
086dcf39 +0x0d9:  movl   $&_ZTVN9__gnu_cxx24__concurrence_lock_errorE+0x8,(%eax)
086dcf3f +0x0df:  movl   $&_ZN9__gnu_cxx24__concurrence_lock_errorD1Ev,0x8(%esp)
086dcf47 +0x0e7:  movl   $&_ZTIN9__gnu_cxx24__concurrence_lock_errorE,0x4(%esp)
086dcf4f +0x0ef:  mov    %eax,(%esp)
086dcf52 +0x0f2:  call   08724c50 <__cxa_throw>
086dcf57 +0x0f7:  mov    &_ZNSt6locale9_S_globalE,%edx
086dcf5d +0x0fd:  mov    %edx,-0x2c(%ebp)
086dcf60 +0x100:  mov    0xc(%ebp),%edx
086dcf63 +0x103:  mov    (%edx),%eax
086dcf65 +0x105:  addl   $0x1,(%eax)
086dcf68 +0x108:  jmp    086dcea5 <+0x45>
086dcf6d +0x10d:  movl   $0x4,(%esp)
086dcf74 +0x114:  call   08725800 <__cxa_allocate_exception>
086dcf79 +0x119:  movl   $&_ZTVN9__gnu_cxx26__concurrence_unlock_errorE+0x8,(%eax)
086dcf7f +0x11f:  movl   $&_ZN9__gnu_cxx26__concurrence_unlock_errorD1Ev,0x8(%esp)
086dcf87 +0x127:  movl   $&_ZTIN9__gnu_cxx26__concurrence_unlock_errorE,0x4(%esp)
086dcf8f +0x12f:  mov    %eax,(%esp)
086dcf92 +0x132:  call   08724c50 <__cxa_throw>
086dcf97 +0x137:  test   %ebx,%ebx
086dcf99 +0x139:  je     086dcfce <+0x16e>
086dcf9b +0x13b:  or     $0xffffffff,%edx
086dcf9e +0x13e:  lock xadd %edx,0x8(%eax)
086dcfa3 +0x143:  test   %edx,%edx
086dcfa5 +0x145:  jg     086dcee4 <+0x84>
086dcfab +0x14b:  lea    -0x19(%ebp),%edx
086dcfae +0x14e:  mov    %edx,0x4(%esp)
086dcfb2 +0x152:  mov    %eax,(%esp)
086dcfb5 +0x155:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
086dcfba +0x15a:  jmp    086dcee4 <+0x84>
086dcfbf +0x15f:  cmp    $0xffffffff,%edx
086dcfc2 +0x162:  mov    %eax,%ecx
086dcfc4 +0x164:  je     086dcfd9 <+0x179>
086dcfc6 +0x166:  mov    %ecx,(%esp)
086dcfc9 +0x169:  call   08ae3750 <_Unwind_Resume>
086dcfce +0x16e:  mov    0x8(%eax),%edx
086dcfd1 +0x171:  lea    -0x1(%edx),%ecx
086dcfd4 +0x174:  mov    %ecx,0x8(%eax)
086dcfd7 +0x177:  jmp    086dcfa3 <+0x143>
086dcfd9 +0x179:  mov    %eax,(%esp)
086dcfdc +0x17c:  call   08723df0 <__cxa_call_unexpected>
086dcfe1 +0x181:  mov    %edi,(%esp)
086dcfe4 +0x184:  mov    %eax,-0x30(%ebp)
086dcfe7 +0x187:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086dcfec +0x18c:  mov    -0x30(%ebp),%ecx
086dcfef +0x18f:  test   %ebx,%ebx
086dcff1 +0x191:  je     086dcfc6 <+0x166>
086dcff3 +0x193:  mov    %ecx,-0x30(%ebp)
086dcff6 +0x196:  mov    %esi,(%esp)
086dcff9 +0x199:  call   0807dee0 <_init+0x7d8>
086dcffe +0x19e:  mov    -0x30(%ebp),%ecx
086dd001 +0x1a1:  test   %eax,%eax
086dd003 +0x1a3:  je     086dcfc6 <+0x166>
086dd005 +0x1a5:  movl   $0x4,(%esp)
086dd00c +0x1ac:  call   08725800 <__cxa_allocate_exception>
086dd011 +0x1b1:  movl   $&_ZTVN9__gnu_cxx26__concurrence_unlock_errorE+0x8,(%eax)
086dd017 +0x1b7:  movl   $&_ZN9__gnu_cxx26__concurrence_unlock_errorD1Ev,0x8(%esp)
086dd01f +0x1bf:  movl   $&_ZTIN9__gnu_cxx26__concurrence_unlock_errorE,0x4(%esp)
086dd027 +0x1c7:  mov    %eax,(%esp)
086dd02a +0x1ca:  call   08724c50 <__cxa_throw>
086dd02f +0x1cf:  mov    %eax,%ecx
086dd031 +0x1d1:  jmp    086dcfef <+0x18f>
086dd033 +0x1d3:  cmp    $0xffffffff,%edx
086dd036 +0x1d6:  mov    %eax,%ecx
086dd038 +0x1d8:  jne    086dcfc6 <+0x166>
086dd03a +0x1da:  mov    %eax,(%esp)
086dd03d +0x1dd:  call   08723df0 <__cxa_call_unexpected>
086dd042 +0x1e2:  nop
086dd043 +0x1e3:  nop
086dd044 +0x1e4:  nop
086dd045 +0x1e5:  nop
086dd046 +0x1e6:  nop
086dd047 +0x1e7:  nop
086dd048 +0x1e8:  nop
086dd049 +0x1e9:  nop
086dd04a +0x1ea:  nop
086dd04b +0x1eb:  nop
086dd04c +0x1ec:  nop
086dd04d +0x1ed:  nop
086dd04e +0x1ee:  nop
086dd04f +0x1ef:  nop
```

## 反编译 C

```c
// std::locale::global @ 0x86dce60

/* WARNING: Removing unreachable block (ram,0x086dcf57) */
/* WARNING: Removing unreachable block (ram,0x086dcfce) */
/* std::locale::global(std::locale const&) */

locale * __thiscall std::locale::global(locale *this,locale *param_1)

{
  int *piVar1;
  _Impl *p_Var2;
  pthread_mutex_t *__mutex;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *local_24;
  char local_1d [13];
  
  _S_initialize();
  __mutex = (pthread_mutex_t *)::(anonymous_namespace)::get_locale_mutex();
  iVar3 = pthread_mutex_lock(__mutex);
  p_Var2 = _S_global;
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = &PTR____concurrence_lock_error_08cfe090;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&__gnu_cxx::__concurrence_lock_error::typeinfo,
                __gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error);
  }
  LOCK();
  param_1->_M_impl->_M_refcount = param_1->_M_impl->_M_refcount + 1;
  UNLOCK();
  _S_global = param_1->_M_impl;
                    /* try { // try from 086dceb7 to 086dcebb has its CatchHandler @ 086dd02f */
  name();
  pcVar5 = "*";
                    /* try { // try from 086dceca to 086dcece has its CatchHandler @ 086dcfe1 */
  iVar3 = string::compare((string *)&local_24,"*");
  if (iVar3 != 0) {
    pcVar5 = local_24;
    setlocale(6,local_24);
  }
  if ((allocator *)(local_24 + -0xc) != (allocator *)&string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_24 + -4);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      pcVar5 = local_1d;
      string::_Rep::_M_destroy((allocator *)(local_24 + -0xc));
    }
  }
  iVar3 = pthread_mutex_unlock(__mutex);
  if (iVar3 == 0) {
    locale(this,p_Var2);
    return this;
  }
  puVar4 = (undefined4 *)__cxa_allocate_exception(4,pcVar5);
  *puVar4 = &PTR____concurrence_unlock_error_08cfe0f8;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 086dcf92 to 086dcf96 has its CatchHandler @ 086dcfbf */
  __cxa_throw(puVar4,&__gnu_cxx::__concurrence_unlock_error::typeinfo,
              __gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
}
```
