# _Impl

`_ZNSt6locale5_ImplC1ERKS0_j`

`std::locale::_Impl::_Impl(std::locale::_Impl const&, unsigned int)`

| 类 | 地址 |
|---|---|
| `std::locale::_Impl` | `0x086dbb20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dbb20  _ZNSt6locale5_ImplC1ERKS0_j
#           std::locale::_Impl::_Impl(std::locale::_Impl const&, unsigned int)
# range [0x086dbb20, 0x086dbccf]
086dbb20 +0x000:  push   %ebp
086dbb21 +0x001:  mov    %esp,%ebp
086dbb23 +0x003:  push   %edi
086dbb24 +0x004:  push   %esi
086dbb25 +0x005:  push   %ebx
086dbb26 +0x006:  sub    $0x2c,%esp
086dbb29 +0x009:  mov    0x8(%ebp),%esi
086dbb2c +0x00c:  mov    0x10(%ebp),%eax
086dbb2f +0x00f:  mov    0xc(%ebp),%ebx
086dbb32 +0x012:  movl   $0x0,0x4(%esi)
086dbb39 +0x019:  mov    %eax,(%esi)
086dbb3b +0x01b:  mov    0x8(%ebx),%eax
086dbb3e +0x01e:  movl   $0x0,0xc(%esi)
086dbb45 +0x025:  movl   $0x0,0x10(%esi)
086dbb4c +0x02c:  mov    %eax,0x8(%esi)
086dbb4f +0x02f:  shl    $0x2,%eax
086dbb52 +0x032:  mov    %eax,(%esp)
086dbb55 +0x035:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
086dbb5a +0x03a:  mov    0x8(%esi),%edx
086dbb5d +0x03d:  mov    %eax,0x4(%esi)
086dbb60 +0x040:  test   %edx,%edx
086dbb62 +0x042:  mov    %edx,-0x1c(%ebp)
086dbb65 +0x045:  je     086dbba5 <+0x85>
086dbb67 +0x047:  xor    %edx,%edx
086dbb69 +0x049:  mov    %eax,%ecx
086dbb6b +0x04b:  jmp    086dbb75 <+0x55>
086dbb6d +0x04d:  lea    0x0(%esi),%esi
086dbb70 +0x050:  mov    0x4(%esi),%ecx
086dbb73 +0x053:  mov    %ecx,%eax
086dbb75 +0x055:  mov    0x4(%ebx),%edi
086dbb78 +0x058:  mov    (%edi,%edx,4),%edi
086dbb7b +0x05b:  mov    %edi,(%eax,%edx,4)
086dbb7e +0x05e:  mov    (%ecx,%edx,4),%eax
086dbb81 +0x061:  test   %eax,%eax
086dbb83 +0x063:  je     086dbb9d <+0x7d>
086dbb85 +0x065:  mov    $&data#bb92cc41(.plt),%ecx
086dbb8a +0x06a:  test   %ecx,%ecx
086dbb8c +0x06c:  je     086dbc87 <+0x167>
086dbb92 +0x072:  lock addl $0x1,0x4(%eax)
086dbb97 +0x077:  mov    0x8(%esi),%eax
086dbb9a +0x07a:  mov    %eax,-0x1c(%ebp)
086dbb9d +0x07d:  add    $0x1,%edx
086dbba0 +0x080:  cmp    %edx,-0x1c(%ebp)
086dbba3 +0x083:  ja     086dbb70 <+0x50>
086dbba5 +0x085:  mov    -0x1c(%ebp),%eax
086dbba8 +0x088:  shl    $0x2,%eax
086dbbab +0x08b:  mov    %eax,(%esp)
086dbbae +0x08e:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
086dbbb3 +0x093:  mov    0x8(%esi),%edx
086dbbb6 +0x096:  mov    %eax,0xc(%esi)
086dbbb9 +0x099:  test   %edx,%edx
086dbbbb +0x09b:  je     086dbbf7 <+0xd7>
086dbbbd +0x09d:  xor    %edx,%edx
086dbbbf +0x09f:  mov    %eax,%ecx
086dbbc1 +0x0a1:  jmp    086dbbcd <+0xad>
086dbbc3 +0x0a3:  nop
086dbbc4 +0x0a4:  lea    0x0(%esi,%eiz,1),%esi
086dbbc8 +0x0a8:  mov    0xc(%esi),%ecx
086dbbcb +0x0ab:  mov    %ecx,%eax
086dbbcd +0x0ad:  mov    0xc(%ebx),%edi
086dbbd0 +0x0b0:  mov    (%edi,%edx,4),%edi
086dbbd3 +0x0b3:  mov    %edi,(%eax,%edx,4)
086dbbd6 +0x0b6:  mov    (%ecx,%edx,4),%eax
086dbbd9 +0x0b9:  test   %eax,%eax
086dbbdb +0x0bb:  je     086dbbef <+0xcf>
086dbbdd +0x0bd:  mov    $&data#bb92cc41(.plt),%ecx
086dbbe2 +0x0c2:  test   %ecx,%ecx
086dbbe4 +0x0c4:  je     086dbc96 <+0x176>
086dbbea +0x0ca:  lock addl $0x1,0x4(%eax)
086dbbef +0x0cf:  add    $0x1,%edx
086dbbf2 +0x0d2:  cmp    %edx,0x8(%esi)
086dbbf5 +0x0d5:  ja     086dbbc8 <+0xa8>
086dbbf7 +0x0d7:  movl   $0x30,(%esp)
086dbbfe +0x0de:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
086dbc03 +0x0e3:  mov    %eax,0x10(%esi)
086dbc06 +0x0e6:  xor    %edx,%edx
086dbc08 +0x0e8:  jmp    086dbc13 <+0xf3>
086dbc0a +0x0ea:  lea    0x0(%esi),%esi
086dbc10 +0x0f0:  mov    0x10(%esi),%eax
086dbc13 +0x0f3:  movl   $0x0,(%eax,%edx,1)
086dbc1a +0x0fa:  add    $0x4,%edx
086dbc1d +0x0fd:  cmp    $0x30,%edx
086dbc20 +0x100:  jne    086dbc10 <+0xf0>
086dbc22 +0x102:  xor    %edi,%edi
086dbc24 +0x104:  lea    0x0(%esi,%eiz,1),%esi
086dbc28 +0x108:  mov    0x10(%ebx),%eax
086dbc2b +0x10b:  mov    (%eax,%edi,1),%eax
086dbc2e +0x10e:  test   %eax,%eax
086dbc30 +0x110:  je     086dbc7f <+0x15f>
086dbc32 +0x112:  mov    %eax,(%esp)
086dbc35 +0x115:  call   0807e3b0 <_init+0xca8>
086dbc3a +0x11a:  add    $0x1,%eax
086dbc3d +0x11d:  mov    %eax,-0x1c(%ebp)
086dbc40 +0x120:  mov    0x10(%esi),%eax
086dbc43 +0x123:  mov    -0x1c(%ebp),%edx
086dbc46 +0x126:  add    %edi,%eax
086dbc48 +0x128:  mov    %eax,-0x20(%ebp)
086dbc4b +0x12b:  mov    %edx,(%esp)
086dbc4e +0x12e:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
086dbc53 +0x133:  mov    -0x20(%ebp),%ecx
086dbc56 +0x136:  mov    0x10(%ebx),%edx
086dbc59 +0x139:  mov    %eax,(%ecx)
086dbc5b +0x13b:  mov    0x10(%esi),%eax
086dbc5e +0x13e:  mov    (%edx,%edi,1),%edx
086dbc61 +0x141:  mov    -0x1c(%ebp),%ecx
086dbc64 +0x144:  mov    (%eax,%edi,1),%eax
086dbc67 +0x147:  add    $0x4,%edi
086dbc6a +0x14a:  mov    %edx,0x4(%esp)
086dbc6e +0x14e:  mov    %ecx,0x8(%esp)
086dbc72 +0x152:  mov    %eax,(%esp)
086dbc75 +0x155:  call   0807d8a0 <_init+0x198>
086dbc7a +0x15a:  cmp    $0x30,%edi
086dbc7d +0x15d:  jne    086dbc28 <+0x108>
086dbc7f +0x15f:  add    $0x2c,%esp
086dbc82 +0x162:  pop    %ebx
086dbc83 +0x163:  pop    %esi
086dbc84 +0x164:  pop    %edi
086dbc85 +0x165:  pop    %ebp
086dbc86 +0x166:  ret
086dbc87 +0x167:  addl   $0x1,0x4(%eax)
086dbc8b +0x16b:  mov    0x8(%esi),%ecx
086dbc8e +0x16e:  mov    %ecx,-0x1c(%ebp)
086dbc91 +0x171:  jmp    086dbb9d <+0x7d>
086dbc96 +0x176:  addl   $0x1,0x4(%eax)
086dbc9a +0x17a:  jmp    086dbbef <+0xcf>
086dbc9f +0x17f:  mov    %eax,(%esp)
086dbca2 +0x182:  call   08725ce0 <__cxa_begin_catch>
086dbca7 +0x187:  mov    %esi,(%esp)
086dbcaa +0x18a:  call   086db910 <_ZNSt6locale5_ImplD1Ev>  ; std::locale::_Impl::~_Impl()
086dbcaf +0x18f:  call   08724be0 <__cxa_rethrow>
086dbcb4 +0x194:  mov    %eax,%ebx
086dbcb6 +0x196:  call   08725c30 <__cxa_end_catch>
086dbcbb +0x19b:  mov    %ebx,(%esp)
086dbcbe +0x19e:  call   08ae3750 <_Unwind_Resume>
086dbcc3 +0x1a3:  nop
086dbcc4 +0x1a4:  nop
086dbcc5 +0x1a5:  nop
086dbcc6 +0x1a6:  nop
086dbcc7 +0x1a7:  nop
086dbcc8 +0x1a8:  nop
086dbcc9 +0x1a9:  nop
086dbcca +0x1aa:  nop
086dbccb +0x1ab:  nop
086dbccc +0x1ac:  nop
086dbccd +0x1ad:  nop
086dbcce +0x1ae:  nop
086dbccf +0x1af:  nop
```

## 反编译 C

```c
// std::locale::_Impl::_Impl @ 0x86dbb20

/* WARNING: Removing unreachable block (ram,0x086dbc87) */
/* WARNING: Removing unreachable block (ram,0x086dbc96) */
/* std::locale::_Impl::_Impl(std::locale::_Impl const&, unsigned int) */

void __thiscall std::locale::_Impl::_Impl(_Impl *this,_Impl *param_1,uint param_2)

{
  facet *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  size_t sVar4;
  char *__s;
  char **ppcVar5;
  facet **ppfVar6;
  char **ppcVar7;
  size_t sVar8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  size_t local_20;
  
  this->_M_facets = (facet **)0x0;
  this->_M_refcount = param_2;
  sVar4 = param_1->_M_facets_size;
  this->_M_caches = (facet **)0x0;
  this->_M_names = (char **)0x0;
  this->_M_facets_size = sVar4;
                    /* try { // try from 086dbb55 to 086dbc52 has its CatchHandler @ 086dbc9f */
  ppfVar6 = operator_new__(sVar4 << 2);
  local_20 = this->_M_facets_size;
  this->_M_facets = ppfVar6;
  if (local_20 != 0) {
    uVar10 = 0;
    while( true ) {
      ppfVar6[uVar10] = param_1->_M_facets[uVar10];
      if (ppfVar6[uVar10] != (facet *)0x0) {
        LOCK();
        pfVar1 = ppfVar6[uVar10] + 4;
        *(int *)pfVar1 = *(int *)pfVar1 + 1;
        UNLOCK();
        local_20 = this->_M_facets_size;
      }
      uVar10 = uVar10 + 1;
      if (local_20 <= uVar10) break;
      ppfVar6 = this->_M_facets;
    }
  }
  ppfVar6 = operator_new__(local_20 << 2);
  this->_M_caches = ppfVar6;
  if (this->_M_facets_size != 0) {
    uVar10 = 0;
    while( true ) {
      ppfVar6[uVar10] = param_1->_M_caches[uVar10];
      if (ppfVar6[uVar10] != (facet *)0x0) {
        LOCK();
        pfVar1 = ppfVar6[uVar10] + 4;
        *(int *)pfVar1 = *(int *)pfVar1 + 1;
        UNLOCK();
      }
      uVar10 = uVar10 + 1;
      if (this->_M_facets_size <= uVar10) break;
      ppfVar6 = this->_M_caches;
    }
  }
  ppcVar7 = operator_new__(0x30);
  this->_M_names = ppcVar7;
  iVar11 = 0;
  while( true ) {
    *(undefined4 *)((int)ppcVar7 + iVar11) = 0;
    iVar11 = iVar11 + 4;
    if (iVar11 == 0x30) break;
    ppcVar7 = this->_M_names;
  }
  iVar11 = 0;
  do {
    __s = *(char **)((int)param_1->_M_names + iVar11);
    if (__s == (char *)0x0) {
      return;
    }
    sVar8 = strlen(__s);
    ppcVar7 = this->_M_names;
    pvVar9 = operator_new__(sVar8 + 1);
    ppcVar5 = param_1->_M_names;
    *(void **)((int)ppcVar7 + iVar11) = pvVar9;
    puVar2 = (undefined4 *)((int)ppcVar5 + iVar11);
    puVar3 = (undefined4 *)((int)this->_M_names + iVar11);
    iVar11 = iVar11 + 4;
    memcpy((void *)*puVar3,(void *)*puVar2,sVar8 + 1);
  } while (iVar11 != 0x30);
  return;
}
```
