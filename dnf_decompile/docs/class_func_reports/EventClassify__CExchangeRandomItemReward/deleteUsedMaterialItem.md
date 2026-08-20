# deleteUsedMaterialItem

`_ZN13EventClassify25CExchangeRandomItemReward22deleteUsedMaterialItemEP5CUserRSt6vectorISt4pairIiiESaIS5_EES8_`

`EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `EventClassify::CExchangeRandomItemReward` | `0x0810eede` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810eede  _ZN13EventClassify25CExchangeRandomItemReward22deleteUsedMaterialItemEP5CUserRSt6vectorISt4pairIiiESaIS5_EES8_
#           EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x0810eede, 0x0810f26d]
0810eede +0x000:  push   %ebp
0810eedf +0x001:  mov    %esp,%ebp
0810eee1 +0x003:  push   %esi
0810eee2 +0x004:  push   %ebx
0810eee3 +0x005:  sub    $0xf0,%esp
0810eee9 +0x00b:  movl   $0x0,-0x10(%ebp)
0810eef0 +0x012:  jmp    0810f246 <+0x368>
0810eef5 +0x017:  mov    -0x10(%ebp),%eax
0810eef8 +0x01a:  mov    %eax,0x4(%esp)
0810eefc +0x01e:  mov    0x10(%ebp),%eax
0810eeff +0x021:  mov    %eax,(%esp)
0810ef02 +0x024:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0810ef07 +0x029:  mov    (%eax),%ebx
0810ef09 +0x02b:  mov    0xc(%ebp),%eax
0810ef0c +0x02e:  mov    %eax,(%esp)
0810ef0f +0x031:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0810ef14 +0x036:  lea    -0x65(%ebp),%edx
0810ef17 +0x039:  mov    %ebx,0xc(%esp)
0810ef1b +0x03d:  movl   $0x1,0x8(%esp)
0810ef23 +0x045:  mov    %eax,0x4(%esp)
0810ef27 +0x049:  mov    %edx,(%esp)
0810ef2a +0x04c:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0810ef2f +0x051:  sub    $0x4,%esp
0810ef32 +0x054:  mov    -0x10(%ebp),%eax
0810ef35 +0x057:  mov    %eax,0x4(%esp)
0810ef39 +0x05b:  mov    0x10(%ebp),%eax
0810ef3c +0x05e:  mov    %eax,(%esp)
0810ef3f +0x061:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0810ef44 +0x066:  mov    0x4(%eax),%esi
0810ef47 +0x069:  mov    -0x10(%ebp),%eax
0810ef4a +0x06c:  mov    %eax,0x4(%esp)
0810ef4e +0x070:  mov    0x10(%ebp),%eax
0810ef51 +0x073:  mov    %eax,(%esp)
0810ef54 +0x076:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0810ef59 +0x07b:  mov    (%eax),%ebx
0810ef5b +0x07d:  mov    0xc(%ebp),%eax
0810ef5e +0x080:  mov    %eax,(%esp)
0810ef61 +0x083:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0810ef66 +0x088:  movl   $0x1,0x14(%esp)
0810ef6e +0x090:  movl   $0x3,0x10(%esp)
0810ef76 +0x098:  mov    %esi,0xc(%esp)
0810ef7a +0x09c:  mov    %ebx,0x8(%esp)
0810ef7e +0x0a0:  movl   $0x1,0x4(%esp)
0810ef86 +0x0a8:  mov    %eax,(%esp)
0810ef89 +0x0ab:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0810ef8e +0x0b0:  test   %al,%al
0810ef90 +0x0b2:  je     0810eff0 <+0x112>
0810ef92 +0x0b4:  mov    -0x10(%ebp),%eax
0810ef95 +0x0b7:  mov    %eax,0x4(%esp)
0810ef99 +0x0bb:  mov    0x10(%ebp),%eax
0810ef9c +0x0be:  mov    %eax,(%esp)
0810ef9f +0x0c1:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0810efa4 +0x0c6:  lea    0x4(%eax),%edx
0810efa7 +0x0c9:  lea    -0x1c(%ebp),%eax
0810efaa +0x0cc:  mov    %edx,0x8(%esp)
0810efae +0x0d0:  lea    -0x65(%ebp),%edx
0810efb1 +0x0d3:  add    $0x2,%edx
0810efb4 +0x0d6:  mov    %edx,0x4(%esp)
0810efb8 +0x0da:  mov    %eax,(%esp)
0810efbb +0x0dd:  call   08111a37 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf49>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf49
0810efc0 +0x0e2:  sub    $0x4,%esp
0810efc3 +0x0e5:  lea    -0x1c(%ebp),%eax
0810efc6 +0x0e8:  mov    %eax,0x4(%esp)
0810efca +0x0ec:  lea    -0x24(%ebp),%eax
0810efcd +0x0ef:  mov    %eax,(%esp)
0810efd0 +0x0f2:  call   08111a76 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf88>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf88
0810efd5 +0x0f7:  lea    -0x24(%ebp),%eax
0810efd8 +0x0fa:  mov    %eax,0x4(%esp)
0810efdc +0x0fe:  mov    0x14(%ebp),%eax
0810efdf +0x101:  mov    %eax,(%esp)
0810efe2 +0x104:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0810efe7 +0x109:  addl   $0x1,-0x10(%ebp)
0810efeb +0x10d:  jmp    0810f246 <+0x368>
0810eff0 +0x112:  mov    0x14(%ebp),%eax
0810eff3 +0x115:  mov    %eax,(%esp)
0810eff6 +0x118:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0810effb +0x11d:  test   %eax,%eax
0810effd +0x11f:  setne  %al
0810f000 +0x122:  test   %al,%al
0810f002 +0x124:  je     0810f1d3 <+0x2f5>
0810f008 +0x12a:  movl   $0x0,-0xc(%ebp)
0810f00f +0x131:  lea    -0x28(%ebp),%eax
0810f012 +0x134:  mov    0x14(%ebp),%edx
0810f015 +0x137:  mov    %edx,0x4(%esp)
0810f019 +0x13b:  mov    %eax,(%esp)
0810f01c +0x13e:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0810f021 +0x143:  sub    $0x4,%esp
0810f024 +0x146:  jmp    0810f1a4 <+0x2c6>
0810f029 +0x14b:  lea    -0xa2(%ebp),%eax
0810f02f +0x151:  mov    %eax,(%esp)
0810f032 +0x154:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0810f037 +0x159:  lea    -0x28(%ebp),%eax
0810f03a +0x15c:  mov    %eax,(%esp)
0810f03d +0x15f:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0810f042 +0x164:  mov    (%eax),%eax
0810f044 +0x166:  mov    %eax,-0xa0(%ebp)
0810f04a +0x16c:  lea    -0x28(%ebp),%eax
0810f04d +0x16f:  mov    %eax,(%esp)
0810f050 +0x172:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0810f055 +0x177:  mov    0x4(%eax),%eax
0810f058 +0x17a:  mov    %eax,-0x9b(%ebp)
0810f05e +0x180:  mov    -0x9b(%ebp),%ebx
0810f064 +0x186:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0810f069 +0x18b:  mov    0xc(%eax),%eax
0810f06c +0x18e:  mov    %ebx,0xc(%esp)
0810f070 +0x192:  lea    -0xa2(%ebp),%edx
0810f076 +0x198:  mov    %edx,0x8(%esp)
0810f07a +0x19c:  movl   $0x0,0x4(%esp)
0810f082 +0x1a4:  mov    %eax,(%esp)
0810f085 +0x1a7:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
0810f08a +0x1ac:  mov    0xc(%ebp),%eax
0810f08d +0x1af:  mov    %eax,(%esp)
0810f090 +0x1b2:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0810f095 +0x1b7:  movl   $0x1,0x4c(%esp)
0810f09d +0x1bf:  movl   $0x1,0x48(%esp)
0810f0a5 +0x1c7:  movl   $0xd,0x44(%esp)
0810f0ad +0x1cf:  mov    -0xa2(%ebp),%edx
0810f0b3 +0x1d5:  mov    %edx,0x4(%esp)
0810f0b7 +0x1d9:  mov    -0x9e(%ebp),%edx
0810f0bd +0x1df:  mov    %edx,0x8(%esp)
0810f0c1 +0x1e3:  mov    -0x9a(%ebp),%edx
0810f0c7 +0x1e9:  mov    %edx,0xc(%esp)
0810f0cb +0x1ed:  mov    -0x96(%ebp),%edx
0810f0d1 +0x1f3:  mov    %edx,0x10(%esp)
0810f0d5 +0x1f7:  mov    -0x92(%ebp),%edx
0810f0db +0x1fd:  mov    %edx,0x14(%esp)
0810f0df +0x201:  mov    -0x8e(%ebp),%edx
0810f0e5 +0x207:  mov    %edx,0x18(%esp)
0810f0e9 +0x20b:  mov    -0x8a(%ebp),%edx
0810f0ef +0x211:  mov    %edx,0x1c(%esp)
0810f0f3 +0x215:  mov    -0x86(%ebp),%edx
0810f0f9 +0x21b:  mov    %edx,0x20(%esp)
0810f0fd +0x21f:  mov    -0x82(%ebp),%edx
0810f103 +0x225:  mov    %edx,0x24(%esp)
0810f107 +0x229:  mov    -0x7e(%ebp),%edx
0810f10a +0x22c:  mov    %edx,0x28(%esp)
0810f10e +0x230:  mov    -0x7a(%ebp),%edx
0810f111 +0x233:  mov    %edx,0x2c(%esp)
0810f115 +0x237:  mov    -0x76(%ebp),%edx
0810f118 +0x23a:  mov    %edx,0x30(%esp)
0810f11c +0x23e:  mov    -0x72(%ebp),%edx
0810f11f +0x241:  mov    %edx,0x34(%esp)
0810f123 +0x245:  mov    -0x6e(%ebp),%edx
0810f126 +0x248:  mov    %edx,0x38(%esp)
0810f12a +0x24c:  mov    -0x6a(%ebp),%edx
0810f12d +0x24f:  mov    %edx,0x3c(%esp)
0810f131 +0x253:  movzbl -0x66(%ebp),%edx
0810f135 +0x257:  mov    %dl,0x40(%esp)
0810f139 +0x25b:  mov    %eax,(%esp)
0810f13c +0x25e:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0810f141 +0x263:  mov    %eax,-0xc(%ebp)
0810f144 +0x266:  cmpl   $0x0,-0xc(%ebp)
0810f148 +0x26a:  jns    0810f199 <+0x2bb>
0810f14a +0x26c:  mov    -0x9b(%ebp),%esi
0810f150 +0x272:  mov    -0xa0(%ebp),%ebx
0810f156 +0x278:  mov    0xc(%ebp),%eax
0810f159 +0x27b:  mov    %eax,(%esp)
0810f15c +0x27e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0810f161 +0x283:  mov    %esi,0x1c(%esp)
0810f165 +0x287:  mov    %ebx,0x18(%esp)
0810f169 +0x28b:  mov    %eax,0x14(%esp)
0810f16d +0x28f:  movl   $"CExchangeRandomItemReward::deleteUsedMaterialItem, return_item failed , User ch =%d , %d %d",0x10(%esp)
0810f175 +0x297:  movl   $0x63d,0xc(%esp)
0810f17d +0x29f:  movl   $&_ZZN13EventClassify25CExchangeRandomItemReward22deleteUsedMaterialItemEP5CUserRSt6vectorISt4pairIiiESaIS5_EES8_E19__PRETTY_FUNCTION__,0x8(%esp)
0810f185 +0x2a7:  movl   $"EventClassify.cpp",0x4(%esp)
0810f18d +0x2af:  movl   $0x1,(%esp)
0810f194 +0x2b6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0810f199 +0x2bb:  lea    -0x28(%ebp),%eax
0810f19c +0x2be:  mov    %eax,(%esp)
0810f19f +0x2c1:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
0810f1a4 +0x2c6:  lea    -0x14(%ebp),%eax
0810f1a7 +0x2c9:  mov    0x14(%ebp),%edx
0810f1aa +0x2cc:  mov    %edx,0x4(%esp)
0810f1ae +0x2d0:  mov    %eax,(%esp)
0810f1b1 +0x2d3:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0810f1b6 +0x2d8:  sub    $0x4,%esp
0810f1b9 +0x2db:  lea    -0x14(%ebp),%eax
0810f1bc +0x2de:  mov    %eax,0x4(%esp)
0810f1c0 +0x2e2:  lea    -0x28(%ebp),%eax
0810f1c3 +0x2e5:  mov    %eax,(%esp)
0810f1c6 +0x2e8:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
0810f1cb +0x2ed:  test   %al,%al
0810f1cd +0x2ef:  jne    0810f029 <+0x14b>
0810f1d3 +0x2f5:  mov    -0x10(%ebp),%eax
0810f1d6 +0x2f8:  mov    %eax,0x4(%esp)
0810f1da +0x2fc:  mov    0x10(%ebp),%eax
0810f1dd +0x2ff:  mov    %eax,(%esp)
0810f1e0 +0x302:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0810f1e5 +0x307:  mov    0x4(%eax),%esi
0810f1e8 +0x30a:  mov    -0x10(%ebp),%eax
0810f1eb +0x30d:  mov    %eax,0x4(%esp)
0810f1ef +0x311:  mov    0x10(%ebp),%eax
0810f1f2 +0x314:  mov    %eax,(%esp)
0810f1f5 +0x317:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0810f1fa +0x31c:  mov    (%eax),%ebx
0810f1fc +0x31e:  mov    0xc(%ebp),%eax
0810f1ff +0x321:  mov    %eax,(%esp)
0810f202 +0x324:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0810f207 +0x329:  mov    %esi,0x1c(%esp)
0810f20b +0x32d:  mov    %ebx,0x18(%esp)
0810f20f +0x331:  mov    %eax,0x14(%esp)
0810f213 +0x335:  movl   $"CExchangeRandomItemReward::deleteUsedMaterialItem failed , User ch =%d , %d %d",0x10(%esp)
0810f21b +0x33d:  movl   $0x640,0xc(%esp)
0810f223 +0x345:  movl   $&_ZZN13EventClassify25CExchangeRandomItemReward22deleteUsedMaterialItemEP5CUserRSt6vectorISt4pairIiiESaIS5_EES8_E19__PRETTY_FUNCTION__,0x8(%esp)
0810f22b +0x34d:  movl   $"EventClassify.cpp",0x4(%esp)
0810f233 +0x355:  movl   $0x1,(%esp)
0810f23a +0x35c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0810f23f +0x361:  mov    $0x8,%eax
0810f244 +0x366:  jmp    0810f264 <+0x386>
0810f246 +0x368:  mov    0x10(%ebp),%eax
0810f249 +0x36b:  mov    %eax,(%esp)
0810f24c +0x36e:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0810f251 +0x373:  cmp    -0x10(%ebp),%eax
0810f254 +0x376:  seta   %al
0810f257 +0x379:  test   %al,%al
0810f259 +0x37b:  jne    0810eef5 <+0x17>
0810f25f +0x381:  mov    $0x0,%eax
0810f264 +0x386:  lea    -0x8(%ebp),%esp
0810f267 +0x389:  add    $0x0,%esp
0810f26a +0x38c:  pop    %ebx
0810f26b +0x38d:  pop    %esi
0810f26c +0x38e:  pop    %ebp
0810f26d +0x38f:  ret
```

## 反编译 C

```c
// EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem @ 0x810eede

/* EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem(CUser*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

undefined4 __thiscall
EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem
          (CExchangeRandomItemReward *this,CUser *param_1,vector *param_2,vector *param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  CInventory *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined2 local_a6;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined1 uStack_a0;
  undefined4 uStack_9f;
  undefined1 uStack_9b;
  undefined4 local_9a;
  undefined4 local_96;
  undefined4 local_92;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined1 local_6a;
  undefined1 local_69 [2];
  int aiStack_67 [14];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_2c [4];
  pair<int,int> local_28 [8];
  ulong local_20 [2];
  __normal_iterator local_18 [4];
  uint local_14;
  int local_10;
  
  local_14 = 0;
  while( true ) {
    uVar9 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2);
    if (uVar9 <= local_14) {
      return 0;
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,local_14);
    iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_69,iVar4);
    iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,
                       local_14);
    uVar7 = *(undefined4 *)(iVar4 + 4);
    puVar5 = (undefined4 *)
             std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                       ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,
                        local_14);
    uVar1 = *puVar5;
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar2 = CInventory::delete_item(pCVar6,1,uVar1,uVar7,3,1);
    if (cVar2 == '\0') break;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,local_14);
    std::make_pair<unsigned_long&,int&>(local_20,aiStack_67);
    std::pair<int,int>::pair<unsigned_long,int>(local_28,(pair *)local_20);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_28);
    local_14 = local_14 + 1;
  }
  iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3);
  if (iVar4 != 0) {
    local_10 = 0;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar3 = __gnu_cxx::operator!=(local_2c,local_18);
      if (!bVar3) break;
      Inven_Item::Inven_Item((Inven_Item *)&local_a6);
      puVar5 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator->(local_2c);
      uStack_a4 = (undefined2)*puVar5;
      uStack_a2 = (undefined2)((uint)*puVar5 >> 0x10);
      iVar4 = __gnu_cxx::
              __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator->(local_2c);
      uVar7 = *(undefined4 *)(iVar4 + 4);
      uStack_9f = uVar7;
      iVar4 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar4 + 0xc),0,&local_a6,uVar7);
      uVar7 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_10 = CInventory::insertItemIntoInventory
                           (uVar7,CONCAT22(uStack_a4,local_a6),
                            CONCAT13((undefined1)uStack_9f,CONCAT12(uStack_a0,uStack_a2)),
                            CONCAT13(uStack_9b,uStack_9f._1_3_),local_9a,local_96,local_92,local_8e,
                            local_8a,local_86,local_82,local_7e,local_7a,local_76,local_72,local_6e,
                            local_6a,0xd,1,1);
      uVar7 = uStack_9f;
      if (local_10 < 0) {
        uVar1 = CONCAT22(uStack_a2,uStack_a4);
        uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        LogManager::logFormat
                  (1,"EventClassify.cpp",
                   "int EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem(CUser*, IntPairVector&, IntPairVector&)"
                   ,0x63d,
                   "CExchangeRandomItemReward::deleteUsedMaterialItem, return_item failed , User ch =%d , %d %d"
                   ,uVar8,uVar1,uVar7);
      }
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_2c);
    }
  }
  iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,
                     local_14);
  uVar7 = *(undefined4 *)(iVar4 + 4);
  puVar5 = (undefined4 *)
           std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                     ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,
                      local_14);
  uVar1 = *puVar5;
  uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  LogManager::logFormat
            (1,"EventClassify.cpp",
             "int EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem(CUser*, IntPairVector&, IntPairVector&)"
             ,0x640,"CExchangeRandomItemReward::deleteUsedMaterialItem failed , User ch =%d , %d %d"
             ,uVar8,uVar1,uVar7);
  return 8;
}
```
