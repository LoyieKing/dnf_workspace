# handlePremiumEffect

`_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE`

`WongWork::CHandlePremium::handlePremiumEffect(CUser*, ENUM_PREMIUM_TYPE)`

| 类 | 地址 |
|---|---|
| `WongWork::CHandlePremium` | `0x086afc32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086afc32  _ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE
#           WongWork::CHandlePremium::handlePremiumEffect(CUser*, ENUM_PREMIUM_TYPE)
# range [0x086afc32, 0x086b02fd]
086afc32 +0x000:  push   %ebp
086afc33 +0x001:  mov    %esp,%ebp
086afc35 +0x003:  push   %edi
086afc36 +0x004:  push   %esi
086afc37 +0x005:  push   %ebx
086afc38 +0x006:  sub    $0xec,%esp
086afc3e +0x00c:  mov    0x8(%ebp),%eax
086afc41 +0x00f:  mov    %eax,(%esp)
086afc44 +0x012:  call   0863be94 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3a5>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3a5
086afc49 +0x017:  mov    %eax,-0x3c(%ebp)
086afc4c +0x01a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086afc53 +0x021:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086afc58 +0x026:  mov    %eax,-0x38(%ebp)
086afc5b +0x029:  mov    0x8(%ebp),%eax
086afc5e +0x02c:  mov    %eax,(%esp)
086afc61 +0x02f:  call   0863bea2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3b3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3b3
086afc66 +0x034:  test   %al,%al
086afc68 +0x036:  je     086b02f3 <+0x6c1>
086afc6e +0x03c:  mov    0xc(%ebp),%edx
086afc71 +0x03f:  lea    -0x48(%ebp),%eax
086afc74 +0x042:  mov    %edx,0x8(%esp)
086afc78 +0x046:  mov    -0x3c(%ebp),%edx
086afc7b +0x049:  mov    %edx,0x4(%esp)
086afc7f +0x04d:  mov    %eax,(%esp)
086afc82 +0x050:  call   086ade9c <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi>  ; WongWork::CUserPremium::GetPremiumInfoList(int) const
086afc87 +0x055:  sub    $0x4,%esp
086afc8a +0x058:  movl   $0x0,-0x34(%ebp)
086afc91 +0x05f:  jmp    086b0219 <+0x5e7>
086afc96 +0x064:  mov    -0x34(%ebp),%eax
086afc99 +0x067:  mov    %eax,0x4(%esp)
086afc9d +0x06b:  lea    -0x48(%ebp),%eax
086afca0 +0x06e:  mov    %eax,(%esp)
086afca3 +0x071:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
086afca8 +0x076:  mov    0x4(%eax),%eax
086afcab +0x079:  cmp    -0x38(%ebp),%eax
086afcae +0x07c:  setg   %al
086afcb1 +0x07f:  test   %al,%al
086afcb3 +0x081:  je     086afd3f <+0x10d>
086afcb9 +0x087:  mov    0x8(%ebp),%eax
086afcbc +0x08a:  mov    %eax,(%esp)
086afcbf +0x08d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086afcc4 +0x092:  mov    %eax,%esi
086afcc6 +0x094:  mov    -0x34(%ebp),%eax
086afcc9 +0x097:  mov    %eax,0x4(%esp)
086afccd +0x09b:  lea    -0x48(%ebp),%eax
086afcd0 +0x09e:  mov    %eax,(%esp)
086afcd3 +0x0a1:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
086afcd8 +0x0a6:  mov    (%eax),%eax
086afcda +0x0a8:  mov    %eax,-0xa4(%ebp)
086afce0 +0x0ae:  mov    -0x34(%ebp),%eax
086afce3 +0x0b1:  mov    %eax,0x4(%esp)
086afce7 +0x0b5:  lea    -0x48(%ebp),%eax
086afcea +0x0b8:  mov    %eax,(%esp)
086afced +0x0bb:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
086afcf2 +0x0c0:  mov    0x4(%eax),%eax
086afcf5 +0x0c3:  mov    %eax,%edi
086afcf7 +0x0c5:  sub    -0x38(%ebp),%edi
086afcfa +0x0c8:  mov    0x8(%ebp),%eax
086afcfd +0x0cb:  mov    %eax,(%esp)
086afd00 +0x0ce:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086afd05 +0x0d3:  mov    %eax,%ebx
086afd07 +0x0d5:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086afd0c +0x0da:  mov    %esi,0x18(%esp)
086afd10 +0x0de:  mov    -0xa4(%ebp),%edx
086afd16 +0x0e4:  mov    %edx,0x14(%esp)
086afd1a +0x0e8:  mov    %edi,0x10(%esp)
086afd1e +0x0ec:  movl   $0x6,0xc(%esp)
086afd26 +0x0f4:  mov    %ebx,0x8(%esp)
086afd2a +0x0f8:  movl   $0x0,0x4(%esp)
086afd32 +0x100:  mov    %eax,(%esp)
086afd35 +0x103:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086afd3a +0x108:  jmp    086b0215 <+0x5e3>
086afd3f +0x10d:  mov    0x8(%ebp),%eax
086afd42 +0x110:  mov    %eax,(%esp)
086afd45 +0x113:  call   082a66aa <_GLOBAL__I__ZN4CLog5this_E+0x2ad1>  ; global constructors keyed to CLog::this_+0x2ad1
086afd4a +0x118:  mov    %eax,%ebx
086afd4c +0x11a:  mov    -0x34(%ebp),%eax
086afd4f +0x11d:  mov    %eax,0x4(%esp)
086afd53 +0x121:  lea    -0x48(%ebp),%eax
086afd56 +0x124:  mov    %eax,(%esp)
086afd59 +0x127:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
086afd5e +0x12c:  mov    0x4(%eax),%eax
086afd61 +0x12f:  cmp    %eax,%ebx
086afd63 +0x131:  setle  %al
086afd66 +0x134:  test   %al,%al
086afd68 +0x136:  je     086b0061 <+0x42f>
086afd6e +0x13c:  mov    -0x34(%ebp),%eax
086afd71 +0x13f:  mov    %eax,0x4(%esp)
086afd75 +0x143:  lea    -0x48(%ebp),%eax
086afd78 +0x146:  mov    %eax,(%esp)
086afd7b +0x149:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
086afd80 +0x14e:  mov    (%eax),%edx
086afd82 +0x150:  lea    -0x54(%ebp),%eax
086afd85 +0x153:  mov    %edx,0x8(%esp)
086afd89 +0x157:  mov    -0x3c(%ebp),%edx
086afd8c +0x15a:  mov    %edx,0x4(%esp)
086afd90 +0x15e:  mov    %eax,(%esp)
086afd93 +0x161:  call   086adf7c <_ZN8WongWork12CUserPremium16GetAdvantageItemEi>  ; WongWork::CUserPremium::GetAdvantageItem(int)
086afd98 +0x166:  sub    $0x4,%esp
086afd9b +0x169:  movl   $0x0,-0x30(%ebp)
086afda2 +0x170:  jmp    086aff6a <+0x338>
086afda7 +0x175:  mov    -0x30(%ebp),%eax
086afdaa +0x178:  mov    %eax,0x4(%esp)
086afdae +0x17c:  lea    -0x54(%ebp),%eax
086afdb1 +0x17f:  mov    %eax,(%esp)
086afdb4 +0x182:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
086afdb9 +0x187:  mov    (%eax),%eax
086afdbb +0x189:  mov    %eax,-0x2c(%ebp)
086afdbe +0x18c:  mov    -0x30(%ebp),%eax
086afdc1 +0x18f:  mov    %eax,0x4(%esp)
086afdc5 +0x193:  lea    -0x54(%ebp),%eax
086afdc8 +0x196:  mov    %eax,(%esp)
086afdcb +0x199:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
086afdd0 +0x19e:  mov    0x4(%eax),%eax
086afdd3 +0x1a1:  mov    %eax,-0x28(%ebp)
086afdd6 +0x1a4:  lea    -0x98(%ebp),%eax
086afddc +0x1aa:  mov    %eax,(%esp)
086afddf +0x1ad:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086afde4 +0x1b2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086afde9 +0x1b7:  mov    -0x2c(%ebp),%edx
086afdec +0x1ba:  mov    %edx,0x4(%esp)
086afdf0 +0x1be:  mov    %eax,(%esp)
086afdf3 +0x1c1:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086afdf8 +0x1c6:  mov    %eax,-0x24(%ebp)
086afdfb +0x1c9:  mov    -0x24(%ebp),%eax
086afdfe +0x1cc:  mov    (%eax),%eax
086afe00 +0x1ce:  add    $0x8,%eax
086afe03 +0x1d1:  mov    (%eax),%edx
086afe05 +0x1d3:  lea    -0x98(%ebp),%eax
086afe0b +0x1d9:  mov    %eax,0x4(%esp)
086afe0f +0x1dd:  mov    -0x24(%ebp),%eax
086afe12 +0x1e0:  mov    %eax,(%esp)
086afe15 +0x1e3:  call   *%edx
086afe17 +0x1e5:  mov    -0x2c(%ebp),%eax
086afe1a +0x1e8:  mov    %eax,-0x96(%ebp)
086afe20 +0x1ee:  movzbl -0x97(%ebp),%eax
086afe27 +0x1f5:  cmp    $0x1,%al
086afe29 +0x1f7:  je     086afe36 <+0x204>
086afe2b +0x1f9:  mov    -0x28(%ebp),%eax
086afe2e +0x1fc:  mov    %eax,-0x91(%ebp)
086afe34 +0x202:  jmp    086afe47 <+0x215>
086afe36 +0x204:  mov    0x8(%ebp),%eax
086afe39 +0x207:  mov    %eax,(%esp)
086afe3c +0x20a:  call   0822fdf4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x549e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x549e
086afe41 +0x20f:  mov    %eax,-0x91(%ebp)
086afe47 +0x215:  mov    0x8(%ebp),%eax
086afe4a +0x218:  mov    %eax,(%esp)
086afe4d +0x21b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086afe52 +0x220:  movl   $0x1,0x4c(%esp)
086afe5a +0x228:  movl   $0x1,0x48(%esp)
086afe62 +0x230:  movl   $0xe,0x44(%esp)
086afe6a +0x238:  mov    -0x98(%ebp),%edx
086afe70 +0x23e:  mov    %edx,0x4(%esp)
086afe74 +0x242:  mov    -0x94(%ebp),%edx
086afe7a +0x248:  mov    %edx,0x8(%esp)
086afe7e +0x24c:  mov    -0x90(%ebp),%edx
086afe84 +0x252:  mov    %edx,0xc(%esp)
086afe88 +0x256:  mov    -0x8c(%ebp),%edx
086afe8e +0x25c:  mov    %edx,0x10(%esp)
086afe92 +0x260:  mov    -0x88(%ebp),%edx
086afe98 +0x266:  mov    %edx,0x14(%esp)
086afe9c +0x26a:  mov    -0x84(%ebp),%edx
086afea2 +0x270:  mov    %edx,0x18(%esp)
086afea6 +0x274:  mov    -0x80(%ebp),%edx
086afea9 +0x277:  mov    %edx,0x1c(%esp)
086afead +0x27b:  mov    -0x7c(%ebp),%edx
086afeb0 +0x27e:  mov    %edx,0x20(%esp)
086afeb4 +0x282:  mov    -0x78(%ebp),%edx
086afeb7 +0x285:  mov    %edx,0x24(%esp)
086afebb +0x289:  mov    -0x74(%ebp),%edx
086afebe +0x28c:  mov    %edx,0x28(%esp)
086afec2 +0x290:  mov    -0x70(%ebp),%edx
086afec5 +0x293:  mov    %edx,0x2c(%esp)
086afec9 +0x297:  mov    -0x6c(%ebp),%edx
086afecc +0x29a:  mov    %edx,0x30(%esp)
086afed0 +0x29e:  mov    -0x68(%ebp),%edx
086afed3 +0x2a1:  mov    %edx,0x34(%esp)
086afed7 +0x2a5:  mov    -0x64(%ebp),%edx
086afeda +0x2a8:  mov    %edx,0x38(%esp)
086afede +0x2ac:  mov    -0x60(%ebp),%edx
086afee1 +0x2af:  mov    %edx,0x3c(%esp)
086afee5 +0x2b3:  movzbl -0x5c(%ebp),%edx
086afee9 +0x2b7:  mov    %dl,0x40(%esp)
086afeed +0x2bb:  mov    %eax,(%esp)
086afef0 +0x2be:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
086afef5 +0x2c3:  mov    %eax,-0x20(%ebp)
086afef8 +0x2c6:  cmpl   $0x0,-0x20(%ebp)
086afefc +0x2ca:  js     086aff22 <+0x2f0>
086afefe +0x2cc:  mov    -0x20(%ebp),%eax
086aff01 +0x2cf:  mov    %eax,0xc(%esp)
086aff05 +0x2d3:  movl   $0x0,0x8(%esp)
086aff0d +0x2db:  movl   $0x1,0x4(%esp)
086aff15 +0x2e3:  mov    0x8(%ebp),%eax
086aff18 +0x2e6:  mov    %eax,(%esp)
086aff1b +0x2e9:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
086aff20 +0x2ee:  jmp    086aff66 <+0x334>
086aff22 +0x2f0:  mov    0x8(%ebp),%eax
086aff25 +0x2f3:  mov    %eax,(%esp)
086aff28 +0x2f6:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086aff2d +0x2fb:  movl   $0x0,0x18(%esp)
086aff35 +0x303:  movl   $0x0,0x14(%esp)
086aff3d +0x30b:  movl   $0x1,0x10(%esp)
086aff45 +0x313:  mov    %eax,0xc(%esp)
086aff49 +0x317:  movl   $0x0,0x8(%esp)
086aff51 +0x31f:  lea    -0x98(%ebp),%eax
086aff57 +0x325:  mov    %eax,0x4(%esp)
086aff5b +0x329:  mov    0x8(%ebp),%eax
086aff5e +0x32c:  mov    %eax,(%esp)
086aff61 +0x32f:  call   08555ac8 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserRK10Inven_ItemjjbPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
086aff66 +0x334:  addl   $0x1,-0x30(%ebp)
086aff6a +0x338:  lea    -0x54(%ebp),%eax
086aff6d +0x33b:  mov    %eax,(%esp)
086aff70 +0x33e:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
086aff75 +0x343:  cmp    -0x30(%ebp),%eax
086aff78 +0x346:  seta   %al
086aff7b +0x349:  test   %al,%al
086aff7d +0x34b:  jne    086afda7 <+0x175>
086aff83 +0x351:  cmpl   $0x270f,0xc(%ebp)
086aff8a +0x358:  je     086b0056 <+0x424>
086aff90 +0x35e:  mov    0x8(%ebp),%eax
086aff93 +0x361:  mov    %eax,(%esp)
086aff96 +0x364:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086aff9b +0x369:  mov    %eax,(%esp)
086aff9e +0x36c:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
086affa3 +0x371:  mov    %eax,%ebx
086affa5 +0x373:  mov    -0x34(%ebp),%eax
086affa8 +0x376:  mov    %eax,0x4(%esp)
086affac +0x37a:  lea    -0x48(%ebp),%eax
086affaf +0x37d:  mov    %eax,(%esp)
086affb2 +0x380:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
086affb7 +0x385:  mov    (%eax),%edx
086affb9 +0x387:  mov    %edx,%eax
086affbb +0x389:  shl    $0x3,%eax
086affbe +0x38c:  add    %edx,%eax
086affc0 +0x38e:  shl    $0x5,%eax
086affc3 +0x391:  mov    &g_SPremiumInfo+0x38(%eax),%eax
086affc9 +0x397:  add    %eax,%ebx
086affcb +0x399:  mov    0x8(%ebp),%eax
086affce +0x39c:  mov    %eax,(%esp)
086affd1 +0x39f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086affd6 +0x3a4:  mov    %ebx,0x4(%esp)
086affda +0x3a8:  mov    %eax,(%esp)
086affdd +0x3ab:  call   0822d67c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d26
086affe2 +0x3b0:  mov    -0x34(%ebp),%eax
086affe5 +0x3b3:  mov    %eax,0x4(%esp)
086affe9 +0x3b7:  lea    -0x48(%ebp),%eax
086affec +0x3ba:  mov    %eax,(%esp)
086affef +0x3bd:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
086afff4 +0x3c2:  mov    (%eax),%edx
086afff6 +0x3c4:  mov    %edx,%eax
086afff8 +0x3c6:  shl    $0x3,%eax
086afffb +0x3c9:  add    %edx,%eax
086afffd +0x3cb:  shl    $0x5,%eax
086b0000 +0x3ce:  mov    &g_SPremiumInfo+0x38(%eax),%eax
086b0006 +0x3d4:  mov    %eax,%ebx
086b0008 +0x3d6:  mov    0x8(%ebp),%eax
086b000b +0x3d9:  mov    %eax,(%esp)
086b000e +0x3dc:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086b0013 +0x3e1:  mov    %eax,(%esp)
086b0016 +0x3e4:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
086b001b +0x3e9:  mov    0x8(%ebp),%edx
086b001e +0x3ec:  add    $0x79700,%edx
086b0024 +0x3f2:  movl   $0x4,0xc(%esp)
086b002c +0x3fa:  mov    %ebx,0x8(%esp)
086b0030 +0x3fe:  mov    %eax,0x4(%esp)
086b0034 +0x402:  mov    %edx,(%esp)
086b0037 +0x405:  call   08683b90 <_ZN15cUserHistoryLog7CoinAddEii14eCoinAddReason>  ; cUserHistoryLog::CoinAdd(int, int, eCoinAddReason)
086b003c +0x40a:  jmp    086b0056 <+0x424>
086b003e +0x40c:  mov    %edx,%ebx
086b0040 +0x40e:  mov    %eax,%esi
086b0042 +0x410:  lea    -0x54(%ebp),%eax
086b0045 +0x413:  mov    %eax,(%esp)
086b0048 +0x416:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
086b004d +0x41b:  mov    %esi,%eax
086b004f +0x41d:  mov    %ebx,%edx
086b0051 +0x41f:  jmp    086b02cd <+0x69b>
086b0056 +0x424:  lea    -0x54(%ebp),%eax
086b0059 +0x427:  mov    %eax,(%esp)
086b005c +0x42a:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
086b0061 +0x42f:  mov    -0x34(%ebp),%eax
086b0064 +0x432:  mov    %eax,0x4(%esp)
086b0068 +0x436:  lea    -0x48(%ebp),%eax
086b006b +0x439:  mov    %eax,(%esp)
086b006e +0x43c:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
086b0073 +0x441:  mov    (%eax),%edx
086b0075 +0x443:  mov    %edx,%eax
086b0077 +0x445:  shl    $0x3,%eax
086b007a +0x448:  add    %edx,%eax
086b007c +0x44a:  shl    $0x5,%eax
086b007f +0x44d:  mov    &g_SPremiumInfo+0x4(%eax),%eax
086b0085 +0x453:  test   %eax,%eax
086b0087 +0x455:  je     086b00aa <+0x478>
086b0089 +0x457:  mov    -0x34(%ebp),%eax
086b008c +0x45a:  mov    %eax,0x4(%esp)
086b0090 +0x45e:  lea    -0x48(%ebp),%eax
086b0093 +0x461:  mov    %eax,(%esp)
086b0096 +0x464:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
086b009b +0x469:  mov    0x8(%eax),%eax
086b009e +0x46c:  cmp    -0x38(%ebp),%eax
086b00a1 +0x46f:  jle    086b00aa <+0x478>
086b00a3 +0x471:  mov    $0x1,%eax
086b00a8 +0x476:  jmp    086b00af <+0x47d>
086b00aa +0x478:  mov    $0x0,%eax
086b00af +0x47d:  test   %al,%al
086b00b1 +0x47f:  je     086b0138 <+0x506>
086b00b7 +0x485:  mov    0x8(%ebp),%eax
086b00ba +0x488:  mov    %eax,(%esp)
086b00bd +0x48b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086b00c2 +0x490:  mov    %eax,%esi
086b00c4 +0x492:  mov    -0x34(%ebp),%eax
086b00c7 +0x495:  mov    %eax,0x4(%esp)
086b00cb +0x499:  lea    -0x48(%ebp),%eax
086b00ce +0x49c:  mov    %eax,(%esp)
086b00d1 +0x49f:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
086b00d6 +0x4a4:  mov    (%eax),%eax
086b00d8 +0x4a6:  mov    %eax,-0xa0(%ebp)
086b00de +0x4ac:  mov    -0x34(%ebp),%eax
086b00e1 +0x4af:  mov    %eax,0x4(%esp)
086b00e5 +0x4b3:  lea    -0x48(%ebp),%eax
086b00e8 +0x4b6:  mov    %eax,(%esp)
086b00eb +0x4b9:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
086b00f0 +0x4be:  mov    0x8(%eax),%eax
086b00f3 +0x4c1:  mov    %eax,%edi
086b00f5 +0x4c3:  sub    -0x38(%ebp),%edi
086b00f8 +0x4c6:  mov    0x8(%ebp),%eax
086b00fb +0x4c9:  mov    %eax,(%esp)
086b00fe +0x4cc:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086b0103 +0x4d1:  mov    %eax,%ebx
086b0105 +0x4d3:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086b010a +0x4d8:  mov    %esi,0x18(%esp)
086b010e +0x4dc:  mov    -0xa0(%ebp),%ecx
086b0114 +0x4e2:  mov    %ecx,0x14(%esp)
086b0118 +0x4e6:  mov    %edi,0x10(%esp)
086b011c +0x4ea:  movl   $0x4,0xc(%esp)
086b0124 +0x4f2:  mov    %ebx,0x8(%esp)
086b0128 +0x4f6:  movl   $0x0,0x4(%esp)
086b0130 +0x4fe:  mov    %eax,(%esp)
086b0133 +0x501:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086b0138 +0x506:  mov    -0x3c(%ebp),%eax
086b013b +0x509:  mov    %eax,(%esp)
086b013e +0x50c:  call   086b086c <_GLOBAL__I_g_SPremiumInfo+0x62>  ; global constructors keyed to g_SPremiumInfo+0x62
086b0143 +0x511:  test   %al,%al
086b0145 +0x513:  je     086b0215 <+0x5e3>
086b014b +0x519:  mov    -0x38(%ebp),%eax
086b014e +0x51c:  mov    %eax,-0x58(%ebp)
086b0151 +0x51f:  lea    -0x98(%ebp),%eax
086b0157 +0x525:  mov    %eax,0x4(%esp)
086b015b +0x529:  lea    -0x58(%ebp),%eax
086b015e +0x52c:  mov    %eax,(%esp)
086b0161 +0x52f:  call   0807e360 <_init+0xc58>
086b0166 +0x534:  mov    -0x8c(%ebp),%eax
086b016c +0x53a:  add    $0x1,%eax
086b016f +0x53d:  mov    %eax,-0x8c(%ebp)
086b0175 +0x543:  movl   $0x0,-0x90(%ebp)
086b017f +0x54d:  movl   $0x0,-0x94(%ebp)
086b0189 +0x557:  movl   $0x0,-0x98(%ebp)
086b0193 +0x561:  lea    -0x98(%ebp),%eax
086b0199 +0x567:  mov    %eax,(%esp)
086b019c +0x56a:  call   0807e820 <_init+0x1118>
086b01a1 +0x56f:  mov    %eax,-0x1c(%ebp)
086b01a4 +0x572:  mov    0x8(%ebp),%eax
086b01a7 +0x575:  mov    %eax,(%esp)
086b01aa +0x578:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086b01af +0x57d:  mov    %eax,%esi
086b01b1 +0x57f:  mov    -0x34(%ebp),%eax
086b01b4 +0x582:  mov    %eax,0x4(%esp)
086b01b8 +0x586:  lea    -0x48(%ebp),%eax
086b01bb +0x589:  mov    %eax,(%esp)
086b01be +0x58c:  call   08469e3a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x51d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x51d
086b01c3 +0x591:  mov    (%eax),%edi
086b01c5 +0x593:  mov    -0x58(%ebp),%eax
086b01c8 +0x596:  mov    -0x1c(%ebp),%edx
086b01cb +0x599:  mov    %edx,%ecx
086b01cd +0x59b:  sub    %eax,%ecx
086b01cf +0x59d:  mov    %ecx,-0x9c(%ebp)
086b01d5 +0x5a3:  mov    0x8(%ebp),%eax
086b01d8 +0x5a6:  mov    %eax,(%esp)
086b01db +0x5a9:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086b01e0 +0x5ae:  mov    %eax,%ebx
086b01e2 +0x5b0:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086b01e7 +0x5b5:  mov    %esi,0x18(%esp)
086b01eb +0x5b9:  mov    %edi,0x14(%esp)
086b01ef +0x5bd:  mov    -0x9c(%ebp),%edx
086b01f5 +0x5c3:  mov    %edx,0x10(%esp)
086b01f9 +0x5c7:  movl   $0x5,0xc(%esp)
086b0201 +0x5cf:  mov    %ebx,0x8(%esp)
086b0205 +0x5d3:  movl   $0x0,0x4(%esp)
086b020d +0x5db:  mov    %eax,(%esp)
086b0210 +0x5de:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086b0215 +0x5e3:  addl   $0x1,-0x34(%ebp)
086b0219 +0x5e7:  lea    -0x48(%ebp),%eax
086b021c +0x5ea:  mov    %eax,(%esp)
086b021f +0x5ed:  call   08329b1c <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x1a75>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x1a75
086b0224 +0x5f2:  cmp    -0x34(%ebp),%eax
086b0227 +0x5f5:  seta   %al
086b022a +0x5f8:  test   %al,%al
086b022c +0x5fa:  jne    086afc96 <+0x64>
086b0232 +0x600:  mov    0x8(%ebp),%eax
086b0235 +0x603:  mov    %eax,(%esp)
086b0238 +0x606:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
086b023d +0x60b:  test   %al,%al
086b023f +0x60d:  je     086b0251 <+0x61f>
086b0241 +0x60f:  cmpl   $0x270f,0xc(%ebp)
086b0248 +0x616:  je     086b0251 <+0x61f>
086b024a +0x618:  mov    $0x1,%eax
086b024f +0x61d:  jmp    086b0256 <+0x624>
086b0251 +0x61f:  mov    $0x0,%eax
086b0256 +0x624:  test   %al,%al
086b0258 +0x626:  je     086b028f <+0x65d>
086b025a +0x628:  mov    0x8(%ebp),%eax
086b025d +0x62b:  mov    %eax,0x4(%esp)
086b0261 +0x62f:  mov    -0x3c(%ebp),%eax
086b0264 +0x632:  mov    %eax,(%esp)
086b0267 +0x635:  call   086ae8c6 <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser>  ; WongWork::CUserPremium::RecalcAdditionalInfo(CUser const*)
086b026c +0x63a:  movl   $0x1,0xc(%esp)
086b0274 +0x642:  movl   $0x2,0x8(%esp)
086b027c +0x64a:  movl   $0x1,0x4(%esp)
086b0284 +0x652:  mov    0x8(%ebp),%eax
086b0287 +0x655:  mov    %eax,(%esp)
086b028a +0x658:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
086b028f +0x65d:  mov    0x8(%ebp),%eax
086b0292 +0x660:  mov    %eax,(%esp)
086b0295 +0x663:  call   0867cbe4 <_ZN5CUser18ProcPremiumFatigueEv>  ; CUser::ProcPremiumFatigue()
086b029a +0x668:  mov    0x8(%ebp),%eax
086b029d +0x66b:  mov    %eax,(%esp)
086b02a0 +0x66e:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
086b02a5 +0x673:  mov    0x8(%ebp),%eax
086b02a8 +0x676:  mov    %eax,(%esp)
086b02ab +0x679:  call   08656808 <_ZN5CUser8SendCoinEv>  ; CUser::SendCoin()
086b02b0 +0x67e:  cmpl   $0x270f,0xc(%ebp)
086b02b7 +0x685:  jne    086b02e8 <+0x6b6>
086b02b9 +0x687:  mov    0x8(%ebp),%eax
086b02bc +0x68a:  mov    -0x38(%ebp),%edx
086b02bf +0x68d:  mov    %edx,0x4(%esp)
086b02c3 +0x691:  mov    %eax,(%esp)
086b02c6 +0x694:  call   086960f6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x294b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x294b
086b02cb +0x699:  jmp    086b02e8 <+0x6b6>
086b02cd +0x69b:  mov    %edx,%ebx
086b02cf +0x69d:  mov    %eax,%esi
086b02d1 +0x69f:  lea    -0x48(%ebp),%eax
086b02d4 +0x6a2:  mov    %eax,(%esp)
086b02d7 +0x6a5:  call   0832850a <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x463>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x463
086b02dc +0x6aa:  mov    %esi,%eax
086b02de +0x6ac:  mov    %ebx,%edx
086b02e0 +0x6ae:  mov    %eax,(%esp)
086b02e3 +0x6b1:  call   08ae3750 <_Unwind_Resume>
086b02e8 +0x6b6:  lea    -0x48(%ebp),%eax
086b02eb +0x6b9:  mov    %eax,(%esp)
086b02ee +0x6bc:  call   0832850a <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x463>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x463
086b02f3 +0x6c1:  lea    -0xc(%ebp),%esp
086b02f6 +0x6c4:  add    $0x0,%esp
086b02f9 +0x6c7:  pop    %ebx
086b02fa +0x6c8:  pop    %esi
086b02fb +0x6c9:  pop    %edi
086b02fc +0x6ca:  pop    %ebp
086b02fd +0x6cb:  ret
```

## 反编译 C

```c
// WongWork::CHandlePremium::handlePremiumEffect @ 0x86afc32

/* WongWork::CHandlePremium::handlePremiumEffect(CUser*, ENUM_PREMIUM_TYPE) */

void WongWork::CHandlePremium::handlePremiumEffect(CUser *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  TimerQueue *pTVar7;
  int iVar8;
  CDataManager *this;
  undefined4 uVar9;
  CInventory *pCVar10;
  int *piVar11;
  uint uVar12;
  tm local_9c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  int local_5c;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_58 [12];
  vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> local_4c [12];
  CUserPremium *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  int *local_28;
  int local_24;
  time_t local_20;
  
  local_40 = (CUserPremium *)CUser::GetPremiumInfoW(param_1);
  local_3c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  cVar2 = CUser::IsPremiumUser(param_1);
  if (cVar2 != '\0') {
    CUserPremium::GetPremiumInfoList((int)local_4c);
    local_38 = 0;
    while( true ) {
      uVar12 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
               size(local_4c);
      if (uVar12 <= local_38) break;
      iVar3 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
              operator[](local_4c,local_38);
      if (local_3c < *(int *)(iVar3 + 4)) {
        uVar4 = CUser::get_acc_id(param_1);
        puVar5 = (undefined4 *)
                 std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                 ::operator[](local_4c,local_38);
        uVar9 = *puVar5;
        iVar3 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
                operator[](local_4c,local_38);
        iVar3 = *(int *)(iVar3 + 4) - local_3c;
        uVar6 = CUser::GetUID(param_1);
                    /* try { // try from 086afd07 to 086afd97 has its CatchHandler @ 086b02cd */
        pTVar7 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar7,0,uVar6,6,iVar3,uVar9,uVar4);
      }
      else {
        iVar3 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_1);
        iVar8 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
                operator[](local_4c,local_38);
        if (iVar3 <= *(int *)(iVar8 + 4)) {
          std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
          operator[](local_4c,local_38);
          CUserPremium::GetAdvantageItem((int)local_58);
          local_34 = 0;
          while( true ) {
            uVar12 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                               (local_58);
            if (uVar12 <= local_34) break;
            piVar11 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                             operator[](local_58,local_34);
            local_30 = *piVar11;
            iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              (local_58,local_34);
            local_2c = *(undefined4 *)(iVar3 + 4);
            Inven_Item::Inven_Item((Inven_Item *)&local_9c);
                    /* try { // try from 086afde4 to 086b003b has its CatchHandler @ 086b003e */
            this = (CDataManager *)G_CDataManager();
            local_28 = (int *)CDataManager::find_item(this,local_30);
            (**(code **)(*local_28 + 8))(local_28,&local_9c);
            local_9c.tm_sec._2_2_ = (undefined2)local_30;
            local_9c.tm_min._0_2_ = (undefined2)((uint)local_30 >> 0x10);
            if (local_9c.tm_sec._1_1_ == '\x01') {
              local_9c._7_4_ = CUser::GetSeedFromDate(param_1);
            }
            else {
              local_9c._7_4_ = local_2c;
            }
            uVar9 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            local_24 = CInventory::insertItemIntoInventory
                                 (uVar9,CONCAT22(local_9c.tm_sec._2_2_,
                                                 CONCAT11(local_9c.tm_sec._1_1_,
                                                          (undefined1)local_9c.tm_sec)),
                                  CONCAT13(local_9c.tm_min._3_1_,
                                           CONCAT12(local_9c.tm_min._2_1_,
                                                    (undefined2)local_9c.tm_min)),
                                  CONCAT13(local_9c.tm_hour._3_1_,(undefined3)local_9c.tm_hour),
                                  local_9c.tm_mday,local_9c.tm_mon,local_9c.tm_year,local_9c.tm_wday
                                  ,local_9c.tm_yday,local_9c.tm_isdst,local_9c.tm_gmtoff,
                                  local_9c.tm_zone,local_70,local_6c,local_68,local_64,local_60,0xe,
                                  1,1);
            if (local_24 < 0) {
              uVar12 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              CMailBoxHelper::ReqDBSendNewMail
                        (param_1,(Inven_Item *)&local_9c,0,uVar12,true,(char *)0x0,0);
            }
            else {
              CUser::SendUpdateItemList(param_1,1,0,local_24);
            }
            local_34 = local_34 + 1;
          }
          if (param_2 != 9999) {
            pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            iVar8 = CInventory::GetCoin(pCVar10);
            piVar11 = (int *)std::
                             vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                             ::operator[](local_4c,local_38);
            iVar3 = *(int *)(g_SPremiumInfo + *piVar11 * 0x120 + 0x38);
            pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::SetCoin(pCVar10,iVar8 + iVar3);
            piVar11 = (int *)std::
                             vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                             ::operator[](local_4c,local_38);
            uVar9 = *(undefined4 *)(g_SPremiumInfo + *piVar11 * 0x120 + 0x38);
            pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            uVar4 = CInventory::GetCoin(pCVar10);
            cUserHistoryLog::CoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar4,uVar9,4);
          }
                    /* try { // try from 086b005c to 086b02af has its CatchHandler @ 086b02cd */
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_58);
        }
        piVar11 = (int *)std::
                         vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                         ::operator[](local_4c,local_38);
        if (*(int *)(g_SPremiumInfo + *piVar11 * 0x120 + 4) == 0) {
LAB_086b00aa:
          bVar1 = false;
        }
        else {
          iVar3 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                  ::operator[](local_4c,local_38);
          if (*(int *)(iVar3 + 8) <= local_3c) goto LAB_086b00aa;
          bVar1 = true;
        }
        if (bVar1) {
          uVar4 = CUser::get_acc_id(param_1);
          puVar5 = (undefined4 *)
                   std::
                   vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
                   operator[](local_4c,local_38);
          uVar9 = *puVar5;
          iVar3 = std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                  ::operator[](local_4c,local_38);
          iVar3 = *(int *)(iVar3 + 8) - local_3c;
          uVar6 = CUser::GetUID(param_1);
          pTVar7 = (TimerQueue *)G_TimerQueue();
          TimerQueue::InsertTimer(pTVar7,0,uVar6,4,iVar3,uVar9,uVar4);
        }
        cVar2 = CUserPremium::IsNeedCheckEveryday(local_40);
        if (cVar2 != '\0') {
          local_5c = local_3c;
          localtime_r(&local_5c,&local_9c);
          local_9c.tm_mday = local_9c.tm_mday + 1;
          local_9c.tm_hour._3_1_ = 0;
          local_9c.tm_min._0_2_ = 0;
          local_9c.tm_min._2_1_ = 0;
          local_9c._7_4_ = 0;
          local_9c.tm_sec._0_1_ = 0;
          local_9c.tm_sec._1_1_ = '\0';
          local_9c.tm_sec._2_2_ = 0;
          local_20 = mktime(&local_9c);
          uVar4 = CUser::get_acc_id(param_1);
          puVar5 = (undefined4 *)
                   std::
                   vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::
                   operator[](local_4c,local_38);
          uVar9 = *puVar5;
          iVar3 = local_20 - local_5c;
          uVar6 = CUser::GetUID(param_1);
          pTVar7 = (TimerQueue *)G_TimerQueue();
          TimerQueue::InsertTimer(pTVar7,0,uVar6,5,iVar3,uVar9,uVar4);
        }
      }
      local_38 = local_38 + 1;
    }
    cVar2 = CUser::IsHavePremiumAdvantage(param_1);
    if ((cVar2 == '\0') || (param_2 == 9999)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CUserPremium::RecalcAdditionalInfo(local_40,param_1);
      CUser::SendNotiPacket(param_1,1,2,1);
    }
    CUser::ProcPremiumFatigue(param_1);
    CUser::SendFatigue(param_1);
    CUser::SendCoin(param_1);
    if (param_2 == 9999) {
      CUserCharacInfo::setCurCharacLastPlayTick((CUserCharacInfo *)param_1,local_3c);
    }
    std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::~vector
              (local_4c);
  }
  return;
}
```
