# _M_install_facet

`_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE`

`std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)`

| 类 | 地址 |
|---|---|
| `std::locale::_Impl` | `0x086db600` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086db600  _ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE
#           std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
# range [0x086db600, 0x086db86f]
086db600 +0x000:  push   %ebp
086db601 +0x001:  mov    %esp,%ebp
086db603 +0x003:  push   %edi
086db604 +0x004:  push   %esi
086db605 +0x005:  push   %ebx
086db606 +0x006:  sub    $0x3c,%esp
086db609 +0x009:  mov    0x10(%ebp),%ebx
086db60c +0x00c:  mov    0x8(%ebp),%esi
086db60f +0x00f:  test   %ebx,%ebx
086db611 +0x011:  je     086db6d8 <+0xd8>
086db617 +0x017:  mov    0xc(%ebp),%eax
086db61a +0x01a:  mov    %eax,(%esp)
086db61d +0x01d:  call   086dadb0 <_ZNKSt6locale2id5_M_idEv>  ; std::locale::id::_M_id() const
086db622 +0x022:  mov    %eax,-0x1c(%ebp)
086db625 +0x025:  mov    0x8(%esi),%eax
086db628 +0x028:  sub    $0x1,%eax
086db62b +0x02b:  cmp    %eax,-0x1c(%ebp)
086db62e +0x02e:  ja     086db6e0 <+0xe0>
086db634 +0x034:  mov    $&data#bb92cc41(.plt),%eax
086db639 +0x039:  test   %eax,%eax
086db63b +0x03b:  je     086db857 <+0x257>
086db641 +0x041:  mov    0x10(%ebp),%edx
086db644 +0x044:  lock addl $0x1,0x4(%edx)
086db649 +0x049:  mov    -0x1c(%ebp),%ebx
086db64c +0x04c:  shl    $0x2,%ebx
086db64f +0x04f:  add    0x4(%esi),%ebx
086db652 +0x052:  mov    (%ebx),%eax
086db654 +0x054:  test   %eax,%eax
086db656 +0x056:  je     086db7b8 <+0x1b8>
086db65c +0x05c:  mov    $&data#bb92cc41(.plt),%edx
086db661 +0x061:  test   %edx,%edx
086db663 +0x063:  je     086db7f5 <+0x1f5>
086db669 +0x069:  mov    $0xffffffff,%edx
086db66e +0x06e:  lock xadd %edx,0x4(%eax)
086db673 +0x073:  cmp    $0x1,%edx
086db676 +0x076:  je     086db7c8 <+0x1c8>
086db67c +0x07c:  mov    0x10(%ebp),%eax
086db67f +0x07f:  mov    %eax,(%ebx)
086db681 +0x081:  mov    0x8(%esi),%eax
086db684 +0x084:  test   %eax,%eax
086db686 +0x086:  je     086db6d8 <+0xd8>
086db688 +0x088:  xor    %ebx,%ebx
086db68a +0x08a:  mov    0xc(%esi),%edx
086db68d +0x08d:  jmp    086db6a2 <+0xa2>
086db68f +0x08f:  nop
086db690 +0x090:  mov    0xc(%esi),%edx
086db693 +0x093:  movl   $0x0,(%edx,%edi,1)
086db69a +0x09a:  add    $0x1,%ebx
086db69d +0x09d:  cmp    %ebx,0x8(%esi)
086db6a0 +0x0a0:  jbe    086db6d8 <+0xd8>
086db6a2 +0x0a2:  mov    (%edx,%ebx,4),%eax
086db6a5 +0x0a5:  lea    0x0(,%ebx,4),%edi
086db6ac +0x0ac:  test   %eax,%eax
086db6ae +0x0ae:  je     086db69a <+0x9a>
086db6b0 +0x0b0:  mov    $&data#bb92cc41(.plt),%edx
086db6b5 +0x0b5:  test   %edx,%edx
086db6b7 +0x0b7:  je     086db7d5 <+0x1d5>
086db6bd +0x0bd:  mov    $0xffffffff,%edx
086db6c2 +0x0c2:  lock xadd %edx,0x4(%eax)
086db6c7 +0x0c7:  cmp    $0x1,%edx
086db6ca +0x0ca:  jne    086db690 <+0x90>
086db6cc +0x0cc:  mov    (%eax),%edx
086db6ce +0x0ce:  mov    %eax,(%esp)
086db6d1 +0x0d1:  call   *0x4(%edx)
086db6d4 +0x0d4:  jmp    086db690 <+0x90>
086db6d6 +0x0d6:  xchg   %ax,%ax
086db6d8 +0x0d8:  add    $0x3c,%esp
086db6db +0x0db:  pop    %ebx
086db6dc +0x0dc:  pop    %esi
086db6dd +0x0dd:  pop    %edi
086db6de +0x0de:  pop    %ebp
086db6df +0x0df:  ret
086db6e0 +0x0e0:  mov    -0x1c(%ebp),%eax
086db6e3 +0x0e3:  mov    0x4(%esi),%edx
086db6e6 +0x0e6:  add    $0x4,%eax
086db6e9 +0x0e9:  mov    %eax,-0x20(%ebp)
086db6ec +0x0ec:  shl    $0x2,%eax
086db6ef +0x0ef:  mov    %edx,-0x2c(%ebp)
086db6f2 +0x0f2:  mov    %eax,-0x24(%ebp)
086db6f5 +0x0f5:  mov    %eax,(%esp)
086db6f8 +0x0f8:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
086db6fd +0x0fd:  mov    %eax,%ebx
086db6ff +0x0ff:  mov    0x8(%esi),%eax
086db702 +0x102:  test   %eax,%eax
086db704 +0x104:  je     086db71d <+0x11d>
086db706 +0x106:  mov    0x4(%esi),%edi
086db709 +0x109:  xor    %edx,%edx
086db70b +0x10b:  nop
086db70c +0x10c:  lea    0x0(%esi,%eiz,1),%esi
086db710 +0x110:  mov    (%edi,%edx,4),%ecx
086db713 +0x113:  mov    %ecx,(%ebx,%edx,4)
086db716 +0x116:  add    $0x1,%edx
086db719 +0x119:  cmp    %eax,%edx
086db71b +0x11b:  jb     086db710 <+0x110>
086db71d +0x11d:  cmp    %eax,-0x20(%ebp)
086db720 +0x120:  jbe    086db736 <+0x136>
086db722 +0x122:  mov    -0x20(%ebp),%edx
086db725 +0x125:  lea    0x0(%esi),%esi
086db728 +0x128:  movl   $0x0,(%ebx,%eax,4)
086db72f +0x12f:  add    $0x1,%eax
086db732 +0x132:  cmp    %eax,%edx
086db734 +0x134:  ja     086db728 <+0x128>
086db736 +0x136:  mov    0xc(%esi),%eax
086db739 +0x139:  mov    -0x24(%ebp),%edx
086db73c +0x13c:  mov    %eax,-0x28(%ebp)
086db73f +0x13f:  mov    %edx,(%esp)
086db742 +0x142:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
086db747 +0x147:  mov    0x8(%esi),%edx
086db74a +0x14a:  test   %edx,%edx
086db74c +0x14c:  je     086db768 <+0x168>
086db74e +0x14e:  mov    0xc(%esi),%edi
086db751 +0x151:  xor    %ecx,%ecx
086db753 +0x153:  mov    %ebx,-0x24(%ebp)
086db756 +0x156:  xchg   %ax,%ax
086db758 +0x158:  mov    (%edi,%ecx,4),%ebx
086db75b +0x15b:  mov    %ebx,(%eax,%ecx,4)
086db75e +0x15e:  add    $0x1,%ecx
086db761 +0x161:  cmp    %edx,%ecx
086db763 +0x163:  jb     086db758 <+0x158>
086db765 +0x165:  mov    -0x24(%ebp),%ebx
086db768 +0x168:  cmp    %edx,-0x20(%ebp)
086db76b +0x16b:  jbe    086db77e <+0x17e>
086db76d +0x16d:  mov    -0x20(%ebp),%ecx
086db770 +0x170:  movl   $0x0,(%eax,%edx,4)
086db777 +0x177:  add    $0x1,%edx
086db77a +0x17a:  cmp    %edx,%ecx
086db77c +0x17c:  ja     086db770 <+0x170>
086db77e +0x17e:  mov    -0x2c(%ebp),%ecx
086db781 +0x181:  mov    -0x20(%ebp),%edx
086db784 +0x184:  mov    %ebx,0x4(%esi)
086db787 +0x187:  mov    %eax,0xc(%esi)
086db78a +0x18a:  test   %ecx,%ecx
086db78c +0x18c:  mov    %edx,0x8(%esi)
086db78f +0x18f:  je     086db79c <+0x19c>
086db791 +0x191:  mov    -0x2c(%ebp),%eax
086db794 +0x194:  mov    %eax,(%esp)
086db797 +0x197:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
086db79c +0x19c:  mov    -0x28(%ebp),%edx
086db79f +0x19f:  test   %edx,%edx
086db7a1 +0x1a1:  je     086db634 <+0x34>
086db7a7 +0x1a7:  mov    -0x28(%ebp),%edx
086db7aa +0x1aa:  mov    %edx,(%esp)
086db7ad +0x1ad:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
086db7b2 +0x1b2:  jmp    086db634 <+0x34>
086db7b7 +0x1b7:  nop
086db7b8 +0x1b8:  mov    0x10(%ebp),%edx
086db7bb +0x1bb:  mov    %edx,(%ebx)
086db7bd +0x1bd:  jmp    086db681 <+0x81>
086db7c2 +0x1c2:  lea    0x0(%esi),%esi
086db7c8 +0x1c8:  mov    (%eax),%edx
086db7ca +0x1ca:  mov    %eax,(%esp)
086db7cd +0x1cd:  call   *0x4(%edx)
086db7d0 +0x1d0:  jmp    086db67c <+0x7c>
086db7d5 +0x1d5:  mov    0x4(%eax),%edx
086db7d8 +0x1d8:  lea    -0x1(%edx),%ecx
086db7db +0x1db:  mov    %ecx,0x4(%eax)
086db7de +0x1de:  jmp    086db6c7 <+0xc7>
086db7e3 +0x1e3:  mov    %eax,(%esp)
086db7e6 +0x1e6:  call   08725ce0 <__cxa_begin_catch>
086db7eb +0x1eb:  call   08725c30 <__cxa_end_catch>
086db7f0 +0x1f0:  jmp    086db67c <+0x7c>
086db7f5 +0x1f5:  mov    0x4(%eax),%edx
086db7f8 +0x1f8:  lea    -0x1(%edx),%ecx
086db7fb +0x1fb:  mov    %ecx,0x4(%eax)
086db7fe +0x1fe:  jmp    086db673 <+0x73>
086db803 +0x203:  mov    %eax,(%esp)
086db806 +0x206:  call   08725ce0 <__cxa_begin_catch>
086db80b +0x20b:  call   08725c30 <__cxa_end_catch>
086db810 +0x210:  jmp    086db690 <+0x90>
086db815 +0x215:  mov    %eax,(%esp)
086db818 +0x218:  call   08725ce0 <__cxa_begin_catch>
086db81d +0x21d:  test   %ebx,%ebx
086db81f +0x21f:  nop
086db820 +0x220:  je     086db82a <+0x22a>
086db822 +0x222:  mov    %ebx,(%esp)
086db825 +0x225:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
086db82a +0x22a:  call   08724be0 <__cxa_rethrow>
086db82f +0x22f:  cmp    $0xffffffff,%edx
086db832 +0x232:  je     086db84f <+0x24f>
086db834 +0x234:  mov    %eax,(%esp)
086db837 +0x237:  call   08ae3750 <_Unwind_Resume>
086db83c +0x23c:  mov    %eax,-0x30(%ebp)
086db83f +0x23f:  call   08725c30 <__cxa_end_catch>
086db844 +0x244:  mov    -0x30(%ebp),%eax
086db847 +0x247:  mov    %eax,(%esp)
086db84a +0x24a:  call   08ae3750 <_Unwind_Resume>
086db84f +0x24f:  mov    %eax,(%esp)
086db852 +0x252:  call   08723df0 <__cxa_call_unexpected>
086db857 +0x257:  mov    0x10(%ebp),%eax
086db85a +0x25a:  addl   $0x1,0x4(%eax)
086db85e +0x25e:  jmp    086db649 <+0x49>
086db863 +0x263:  jmp    086db82f <+0x22f>
086db865 +0x265:  nop
086db866 +0x266:  nop
086db867 +0x267:  nop
086db868 +0x268:  nop
086db869 +0x269:  nop
086db86a +0x26a:  nop
086db86b +0x26b:  nop
086db86c +0x26c:  nop
086db86d +0x26d:  nop
086db86e +0x26e:  nop
086db86f +0x26f:  nop
```

## 反编译 C

```c
// std::locale::_Impl::_M_install_facet @ 0x86db600

/* WARNING: Removing unreachable block (ram,0x086db7f5) */
/* WARNING: Removing unreachable block (ram,0x086db857) */
/* WARNING: Removing unreachable block (ram,0x086db7d5) */
/* std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*) */

void __thiscall std::locale::_Impl::_M_install_facet(_Impl *this,id *param_1,facet *param_2)

{
  facet *pfVar1;
  int iVar2;
  facet *pfVar3;
  facet **ppfVar4;
  facet **ppfVar5;
  uint uVar6;
  uint uVar7;
  facet **ppfVar8;
  uint uVar9;
  facet **ppfVar10;
  facet **ppfVar11;
  uint uVar12;
  
  if (param_2 != (facet *)0x0) {
    uVar6 = locale::id::_M_id(param_1);
    if (this->_M_facets_size - 1 < uVar6) {
      ppfVar11 = this->_M_facets;
      uVar7 = uVar6 + 4;
      ppfVar8 = operator_new__(uVar7 * 4);
      uVar9 = this->_M_facets_size;
      if (uVar9 != 0) {
        ppfVar4 = this->_M_facets;
        uVar12 = 0;
        do {
          ppfVar8[uVar12] = ppfVar4[uVar12];
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar9);
      }
      for (; uVar9 < uVar7; uVar9 = uVar9 + 1) {
        ppfVar8[uVar9] = (facet *)0x0;
      }
      ppfVar4 = this->_M_caches;
                    /* try { // try from 086db742 to 086db746 has its CatchHandler @ 086db815 */
      ppfVar10 = operator_new__(uVar7 * 4);
      uVar9 = this->_M_facets_size;
      if (uVar9 != 0) {
        ppfVar5 = this->_M_caches;
        uVar12 = 0;
        do {
          ppfVar10[uVar12] = ppfVar5[uVar12];
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar9);
      }
      for (; uVar9 < uVar7; uVar9 = uVar9 + 1) {
        ppfVar10[uVar9] = (facet *)0x0;
      }
      this->_M_facets = ppfVar8;
      this->_M_caches = ppfVar10;
      this->_M_facets_size = uVar7;
      if (ppfVar11 != (facet **)0x0) {
        operator_delete__(ppfVar11);
      }
      if (ppfVar4 != (facet **)0x0) {
        operator_delete__(ppfVar4);
      }
    }
    LOCK();
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    UNLOCK();
    ppfVar11 = this->_M_facets + uVar6;
    pfVar3 = *ppfVar11;
    if (pfVar3 == (facet *)0x0) {
      *ppfVar11 = param_2;
    }
    else {
      LOCK();
      pfVar1 = pfVar3 + 4;
      iVar2 = *(int *)pfVar1;
      *(int *)pfVar1 = *(int *)pfVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* try { // try from 086db7cd to 086db7cf has its CatchHandler @ 086db7e3 */
        (**(code **)(*(int *)pfVar3 + 4))(pfVar3);
      }
      *ppfVar11 = param_2;
    }
    if (this->_M_facets_size != 0) {
      uVar6 = 0;
      ppfVar11 = this->_M_caches;
      do {
        pfVar3 = ppfVar11[uVar6];
        if (pfVar3 != (facet *)0x0) {
          LOCK();
          pfVar1 = pfVar3 + 4;
          iVar2 = *(int *)pfVar1;
          *(int *)pfVar1 = *(int *)pfVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
                    /* try { // try from 086db6d1 to 086db6d3 has its CatchHandler @ 086db803 */
            (**(code **)(*(int *)pfVar3 + 4))(pfVar3);
          }
          ppfVar11 = this->_M_caches;
          ppfVar11[uVar6] = (facet *)0x0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < this->_M_facets_size);
    }
  }
  return;
}
```
