# HandleGetItem

`_ZN7WarRoom13HandleGetItemEP5CUseri`

`WarRoom::HandleGetItem(CUser*, int)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bea2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bea2e  _ZN7WarRoom13HandleGetItemEP5CUseri
#           WarRoom::HandleGetItem(CUser*, int)
# range [0x086bea2e, 0x086bf323]
086bea2e +0x000:  push   %ebp
086bea2f +0x001:  mov    %esp,%ebp
086bea31 +0x003:  push   %esi
086bea32 +0x004:  push   %ebx
086bea33 +0x005:  sub    $0x120,%esp
086bea39 +0x00b:  movb   $0x1,-0x2d(%ebp)
086bea3d +0x00f:  movl   $0x0,-0x2c(%ebp)
086bea44 +0x016:  lea    -0x4c(%ebp),%eax
086bea47 +0x019:  mov    %eax,(%esp)
086bea4a +0x01c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086bea4f +0x021:  lea    -0xcc(%ebp),%eax
086bea55 +0x027:  mov    %eax,(%esp)
086bea58 +0x02a:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
086bea5d +0x02f:  mov    0x8(%ebp),%eax
086bea60 +0x032:  lea    0x34(%eax),%edx
086bea63 +0x035:  lea    -0xcc(%ebp),%eax
086bea69 +0x03b:  mov    %eax,0x8(%esp)
086bea6d +0x03f:  mov    0x10(%ebp),%eax
086bea70 +0x042:  mov    %eax,0x4(%esp)
086bea74 +0x046:  mov    %edx,(%esp)
086bea77 +0x049:  call   086b9fe6 <_ZN8WarField12GetFieldItemEiR8map_item>  ; WarField::GetFieldItem(int, map_item&)
086bea7c +0x04e:  mov    %al,-0x25(%ebp)
086bea7f +0x051:  movzbl -0x25(%ebp),%eax
086bea83 +0x055:  xor    $0x1,%eax
086bea86 +0x058:  test   %al,%al
086bea88 +0x05a:  je     086beafa <+0xcc>
086bea8a +0x05c:  movl   $0x2e,0x8(%esp)
086bea92 +0x064:  movl   $0x1,0x4(%esp)
086bea9a +0x06c:  lea    -0x4c(%ebp),%eax
086bea9d +0x06f:  mov    %eax,(%esp)
086beaa0 +0x072:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086beaa5 +0x077:  movl   $0x0,0x4(%esp)
086beaad +0x07f:  lea    -0x4c(%ebp),%eax
086beab0 +0x082:  mov    %eax,(%esp)
086beab3 +0x085:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086beab8 +0x08a:  movl   $0x15,0x4(%esp)
086beac0 +0x092:  lea    -0x4c(%ebp),%eax
086beac3 +0x095:  mov    %eax,(%esp)
086beac6 +0x098:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086beacb +0x09d:  movl   $0x1,0x4(%esp)
086bead3 +0x0a5:  lea    -0x4c(%ebp),%eax
086bead6 +0x0a8:  mov    %eax,(%esp)
086bead9 +0x0ab:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086beade +0x0b0:  lea    -0x4c(%ebp),%eax
086beae1 +0x0b3:  mov    %eax,0x4(%esp)
086beae5 +0x0b7:  mov    0xc(%ebp),%eax
086beae8 +0x0ba:  mov    %eax,(%esp)
086beaeb +0x0bd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086beaf0 +0x0c2:  mov    $0x0,%ebx
086beaf5 +0x0c7:  jmp    086bf30c <+0x8de>
086beafa +0x0cc:  mov    0x8(%ebp),%eax
086beafd +0x0cf:  mov    %eax,(%esp)
086beb00 +0x0d2:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086beb05 +0x0d7:  mov    %eax,-0x24(%ebp)
086beb08 +0x0da:  cmpl   $0x0,-0x24(%ebp)
086beb0c +0x0de:  jg     086beb7e <+0x150>
086beb0e +0x0e0:  movl   $0x2e,0x8(%esp)
086beb16 +0x0e8:  movl   $0x1,0x4(%esp)
086beb1e +0x0f0:  lea    -0x4c(%ebp),%eax
086beb21 +0x0f3:  mov    %eax,(%esp)
086beb24 +0x0f6:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086beb29 +0x0fb:  movl   $0x0,0x4(%esp)
086beb31 +0x103:  lea    -0x4c(%ebp),%eax
086beb34 +0x106:  mov    %eax,(%esp)
086beb37 +0x109:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086beb3c +0x10e:  movl   $0x15,0x4(%esp)
086beb44 +0x116:  lea    -0x4c(%ebp),%eax
086beb47 +0x119:  mov    %eax,(%esp)
086beb4a +0x11c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086beb4f +0x121:  movl   $0x1,0x4(%esp)
086beb57 +0x129:  lea    -0x4c(%ebp),%eax
086beb5a +0x12c:  mov    %eax,(%esp)
086beb5d +0x12f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086beb62 +0x134:  lea    -0x4c(%ebp),%eax
086beb65 +0x137:  mov    %eax,0x4(%esp)
086beb69 +0x13b:  mov    0xc(%ebp),%eax
086beb6c +0x13e:  mov    %eax,(%esp)
086beb6f +0x141:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086beb74 +0x146:  mov    $0x0,%ebx
086beb79 +0x14b:  jmp    086bf30c <+0x8de>
086beb7e +0x150:  mov    -0xba(%ebp),%eax
086beb84 +0x156:  test   %eax,%eax
086beb86 +0x158:  jne    086bed8b <+0x35d>
086beb8c +0x15e:  lea    -0xcc(%ebp),%eax
086beb92 +0x164:  add    $0x10,%eax
086beb95 +0x167:  mov    %eax,(%esp)
086beb98 +0x16a:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
086beb9d +0x16f:  mov    %eax,-0x18(%ebp)
086beba0 +0x172:  movl   $0x5d,0x8(%esp)
086beba8 +0x17a:  movl   $0x0,0x4(%esp)
086bebb0 +0x182:  lea    -0x4c(%ebp),%eax
086bebb3 +0x185:  mov    %eax,(%esp)
086bebb6 +0x188:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bebbb +0x18d:  mov    0x10(%ebp),%eax
086bebbe +0x190:  mov    %eax,0x4(%esp)
086bebc2 +0x194:  lea    -0x4c(%ebp),%eax
086bebc5 +0x197:  mov    %eax,(%esp)
086bebc8 +0x19a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bebcd +0x19f:  mov    0xc(%ebp),%eax
086bebd0 +0x1a2:  mov    %eax,(%esp)
086bebd3 +0x1a5:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086bebd8 +0x1aa:  movzwl %ax,%eax
086bebdb +0x1ad:  mov    %eax,0x4(%esp)
086bebdf +0x1b1:  lea    -0x4c(%ebp),%eax
086bebe2 +0x1b4:  mov    %eax,(%esp)
086bebe5 +0x1b7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bebea +0x1bc:  movl   $0x0,-0x14(%ebp)
086bebf1 +0x1c3:  lea    -0x54(%ebp),%eax
086bebf4 +0x1c6:  mov    %eax,(%esp)
086bebf7 +0x1c9:  call   08152524 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e59>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e59
086bebfc +0x1ce:  mov    0xc(%ebp),%eax
086bebff +0x1d1:  mov    %eax,(%esp)
086bec02 +0x1d4:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086bec07 +0x1d9:  movzwl %ax,%eax
086bec0a +0x1dc:  mov    0x8(%ebp),%edx
086bec0d +0x1df:  lea    0x34(%edx),%ecx
086bec10 +0x1e2:  lea    -0x54(%ebp),%edx
086bec13 +0x1e5:  mov    %edx,0xc(%esp)
086bec17 +0x1e9:  mov    %eax,0x8(%esp)
086bec1b +0x1ed:  mov    0x10(%ebp),%eax
086bec1e +0x1f0:  mov    %eax,0x4(%esp)
086bec22 +0x1f4:  mov    %ecx,(%esp)
086bec25 +0x1f7:  call   086ba0a0 <_ZN8WarField15CheckPickupItemEiiRSt17_Rb_tree_iteratorISt4pairIKi8map_itemEE>  ; WarField::CheckPickupItem(int, int, std::_Rb_tree_iterator<std::pair<int const, map_item> >&)
086bec2a +0x1fc:  mov    %eax,-0x14(%ebp)
086bec2d +0x1ff:  cmpl   $0x0,-0x14(%ebp)
086bec31 +0x203:  jle    086becb8 <+0x28a>
086bec37 +0x209:  movl   $0x2e,0x8(%esp)
086bec3f +0x211:  movl   $0x1,0x4(%esp)
086bec47 +0x219:  lea    -0x4c(%ebp),%eax
086bec4a +0x21c:  mov    %eax,(%esp)
086bec4d +0x21f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bec52 +0x224:  movl   $0x0,0x4(%esp)
086bec5a +0x22c:  lea    -0x4c(%ebp),%eax
086bec5d +0x22f:  mov    %eax,(%esp)
086bec60 +0x232:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bec65 +0x237:  mov    -0x14(%ebp),%eax
086bec68 +0x23a:  mov    %eax,0x4(%esp)
086bec6c +0x23e:  lea    -0x4c(%ebp),%eax
086bec6f +0x241:  mov    %eax,(%esp)
086bec72 +0x244:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bec77 +0x249:  movl   $0x1,0x4(%esp)
086bec7f +0x251:  lea    -0x4c(%ebp),%eax
086bec82 +0x254:  mov    %eax,(%esp)
086bec85 +0x257:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bec8a +0x25c:  lea    -0x4c(%ebp),%eax
086bec8d +0x25f:  mov    %eax,0x4(%esp)
086bec91 +0x263:  mov    0x8(%ebp),%eax
086bec94 +0x266:  mov    %eax,(%esp)
086bec97 +0x269:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086bec9c +0x26e:  lea    -0x4c(%ebp),%eax
086bec9f +0x271:  mov    %eax,0x4(%esp)
086beca3 +0x275:  mov    0xc(%ebp),%eax
086beca6 +0x278:  mov    %eax,(%esp)
086beca9 +0x27b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086becae +0x280:  mov    $0x0,%ebx
086becb3 +0x285:  jmp    086bf30c <+0x8de>
086becb8 +0x28a:  mov    0xc(%ebp),%eax
086becbb +0x28d:  mov    %eax,(%esp)
086becbe +0x290:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086becc3 +0x295:  movl   $0x0,0x10(%esp)
086beccb +0x29d:  movl   $0x1,0xc(%esp)
086becd3 +0x2a5:  movl   $0xf,0x8(%esp)
086becdb +0x2ad:  mov    -0x18(%ebp),%edx
086becde +0x2b0:  mov    %edx,0x4(%esp)
086bece2 +0x2b4:  mov    %eax,(%esp)
086bece5 +0x2b7:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
086becea +0x2bc:  mov    %eax,-0x10(%ebp)
086beced +0x2bf:  mov    -0x18(%ebp),%eax
086becf0 +0x2c2:  mov    %eax,0x4(%esp)
086becf4 +0x2c6:  mov    0xc(%ebp),%eax
086becf7 +0x2c9:  mov    %eax,(%esp)
086becfa +0x2cc:  call   0864f8ea <_ZN5CUser26saveTaxMoneyForUpperMemberEi>  ; CUser::saveTaxMoneyForUpperMember(int)
086becff +0x2d1:  mov    -0x10(%ebp),%eax
086bed02 +0x2d4:  cmp    -0x18(%ebp),%eax
086bed05 +0x2d7:  jge    086bed35 <+0x307>
086bed07 +0x2d9:  cmpl   $0x0,-0x10(%ebp)
086bed0b +0x2dd:  jns    086bed14 <+0x2e6>
086bed0d +0x2df:  movl   $0x0,-0x10(%ebp)
086bed14 +0x2e6:  mov    -0x10(%ebp),%edx
086bed17 +0x2e9:  mov    -0x18(%ebp),%eax
086bed1a +0x2ec:  mov    %edx,0xc(%esp)
086bed1e +0x2f0:  mov    %eax,0x8(%esp)
086bed22 +0x2f4:  movl   $0x0,0x4(%esp)
086bed2a +0x2fc:  mov    0xc(%ebp),%eax
086bed2d +0x2ff:  mov    %eax,(%esp)
086bed30 +0x302:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
086bed35 +0x307:  mov    0x8(%ebp),%eax
086bed38 +0x30a:  lea    0x34(%eax),%edx
086bed3b +0x30d:  mov    -0x54(%ebp),%eax
086bed3e +0x310:  mov    %eax,0x4(%esp)
086bed42 +0x314:  mov    %edx,(%esp)
086bed45 +0x317:  call   086ba082 <_ZN8WarField10PickupItemESt17_Rb_tree_iteratorISt4pairIKi8map_itemEE>  ; WarField::PickupItem(std::_Rb_tree_iterator<std::pair<int const, map_item> >)
086bed4a +0x31c:  mov    -0x10(%ebp),%eax
086bed4d +0x31f:  mov    %eax,0x4(%esp)
086bed51 +0x323:  lea    -0x4c(%ebp),%eax
086bed54 +0x326:  mov    %eax,(%esp)
086bed57 +0x329:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bed5c +0x32e:  movl   $0x1,0x4(%esp)
086bed64 +0x336:  lea    -0x4c(%ebp),%eax
086bed67 +0x339:  mov    %eax,(%esp)
086bed6a +0x33c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bed6f +0x341:  lea    -0x4c(%ebp),%eax
086bed72 +0x344:  mov    %eax,0x4(%esp)
086bed76 +0x348:  mov    0x8(%ebp),%eax
086bed79 +0x34b:  mov    %eax,(%esp)
086bed7c +0x34e:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086bed81 +0x353:  mov    $0x1,%ebx
086bed86 +0x358:  jmp    086bf30c <+0x8de>
086bed8b +0x35d:  mov    -0xba(%ebp),%eax
086bed91 +0x363:  mov    %eax,%ebx
086bed93 +0x365:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086bed98 +0x36a:  mov    %ebx,0x4(%esp)
086bed9c +0x36e:  mov    %eax,(%esp)
086bed9f +0x371:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086beda4 +0x376:  mov    %eax,-0xc(%ebp)
086beda7 +0x379:  cmpl   $0x0,-0xc(%ebp)
086bedab +0x37d:  jne    086beded <+0x3bf>
086bedad +0x37f:  mov    -0xba(%ebp),%eax
086bedb3 +0x385:  mov    %eax,0x14(%esp)
086bedb7 +0x389:  movl   $"G_CDataManager()->find_item(%d) fail",0x10(%esp)
086bedbf +0x391:  movl   $0x957,0xc(%esp)
086bedc7 +0x399:  movl   $&_ZZN7WarRoom13HandleGetItemEP5CUseriE19__PRETTY_FUNCTION__,0x8(%esp)
086bedcf +0x3a1:  movl   $"WarRoom.cpp",0x4(%esp)
086bedd7 +0x3a9:  movl   $0x1,(%esp)
086bedde +0x3b0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086bede3 +0x3b5:  mov    $0x0,%ebx
086bede8 +0x3ba:  jmp    086bf30c <+0x8de>
086beded +0x3bf:  mov    0xc(%ebp),%eax
086bedf0 +0x3c2:  mov    %eax,-0x2c(%ebp)
086bedf3 +0x3c5:  cmpl   $0x0,-0x2c(%ebp)
086bedf7 +0x3c9:  jne    086bee69 <+0x43b>
086bedf9 +0x3cb:  movl   $0x2e,0x8(%esp)
086bee01 +0x3d3:  movl   $0x1,0x4(%esp)
086bee09 +0x3db:  lea    -0x4c(%ebp),%eax
086bee0c +0x3de:  mov    %eax,(%esp)
086bee0f +0x3e1:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bee14 +0x3e6:  movl   $0x0,0x4(%esp)
086bee1c +0x3ee:  lea    -0x4c(%ebp),%eax
086bee1f +0x3f1:  mov    %eax,(%esp)
086bee22 +0x3f4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bee27 +0x3f9:  movl   $0x16,0x4(%esp)
086bee2f +0x401:  lea    -0x4c(%ebp),%eax
086bee32 +0x404:  mov    %eax,(%esp)
086bee35 +0x407:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bee3a +0x40c:  movl   $0x1,0x4(%esp)
086bee42 +0x414:  lea    -0x4c(%ebp),%eax
086bee45 +0x417:  mov    %eax,(%esp)
086bee48 +0x41a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bee4d +0x41f:  lea    -0x4c(%ebp),%eax
086bee50 +0x422:  mov    %eax,0x4(%esp)
086bee54 +0x426:  mov    0x8(%ebp),%eax
086bee57 +0x429:  mov    %eax,(%esp)
086bee5a +0x42c:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086bee5f +0x431:  mov    $0x0,%ebx
086bee64 +0x436:  jmp    086bf30c <+0x8de>
086bee69 +0x43b:  mov    -0xc(%ebp),%eax
086bee6c +0x43e:  mov    (%eax),%eax
086bee6e +0x440:  add    $0x4c,%eax
086bee71 +0x443:  mov    (%eax),%edx
086bee73 +0x445:  mov    -0xc(%ebp),%eax
086bee76 +0x448:  mov    %eax,(%esp)
086bee79 +0x44b:  call   *%edx
086bee7b +0x44d:  test   %al,%al
086bee7d +0x44f:  je     086bee98 <+0x46a>
086bee7f +0x451:  mov    -0x2c(%ebp),%eax
086bee82 +0x454:  mov    %eax,(%esp)
086bee85 +0x457:  call   085bfe0a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1368>  ; global constructors keyed to CParty::cMember::cMember()+0x1368
086bee8a +0x45c:  xor    $0x1,%eax
086bee8d +0x45f:  test   %al,%al
086bee8f +0x461:  je     086bee98 <+0x46a>
086bee91 +0x463:  mov    $0x1,%eax
086bee96 +0x468:  jmp    086bee9d <+0x46f>
086bee98 +0x46a:  mov    $0x0,%eax
086bee9d +0x46f:  test   %al,%al
086bee9f +0x471:  je     086bef8f <+0x561>
086beea5 +0x477:  movl   $0x1,0x4(%esp)
086beead +0x47f:  mov    -0x2c(%ebp),%eax
086beeb0 +0x482:  mov    %eax,(%esp)
086beeb3 +0x485:  call   084ed032 <_GLOBAL__I__Z7getUserj+0x3fe4>  ; global constructors keyed to getUser(unsigned int)+0x3fe4
086beeb8 +0x48a:  mov    -0x2c(%ebp),%eax
086beebb +0x48d:  mov    %eax,(%esp)
086beebe +0x490:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086beec3 +0x495:  mov    %eax,%ebx
086beec5 +0x497:  mov    -0x2c(%ebp),%eax
086beec8 +0x49a:  mov    %eax,(%esp)
086beecb +0x49d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086beed0 +0x4a2:  movl   $0x1,0x8(%esp)
086beed8 +0x4aa:  mov    %ebx,0x4(%esp)
086beedc +0x4ae:  mov    %eax,(%esp)
086beedf +0x4b1:  call   08442d70 <_ZN31DB_InsertRandomOptionItemInform11makeRequestEijh>  ; DB_InsertRandomOptionItemInform::makeRequest(int, unsigned int, unsigned char)
086beee4 +0x4b6:  lea    -0x60(%ebp),%eax
086beee7 +0x4b9:  mov    %eax,(%esp)
086beeea +0x4bc:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086beeef +0x4c1:  lea    -0x60(%ebp),%eax
086beef2 +0x4c4:  mov    %eax,(%esp)
086beef5 +0x4c7:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086beefa +0x4cc:  movl   $0x171,0x8(%esp)
086bef02 +0x4d4:  movl   $0x0,0x4(%esp)
086bef0a +0x4dc:  lea    -0x60(%ebp),%eax
086bef0d +0x4df:  mov    %eax,(%esp)
086bef10 +0x4e2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bef15 +0x4e7:  mov    -0x2c(%ebp),%eax
086bef18 +0x4ea:  mov    %eax,(%esp)
086bef1b +0x4ed:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086bef20 +0x4f2:  movzwl %ax,%eax
086bef23 +0x4f5:  mov    %eax,0x4(%esp)
086bef27 +0x4f9:  lea    -0x60(%ebp),%eax
086bef2a +0x4fc:  mov    %eax,(%esp)
086bef2d +0x4ff:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bef32 +0x504:  movl   $0x1,0x4(%esp)
086bef3a +0x50c:  lea    -0x60(%ebp),%eax
086bef3d +0x50f:  mov    %eax,(%esp)
086bef40 +0x512:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bef45 +0x517:  movl   $0x1,0x4(%esp)
086bef4d +0x51f:  lea    -0x60(%ebp),%eax
086bef50 +0x522:  mov    %eax,(%esp)
086bef53 +0x525:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bef58 +0x52a:  lea    -0x60(%ebp),%eax
086bef5b +0x52d:  mov    %eax,0x4(%esp)
086bef5f +0x531:  mov    -0x2c(%ebp),%eax
086bef62 +0x534:  mov    %eax,(%esp)
086bef65 +0x537:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086bef6a +0x53c:  jmp    086bef84 <+0x556>
086bef6c +0x53e:  mov    %edx,%ebx
086bef6e +0x540:  mov    %eax,%esi
086bef70 +0x542:  lea    -0x60(%ebp),%eax
086bef73 +0x545:  mov    %eax,(%esp)
086bef76 +0x548:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bef7b +0x54d:  mov    %esi,%eax
086bef7d +0x54f:  mov    %ebx,%edx
086bef7f +0x551:  jmp    086bf2f1 <+0x8c3>
086bef84 +0x556:  lea    -0x60(%ebp),%eax
086bef87 +0x559:  mov    %eax,(%esp)
086bef8a +0x55c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bef8f +0x561:  movl   $0x0,-0x20(%ebp)
086bef96 +0x568:  lea    -0x50(%ebp),%eax
086bef99 +0x56b:  mov    %eax,(%esp)
086bef9c +0x56e:  call   08152524 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e59>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e59
086befa1 +0x573:  mov    0xc(%ebp),%eax
086befa4 +0x576:  mov    %eax,(%esp)
086befa7 +0x579:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086befac +0x57e:  movzwl %ax,%eax
086befaf +0x581:  mov    0x8(%ebp),%edx
086befb2 +0x584:  lea    0x34(%edx),%ecx
086befb5 +0x587:  lea    -0x50(%ebp),%edx
086befb8 +0x58a:  mov    %edx,0xc(%esp)
086befbc +0x58e:  mov    %eax,0x8(%esp)
086befc0 +0x592:  mov    0x10(%ebp),%eax
086befc3 +0x595:  mov    %eax,0x4(%esp)
086befc7 +0x599:  mov    %ecx,(%esp)
086befca +0x59c:  call   086ba0a0 <_ZN8WarField15CheckPickupItemEiiRSt17_Rb_tree_iteratorISt4pairIKi8map_itemEE>  ; WarField::CheckPickupItem(int, int, std::_Rb_tree_iterator<std::pair<int const, map_item> >&)
086befcf +0x5a1:  mov    %eax,-0x20(%ebp)
086befd2 +0x5a4:  cmpl   $0x0,-0x20(%ebp)
086befd6 +0x5a8:  jle    086bf092 <+0x664>
086befdc +0x5ae:  mov    -0xba(%ebp),%ebx
086befe2 +0x5b4:  movl   $0x5,0xc(%esp)
086befea +0x5bc:  movl   $0x982,0x8(%esp)
086beff2 +0x5c4:  movl   $&_ZZN7WarRoom13HandleGetItemEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
086beffa +0x5cc:  lea    -0x40(%ebp),%eax
086beffd +0x5cf:  mov    %eax,(%esp)
086bf000 +0x5d2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086bf005 +0x5d7:  mov    %ebx,0xc(%esp)
086bf009 +0x5db:  mov    0x10(%ebp),%eax
086bf00c +0x5de:  mov    %eax,0x8(%esp)
086bf010 +0x5e2:  movl   $"fieldData_.PickupItem( %d/%d ) ",0x4(%esp)
086bf018 +0x5ea:  lea    -0x40(%ebp),%eax
086bf01b +0x5ed:  mov    %eax,(%esp)
086bf01e +0x5f0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086bf023 +0x5f5:  movl   $0x2e,0x8(%esp)
086bf02b +0x5fd:  movl   $0x1,0x4(%esp)
086bf033 +0x605:  lea    -0x4c(%ebp),%eax
086bf036 +0x608:  mov    %eax,(%esp)
086bf039 +0x60b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bf03e +0x610:  movl   $0x0,0x4(%esp)
086bf046 +0x618:  lea    -0x4c(%ebp),%eax
086bf049 +0x61b:  mov    %eax,(%esp)
086bf04c +0x61e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bf051 +0x623:  mov    -0x20(%ebp),%eax
086bf054 +0x626:  mov    %eax,0x4(%esp)
086bf058 +0x62a:  lea    -0x4c(%ebp),%eax
086bf05b +0x62d:  mov    %eax,(%esp)
086bf05e +0x630:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bf063 +0x635:  movl   $0x1,0x4(%esp)
086bf06b +0x63d:  lea    -0x4c(%ebp),%eax
086bf06e +0x640:  mov    %eax,(%esp)
086bf071 +0x643:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bf076 +0x648:  lea    -0x4c(%ebp),%eax
086bf079 +0x64b:  mov    %eax,0x4(%esp)
086bf07d +0x64f:  mov    0xc(%ebp),%eax
086bf080 +0x652:  mov    %eax,(%esp)
086bf083 +0x655:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086bf088 +0x65a:  mov    $0x0,%ebx
086bf08d +0x65f:  jmp    086bf30c <+0x8de>
086bf092 +0x664:  movl   $0x0,-0x1c(%ebp)
086bf099 +0x66b:  lea    -0xcc(%ebp),%eax
086bf09f +0x671:  add    $0x10,%eax
086bf0a2 +0x674:  mov    %eax,(%esp)
086bf0a5 +0x677:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
086bf0aa +0x67c:  test   %al,%al
086bf0ac +0x67e:  je     086bf112 <+0x6e4>
086bf0ae +0x680:  mov    -0x2c(%ebp),%eax
086bf0b1 +0x683:  mov    %eax,(%esp)
086bf0b4 +0x686:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086bf0b9 +0x68b:  lea    -0x78(%ebp),%edx
086bf0bc +0x68e:  mov    %edx,0x8(%esp)
086bf0c0 +0x692:  mov    %eax,0x4(%esp)
086bf0c4 +0x696:  movl   $0x5,(%esp)
086bf0cb +0x69d:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
086bf0d0 +0x6a2:  movzwl -0xb1(%ebp),%eax
086bf0d7 +0x6a9:  movsbl %al,%edx
086bf0da +0x6ac:  mov    -0xba(%ebp),%eax
086bf0e0 +0x6b2:  movl   $0x11,0x14(%esp)
086bf0e8 +0x6ba:  lea    -0x78(%ebp),%ecx
086bf0eb +0x6bd:  mov    %ecx,0x10(%esp)
086bf0ef +0x6c1:  mov    %edx,0xc(%esp)
086bf0f3 +0x6c5:  movl   $0x0,0x8(%esp)
086bf0fb +0x6cd:  mov    %eax,0x4(%esp)
086bf0ff +0x6d1:  mov    -0x2c(%ebp),%eax
086bf102 +0x6d4:  mov    %eax,(%esp)
086bf105 +0x6d7:  call   08681224 <_ZN5CUser13addAvatarItemEmccPKc20eAvatarItemAddReason>  ; CUser::addAvatarItem(unsigned long, char, char, char const*, eAvatarItemAddReason)
086bf10a +0x6dc:  mov    %eax,-0x1c(%ebp)
086bf10d +0x6df:  jmp    086bf1de <+0x7b0>
086bf112 +0x6e4:  mov    -0x2c(%ebp),%eax
086bf115 +0x6e7:  mov    %eax,(%esp)
086bf118 +0x6ea:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086bf11d +0x6ef:  movl   $0x1,0x4c(%esp)
086bf125 +0x6f7:  movl   $0x1,0x48(%esp)
086bf12d +0x6ff:  movl   $0x16,0x44(%esp)
086bf135 +0x707:  mov    -0xbc(%ebp),%edx
086bf13b +0x70d:  mov    %edx,0x4(%esp)
086bf13f +0x711:  mov    -0xb8(%ebp),%edx
086bf145 +0x717:  mov    %edx,0x8(%esp)
086bf149 +0x71b:  mov    -0xb4(%ebp),%edx
086bf14f +0x721:  mov    %edx,0xc(%esp)
086bf153 +0x725:  mov    -0xb0(%ebp),%edx
086bf159 +0x72b:  mov    %edx,0x10(%esp)
086bf15d +0x72f:  mov    -0xac(%ebp),%edx
086bf163 +0x735:  mov    %edx,0x14(%esp)
086bf167 +0x739:  mov    -0xa8(%ebp),%edx
086bf16d +0x73f:  mov    %edx,0x18(%esp)
086bf171 +0x743:  mov    -0xa4(%ebp),%edx
086bf177 +0x749:  mov    %edx,0x1c(%esp)
086bf17b +0x74d:  mov    -0xa0(%ebp),%edx
086bf181 +0x753:  mov    %edx,0x20(%esp)
086bf185 +0x757:  mov    -0x9c(%ebp),%edx
086bf18b +0x75d:  mov    %edx,0x24(%esp)
086bf18f +0x761:  mov    -0x98(%ebp),%edx
086bf195 +0x767:  mov    %edx,0x28(%esp)
086bf199 +0x76b:  mov    -0x94(%ebp),%edx
086bf19f +0x771:  mov    %edx,0x2c(%esp)
086bf1a3 +0x775:  mov    -0x90(%ebp),%edx
086bf1a9 +0x77b:  mov    %edx,0x30(%esp)
086bf1ad +0x77f:  mov    -0x8c(%ebp),%edx
086bf1b3 +0x785:  mov    %edx,0x34(%esp)
086bf1b7 +0x789:  mov    -0x88(%ebp),%edx
086bf1bd +0x78f:  mov    %edx,0x38(%esp)
086bf1c1 +0x793:  mov    -0x84(%ebp),%edx
086bf1c7 +0x799:  mov    %edx,0x3c(%esp)
086bf1cb +0x79d:  movzbl -0x80(%ebp),%edx
086bf1cf +0x7a1:  mov    %dl,0x40(%esp)
086bf1d3 +0x7a5:  mov    %eax,(%esp)
086bf1d6 +0x7a8:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
086bf1db +0x7ad:  mov    %eax,-0x1c(%ebp)
086bf1de +0x7b0:  cmpl   $0xffffffff,-0x1c(%ebp)
086bf1e2 +0x7b4:  jne    086bf254 <+0x826>
086bf1e4 +0x7b6:  movl   $0x2e,0x8(%esp)
086bf1ec +0x7be:  movl   $0x1,0x4(%esp)
086bf1f4 +0x7c6:  lea    -0x4c(%ebp),%eax
086bf1f7 +0x7c9:  mov    %eax,(%esp)
086bf1fa +0x7cc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bf1ff +0x7d1:  movl   $0x0,0x4(%esp)
086bf207 +0x7d9:  lea    -0x4c(%ebp),%eax
086bf20a +0x7dc:  mov    %eax,(%esp)
086bf20d +0x7df:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bf212 +0x7e4:  movl   $0x4,0x4(%esp)
086bf21a +0x7ec:  lea    -0x4c(%ebp),%eax
086bf21d +0x7ef:  mov    %eax,(%esp)
086bf220 +0x7f2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bf225 +0x7f7:  movl   $0x1,0x4(%esp)
086bf22d +0x7ff:  lea    -0x4c(%ebp),%eax
086bf230 +0x802:  mov    %eax,(%esp)
086bf233 +0x805:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bf238 +0x80a:  lea    -0x4c(%ebp),%eax
086bf23b +0x80d:  mov    %eax,0x4(%esp)
086bf23f +0x811:  mov    0xc(%ebp),%eax
086bf242 +0x814:  mov    %eax,(%esp)
086bf245 +0x817:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086bf24a +0x81c:  mov    $0x0,%ebx
086bf24f +0x821:  jmp    086bf30c <+0x8de>
086bf254 +0x826:  mov    0x8(%ebp),%eax
086bf257 +0x829:  lea    0x34(%eax),%edx
086bf25a +0x82c:  mov    -0x50(%ebp),%eax
086bf25d +0x82f:  mov    %eax,0x4(%esp)
086bf261 +0x833:  mov    %edx,(%esp)
086bf264 +0x836:  call   086ba082 <_ZN8WarField10PickupItemESt17_Rb_tree_iteratorISt4pairIKi8map_itemEE>  ; WarField::PickupItem(std::_Rb_tree_iterator<std::pair<int const, map_item> >)
086bf269 +0x83b:  movl   $0x5d,0x8(%esp)
086bf271 +0x843:  movl   $0x0,0x4(%esp)
086bf279 +0x84b:  lea    -0x4c(%ebp),%eax
086bf27c +0x84e:  mov    %eax,(%esp)
086bf27f +0x851:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bf284 +0x856:  mov    0x10(%ebp),%eax
086bf287 +0x859:  mov    %eax,0x4(%esp)
086bf28b +0x85d:  lea    -0x4c(%ebp),%eax
086bf28e +0x860:  mov    %eax,(%esp)
086bf291 +0x863:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bf296 +0x868:  mov    0xc(%ebp),%eax
086bf299 +0x86b:  mov    %eax,(%esp)
086bf29c +0x86e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086bf2a1 +0x873:  movzwl %ax,%eax
086bf2a4 +0x876:  mov    %eax,0x4(%esp)
086bf2a8 +0x87a:  lea    -0x4c(%ebp),%eax
086bf2ab +0x87d:  mov    %eax,(%esp)
086bf2ae +0x880:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bf2b3 +0x885:  mov    -0x1c(%ebp),%eax
086bf2b6 +0x888:  mov    %eax,0x4(%esp)
086bf2ba +0x88c:  lea    -0x4c(%ebp),%eax
086bf2bd +0x88f:  mov    %eax,(%esp)
086bf2c0 +0x892:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bf2c5 +0x897:  movl   $0x1,0x4(%esp)
086bf2cd +0x89f:  lea    -0x4c(%ebp),%eax
086bf2d0 +0x8a2:  mov    %eax,(%esp)
086bf2d3 +0x8a5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bf2d8 +0x8aa:  lea    -0x4c(%ebp),%eax
086bf2db +0x8ad:  mov    %eax,0x4(%esp)
086bf2df +0x8b1:  mov    0x8(%ebp),%eax
086bf2e2 +0x8b4:  mov    %eax,(%esp)
086bf2e5 +0x8b7:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086bf2ea +0x8bc:  mov    $0x1,%ebx
086bf2ef +0x8c1:  jmp    086bf30c <+0x8de>
086bf2f1 +0x8c3:  mov    %edx,%ebx
086bf2f3 +0x8c5:  mov    %eax,%esi
086bf2f5 +0x8c7:  lea    -0x4c(%ebp),%eax
086bf2f8 +0x8ca:  mov    %eax,(%esp)
086bf2fb +0x8cd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bf300 +0x8d2:  mov    %esi,%eax
086bf302 +0x8d4:  mov    %ebx,%edx
086bf304 +0x8d6:  mov    %eax,(%esp)
086bf307 +0x8d9:  call   08ae3750 <_Unwind_Resume>
086bf30c +0x8de:  lea    -0x4c(%ebp),%eax
086bf30f +0x8e1:  mov    %eax,(%esp)
086bf312 +0x8e4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bf317 +0x8e9:  mov    %ebx,%eax
086bf319 +0x8eb:  add    $0x120,%esp
086bf31f +0x8f1:  pop    %ebx
086bf320 +0x8f2:  pop    %esi
086bf321 +0x8f3:  pop    %ebp
086bf322 +0x8f4:  ret
086bf323 +0x8f5:  nop
```

## 反编译 C

```c
// WarRoom::HandleGetItem @ 0x86bea2e

/* WarRoom::HandleGetItem(CUser*, int) */

undefined4 __thiscall WarRoom::HandleGetItem(WarRoom *this,CUser *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  CInventory *pCVar4;
  CDataManager *this_00;
  int iVar5;
  undefined4 uVar6;
  map_item local_d0 [16];
  undefined2 uStack_c0;
  undefined2 local_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_7c [24];
  PacketGuard local_64 [12];
  undefined4 local_58;
  undefined4 local_54;
  PacketGuard local_50 [12];
  cMyTrace local_44 [19];
  undefined1 local_31;
  CUser *local_30;
  char local_29;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  local_31 = 1;
  local_30 = (CUser *)0x0;
  PacketGuard::PacketGuard(local_50);
  map_item::map_item(local_d0);
                    /* try { // try from 086bea77 to 086beeee has its CatchHandler @ 086bf2f1 */
  local_29 = WarField::GetFieldItem((WarField *)(this + 0x34),param_2,local_d0);
  if (local_29 != '\x01') {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,1,0x2e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0x15);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    CUser::Send(param_1,local_50);
    uVar6 = 0;
    goto LAB_086bf30c;
  }
  local_28 = GetWaiterCount(this);
  if (local_28 < 1) {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,1,0x2e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0x15);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    CUser::Send(param_1,local_50);
    uVar6 = 0;
    goto LAB_086bf30c;
  }
  if (CONCAT22(uStack_bc,local_be) == 0) {
    local_1c = Inven_Item::get_add_info((Inven_Item *)&uStack_c0);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x5d);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,param_2);
    uVar3 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,uVar3 & 0xffff);
    local_18 = 0;
    std::_Rb_tree_iterator<std::pair<int_const,map_item>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_58);
    uVar3 = CUser::get_unique_id(param_1);
    local_18 = WarField::CheckPickupItem
                         ((WarField *)(this + 0x34),param_2,uVar3 & 0xffff,
                          (_Rb_tree_iterator *)&local_58);
    if (local_18 < 1) {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_14 = CInventory::gain_money(pCVar4,local_1c,0xf,1,0);
      CUser::saveTaxMoneyForUpperMember(param_1,local_1c);
      if (local_14 < local_1c) {
        if (local_14 < 0) {
          local_14 = 0;
        }
        CUser::SendMoneyFullReason(param_1,0,local_1c,local_14);
      }
      WarField::PickupItem((WarField *)(this + 0x34),local_58);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_14);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      SendToRoom(this,local_50);
      uVar6 = 1;
    }
    else {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,1,0x2e);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_18);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      SendToRoom(this,local_50);
      CUser::Send(param_1,local_50);
      uVar6 = 0;
    }
    goto LAB_086bf30c;
  }
  iVar5 = CONCAT22(uStack_bc,local_be);
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = (int *)CDataManager::find_item(this_00,iVar5);
  if (local_10 == (int *)0x0) {
    LogManager::logFormat
              (1,"WarRoom.cpp","bool WarRoom::HandleGetItem(CUser*, int)",0x957,
               "G_CDataManager()->find_item(%d) fail",CONCAT22(uStack_bc,local_be));
    uVar6 = 0;
    goto LAB_086bf30c;
  }
  local_30 = param_1;
  if (param_1 == (CUser *)0x0) {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,1,0x2e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0x16);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    SendToRoom(this,local_50);
    uVar6 = 0;
    goto LAB_086bf30c;
  }
  cVar2 = (**(code **)(*local_10 + 0x4c))(local_10);
  if (cVar2 == '\0') {
LAB_086bee98:
    bVar1 = false;
  }
  else {
    cVar2 = CUser::getCheckPickUpRandomOptionItem(local_30);
    if (cVar2 == '\x01') goto LAB_086bee98;
    bVar1 = true;
  }
  if (bVar1) {
    CUser::setCheckPickUpRandomOptionItem(local_30,true);
    uVar3 = CUser::get_acc_id(local_30);
    iVar5 = CUser::GetUID(local_30);
    DB_InsertRandomOptionItemInform::makeRequest(iVar5,uVar3,'\x01');
    PacketGuard::PacketGuard(local_64);
                    /* try { // try from 086beef5 to 086bef69 has its CatchHandler @ 086bef6c */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_64);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,0,0x171);
    uVar3 = CUser::get_unique_id(local_30);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,uVar3 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
    CUser::Send(local_30,local_64);
                    /* try { // try from 086bef8a to 086bf2e9 has its CatchHandler @ 086bf2f1 */
    PacketGuard::~PacketGuard(local_64);
  }
  local_24 = 0;
  std::_Rb_tree_iterator<std::pair<int_const,map_item>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_54);
  uVar3 = CUser::get_unique_id(param_1);
  local_24 = WarField::CheckPickupItem
                       ((WarField *)(this + 0x34),param_2,uVar3 & 0xffff,
                        (_Rb_tree_iterator *)&local_54);
  if (local_24 < 1) {
    local_20 = 0;
    cVar2 = Inven_Item::isAvatarItemType((Inven_Item *)&uStack_c0);
    if (cVar2 == '\0') {
      uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)local_30);
      local_20 = CInventory::insertItemIntoInventory
                           (uVar6,CONCAT22(local_be,uStack_c0),CONCAT22(uStack_ba,uStack_bc),
                            local_b8,uStack_b4,local_b0,local_ac,local_a8,local_a4,local_a0,local_9c
                            ,local_98,local_94,local_90,local_8c,local_88,local_84,0x16,1,1);
    }
    else {
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_30);
      WongWork::CGenUniqueNo::genIPGNo(5,uVar6,local_7c);
      local_20 = CUser::addAvatarItem
                           (local_30,CONCAT22(uStack_bc,local_be),0,(int)local_b8._3_1_,local_7c,
                            0x11);
    }
    if (local_20 == -1) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,1,0x2e);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,4);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      CUser::Send(param_1,local_50);
      uVar6 = 0;
    }
    else {
      WarField::PickupItem((WarField *)(this + 0x34),local_54);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x5d);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,param_2);
      uVar3 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,uVar3 & 0xffff);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,local_20);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      SendToRoom(this,local_50);
      uVar6 = 1;
    }
  }
  else {
    cMyTrace::cMyTrace(local_44,"bool WarRoom::HandleGetItem(CUser*, int)",0x982,5);
    cMyTrace::operator()
              (local_44,"fieldData_.PickupItem( %d/%d ) ",param_2,CONCAT22(uStack_bc,local_be));
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,1,0x2e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_24);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    CUser::Send(param_1,local_50);
    uVar6 = 0;
  }
LAB_086bf30c:
  PacketGuard::~PacketGuard(local_50);
  return uVar6;
}
```
