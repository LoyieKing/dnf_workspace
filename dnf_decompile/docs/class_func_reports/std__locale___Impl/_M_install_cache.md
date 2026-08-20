# _M_install_cache

`_ZNSt6locale5_Impl16_M_install_cacheEPKNS_5facetEj`

`std::locale::_Impl::_M_install_cache(std::locale::facet const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `std::locale::_Impl` | `0x086db260` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086db260  _ZNSt6locale5_Impl16_M_install_cacheEPKNS_5facetEj
#           std::locale::_Impl::_M_install_cache(std::locale::facet const*, unsigned int)
# range [0x086db260, 0x086db45f]
086db260 +0x000:  push   %ebp
086db261 +0x001:  mov    %esp,%ebp
086db263 +0x003:  sub    $0x58,%esp
086db266 +0x006:  mov    0x8(%ebp),%eax
086db269 +0x009:  mov    %gs:0x14,%edx
086db270 +0x010:  mov    %edx,-0x1c(%ebp)
086db273 +0x013:  xor    %edx,%edx
086db275 +0x015:  cmpb   $0x0,&_ZGVZN12_GLOBAL__N_122get_locale_cache_mutexEvE18locale_cache_mutex
086db27c +0x01c:  mov    %ebx,-0xc(%ebp)
086db27f +0x01f:  mov    $&data#bb92cc41(.plt),%ebx
086db284 +0x024:  mov    %esi,-0x8(%ebp)
086db287 +0x027:  mov    0xc(%ebp),%esi
086db28a +0x02a:  mov    %edi,-0x4(%ebp)
086db28d +0x02d:  mov    0x10(%ebp),%edi
086db290 +0x030:  mov    %eax,-0x3c(%ebp)
086db293 +0x033:  je     086db300 <+0xa0>
086db295 +0x035:  test   %ebx,%ebx
086db297 +0x037:  je     086db2ad <+0x4d>
086db299 +0x039:  movl   $&_ZZN12_GLOBAL__N_122get_locale_cache_mutexEvE18locale_cache_mutex,(%esp)
086db2a0 +0x040:  call   0807e1f0 <_init+0xae8>
086db2a5 +0x045:  test   %eax,%eax
086db2a7 +0x047:  jne    086db38b <+0x12b>
086db2ad +0x04d:  mov    -0x3c(%ebp),%edx
086db2b0 +0x050:  mov    0xc(%edx),%eax
086db2b3 +0x053:  mov    (%eax,%edi,4),%edx
086db2b6 +0x056:  test   %edx,%edx
086db2b8 +0x058:  je     086db370 <+0x110>
086db2be +0x05e:  test   %esi,%esi
086db2c0 +0x060:  je     086db2ca <+0x6a>
086db2c2 +0x062:  mov    (%esi),%eax
086db2c4 +0x064:  mov    %esi,(%esp)
086db2c7 +0x067:  call   *0x4(%eax)
086db2ca +0x06a:  test   %ebx,%ebx
086db2cc +0x06c:  je     086db2e2 <+0x82>
086db2ce +0x06e:  movl   $&_ZZN12_GLOBAL__N_122get_locale_cache_mutexEvE18locale_cache_mutex,(%esp)
086db2d5 +0x075:  call   0807dee0 <_init+0x7d8>
086db2da +0x07a:  test   %eax,%eax
086db2dc +0x07c:  jne    086db3b5 <+0x155>
086db2e2 +0x082:  mov    -0x1c(%ebp),%eax
086db2e5 +0x085:  xor    %gs:0x14,%eax
086db2ec +0x08c:  jne    086db3df <+0x17f>
086db2f2 +0x092:  mov    -0xc(%ebp),%ebx
086db2f5 +0x095:  mov    -0x8(%ebp),%esi
086db2f8 +0x098:  mov    -0x4(%ebp),%edi
086db2fb +0x09b:  mov    %ebp,%esp
086db2fd +0x09d:  pop    %ebp
086db2fe +0x09e:  ret
086db2ff +0x09f:  nop
086db300 +0x0a0:  movl   $&_ZGVZN12_GLOBAL__N_122get_locale_cache_mutexEvE18locale_cache_mutex,(%esp)
086db307 +0x0a7:  call   08725330 <__cxa_guard_acquire>
086db30c +0x0ac:  test   %eax,%eax
086db30e +0x0ae:  je     086db295 <+0x35>
086db310 +0x0b0:  test   %ebx,%ebx
086db312 +0x0b2:  je     086db358 <+0xf8>
086db314 +0x0b4:  lea    -0x34(%ebp),%edx
086db317 +0x0b7:  xor    %eax,%eax
086db319 +0x0b9:  movl   $0x0,(%edx,%eax,1)
086db320 +0x0c0:  add    $0x4,%eax
086db323 +0x0c3:  cmp    $0x18,%eax
086db326 +0x0c6:  jb     086db319 <+0xb9>
086db328 +0x0c8:  mov    -0x34(%ebp),%eax
086db32b +0x0cb:  mov    %eax,&_ZZN12_GLOBAL__N_122get_locale_cache_mutexEvE18locale_cache_mutex
086db330 +0x0d0:  mov    -0x30(%ebp),%eax
086db333 +0x0d3:  mov    %eax,&_ZZN12_GLOBAL__N_122get_locale_cache_mutexEvE18locale_cache_mutex+0x4
086db338 +0x0d8:  mov    -0x2c(%ebp),%eax
086db33b +0x0db:  mov    %eax,&_ZZN12_GLOBAL__N_122get_locale_cache_mutexEvE18locale_cache_mutex+0x8
086db340 +0x0e0:  mov    -0x28(%ebp),%eax
086db343 +0x0e3:  mov    %eax,&_ZZN12_GLOBAL__N_122get_locale_cache_mutexEvE18locale_cache_mutex+0xc
086db348 +0x0e8:  mov    -0x24(%ebp),%eax
086db34b +0x0eb:  mov    %eax,&_ZZN12_GLOBAL__N_122get_locale_cache_mutexEvE18locale_cache_mutex+0x10
086db350 +0x0f0:  mov    -0x20(%ebp),%eax
086db353 +0x0f3:  mov    %eax,&_ZZN12_GLOBAL__N_122get_locale_cache_mutexEvE18locale_cache_mutex+0x14
086db358 +0x0f8:  movl   $&_ZGVZN12_GLOBAL__N_122get_locale_cache_mutexEvE18locale_cache_mutex,(%esp)
086db35f +0x0ff:  call   08725250 <__cxa_guard_release>
086db364 +0x104:  jmp    086db295 <+0x35>
086db369 +0x109:  lea    0x0(%esi,%eiz,1),%esi
086db370 +0x110:  test   %ebx,%ebx
086db372 +0x112:  je     086db42c <+0x1cc>
086db378 +0x118:  lock addl $0x1,0x4(%esi)
086db37d +0x11d:  mov    -0x3c(%ebp),%edx
086db380 +0x120:  mov    0xc(%edx),%eax
086db383 +0x123:  mov    %esi,(%eax,%edi,4)
086db386 +0x126:  jmp    086db2ca <+0x6a>
086db38b +0x12b:  movl   $0x4,(%esp)
086db392 +0x132:  call   08725800 <__cxa_allocate_exception>
086db397 +0x137:  movl   $&_ZTVN9__gnu_cxx24__concurrence_lock_errorE+0x8,(%eax)
086db39d +0x13d:  movl   $&_ZN9__gnu_cxx24__concurrence_lock_errorD1Ev,0x8(%esp)
086db3a5 +0x145:  movl   $&_ZTIN9__gnu_cxx24__concurrence_lock_errorE,0x4(%esp)
086db3ad +0x14d:  mov    %eax,(%esp)
086db3b0 +0x150:  call   08724c50 <__cxa_throw>
086db3b5 +0x155:  movl   $0x4,(%esp)
086db3bc +0x15c:  call   08725800 <__cxa_allocate_exception>
086db3c1 +0x161:  movl   $&_ZTVN9__gnu_cxx26__concurrence_unlock_errorE+0x8,(%eax)
086db3c7 +0x167:  movl   $&_ZN9__gnu_cxx26__concurrence_unlock_errorD1Ev,0x8(%esp)
086db3cf +0x16f:  movl   $&_ZTIN9__gnu_cxx26__concurrence_unlock_errorE,0x4(%esp)
086db3d7 +0x177:  mov    %eax,(%esp)
086db3da +0x17a:  call   08724c50 <__cxa_throw>
086db3df +0x17f:  call   0807d980 <_init+0x278>
086db3e4 +0x184:  test   %ebx,%ebx
086db3e6 +0x186:  mov    %eax,%esi
086db3e8 +0x188:  je     086db3fa <+0x19a>
086db3ea +0x18a:  movl   $&_ZZN12_GLOBAL__N_122get_locale_cache_mutexEvE18locale_cache_mutex,(%esp)
086db3f1 +0x191:  call   0807dee0 <_init+0x7d8>
086db3f6 +0x196:  test   %eax,%eax
086db3f8 +0x198:  jne    086db402 <+0x1a2>
086db3fa +0x19a:  mov    %esi,(%esp)
086db3fd +0x19d:  call   08ae3750 <_Unwind_Resume>
086db402 +0x1a2:  movl   $0x4,(%esp)
086db409 +0x1a9:  call   08725800 <__cxa_allocate_exception>
086db40e +0x1ae:  movl   $&_ZTVN9__gnu_cxx26__concurrence_unlock_errorE+0x8,(%eax)
086db414 +0x1b4:  movl   $&_ZN9__gnu_cxx26__concurrence_unlock_errorD1Ev,0x8(%esp)
086db41c +0x1bc:  movl   $&_ZTIN9__gnu_cxx26__concurrence_unlock_errorE,0x4(%esp)
086db424 +0x1c4:  mov    %eax,(%esp)
086db427 +0x1c7:  call   08724c50 <__cxa_throw>
086db42c +0x1cc:  addl   $0x1,0x4(%esi)
086db430 +0x1d0:  jmp    086db383 <+0x123>
086db435 +0x1d5:  cmp    $0xffffffff,%edx
086db438 +0x1d8:  je     086db44f <+0x1ef>
086db43a +0x1da:  mov    %eax,(%esp)
086db43d +0x1dd:  call   08ae3750 <_Unwind_Resume>
086db442 +0x1e2:  cmp    $0xffffffff,%edx
086db445 +0x1e5:  jne    086db43a <+0x1da>
086db447 +0x1e7:  mov    %eax,(%esp)
086db44a +0x1ea:  call   08723df0 <__cxa_call_unexpected>
086db44f +0x1ef:  mov    %eax,(%esp)
086db452 +0x1f2:  call   08723df0 <__cxa_call_unexpected>
086db457 +0x1f7:  nop
086db458 +0x1f8:  nop
086db459 +0x1f9:  nop
086db45a +0x1fa:  nop
086db45b +0x1fb:  nop
086db45c +0x1fc:  nop
086db45d +0x1fd:  nop
086db45e +0x1fe:  nop
086db45f +0x1ff:  nop
```

## 反编译 C

```c
// std::locale::_Impl::_M_install_cache @ 0x86db260

/* WARNING: Removing unreachable block (ram,0x086db42c) */
/* std::locale::_Impl::_M_install_cache(std::locale::facet const*, unsigned int) */

void __thiscall std::locale::_Impl::_M_install_cache(_Impl *this,facet *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_GS_OFFSET;
  undefined4 local_38 [6];
  int local_20;
  
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  if ((::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex == '\0') &&
     (iVar1 = __cxa_guard_acquire(&::(anonymous_namespace)::get_locale_cache_mutex()::
                                   locale_cache_mutex), iVar1 != 0)) {
    uVar2 = 0;
    do {
      *(undefined4 *)((int)local_38 + uVar2) = 0;
      uVar2 = uVar2 + 4;
    } while (uVar2 < 0x18);
    ::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex._0_4_ = local_38[0];
    ::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex._4_4_ = local_38[1];
    ::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex._8_4_ = local_38[2];
    ::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex._12_4_ = local_38[3];
    ::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex._16_4_ = local_38[4];
    ::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex._20_4_ = local_38[5];
    __cxa_guard_release(&::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex);
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)
                             ::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = &PTR____concurrence_lock_error_08cfe090;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&__gnu_cxx::__concurrence_lock_error::typeinfo,
                __gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error);
  }
  if (this->_M_caches[param_2] == (facet *)0x0) {
    LOCK();
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    UNLOCK();
    this->_M_caches[param_2] = param_1;
  }
  else if (param_1 != (facet *)0x0) {
                    /* try { // try from 086db2c7 to 086db2c9 has its CatchHandler @ 086db3e4 */
    (**(code **)(*(int *)param_1 + 4))(param_1);
  }
  iVar1 = pthread_mutex_unlock
                    ((pthread_mutex_t *)
                     ::(anonymous_namespace)::get_locale_cache_mutex()::locale_cache_mutex);
  if (iVar1 == 0) {
    if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  puVar3 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar3 = &PTR____concurrence_unlock_error_08cfe0f8;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 086db3da to 086db3de has its CatchHandler @ 086db435 */
  __cxa_throw(puVar3,&__gnu_cxx::__concurrence_unlock_error::typeinfo,
              __gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
}
```
