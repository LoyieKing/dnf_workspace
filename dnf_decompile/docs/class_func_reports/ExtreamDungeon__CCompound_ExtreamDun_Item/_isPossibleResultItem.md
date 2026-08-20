# _isPossibleResultItem

`_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem`

`ExtreamDungeon::CCompound_ExtreamDun_Item::_isPossibleResultItem(CEquipItem&) const`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832db4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832db4e  _ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem
#           ExtreamDungeon::CCompound_ExtreamDun_Item::_isPossibleResultItem(CEquipItem&) const
# range [0x0832db4e, 0x0832dd1b]
0832db4e +0x000:  push   %ebp
0832db4f +0x001:  mov    %esp,%ebp
0832db51 +0x003:  sub    $0x38,%esp
0832db54 +0x006:  mov    0xc(%ebp),%eax
0832db57 +0x009:  mov    %eax,(%esp)
0832db5a +0x00c:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
0832db5f +0x011:  cmp    $0x3a,%eax
0832db62 +0x014:  ja     0832db73 <+0x25>
0832db64 +0x016:  mov    0xc(%ebp),%eax
0832db67 +0x019:  mov    %eax,(%esp)
0832db6a +0x01c:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
0832db6f +0x021:  test   %eax,%eax
0832db71 +0x023:  jg     0832db7a <+0x2c>
0832db73 +0x025:  mov    $0x1,%eax
0832db78 +0x02a:  jmp    0832db7f <+0x31>
0832db7a +0x02c:  mov    $0x0,%eax
0832db7f +0x031:  test   %al,%al
0832db81 +0x033:  je     0832db8d <+0x3f>
0832db83 +0x035:  mov    $0x0,%eax
0832db88 +0x03a:  jmp    0832dd19 <+0x1cb>
0832db8d +0x03f:  lea    -0x14(%ebp),%eax
0832db90 +0x042:  mov    %eax,(%esp)
0832db93 +0x045:  call   0832e858 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x8b6>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x8b6
0832db98 +0x04a:  mov    0x8(%ebp),%eax
0832db9b +0x04d:  lea    0xb74(%eax),%edx
0832dba1 +0x053:  lea    -0x10(%ebp),%eax
0832dba4 +0x056:  mov    %edx,0x4(%esp)
0832dba8 +0x05a:  mov    %eax,(%esp)
0832dbab +0x05d:  call   0832e892 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x8f0>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x8f0
0832dbb0 +0x062:  sub    $0x4,%esp
0832dbb3 +0x065:  mov    0xc(%ebp),%eax
0832dbb6 +0x068:  mov    %eax,(%esp)
0832dbb9 +0x06b:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0832dbbe +0x070:  mov    %eax,-0xc(%ebp)
0832dbc1 +0x073:  mov    0x8(%ebp),%eax
0832dbc4 +0x076:  lea    0xb74(%eax),%ecx
0832dbca +0x07c:  lea    -0x1c(%ebp),%eax
0832dbcd +0x07f:  lea    -0xc(%ebp),%edx
0832dbd0 +0x082:  mov    %edx,0x8(%esp)
0832dbd4 +0x086:  mov    %ecx,0x4(%esp)
0832dbd8 +0x08a:  mov    %eax,(%esp)
0832dbdb +0x08d:  call   0832e866 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x8c4>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x8c4
0832dbe0 +0x092:  sub    $0x4,%esp
0832dbe3 +0x095:  mov    -0x1c(%ebp),%eax
0832dbe6 +0x098:  mov    %eax,-0x14(%ebp)
0832dbe9 +0x09b:  lea    -0x10(%ebp),%eax
0832dbec +0x09e:  mov    %eax,0x4(%esp)
0832dbf0 +0x0a2:  lea    -0x14(%ebp),%eax
0832dbf3 +0x0a5:  mov    %eax,(%esp)
0832dbf6 +0x0a8:  call   0832e8b8 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x916>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x916
0832dbfb +0x0ad:  test   %al,%al
0832dbfd +0x0af:  je     0832dc3c <+0xee>
0832dbff +0x0b1:  lea    -0x14(%ebp),%eax
0832dc02 +0x0b4:  mov    %eax,(%esp)
0832dc05 +0x0b7:  call   0832e8cc <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x92a>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x92a
0832dc0a +0x0bc:  movzbl 0x4(%eax),%eax
0832dc0e +0x0c0:  test   %al,%al
0832dc10 +0x0c2:  je     0832dc1c <+0xce>
0832dc12 +0x0c4:  mov    $0x0,%eax
0832dc17 +0x0c9:  jmp    0832dd19 <+0x1cb>
0832dc1c +0x0ce:  lea    -0x14(%ebp),%eax
0832dc1f +0x0d1:  mov    %eax,(%esp)
0832dc22 +0x0d4:  call   0832e8cc <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x92a>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x92a
0832dc27 +0x0d9:  movzbl 0x4(%eax),%eax
0832dc2b +0x0dd:  xor    $0x1,%eax
0832dc2e +0x0e0:  test   %al,%al
0832dc30 +0x0e2:  je     0832dc3c <+0xee>
0832dc32 +0x0e4:  mov    $0x1,%eax
0832dc37 +0x0e9:  jmp    0832dd19 <+0x1cb>
0832dc3c +0x0ee:  mov    0xc(%ebp),%eax
0832dc3f +0x0f1:  mov    %eax,(%esp)
0832dc42 +0x0f4:  call   0832e036 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x94>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x94
0832dc47 +0x0f9:  mov    %eax,0x4(%esp)
0832dc4b +0x0fd:  mov    0x8(%ebp),%eax
0832dc4e +0x100:  mov    %eax,(%esp)
0832dc51 +0x103:  call   0832c620 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInputItem(ENUM_UNUSABLE_EQUIPMENT_TYPE) const
0832dc56 +0x108:  cmp    $0x2,%eax
0832dc59 +0x10b:  jne    0832dc82 <+0x134>
0832dc5b +0x10d:  mov    0xc(%ebp),%eax
0832dc5e +0x110:  mov    %eax,(%esp)
0832dc61 +0x113:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
0832dc66 +0x118:  cmp    $0x19,%eax
0832dc69 +0x11b:  jle    0832dc82 <+0x134>
0832dc6b +0x11d:  mov    0xc(%ebp),%eax
0832dc6e +0x120:  mov    %eax,(%esp)
0832dc71 +0x123:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
0832dc76 +0x128:  cmp    $0x32,%eax
0832dc79 +0x12b:  jg     0832dc82 <+0x134>
0832dc7b +0x12d:  mov    $0x1,%eax
0832dc80 +0x132:  jmp    0832dc87 <+0x139>
0832dc82 +0x134:  mov    $0x0,%eax
0832dc87 +0x139:  test   %al,%al
0832dc89 +0x13b:  je     0832dc95 <+0x147>
0832dc8b +0x13d:  mov    $0x0,%eax
0832dc90 +0x142:  jmp    0832dd19 <+0x1cb>
0832dc95 +0x147:  mov    0xc(%ebp),%eax
0832dc98 +0x14a:  mov    %eax,(%esp)
0832dc9b +0x14d:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
0832dca0 +0x152:  cmp    $0x46,%eax
0832dca3 +0x155:  setg   %al
0832dca6 +0x158:  test   %al,%al
0832dca8 +0x15a:  je     0832dcb1 <+0x163>
0832dcaa +0x15c:  mov    $0x0,%eax
0832dcaf +0x161:  jmp    0832dd19 <+0x1cb>
0832dcb1 +0x163:  mov    0xc(%ebp),%eax
0832dcb4 +0x166:  mov    %eax,(%esp)
0832dcb7 +0x169:  call   0832e02a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x88>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x88
0832dcbc +0x16e:  test   %eax,%eax
0832dcbe +0x170:  sete   %al
0832dcc1 +0x173:  test   %al,%al
0832dcc3 +0x175:  je     0832dcf7 <+0x1a9>
0832dcc5 +0x177:  mov    0xc(%ebp),%eax
0832dcc8 +0x17a:  mov    %eax,(%esp)
0832dccb +0x17d:  call   0832e036 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x94>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x94
0832dcd0 +0x182:  mov    %eax,0x4(%esp)
0832dcd4 +0x186:  mov    0x8(%ebp),%eax
0832dcd7 +0x189:  mov    %eax,(%esp)
0832dcda +0x18c:  call   0832c620 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInputItem(ENUM_UNUSABLE_EQUIPMENT_TYPE) const
0832dcdf +0x191:  cmp    $0x1,%eax
0832dce2 +0x194:  sete   %al
0832dce5 +0x197:  test   %al,%al
0832dce7 +0x199:  je     0832dcf0 <+0x1a2>
0832dce9 +0x19b:  mov    $0x1,%eax
0832dcee +0x1a0:  jmp    0832dd19 <+0x1cb>
0832dcf0 +0x1a2:  mov    $0x0,%eax
0832dcf5 +0x1a7:  jmp    0832dd19 <+0x1cb>
0832dcf7 +0x1a9:  mov    0xc(%ebp),%eax
0832dcfa +0x1ac:  mov    (%eax),%eax
0832dcfc +0x1ae:  add    $0x4c,%eax
0832dcff +0x1b1:  mov    (%eax),%edx
0832dd01 +0x1b3:  mov    0xc(%ebp),%eax
0832dd04 +0x1b6:  mov    %eax,(%esp)
0832dd07 +0x1b9:  call   *%edx
0832dd09 +0x1bb:  test   %al,%al
0832dd0b +0x1bd:  je     0832dd14 <+0x1c6>
0832dd0d +0x1bf:  mov    $0x0,%eax
0832dd12 +0x1c4:  jmp    0832dd19 <+0x1cb>
0832dd14 +0x1c6:  mov    $0x1,%eax
0832dd19 +0x1cb:  leave
0832dd1a +0x1cc:  ret
0832dd1b +0x1cd:  nop
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_isPossibleResultItem @ 0x832db4e

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_isPossibleResultItem(CEquipItem&) const */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_isPossibleResultItem
          (CCompound_ExtreamDun_Item *this,CEquipItem *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int local_20 [2];
  int local_18;
  map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
  local_14 [4];
  undefined4 local_10 [3];
  
  uVar3 = CItem::getItemGroupName((CItem *)param_1);
  if ((uVar3 < 0x3b) && (iVar4 = CItem::getItemGroupName((CItem *)param_1), 0 < iVar4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  std::_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>::
  _Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>> *)
             &local_18);
  std::
  map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
  ::end(local_14);
  local_10[0] = CItem::get_index((CItem *)param_1);
  puVar6 = local_10;
  std::
  map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
  ::find(local_20);
  local_18 = local_20[0];
  cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>::
          operator!=((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                      *)&local_18,(_Rb_tree_const_iterator *)local_14);
  if (cVar2 != '\0') {
    iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
            ::operator->((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                          *)&local_18);
    if (*(char *)(iVar4 + 4) != '\0') {
      return 0;
    }
    iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
            ::operator->((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                          *)&local_18);
    if (*(char *)(iVar4 + 4) != '\x01') {
      return 1;
    }
  }
  uVar5 = CEquipItem::GetUsableEquipmentType(param_1);
  iVar4 = _convertInputItem(this,uVar5,puVar6);
  if (((iVar4 == 2) && (iVar4 = CItem::getItemGroupName((CItem *)param_1), 0x19 < iVar4)) &&
     (iVar4 = CItem::getItemGroupName((CItem *)param_1), iVar4 < 0x33)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar5 = 0;
  }
  else {
    iVar4 = CItem::getUsableLevel((CItem *)param_1);
    if (iVar4 < 0x47) {
      iVar4 = CItem::get_gen_rate((CItem *)param_1);
      if (iVar4 == 0) {
        uVar5 = CEquipItem::GetUsableEquipmentType(param_1);
        iVar4 = _convertInputItem(this,uVar5);
        if (iVar4 == 1) {
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        cVar2 = (**(code **)(*(int *)param_1 + 0x4c))(param_1);
        if (cVar2 == '\0') {
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}
```
