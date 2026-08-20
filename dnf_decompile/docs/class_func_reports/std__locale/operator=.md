# operator=

`_ZNSt6localeaSERKS_`

`std::locale::operator=(std::locale const&)`

| 类 | 地址 |
|---|---|
| `std::locale` | `0x086dba90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dba90  _ZNSt6localeaSERKS_
#           std::locale::operator=(std::locale const&)
# range [0x086dba90, 0x086dbb1f]
086dba90 +0x00:  push   %ebp
086dba91 +0x01:  mov    $&data#bb92cc41(.plt),%edx
086dba96 +0x06:  mov    %esp,%ebp
086dba98 +0x08:  sub    $0x28,%esp
086dba9b +0x0b:  mov    %ebx,-0xc(%ebp)
086dba9e +0x0e:  mov    0xc(%ebp),%ebx
086dbaa1 +0x11:  test   %edx,%edx
086dbaa3 +0x13:  mov    %edi,-0x4(%ebp)
086dbaa6 +0x16:  mov    0x8(%ebp),%edi
086dbaa9 +0x19:  mov    %esi,-0x8(%ebp)
086dbaac +0x1c:  mov    (%ebx),%eax
086dbaae +0x1e:  je     086dbaee <+0x5e>
086dbab0 +0x20:  lock addl $0x1,(%eax)
086dbab4 +0x24:  mov    $0xffffffff,%eax
086dbab9 +0x29:  mov    (%edi),%esi
086dbabb +0x2b:  lock xadd %eax,(%esi)
086dbabf +0x2f:  cmp    $0x1,%eax
086dbac2 +0x32:  je     086dbad8 <+0x48>
086dbac4 +0x34:  mov    (%ebx),%eax
086dbac6 +0x36:  mov    %eax,(%edi)
086dbac8 +0x38:  mov    %edi,%eax
086dbaca +0x3a:  mov    -0xc(%ebp),%ebx
086dbacd +0x3d:  mov    -0x8(%ebp),%esi
086dbad0 +0x40:  mov    -0x4(%ebp),%edi
086dbad3 +0x43:  mov    %ebp,%esp
086dbad5 +0x45:  pop    %ebp
086dbad6 +0x46:  ret
086dbad7 +0x47:  nop
086dbad8 +0x48:  test   %esi,%esi
086dbada +0x4a:  je     086dbac4 <+0x34>
086dbadc +0x4c:  mov    %esi,(%esp)
086dbadf +0x4f:  call   086db910 <_ZNSt6locale5_ImplD1Ev>  ; std::locale::_Impl::~_Impl()
086dbae4 +0x54:  mov    %esi,(%esp)
086dbae7 +0x57:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086dbaec +0x5c:  jmp    086dbac4 <+0x34>
086dbaee +0x5e:  mov    (%edi),%esi
086dbaf0 +0x60:  addl   $0x1,(%eax)
086dbaf3 +0x63:  mov    (%esi),%eax
086dbaf5 +0x65:  lea    -0x1(%eax),%edx
086dbaf8 +0x68:  mov    %edx,(%esi)
086dbafa +0x6a:  jmp    086dbabf <+0x2f>
086dbafc +0x6c:  cmp    $0xffffffff,%edx
086dbaff +0x6f:  je     086dbb09 <+0x79>
086dbb01 +0x71:  mov    %eax,(%esp)
086dbb04 +0x74:  call   08ae3750 <_Unwind_Resume>
086dbb09 +0x79:  mov    %eax,(%esp)
086dbb0c +0x7c:  call   08723df0 <__cxa_call_unexpected>
086dbb11 +0x81:  nop
086dbb12 +0x82:  nop
086dbb13 +0x83:  nop
086dbb14 +0x84:  nop
086dbb15 +0x85:  nop
086dbb16 +0x86:  nop
086dbb17 +0x87:  nop
086dbb18 +0x88:  nop
086dbb19 +0x89:  nop
086dbb1a +0x8a:  nop
086dbb1b +0x8b:  nop
086dbb1c +0x8c:  nop
086dbb1d +0x8d:  nop
086dbb1e +0x8e:  nop
086dbb1f +0x8f:  nop
```

## 反编译 C

```c
// std::locale::operator= @ 0x86dba90

/* WARNING: Removing unreachable block (ram,0x086dbaee) */
/* std::locale::TEMPNAMEPLACEHOLDERVALUE(std::locale const&) */

locale * __thiscall std::locale::operator=(locale *this,locale *param_1)

{
  int iVar1;
  _Impl *this_00;
  
  LOCK();
  param_1->_M_impl->_M_refcount = param_1->_M_impl->_M_refcount + 1;
  UNLOCK();
  this_00 = this->_M_impl;
  LOCK();
  iVar1 = this_00->_M_refcount;
  this_00->_M_refcount = this_00->_M_refcount + -1;
  UNLOCK();
  if ((iVar1 == 1) && (this_00 != (_Impl *)0x0)) {
                    /* try { // try from 086dbadf to 086dbae3 has its CatchHandler @ 086dbafc */
    _Impl::~_Impl(this_00);
    operator_delete(this_00);
  }
  this->_M_impl = param_1->_M_impl;
  return this;
}
```
