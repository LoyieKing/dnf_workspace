# locale

`_ZNSt6localeC1Ev`

`std::locale::locale()`

| 类 | 地址 |
|---|---|
| `std::locale` | `0x086dd050` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd050  _ZNSt6localeC1Ev
#           std::locale::locale()
# range [0x086dd050, 0x086dd15f]
086dd050 +0x000:  push   %ebp
086dd051 +0x001:  mov    %esp,%ebp
086dd053 +0x003:  push   %esi
086dd054 +0x004:  push   %ebx
086dd055 +0x005:  sub    $0x10,%esp
086dd058 +0x008:  mov    0x8(%ebp),%ebx
086dd05b +0x00b:  movl   $0x0,(%ebx)
086dd061 +0x011:  call   086dcdf0 <_ZNSt6locale13_S_initializeEv>  ; std::locale::_S_initialize()
086dd066 +0x016:  mov    &_ZNSt6locale9_S_globalE,%eax
086dd06b +0x01b:  cmp    &_ZNSt6locale10_S_classicE,%eax
086dd071 +0x021:  mov    %eax,(%ebx)
086dd073 +0x023:  je     086dd0b8 <+0x68>
086dd075 +0x025:  call   086dbd40 <_ZN12_GLOBAL__N_116get_locale_mutexEv>  ; (anonymous namespace)::get_locale_mutex()
086dd07a +0x02a:  mov    %eax,%esi
086dd07c +0x02c:  mov    $&data#bb92cc41(.plt),%eax
086dd081 +0x031:  test   %eax,%eax
086dd083 +0x033:  je     086dd120 <+0xd0>
086dd089 +0x039:  mov    %esi,(%esp)
086dd08c +0x03c:  call   0807e1f0 <_init+0xae8>
086dd091 +0x041:  test   %eax,%eax
086dd093 +0x043:  jne    086dd0f6 <+0xa6>
086dd095 +0x045:  mov    &_ZNSt6locale9_S_globalE,%eax
086dd09a +0x04a:  lock addl $0x1,(%eax)
086dd09e +0x04e:  mov    &_ZNSt6locale9_S_globalE,%eax
086dd0a3 +0x053:  mov    %eax,(%ebx)
086dd0a5 +0x055:  mov    %esi,(%esp)
086dd0a8 +0x058:  call   0807dee0 <_init+0x7d8>
086dd0ad +0x05d:  test   %eax,%eax
086dd0af +0x05f:  jne    086dd0cc <+0x7c>
086dd0b1 +0x061:  add    $0x10,%esp
086dd0b4 +0x064:  pop    %ebx
086dd0b5 +0x065:  pop    %esi
086dd0b6 +0x066:  pop    %ebp
086dd0b7 +0x067:  ret
086dd0b8 +0x068:  mov    $&data#bb92cc41(.plt),%edx
086dd0bd +0x06d:  test   %edx,%edx
086dd0bf +0x06f:  je     086dd12c <+0xdc>
086dd0c1 +0x071:  lock addl $0x1,(%eax)
086dd0c5 +0x075:  add    $0x10,%esp
086dd0c8 +0x078:  pop    %ebx
086dd0c9 +0x079:  pop    %esi
086dd0ca +0x07a:  pop    %ebp
086dd0cb +0x07b:  ret
086dd0cc +0x07c:  movl   $0x4,(%esp)
086dd0d3 +0x083:  call   08725800 <__cxa_allocate_exception>
086dd0d8 +0x088:  movl   $&_ZTVN9__gnu_cxx26__concurrence_unlock_errorE+0x8,(%eax)
086dd0de +0x08e:  movl   $&_ZN9__gnu_cxx26__concurrence_unlock_errorD1Ev,0x8(%esp)
086dd0e6 +0x096:  movl   $&_ZTIN9__gnu_cxx26__concurrence_unlock_errorE,0x4(%esp)
086dd0ee +0x09e:  mov    %eax,(%esp)
086dd0f1 +0x0a1:  call   08724c50 <__cxa_throw>
086dd0f6 +0x0a6:  movl   $0x4,(%esp)
086dd0fd +0x0ad:  call   08725800 <__cxa_allocate_exception>
086dd102 +0x0b2:  movl   $&_ZTVN9__gnu_cxx24__concurrence_lock_errorE+0x8,(%eax)
086dd108 +0x0b8:  movl   $&_ZN9__gnu_cxx24__concurrence_lock_errorD1Ev,0x8(%esp)
086dd110 +0x0c0:  movl   $&_ZTIN9__gnu_cxx24__concurrence_lock_errorE,0x4(%esp)
086dd118 +0x0c8:  mov    %eax,(%esp)
086dd11b +0x0cb:  call   08724c50 <__cxa_throw>
086dd120 +0x0d0:  mov    &_ZNSt6locale9_S_globalE,%eax
086dd125 +0x0d5:  addl   $0x1,(%eax)
086dd128 +0x0d8:  mov    %eax,(%ebx)
086dd12a +0x0da:  jmp    086dd0b1 <+0x61>
086dd12c +0x0dc:  addl   $0x1,(%eax)
086dd12f +0x0df:  jmp    086dd0b1 <+0x61>
086dd131 +0x0e1:  cmp    $0xffffffff,%edx
086dd134 +0x0e4:  je     086dd14b <+0xfb>
086dd136 +0x0e6:  mov    %eax,(%esp)
086dd139 +0x0e9:  call   08ae3750 <_Unwind_Resume>
086dd13e +0x0ee:  cmp    $0xffffffff,%edx
086dd141 +0x0f1:  jne    086dd136 <+0xe6>
086dd143 +0x0f3:  mov    %eax,(%esp)
086dd146 +0x0f6:  call   08723df0 <__cxa_call_unexpected>
086dd14b +0x0fb:  mov    %eax,(%esp)
086dd14e +0x0fe:  call   08723df0 <__cxa_call_unexpected>
086dd153 +0x103:  nop
086dd154 +0x104:  nop
086dd155 +0x105:  nop
086dd156 +0x106:  nop
086dd157 +0x107:  nop
086dd158 +0x108:  nop
086dd159 +0x109:  nop
086dd15a +0x10a:  nop
086dd15b +0x10b:  nop
086dd15c +0x10c:  nop
086dd15d +0x10d:  nop
086dd15e +0x10e:  nop
086dd15f +0x10f:  nop
```

## 反编译 C

```c
// std::locale::locale @ 0x86dd050

/* WARNING: Removing unreachable block (ram,0x086dd120) */
/* WARNING: Removing unreachable block (ram,0x086dd12c) */
/* std::locale::locale() */

void __thiscall std::locale::locale(locale *this)

{
  _Impl *p_Var1;
  pthread_mutex_t *__mutex;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  this->_M_impl = (_Impl *)0x0;
                    /* try { // try from 086dd061 to 086dd065 has its CatchHandler @ 086dd13e */
  _S_initialize();
  p_Var1 = _S_global;
  bVar4 = _S_global == _S_classic;
  this->_M_impl = _S_global;
  if (bVar4) {
    LOCK();
    p_Var1->_M_refcount = p_Var1->_M_refcount + 1;
    UNLOCK();
    return;
  }
  __mutex = (pthread_mutex_t *)::(anonymous_namespace)::get_locale_mutex();
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 == 0) {
    LOCK();
    _S_global->_M_refcount = _S_global->_M_refcount + 1;
    UNLOCK();
    this->_M_impl = _S_global;
    iVar2 = pthread_mutex_unlock(__mutex);
    if (iVar2 == 0) {
      return;
    }
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = &PTR____concurrence_unlock_error_08cfe0f8;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 086dd0f1 to 086dd0f5 has its CatchHandler @ 086dd131 */
    __cxa_throw(puVar3,&__gnu_cxx::__concurrence_unlock_error::typeinfo,
                __gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
  }
  puVar3 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar3 = &PTR____concurrence_lock_error_08cfe090;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 086dd11b to 086dd11f has its CatchHandler @ 086dd13e */
  __cxa_throw(puVar3,&__gnu_cxx::__concurrence_lock_error::typeinfo,
              __gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error);
}
```
