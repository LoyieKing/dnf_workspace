# _FindSelectItem

`_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindSelectItemEjNS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE`

`ExtreamDungeon::CCompound_ExtreamDun_Item::_FindSelectItem(unsigned int, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int> const&) const`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832d15e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832d15e  _ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindSelectItemEjNS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE
#           ExtreamDungeon::CCompound_ExtreamDun_Item::_FindSelectItem(unsigned int, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int> const&) const
# range [0x0832d15e, 0x0832d2cd]
0832d15e +0x000:  push   %ebp
0832d15f +0x001:  mov    %esp,%ebp
0832d161 +0x003:  sub    $0x48,%esp
0832d164 +0x006:  cmpl   $0x0,0xc(%ebp)
0832d168 +0x00a:  je     0832d170 <+0x12>
0832d16a +0x00c:  cmpl   $0x3a,0xc(%ebp)
0832d16e +0x010:  jbe    0832d17a <+0x1c>
0832d170 +0x012:  mov    $0x0,%eax
0832d175 +0x017:  jmp    0832d2cc <+0x16e>
0832d17a +0x01c:  mov    0x10(%ebp),%eax
0832d17d +0x01f:  test   %eax,%eax
0832d17f +0x021:  js     0832d189 <+0x2b>
0832d181 +0x023:  mov    0x10(%ebp),%eax
0832d184 +0x026:  cmp    $0x3,%eax
0832d187 +0x029:  jle    0832d193 <+0x35>
0832d189 +0x02b:  mov    $0x0,%eax
0832d18e +0x030:  jmp    0832d2cc <+0x16e>
0832d193 +0x035:  mov    0xc(%ebp),%edx
0832d196 +0x038:  mov    0x10(%ebp),%ecx
0832d199 +0x03b:  mov    %ecx,%eax
0832d19b +0x03d:  add    %eax,%eax
0832d19d +0x03f:  add    %ecx,%eax
0832d19f +0x041:  lea    0x0(,%eax,4),%ecx
0832d1a6 +0x048:  mov    %edx,%eax
0832d1a8 +0x04a:  add    %eax,%eax
0832d1aa +0x04c:  add    %edx,%eax
0832d1ac +0x04e:  shl    $0x4,%eax
0832d1af +0x051:  lea    (%ecx,%eax,1),%eax
0832d1b2 +0x054:  add    $0x30,%eax
0832d1b5 +0x057:  add    0x8(%ebp),%eax
0832d1b8 +0x05a:  lea    0x4(%eax),%edx
0832d1bb +0x05d:  lea    -0x1c(%ebp),%eax
0832d1be +0x060:  mov    %edx,0x4(%esp)
0832d1c2 +0x064:  mov    %eax,(%esp)
0832d1c5 +0x067:  call   0832e5b8 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x616>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x616
0832d1ca +0x06c:  sub    $0x4,%esp
0832d1cd +0x06f:  mov    0xc(%ebp),%edx
0832d1d0 +0x072:  mov    0x10(%ebp),%ecx
0832d1d3 +0x075:  mov    %ecx,%eax
0832d1d5 +0x077:  add    %eax,%eax
0832d1d7 +0x079:  add    %ecx,%eax
0832d1d9 +0x07b:  lea    0x0(,%eax,4),%ecx
0832d1e0 +0x082:  mov    %edx,%eax
0832d1e2 +0x084:  add    %eax,%eax
0832d1e4 +0x086:  add    %edx,%eax
0832d1e6 +0x088:  shl    $0x4,%eax
0832d1e9 +0x08b:  lea    (%ecx,%eax,1),%eax
0832d1ec +0x08e:  add    $0x30,%eax
0832d1ef +0x091:  add    0x8(%ebp),%eax
0832d1f2 +0x094:  lea    0x4(%eax),%edx
0832d1f5 +0x097:  lea    -0x20(%ebp),%eax
0832d1f8 +0x09a:  mov    %edx,0x4(%esp)
0832d1fc +0x09e:  mov    %eax,(%esp)
0832d1ff +0x0a1:  call   0832e5e4 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x642>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x642
0832d204 +0x0a6:  sub    $0x4,%esp
0832d207 +0x0a9:  mov    0x14(%ebp),%eax
0832d20a +0x0ac:  mov    (%eax),%eax
0832d20c +0x0ae:  movl   $0x0,0x8(%esp)
0832d214 +0x0b6:  mov    %eax,0x4(%esp)
0832d218 +0x0ba:  lea    -0x18(%ebp),%eax
0832d21b +0x0bd:  mov    %eax,(%esp)
0832d21e +0x0c0:  call   0832dfbe <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x1c>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x1c
0832d223 +0x0c5:  lea    -0x24(%ebp),%eax
0832d226 +0x0c8:  movl   $&_ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_,0x10(%esp)
0832d22e +0x0d0:  lea    -0x18(%ebp),%edx
0832d231 +0x0d3:  mov    %edx,0xc(%esp)
0832d235 +0x0d7:  mov    -0x20(%ebp),%edx
0832d238 +0x0da:  mov    %edx,0x8(%esp)
0832d23c +0x0de:  mov    -0x1c(%ebp),%edx
0832d23f +0x0e1:  mov    %edx,0x4(%esp)
0832d243 +0x0e5:  mov    %eax,(%esp)
0832d246 +0x0e8:  call   0832e610 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x66e>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x66e
0832d24b +0x0ed:  sub    $0x4,%esp
0832d24e +0x0f0:  mov    0x14(%ebp),%eax
0832d251 +0x0f3:  mov    0x4(%eax),%eax
0832d254 +0x0f6:  movl   $0x7fffffff,0x8(%esp)
0832d25c +0x0fe:  mov    %eax,0x4(%esp)
0832d260 +0x102:  lea    -0x10(%ebp),%eax
0832d263 +0x105:  mov    %eax,(%esp)
0832d266 +0x108:  call   0832dfbe <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x1c>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x1c
0832d26b +0x10d:  lea    -0x28(%ebp),%eax
0832d26e +0x110:  movl   $&_ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_,0x10(%esp)
0832d276 +0x118:  lea    -0x10(%ebp),%edx
0832d279 +0x11b:  mov    %edx,0xc(%esp)
0832d27d +0x11f:  mov    -0x20(%ebp),%edx
0832d280 +0x122:  mov    %edx,0x8(%esp)
0832d284 +0x126:  mov    -0x1c(%ebp),%edx
0832d287 +0x129:  mov    %edx,0x4(%esp)
0832d28b +0x12d:  mov    %eax,(%esp)
0832d28e +0x130:  call   0832e6bf <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x71d>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x71d
0832d293 +0x135:  sub    $0x4,%esp
0832d296 +0x138:  lea    -0x20(%ebp),%eax
0832d299 +0x13b:  mov    %eax,0x4(%esp)
0832d29d +0x13f:  lea    -0x24(%ebp),%eax
0832d2a0 +0x142:  mov    %eax,(%esp)
0832d2a3 +0x145:  call   0832e76e <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x7cc>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x7cc
0832d2a8 +0x14a:  test   %al,%al
0832d2aa +0x14c:  je     0832d2b3 <+0x155>
0832d2ac +0x14e:  mov    $0x0,%eax
0832d2b1 +0x153:  jmp    0832d2cc <+0x16e>
0832d2b3 +0x155:  mov    -0x28(%ebp),%eax
0832d2b6 +0x158:  mov    %eax,0x8(%esp)
0832d2ba +0x15c:  mov    -0x24(%ebp),%eax
0832d2bd +0x15f:  mov    %eax,0x4(%esp)
0832d2c1 +0x163:  mov    0x8(%ebp),%eax
0832d2c4 +0x166:  mov    %eax,(%esp)
0832d2c7 +0x169:  call   0832d4b4 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemRelateCreationRate(__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR const*, std::vector<ExtreamDungeon::OUTPUT_ITEM_STR, std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR> > >, __gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR const*, std::vector<ExtreamDungeon::OUTPUT_ITEM_STR, std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR> > >) const
0832d2cc +0x16e:  leave
0832d2cd +0x16f:  ret
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_FindSelectItem @ 0x832d15e

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_FindSelectItem(unsigned int,
   ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int> const&) const */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_FindSelectItem
          (CCompound_ExtreamDun_Item *this,uint param_1,int param_3,int *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  OUTPUT_ITEM_STR local_1c [8];
  OUTPUT_ITEM_STR local_14 [16];
  
  if ((param_1 == 0) || (0x3a < param_1)) {
    uVar2 = 0;
  }
  else if ((param_3 < 0) || (3 < param_3)) {
    uVar2 = 0;
  }
  else {
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    begin();
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    end();
    OUTPUT_ITEM_STR::OUTPUT_ITEM_STR(local_1c,*param_4,0);
    std::
    lower_bound<__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>,ExtreamDungeon::OUTPUT_ITEM_STR,bool(*)(ExtreamDungeon::OUTPUT_ITEM_STR_const&,ExtreamDungeon::OUTPUT_ITEM_STR_const&)>
              (&local_28,local_20,local_24,local_1c,BindTable_Predicate);
    OUTPUT_ITEM_STR::OUTPUT_ITEM_STR(local_14,param_4[1],0x7fffffff);
    std::
    upper_bound<__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>,ExtreamDungeon::OUTPUT_ITEM_STR,bool(*)(ExtreamDungeon::OUTPUT_ITEM_STR_const&,ExtreamDungeon::OUTPUT_ITEM_STR_const&)>
              (&local_2c,local_20,local_24,local_14,BindTable_Predicate);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_28,(__normal_iterator *)&local_24);
    if (bVar1) {
      uVar2 = 0;
    }
    else {
      uVar2 = _FindItemRelateCreationRate(this,local_28,local_2c);
    }
  }
  return uVar2;
}
```
