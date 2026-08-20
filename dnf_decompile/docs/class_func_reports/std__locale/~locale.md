# ~locale

`_ZNSt6localeD1Ev`

`std::locale::~locale()`

| 类 | 地址 |
|---|---|
| `std::locale` | `0x086dbcd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dbcd0  _ZNSt6localeD1Ev
#           std::locale::~locale()
# range [0x086dbcd0, 0x086dbd3f]
086dbcd0 +0x00:  push   %ebp
086dbcd1 +0x01:  mov    %esp,%ebp
086dbcd3 +0x03:  push   %ebx
086dbcd4 +0x04:  sub    $0x14,%esp
086dbcd7 +0x07:  mov    0x8(%ebp),%eax
086dbcda +0x0a:  mov    (%eax),%ebx
086dbcdc +0x0c:  mov    $&data#bb92cc41(.plt),%eax
086dbce1 +0x11:  test   %eax,%eax
086dbce3 +0x13:  je     086dbd19 <+0x49>
086dbce5 +0x15:  mov    $0xffffffff,%eax
086dbcea +0x1a:  lock xadd %eax,(%ebx)
086dbcee +0x1e:  cmp    $0x1,%eax
086dbcf1 +0x21:  je     086dbd00 <+0x30>
086dbcf3 +0x23:  add    $0x14,%esp
086dbcf6 +0x26:  pop    %ebx
086dbcf7 +0x27:  pop    %ebp
086dbcf8 +0x28:  ret
086dbcf9 +0x29:  lea    0x0(%esi,%eiz,1),%esi
086dbd00 +0x30:  test   %ebx,%ebx
086dbd02 +0x32:  je     086dbcf3 <+0x23>
086dbd04 +0x34:  mov    %ebx,(%esp)
086dbd07 +0x37:  call   086db910 <_ZNSt6locale5_ImplD1Ev>  ; std::locale::_Impl::~_Impl()
086dbd0c +0x3c:  mov    %ebx,0x8(%ebp)
086dbd0f +0x3f:  add    $0x14,%esp
086dbd12 +0x42:  pop    %ebx
086dbd13 +0x43:  pop    %ebp
086dbd14 +0x44:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086dbd19 +0x49:  mov    (%ebx),%eax
086dbd1b +0x4b:  lea    -0x1(%eax),%edx
086dbd1e +0x4e:  mov    %edx,(%ebx)
086dbd20 +0x50:  jmp    086dbcee <+0x1e>
086dbd22 +0x52:  cmp    $0xffffffff,%edx
086dbd25 +0x55:  je     086dbd2f <+0x5f>
086dbd27 +0x57:  mov    %eax,(%esp)
086dbd2a +0x5a:  call   08ae3750 <_Unwind_Resume>
086dbd2f +0x5f:  mov    %eax,(%esp)
086dbd32 +0x62:  call   08723df0 <__cxa_call_unexpected>
086dbd37 +0x67:  nop
086dbd38 +0x68:  nop
086dbd39 +0x69:  nop
086dbd3a +0x6a:  nop
086dbd3b +0x6b:  nop
086dbd3c +0x6c:  nop
086dbd3d +0x6d:  nop
086dbd3e +0x6e:  nop
086dbd3f +0x6f:  nop
```

## 反编译 C

```c
// std::locale::~locale @ 0x86dbcd0

/* WARNING: Removing unreachable block (ram,0x086dbd19) */
/* std::locale::~locale() */

void __thiscall std::locale::~locale(locale *this)

{
  int iVar1;
  _Impl *this_00;
  
  this_00 = this->_M_impl;
  LOCK();
  iVar1 = this_00->_M_refcount;
  this_00->_M_refcount = this_00->_M_refcount + -1;
  UNLOCK();
  if ((iVar1 == 1) && (this_00 != (_Impl *)0x0)) {
                    /* try { // try from 086dbd07 to 086dbd0b has its CatchHandler @ 086dbd22 */
    _Impl::~_Impl(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}
```
