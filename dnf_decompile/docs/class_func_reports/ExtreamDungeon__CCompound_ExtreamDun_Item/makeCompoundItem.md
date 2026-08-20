# makeCompoundItem

`_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE`

`ExtreamDungeon::CCompound_ExtreamDun_Item::makeCompoundItem(CEquipItem const**, char, Inven_Item&, ExtreamDungeon::eBindSphereType)`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832ccc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832ccc0  _ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE
#           ExtreamDungeon::CCompound_ExtreamDun_Item::makeCompoundItem(CEquipItem const**, char, Inven_Item&, ExtreamDungeon::eBindSphereType)
# range [0x0832ccc0, 0x0832cffd]
0832ccc0 +0x000:  push   %ebp
0832ccc1 +0x001:  mov    %esp,%ebp
0832ccc3 +0x003:  push   %ebx
0832ccc4 +0x004:  sub    $0x94,%esp
0832ccca +0x00a:  mov    0x10(%ebp),%eax
0832cccd +0x00d:  mov    %al,-0x6c(%ebp)
0832ccd0 +0x010:  mov    0x14(%ebp),%eax
0832ccd3 +0x013:  mov    %eax,(%esp)
0832ccd6 +0x016:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0832ccdb +0x01b:  mov    0xc(%ebp),%eax
0832ccde +0x01e:  mov    %eax,0x4(%esp)
0832cce2 +0x022:  mov    0x8(%ebp),%eax
0832cce5 +0x025:  mov    %eax,(%esp)
0832cce8 +0x028:  call   0832e40c <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x46a>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x46a
0832cced +0x02d:  mov    %eax,-0x28(%ebp)
0832ccf0 +0x030:  mov    0xc(%ebp),%eax
0832ccf3 +0x033:  mov    (%eax),%eax
0832ccf5 +0x035:  mov    %eax,(%esp)
0832ccf8 +0x038:  call   0832e036 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x94>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x94
0832ccfd +0x03d:  mov    %eax,0x4(%esp)
0832cd01 +0x041:  mov    0x8(%ebp),%eax
0832cd04 +0x044:  mov    %eax,(%esp)
0832cd07 +0x047:  call   0832c620 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInputItem(ENUM_UNUSABLE_EQUIPMENT_TYPE) const
0832cd0c +0x04c:  mov    %eax,-0x24(%ebp)
0832cd0f +0x04f:  movl   $0x4,-0x20(%ebp)
0832cd16 +0x056:  mov    0x8(%ebp),%eax
0832cd19 +0x059:  mov    (%eax),%eax
0832cd1b +0x05b:  mov    %eax,(%esp)
0832cd1e +0x05e:  call   080cba46 <_GLOBAL__I__ZN10BingoEventC2Ev+0x893>  ; global constructors keyed to BingoEvent::BingoEvent()+0x893
0832cd23 +0x063:  mov    %eax,%ecx
0832cd25 +0x065:  mov    $0x431bde83,%edx
0832cd2a +0x06a:  mov    %ecx,%eax
0832cd2c +0x06c:  mul    %edx
0832cd2e +0x06e:  mov    %edx,%eax
0832cd30 +0x070:  shr    $0x12,%eax
0832cd33 +0x073:  imul   $0xf4240,%eax,%eax
0832cd39 +0x079:  mov    %ecx,%edx
0832cd3b +0x07b:  sub    %eax,%edx
0832cd3d +0x07d:  mov    %edx,%eax
0832cd3f +0x07f:  add    $0x1,%eax
0832cd42 +0x082:  mov    %eax,-0x1c(%ebp)
0832cd45 +0x085:  mov    0x8(%ebp),%eax
0832cd48 +0x088:  mov    (%eax),%eax
0832cd4a +0x08a:  mov    %eax,(%esp)
0832cd4d +0x08d:  call   080cba46 <_GLOBAL__I__ZN10BingoEventC2Ev+0x893>  ; global constructors keyed to BingoEvent::BingoEvent()+0x893
0832cd52 +0x092:  mov    %eax,%ecx
0832cd54 +0x094:  mov    $0x431bde83,%edx
0832cd59 +0x099:  mov    %ecx,%eax
0832cd5b +0x09b:  mul    %edx
0832cd5d +0x09d:  mov    %edx,%eax
0832cd5f +0x09f:  shr    $0x12,%eax
0832cd62 +0x0a2:  imul   $0xf4240,%eax,%eax
0832cd68 +0x0a8:  mov    %ecx,%edx
0832cd6a +0x0aa:  sub    %eax,%edx
0832cd6c +0x0ac:  mov    %edx,%eax
0832cd6e +0x0ae:  add    $0x1,%eax
0832cd71 +0x0b1:  mov    %eax,-0x18(%ebp)
0832cd74 +0x0b4:  movl   $0x0,-0x14(%ebp)
0832cd7b +0x0bb:  cmpl   $0x0,-0x24(%ebp)
0832cd7f +0x0bf:  jne    0832cd9f <+0xdf>
0832cd81 +0x0c1:  mov    -0x24(%ebp),%eax
0832cd84 +0x0c4:  mov    %eax,0x8(%esp)
0832cd88 +0x0c8:  mov    -0x18(%ebp),%eax
0832cd8b +0x0cb:  mov    %eax,0x4(%esp)
0832cd8f +0x0cf:  mov    0x8(%ebp),%eax
0832cd92 +0x0d2:  mov    %eax,(%esp)
0832cd95 +0x0d5:  call   0832c976 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_determine_rarityEjNS_22ENUM_INPUTITEMS_RARITYE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_rarity(unsigned int, ExtreamDungeon::ENUM_INPUTITEMS_RARITY) const
0832cd9a +0x0da:  mov    %eax,-0x20(%ebp)
0832cd9d +0x0dd:  jmp    0832cdb4 <+0xf4>
0832cd9f +0x0df:  mov    -0x24(%ebp),%eax
0832cda2 +0x0e2:  mov    %eax,0x4(%esp)
0832cda6 +0x0e6:  mov    0x8(%ebp),%eax
0832cda9 +0x0e9:  mov    %eax,(%esp)
0832cdac +0x0ec:  call   0832c5f0 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_convertInput_To_OutputENS_22ENUM_INPUTITEMS_RARITYE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInput_To_Output(ExtreamDungeon::ENUM_INPUTITEMS_RARITY) const
0832cdb1 +0x0f1:  mov    %eax,-0x20(%ebp)
0832cdb4 +0x0f4:  lea    -0x60(%ebp),%eax
0832cdb7 +0x0f7:  mov    0x18(%ebp),%edx
0832cdba +0x0fa:  mov    %edx,0x14(%esp)
0832cdbe +0x0fe:  mov    -0x20(%ebp),%edx
0832cdc1 +0x101:  mov    %edx,0x10(%esp)
0832cdc5 +0x105:  mov    -0x1c(%ebp),%edx
0832cdc8 +0x108:  mov    %edx,0xc(%esp)
0832cdcc +0x10c:  mov    -0x24(%ebp),%edx
0832cdcf +0x10f:  mov    %edx,0x8(%esp)
0832cdd3 +0x113:  mov    0x8(%ebp),%edx
0832cdd6 +0x116:  mov    %edx,0x4(%esp)
0832cdda +0x11a:  mov    %eax,(%esp)
0832cddd +0x11d:  call   0832cadc <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusENS_22ENUM_INPUTITEMS_RARITYEjNS_23ENUM_OUTPUTITEMS_RARITYENS_15eBindSphereTypeE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus(ExtreamDungeon::ENUM_INPUTITEMS_RARITY, unsigned int, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, ExtreamDungeon::eBindSphereType) const
0832cde2 +0x122:  sub    $0x4,%esp
0832cde5 +0x125:  movl   $0x0,-0x10(%ebp)
0832cdec +0x12c:  mov    -0x5c(%ebp),%eax
0832cdef +0x12f:  cmp    $0xa,%eax
0832cdf2 +0x132:  jne    0832ce24 <+0x164>
0832cdf4 +0x134:  cmpl   $0x1,-0x24(%ebp)
0832cdf8 +0x138:  je     0832ce24 <+0x164>
0832cdfa +0x13a:  mov    -0x28(%ebp),%ecx
0832cdfd +0x13d:  mov    $0xcccccccd,%edx
0832ce02 +0x142:  mov    %ecx,%eax
0832ce04 +0x144:  mul    %edx
0832ce06 +0x146:  shr    $0x3,%edx
0832ce09 +0x149:  mov    %edx,%eax
0832ce0b +0x14b:  shl    $0x2,%eax
0832ce0e +0x14e:  add    %edx,%eax
0832ce10 +0x150:  add    %eax,%eax
0832ce12 +0x152:  mov    %ecx,%edx
0832ce14 +0x154:  sub    %eax,%edx
0832ce16 +0x156:  cmp    $0x4,%edx
0832ce19 +0x159:  jbe    0832ce24 <+0x164>
0832ce1b +0x15b:  movl   $0x0,-0x10(%ebp)
0832ce22 +0x162:  jmp    0832ce81 <+0x1c1>
0832ce24 +0x164:  mov    -0x5c(%ebp),%eax
0832ce27 +0x167:  add    -0x28(%ebp),%eax
0832ce2a +0x16a:  mov    %eax,-0x50(%ebp)
0832ce2d +0x16d:  mov    -0x60(%ebp),%eax
0832ce30 +0x170:  add    -0x28(%ebp),%eax
0832ce33 +0x173:  mov    %eax,-0x4c(%ebp)
0832ce36 +0x176:  lea    -0x50(%ebp),%eax
0832ce39 +0x179:  mov    %eax,0x8(%esp)
0832ce3d +0x17d:  lea    -0x4c(%ebp),%eax
0832ce40 +0x180:  mov    %eax,0x4(%esp)
0832ce44 +0x184:  lea    -0x58(%ebp),%eax
0832ce47 +0x187:  mov    %eax,(%esp)
0832ce4a +0x18a:  call   0832e58a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x5e8>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x5e8
0832ce4f +0x18f:  movsbl -0x6c(%ebp),%ecx
0832ce53 +0x193:  mov    -0x58(%ebp),%eax
0832ce56 +0x196:  mov    -0x54(%ebp),%edx
0832ce59 +0x199:  mov    %eax,0x10(%esp)
0832ce5d +0x19d:  mov    %edx,0x14(%esp)
0832ce61 +0x1a1:  mov    -0x20(%ebp),%eax
0832ce64 +0x1a4:  mov    %eax,0xc(%esp)
0832ce68 +0x1a8:  mov    %ecx,0x8(%esp)
0832ce6c +0x1ac:  mov    0xc(%ebp),%eax
0832ce6f +0x1af:  mov    %eax,0x4(%esp)
0832ce73 +0x1b3:  mov    0x8(%ebp),%eax
0832ce76 +0x1b6:  mov    %eax,(%esp)
0832ce79 +0x1b9:  call   0832d438 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemAll_BindSphere(CEquipItem const**, char, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int>) const
0832ce7e +0x1be:  mov    %eax,-0x10(%ebp)
0832ce81 +0x1c1:  cmpl   $0x0,-0x10(%ebp)
0832ce85 +0x1c5:  jne    0832cf9c <+0x2dc>
0832ce8b +0x1cb:  mov    -0x24(%ebp),%eax
0832ce8e +0x1ce:  test   %eax,%eax
0832ce90 +0x1d0:  jle    0832cf68 <+0x2a8>
0832ce96 +0x1d6:  mov    -0x24(%ebp),%eax
0832ce99 +0x1d9:  cmp    $0x2,%eax
0832ce9c +0x1dc:  jg     0832cf68 <+0x2a8>
0832cea2 +0x1e2:  mov    -0x28(%ebp),%eax
0832cea5 +0x1e5:  add    $0x5,%eax
0832cea8 +0x1e8:  mov    %eax,-0x40(%ebp)
0832ceab +0x1eb:  mov    -0x28(%ebp),%eax
0832ceae +0x1ee:  add    $0x1,%eax
0832ceb1 +0x1f1:  mov    %eax,-0x3c(%ebp)
0832ceb4 +0x1f4:  lea    -0x40(%ebp),%eax
0832ceb7 +0x1f7:  mov    %eax,0x8(%esp)
0832cebb +0x1fb:  lea    -0x3c(%ebp),%eax
0832cebe +0x1fe:  mov    %eax,0x4(%esp)
0832cec2 +0x202:  lea    -0x48(%ebp),%eax
0832cec5 +0x205:  mov    %eax,(%esp)
0832cec8 +0x208:  call   0832e58a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x5e8>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x5e8
0832cecd +0x20d:  movsbl -0x6c(%ebp),%ecx
0832ced1 +0x211:  mov    -0x48(%ebp),%eax
0832ced4 +0x214:  mov    -0x44(%ebp),%edx
0832ced7 +0x217:  mov    %eax,0x10(%esp)
0832cedb +0x21b:  mov    %edx,0x14(%esp)
0832cedf +0x21f:  mov    -0x20(%ebp),%eax
0832cee2 +0x222:  mov    %eax,0xc(%esp)
0832cee6 +0x226:  mov    %ecx,0x8(%esp)
0832ceea +0x22a:  mov    0xc(%ebp),%eax
0832ceed +0x22d:  mov    %eax,0x4(%esp)
0832cef1 +0x231:  mov    0x8(%ebp),%eax
0832cef4 +0x234:  mov    %eax,(%esp)
0832cef7 +0x237:  call   0832d438 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemAll_BindSphere(CEquipItem const**, char, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int>) const
0832cefc +0x23c:  mov    %eax,-0x10(%ebp)
0832ceff +0x23f:  cmpl   $0x0,-0x10(%ebp)
0832cf03 +0x243:  jne    0832cf9b <+0x2db>
0832cf09 +0x249:  mov    -0x28(%ebp),%eax
0832cf0c +0x24c:  add    $0xa,%eax
0832cf0f +0x24f:  mov    %eax,-0x30(%ebp)
0832cf12 +0x252:  mov    -0x28(%ebp),%eax
0832cf15 +0x255:  add    $0x6,%eax
0832cf18 +0x258:  mov    %eax,-0x2c(%ebp)
0832cf1b +0x25b:  lea    -0x30(%ebp),%eax
0832cf1e +0x25e:  mov    %eax,0x8(%esp)
0832cf22 +0x262:  lea    -0x2c(%ebp),%eax
0832cf25 +0x265:  mov    %eax,0x4(%esp)
0832cf29 +0x269:  lea    -0x38(%ebp),%eax
0832cf2c +0x26c:  mov    %eax,(%esp)
0832cf2f +0x26f:  call   0832e58a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x5e8>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x5e8
0832cf34 +0x274:  movsbl -0x6c(%ebp),%ecx
0832cf38 +0x278:  mov    -0x38(%ebp),%eax
0832cf3b +0x27b:  mov    -0x34(%ebp),%edx
0832cf3e +0x27e:  mov    %eax,0x10(%esp)
0832cf42 +0x282:  mov    %edx,0x14(%esp)
0832cf46 +0x286:  mov    -0x20(%ebp),%eax
0832cf49 +0x289:  mov    %eax,0xc(%esp)
0832cf4d +0x28d:  mov    %ecx,0x8(%esp)
0832cf51 +0x291:  mov    0xc(%ebp),%eax
0832cf54 +0x294:  mov    %eax,0x4(%esp)
0832cf58 +0x298:  mov    0x8(%ebp),%eax
0832cf5b +0x29b:  mov    %eax,(%esp)
0832cf5e +0x29e:  call   0832d438 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemAll_BindSphere(CEquipItem const**, char, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int>) const
0832cf63 +0x2a3:  mov    %eax,-0x10(%ebp)
0832cf66 +0x2a6:  jmp    0832cf9c <+0x2dc>
0832cf68 +0x2a8:  cmpl   $0x0,-0x24(%ebp)
0832cf6c +0x2ac:  jne    0832cf9c <+0x2dc>
0832cf6e +0x2ae:  movsbl -0x6c(%ebp),%eax
0832cf72 +0x2b2:  mov    -0x28(%ebp),%edx
0832cf75 +0x2b5:  mov    %edx,0x10(%esp)
0832cf79 +0x2b9:  mov    -0x20(%ebp),%edx
0832cf7c +0x2bc:  mov    %edx,0xc(%esp)
0832cf80 +0x2c0:  mov    %eax,0x8(%esp)
0832cf84 +0x2c4:  mov    0xc(%ebp),%eax
0832cf87 +0x2c7:  mov    %eax,0x4(%esp)
0832cf8b +0x2cb:  mov    0x8(%ebp),%eax
0832cf8e +0x2ce:  mov    %eax,(%esp)
0832cf91 +0x2d1:  call   0832cffe <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_exception_RareEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYEj>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_exception_Rare(CEquipItem const**, char, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, unsigned int) const
0832cf96 +0x2d6:  mov    %eax,-0x10(%ebp)
0832cf99 +0x2d9:  jmp    0832cf9c <+0x2dc>
0832cf9b +0x2db:  nop
0832cf9c +0x2dc:  cmpl   $0x0,-0x10(%ebp)
0832cfa0 +0x2e0:  jne    0832cfa9 <+0x2e9>
0832cfa2 +0x2e2:  mov    $0x0,%eax
0832cfa7 +0x2e7:  jmp    0832cff9 <+0x339>
0832cfa9 +0x2e9:  mov    0x14(%ebp),%eax
0832cfac +0x2ec:  mov    -0x10(%ebp),%edx
0832cfaf +0x2ef:  mov    %edx,0x2(%eax)
0832cfb2 +0x2f2:  mov    0x14(%ebp),%eax
0832cfb5 +0x2f5:  mov    0x2(%eax),%eax
0832cfb8 +0x2f8:  mov    %eax,%ebx
0832cfba +0x2fa:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0832cfbf +0x2ff:  mov    %ebx,0x4(%esp)
0832cfc3 +0x303:  mov    %eax,(%esp)
0832cfc6 +0x306:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0832cfcb +0x30b:  mov    %eax,-0xc(%ebp)
0832cfce +0x30e:  cmpl   $0x0,-0xc(%ebp)
0832cfd2 +0x312:  jne    0832cfdb <+0x31b>
0832cfd4 +0x314:  mov    $0x0,%eax
0832cfd9 +0x319:  jmp    0832cff9 <+0x339>
0832cfdb +0x31b:  mov    -0xc(%ebp),%eax
0832cfde +0x31e:  mov    (%eax),%eax
0832cfe0 +0x320:  add    $0x8,%eax
0832cfe3 +0x323:  mov    (%eax),%edx
0832cfe5 +0x325:  mov    0x14(%ebp),%eax
0832cfe8 +0x328:  mov    %eax,0x4(%esp)
0832cfec +0x32c:  mov    -0xc(%ebp),%eax
0832cfef +0x32f:  mov    %eax,(%esp)
0832cff2 +0x332:  call   *%edx
0832cff4 +0x334:  mov    $0x1,%eax
0832cff9 +0x339:  mov    -0x4(%ebp),%ebx
0832cffc +0x33c:  leave
0832cffd +0x33d:  ret
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::makeCompoundItem @ 0x832ccc0

/* ExtreamDungeon::CCompound_ExtreamDun_Item::makeCompoundItem(CEquipItem const**, char,
   Inven_Item&, ExtreamDungeon::eBindSphereType) */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::makeCompoundItem
          (CCompound_ExtreamDun_Item *this,CEquipItem **param_1,char param_2,Inven_Item *param_3,
          undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  CDataManager *this_00;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int *local_10;
  
  Inven_Item::reset(param_3);
  local_2c = _get_base_level(this,param_1);
  uVar2 = CEquipItem::GetUsableEquipmentType(*param_1);
  local_28 = _convertInputItem(this,uVar2);
  local_24 = 4;
  uVar3 = CMTRand::randInt(*(CMTRand **)this);
  local_20 = uVar3 % 1000000 + 1;
  uVar3 = CMTRand::randInt(*(CMTRand **)this);
  local_1c = uVar3 % 1000000 + 1;
  local_18 = 0;
  if (local_28 == 0) {
    local_24 = _determine_rarity(this,local_1c,0);
  }
  else {
    local_24 = _convertInput_To_Output(this,local_28);
  }
  _determine_level_bonus(&local_64,this,local_28,local_20,local_24,param_5);
  local_14 = 0;
  if (((local_60 == 10) && (local_28 != 1)) && (4 < local_2c % 10)) {
    local_14 = 0;
  }
  else {
    local_54 = local_60 + local_2c;
    local_50 = local_64 + local_2c;
    std::pair<unsigned_int,unsigned_int>::pair<unsigned_int,unsigned_int>
              ((pair<unsigned_int,unsigned_int> *)&local_5c,&local_50,&local_54);
    local_14 = _FindItemAll_BindSphere(this,param_1,(int)param_2,local_24,local_5c,local_58);
  }
  if (local_14 == 0) {
    if ((local_28 < 1) || (2 < local_28)) {
      if (local_28 == 0) {
        local_14 = _exception_Rare(this,param_1,(int)param_2,local_24,local_2c);
      }
    }
    else {
      local_44 = local_2c + 5;
      local_40 = local_2c + 1;
      std::pair<unsigned_int,unsigned_int>::pair<unsigned_int,unsigned_int>
                ((pair<unsigned_int,unsigned_int> *)&local_4c,&local_40,&local_44);
      local_14 = _FindItemAll_BindSphere(this,param_1,(int)param_2,local_24,local_4c,local_48);
      if (local_14 == 0) {
        local_34 = local_2c + 10;
        local_30 = local_2c + 6;
        std::pair<unsigned_int,unsigned_int>::pair<unsigned_int,unsigned_int>
                  ((pair<unsigned_int,unsigned_int> *)&local_3c,&local_30,&local_34);
        local_14 = _FindItemAll_BindSphere(this,param_1,(int)param_2,local_24,local_3c,local_38);
      }
    }
  }
  if (local_14 == 0) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_3 + 2) = local_14;
    iVar1 = *(int *)(param_3 + 2);
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = (int *)CDataManager::find_item(this_00,iVar1);
    if (local_10 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      (**(code **)(*local_10 + 8))(local_10,param_3);
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
