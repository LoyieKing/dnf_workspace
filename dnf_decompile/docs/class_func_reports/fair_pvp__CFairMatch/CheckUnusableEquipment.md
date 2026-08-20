# CheckUnusableEquipment

`_ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item`

`fair_pvp::CFairMatch::CheckUnusableEquipment(Inven_Item const*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08562bdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562bdc  _ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item
#           fair_pvp::CFairMatch::CheckUnusableEquipment(Inven_Item const*)
# range [0x08562bdc, 0x08562cfd]
08562bdc +0x000:  push   %ebp
08562bdd +0x001:  mov    %esp,%ebp
08562bdf +0x003:  push   %esi
08562be0 +0x004:  push   %ebx
08562be1 +0x005:  sub    $0x20,%esp
08562be4 +0x008:  cmpl   $0x0,0x8(%ebp)
08562be8 +0x00c:  jne    08562bf4 <+0x18>
08562bea +0x00e:  mov    $0x0,%eax
08562bef +0x013:  jmp    08562cf7 <+0x11b>
08562bf4 +0x018:  mov    0x8(%ebp),%eax
08562bf7 +0x01b:  mov    0x2(%eax),%eax
08562bfa +0x01e:  test   %eax,%eax
08562bfc +0x020:  jne    08562c08 <+0x2c>
08562bfe +0x022:  mov    $0x1,%eax
08562c03 +0x027:  jmp    08562cf7 <+0x11b>
08562c08 +0x02c:  mov    0x8(%ebp),%eax
08562c0b +0x02f:  mov    0x2(%eax),%eax
08562c0e +0x032:  mov    %eax,%ebx
08562c10 +0x034:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08562c15 +0x039:  mov    %ebx,0x4(%esp)
08562c19 +0x03d:  mov    %eax,(%esp)
08562c1c +0x040:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08562c21 +0x045:  mov    %eax,-0xc(%ebp)
08562c24 +0x048:  cmpl   $0x0,-0xc(%ebp)
08562c28 +0x04c:  jne    08562c34 <+0x58>
08562c2a +0x04e:  mov    $0x0,%eax
08562c2f +0x053:  jmp    08562cf7 <+0x11b>
08562c34 +0x058:  mov    -0xc(%ebp),%eax
08562c37 +0x05b:  mov    %eax,(%esp)
08562c3a +0x05e:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08562c3f +0x063:  test   %al,%al
08562c41 +0x065:  je     08562c4d <+0x71>
08562c43 +0x067:  mov    $0x0,%eax
08562c48 +0x06c:  jmp    08562cf7 <+0x11b>
08562c4d +0x071:  mov    -0xc(%ebp),%eax
08562c50 +0x074:  mov    %eax,(%esp)
08562c53 +0x077:  call   0832e036 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x94>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x94
08562c58 +0x07c:  test   %eax,%eax
08562c5a +0x07e:  sete   %al
08562c5d +0x081:  test   %al,%al
08562c5f +0x083:  je     08562c6b <+0x8f>
08562c61 +0x085:  mov    $0x1,%eax
08562c66 +0x08a:  jmp    08562cf7 <+0x11b>
08562c6b +0x08f:  mov    -0xc(%ebp),%eax
08562c6e +0x092:  mov    %eax,(%esp)
08562c71 +0x095:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
08562c76 +0x09a:  mov    %eax,%esi
08562c78 +0x09c:  mov    -0xc(%ebp),%eax
08562c7b +0x09f:  mov    %eax,(%esp)
08562c7e +0x0a2:  call   0832e036 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x94>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x94
08562c83 +0x0a7:  mov    %eax,%ebx
08562c85 +0x0a9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08562c8a +0x0ae:  add    $0x68,%eax
08562c8d +0x0b1:  mov    %esi,0x8(%esp)
08562c91 +0x0b5:  mov    %ebx,0x4(%esp)
08562c95 +0x0b9:  mov    %eax,(%esp)
08562c98 +0x0bc:  call   08568af6 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x4c0>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x4c0
08562c9d +0x0c1:  xor    $0x1,%eax
08562ca0 +0x0c4:  test   %al,%al
08562ca2 +0x0c6:  je     08562cab <+0xcf>
08562ca4 +0x0c8:  mov    $0x0,%eax
08562ca9 +0x0cd:  jmp    08562cf7 <+0x11b>
08562cab +0x0cf:  mov    -0xc(%ebp),%eax
08562cae +0x0d2:  mov    %eax,(%esp)
08562cb1 +0x0d5:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08562cb6 +0x0da:  mov    %eax,%esi
08562cb8 +0x0dc:  mov    -0xc(%ebp),%eax
08562cbb +0x0df:  mov    (%eax),%eax
08562cbd +0x0e1:  add    $0xc,%eax
08562cc0 +0x0e4:  mov    (%eax),%edx
08562cc2 +0x0e6:  mov    -0xc(%ebp),%eax
08562cc5 +0x0e9:  mov    %eax,(%esp)
08562cc8 +0x0ec:  call   *%edx
08562cca +0x0ee:  mov    %eax,%ebx
08562ccc +0x0f0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08562cd1 +0x0f5:  add    $0x68,%eax
08562cd4 +0x0f8:  mov    %esi,0x8(%esp)
08562cd8 +0x0fc:  mov    %ebx,0x4(%esp)
08562cdc +0x100:  mov    %eax,(%esp)
08562cdf +0x103:  call   08568bbe <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x588>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x588
08562ce4 +0x108:  xor    $0x1,%eax
08562ce7 +0x10b:  test   %al,%al
08562ce9 +0x10d:  je     08562cf2 <+0x116>
08562ceb +0x10f:  mov    $0x0,%eax
08562cf0 +0x114:  jmp    08562cf7 <+0x11b>
08562cf2 +0x116:  mov    $0x1,%eax
08562cf7 +0x11b:  add    $0x20,%esp
08562cfa +0x11e:  pop    %ebx
08562cfb +0x11f:  pop    %esi
08562cfc +0x120:  pop    %ebp
08562cfd +0x121:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::CheckUnusableEquipment @ 0x8562bdc

/* fair_pvp::CFairMatch::CheckUnusableEquipment(Inven_Item const*) */

undefined4 fair_pvp::CFairMatch::CheckUnusableEquipment(Inven_Item *param_1)

{
  char cVar1;
  undefined4 uVar2;
  CDataManager *this;
  CItem *this_00;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == (Inven_Item *)0x0) {
    uVar2 = 0;
  }
  else if (*(int *)(param_1 + 2) == 0) {
    uVar2 = 1;
  }
  else {
    iVar3 = *(int *)(param_1 + 2);
    this = (CDataManager *)G_CDataManager();
    this_00 = (CItem *)CDataManager::find_item(this,iVar3);
    if (this_00 == (CItem *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = CItem::is_stackable(this_00);
      if (cVar1 == '\0') {
        iVar3 = CEquipItem::GetUsableEquipmentType((CEquipItem *)this_00);
        if (iVar3 == 0) {
          uVar2 = 1;
        }
        else {
          uVar2 = CItem::getUsableLevel(this_00);
          uVar4 = CEquipItem::GetUsableEquipmentType((CEquipItem *)this_00);
          iVar3 = G_CDataManager();
          cVar1 = ServerParameterScript::CheckUnusableEquipmentInfo
                            ((ServerParameterScript *)(iVar3 + 0x68),uVar4,uVar2);
          if (cVar1 == '\x01') {
            uVar2 = CItem::get_index(this_00);
            uVar4 = (**(code **)(*(int *)this_00 + 0xc))(this_00);
            iVar3 = G_CDataManager();
            cVar1 = ServerParameterScript::CheckUnusableItem(iVar3 + 0x68,uVar4,uVar2);
            if (cVar1 == '\x01') {
              uVar2 = 1;
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```
