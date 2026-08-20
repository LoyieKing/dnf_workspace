# CheckUnusableEquipment

`_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item`

`online_preliminary::COnlinePreliminary::CheckUnusableEquipment(Inven_Item const*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560920` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560920  _ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item
#           online_preliminary::COnlinePreliminary::CheckUnusableEquipment(Inven_Item const*)
# range [0x08560920, 0x08560a41]
08560920 +0x000:  push   %ebp
08560921 +0x001:  mov    %esp,%ebp
08560923 +0x003:  push   %esi
08560924 +0x004:  push   %ebx
08560925 +0x005:  sub    $0x20,%esp
08560928 +0x008:  cmpl   $0x0,0x8(%ebp)
0856092c +0x00c:  jne    08560938 <+0x18>
0856092e +0x00e:  mov    $0x0,%eax
08560933 +0x013:  jmp    08560a3b <+0x11b>
08560938 +0x018:  mov    0x8(%ebp),%eax
0856093b +0x01b:  mov    0x2(%eax),%eax
0856093e +0x01e:  test   %eax,%eax
08560940 +0x020:  jne    0856094c <+0x2c>
08560942 +0x022:  mov    $0x1,%eax
08560947 +0x027:  jmp    08560a3b <+0x11b>
0856094c +0x02c:  mov    0x8(%ebp),%eax
0856094f +0x02f:  mov    0x2(%eax),%eax
08560952 +0x032:  mov    %eax,%ebx
08560954 +0x034:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08560959 +0x039:  mov    %ebx,0x4(%esp)
0856095d +0x03d:  mov    %eax,(%esp)
08560960 +0x040:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08560965 +0x045:  mov    %eax,-0xc(%ebp)
08560968 +0x048:  cmpl   $0x0,-0xc(%ebp)
0856096c +0x04c:  jne    08560978 <+0x58>
0856096e +0x04e:  mov    $0x0,%eax
08560973 +0x053:  jmp    08560a3b <+0x11b>
08560978 +0x058:  mov    -0xc(%ebp),%eax
0856097b +0x05b:  mov    %eax,(%esp)
0856097e +0x05e:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08560983 +0x063:  test   %al,%al
08560985 +0x065:  je     08560991 <+0x71>
08560987 +0x067:  mov    $0x0,%eax
0856098c +0x06c:  jmp    08560a3b <+0x11b>
08560991 +0x071:  mov    -0xc(%ebp),%eax
08560994 +0x074:  mov    %eax,(%esp)
08560997 +0x077:  call   0832e036 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x94>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x94
0856099c +0x07c:  test   %eax,%eax
0856099e +0x07e:  sete   %al
085609a1 +0x081:  test   %al,%al
085609a3 +0x083:  je     085609af <+0x8f>
085609a5 +0x085:  mov    $0x1,%eax
085609aa +0x08a:  jmp    08560a3b <+0x11b>
085609af +0x08f:  mov    -0xc(%ebp),%eax
085609b2 +0x092:  mov    %eax,(%esp)
085609b5 +0x095:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
085609ba +0x09a:  mov    %eax,%esi
085609bc +0x09c:  mov    -0xc(%ebp),%eax
085609bf +0x09f:  mov    %eax,(%esp)
085609c2 +0x0a2:  call   0832e036 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x94>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x94
085609c7 +0x0a7:  mov    %eax,%ebx
085609c9 +0x0a9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085609ce +0x0ae:  add    $0x68,%eax
085609d1 +0x0b1:  mov    %esi,0x8(%esp)
085609d5 +0x0b5:  mov    %ebx,0x4(%esp)
085609d9 +0x0b9:  mov    %eax,(%esp)
085609dc +0x0bc:  call   08568af6 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x4c0>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x4c0
085609e1 +0x0c1:  xor    $0x1,%eax
085609e4 +0x0c4:  test   %al,%al
085609e6 +0x0c6:  je     085609ef <+0xcf>
085609e8 +0x0c8:  mov    $0x0,%eax
085609ed +0x0cd:  jmp    08560a3b <+0x11b>
085609ef +0x0cf:  mov    -0xc(%ebp),%eax
085609f2 +0x0d2:  mov    %eax,(%esp)
085609f5 +0x0d5:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
085609fa +0x0da:  mov    %eax,%esi
085609fc +0x0dc:  mov    -0xc(%ebp),%eax
085609ff +0x0df:  mov    (%eax),%eax
08560a01 +0x0e1:  add    $0xc,%eax
08560a04 +0x0e4:  mov    (%eax),%edx
08560a06 +0x0e6:  mov    -0xc(%ebp),%eax
08560a09 +0x0e9:  mov    %eax,(%esp)
08560a0c +0x0ec:  call   *%edx
08560a0e +0x0ee:  mov    %eax,%ebx
08560a10 +0x0f0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08560a15 +0x0f5:  add    $0x68,%eax
08560a18 +0x0f8:  mov    %esi,0x8(%esp)
08560a1c +0x0fc:  mov    %ebx,0x4(%esp)
08560a20 +0x100:  mov    %eax,(%esp)
08560a23 +0x103:  call   08568bbe <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x588>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x588
08560a28 +0x108:  xor    $0x1,%eax
08560a2b +0x10b:  test   %al,%al
08560a2d +0x10d:  je     08560a36 <+0x116>
08560a2f +0x10f:  mov    $0x0,%eax
08560a34 +0x114:  jmp    08560a3b <+0x11b>
08560a36 +0x116:  mov    $0x1,%eax
08560a3b +0x11b:  add    $0x20,%esp
08560a3e +0x11e:  pop    %ebx
08560a3f +0x11f:  pop    %esi
08560a40 +0x120:  pop    %ebp
08560a41 +0x121:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::CheckUnusableEquipment @ 0x8560920

/* online_preliminary::COnlinePreliminary::CheckUnusableEquipment(Inven_Item const*) */

undefined4 online_preliminary::COnlinePreliminary::CheckUnusableEquipment(Inven_Item *param_1)

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
