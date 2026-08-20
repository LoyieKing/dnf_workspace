# ~_Impl

`_ZNSt6locale5_ImplD1Ev`

`std::locale::_Impl::~_Impl()`

| 类 | 地址 |
|---|---|
| `std::locale::_Impl` | `0x086db910` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086db910  _ZNSt6locale5_ImplD1Ev
#           std::locale::_Impl::~_Impl()
# range [0x086db910, 0x086dba8f]
086db910 +0x000:  push   %ebp
086db911 +0x001:  mov    %esp,%ebp
086db913 +0x003:  push   %edi
086db914 +0x004:  push   %esi
086db915 +0x005:  push   %ebx
086db916 +0x006:  sub    $0x1c,%esp
086db919 +0x009:  mov    0x8(%ebp),%esi
086db91c +0x00c:  mov    0x4(%esi),%edx
086db91f +0x00f:  test   %edx,%edx
086db921 +0x011:  je     086db97c <+0x6c>
086db923 +0x013:  mov    0x8(%esi),%eax
086db926 +0x016:  test   %eax,%eax
086db928 +0x018:  je     086db974 <+0x64>
086db92a +0x01a:  xor    %ebx,%ebx
086db92c +0x01c:  mov    $&data#bb92cc41(.plt),%edi
086db931 +0x021:  jmp    086db943 <+0x33>
086db933 +0x023:  nop
086db934 +0x024:  lea    0x0(%esi,%eiz,1),%esi
086db938 +0x028:  mov    0x4(%esi),%edx
086db93b +0x02b:  add    $0x1,%ebx
086db93e +0x02e:  cmp    %ebx,0x8(%esi)
086db941 +0x031:  jbe    086db970 <+0x60>
086db943 +0x033:  mov    (%edx,%ebx,4),%eax
086db946 +0x036:  test   %eax,%eax
086db948 +0x038:  je     086db93b <+0x2b>
086db94a +0x03a:  test   %edi,%edi
086db94c +0x03c:  je     086dba23 <+0x113>
086db952 +0x042:  mov    $0xffffffff,%edx
086db957 +0x047:  lock xadd %edx,0x4(%eax)
086db95c +0x04c:  cmp    $0x1,%edx
086db95f +0x04f:  jne    086db938 <+0x28>
086db961 +0x051:  mov    (%eax),%edx
086db963 +0x053:  mov    %eax,(%esp)
086db966 +0x056:  call   *0x4(%edx)
086db969 +0x059:  jmp    086db938 <+0x28>
086db96b +0x05b:  nop
086db96c +0x05c:  lea    0x0(%esi,%eiz,1),%esi
086db970 +0x060:  test   %edx,%edx
086db972 +0x062:  je     086db97c <+0x6c>
086db974 +0x064:  mov    %edx,(%esp)
086db977 +0x067:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
086db97c +0x06c:  mov    0xc(%esi),%edx
086db97f +0x06f:  test   %edx,%edx
086db981 +0x071:  je     086db9d5 <+0xc5>
086db983 +0x073:  mov    0x8(%esi),%edi
086db986 +0x076:  test   %edi,%edi
086db988 +0x078:  je     086db9cc <+0xbc>
086db98a +0x07a:  xor    %ebx,%ebx
086db98c +0x07c:  mov    $&data#bb92cc41(.plt),%edi
086db991 +0x081:  jmp    086db9a3 <+0x93>
086db993 +0x083:  nop
086db994 +0x084:  lea    0x0(%esi,%eiz,1),%esi
086db998 +0x088:  mov    0xc(%esi),%edx
086db99b +0x08b:  add    $0x1,%ebx
086db99e +0x08e:  cmp    %ebx,0x8(%esi)
086db9a1 +0x091:  jbe    086db9c8 <+0xb8>
086db9a3 +0x093:  mov    (%edx,%ebx,4),%eax
086db9a6 +0x096:  test   %eax,%eax
086db9a8 +0x098:  je     086db99b <+0x8b>
086db9aa +0x09a:  test   %edi,%edi
086db9ac +0x09c:  je     086dba18 <+0x108>
086db9ae +0x09e:  mov    $0xffffffff,%edx
086db9b3 +0x0a3:  lock xadd %edx,0x4(%eax)
086db9b8 +0x0a8:  cmp    $0x1,%edx
086db9bb +0x0ab:  jne    086db998 <+0x88>
086db9bd +0x0ad:  mov    (%eax),%edx
086db9bf +0x0af:  mov    %eax,(%esp)
086db9c2 +0x0b2:  call   *0x4(%edx)
086db9c5 +0x0b5:  jmp    086db998 <+0x88>
086db9c7 +0x0b7:  nop
086db9c8 +0x0b8:  test   %edx,%edx
086db9ca +0x0ba:  je     086db9d5 <+0xc5>
086db9cc +0x0bc:  mov    %edx,(%esp)
086db9cf +0x0bf:  nop
086db9d0 +0x0c0:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
086db9d5 +0x0c5:  mov    0x10(%esi),%edx
086db9d8 +0x0c8:  test   %edx,%edx
086db9da +0x0ca:  je     086dba10 <+0x100>
086db9dc +0x0cc:  xor    %ebx,%ebx
086db9de +0x0ce:  xchg   %ax,%ax
086db9e0 +0x0d0:  mov    (%edx,%ebx,1),%eax
086db9e3 +0x0d3:  test   %eax,%eax
086db9e5 +0x0d5:  je     086db9f2 <+0xe2>
086db9e7 +0x0d7:  mov    %eax,(%esp)
086db9ea +0x0da:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
086db9ef +0x0df:  mov    0x10(%esi),%edx
086db9f2 +0x0e2:  add    $0x4,%ebx
086db9f5 +0x0e5:  cmp    $0x30,%ebx
086db9f8 +0x0e8:  jne    086db9e0 <+0xd0>
086db9fa +0x0ea:  test   %edx,%edx
086db9fc +0x0ec:  je     086dba10 <+0x100>
086db9fe +0x0ee:  mov    %edx,0x8(%ebp)
086dba01 +0x0f1:  add    $0x1c,%esp
086dba04 +0x0f4:  pop    %ebx
086dba05 +0x0f5:  pop    %esi
086dba06 +0x0f6:  pop    %edi
086dba07 +0x0f7:  pop    %ebp
086dba08 +0x0f8:  jmp    08724bb0 <_ZdaPv>  ; operator delete[](void*)
086dba0d +0x0fd:  lea    0x0(%esi),%esi
086dba10 +0x100:  add    $0x1c,%esp
086dba13 +0x103:  pop    %ebx
086dba14 +0x104:  pop    %esi
086dba15 +0x105:  pop    %edi
086dba16 +0x106:  pop    %ebp
086dba17 +0x107:  ret
086dba18 +0x108:  mov    0x4(%eax),%edx
086dba1b +0x10b:  lea    -0x1(%edx),%ecx
086dba1e +0x10e:  mov    %ecx,0x4(%eax)
086dba21 +0x111:  jmp    086db9b8 <+0xa8>
086dba23 +0x113:  mov    0x4(%eax),%edx
086dba26 +0x116:  lea    -0x1(%edx),%ecx
086dba29 +0x119:  mov    %ecx,0x4(%eax)
086dba2c +0x11c:  jmp    086db95c <+0x4c>
086dba31 +0x121:  mov    %eax,(%esp)
086dba34 +0x124:  call   08725ce0 <__cxa_begin_catch>
086dba39 +0x129:  call   08725c30 <__cxa_end_catch>
086dba3e +0x12e:  xchg   %ax,%ax
086dba40 +0x130:  jmp    086db998 <+0x88>
086dba45 +0x135:  mov    %eax,(%esp)
086dba48 +0x138:  call   08725ce0 <__cxa_begin_catch>
086dba4d +0x13d:  lea    0x0(%esi),%esi
086dba50 +0x140:  call   08725c30 <__cxa_end_catch>
086dba55 +0x145:  jmp    086db938 <+0x28>
086dba5a +0x14a:  cmp    $0xffffffff,%edx
086dba5d +0x14d:  lea    0x0(%esi),%esi
086dba60 +0x150:  je     086dba77 <+0x167>
086dba62 +0x152:  mov    %eax,(%esp)
086dba65 +0x155:  call   08ae3750 <_Unwind_Resume>
086dba6a +0x15a:  cmp    $0xffffffff,%edx
086dba6d +0x15d:  jne    086dba62 <+0x152>
086dba6f +0x15f:  mov    %eax,(%esp)
086dba72 +0x162:  call   08723df0 <__cxa_call_unexpected>
086dba77 +0x167:  mov    %eax,(%esp)
086dba7a +0x16a:  call   08723df0 <__cxa_call_unexpected>
086dba7f +0x16f:  cmp    $0xffffffff,%edx
086dba82 +0x172:  jne    086dba62 <+0x152>
086dba84 +0x174:  mov    %eax,(%esp)
086dba87 +0x177:  call   08723df0 <__cxa_call_unexpected>
086dba8c +0x17c:  nop
086dba8d +0x17d:  nop
086dba8e +0x17e:  nop
086dba8f +0x17f:  nop
```

## 反编译 C

```c
// std::locale::_Impl::~_Impl @ 0x86db910

/* WARNING: Removing unreachable block (ram,0x086dba23) */
/* WARNING: Removing unreachable block (ram,0x086dba18) */
/* std::locale::_Impl::~_Impl() */

void __thiscall std::locale::_Impl::~_Impl(_Impl *this)

{
  facet *pfVar1;
  facet *pfVar2;
  facet **ppfVar3;
  char **ppcVar4;
  uint uVar5;
  int iVar6;
  
  ppfVar3 = this->_M_facets;
  if (ppfVar3 != (facet **)0x0) {
    if (this->_M_facets_size != 0) {
      uVar5 = 0;
      do {
        pfVar2 = ppfVar3[uVar5];
        if (pfVar2 != (facet *)0x0) {
          LOCK();
          pfVar1 = pfVar2 + 4;
          iVar6 = *(int *)pfVar1;
          *(int *)pfVar1 = *(int *)pfVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
                    /* try { // try from 086db966 to 086db968 has its CatchHandler @ 086dba45 */
            (**(code **)(*(int *)pfVar2 + 4))(pfVar2);
          }
          ppfVar3 = this->_M_facets;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < this->_M_facets_size);
      if (ppfVar3 == (facet **)0x0) goto LAB_086db97c;
    }
    operator_delete__(ppfVar3);
  }
LAB_086db97c:
  ppfVar3 = this->_M_caches;
  if (ppfVar3 != (facet **)0x0) {
    if (this->_M_facets_size != 0) {
      uVar5 = 0;
      do {
        pfVar2 = ppfVar3[uVar5];
        if (pfVar2 != (facet *)0x0) {
          LOCK();
          pfVar1 = pfVar2 + 4;
          iVar6 = *(int *)pfVar1;
          *(int *)pfVar1 = *(int *)pfVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
                    /* try { // try from 086db9c2 to 086db9c4 has its CatchHandler @ 086dba31 */
            (**(code **)(*(int *)pfVar2 + 4))(pfVar2);
          }
          ppfVar3 = this->_M_caches;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < this->_M_facets_size);
      if (ppfVar3 == (facet **)0x0) goto LAB_086db9d5;
    }
    operator_delete__(ppfVar3);
  }
LAB_086db9d5:
  ppcVar4 = this->_M_names;
  if (ppcVar4 != (char **)0x0) {
    iVar6 = 0;
    do {
      if (*(void **)((int)ppcVar4 + iVar6) != (void *)0x0) {
        operator_delete__(*(void **)((int)ppcVar4 + iVar6));
        ppcVar4 = this->_M_names;
      }
      iVar6 = iVar6 + 4;
    } while (iVar6 != 0x30);
    if (ppcVar4 != (char **)0x0) {
      operator_delete__(ppcVar4);
      return;
    }
  }
  return;
}
```
