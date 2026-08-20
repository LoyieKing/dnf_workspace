# CheckCondition

`_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE`

`AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)`

| 类 | 地址 |
|---|---|
| `AvatarConvertServer` | `0x08192212` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08192212  _ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE
#           AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)
# range [0x08192212, 0x081926dd]
08192212 +0x000:  push   %ebp
08192213 +0x001:  mov    %esp,%ebp
08192215 +0x003:  push   %ebx
08192216 +0x004:  sub    $0x44,%esp
08192219 +0x007:  mov    0x10(%ebp),%eax
0819221c +0x00a:  movzwl 0x2(%eax),%eax
08192220 +0x00e:  movzwl %ax,%ebx
08192223 +0x011:  mov    0xc(%ebp),%eax
08192226 +0x014:  mov    %eax,(%esp)
08192229 +0x017:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0819222e +0x01c:  mov    %ebx,0x8(%esp)
08192232 +0x020:  movl   $0x2,0x4(%esp)
0819223a +0x028:  mov    %eax,(%esp)
0819223d +0x02b:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08192242 +0x030:  mov    %eax,-0x14(%ebp)
08192245 +0x033:  cmpl   $0x0,-0x14(%ebp)
08192249 +0x037:  je     0819225a <+0x48>
0819224b +0x039:  mov    -0x14(%ebp),%eax
0819224e +0x03c:  mov    %eax,(%esp)
08192251 +0x03f:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
08192256 +0x044:  test   %al,%al
08192258 +0x046:  je     08192261 <+0x4f>
0819225a +0x048:  mov    $0x1,%eax
0819225f +0x04d:  jmp    08192266 <+0x54>
08192261 +0x04f:  mov    $0x0,%eax
08192266 +0x054:  test   %al,%al
08192268 +0x056:  je     081922b0 <+0x9e>
0819226a +0x058:  movl   $0x16,0x8(%esp)
08192272 +0x060:  movl   $0x24f,0x4(%esp)
0819227a +0x068:  mov    0xc(%ebp),%eax
0819227d +0x06b:  mov    %eax,(%esp)
08192280 +0x06e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08192285 +0x073:  mov    0x10(%ebp),%eax
08192288 +0x076:  movzwl 0x2(%eax),%eax
0819228c +0x07a:  movzwl %ax,%eax
0819228f +0x07d:  mov    %eax,0x8(%esp)
08192293 +0x081:  mov    0xc(%ebp),%eax
08192296 +0x084:  mov    %eax,0x4(%esp)
0819229a +0x088:  movl   $"AVATAR CONVERT",(%esp)
081922a1 +0x08f:  call   08197ba4 <_ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert>  ; ARAD::PRINT_ERROR::isEmpty(char*, CUser*, unsigned short)
081922a6 +0x094:  mov    $0x0,%eax
081922ab +0x099:  jmp    081926d8 <+0x4c6>
081922b0 +0x09e:  mov    -0x14(%ebp),%eax
081922b3 +0x0a1:  mov    0x2(%eax),%edx
081922b6 +0x0a4:  mov    0x10(%ebp),%eax
081922b9 +0x0a7:  mov    0x4(%eax),%eax
081922bc +0x0aa:  cmp    %eax,%edx
081922be +0x0ac:  je     08192334 <+0x122>
081922c0 +0x0ae:  movl   $0x11,0x8(%esp)
081922c8 +0x0b6:  movl   $0x24f,0x4(%esp)
081922d0 +0x0be:  mov    0xc(%ebp),%eax
081922d3 +0x0c1:  mov    %eax,(%esp)
081922d6 +0x0c4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081922db +0x0c9:  mov    0xc(%ebp),%eax
081922de +0x0cc:  mov    %eax,(%esp)
081922e1 +0x0cf:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081922e6 +0x0d4:  mov    0x10(%ebp),%edx
081922e9 +0x0d7:  mov    0x4(%edx),%ecx
081922ec +0x0da:  mov    -0x14(%ebp),%edx
081922ef +0x0dd:  mov    0x2(%edx),%edx
081922f2 +0x0e0:  mov    %eax,0x1c(%esp)
081922f6 +0x0e4:  mov    %ecx,0x18(%esp)
081922fa +0x0e8:  mov    %edx,0x14(%esp)
081922fe +0x0ec:  movl   $"AVATAR CONVERT : [item_id1:%d] [item_id2:%d] [charac_no:%d]",0x10(%esp)
08192306 +0x0f4:  movl   $0x2b5,0xc(%esp)
0819230e +0x0fc:  movl   $&_ZZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertEE19__PRETTY_FUNCTION__,0x8(%esp)
08192316 +0x104:  movl   $"localjapan/Arad_EmblemReformServer.cpp",0x4(%esp)
0819231e +0x10c:  movl   $0x1,(%esp)
08192325 +0x113:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0819232a +0x118:  mov    $0x0,%eax
0819232f +0x11d:  jmp    081926d8 <+0x4c6>
08192334 +0x122:  mov    0x10(%ebp),%eax
08192337 +0x125:  movzwl 0x2(%eax),%eax
0819233b +0x129:  movzwl %ax,%eax
0819233e +0x12c:  mov    %eax,0x8(%esp)
08192342 +0x130:  movl   $0x2,0x4(%esp)
0819234a +0x138:  mov    0xc(%ebp),%eax
0819234d +0x13b:  mov    %eax,(%esp)
08192350 +0x13e:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
08192355 +0x143:  test   %al,%al
08192357 +0x145:  je     081923cd <+0x1bb>
08192359 +0x147:  movl   $0xd5,0x8(%esp)
08192361 +0x14f:  movl   $0x24f,0x4(%esp)
08192369 +0x157:  mov    0xc(%ebp),%eax
0819236c +0x15a:  mov    %eax,(%esp)
0819236f +0x15d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08192374 +0x162:  mov    0xc(%ebp),%eax
08192377 +0x165:  mov    %eax,(%esp)
0819237a +0x168:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0819237f +0x16d:  mov    0x10(%ebp),%edx
08192382 +0x170:  mov    0x4(%edx),%ecx
08192385 +0x173:  mov    -0x14(%ebp),%edx
08192388 +0x176:  mov    0x2(%edx),%edx
0819238b +0x179:  mov    %eax,0x1c(%esp)
0819238f +0x17d:  mov    %ecx,0x18(%esp)
08192393 +0x181:  mov    %edx,0x14(%esp)
08192397 +0x185:  movl   $"AVATAR CONVERT : lock [item_id1:%d] [item_id2:%d] [charac_no:%d]",0x10(%esp)
0819239f +0x18d:  movl   $0x2bc,0xc(%esp)
081923a7 +0x195:  movl   $&_ZZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertEE19__PRETTY_FUNCTION__,0x8(%esp)
081923af +0x19d:  movl   $"localjapan/Arad_EmblemReformServer.cpp",0x4(%esp)
081923b7 +0x1a5:  movl   $0x1,(%esp)
081923be +0x1ac:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081923c3 +0x1b1:  mov    $0x0,%eax
081923c8 +0x1b6:  jmp    081926d8 <+0x4c6>
081923cd +0x1bb:  mov    0x10(%ebp),%eax
081923d0 +0x1be:  mov    0x4(%eax),%eax
081923d3 +0x1c1:  mov    %eax,%ebx
081923d5 +0x1c3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081923da +0x1c8:  mov    %ebx,0x4(%esp)
081923de +0x1cc:  mov    %eax,(%esp)
081923e1 +0x1cf:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081923e6 +0x1d4:  mov    %eax,-0x10(%ebp)
081923e9 +0x1d7:  cmpl   $0x0,-0x10(%ebp)
081923ed +0x1db:  je     08192408 <+0x1f6>
081923ef +0x1dd:  mov    -0x10(%ebp),%eax
081923f2 +0x1e0:  mov    (%eax),%eax
081923f4 +0x1e2:  add    $0x10,%eax
081923f7 +0x1e5:  mov    (%eax),%edx
081923f9 +0x1e7:  mov    -0x10(%ebp),%eax
081923fc +0x1ea:  mov    %eax,(%esp)
081923ff +0x1ed:  call   *%edx
08192401 +0x1ef:  xor    $0x1,%eax
08192404 +0x1f2:  test   %al,%al
08192406 +0x1f4:  je     0819240f <+0x1fd>
08192408 +0x1f6:  mov    $0x1,%eax
0819240d +0x1fb:  jmp    08192414 <+0x202>
0819240f +0x1fd:  mov    $0x0,%eax
08192414 +0x202:  test   %al,%al
08192416 +0x204:  je     0819245a <+0x248>
08192418 +0x206:  movl   $0x11,0x8(%esp)
08192420 +0x20e:  movl   $0x24f,0x4(%esp)
08192428 +0x216:  mov    0xc(%ebp),%eax
0819242b +0x219:  mov    %eax,(%esp)
0819242e +0x21c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08192433 +0x221:  mov    0x10(%ebp),%eax
08192436 +0x224:  mov    0x4(%eax),%eax
08192439 +0x227:  mov    %eax,0x8(%esp)
0819243d +0x22b:  mov    0xc(%ebp),%eax
08192440 +0x22e:  mov    %eax,0x4(%esp)
08192444 +0x232:  movl   $"AVATAR CONVERT",(%esp)
0819244b +0x239:  call   08197caf <_ZN4ARAD11PRINT_ERROR9find_itemEPcP5CUseri>  ; ARAD::PRINT_ERROR::find_item(char*, CUser*, int)
08192450 +0x23e:  mov    $0x0,%eax
08192455 +0x243:  jmp    081926d8 <+0x4c6>
0819245a +0x248:  mov    -0x10(%ebp),%eax
0819245d +0x24b:  mov    (%eax),%eax
0819245f +0x24d:  add    $0x24,%eax
08192462 +0x250:  mov    (%eax),%edx
08192464 +0x252:  movl   $0x2,0x4(%esp)
0819246c +0x25a:  mov    -0x10(%ebp),%eax
0819246f +0x25d:  mov    %eax,(%esp)
08192472 +0x260:  call   *%edx
08192474 +0x262:  xor    $0x1,%eax
08192477 +0x265:  test   %al,%al
08192479 +0x267:  je     081924ec <+0x2da>
0819247b +0x269:  movl   $0x17,0x8(%esp)
08192483 +0x271:  movl   $0x24f,0x4(%esp)
0819248b +0x279:  mov    0xc(%ebp),%eax
0819248e +0x27c:  mov    %eax,(%esp)
08192491 +0x27f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08192496 +0x284:  mov    0xc(%ebp),%eax
08192499 +0x287:  mov    %eax,(%esp)
0819249c +0x28a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081924a1 +0x28f:  mov    %eax,%ebx
081924a3 +0x291:  mov    -0x10(%ebp),%eax
081924a6 +0x294:  mov    %eax,(%esp)
081924a9 +0x297:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
081924ae +0x29c:  mov    %ebx,0x18(%esp)
081924b2 +0x2a0:  mov    %eax,0x14(%esp)
081924b6 +0x2a4:  movl   $"AVATAR CONVERT : isEnableAvatarFunc(AVATAR_FUNC_FILTER_DISJOINT) fail [item_id:%d] [charac_no:%d]",0x10(%esp)
081924be +0x2ac:  movl   $0x2d2,0xc(%esp)
081924c6 +0x2b4:  movl   $&_ZZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertEE19__PRETTY_FUNCTION__,0x8(%esp)
081924ce +0x2bc:  movl   $"localjapan/Arad_EmblemReformServer.cpp",0x4(%esp)
081924d6 +0x2c4:  movl   $0x1,(%esp)
081924dd +0x2cb:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081924e2 +0x2d0:  mov    $0x0,%eax
081924e7 +0x2d5:  jmp    081926d8 <+0x4c6>
081924ec +0x2da:  mov    -0x14(%ebp),%eax
081924ef +0x2dd:  mov    0x7(%eax),%ebx
081924f2 +0x2e0:  mov    0xc(%ebp),%eax
081924f5 +0x2e3:  mov    %eax,(%esp)
081924f8 +0x2e6:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081924fd +0x2eb:  mov    %eax,(%esp)
08192500 +0x2ee:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08192505 +0x2f3:  mov    %ebx,0x4(%esp)
08192509 +0x2f7:  mov    %eax,(%esp)
0819250c +0x2fa:  call   082f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>  ; WongWork::CAvatarItemMgr::GetExpireDate(int) const
08192511 +0x2ff:  test   %eax,%eax
08192513 +0x301:  setne  %al
08192516 +0x304:  test   %al,%al
08192518 +0x306:  je     08192584 <+0x372>
0819251a +0x308:  movl   $0x17,0x8(%esp)
08192522 +0x310:  movl   $0x24f,0x4(%esp)
0819252a +0x318:  mov    0xc(%ebp),%eax
0819252d +0x31b:  mov    %eax,(%esp)
08192530 +0x31e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08192535 +0x323:  mov    0xc(%ebp),%eax
08192538 +0x326:  mov    %eax,(%esp)
0819253b +0x329:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08192540 +0x32e:  mov    -0x14(%ebp),%edx
08192543 +0x331:  mov    0x7(%edx),%edx
08192546 +0x334:  mov    %eax,0x18(%esp)
0819254a +0x338:  mov    %edx,0x14(%esp)
0819254e +0x33c:  movl   $"AVATAR CONVERT : GetExpireDate() fail [ui_id:%d] [charac_no:%d]",0x10(%esp)
08192556 +0x344:  movl   $0x2d9,0xc(%esp)
0819255e +0x34c:  movl   $&_ZZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertEE19__PRETTY_FUNCTION__,0x8(%esp)
08192566 +0x354:  movl   $"localjapan/Arad_EmblemReformServer.cpp",0x4(%esp)
0819256e +0x35c:  movl   $0x1,(%esp)
08192575 +0x363:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0819257a +0x368:  mov    $0x0,%eax
0819257f +0x36d:  jmp    081926d8 <+0x4c6>
08192584 +0x372:  mov    -0x10(%ebp),%eax
08192587 +0x375:  mov    %eax,(%esp)
0819258a +0x378:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0819258f +0x37d:  mov    0x8(%ebp),%edx
08192592 +0x380:  add    $0x4,%edx
08192595 +0x383:  mov    %eax,0x4(%esp)
08192599 +0x387:  mov    %edx,(%esp)
0819259c +0x38a:  call   088b1e48 <_ZN4ARAD6SCRIPT13AvatarConvert16getConvertResultEi>  ; ARAD::SCRIPT::AvatarConvert::getConvertResult(int)
081925a1 +0x38f:  mov    %eax,-0xc(%ebp)
081925a4 +0x392:  cmpl   $0x0,-0xc(%ebp)
081925a8 +0x396:  jne    08192614 <+0x402>
081925aa +0x398:  movl   $0x11,0x8(%esp)
081925b2 +0x3a0:  movl   $0x24f,0x4(%esp)
081925ba +0x3a8:  mov    0xc(%ebp),%eax
081925bd +0x3ab:  mov    %eax,(%esp)
081925c0 +0x3ae:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081925c5 +0x3b3:  mov    0xc(%ebp),%eax
081925c8 +0x3b6:  mov    %eax,(%esp)
081925cb +0x3b9:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081925d0 +0x3be:  mov    0x10(%ebp),%edx
081925d3 +0x3c1:  mov    0x4(%edx),%edx
081925d6 +0x3c4:  mov    %eax,0x18(%esp)
081925da +0x3c8:  mov    %edx,0x14(%esp)
081925de +0x3cc:  movl   $"AVATAR CONVERT : getConvertResult() fail [item_id:%d] [charac_no:%d]",0x10(%esp)
081925e6 +0x3d4:  movl   $0x2e2,0xc(%esp)
081925ee +0x3dc:  movl   $&_ZZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertEE19__PRETTY_FUNCTION__,0x8(%esp)
081925f6 +0x3e4:  movl   $"localjapan/Arad_EmblemReformServer.cpp",0x4(%esp)
081925fe +0x3ec:  movl   $0x1,(%esp)
08192605 +0x3f3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0819260a +0x3f8:  mov    $0x0,%eax
0819260f +0x3fd:  jmp    081926d8 <+0x4c6>
08192614 +0x402:  mov    -0xc(%ebp),%eax
08192617 +0x405:  movzbl 0x20(%eax),%eax
0819261b +0x409:  xor    $0x1,%eax
0819261e +0x40c:  test   %al,%al
08192620 +0x40e:  je     08192644 <+0x432>
08192622 +0x410:  mov    -0xc(%ebp),%eax
08192625 +0x413:  add    $0x8,%eax
08192628 +0x416:  mov    %eax,(%esp)
0819262b +0x419:  call   08193810 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x478>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x478
08192630 +0x41e:  mov    0x10(%ebp),%edx
08192633 +0x421:  movzwl (%edx),%edx
08192636 +0x424:  movzwl %dx,%edx
08192639 +0x427:  cmp    %edx,%eax
0819263b +0x429:  jb     08192644 <+0x432>
0819263d +0x42b:  mov    $0x1,%eax
08192642 +0x430:  jmp    08192649 <+0x437>
08192644 +0x432:  mov    $0x0,%eax
08192649 +0x437:  test   %al,%al
0819264b +0x439:  je     081926d3 <+0x4c1>
08192651 +0x43f:  movl   $0x17,0x8(%esp)
08192659 +0x447:  movl   $0x24f,0x4(%esp)
08192661 +0x44f:  mov    0xc(%ebp),%eax
08192664 +0x452:  mov    %eax,(%esp)
08192667 +0x455:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819266c +0x45a:  mov    0xc(%ebp),%eax
0819266f +0x45d:  mov    %eax,(%esp)
08192672 +0x460:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08192677 +0x465:  mov    0x10(%ebp),%edx
0819267a +0x468:  mov    0x4(%edx),%ebx
0819267d +0x46b:  mov    0x10(%ebp),%edx
08192680 +0x46e:  movzwl (%edx),%edx
08192683 +0x471:  movzwl %dx,%ecx
08192686 +0x474:  mov    -0xc(%ebp),%edx
08192689 +0x477:  movzbl 0x20(%edx),%edx
0819268d +0x47b:  movzbl %dl,%edx
08192690 +0x47e:  mov    %eax,0x20(%esp)
08192694 +0x482:  mov    %ebx,0x1c(%esp)
08192698 +0x486:  mov    %ecx,0x18(%esp)
0819269c +0x48a:  mov    %edx,0x14(%esp)
081926a0 +0x48e:  movl   $"AVATAR CONVERT : [isSelect:%d] [selectNo:%d] [item_id:%d] [charac_no:%d]",0x10(%esp)
081926a8 +0x496:  movl   $0x2e9,0xc(%esp)
081926b0 +0x49e:  movl   $&_ZZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertEE19__PRETTY_FUNCTION__,0x8(%esp)
081926b8 +0x4a6:  movl   $"localjapan/Arad_EmblemReformServer.cpp",0x4(%esp)
081926c0 +0x4ae:  movl   $0x1,(%esp)
081926c7 +0x4b5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081926cc +0x4ba:  mov    $0x0,%eax
081926d1 +0x4bf:  jmp    081926d8 <+0x4c6>
081926d3 +0x4c1:  mov    $0x1,%eax
081926d8 +0x4c6:  add    $0x44,%esp
081926db +0x4c9:  pop    %ebx
081926dc +0x4ca:  pop    %ebp
081926dd +0x4cb:  ret
```

## 反编译 C

```c
// AvatarConvertServer::CheckCondition @ 0x8192212

/* AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*) */

bool __thiscall
AvatarConvertServer::CheckCondition
          (AvatarConvertServer *this,CUser *param_1,SigAradAvatarConvert *param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  CInventory *pCVar4;
  Inven_Item *this_00;
  undefined4 uVar5;
  CDataManager *this_01;
  CItem *this_02;
  undefined4 uVar6;
  CAvatarItemMgr *this_03;
  int iVar7;
  uint uVar8;
  
  uVar1 = *(ushort *)(param_2 + 2);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  this_00 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,2,(uint)uVar1);
  if ((this_00 == (Inven_Item *)0x0) || (cVar3 = Inven_Item::isEmpty(this_00), cVar3 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    CUser::SendCmdErrorPacket(param_1,0x24f,0x16);
    ARAD::PRINT_ERROR::isEmpty("AVATAR CONVERT",param_1,*(ushort *)(param_2 + 2));
    return false;
  }
  if (*(int *)(this_00 + 2) != *(int *)(param_2 + 4)) {
    CUser::SendCmdErrorPacket(param_1,0x24f,0x11);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_EmblemReformServer.cpp",
               "bool AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)",0x2b5
               ,"AVATAR CONVERT : [item_id1:%d] [item_id2:%d] [charac_no:%d]",
               *(undefined4 *)(this_00 + 2),*(undefined4 *)(param_2 + 4),uVar5);
    return false;
  }
  cVar3 = CUser::CheckItemLock(param_1,2,(uint)*(ushort *)(param_2 + 2));
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x24f,0xd5);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_EmblemReformServer.cpp",
               "bool AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)",700,
               "AVATAR CONVERT : lock [item_id1:%d] [item_id2:%d] [charac_no:%d]",
               *(undefined4 *)(this_00 + 2),*(undefined4 *)(param_2 + 4),uVar5);
    return false;
  }
  iVar7 = *(int *)(param_2 + 4);
  this_01 = (CDataManager *)G_CDataManager();
  this_02 = (CItem *)CDataManager::find_item(this_01,iVar7);
  if ((this_02 == (CItem *)0x0) ||
     (cVar3 = (**(code **)(*(int *)this_02 + 0x10))(this_02), cVar3 != '\x01')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    CUser::SendCmdErrorPacket(param_1,0x24f,0x11);
    ARAD::PRINT_ERROR::find_item("AVATAR CONVERT",param_1,*(int *)(param_2 + 4));
    return false;
  }
  cVar3 = (**(code **)(*(int *)this_02 + 0x24))(this_02,2);
  if (cVar3 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0x24f,0x17);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar6 = CItem::get_index(this_02);
    LogManager::logFormat
              (1,"localjapan/Arad_EmblemReformServer.cpp",
               "bool AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)",0x2d2
               ,
               "AVATAR CONVERT : isEnableAvatarFunc(AVATAR_FUNC_FILTER_DISJOINT) fail [item_id:%d] [charac_no:%d]"
               ,uVar6,uVar5);
    return false;
  }
  iVar7 = *(int *)(this_00 + 7);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  this_03 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
  iVar7 = WongWork::CAvatarItemMgr::GetExpireDate(this_03,iVar7);
  if (iVar7 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x24f,0x17);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_EmblemReformServer.cpp",
               "bool AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)",0x2d9
               ,"AVATAR CONVERT : GetExpireDate() fail [ui_id:%d] [charac_no:%d]",
               *(undefined4 *)(this_00 + 7),uVar5);
    return false;
  }
  CItem::get_grade(this_02);
  iVar7 = ARAD::SCRIPT::AvatarConvert::getConvertResult((int)(this + 4));
  if (iVar7 == 0) {
    CUser::SendCmdErrorPacket(param_1,0x24f,0x11);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_EmblemReformServer.cpp",
               "bool AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)",0x2e2
               ,"AVATAR CONVERT : getConvertResult() fail [item_id:%d] [charac_no:%d]",
               *(undefined4 *)(param_2 + 4),uVar5);
    return false;
  }
  if ((*(char *)(iVar7 + 0x20) == '\x01') ||
     (uVar8 = std::
              vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
              ::size((vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
                      *)(iVar7 + 8)), uVar8 < *(ushort *)param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    CUser::SendCmdErrorPacket(param_1,0x24f,0x17);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_EmblemReformServer.cpp",
               "bool AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)",0x2e9
               ,"AVATAR CONVERT : [isSelect:%d] [selectNo:%d] [item_id:%d] [charac_no:%d]",
               (uint)*(byte *)(iVar7 + 0x20),(uint)*(ushort *)param_2,*(undefined4 *)(param_2 + 4),
               uVar5);
  }
  return !bVar2;
}
```
