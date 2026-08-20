# _AddItem

`_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item8_AddItemER10CEquipItem`

`ExtreamDungeon::CCompound_ExtreamDun_Item::_AddItem(CEquipItem&)`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832dd1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832dd1c  _ZN14ExtreamDungeon25CCompound_ExtreamDun_Item8_AddItemER10CEquipItem
#           ExtreamDungeon::CCompound_ExtreamDun_Item::_AddItem(CEquipItem&)
# range [0x0832dd1c, 0x0832de17]
0832dd1c +0x00:  push   %ebp
0832dd1d +0x01:  mov    %esp,%ebp
0832dd1f +0x03:  push   %ebx
0832dd20 +0x04:  sub    $0x34,%esp
0832dd23 +0x07:  mov    0xc(%ebp),%eax
0832dd26 +0x0a:  mov    %eax,(%esp)
0832dd29 +0x0d:  call   0832e036 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x94>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x94
0832dd2e +0x12:  mov    %eax,0x4(%esp)
0832dd32 +0x16:  mov    0x8(%ebp),%eax
0832dd35 +0x19:  mov    %eax,(%esp)
0832dd38 +0x1c:  call   0832c5ac <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item18_convertOutputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_convertOutputItem(ENUM_UNUSABLE_EQUIPMENT_TYPE) const
0832dd3d +0x21:  mov    %eax,-0xc(%ebp)
0832dd40 +0x24:  cmpl   $0x4,-0xc(%ebp)
0832dd44 +0x28:  jne    0832dd50 <+0x34>
0832dd46 +0x2a:  mov    $0x0,%eax
0832dd4b +0x2f:  jmp    0832de12 <+0xf6>
0832dd50 +0x34:  mov    0xc(%ebp),%eax
0832dd53 +0x37:  mov    %eax,(%esp)
0832dd56 +0x3a:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0832dd5b +0x3f:  mov    %eax,%ebx
0832dd5d +0x41:  mov    0xc(%ebp),%eax
0832dd60 +0x44:  mov    %eax,(%esp)
0832dd63 +0x47:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
0832dd68 +0x4c:  mov    %ebx,0x8(%esp)
0832dd6c +0x50:  mov    %eax,0x4(%esp)
0832dd70 +0x54:  lea    -0x1c(%ebp),%eax
0832dd73 +0x57:  mov    %eax,(%esp)
0832dd76 +0x5a:  call   0832dfbe <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x1c>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x1c
0832dd7b +0x5f:  mov    -0xc(%ebp),%edx
0832dd7e +0x62:  mov    %edx,%eax
0832dd80 +0x64:  add    %eax,%eax
0832dd82 +0x66:  add    %edx,%eax
0832dd84 +0x68:  shl    $0x2,%eax
0832dd87 +0x6b:  add    $0xb40,%eax
0832dd8c +0x70:  add    0x8(%ebp),%eax
0832dd8f +0x73:  lea    0x4(%eax),%edx
0832dd92 +0x76:  lea    -0x1c(%ebp),%eax
0832dd95 +0x79:  mov    %eax,0x4(%esp)
0832dd99 +0x7d:  mov    %edx,(%esp)
0832dd9c +0x80:  call   0832ea94 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0xaf2>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0xaf2
0832dda1 +0x85:  mov    0xc(%ebp),%eax
0832dda4 +0x88:  mov    %eax,(%esp)
0832dda7 +0x8b:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0832ddac +0x90:  mov    %eax,%ebx
0832ddae +0x92:  mov    0xc(%ebp),%eax
0832ddb1 +0x95:  mov    %eax,(%esp)
0832ddb4 +0x98:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
0832ddb9 +0x9d:  mov    %ebx,0x8(%esp)
0832ddbd +0xa1:  mov    %eax,0x4(%esp)
0832ddc1 +0xa5:  lea    -0x14(%ebp),%eax
0832ddc4 +0xa8:  mov    %eax,(%esp)
0832ddc7 +0xab:  call   0832dfbe <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x1c>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x1c
0832ddcc +0xb0:  mov    0xc(%ebp),%eax
0832ddcf +0xb3:  mov    %eax,(%esp)
0832ddd2 +0xb6:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
0832ddd7 +0xbb:  mov    %eax,%edx
0832ddd9 +0xbd:  mov    -0xc(%ebp),%ecx
0832dddc +0xc0:  mov    %ecx,%eax
0832ddde +0xc2:  add    %eax,%eax
0832dde0 +0xc4:  add    %ecx,%eax
0832dde2 +0xc6:  lea    0x0(,%eax,4),%ecx
0832dde9 +0xcd:  mov    %edx,%eax
0832ddeb +0xcf:  add    %eax,%eax
0832dded +0xd1:  add    %edx,%eax
0832ddef +0xd3:  shl    $0x4,%eax
0832ddf2 +0xd6:  lea    (%ecx,%eax,1),%eax
0832ddf5 +0xd9:  add    $0x30,%eax
0832ddf8 +0xdc:  add    0x8(%ebp),%eax
0832ddfb +0xdf:  lea    0x4(%eax),%edx
0832ddfe +0xe2:  lea    -0x14(%ebp),%eax
0832de01 +0xe5:  mov    %eax,0x4(%esp)
0832de05 +0xe9:  mov    %edx,(%esp)
0832de08 +0xec:  call   0832ea94 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0xaf2>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0xaf2
0832de0d +0xf1:  mov    $0x1,%eax
0832de12 +0xf6:  add    $0x34,%esp
0832de15 +0xf9:  pop    %ebx
0832de16 +0xfa:  pop    %ebp
0832de17 +0xfb:  ret
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_AddItem @ 0x832dd1c

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_AddItem(CEquipItem&) */

bool __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_AddItem
          (CCompound_ExtreamDun_Item *this,CEquipItem *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  OUTPUT_ITEM_STR local_20 [8];
  OUTPUT_ITEM_STR local_18 [8];
  int local_10;
  
  uVar1 = CEquipItem::GetUsableEquipmentType(param_1);
  local_10 = _convertOutputItem(this,uVar1);
  bVar4 = local_10 != 4;
  if (bVar4) {
    iVar2 = CItem::get_index((CItem *)param_1);
    iVar3 = CItem::getUsableLevel((CItem *)param_1);
    OUTPUT_ITEM_STR::OUTPUT_ITEM_STR(local_20,iVar3,iVar2);
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    push_back((vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>
               *)(this + local_10 * 0xc + 0xb44),local_20);
    iVar2 = CItem::get_index((CItem *)param_1);
    iVar3 = CItem::getUsableLevel((CItem *)param_1);
    OUTPUT_ITEM_STR::OUTPUT_ITEM_STR(local_18,iVar3,iVar2);
    iVar2 = CItem::getItemGroupName((CItem *)param_1);
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    push_back((vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>
               *)(this + local_10 * 0xc + iVar2 * 0x30 + 0x34),local_18);
  }
  return bVar4;
}
```
