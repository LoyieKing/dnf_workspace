# SendUpdateItem

`_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi`

`CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867c2d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867c2d8  _ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi
#           CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
# range [0x0867c2d8, 0x0867c659]
0867c2d8 +0x000:  push   %ebp
0867c2d9 +0x001:  mov    %esp,%ebp
0867c2db +0x003:  push   %esi
0867c2dc +0x004:  push   %ebx
0867c2dd +0x005:  sub    $0x40,%esp
0867c2e0 +0x008:  mov    0x10(%ebp),%eax
0867c2e3 +0x00b:  mov    %eax,(%esp)
0867c2e6 +0x00e:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
0867c2eb +0x013:  mov    %eax,-0x20(%ebp)
0867c2ee +0x016:  mov    -0x20(%ebp),%ebx
0867c2f1 +0x019:  mov    0x8(%ebp),%eax
0867c2f4 +0x01c:  mov    %eax,(%esp)
0867c2f7 +0x01f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867c2fc +0x024:  mov    0x14(%ebp),%edx
0867c2ff +0x027:  mov    %edx,0x8(%esp)
0867c303 +0x02b:  mov    %ebx,0x4(%esp)
0867c307 +0x02f:  mov    %eax,(%esp)
0867c30a +0x032:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
0867c30f +0x037:  mov    %eax,-0x1c(%ebp)
0867c312 +0x03a:  cmpl   $0x0,-0x1c(%ebp)
0867c316 +0x03e:  je     0867c64d <+0x375>
0867c31c +0x044:  lea    -0x2c(%ebp),%eax
0867c31f +0x047:  mov    %eax,(%esp)
0867c322 +0x04a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867c327 +0x04f:  movl   $0xe,0x8(%esp)
0867c32f +0x057:  movl   $0x0,0x4(%esp)
0867c337 +0x05f:  lea    -0x2c(%ebp),%eax
0867c33a +0x062:  mov    %eax,(%esp)
0867c33d +0x065:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867c342 +0x06a:  mov    0x10(%ebp),%eax
0867c345 +0x06d:  mov    %eax,0x4(%esp)
0867c349 +0x071:  lea    -0x2c(%ebp),%eax
0867c34c +0x074:  mov    %eax,(%esp)
0867c34f +0x077:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867c354 +0x07c:  movl   $0x1,0x4(%esp)
0867c35c +0x084:  lea    -0x2c(%ebp),%eax
0867c35f +0x087:  mov    %eax,(%esp)
0867c362 +0x08a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867c367 +0x08f:  mov    0x14(%ebp),%eax
0867c36a +0x092:  mov    %eax,0x4(%esp)
0867c36e +0x096:  lea    -0x2c(%ebp),%eax
0867c371 +0x099:  mov    %eax,(%esp)
0867c374 +0x09c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867c379 +0x0a1:  mov    -0x1c(%ebp),%eax
0867c37c +0x0a4:  mov    0x7(%eax),%eax
0867c37f +0x0a7:  mov    %eax,-0x18(%ebp)
0867c382 +0x0aa:  cmpl   $0x0,-0x18(%ebp)
0867c386 +0x0ae:  jne    0867c39d <+0xc5>
0867c388 +0x0b0:  movl   $0xffffffff,0x4(%esp)
0867c390 +0x0b8:  lea    -0x2c(%ebp),%eax
0867c393 +0x0bb:  mov    %eax,(%esp)
0867c396 +0x0be:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867c39b +0x0c3:  jmp    0867c3b2 <+0xda>
0867c39d +0x0c5:  mov    -0x1c(%ebp),%eax
0867c3a0 +0x0c8:  mov    0x2(%eax),%eax
0867c3a3 +0x0cb:  mov    %eax,0x4(%esp)
0867c3a7 +0x0cf:  lea    -0x2c(%ebp),%eax
0867c3aa +0x0d2:  mov    %eax,(%esp)
0867c3ad +0x0d5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867c3b2 +0x0da:  mov    -0x18(%ebp),%eax
0867c3b5 +0x0dd:  mov    %eax,0x4(%esp)
0867c3b9 +0x0e1:  lea    -0x2c(%ebp),%eax
0867c3bc +0x0e4:  mov    %eax,(%esp)
0867c3bf +0x0e7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867c3c4 +0x0ec:  mov    -0x1c(%ebp),%eax
0867c3c7 +0x0ef:  mov    %eax,(%esp)
0867c3ca +0x0f2:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
0867c3cf +0x0f7:  movzbl %al,%eax
0867c3d2 +0x0fa:  mov    %eax,0x4(%esp)
0867c3d6 +0x0fe:  lea    -0x2c(%ebp),%eax
0867c3d9 +0x101:  mov    %eax,(%esp)
0867c3dc +0x104:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867c3e1 +0x109:  mov    -0x1c(%ebp),%eax
0867c3e4 +0x10c:  movzwl 0xb(%eax),%eax
0867c3e8 +0x110:  movzwl %ax,%eax
0867c3eb +0x113:  mov    %eax,0x4(%esp)
0867c3ef +0x117:  lea    -0x2c(%ebp),%eax
0867c3f2 +0x11a:  mov    %eax,(%esp)
0867c3f5 +0x11d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867c3fa +0x122:  mov    -0x1c(%ebp),%eax
0867c3fd +0x125:  movzbl (%eax),%eax
0867c400 +0x128:  movzbl %al,%eax
0867c403 +0x12b:  mov    %eax,0x4(%esp)
0867c407 +0x12f:  lea    -0x2c(%ebp),%eax
0867c40a +0x132:  mov    %eax,(%esp)
0867c40d +0x135:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867c412 +0x13a:  mov    -0x1c(%ebp),%eax
0867c415 +0x13d:  mov    0xd(%eax),%eax
0867c418 +0x140:  mov    %eax,0x4(%esp)
0867c41c +0x144:  lea    -0x2c(%ebp),%eax
0867c41f +0x147:  mov    %eax,(%esp)
0867c422 +0x14a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867c427 +0x14f:  mov    -0x1c(%ebp),%eax
0867c42a +0x152:  add    $0x11,%eax
0867c42d +0x155:  mov    %eax,(%esp)
0867c430 +0x158:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0867c435 +0x15d:  movzbl %al,%eax
0867c438 +0x160:  mov    %eax,0x4(%esp)
0867c43c +0x164:  lea    -0x2c(%ebp),%eax
0867c43f +0x167:  mov    %eax,(%esp)
0867c442 +0x16a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867c447 +0x16f:  mov    -0x1c(%ebp),%eax
0867c44a +0x172:  add    $0x11,%eax
0867c44d +0x175:  mov    %eax,(%esp)
0867c450 +0x178:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0867c455 +0x17d:  movzwl %ax,%eax
0867c458 +0x180:  mov    %eax,0x4(%esp)
0867c45c +0x184:  lea    -0x2c(%ebp),%eax
0867c45f +0x187:  mov    %eax,(%esp)
0867c462 +0x18a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867c467 +0x18f:  mov    -0x1c(%ebp),%eax
0867c46a +0x192:  mov    %eax,(%esp)
0867c46d +0x195:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
0867c472 +0x19a:  test   %al,%al
0867c474 +0x19c:  je     0867c559 <+0x281>
0867c47a +0x1a2:  movl   $0x1e,0x4(%esp)
0867c482 +0x1aa:  lea    -0x2c(%ebp),%eax
0867c485 +0x1ad:  mov    %eax,(%esp)
0867c488 +0x1b0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867c48d +0x1b5:  mov    -0x1c(%ebp),%eax
0867c490 +0x1b8:  mov    %eax,(%esp)
0867c493 +0x1bb:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0867c498 +0x1c0:  mov    %eax,%ebx
0867c49a +0x1c2:  mov    0x8(%ebp),%eax
0867c49d +0x1c5:  mov    %eax,(%esp)
0867c4a0 +0x1c8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867c4a5 +0x1cd:  mov    %eax,(%esp)
0867c4a8 +0x1d0:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0867c4ad +0x1d5:  mov    %ebx,0x4(%esp)
0867c4b1 +0x1d9:  mov    %eax,(%esp)
0867c4b4 +0x1dc:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
0867c4b9 +0x1e1:  movl   $0x1e,0x8(%esp)
0867c4c1 +0x1e9:  mov    %eax,0x4(%esp)
0867c4c5 +0x1ed:  lea    -0x2c(%ebp),%eax
0867c4c8 +0x1f0:  mov    %eax,(%esp)
0867c4cb +0x1f3:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0867c4d0 +0x1f8:  mov    -0x1c(%ebp),%eax
0867c4d3 +0x1fb:  mov    %eax,(%esp)
0867c4d6 +0x1fe:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0867c4db +0x203:  mov    %eax,%ebx
0867c4dd +0x205:  mov    0x8(%ebp),%eax
0867c4e0 +0x208:  mov    %eax,(%esp)
0867c4e3 +0x20b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867c4e8 +0x210:  mov    %eax,(%esp)
0867c4eb +0x213:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0867c4f0 +0x218:  mov    %ebx,0x4(%esp)
0867c4f4 +0x21c:  mov    %eax,(%esp)
0867c4f7 +0x21f:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
0867c4fc +0x224:  mov    %eax,-0x14(%ebp)
0867c4ff +0x227:  movl   $0x4,0x4(%esp)
0867c507 +0x22f:  lea    -0x2c(%ebp),%eax
0867c50a +0x232:  mov    %eax,(%esp)
0867c50d +0x235:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867c512 +0x23a:  cmpl   $0x0,-0x14(%ebp)
0867c516 +0x23e:  je     0867c534 <+0x25c>
0867c518 +0x240:  mov    -0x14(%ebp),%eax
0867c51b +0x243:  movl   $0x4,0x8(%esp)
0867c523 +0x24b:  mov    %eax,0x4(%esp)
0867c527 +0x24f:  lea    -0x2c(%ebp),%eax
0867c52a +0x252:  mov    %eax,(%esp)
0867c52d +0x255:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0867c532 +0x25a:  jmp    0867c559 <+0x281>
0867c534 +0x25c:  lea    -0x30(%ebp),%eax
0867c537 +0x25f:  mov    %eax,(%esp)
0867c53a +0x262:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
0867c53f +0x267:  lea    -0x30(%ebp),%eax
0867c542 +0x26a:  movl   $0x4,0x8(%esp)
0867c54a +0x272:  mov    %eax,0x4(%esp)
0867c54e +0x276:  lea    -0x2c(%ebp),%eax
0867c551 +0x279:  mov    %eax,(%esp)
0867c554 +0x27c:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0867c559 +0x281:  mov    -0x1c(%ebp),%eax
0867c55c +0x284:  movzbl 0x1(%eax),%eax
0867c560 +0x288:  cmp    $0x5,%al
0867c562 +0x28a:  jne    0867c5bb <+0x2e3>
0867c564 +0x28c:  movl   $0x0,-0x10(%ebp)
0867c56b +0x293:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
0867c570 +0x298:  mov    %eax,-0x10(%ebp)
0867c573 +0x29b:  mov    -0x1c(%ebp),%eax
0867c576 +0x29e:  mov    %eax,(%esp)
0867c579 +0x2a1:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0867c57e +0x2a6:  mov    %eax,%ebx
0867c580 +0x2a8:  mov    0x8(%ebp),%eax
0867c583 +0x2ab:  mov    %eax,(%esp)
0867c586 +0x2ae:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867c58b +0x2b3:  mov    %eax,(%esp)
0867c58e +0x2b6:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
0867c593 +0x2bb:  mov    -0x10(%ebp),%edx
0867c596 +0x2be:  mov    %edx,0x8(%esp)
0867c59a +0x2c2:  mov    %ebx,0x4(%esp)
0867c59e +0x2c6:  mov    %eax,(%esp)
0867c5a1 +0x2c9:  call   0833d78e <_ZNK13user_creature12CCreatureMgr13GetRemainDateEii>  ; user_creature::CCreatureMgr::GetRemainDate(int, int) const
0867c5a6 +0x2ce:  mov    %eax,-0xc(%ebp)
0867c5a9 +0x2d1:  mov    -0xc(%ebp),%eax
0867c5ac +0x2d4:  mov    %eax,0x4(%esp)
0867c5b0 +0x2d8:  lea    -0x2c(%ebp),%eax
0867c5b3 +0x2db:  mov    %eax,(%esp)
0867c5b6 +0x2de:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867c5bb +0x2e3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867c5c0 +0x2e8:  mov    0x20(%eax),%eax
0867c5c3 +0x2eb:  lea    -0x2c(%ebp),%edx
0867c5c6 +0x2ee:  mov    %edx,0xc(%esp)
0867c5ca +0x2f2:  mov    -0x1c(%ebp),%edx
0867c5cd +0x2f5:  mov    %edx,0x8(%esp)
0867c5d1 +0x2f9:  mov    0x8(%ebp),%edx
0867c5d4 +0x2fc:  mov    %edx,0x4(%esp)
0867c5d8 +0x300:  mov    %eax,(%esp)
0867c5db +0x303:  call   0854a9aa <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard>  ; WongWork::CItemUpgrade::make3rdChroniclePacket(CUser*, Inven_Item const&, PacketGuard*)
0867c5e0 +0x308:  mov    -0x1c(%ebp),%eax
0867c5e3 +0x30b:  mov    %eax,0x4(%esp)
0867c5e7 +0x30f:  lea    -0x2c(%ebp),%eax
0867c5ea +0x312:  mov    %eax,(%esp)
0867c5ed +0x315:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0867c5f2 +0x31a:  movl   $0x1,0x4(%esp)
0867c5fa +0x322:  lea    -0x2c(%ebp),%eax
0867c5fd +0x325:  mov    %eax,(%esp)
0867c600 +0x328:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867c605 +0x32d:  lea    -0x2c(%ebp),%eax
0867c608 +0x330:  mov    %eax,0x8(%esp)
0867c60c +0x334:  mov    0xc(%ebp),%eax
0867c60f +0x337:  mov    %eax,0x4(%esp)
0867c613 +0x33b:  mov    0x8(%ebp),%eax
0867c616 +0x33e:  mov    %eax,(%esp)
0867c619 +0x341:  call   0867b8fe <_ZN5CUser10SendPacketENS_11eSendTargetER11PacketGuard>  ; CUser::SendPacket(CUser::eSendTarget, PacketGuard&)
0867c61e +0x346:  jmp    0867c63b <+0x363>
0867c620 +0x348:  mov    %edx,%ebx
0867c622 +0x34a:  mov    %eax,%esi
0867c624 +0x34c:  lea    -0x2c(%ebp),%eax
0867c627 +0x34f:  mov    %eax,(%esp)
0867c62a +0x352:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867c62f +0x357:  mov    %esi,%eax
0867c631 +0x359:  mov    %ebx,%edx
0867c633 +0x35b:  mov    %eax,(%esp)
0867c636 +0x35e:  call   08ae3750 <_Unwind_Resume>
0867c63b +0x363:  lea    -0x2c(%ebp),%eax
0867c63e +0x366:  mov    %eax,(%esp)
0867c641 +0x369:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867c646 +0x36e:  mov    $0x1,%eax
0867c64b +0x373:  jmp    0867c652 <+0x37a>
0867c64d +0x375:  mov    $0x0,%eax
0867c652 +0x37a:  add    $0x40,%esp
0867c655 +0x37d:  pop    %ebx
0867c656 +0x37e:  pop    %esi
0867c657 +0x37f:  pop    %ebp
0867c658 +0x380:  ret
0867c659 +0x381:  nop
```

## 反编译 C

```c
// CUser::SendUpdateItem @ 0x867c2d8

/* CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int) */

undefined4 __thiscall CUser::SendUpdateItem(CUser *this,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  CInventory *pCVar3;
  uint uVar4;
  CAvatarItemMgr *pCVar5;
  char *pcVar6;
  CCreatureMgr *this_00;
  undefined4 uVar7;
  stAvatarExpansionInfo_t local_34 [4];
  PacketGuard local_30 [12];
  int local_24;
  Inven_Item *local_20;
  int local_1c;
  char *local_18;
  int local_14;
  int local_10;
  
  iVar2 = GetInvenTypeFromItemSpace(param_3);
  local_24 = iVar2;
  pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  local_20 = (Inven_Item *)CInventory::GetInvenRef(pCVar3,iVar2,param_4);
  if (local_20 == (Inven_Item *)0x0) {
    uVar7 = 0;
  }
  else {
    PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0867c33d to 0867c61d has its CatchHandler @ 0867c620 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,param_3);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,param_4);
    local_1c = *(int *)(local_20 + 7);
    if (local_1c == 0) {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,-1);
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*(int *)(local_20 + 2));
    }
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_1c);
    uVar4 = Inven_Item::GetItemAttr(local_20);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,uVar4 & 0xff);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,(uint)*(ushort *)(local_20 + 0xb));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)(byte)*local_20);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*(int *)(local_20 + 0xd));
    uVar4 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_20 + 0x11));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,uVar4 & 0xff);
    uVar4 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(local_20 + 0x11));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,uVar4 & 0xffff);
    cVar1 = Inven_Item::isAvatarItemType(local_20);
    if (cVar1 != '\0') {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,0x1e);
      iVar2 = Inven_Item::get_add_info(local_20);
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      pCVar5 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar3);
      pcVar6 = (char *)WongWork::CAvatarItemMgr::getJewelSocketData(pCVar5,iVar2);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_30,pcVar6,0x1e);
      iVar2 = Inven_Item::get_add_info(local_20);
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      pCVar5 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar3);
      local_18 = (char *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar5,iVar2);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,4);
      if (local_18 == (char *)0x0) {
        stAvatarExpansionInfo_t::init(local_34);
        InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_30,(char *)local_34,4);
      }
      else {
        InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_30,local_18,4);
      }
    }
    if (local_20[1] == (Inven_Item)0x5) {
      local_14 = 0;
      local_14 = OS_API::GetDateTimeTick();
      iVar2 = Inven_Item::get_add_info(local_20);
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar3);
      local_10 = user_creature::CCreatureMgr::GetRemainDate(this_00,iVar2,local_14);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_10);
    }
    iVar2 = G_CDataManager();
    WongWork::CItemUpgrade::make3rdChroniclePacket
              (*(CItemUpgrade **)(iVar2 + 0x20),this,local_20,local_30);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_30,local_20);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
    SendPacket(this,param_2,local_30);
    PacketGuard::~PacketGuard(local_30);
    uVar7 = 1;
  }
  return uVar7;
}
```
