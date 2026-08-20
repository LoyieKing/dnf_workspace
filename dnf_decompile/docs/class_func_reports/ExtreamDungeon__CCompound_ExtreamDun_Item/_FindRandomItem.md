# _FindRandomItem

`_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindRandomItemENS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE`

`ExtreamDungeon::CCompound_ExtreamDun_Item::_FindRandomItem(ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int> const&) const`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832d2ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832d2ce  _ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindRandomItemENS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE
#           ExtreamDungeon::CCompound_ExtreamDun_Item::_FindRandomItem(ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int> const&) const
# range [0x0832d2ce, 0x0832d437]
0832d2ce +0x000:  push   %ebp
0832d2cf +0x001:  mov    %esp,%ebp
0832d2d1 +0x003:  sub    $0x58,%esp
0832d2d4 +0x006:  mov    0xc(%ebp),%eax
0832d2d7 +0x009:  test   %eax,%eax
0832d2d9 +0x00b:  js     0832d2e3 <+0x15>
0832d2db +0x00d:  mov    0xc(%ebp),%eax
0832d2de +0x010:  cmp    $0x3,%eax
0832d2e1 +0x013:  jle    0832d2ed <+0x1f>
0832d2e3 +0x015:  mov    $0x0,%eax
0832d2e8 +0x01a:  jmp    0832d435 <+0x167>
0832d2ed +0x01f:  mov    0xc(%ebp),%edx
0832d2f0 +0x022:  mov    %edx,%eax
0832d2f2 +0x024:  add    %eax,%eax
0832d2f4 +0x026:  add    %edx,%eax
0832d2f6 +0x028:  shl    $0x2,%eax
0832d2f9 +0x02b:  add    $0xb40,%eax
0832d2fe +0x030:  add    0x8(%ebp),%eax
0832d301 +0x033:  add    $0x4,%eax
0832d304 +0x036:  mov    %eax,-0xc(%ebp)
0832d307 +0x039:  mov    0x10(%ebp),%eax
0832d30a +0x03c:  mov    (%eax),%eax
0832d30c +0x03e:  movl   $0x0,0x8(%esp)
0832d314 +0x046:  mov    %eax,0x4(%esp)
0832d318 +0x04a:  lea    -0x30(%ebp),%eax
0832d31b +0x04d:  mov    %eax,(%esp)
0832d31e +0x050:  call   0832dfbe <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x1c>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x1c
0832d323 +0x055:  lea    -0x28(%ebp),%eax
0832d326 +0x058:  mov    -0xc(%ebp),%edx
0832d329 +0x05b:  mov    %edx,0x4(%esp)
0832d32d +0x05f:  mov    %eax,(%esp)
0832d330 +0x062:  call   0832e5e4 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x642>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x642
0832d335 +0x067:  sub    $0x4,%esp
0832d338 +0x06a:  lea    -0x24(%ebp),%eax
0832d33b +0x06d:  mov    -0xc(%ebp),%edx
0832d33e +0x070:  mov    %edx,0x4(%esp)
0832d342 +0x074:  mov    %eax,(%esp)
0832d345 +0x077:  call   0832e5b8 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x616>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x616
0832d34a +0x07c:  sub    $0x4,%esp
0832d34d +0x07f:  lea    -0x34(%ebp),%eax
0832d350 +0x082:  movl   $&_ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_,0x10(%esp)
0832d358 +0x08a:  lea    -0x30(%ebp),%edx
0832d35b +0x08d:  mov    %edx,0xc(%esp)
0832d35f +0x091:  mov    -0x28(%ebp),%edx
0832d362 +0x094:  mov    %edx,0x8(%esp)
0832d366 +0x098:  mov    -0x24(%ebp),%edx
0832d369 +0x09b:  mov    %edx,0x4(%esp)
0832d36d +0x09f:  mov    %eax,(%esp)
0832d370 +0x0a2:  call   0832e610 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x66e>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x66e
0832d375 +0x0a7:  sub    $0x4,%esp
0832d378 +0x0aa:  mov    0x10(%ebp),%eax
0832d37b +0x0ad:  mov    0x4(%eax),%eax
0832d37e +0x0b0:  movl   $0x7fffffff,0x8(%esp)
0832d386 +0x0b8:  mov    %eax,0x4(%esp)
0832d38a +0x0bc:  lea    -0x20(%ebp),%eax
0832d38d +0x0bf:  mov    %eax,(%esp)
0832d390 +0x0c2:  call   0832dfbe <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x1c>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x1c
0832d395 +0x0c7:  lea    -0x18(%ebp),%eax
0832d398 +0x0ca:  mov    -0xc(%ebp),%edx
0832d39b +0x0cd:  mov    %edx,0x4(%esp)
0832d39f +0x0d1:  mov    %eax,(%esp)
0832d3a2 +0x0d4:  call   0832e5e4 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x642>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x642
0832d3a7 +0x0d9:  sub    $0x4,%esp
0832d3aa +0x0dc:  lea    -0x14(%ebp),%eax
0832d3ad +0x0df:  mov    -0xc(%ebp),%edx
0832d3b0 +0x0e2:  mov    %edx,0x4(%esp)
0832d3b4 +0x0e6:  mov    %eax,(%esp)
0832d3b7 +0x0e9:  call   0832e5b8 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x616>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x616
0832d3bc +0x0ee:  sub    $0x4,%esp
0832d3bf +0x0f1:  lea    -0x38(%ebp),%eax
0832d3c2 +0x0f4:  movl   $&_ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_,0x10(%esp)
0832d3ca +0x0fc:  lea    -0x20(%ebp),%edx
0832d3cd +0x0ff:  mov    %edx,0xc(%esp)
0832d3d1 +0x103:  mov    -0x18(%ebp),%edx
0832d3d4 +0x106:  mov    %edx,0x8(%esp)
0832d3d8 +0x10a:  mov    -0x14(%ebp),%edx
0832d3db +0x10d:  mov    %edx,0x4(%esp)
0832d3df +0x111:  mov    %eax,(%esp)
0832d3e2 +0x114:  call   0832e6bf <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x71d>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x71d
0832d3e7 +0x119:  sub    $0x4,%esp
0832d3ea +0x11c:  lea    -0x10(%ebp),%eax
0832d3ed +0x11f:  mov    -0xc(%ebp),%edx
0832d3f0 +0x122:  mov    %edx,0x4(%esp)
0832d3f4 +0x126:  mov    %eax,(%esp)
0832d3f7 +0x129:  call   0832e5e4 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x642>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x642
0832d3fc +0x12e:  sub    $0x4,%esp
0832d3ff +0x131:  lea    -0x34(%ebp),%eax
0832d402 +0x134:  mov    %eax,0x4(%esp)
0832d406 +0x138:  lea    -0x10(%ebp),%eax
0832d409 +0x13b:  mov    %eax,(%esp)
0832d40c +0x13e:  call   0832e79a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x7f8>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x7f8
0832d411 +0x143:  test   %al,%al
0832d413 +0x145:  je     0832d430 <+0x162>
0832d415 +0x147:  mov    -0x38(%ebp),%eax
0832d418 +0x14a:  mov    %eax,0x8(%esp)
0832d41c +0x14e:  mov    -0x34(%ebp),%eax
0832d41f +0x151:  mov    %eax,0x4(%esp)
0832d423 +0x155:  mov    0x8(%ebp),%eax
0832d426 +0x158:  mov    %eax,(%esp)
0832d429 +0x15b:  call   0832d4b4 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemRelateCreationRate(__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR const*, std::vector<ExtreamDungeon::OUTPUT_ITEM_STR, std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR> > >, __gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR const*, std::vector<ExtreamDungeon::OUTPUT_ITEM_STR, std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR> > >) const
0832d42e +0x160:  jmp    0832d435 <+0x167>
0832d430 +0x162:  mov    $0x0,%eax
0832d435 +0x167:  leave
0832d436 +0x168:  ret
0832d437 +0x169:  nop
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_FindRandomItem @ 0x832d2ce

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_FindRandomItem(ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY,
   std::pair<unsigned int, unsigned int> const&) const */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_FindRandomItem
          (CCompound_ExtreamDun_Item *this,int param_2,int *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 local_3c;
  undefined4 local_38;
  OUTPUT_ITEM_STR local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  OUTPUT_ITEM_STR local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  CCompound_ExtreamDun_Item *local_10;
  
  if ((param_2 < 0) || (3 < param_2)) {
    uVar2 = 0;
  }
  else {
    local_10 = this + param_2 * 0xc + 0xb44;
    OUTPUT_ITEM_STR::OUTPUT_ITEM_STR(local_34,*param_3,0);
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    end();
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    begin();
    std::
    lower_bound<__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>,ExtreamDungeon::OUTPUT_ITEM_STR,bool(*)(ExtreamDungeon::OUTPUT_ITEM_STR_const&,ExtreamDungeon::OUTPUT_ITEM_STR_const&)>
              (&local_38,local_28,local_2c,local_34,BindTable_Predicate);
    OUTPUT_ITEM_STR::OUTPUT_ITEM_STR(local_24,param_3[1],0x7fffffff);
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    end();
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    begin();
    std::
    upper_bound<__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>,ExtreamDungeon::OUTPUT_ITEM_STR,bool(*)(ExtreamDungeon::OUTPUT_ITEM_STR_const&,ExtreamDungeon::OUTPUT_ITEM_STR_const&)>
              (&local_3c,local_18,local_1c,local_24,BindTable_Predicate);
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    end();
    bVar1 = __gnu_cxx::operator!=(local_14,(__normal_iterator *)&local_38);
    if (bVar1) {
      uVar2 = _FindItemRelateCreationRate(this,local_38,local_3c);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
