# InsertRewardItems

`_ZN8WongWork10CBossTower17InsertRewardItemsEv`

`WongWork::CBossTower::InsertRewardItems()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x081447a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081447a0  _ZN8WongWork10CBossTower17InsertRewardItemsEv
#           WongWork::CBossTower::InsertRewardItems()
# range [0x081447a0, 0x08144d53]
081447a0 +0x000:  push   %ebp
081447a1 +0x001:  mov    %esp,%ebp
081447a3 +0x003:  push   %edi
081447a4 +0x004:  push   %esi
081447a5 +0x005:  push   %ebx
081447a6 +0x006:  sub    $0x1dc,%esp
081447ac +0x00c:  movl   $0x0,-0x40(%ebp)
081447b3 +0x013:  jmp    08144d34 <+0x594>
081447b8 +0x018:  mov    0x8(%ebp),%eax
081447bb +0x01b:  mov    0x4(%eax),%eax
081447be +0x01e:  mov    -0x40(%ebp),%edx
081447c1 +0x021:  mov    %edx,0x4(%esp)
081447c5 +0x025:  mov    %eax,(%esp)
081447c8 +0x028:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081447cd +0x02d:  mov    %eax,-0x3c(%ebp)
081447d0 +0x030:  cmpl   $0x0,-0x3c(%ebp)
081447d4 +0x034:  je     081447f2 <+0x52>
081447d6 +0x036:  mov    0x8(%ebp),%eax
081447d9 +0x039:  mov    0x4(%eax),%eax
081447dc +0x03c:  mov    -0x40(%ebp),%edx
081447df +0x03f:  mov    %edx,0x4(%esp)
081447e3 +0x043:  mov    %eax,(%esp)
081447e6 +0x046:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
081447eb +0x04b:  xor    $0x1,%eax
081447ee +0x04e:  test   %al,%al
081447f0 +0x050:  je     081447f9 <+0x59>
081447f2 +0x052:  mov    $0x1,%eax
081447f7 +0x057:  jmp    081447fe <+0x5e>
081447f9 +0x059:  mov    $0x0,%eax
081447fe +0x05e:  test   %al,%al
08144800 +0x060:  jne    08144d2f <+0x58f>
08144806 +0x066:  movl   $0x0,-0x38(%ebp)
0814480d +0x06d:  jmp    08144d0b <+0x56b>
08144812 +0x072:  mov    -0x40(%ebp),%eax
08144815 +0x075:  mov    -0x38(%ebp),%edx
08144818 +0x078:  imul   $0x3d,%edx,%edx
0814481b +0x07b:  imul   $0x268,%eax,%eax
08144821 +0x081:  lea    (%edx,%eax,1),%eax
08144824 +0x084:  add    $0x20,%eax
08144827 +0x087:  add    0x8(%ebp),%eax
0814482a +0x08a:  add    $0xc,%eax
0814482d +0x08d:  mov    %eax,-0x34(%ebp)
08144830 +0x090:  cmpl   $0x0,-0x34(%ebp)
08144834 +0x094:  je     08144d00 <+0x560>
0814483a +0x09a:  mov    -0x34(%ebp),%eax
0814483d +0x09d:  mov    0x2(%eax),%eax
08144840 +0x0a0:  cmp    $0xffffffff,%eax
08144843 +0x0a3:  je     08144d03 <+0x563>
08144849 +0x0a9:  movl   $0xffffffff,-0x30(%ebp)
08144850 +0x0b0:  mov    -0x34(%ebp),%eax
08144853 +0x0b3:  mov    0x2(%eax),%eax
08144856 +0x0b6:  test   %eax,%eax
08144858 +0x0b8:  jne    081448e7 <+0x147>
0814485e +0x0be:  mov    -0x34(%ebp),%eax
08144861 +0x0c1:  mov    %eax,(%esp)
08144864 +0x0c4:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08144869 +0x0c9:  mov    %eax,%ebx
0814486b +0x0cb:  mov    -0x3c(%ebp),%eax
0814486e +0x0ce:  mov    %eax,(%esp)
08144871 +0x0d1:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08144876 +0x0d6:  movl   $0x0,0x10(%esp)
0814487e +0x0de:  movl   $0x1,0xc(%esp)
08144886 +0x0e6:  movl   $0x5,0x8(%esp)
0814488e +0x0ee:  mov    %ebx,0x4(%esp)
08144892 +0x0f2:  mov    %eax,(%esp)
08144895 +0x0f5:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
0814489a +0x0fa:  mov    %eax,-0x2c(%ebp)
0814489d +0x0fd:  mov    -0x34(%ebp),%eax
081448a0 +0x100:  mov    %eax,(%esp)
081448a3 +0x103:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
081448a8 +0x108:  cmp    -0x2c(%ebp),%eax
081448ab +0x10b:  setg   %al
081448ae +0x10e:  test   %al,%al
081448b0 +0x110:  je     081448db <+0x13b>
081448b2 +0x112:  mov    -0x2c(%ebp),%ebx
081448b5 +0x115:  mov    -0x34(%ebp),%eax
081448b8 +0x118:  mov    %eax,(%esp)
081448bb +0x11b:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
081448c0 +0x120:  mov    %ebx,0xc(%esp)
081448c4 +0x124:  mov    %eax,0x8(%esp)
081448c8 +0x128:  movl   $0x0,0x4(%esp)
081448d0 +0x130:  mov    -0x3c(%ebp),%eax
081448d3 +0x133:  mov    %eax,(%esp)
081448d6 +0x136:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
081448db +0x13b:  movl   $0x0,-0x30(%ebp)
081448e2 +0x142:  jmp    0814498a <+0x1ea>
081448e7 +0x147:  mov    -0x3c(%ebp),%eax
081448ea +0x14a:  mov    %eax,(%esp)
081448ed +0x14d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081448f2 +0x152:  mov    %eax,%edx
081448f4 +0x154:  movl   $0x1,0x4c(%esp)
081448fc +0x15c:  movl   $0x1,0x48(%esp)
08144904 +0x164:  movl   $0xb,0x44(%esp)
0814490c +0x16c:  mov    -0x34(%ebp),%eax
0814490f +0x16f:  mov    (%eax),%ecx
08144911 +0x171:  mov    %ecx,0x4(%esp)
08144915 +0x175:  mov    0x4(%eax),%ecx
08144918 +0x178:  mov    %ecx,0x8(%esp)
0814491c +0x17c:  mov    0x8(%eax),%ecx
0814491f +0x17f:  mov    %ecx,0xc(%esp)
08144923 +0x183:  mov    0xc(%eax),%ecx
08144926 +0x186:  mov    %ecx,0x10(%esp)
0814492a +0x18a:  mov    0x10(%eax),%ecx
0814492d +0x18d:  mov    %ecx,0x14(%esp)
08144931 +0x191:  mov    0x14(%eax),%ecx
08144934 +0x194:  mov    %ecx,0x18(%esp)
08144938 +0x198:  mov    0x18(%eax),%ecx
0814493b +0x19b:  mov    %ecx,0x1c(%esp)
0814493f +0x19f:  mov    0x1c(%eax),%ecx
08144942 +0x1a2:  mov    %ecx,0x20(%esp)
08144946 +0x1a6:  mov    0x20(%eax),%ecx
08144949 +0x1a9:  mov    %ecx,0x24(%esp)
0814494d +0x1ad:  mov    0x24(%eax),%ecx
08144950 +0x1b0:  mov    %ecx,0x28(%esp)
08144954 +0x1b4:  mov    0x28(%eax),%ecx
08144957 +0x1b7:  mov    %ecx,0x2c(%esp)
0814495b +0x1bb:  mov    0x2c(%eax),%ecx
0814495e +0x1be:  mov    %ecx,0x30(%esp)
08144962 +0x1c2:  mov    0x30(%eax),%ecx
08144965 +0x1c5:  mov    %ecx,0x34(%esp)
08144969 +0x1c9:  mov    0x34(%eax),%ecx
0814496c +0x1cc:  mov    %ecx,0x38(%esp)
08144970 +0x1d0:  mov    0x38(%eax),%ecx
08144973 +0x1d3:  mov    %ecx,0x3c(%esp)
08144977 +0x1d7:  movzbl 0x3c(%eax),%eax
0814497b +0x1db:  mov    %al,0x40(%esp)
0814497f +0x1df:  mov    %edx,(%esp)
08144982 +0x1e2:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08144987 +0x1e7:  mov    %eax,-0x30(%ebp)
0814498a +0x1ea:  cmpl   $0x0,-0x30(%ebp)
0814498e +0x1ee:  js     08144a73 <+0x2d3>
08144994 +0x1f4:  lea    -0x4c(%ebp),%eax
08144997 +0x1f7:  mov    %eax,(%esp)
0814499a +0x1fa:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814499f +0x1ff:  movl   $0xe,0x8(%esp)
081449a7 +0x207:  movl   $0x0,0x4(%esp)
081449af +0x20f:  lea    -0x4c(%ebp),%eax
081449b2 +0x212:  mov    %eax,(%esp)
081449b5 +0x215:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081449ba +0x21a:  mov    -0x34(%ebp),%eax
081449bd +0x21d:  mov    %eax,(%esp)
081449c0 +0x220:  call   083481e2 <_ZNK10Inven_Item12GetItemSpaceEv>  ; Inven_Item::GetItemSpace() const
081449c5 +0x225:  mov    %eax,0x4(%esp)
081449c9 +0x229:  lea    -0x4c(%ebp),%eax
081449cc +0x22c:  mov    %eax,(%esp)
081449cf +0x22f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081449d4 +0x234:  movl   $0x1,0x4(%esp)
081449dc +0x23c:  lea    -0x4c(%ebp),%eax
081449df +0x23f:  mov    %eax,(%esp)
081449e2 +0x242:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081449e7 +0x247:  mov    -0x34(%ebp),%eax
081449ea +0x24a:  mov    %eax,(%esp)
081449ed +0x24d:  call   083481e2 <_ZNK10Inven_Item12GetItemSpaceEv>  ; Inven_Item::GetItemSpace() const
081449f2 +0x252:  mov    %eax,(%esp)
081449f5 +0x255:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081449fa +0x25a:  mov    %eax,%ebx
081449fc +0x25c:  mov    -0x3c(%ebp),%eax
081449ff +0x25f:  mov    %eax,(%esp)
08144a02 +0x262:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08144a07 +0x267:  lea    -0x4c(%ebp),%edx
08144a0a +0x26a:  mov    %edx,0xc(%esp)
08144a0e +0x26e:  mov    -0x30(%ebp),%edx
08144a11 +0x271:  mov    %edx,0x8(%esp)
08144a15 +0x275:  mov    %ebx,0x4(%esp)
08144a19 +0x279:  mov    %eax,(%esp)
08144a1c +0x27c:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
08144a21 +0x281:  movl   $0x1,0x4(%esp)
08144a29 +0x289:  lea    -0x4c(%ebp),%eax
08144a2c +0x28c:  mov    %eax,(%esp)
08144a2f +0x28f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08144a34 +0x294:  lea    -0x4c(%ebp),%eax
08144a37 +0x297:  mov    %eax,0x4(%esp)
08144a3b +0x29b:  mov    -0x3c(%ebp),%eax
08144a3e +0x29e:  mov    %eax,(%esp)
08144a41 +0x2a1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08144a46 +0x2a6:  jmp    08144a63 <+0x2c3>
08144a48 +0x2a8:  mov    %edx,%ebx
08144a4a +0x2aa:  mov    %eax,%esi
08144a4c +0x2ac:  lea    -0x4c(%ebp),%eax
08144a4f +0x2af:  mov    %eax,(%esp)
08144a52 +0x2b2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08144a57 +0x2b7:  mov    %esi,%eax
08144a59 +0x2b9:  mov    %ebx,%edx
08144a5b +0x2bb:  mov    %eax,(%esp)
08144a5e +0x2be:  call   08ae3750 <_Unwind_Resume>
08144a63 +0x2c3:  lea    -0x4c(%ebp),%eax
08144a66 +0x2c6:  mov    %eax,(%esp)
08144a69 +0x2c9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08144a6e +0x2ce:  jmp    08144d07 <+0x567>
08144a73 +0x2d3:  movl   $0x0,-0x28(%ebp)
08144a7a +0x2da:  movl   $0x0,-0x24(%ebp)
08144a81 +0x2e1:  lea    -0x64(%ebp),%edx
08144a84 +0x2e4:  mov    $0x0,%ecx
08144a89 +0x2e9:  mov    $0x18,%eax
08144a8e +0x2ee:  mov    %eax,%ebx
08144a90 +0x2f0:  and    $0xfffffffc,%ebx
08144a93 +0x2f3:  mov    $0x0,%eax
08144a98 +0x2f8:  mov    %ecx,(%edx,%eax,1)
08144a9b +0x2fb:  add    $0x4,%eax
08144a9e +0x2fe:  cmp    %ebx,%eax
08144aa0 +0x300:  jb     08144a98 <+0x2f8>
08144aa2 +0x302:  add    %eax,%edx
08144aa4 +0x304:  mov    -0x34(%ebp),%eax
08144aa7 +0x307:  mov    0x2(%eax),%eax
08144aaa +0x30a:  mov    %eax,%ebx
08144aac +0x30c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08144ab1 +0x311:  mov    %ebx,0x4(%esp)
08144ab5 +0x315:  mov    %eax,(%esp)
08144ab8 +0x318:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08144abd +0x31d:  mov    %eax,-0x20(%ebp)
08144ac0 +0x320:  cmpl   $0x0,-0x20(%ebp)
08144ac4 +0x324:  je     08144d06 <+0x566>
08144aca +0x32a:  movl   $0x100,0x8(%esp)
08144ad2 +0x332:  movl   $0x0,0x4(%esp)
08144ada +0x33a:  lea    -0x182(%ebp),%eax
08144ae0 +0x340:  mov    %eax,(%esp)
08144ae3 +0x343:  call   0807dcc0 <_init+0x5b8>
08144ae8 +0x348:  movl   $0x1e,0x8(%esp)
08144af0 +0x350:  movl   $0x0,0x4(%esp)
08144af8 +0x358:  lea    -0x82(%ebp),%eax
08144afe +0x35e:  mov    %eax,(%esp)
08144b01 +0x361:  call   0807dcc0 <_init+0x5b8>
08144b06 +0x366:  movl   $0x0,0xc(%esp)
08144b0e +0x36e:  movl   $"chn_game_server_msg_21",0x8(%esp)
08144b16 +0x376:  movl   $0x4,0x4(%esp)
08144b1e +0x37e:  movl   $&g_scriptStringManager_,(%esp)
08144b25 +0x385:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08144b2a +0x38a:  movl   $0x1d,0x8(%esp)
08144b32 +0x392:  mov    %eax,0x4(%esp)
08144b36 +0x396:  lea    -0x82(%ebp),%eax
08144b3c +0x39c:  mov    %eax,(%esp)
08144b3f +0x39f:  call   0807d8d0 <_init+0x1c8>
08144b44 +0x3a4:  movl   $0x0,0xc(%esp)
08144b4c +0x3ac:  movl   $"chn_game_server_msg_22",0x8(%esp)
08144b54 +0x3b4:  movl   $0x4,0x4(%esp)
08144b5c +0x3bc:  movl   $&g_scriptStringManager_,(%esp)
08144b63 +0x3c3:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08144b68 +0x3c8:  movl   $0xff,0x8(%esp)
08144b70 +0x3d0:  mov    %eax,0x4(%esp)
08144b74 +0x3d4:  lea    -0x182(%ebp),%eax
08144b7a +0x3da:  mov    %eax,(%esp)
08144b7d +0x3dd:  call   0807d8d0 <_init+0x1c8>
08144b82 +0x3e2:  mov    -0x20(%ebp),%eax
08144b85 +0x3e5:  mov    (%eax),%eax
08144b87 +0x3e7:  add    $0x10,%eax
08144b8a +0x3ea:  mov    (%eax),%edx
08144b8c +0x3ec:  mov    -0x20(%ebp),%eax
08144b8f +0x3ef:  mov    %eax,(%esp)
08144b92 +0x3f2:  call   *%edx
08144b94 +0x3f4:  test   %al,%al
08144b96 +0x3f6:  je     08144bd8 <+0x438>
08144b98 +0x3f8:  mov    -0x20(%ebp),%eax
08144b9b +0x3fb:  mov    %eax,(%esp)
08144b9e +0x3fe:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
08144ba3 +0x403:  mov    %eax,-0x1c(%ebp)
08144ba6 +0x406:  cmpl   $0x0,-0x1c(%ebp)
08144baa +0x40a:  je     08144bd1 <+0x431>
08144bac +0x40c:  cmpl   $0x16d,-0x1c(%ebp)
08144bb3 +0x413:  je     08144bd1 <+0x431>
08144bb5 +0x415:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08144bbc +0x41c:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08144bc1 +0x421:  mov    -0x1c(%ebp),%edx
08144bc4 +0x424:  imul   $&_ZL14gUnicodeBuffer+0xac54,%edx,%edx
08144bca +0x42a:  add    %edx,%eax
08144bcc +0x42c:  mov    %eax,-0x24(%ebp)
08144bcf +0x42f:  jmp    08144bd8 <+0x438>
08144bd1 +0x431:  movl   $0x0,-0x24(%ebp)
08144bd8 +0x438:  mov    -0x20(%ebp),%eax
08144bdb +0x43b:  mov    (%eax),%eax
08144bdd +0x43d:  add    $0x10,%eax
08144be0 +0x440:  mov    (%eax),%edx
08144be2 +0x442:  mov    -0x20(%ebp),%eax
08144be5 +0x445:  mov    %eax,(%esp)
08144be8 +0x448:  call   *%edx
08144bea +0x44a:  test   %al,%al
08144bec +0x44c:  je     08144c8b <+0x4eb>
08144bf2 +0x452:  lea    -0x182(%ebp),%eax
08144bf8 +0x458:  mov    %eax,(%esp)
08144bfb +0x45b:  call   0807e3b0 <_init+0xca8>
08144c00 +0x460:  mov    %eax,-0x18c(%ebp)
08144c06 +0x466:  mov    -0x3c(%ebp),%eax
08144c09 +0x469:  mov    %eax,(%esp)
08144c0c +0x46c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08144c11 +0x471:  lea    -0x64(%ebp),%edx
08144c14 +0x474:  mov    %edx,0x8(%esp)
08144c18 +0x478:  mov    %eax,0x4(%esp)
08144c1c +0x47c:  movl   $0x3,(%esp)
08144c23 +0x483:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
08144c28 +0x488:  mov    %eax,%ebx
08144c2a +0x48a:  mov    -0x20(%ebp),%eax
08144c2d +0x48d:  mov    %eax,(%esp)
08144c30 +0x490:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
08144c35 +0x495:  movsbl %al,%edi
08144c38 +0x498:  mov    -0x34(%ebp),%eax
08144c3b +0x49b:  mov    0x2(%eax),%eax
08144c3e +0x49e:  mov    %eax,%esi
08144c40 +0x4a0:  mov    -0x3c(%ebp),%eax
08144c43 +0x4a3:  mov    %eax,(%esp)
08144c46 +0x4a6:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08144c4b +0x4ab:  mov    -0x18c(%ebp),%edx
08144c51 +0x4b1:  mov    %edx,0x20(%esp)
08144c55 +0x4b5:  lea    -0x182(%ebp),%edx
08144c5b +0x4bb:  mov    %edx,0x1c(%esp)
08144c5f +0x4bf:  mov    %ebx,0x18(%esp)
08144c63 +0x4c3:  movl   $0x0,0x14(%esp)
08144c6b +0x4cb:  mov    %edi,0x10(%esp)
08144c6f +0x4cf:  mov    -0x24(%ebp),%edx
08144c72 +0x4d2:  mov    %edx,0xc(%esp)
08144c76 +0x4d6:  mov    %esi,0x8(%esp)
08144c7a +0x4da:  mov    %eax,0x4(%esp)
08144c7e +0x4de:  mov    -0x3c(%ebp),%eax
08144c81 +0x4e1:  mov    %eax,(%esp)
08144c84 +0x4e4:  call   085561b0 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i>  ; WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail(CUser*, int, int, int, char, char, char const*, char const*, int)
08144c89 +0x4e9:  jmp    08144d07 <+0x567>
08144c8b +0x4eb:  mov    -0x3c(%ebp),%eax
08144c8e +0x4ee:  mov    %eax,(%esp)
08144c91 +0x4f1:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08144c96 +0x4f6:  mov    %eax,%ebx
08144c98 +0x4f8:  lea    -0x182(%ebp),%eax
08144c9e +0x4fe:  mov    %eax,(%esp)
08144ca1 +0x501:  call   0807e3b0 <_init+0xca8>
08144ca6 +0x506:  mov    %eax,%esi
08144ca8 +0x508:  mov    -0x3c(%ebp),%eax
08144cab +0x50b:  mov    %eax,(%esp)
08144cae +0x50e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08144cb3 +0x513:  movl   $0x0,0x24(%esp)
08144cbb +0x51b:  movl   $0x0,0x20(%esp)
08144cc3 +0x523:  mov    %ebx,0x1c(%esp)
08144cc7 +0x527:  movl   $0xf,0x18(%esp)
08144ccf +0x52f:  mov    %esi,0x14(%esp)
08144cd3 +0x533:  lea    -0x182(%ebp),%edx
08144cd9 +0x539:  mov    %edx,0x10(%esp)
08144cdd +0x53d:  mov    %eax,0xc(%esp)
08144ce1 +0x541:  movl   $0x0,0x8(%esp)
08144ce9 +0x549:  mov    -0x34(%ebp),%eax
08144cec +0x54c:  mov    %eax,0x4(%esp)
08144cf0 +0x550:  lea    -0x82(%ebp),%eax
08144cf6 +0x556:  mov    %eax,(%esp)
08144cf9 +0x559:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08144cfe +0x55e:  jmp    08144d07 <+0x567>
08144d00 +0x560:  nop
08144d01 +0x561:  jmp    08144d07 <+0x567>
08144d03 +0x563:  nop
08144d04 +0x564:  jmp    08144d07 <+0x567>
08144d06 +0x566:  nop
08144d07 +0x567:  addl   $0x1,-0x38(%ebp)
08144d0b +0x56b:  mov    -0x40(%ebp),%eax
08144d0e +0x56e:  mov    0x8(%ebp),%edx
08144d11 +0x571:  imul   $0x268,%eax,%eax
08144d17 +0x577:  lea    (%edx,%eax,1),%eax
08144d1a +0x57a:  add    $0x28,%eax
08144d1d +0x57d:  mov    (%eax),%eax
08144d1f +0x57f:  cmp    -0x38(%ebp),%eax
08144d22 +0x582:  setg   %al
08144d25 +0x585:  test   %al,%al
08144d27 +0x587:  jne    08144812 <+0x72>
08144d2d +0x58d:  jmp    08144d30 <+0x590>
08144d2f +0x58f:  nop
08144d30 +0x590:  addl   $0x1,-0x40(%ebp)
08144d34 +0x594:  cmpl   $0x3,-0x40(%ebp)
08144d38 +0x598:  setle  %al
08144d3b +0x59b:  test   %al,%al
08144d3d +0x59d:  jne    081447b8 <+0x18>
08144d43 +0x5a3:  mov    $0x1,%eax
08144d48 +0x5a8:  add    $0x1dc,%esp
08144d4e +0x5ae:  pop    %ebx
08144d4f +0x5af:  pop    %esi
08144d50 +0x5b0:  pop    %edi
08144d51 +0x5b1:  pop    %ebp
08144d52 +0x5b2:  ret
08144d53 +0x5b3:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::InsertRewardItems @ 0x81447a0

/* WongWork::CBossTower::InsertRewardItems() */

undefined4 __thiscall WongWork::CBossTower::InsertRewardItems(CBossTower *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  CInventory *pCVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  CDataManager *this_00;
  char *pcVar8;
  size_t sVar9;
  undefined4 uVar10;
  char local_186 [256];
  char local_86 [30];
  undefined4 local_68 [6];
  PacketGuard local_50 [12];
  int local_44;
  CUserCharacInfo *local_40;
  int local_3c;
  Inven_Item *local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  CItem *local_24;
  int local_20;
  
  for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
    local_40 = (CUserCharacInfo *)CParty::get_user(*(CParty **)(this + 4),local_44);
    if ((local_40 == (CUserCharacInfo *)0x0) ||
       (cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_44), cVar2 != '\x01')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      for (local_3c = 0; local_3c < *(int *)(this + local_44 * 0x268 + 0x28);
          local_3c = local_3c + 1) {
        iVar6 = local_3c * 0x3d + local_44 * 0x268;
        local_38 = (Inven_Item *)(this + iVar6 + 0x2c);
        if ((local_38 != (Inven_Item *)0x0) && (*(int *)(this + iVar6 + 0x2e) != -1)) {
          local_34 = 0xffffffff;
          if (*(int *)(this + iVar6 + 0x2e) == 0) {
            uVar3 = Inven_Item::get_add_info(local_38);
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(local_40);
            local_30 = CInventory::gain_money(pCVar4,uVar3,5,1,0);
            iVar5 = Inven_Item::get_add_info(local_38);
            iVar6 = local_30;
            if (local_30 < iVar5) {
              uVar3 = Inven_Item::get_add_info(local_38);
              CUser::SendMoneyFullReason((CUser *)local_40,0,uVar3,iVar6);
            }
            local_34 = 0;
          }
          else {
            uVar3 = CUserCharacInfo::getCurCharacInvenW(local_40);
            local_34 = CInventory::insertItemIntoInventory
                                 (uVar3,*(undefined4 *)local_38,*(undefined4 *)(local_38 + 4),
                                  *(undefined4 *)(local_38 + 8),*(undefined4 *)(local_38 + 0xc),
                                  *(undefined4 *)(local_38 + 0x10),*(undefined4 *)(local_38 + 0x14),
                                  *(undefined4 *)(local_38 + 0x18),*(undefined4 *)(local_38 + 0x1c),
                                  *(undefined4 *)(local_38 + 0x20),*(undefined4 *)(local_38 + 0x24),
                                  *(undefined4 *)(local_38 + 0x28),*(undefined4 *)(local_38 + 0x2c),
                                  *(undefined4 *)(local_38 + 0x30),*(undefined4 *)(local_38 + 0x34),
                                  *(undefined4 *)(local_38 + 0x38),local_38[0x3c],0xb,1,1);
          }
          if (local_34 < 0) {
            local_2c = 0;
            local_28 = 0;
            uVar7 = 0;
            do {
              *(undefined4 *)((int)local_68 + uVar7) = 0;
              uVar7 = uVar7 + 4;
            } while (uVar7 < 0x18);
            iVar6 = *(int *)(local_38 + 2);
            this_00 = (CDataManager *)G_CDataManager();
            local_24 = (CItem *)CDataManager::find_item(this_00,iVar6);
            if (local_24 != (CItem *)0x0) {
              memset(local_186,0,0x100);
              memset(local_86,0,0x1e);
              pcVar8 = (char *)RDARScriptStringManager::findString
                                         ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                          "chn_game_server_msg_21",(bool *)0x0);
              strncpy(local_86,pcVar8,0x1d);
              pcVar8 = (char *)RDARScriptStringManager::findString
                                         ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                          "chn_game_server_msg_22",(bool *)0x0);
              strncpy(local_186,pcVar8,0xff);
              cVar2 = (**(code **)(*(int *)local_24 + 0x10))(local_24);
              if (cVar2 != '\0') {
                local_20 = CItem::getUsablePeriod(local_24);
                if ((local_20 == 0) || (local_20 == 0x16d)) {
                  local_28 = 0;
                }
                else {
                  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                  local_28 = local_28 + local_20 * 0x15180;
                }
              }
              cVar2 = (**(code **)(*(int *)local_24 + 0x10))(local_24);
              if (cVar2 == '\0') {
                uVar3 = CUser::GetServerGroup((CUser *)local_40);
                sVar9 = strlen(local_186);
                uVar10 = CUserCharacInfo::getCurCharacNo(local_40);
                CMailBoxHelper::ReqDBSendNewSystemMail
                          (local_86,local_38,0,uVar10,local_186,sVar9,0xf,uVar3,0,0);
              }
              else {
                sVar9 = strlen(local_186);
                uVar3 = CUserCharacInfo::getCurCharacNo(local_40);
                pcVar8 = (char *)CGenUniqueNo::genIPGNo(3,uVar3,local_68);
                cVar2 = CEquipItem::get_endurance((CEquipItem *)local_24);
                iVar6 = *(int *)(local_38 + 2);
                iVar5 = CUserCharacInfo::getCurCharacNo(local_40);
                CMailBoxHelper::ReqDBSendNewAvatarMail
                          ((CUser *)local_40,iVar5,iVar6,local_28,cVar2,'\0',pcVar8,local_186,sVar9)
                ;
              }
            }
          }
          else {
            PacketGuard::PacketGuard(local_50);
                    /* try { // try from 081449b5 to 08144a45 has its CatchHandler @ 08144a48 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0xe);
            iVar6 = Inven_Item::GetItemSpace(local_38);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,iVar6);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,1);
            uVar3 = Inven_Item::GetItemSpace(local_38);
            uVar3 = GetInvenTypeFromItemSpace(uVar3);
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(local_40);
            CInventory::MakeItemPacket(pCVar4,uVar3,local_34,local_50);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
            CUser::Send((CUser *)local_40,local_50);
            PacketGuard::~PacketGuard(local_50);
          }
        }
      }
    }
  }
  return 1;
}
```
