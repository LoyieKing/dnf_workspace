# _determine_level_bonus

`_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusENS_22ENUM_INPUTITEMS_RARITYEjNS_23ENUM_OUTPUTITEMS_RARITYENS_15eBindSphereTypeE`

`ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus(ExtreamDungeon::ENUM_INPUTITEMS_RARITY, unsigned int, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, ExtreamDungeon::eBindSphereType) const`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832cadc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832cadc  _ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusENS_22ENUM_INPUTITEMS_RARITYEjNS_23ENUM_OUTPUTITEMS_RARITYENS_15eBindSphereTypeE
#           ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus(ExtreamDungeon::ENUM_INPUTITEMS_RARITY, unsigned int, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, ExtreamDungeon::eBindSphereType) const
# range [0x0832cadc, 0x0832cc01]
0832cadc +0x000:  push   %ebp
0832cadd +0x001:  mov    %esp,%ebp
0832cadf +0x003:  push   %esi
0832cae0 +0x004:  push   %ebx
0832cae1 +0x005:  sub    $0x20,%esp
0832cae4 +0x008:  mov    0x8(%ebp),%ebx
0832cae7 +0x00b:  mov    0x1c(%ebp),%eax
0832caea +0x00e:  mov    %eax,0xc(%esp)
0832caee +0x012:  mov    0x10(%ebp),%eax
0832caf1 +0x015:  mov    %eax,0x8(%esp)
0832caf5 +0x019:  mov    0x14(%ebp),%eax
0832caf8 +0x01c:  mov    %eax,0x4(%esp)
0832cafc +0x020:  mov    0xc(%ebp),%eax
0832caff +0x023:  mov    %eax,(%esp)
0832cb02 +0x026:  call   0832cc02 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item28_determine_level_bonus_indexEjNS_22ENUM_INPUTITEMS_RARITYENS_15eBindSphereTypeE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus_index(unsigned int, ExtreamDungeon::ENUM_INPUTITEMS_RARITY, ExtreamDungeon::eBindSphereType) const
0832cb07 +0x02b:  mov    %eax,-0xc(%ebp)
0832cb0a +0x02e:  cmpl   $0x0,0x10(%ebp)
0832cb0e +0x032:  jne    0832cb2a <+0x4e>
0832cb10 +0x034:  mov    0x18(%ebp),%eax
0832cb13 +0x037:  cmp    $0x1,%eax
0832cb16 +0x03a:  jle    0832cb2a <+0x4e>
0832cb18 +0x03c:  mov    0x18(%ebp),%eax
0832cb1b +0x03f:  cmp    $0x3,%eax
0832cb1e +0x042:  jg     0832cb2a <+0x4e>
0832cb20 +0x044:  cmpl   $0x0,-0xc(%ebp)
0832cb24 +0x048:  je     0832cb2a <+0x4e>
0832cb26 +0x04a:  subl   $0x1,-0xc(%ebp)
0832cb2a +0x04e:  cmpl   $0x0,-0xc(%ebp)
0832cb2e +0x052:  je     0832cb54 <+0x78>
0832cb30 +0x054:  mov    0x1c(%ebp),%edx
0832cb33 +0x057:  mov    %edx,%eax
0832cb35 +0x059:  add    %eax,%eax
0832cb37 +0x05b:  add    %edx,%eax
0832cb39 +0x05d:  shl    $0x4,%eax
0832cb3c +0x060:  add    $0xb80,%eax
0832cb41 +0x065:  add    0xc(%ebp),%eax
0832cb44 +0x068:  add    $0xc,%eax
0832cb47 +0x06b:  mov    %eax,(%esp)
0832cb4a +0x06e:  call   080e2462 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x208>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x208
0832cb4f +0x073:  cmp    -0xc(%ebp),%eax
0832cb52 +0x076:  ja     0832cb5b <+0x7f>
0832cb54 +0x078:  mov    $0x1,%eax
0832cb59 +0x07d:  jmp    0832cb60 <+0x84>
0832cb5b +0x07f:  mov    $0x0,%eax
0832cb60 +0x084:  test   %al,%al
0832cb62 +0x086:  je     0832cb8a <+0xae>
0832cb64 +0x088:  movl   $0x0,-0x18(%ebp)
0832cb6b +0x08f:  movl   $0x0,-0x14(%ebp)
0832cb72 +0x096:  lea    -0x18(%ebp),%eax
0832cb75 +0x099:  mov    %eax,0x8(%esp)
0832cb79 +0x09d:  lea    -0x14(%ebp),%eax
0832cb7c +0x0a0:  mov    %eax,0x4(%esp)
0832cb80 +0x0a4:  mov    %ebx,(%esp)
0832cb83 +0x0a7:  call   0832e52a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x588>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x588
0832cb88 +0x0ac:  jmp    0832cbf6 <+0x11a>
0832cb8a +0x0ae:  mov    0x1c(%ebp),%edx
0832cb8d +0x0b1:  mov    %edx,%eax
0832cb8f +0x0b3:  add    %eax,%eax
0832cb91 +0x0b5:  add    %edx,%eax
0832cb93 +0x0b7:  shl    $0x4,%eax
0832cb96 +0x0ba:  add    $0xb80,%eax
0832cb9b +0x0bf:  add    0xc(%ebp),%eax
0832cb9e +0x0c2:  lea    0xc(%eax),%edx
0832cba1 +0x0c5:  mov    -0xc(%ebp),%eax
0832cba4 +0x0c8:  mov    %eax,0x4(%esp)
0832cba8 +0x0cc:  mov    %edx,(%esp)
0832cbab +0x0cf:  call   080f5632 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5e3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5e3
0832cbb0 +0x0d4:  mov    %eax,%esi
0832cbb2 +0x0d6:  mov    -0xc(%ebp),%eax
0832cbb5 +0x0d9:  lea    -0x1(%eax),%ecx
0832cbb8 +0x0dc:  mov    0x1c(%ebp),%edx
0832cbbb +0x0df:  mov    %edx,%eax
0832cbbd +0x0e1:  add    %eax,%eax
0832cbbf +0x0e3:  add    %edx,%eax
0832cbc1 +0x0e5:  shl    $0x4,%eax
0832cbc4 +0x0e8:  add    $0xb80,%eax
0832cbc9 +0x0ed:  add    0xc(%ebp),%eax
0832cbcc +0x0f0:  add    $0xc,%eax
0832cbcf +0x0f3:  mov    %ecx,0x4(%esp)
0832cbd3 +0x0f7:  mov    %eax,(%esp)
0832cbd6 +0x0fa:  call   080f5632 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5e3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5e3
0832cbdb +0x0ff:  mov    (%eax),%eax
0832cbdd +0x101:  add    $0x1,%eax
0832cbe0 +0x104:  mov    %eax,-0x10(%ebp)
0832cbe3 +0x107:  mov    %esi,0x8(%esp)
0832cbe7 +0x10b:  lea    -0x10(%ebp),%eax
0832cbea +0x10e:  mov    %eax,0x4(%esp)
0832cbee +0x112:  mov    %ebx,(%esp)
0832cbf1 +0x115:  call   0832e55c <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x5ba>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x5ba
0832cbf6 +0x11a:  mov    %ebx,%eax
0832cbf8 +0x11c:  add    $0x20,%esp
0832cbfb +0x11f:  pop    %ebx
0832cbfc +0x120:  pop    %esi
0832cbfd +0x121:  pop    %ebp
0832cbfe +0x122:  ret    $0x4
0832cc01 +0x125:  nop
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus @ 0x832cadc

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus(ExtreamDungeon::ENUM_INPUTITEMS_RARITY,
   unsigned int, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, ExtreamDungeon::eBindSphereType) const */

pair<unsigned_int,unsigned_int> *
ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus
          (pair<unsigned_int,unsigned_int> *param_1,CCompound_ExtreamDun_Item *param_2,int param_3,
          undefined4 param_4,int param_5,int param_6)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int local_1c [3];
  uint local_10;
  
  local_10 = _determine_level_bonus_index(param_2,param_4,param_3,param_6);
  if ((((param_3 == 0) && (1 < param_5)) && (param_5 < 4)) && (local_10 != 0)) {
    local_10 = local_10 - 1;
  }
  if (local_10 != 0) {
    uVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                      ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                       (param_2 + param_6 * 0x30 + 0xb8c));
    if (local_10 < uVar2) {
      bVar1 = false;
      goto LAB_0832cb60;
    }
  }
  bVar1 = true;
LAB_0832cb60:
  if (bVar1) {
    local_1c[0] = 0;
    local_1c[1] = 0;
    std::pair<unsigned_int,unsigned_int>::pair<int,int>(param_1,local_1c + 1,local_1c);
  }
  else {
    puVar3 = (uint *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                               ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                                (param_2 + param_6 * 0x30 + 0xb8c),local_10);
    piVar4 = (int *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                              ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                               (param_2 + param_6 * 0x30 + 0xb8c),local_10 - 1);
    local_1c[2] = *piVar4 + 1;
    std::pair<unsigned_int,unsigned_int>::pair<unsigned_int,unsigned_int_const&>
              (param_1,(uint *)(local_1c + 2),puVar3);
  }
  return param_1;
}
```
