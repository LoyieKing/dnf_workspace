# _determine_level_bonus

`_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusEjNS_22ENUM_INPUTITEMS_RARITYERjNS_15eBindSphereTypeE`

`ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus(unsigned int, ExtreamDungeon::ENUM_INPUTITEMS_RARITY, unsigned int&, ExtreamDungeon::eBindSphereType) const`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832c9ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832c9ca  _ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusEjNS_22ENUM_INPUTITEMS_RARITYERjNS_15eBindSphereTypeE
#           ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus(unsigned int, ExtreamDungeon::ENUM_INPUTITEMS_RARITY, unsigned int&, ExtreamDungeon::eBindSphereType) const
# range [0x0832c9ca, 0x0832cad9]
0832c9ca +0x000:  push   %ebp
0832c9cb +0x001:  mov    %esp,%ebp
0832c9cd +0x003:  push   %esi
0832c9ce +0x004:  push   %ebx
0832c9cf +0x005:  sub    $0x20,%esp
0832c9d2 +0x008:  mov    0x8(%ebp),%ebx
0832c9d5 +0x00b:  mov    0x1c(%ebp),%eax
0832c9d8 +0x00e:  mov    %eax,0xc(%esp)
0832c9dc +0x012:  mov    0x14(%ebp),%eax
0832c9df +0x015:  mov    %eax,0x8(%esp)
0832c9e3 +0x019:  mov    0x10(%ebp),%eax
0832c9e6 +0x01c:  mov    %eax,0x4(%esp)
0832c9ea +0x020:  mov    0xc(%ebp),%eax
0832c9ed +0x023:  mov    %eax,(%esp)
0832c9f0 +0x026:  call   0832cc02 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item28_determine_level_bonus_indexEjNS_22ENUM_INPUTITEMS_RARITYENS_15eBindSphereTypeE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus_index(unsigned int, ExtreamDungeon::ENUM_INPUTITEMS_RARITY, ExtreamDungeon::eBindSphereType) const
0832c9f5 +0x02b:  mov    0x18(%ebp),%edx
0832c9f8 +0x02e:  mov    %eax,(%edx)
0832c9fa +0x030:  mov    0x18(%ebp),%eax
0832c9fd +0x033:  mov    (%eax),%eax
0832c9ff +0x035:  test   %eax,%eax
0832ca01 +0x037:  je     0832ca2b <+0x61>
0832ca03 +0x039:  mov    0x18(%ebp),%eax
0832ca06 +0x03c:  mov    (%eax),%esi
0832ca08 +0x03e:  mov    0x1c(%ebp),%edx
0832ca0b +0x041:  mov    %edx,%eax
0832ca0d +0x043:  add    %eax,%eax
0832ca0f +0x045:  add    %edx,%eax
0832ca11 +0x047:  shl    $0x4,%eax
0832ca14 +0x04a:  add    $0xb80,%eax
0832ca19 +0x04f:  add    0xc(%ebp),%eax
0832ca1c +0x052:  add    $0xc,%eax
0832ca1f +0x055:  mov    %eax,(%esp)
0832ca22 +0x058:  call   080e2462 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x208>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x208
0832ca27 +0x05d:  cmp    %eax,%esi
0832ca29 +0x05f:  jb     0832ca32 <+0x68>
0832ca2b +0x061:  mov    $0x1,%eax
0832ca30 +0x066:  jmp    0832ca37 <+0x6d>
0832ca32 +0x068:  mov    $0x0,%eax
0832ca37 +0x06d:  test   %al,%al
0832ca39 +0x06f:  je     0832ca61 <+0x97>
0832ca3b +0x071:  movl   $0x0,-0x14(%ebp)
0832ca42 +0x078:  movl   $0x0,-0x10(%ebp)
0832ca49 +0x07f:  lea    -0x14(%ebp),%eax
0832ca4c +0x082:  mov    %eax,0x8(%esp)
0832ca50 +0x086:  lea    -0x10(%ebp),%eax
0832ca53 +0x089:  mov    %eax,0x4(%esp)
0832ca57 +0x08d:  mov    %ebx,(%esp)
0832ca5a +0x090:  call   0832e52a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x588>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x588
0832ca5f +0x095:  jmp    0832cad1 <+0x107>
0832ca61 +0x097:  mov    0x18(%ebp),%eax
0832ca64 +0x09a:  mov    (%eax),%ecx
0832ca66 +0x09c:  mov    0x1c(%ebp),%edx
0832ca69 +0x09f:  mov    %edx,%eax
0832ca6b +0x0a1:  add    %eax,%eax
0832ca6d +0x0a3:  add    %edx,%eax
0832ca6f +0x0a5:  shl    $0x4,%eax
0832ca72 +0x0a8:  add    $0xb80,%eax
0832ca77 +0x0ad:  add    0xc(%ebp),%eax
0832ca7a +0x0b0:  add    $0xc,%eax
0832ca7d +0x0b3:  mov    %ecx,0x4(%esp)
0832ca81 +0x0b7:  mov    %eax,(%esp)
0832ca84 +0x0ba:  call   080f5632 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5e3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5e3
0832ca89 +0x0bf:  mov    %eax,%esi
0832ca8b +0x0c1:  mov    0x18(%ebp),%eax
0832ca8e +0x0c4:  mov    (%eax),%eax
0832ca90 +0x0c6:  lea    -0x1(%eax),%ecx
0832ca93 +0x0c9:  mov    0x1c(%ebp),%edx
0832ca96 +0x0cc:  mov    %edx,%eax
0832ca98 +0x0ce:  add    %eax,%eax
0832ca9a +0x0d0:  add    %edx,%eax
0832ca9c +0x0d2:  shl    $0x4,%eax
0832ca9f +0x0d5:  add    $0xb80,%eax
0832caa4 +0x0da:  add    0xc(%ebp),%eax
0832caa7 +0x0dd:  add    $0xc,%eax
0832caaa +0x0e0:  mov    %ecx,0x4(%esp)
0832caae +0x0e4:  mov    %eax,(%esp)
0832cab1 +0x0e7:  call   080f5632 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5e3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5e3
0832cab6 +0x0ec:  mov    (%eax),%eax
0832cab8 +0x0ee:  add    $0x1,%eax
0832cabb +0x0f1:  mov    %eax,-0xc(%ebp)
0832cabe +0x0f4:  mov    %esi,0x8(%esp)
0832cac2 +0x0f8:  lea    -0xc(%ebp),%eax
0832cac5 +0x0fb:  mov    %eax,0x4(%esp)
0832cac9 +0x0ff:  mov    %ebx,(%esp)
0832cacc +0x102:  call   0832e55c <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x5ba>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x5ba
0832cad1 +0x107:  mov    %ebx,%eax
0832cad3 +0x109:  add    $0x20,%esp
0832cad6 +0x10c:  pop    %ebx
0832cad7 +0x10d:  pop    %esi
0832cad8 +0x10e:  pop    %ebp
0832cad9 +0x10f:  ret    $0x4
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus @ 0x832c9ca

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus(unsigned int,
   ExtreamDungeon::ENUM_INPUTITEMS_RARITY, unsigned int&, ExtreamDungeon::eBindSphereType) const */

pair<unsigned_int,unsigned_int> *
ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus
          (pair<unsigned_int,unsigned_int> *param_1,CCompound_ExtreamDun_Item *param_2,
          undefined4 param_3,undefined4 param_4,uint *param_5,int param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  int local_18 [3];
  
  uVar2 = _determine_level_bonus_index(param_2,param_3,param_4,param_6);
  *param_5 = uVar2;
  if (*param_5 != 0) {
    uVar2 = *param_5;
    uVar3 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                      ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                       (param_2 + param_6 * 0x30 + 0xb8c));
    if (uVar2 < uVar3) {
      bVar1 = false;
      goto LAB_0832ca37;
    }
  }
  bVar1 = true;
LAB_0832ca37:
  if (bVar1) {
    local_18[0] = 0;
    local_18[1] = 0;
    std::pair<unsigned_int,unsigned_int>::pair<int,int>(param_1,local_18 + 1,local_18);
  }
  else {
    puVar4 = (uint *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                               ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                                (param_2 + param_6 * 0x30 + 0xb8c),*param_5);
    piVar5 = (int *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                              ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                               (param_2 + param_6 * 0x30 + 0xb8c),*param_5 - 1);
    local_18[2] = *piVar5 + 1;
    std::pair<unsigned_int,unsigned_int>::pair<unsigned_int,unsigned_int_const&>
              (param_1,(uint *)(local_18 + 2),puVar4);
  }
  return param_1;
}
```
