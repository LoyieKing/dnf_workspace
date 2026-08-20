# insertItemIntoInventory

`_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb`

`CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08502d86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08502d86  _ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb
#           CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
# range [0x08502d86, 0x08503391]
08502d86 +0x000:  push   %ebp
08502d87 +0x001:  mov    %esp,%ebp
08502d89 +0x003:  push   %ebx
08502d8a +0x004:  sub    $0x94,%esp
08502d90 +0x00a:  mov    0x50(%ebp),%edx
08502d93 +0x00d:  mov    0x54(%ebp),%eax
08502d96 +0x010:  mov    %dl,-0x3c(%ebp)
08502d99 +0x013:  mov    %al,-0x40(%ebp)
08502d9c +0x016:  mov    0xe(%ebp),%eax
08502d9f +0x019:  test   %eax,%eax
08502da1 +0x01b:  jne    08502e19 <+0x93>
08502da3 +0x01d:  lea    0xc(%ebp),%eax
08502da6 +0x020:  mov    %eax,(%esp)
08502da9 +0x023:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502dae +0x028:  shr    $0x1f,%eax
08502db1 +0x02b:  test   %al,%al
08502db3 +0x02d:  je     08502dbf <+0x39>
08502db5 +0x02f:  mov    $0xffffffff,%eax
08502dba +0x034:  jmp    08503388 <+0x602>
08502dbf +0x039:  lea    0xc(%ebp),%eax
08502dc2 +0x03c:  mov    %eax,(%esp)
08502dc5 +0x03f:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502dca +0x044:  test   %eax,%eax
08502dcc +0x046:  sete   %al
08502dcf +0x049:  test   %al,%al
08502dd1 +0x04b:  je     08502ddd <+0x57>
08502dd3 +0x04d:  mov    $0x0,%eax
08502dd8 +0x052:  jmp    08503388 <+0x602>
08502ddd +0x057:  movzbl -0x3c(%ebp),%ebx
08502de1 +0x05b:  lea    0xc(%ebp),%eax
08502de4 +0x05e:  mov    %eax,(%esp)
08502de7 +0x061:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502dec +0x066:  movl   $0x0,0x10(%esp)
08502df4 +0x06e:  mov    %ebx,0xc(%esp)
08502df8 +0x072:  movl   $0x7,0x8(%esp)
08502e00 +0x07a:  mov    %eax,0x4(%esp)
08502e04 +0x07e:  mov    0x8(%ebp),%eax
08502e07 +0x081:  mov    %eax,(%esp)
08502e0a +0x084:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
08502e0f +0x089:  mov    $0x0,%eax
08502e14 +0x08e:  jmp    08503388 <+0x602>
08502e19 +0x093:  cmpl   $0x7,0x4c(%ebp)
08502e1d +0x097:  je     08502eb0 <+0x12a>
08502e23 +0x09d:  cmpl   $0x2,0x4c(%ebp)
08502e27 +0x0a1:  je     08502eb0 <+0x12a>
08502e2d +0x0a7:  mov    0xe(%ebp),%ebx
08502e30 +0x0aa:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08502e35 +0x0af:  mov    %ebx,0x4(%esp)
08502e39 +0x0b3:  mov    %eax,(%esp)
08502e3c +0x0b6:  call   08364f2e <_ZN12CDataManager11IsDBLogItemEj>  ; CDataManager::IsDBLogItem(unsigned int)
08502e41 +0x0bb:  mov    %eax,-0x1c(%ebp)
08502e44 +0x0be:  mov    -0x1c(%ebp),%eax
08502e47 +0x0c1:  cmp    $0xffffffff,%eax
08502e4a +0x0c4:  je     08502eb0 <+0x12a>
08502e4c +0x0c6:  movzbl 0xd(%ebp),%eax
08502e50 +0x0ca:  movzbl %al,%eax
08502e53 +0x0cd:  cmp    $0x1,%eax
08502e56 +0x0d0:  je     08502e5f <+0xd9>
08502e58 +0x0d2:  cmp    $0x2,%eax
08502e5b +0x0d5:  je     08502e84 <+0xfe>
08502e5d +0x0d7:  jmp    08502eb0 <+0x12a>
08502e5f +0x0d9:  mov    0xe(%ebp),%edx
08502e62 +0x0dc:  mov    0x8(%ebp),%eax
08502e65 +0x0df:  mov    (%eax),%eax
08502e67 +0x0e1:  mov    -0x1c(%ebp),%ecx
08502e6a +0x0e4:  mov    %ecx,0xc(%esp)
08502e6e +0x0e8:  movl   $0x1,0x8(%esp)
08502e76 +0x0f0:  mov    %edx,0x4(%esp)
08502e7a +0x0f4:  mov    %eax,(%esp)
08502e7d +0x0f7:  call   086893ac <_ZN5CUser12AddDBLogItemEjj20ENUM_DBLOG_ITEM_TYPE>  ; CUser::AddDBLogItem(unsigned int, unsigned int, ENUM_DBLOG_ITEM_TYPE)
08502e82 +0x0fc:  jmp    08502eb0 <+0x12a>
08502e84 +0x0fe:  lea    0xc(%ebp),%eax
08502e87 +0x101:  mov    %eax,(%esp)
08502e8a +0x104:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502e8f +0x109:  mov    %eax,%ecx
08502e91 +0x10b:  mov    0xe(%ebp),%edx
08502e94 +0x10e:  mov    0x8(%ebp),%eax
08502e97 +0x111:  mov    (%eax),%eax
08502e99 +0x113:  mov    -0x1c(%ebp),%ebx
08502e9c +0x116:  mov    %ebx,0xc(%esp)
08502ea0 +0x11a:  mov    %ecx,0x8(%esp)
08502ea4 +0x11e:  mov    %edx,0x4(%esp)
08502ea8 +0x122:  mov    %eax,(%esp)
08502eab +0x125:  call   086893ac <_ZN5CUser12AddDBLogItemEjj20ENUM_DBLOG_ITEM_TYPE>  ; CUser::AddDBLogItem(unsigned int, unsigned int, ENUM_DBLOG_ITEM_TYPE)
08502eb0 +0x12a:  lea    0xc(%ebp),%eax
08502eb3 +0x12d:  mov    %eax,(%esp)
08502eb6 +0x130:  call   08335b76 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x1c>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x1c
08502ebb +0x135:  test   %al,%al
08502ebd +0x137:  je     08502eed <+0x167>
08502ebf +0x139:  movzbl -0x40(%ebp),%edx
08502ec3 +0x13d:  movzbl -0x3c(%ebp),%eax
08502ec7 +0x141:  mov    %edx,0x10(%esp)
08502ecb +0x145:  mov    %eax,0xc(%esp)
08502ecf +0x149:  mov    0x4c(%ebp),%eax
08502ed2 +0x14c:  mov    %eax,0x8(%esp)
08502ed6 +0x150:  lea    0xc(%ebp),%eax
08502ed9 +0x153:  mov    %eax,0x4(%esp)
08502edd +0x157:  mov    0x8(%ebp),%eax
08502ee0 +0x15a:  mov    %eax,(%esp)
08502ee3 +0x15d:  call   0850a86a <_ZN10CInventory22insertItemIntoCreatureER10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoCreature(Inven_Item&, eItemAddReason, bool, bool)
08502ee8 +0x162:  jmp    08503388 <+0x602>
08502eed +0x167:  movzbl 0xd(%ebp),%eax
08502ef1 +0x16b:  cmp    $0x8,%al
08502ef3 +0x16d:  jne    08502f82 <+0x1fc>
08502ef9 +0x173:  mov    0x8(%ebp),%eax
08502efc +0x176:  mov    (%eax),%eax
08502efe +0x178:  mov    %eax,(%esp)
08502f01 +0x17b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08502f06 +0x180:  lea    -0x34(%ebp),%edx
08502f09 +0x183:  mov    %edx,0x8(%esp)
08502f0d +0x187:  mov    %eax,0x4(%esp)
08502f11 +0x18b:  movl   $0x6,(%esp)
08502f18 +0x192:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
08502f1d +0x197:  movzwl 0x17(%ebp),%eax
08502f21 +0x19b:  movsbl %al,%ecx
08502f24 +0x19e:  mov    0xe(%ebp),%edx
08502f27 +0x1a1:  mov    0x8(%ebp),%eax
08502f2a +0x1a4:  mov    (%eax),%eax
08502f2c +0x1a6:  movl   $0x14,0x14(%esp)
08502f34 +0x1ae:  lea    -0x34(%ebp),%ebx
08502f37 +0x1b1:  mov    %ebx,0x10(%esp)
08502f3b +0x1b5:  mov    %ecx,0xc(%esp)
08502f3f +0x1b9:  movl   $0x0,0x8(%esp)
08502f47 +0x1c1:  mov    %edx,0x4(%esp)
08502f4b +0x1c5:  mov    %eax,(%esp)
08502f4e +0x1c8:  call   08681224 <_ZN5CUser13addAvatarItemEmccPKc20eAvatarItemAddReason>  ; CUser::addAvatarItem(unsigned long, char, char, char const*, eAvatarItemAddReason)
08502f53 +0x1cd:  mov    %eax,-0x18(%ebp)
08502f56 +0x1d0:  mov    0x8(%ebp),%eax
08502f59 +0x1d3:  mov    (%eax),%eax
08502f5b +0x1d5:  mov    -0x18(%ebp),%edx
08502f5e +0x1d8:  mov    %edx,0xc(%esp)
08502f62 +0x1dc:  movl   $0x1,0x8(%esp)
08502f6a +0x1e4:  movl   $0x1,0x4(%esp)
08502f72 +0x1ec:  mov    %eax,(%esp)
08502f75 +0x1ef:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08502f7a +0x1f4:  mov    -0x18(%ebp),%eax
08502f7d +0x1f7:  jmp    08503388 <+0x602>
08502f82 +0x1fc:  movzbl 0xd(%ebp),%eax
08502f86 +0x200:  cmp    $0x1,%al
08502f88 +0x202:  je     085030e6 <+0x360>
08502f8e +0x208:  movzbl -0x3c(%ebp),%eax
08502f92 +0x20c:  mov    %eax,0x48(%esp)
08502f96 +0x210:  mov    0x4c(%ebp),%eax
08502f99 +0x213:  mov    %eax,0x44(%esp)
08502f9d +0x217:  mov    0xc(%ebp),%eax
08502fa0 +0x21a:  mov    %eax,0x4(%esp)
08502fa4 +0x21e:  mov    0x10(%ebp),%eax
08502fa7 +0x221:  mov    %eax,0x8(%esp)
08502fab +0x225:  mov    0x14(%ebp),%eax
08502fae +0x228:  mov    %eax,0xc(%esp)
08502fb2 +0x22c:  mov    0x18(%ebp),%eax
08502fb5 +0x22f:  mov    %eax,0x10(%esp)
08502fb9 +0x233:  mov    0x1c(%ebp),%eax
08502fbc +0x236:  mov    %eax,0x14(%esp)
08502fc0 +0x23a:  mov    0x20(%ebp),%eax
08502fc3 +0x23d:  mov    %eax,0x18(%esp)
08502fc7 +0x241:  mov    0x24(%ebp),%eax
08502fca +0x244:  mov    %eax,0x1c(%esp)
08502fce +0x248:  mov    0x28(%ebp),%eax
08502fd1 +0x24b:  mov    %eax,0x20(%esp)
08502fd5 +0x24f:  mov    0x2c(%ebp),%eax
08502fd8 +0x252:  mov    %eax,0x24(%esp)
08502fdc +0x256:  mov    0x30(%ebp),%eax
08502fdf +0x259:  mov    %eax,0x28(%esp)
08502fe3 +0x25d:  mov    0x34(%ebp),%eax
08502fe6 +0x260:  mov    %eax,0x2c(%esp)
08502fea +0x264:  mov    0x38(%ebp),%eax
08502fed +0x267:  mov    %eax,0x30(%esp)
08502ff1 +0x26b:  mov    0x3c(%ebp),%eax
08502ff4 +0x26e:  mov    %eax,0x34(%esp)
08502ff8 +0x272:  mov    0x40(%ebp),%eax
08502ffb +0x275:  mov    %eax,0x38(%esp)
08502fff +0x279:  mov    0x44(%ebp),%eax
08503002 +0x27c:  mov    %eax,0x3c(%esp)
08503006 +0x280:  movzbl 0x48(%ebp),%eax
0850300a +0x284:  mov    %al,0x40(%esp)
0850300e +0x288:  mov    0x8(%ebp),%eax
08503011 +0x28b:  mov    %eax,(%esp)
08503014 +0x28e:  call   085027b2 <_ZN10CInventory27stackInvenItemIntoQuickSlotE10Inven_Item14eItemAddReasonb>  ; CInventory::stackInvenItemIntoQuickSlot(Inven_Item, eItemAddReason, bool)
08503019 +0x293:  mov    %eax,-0x14(%ebp)
0850301c +0x296:  cmpl   $0x0,-0x14(%ebp)
08503020 +0x29a:  js     0850302a <+0x2a4>
08503022 +0x29c:  mov    -0x14(%ebp),%eax
08503025 +0x29f:  jmp    08503388 <+0x602>
0850302a +0x2a4:  cmpl   $0xfffffff6,-0x14(%ebp)
0850302e +0x2a8:  jne    0850303a <+0x2b4>
08503030 +0x2aa:  mov    $0xffffffff,%eax
08503035 +0x2af:  jmp    08503388 <+0x602>
0850303a +0x2b4:  movzbl -0x3c(%ebp),%eax
0850303e +0x2b8:  mov    %eax,0x48(%esp)
08503042 +0x2bc:  mov    0x4c(%ebp),%eax
08503045 +0x2bf:  mov    %eax,0x44(%esp)
08503049 +0x2c3:  mov    0xc(%ebp),%eax
0850304c +0x2c6:  mov    %eax,0x4(%esp)
08503050 +0x2ca:  mov    0x10(%ebp),%eax
08503053 +0x2cd:  mov    %eax,0x8(%esp)
08503057 +0x2d1:  mov    0x14(%ebp),%eax
0850305a +0x2d4:  mov    %eax,0xc(%esp)
0850305e +0x2d8:  mov    0x18(%ebp),%eax
08503061 +0x2db:  mov    %eax,0x10(%esp)
08503065 +0x2df:  mov    0x1c(%ebp),%eax
08503068 +0x2e2:  mov    %eax,0x14(%esp)
0850306c +0x2e6:  mov    0x20(%ebp),%eax
0850306f +0x2e9:  mov    %eax,0x18(%esp)
08503073 +0x2ed:  mov    0x24(%ebp),%eax
08503076 +0x2f0:  mov    %eax,0x1c(%esp)
0850307a +0x2f4:  mov    0x28(%ebp),%eax
0850307d +0x2f7:  mov    %eax,0x20(%esp)
08503081 +0x2fb:  mov    0x2c(%ebp),%eax
08503084 +0x2fe:  mov    %eax,0x24(%esp)
08503088 +0x302:  mov    0x30(%ebp),%eax
0850308b +0x305:  mov    %eax,0x28(%esp)
0850308f +0x309:  mov    0x34(%ebp),%eax
08503092 +0x30c:  mov    %eax,0x2c(%esp)
08503096 +0x310:  mov    0x38(%ebp),%eax
08503099 +0x313:  mov    %eax,0x30(%esp)
0850309d +0x317:  mov    0x3c(%ebp),%eax
085030a0 +0x31a:  mov    %eax,0x34(%esp)
085030a4 +0x31e:  mov    0x40(%ebp),%eax
085030a7 +0x321:  mov    %eax,0x38(%esp)
085030ab +0x325:  mov    0x44(%ebp),%eax
085030ae +0x328:  mov    %eax,0x3c(%esp)
085030b2 +0x32c:  movzbl 0x48(%ebp),%eax
085030b6 +0x330:  mov    %al,0x40(%esp)
085030ba +0x334:  mov    0x8(%ebp),%eax
085030bd +0x337:  mov    %eax,(%esp)
085030c0 +0x33a:  call   08502a7e <_ZN10CInventory36stackInvenItemIntoCorrespondingSpaceE10Inven_Item14eItemAddReasonb>  ; CInventory::stackInvenItemIntoCorrespondingSpace(Inven_Item, eItemAddReason, bool)
085030c5 +0x33f:  mov    %eax,-0x14(%ebp)
085030c8 +0x342:  cmpl   $0x0,-0x14(%ebp)
085030cc +0x346:  js     085030d6 <+0x350>
085030ce +0x348:  mov    -0x14(%ebp),%eax
085030d1 +0x34b:  jmp    08503388 <+0x602>
085030d6 +0x350:  cmpl   $0xfffffff6,-0x14(%ebp)
085030da +0x354:  jne    085030e6 <+0x360>
085030dc +0x356:  mov    $0xffffffff,%eax
085030e1 +0x35b:  jmp    08503388 <+0x602>
085030e6 +0x360:  movzbl 0xd(%ebp),%eax
085030ea +0x364:  cmp    $0x2,%al
085030ec +0x366:  jne    0850324e <+0x4c8>
085030f2 +0x36c:  movzbl -0x3c(%ebp),%eax
085030f6 +0x370:  mov    %eax,0x48(%esp)
085030fa +0x374:  mov    0x4c(%ebp),%eax
085030fd +0x377:  mov    %eax,0x44(%esp)
08503101 +0x37b:  mov    0xc(%ebp),%eax
08503104 +0x37e:  mov    %eax,0x4(%esp)
08503108 +0x382:  mov    0x10(%ebp),%eax
0850310b +0x385:  mov    %eax,0x8(%esp)
0850310f +0x389:  mov    0x14(%ebp),%eax
08503112 +0x38c:  mov    %eax,0xc(%esp)
08503116 +0x390:  mov    0x18(%ebp),%eax
08503119 +0x393:  mov    %eax,0x10(%esp)
0850311d +0x397:  mov    0x1c(%ebp),%eax
08503120 +0x39a:  mov    %eax,0x14(%esp)
08503124 +0x39e:  mov    0x20(%ebp),%eax
08503127 +0x3a1:  mov    %eax,0x18(%esp)
0850312b +0x3a5:  mov    0x24(%ebp),%eax
0850312e +0x3a8:  mov    %eax,0x1c(%esp)
08503132 +0x3ac:  mov    0x28(%ebp),%eax
08503135 +0x3af:  mov    %eax,0x20(%esp)
08503139 +0x3b3:  mov    0x2c(%ebp),%eax
0850313c +0x3b6:  mov    %eax,0x24(%esp)
08503140 +0x3ba:  mov    0x30(%ebp),%eax
08503143 +0x3bd:  mov    %eax,0x28(%esp)
08503147 +0x3c1:  mov    0x34(%ebp),%eax
0850314a +0x3c4:  mov    %eax,0x2c(%esp)
0850314e +0x3c8:  mov    0x38(%ebp),%eax
08503151 +0x3cb:  mov    %eax,0x30(%esp)
08503155 +0x3cf:  mov    0x3c(%ebp),%eax
08503158 +0x3d2:  mov    %eax,0x34(%esp)
0850315c +0x3d6:  mov    0x40(%ebp),%eax
0850315f +0x3d9:  mov    %eax,0x38(%esp)
08503163 +0x3dd:  mov    0x44(%ebp),%eax
08503166 +0x3e0:  mov    %eax,0x3c(%esp)
0850316a +0x3e4:  movzbl 0x48(%ebp),%eax
0850316e +0x3e8:  mov    %al,0x40(%esp)
08503172 +0x3ec:  mov    0x8(%ebp),%eax
08503175 +0x3ef:  mov    %eax,(%esp)
08503178 +0x3f2:  call   08502470 <_ZN10CInventory28insertInvenItemIntoQuickSlotE10Inven_Item14eItemAddReasonb>  ; CInventory::insertInvenItemIntoQuickSlot(Inven_Item, eItemAddReason, bool)
0850317d +0x3f7:  mov    %eax,-0x10(%ebp)
08503180 +0x3fa:  cmpl   $0x0,-0x10(%ebp)
08503184 +0x3fe:  js     0850318e <+0x408>
08503186 +0x400:  mov    -0x10(%ebp),%eax
08503189 +0x403:  jmp    08503388 <+0x602>
0850318e +0x408:  cmpl   $0xfffffff6,-0x10(%ebp)
08503192 +0x40c:  jne    0850319e <+0x418>
08503194 +0x40e:  mov    $0xffffffff,%eax
08503199 +0x413:  jmp    08503388 <+0x602>
0850319e +0x418:  movzbl -0x3c(%ebp),%eax
085031a2 +0x41c:  mov    %eax,0x48(%esp)
085031a6 +0x420:  mov    0x4c(%ebp),%eax
085031a9 +0x423:  mov    %eax,0x44(%esp)
085031ad +0x427:  mov    0xc(%ebp),%eax
085031b0 +0x42a:  mov    %eax,0x4(%esp)
085031b4 +0x42e:  mov    0x10(%ebp),%eax
085031b7 +0x431:  mov    %eax,0x8(%esp)
085031bb +0x435:  mov    0x14(%ebp),%eax
085031be +0x438:  mov    %eax,0xc(%esp)
085031c2 +0x43c:  mov    0x18(%ebp),%eax
085031c5 +0x43f:  mov    %eax,0x10(%esp)
085031c9 +0x443:  mov    0x1c(%ebp),%eax
085031cc +0x446:  mov    %eax,0x14(%esp)
085031d0 +0x44a:  mov    0x20(%ebp),%eax
085031d3 +0x44d:  mov    %eax,0x18(%esp)
085031d7 +0x451:  mov    0x24(%ebp),%eax
085031da +0x454:  mov    %eax,0x1c(%esp)
085031de +0x458:  mov    0x28(%ebp),%eax
085031e1 +0x45b:  mov    %eax,0x20(%esp)
085031e5 +0x45f:  mov    0x2c(%ebp),%eax
085031e8 +0x462:  mov    %eax,0x24(%esp)
085031ec +0x466:  mov    0x30(%ebp),%eax
085031ef +0x469:  mov    %eax,0x28(%esp)
085031f3 +0x46d:  mov    0x34(%ebp),%eax
085031f6 +0x470:  mov    %eax,0x2c(%esp)
085031fa +0x474:  mov    0x38(%ebp),%eax
085031fd +0x477:  mov    %eax,0x30(%esp)
08503201 +0x47b:  mov    0x3c(%ebp),%eax
08503204 +0x47e:  mov    %eax,0x34(%esp)
08503208 +0x482:  mov    0x40(%ebp),%eax
0850320b +0x485:  mov    %eax,0x38(%esp)
0850320f +0x489:  mov    0x44(%ebp),%eax
08503212 +0x48c:  mov    %eax,0x3c(%esp)
08503216 +0x490:  movzbl 0x48(%ebp),%eax
0850321a +0x494:  mov    %al,0x40(%esp)
0850321e +0x498:  mov    0x8(%ebp),%eax
08503221 +0x49b:  mov    %eax,(%esp)
08503224 +0x49e:  call   085025f8 <_ZN10CInventory37insertInvenItemIntoCoresspondingSpaceE10Inven_Item14eItemAddReasonb>  ; CInventory::insertInvenItemIntoCoresspondingSpace(Inven_Item, eItemAddReason, bool)
08503229 +0x4a3:  mov    %eax,-0x10(%ebp)
0850322c +0x4a6:  cmpl   $0x0,-0x10(%ebp)
08503230 +0x4aa:  js     0850323a <+0x4b4>
08503232 +0x4ac:  mov    -0x10(%ebp),%eax
08503235 +0x4af:  jmp    08503388 <+0x602>
0850323a +0x4b4:  cmpl   $0xfffffff6,-0x10(%ebp)
0850323e +0x4b8:  jne    08503383 <+0x5fd>
08503244 +0x4be:  mov    $0xffffffff,%eax
08503249 +0x4c3:  jmp    08503388 <+0x602>
0850324e +0x4c8:  movzbl -0x3c(%ebp),%eax
08503252 +0x4cc:  mov    %eax,0x48(%esp)
08503256 +0x4d0:  mov    0x4c(%ebp),%eax
08503259 +0x4d3:  mov    %eax,0x44(%esp)
0850325d +0x4d7:  mov    0xc(%ebp),%eax
08503260 +0x4da:  mov    %eax,0x4(%esp)
08503264 +0x4de:  mov    0x10(%ebp),%eax
08503267 +0x4e1:  mov    %eax,0x8(%esp)
0850326b +0x4e5:  mov    0x14(%ebp),%eax
0850326e +0x4e8:  mov    %eax,0xc(%esp)
08503272 +0x4ec:  mov    0x18(%ebp),%eax
08503275 +0x4ef:  mov    %eax,0x10(%esp)
08503279 +0x4f3:  mov    0x1c(%ebp),%eax
0850327c +0x4f6:  mov    %eax,0x14(%esp)
08503280 +0x4fa:  mov    0x20(%ebp),%eax
08503283 +0x4fd:  mov    %eax,0x18(%esp)
08503287 +0x501:  mov    0x24(%ebp),%eax
0850328a +0x504:  mov    %eax,0x1c(%esp)
0850328e +0x508:  mov    0x28(%ebp),%eax
08503291 +0x50b:  mov    %eax,0x20(%esp)
08503295 +0x50f:  mov    0x2c(%ebp),%eax
08503298 +0x512:  mov    %eax,0x24(%esp)
0850329c +0x516:  mov    0x30(%ebp),%eax
0850329f +0x519:  mov    %eax,0x28(%esp)
085032a3 +0x51d:  mov    0x34(%ebp),%eax
085032a6 +0x520:  mov    %eax,0x2c(%esp)
085032aa +0x524:  mov    0x38(%ebp),%eax
085032ad +0x527:  mov    %eax,0x30(%esp)
085032b1 +0x52b:  mov    0x3c(%ebp),%eax
085032b4 +0x52e:  mov    %eax,0x34(%esp)
085032b8 +0x532:  mov    0x40(%ebp),%eax
085032bb +0x535:  mov    %eax,0x38(%esp)
085032bf +0x539:  mov    0x44(%ebp),%eax
085032c2 +0x53c:  mov    %eax,0x3c(%esp)
085032c6 +0x540:  movzbl 0x48(%ebp),%eax
085032ca +0x544:  mov    %al,0x40(%esp)
085032ce +0x548:  mov    0x8(%ebp),%eax
085032d1 +0x54b:  mov    %eax,(%esp)
085032d4 +0x54e:  call   085025f8 <_ZN10CInventory37insertInvenItemIntoCoresspondingSpaceE10Inven_Item14eItemAddReasonb>  ; CInventory::insertInvenItemIntoCoresspondingSpace(Inven_Item, eItemAddReason, bool)
085032d9 +0x553:  mov    %eax,-0xc(%ebp)
085032dc +0x556:  cmpl   $0x0,-0xc(%ebp)
085032e0 +0x55a:  js     085032ea <+0x564>
085032e2 +0x55c:  mov    -0xc(%ebp),%eax
085032e5 +0x55f:  jmp    08503388 <+0x602>
085032ea +0x564:  movzbl -0x3c(%ebp),%eax
085032ee +0x568:  mov    %eax,0x48(%esp)
085032f2 +0x56c:  mov    0x4c(%ebp),%eax
085032f5 +0x56f:  mov    %eax,0x44(%esp)
085032f9 +0x573:  mov    0xc(%ebp),%eax
085032fc +0x576:  mov    %eax,0x4(%esp)
08503300 +0x57a:  mov    0x10(%ebp),%eax
08503303 +0x57d:  mov    %eax,0x8(%esp)
08503307 +0x581:  mov    0x14(%ebp),%eax
0850330a +0x584:  mov    %eax,0xc(%esp)
0850330e +0x588:  mov    0x18(%ebp),%eax
08503311 +0x58b:  mov    %eax,0x10(%esp)
08503315 +0x58f:  mov    0x1c(%ebp),%eax
08503318 +0x592:  mov    %eax,0x14(%esp)
0850331c +0x596:  mov    0x20(%ebp),%eax
0850331f +0x599:  mov    %eax,0x18(%esp)
08503323 +0x59d:  mov    0x24(%ebp),%eax
08503326 +0x5a0:  mov    %eax,0x1c(%esp)
0850332a +0x5a4:  mov    0x28(%ebp),%eax
0850332d +0x5a7:  mov    %eax,0x20(%esp)
08503331 +0x5ab:  mov    0x2c(%ebp),%eax
08503334 +0x5ae:  mov    %eax,0x24(%esp)
08503338 +0x5b2:  mov    0x30(%ebp),%eax
0850333b +0x5b5:  mov    %eax,0x28(%esp)
0850333f +0x5b9:  mov    0x34(%ebp),%eax
08503342 +0x5bc:  mov    %eax,0x2c(%esp)
08503346 +0x5c0:  mov    0x38(%ebp),%eax
08503349 +0x5c3:  mov    %eax,0x30(%esp)
0850334d +0x5c7:  mov    0x3c(%ebp),%eax
08503350 +0x5ca:  mov    %eax,0x34(%esp)
08503354 +0x5ce:  mov    0x40(%ebp),%eax
08503357 +0x5d1:  mov    %eax,0x38(%esp)
0850335b +0x5d5:  mov    0x44(%ebp),%eax
0850335e +0x5d8:  mov    %eax,0x3c(%esp)
08503362 +0x5dc:  movzbl 0x48(%ebp),%eax
08503366 +0x5e0:  mov    %al,0x40(%esp)
0850336a +0x5e4:  mov    0x8(%ebp),%eax
0850336d +0x5e7:  mov    %eax,(%esp)
08503370 +0x5ea:  call   08502470 <_ZN10CInventory28insertInvenItemIntoQuickSlotE10Inven_Item14eItemAddReasonb>  ; CInventory::insertInvenItemIntoQuickSlot(Inven_Item, eItemAddReason, bool)
08503375 +0x5ef:  mov    %eax,-0xc(%ebp)
08503378 +0x5f2:  cmpl   $0x0,-0xc(%ebp)
0850337c +0x5f6:  js     08503383 <+0x5fd>
0850337e +0x5f8:  mov    -0xc(%ebp),%eax
08503381 +0x5fb:  jmp    08503388 <+0x602>
08503383 +0x5fd:  mov    $0xffffffff,%eax
08503388 +0x602:  add    $0x94,%esp
0850338e +0x608:  pop    %ebx
0850338f +0x609:  pop    %ebp
08503390 +0x60a:  ret
08503391 +0x60b:  nop
```

## 反编译 C

```c
// CInventory::insertItemIntoInventory @ 0x8502d86

/* CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool) */

int CInventory::insertItemIntoInventory
              (CInventory *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
              undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
              undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
              undefined1 param_17,int param_18,uint param_19,uint param_20)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  CDataManager *this;
  undefined1 local_38 [24];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  uVar3 = param_20;
  uVar2 = param_19;
  if (CONCAT22((undefined2)param_3,param_2._2_2_) == 0) {
    iVar5 = Inven_Item::get_add_info((Inven_Item *)&param_2);
    if (iVar5 < 0) {
      local_1c = -1;
    }
    else {
      iVar5 = Inven_Item::get_add_info((Inven_Item *)&param_2);
      if (iVar5 == 0) {
        local_1c = 0;
      }
      else {
        uVar6 = Inven_Item::get_add_info((Inven_Item *)&param_2);
        gain_money(param_1,uVar6,7,uVar2 & 0xff,0);
        local_1c = 0;
      }
    }
  }
  else {
    if ((param_18 != 7) && (param_18 != 2)) {
      uVar1 = CONCAT22((undefined2)param_3,param_2._2_2_);
      this = (CDataManager *)G_CDataManager();
      local_20 = CDataManager::IsDBLogItem(this,uVar1);
      if (local_20 != -1) {
        if (param_2._1_1_ == '\x01') {
          CUser::AddDBLogItem(*(CUser **)param_1,CONCAT22((undefined2)param_3,param_2._2_2_),1,
                              local_20);
        }
        else if (param_2._1_1_ == '\x02') {
          uVar6 = Inven_Item::get_add_info((Inven_Item *)&param_2);
          CUser::AddDBLogItem(*(CUser **)param_1,CONCAT22((undefined2)param_3,param_2._2_2_),uVar6,
                              local_20);
        }
      }
    }
    cVar4 = Inven_Item::IsCreatureItemType((Inven_Item *)&param_2);
    if (cVar4 == '\0') {
      if (param_2._1_1_ == '\b') {
        uVar6 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)param_1);
        WongWork::CGenUniqueNo::genIPGNo(6,uVar6,local_38);
        local_1c = CUser::addAvatarItem
                             (*(CUser **)param_1,CONCAT22((undefined2)param_3,param_2._2_2_),0,
                              (int)param_4._3_1_,local_38,0x14);
        CUser::SendUpdateItemList(*(CUser **)param_1,1,1,local_1c);
      }
      else {
        if (param_2._1_1_ != '\x01') {
          local_18 = stackInvenItemIntoQuickSlot
                               (param_1,CONCAT22(param_2._2_2_,CONCAT11(param_2._1_1_,param_2._0_1_)
                                                ),CONCAT22(param_3._2_2_,(undefined2)param_3),
                                param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                                param_12,param_13,param_14,param_15,param_16,param_17,param_18,
                                uVar2 & 0xff);
          if (-1 < local_18) {
            return local_18;
          }
          if (local_18 == -10) {
            return -1;
          }
          local_18 = stackInvenItemIntoCorrespondingSpace
                               (param_1,CONCAT22(param_2._2_2_,CONCAT11(param_2._1_1_,param_2._0_1_)
                                                ),CONCAT22(param_3._2_2_,(undefined2)param_3),
                                param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                                param_12,param_13,param_14,param_15,param_16,param_17,param_18,
                                uVar2 & 0xff);
          if (-1 < local_18) {
            return local_18;
          }
          if (local_18 == -10) {
            return -1;
          }
        }
        if (param_2._1_1_ == '\x02') {
          local_14 = insertInvenItemIntoQuickSlot
                               (param_1,CONCAT22(param_2._2_2_,CONCAT11(2,param_2._0_1_)),
                                CONCAT22(param_3._2_2_,(undefined2)param_3),param_4,param_5,param_6,
                                param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14
                                ,param_15,param_16,param_17,param_18,uVar2 & 0xff);
          if (-1 < local_14) {
            return local_14;
          }
          if (local_14 == -10) {
            return -1;
          }
          iVar5 = insertInvenItemIntoCoresspondingSpace
                            (param_1,CONCAT22(param_2._2_2_,CONCAT11(param_2._1_1_,param_2._0_1_)),
                             CONCAT22(param_3._2_2_,(undefined2)param_3),param_4,param_5,param_6,
                             param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,
                             param_15,param_16,param_17,param_18,uVar2 & 0xff);
          if (-1 < iVar5) {
            return iVar5;
          }
          if (iVar5 == -10) {
            return -1;
          }
        }
        else {
          local_10 = insertInvenItemIntoCoresspondingSpace
                               (param_1,CONCAT22(param_2._2_2_,CONCAT11(param_2._1_1_,param_2._0_1_)
                                                ),CONCAT22(param_3._2_2_,(undefined2)param_3),
                                param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                                param_12,param_13,param_14,param_15,param_16,param_17,param_18,
                                uVar2 & 0xff);
          if (-1 < local_10) {
            return local_10;
          }
          iVar5 = insertInvenItemIntoQuickSlot
                            (param_1,CONCAT22(param_2._2_2_,CONCAT11(param_2._1_1_,param_2._0_1_)),
                             CONCAT22(param_3._2_2_,(undefined2)param_3),param_4,param_5,param_6,
                             param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,
                             param_15,param_16,param_17,param_18,uVar2 & 0xff);
          if (-1 < iVar5) {
            return iVar5;
          }
        }
        local_1c = -1;
      }
    }
    else {
      local_1c = insertItemIntoCreature(param_1,&param_2,param_18,uVar2 & 0xff,uVar3 & 0xff);
    }
  }
  return local_1c;
}
```
