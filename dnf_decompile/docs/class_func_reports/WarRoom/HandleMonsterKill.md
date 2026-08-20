# HandleMonsterKill

`_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_`

`WarRoom::HandleMonsterKill(CUser*, int, CUser*)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086be1fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086be1fe  _ZN7WarRoom17HandleMonsterKillEP5CUseriS1_
#           WarRoom::HandleMonsterKill(CUser*, int, CUser*)
# range [0x086be1fe, 0x086be8b3]
086be1fe +0x000:  push   %ebp
086be1ff +0x001:  mov    %esp,%ebp
086be201 +0x003:  push   %esi
086be202 +0x004:  push   %ebx
086be203 +0x005:  sub    $0x3e0,%esp
086be209 +0x00b:  lea    -0x3a8(%ebp),%eax
086be20f +0x011:  mov    %eax,(%esp)
086be212 +0x014:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
086be217 +0x019:  lea    -0x4c(%ebp),%eax
086be21a +0x01c:  mov    %eax,(%esp)
086be21d +0x01f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086be222 +0x024:  mov    0x8(%ebp),%eax
086be225 +0x027:  mov    %eax,(%esp)
086be228 +0x02a:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086be22d +0x02f:  mov    %eax,-0x40(%ebp)
086be230 +0x032:  cmpl   $0x0,-0x40(%ebp)
086be234 +0x036:  jne    086be240 <+0x42>
086be236 +0x038:  mov    $0x0,%ebx
086be23b +0x03d:  jmp    086be86e <+0x670>
086be240 +0x042:  movl   $0x0,-0x3c(%ebp)
086be247 +0x049:  movl   $0x0,-0x34(%ebp)
086be24e +0x050:  jmp    086be2b1 <+0xb3>
086be250 +0x052:  mov    -0x34(%ebp),%edx
086be253 +0x055:  mov    0x8(%ebp),%eax
086be256 +0x058:  add    $0x48,%edx
086be259 +0x05b:  mov    0xc(%eax,%edx,4),%eax
086be25d +0x05f:  test   %eax,%eax
086be25f +0x061:  je     086be2ac <+0xae>
086be261 +0x063:  cmpl   $0x0,0x14(%ebp)
086be265 +0x067:  je     086be2ad <+0xaf>
086be267 +0x069:  mov    -0x34(%ebp),%edx
086be26a +0x06c:  mov    0x8(%ebp),%eax
086be26d +0x06f:  add    $0x48,%edx
086be270 +0x072:  mov    0xc(%eax,%edx,4),%eax
086be274 +0x076:  cmp    0x14(%ebp),%eax
086be277 +0x079:  jne    086be2ad <+0xaf>
086be279 +0x07b:  mov    0x8(%ebp),%eax
086be27c +0x07e:  lea    0x34(%eax),%edx
086be27f +0x081:  lea    -0x3a8(%ebp),%eax
086be285 +0x087:  mov    %eax,0x10(%esp)
086be289 +0x08b:  movl   $0x0,0xc(%esp)
086be291 +0x093:  mov    0x10(%ebp),%eax
086be294 +0x096:  mov    %eax,0x8(%esp)
086be298 +0x09a:  mov    0x14(%ebp),%eax
086be29b +0x09d:  mov    %eax,0x4(%esp)
086be29f +0x0a1:  mov    %edx,(%esp)
086be2a2 +0x0a4:  call   086ba1ea <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster>  ; WarField::HandleWpPerMonster(CUser*, int, int, map_monster&)
086be2a7 +0x0a9:  mov    %eax,-0x3c(%ebp)
086be2aa +0x0ac:  jmp    086be2ad <+0xaf>
086be2ac +0x0ae:  nop
086be2ad +0x0af:  addl   $0x1,-0x34(%ebp)
086be2b1 +0x0b3:  cmpl   $0x5,-0x34(%ebp)
086be2b5 +0x0b7:  setle  %al
086be2b8 +0x0ba:  test   %al,%al
086be2ba +0x0bc:  jne    086be250 <+0x52>
086be2bc +0x0be:  mov    0x8(%ebp),%eax
086be2bf +0x0c1:  mov    0x1d0(%eax),%eax
086be2c5 +0x0c7:  mov    0x8(%ebp),%edx
086be2c8 +0x0ca:  add    $0x34,%edx
086be2cb +0x0cd:  mov    %eax,0x14(%esp)
086be2cf +0x0d1:  mov    0x14(%ebp),%eax
086be2d2 +0x0d4:  mov    %eax,0x10(%esp)
086be2d6 +0x0d8:  lea    -0x3a8(%ebp),%eax
086be2dc +0x0de:  mov    %eax,0xc(%esp)
086be2e0 +0x0e2:  lea    -0x4c(%ebp),%eax
086be2e3 +0x0e5:  mov    %eax,0x8(%esp)
086be2e7 +0x0e9:  mov    0x10(%ebp),%eax
086be2ea +0x0ec:  mov    %eax,0x4(%esp)
086be2ee +0x0f0:  mov    %edx,(%esp)
086be2f1 +0x0f3:  call   086b9672 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon>  ; WarField::HandleMonsterKill(int, PacketGuard&, map_monster&, CUser*, CDungeon const*)
086be2f6 +0x0f8:  xor    $0x1,%eax
086be2f9 +0x0fb:  test   %al,%al
086be2fb +0x0fd:  je     086be307 <+0x109>
086be2fd +0x0ff:  mov    $0x0,%ebx
086be302 +0x104:  jmp    086be86e <+0x670>
086be307 +0x109:  movzbl -0x3a0(%ebp),%eax
086be30e +0x110:  movsbl %al,%edx
086be311 +0x113:  movzbl -0x3a0(%ebp),%eax
086be318 +0x11a:  movsbl %al,%ecx
086be31b +0x11d:  mov    0x8(%ebp),%eax
086be31e +0x120:  add    $0x6c,%ecx
086be321 +0x123:  flds   0xc(%eax,%ecx,4)
086be325 +0x127:  flds   -0x380(%ebp)
086be32b +0x12d:  faddp  %st,%st(1)
086be32d +0x12f:  mov    0x8(%ebp),%eax
086be330 +0x132:  add    $0x6c,%edx
086be333 +0x135:  fstps  0xc(%eax,%edx,4)
086be337 +0x139:  movl   $0x0,-0x30(%ebp)
086be33e +0x140:  jmp    086be68a <+0x48c>
086be343 +0x145:  mov    -0x30(%ebp),%edx
086be346 +0x148:  mov    0x8(%ebp),%eax
086be349 +0x14b:  add    $0x48,%edx
086be34c +0x14e:  mov    0xc(%eax,%edx,4),%eax
086be350 +0x152:  test   %eax,%eax
086be352 +0x154:  je     086be685 <+0x487>
086be358 +0x15a:  cmpl   $0x0,0x14(%ebp)
086be35c +0x15e:  je     086be377 <+0x179>
086be35e +0x160:  mov    -0x30(%ebp),%edx
086be361 +0x163:  mov    0x8(%ebp),%eax
086be364 +0x166:  add    $0x48,%edx
086be367 +0x169:  mov    0xc(%eax,%edx,4),%eax
086be36b +0x16d:  cmp    0x14(%ebp),%eax
086be36e +0x170:  jne    086be377 <+0x179>
086be370 +0x172:  mov    $0x1,%eax
086be375 +0x177:  jmp    086be37c <+0x17e>
086be377 +0x179:  mov    $0x0,%eax
086be37c +0x17e:  mov    %al,-0x29(%ebp)
086be37f +0x181:  cmpb   $0x0,-0x29(%ebp)
086be383 +0x185:  je     086be3e7 <+0x1e9>
086be385 +0x187:  mov    -0x390(%ebp),%ecx
086be38b +0x18d:  movzbl -0x3a0(%ebp),%eax
086be392 +0x194:  movsbl %al,%edx
086be395 +0x197:  mov    0x14(%ebp),%eax
086be398 +0x19a:  mov    %ecx,0xc(%esp)
086be39c +0x19e:  mov    -0x3c(%ebp),%ecx
086be39f +0x1a1:  mov    %ecx,0x8(%esp)
086be3a3 +0x1a5:  mov    %edx,0x4(%esp)
086be3a7 +0x1a9:  mov    %eax,(%esp)
086be3aa +0x1ac:  call   086459c4 <_ZN15CUserCharacInfo11WarAreaKillEiif>  ; CUserCharacInfo::WarAreaKill(int, int, float)
086be3af +0x1b1:  movl   $0x1,-0x10(%ebp)
086be3b6 +0x1b8:  mov    -0x39c(%ebp),%ebx
086be3bc +0x1be:  mov    0x8(%ebp),%eax
086be3bf +0x1c1:  mov    0x1d0(%eax),%eax
086be3c5 +0x1c7:  mov    %eax,(%esp)
086be3c8 +0x1ca:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
086be3cd +0x1cf:  mov    -0x10(%ebp),%edx
086be3d0 +0x1d2:  mov    %edx,0xc(%esp)
086be3d4 +0x1d6:  mov    %ebx,0x8(%esp)
086be3d8 +0x1da:  mov    %eax,0x4(%esp)
086be3dc +0x1de:  mov    0x14(%ebp),%eax
086be3df +0x1e1:  mov    %eax,(%esp)
086be3e2 +0x1e4:  call   0866cb04 <_ZN5CUser17CheckQuestMonsterEii21ENUM_QUEST_ENEMY_TYPE>  ; CUser::CheckQuestMonster(int, int, ENUM_QUEST_ENEMY_TYPE)
086be3e7 +0x1e9:  flds   -0x390(%ebp)
086be3ed +0x1ef:  mov    0x8(%ebp),%eax
086be3f0 +0x1f2:  mov    0x1d0(%eax),%eax
086be3f6 +0x1f8:  movzbl -0x3a0(%ebp),%edx
086be3fd +0x1ff:  movsbl %dl,%edx
086be400 +0x202:  add    $0x1e0,%edx
086be406 +0x208:  mov    0x10(%eax,%edx,4),%eax
086be40a +0x20c:  mov    %eax,-0x3ac(%ebp)
086be410 +0x212:  fildl  -0x3ac(%ebp)
086be416 +0x218:  fmulp  %st,%st(1)
086be418 +0x21a:  fnstcw -0x3ae(%ebp)
086be41e +0x220:  movzwl -0x3ae(%ebp),%eax
086be425 +0x227:  mov    $0xc,%ah
086be427 +0x229:  mov    %ax,-0x3b0(%ebp)
086be42e +0x230:  fldcw  -0x3b0(%ebp)
086be434 +0x236:  fistpll -0x3b8(%ebp)
086be43a +0x23c:  fldcw  -0x3ae(%ebp)
086be440 +0x242:  mov    -0x3b8(%ebp),%eax
086be446 +0x248:  mov    -0x3b4(%ebp),%edx
086be44c +0x24e:  mov    %eax,-0x28(%ebp)
086be44f +0x251:  cmpb   $0x0,-0x29(%ebp)
086be453 +0x255:  je     086be4bd <+0x2bf>
086be455 +0x257:  mov    -0x28(%ebp),%eax
086be458 +0x25a:  mov    $0x0,%edx
086be45d +0x25f:  mov    %eax,-0x3b8(%ebp)
086be463 +0x265:  mov    %edx,-0x3b4(%ebp)
086be469 +0x26b:  fildll -0x3b8(%ebp)
086be46f +0x271:  fstps  -0x3bc(%ebp)
086be475 +0x277:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086be47a +0x27c:  flds   0x88f0(%eax)
086be480 +0x282:  fmuls  -0x3bc(%ebp)
086be486 +0x288:  fnstcw -0x3ae(%ebp)
086be48c +0x28e:  movzwl -0x3ae(%ebp),%eax
086be493 +0x295:  mov    $0xc,%ah
086be495 +0x297:  mov    %ax,-0x3b0(%ebp)
086be49c +0x29e:  fldcw  -0x3b0(%ebp)
086be4a2 +0x2a4:  fistpll -0x3b8(%ebp)
086be4a8 +0x2aa:  fldcw  -0x3ae(%ebp)
086be4ae +0x2b0:  mov    -0x3b8(%ebp),%eax
086be4b4 +0x2b6:  mov    -0x3b4(%ebp),%edx
086be4ba +0x2bc:  mov    %eax,-0x28(%ebp)
086be4bd +0x2bf:  lea    -0x54(%ebp),%eax
086be4c0 +0x2c2:  mov    %eax,(%esp)
086be4c3 +0x2c5:  call   08695ca4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x24f9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x24f9
086be4c8 +0x2ca:  cmpb   $0x0,-0x29(%ebp)
086be4cc +0x2ce:  je     086be4eb <+0x2ed>
086be4ce +0x2d0:  mov    0x14(%ebp),%eax
086be4d1 +0x2d3:  mov    %eax,(%esp)
086be4d4 +0x2d6:  call   0868ec5c <_ZN15CUserCharacInfo15checkBonusPointEv>  ; CUserCharacInfo::checkBonusPoint()
086be4d9 +0x2db:  mov    0x14(%ebp),%eax
086be4dc +0x2de:  lea    -0x54(%ebp),%edx
086be4df +0x2e1:  mov    %edx,0x4(%esp)
086be4e3 +0x2e5:  mov    %eax,(%esp)
086be4e6 +0x2e8:  call   0868ee50 <_ZN15CUserCharacInfo16getExpBonusPointER19ExpBonusPointResult>  ; CUserCharacInfo::getExpBonusPoint(ExpBonusPointResult&)
086be4eb +0x2ed:  mov    -0x54(%ebp),%eax
086be4ee +0x2f0:  add    -0x28(%ebp),%eax
086be4f1 +0x2f3:  mov    %eax,-0x24(%ebp)
086be4f4 +0x2f6:  fildl  -0x24(%ebp)
086be4f7 +0x2f9:  mov    -0x50(%ebp),%eax
086be4fa +0x2fc:  mov    %eax,-0x3ac(%ebp)
086be500 +0x302:  fildl  -0x3ac(%ebp)
086be506 +0x308:  flds   ""
086be50c +0x30e:  fdivrp %st,%st(1)
086be50e +0x310:  fmulp  %st,%st(1)
086be510 +0x312:  fnstcw -0x3ae(%ebp)
086be516 +0x318:  movzwl -0x3ae(%ebp),%eax
086be51d +0x31f:  mov    $0xc,%ah
086be51f +0x321:  mov    %ax,-0x3b0(%ebp)
086be526 +0x328:  fldcw  -0x3b0(%ebp)
086be52c +0x32e:  fistpl -0x3ac(%ebp)
086be532 +0x334:  fldcw  -0x3ae(%ebp)
086be538 +0x33a:  mov    -0x3ac(%ebp),%eax
086be53e +0x340:  add    -0x24(%ebp),%eax
086be541 +0x343:  mov    %eax,-0x28(%ebp)
086be544 +0x346:  mov    -0x28(%ebp),%edx
086be547 +0x349:  mov    -0x30(%ebp),%ecx
086be54a +0x34c:  mov    0x8(%ebp),%eax
086be54d +0x34f:  add    $0x48,%ecx
086be550 +0x352:  mov    0xc(%eax,%ecx,4),%eax
086be554 +0x356:  mov    %edx,0x4(%esp)
086be558 +0x35a:  mov    %eax,(%esp)
086be55b +0x35d:  call   0864fa08 <_ZN5CUser20gainExpAsUpperMemberEi>  ; CUser::gainExpAsUpperMember(int)
086be560 +0x362:  mov    %eax,-0x20(%ebp)
086be563 +0x365:  mov    -0x28(%ebp),%edx
086be566 +0x368:  mov    -0x30(%ebp),%ecx
086be569 +0x36b:  mov    0x8(%ebp),%eax
086be56c +0x36e:  add    $0x48,%ecx
086be56f +0x371:  mov    0xc(%eax,%ecx,4),%eax
086be573 +0x375:  mov    %edx,0x4(%esp)
086be577 +0x379:  mov    %eax,(%esp)
086be57a +0x37c:  call   0864fb3a <_ZN5CUser17gainGuildSkillExpEi>  ; CUser::gainGuildSkillExp(int)
086be57f +0x381:  mov    %eax,-0x1c(%ebp)
086be582 +0x384:  movl   $0x0,-0x18(%ebp)
086be589 +0x38b:  mov    -0x30(%ebp),%edx
086be58c +0x38e:  mov    0x8(%ebp),%eax
086be58f +0x391:  add    $0x48,%edx
086be592 +0x394:  mov    0xc(%eax,%edx,4),%eax
086be596 +0x398:  mov    %eax,(%esp)
086be599 +0x39b:  call   084a852c <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0x92>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0x92
086be59e +0x3a0:  test   %ax,%ax
086be5a1 +0x3a3:  setne  %al
086be5a4 +0x3a6:  test   %al,%al
086be5a6 +0x3a8:  je     086be5ca <+0x3cc>
086be5a8 +0x3aa:  mov    -0x28(%ebp),%eax
086be5ab +0x3ad:  mov    %eax,-0x18(%ebp)
086be5ae +0x3b0:  mov    -0x30(%ebp),%edx
086be5b1 +0x3b3:  mov    0x8(%ebp),%eax
086be5b4 +0x3b6:  add    $0x48,%edx
086be5b7 +0x3b9:  mov    0xc(%eax,%edx,4),%eax
086be5bb +0x3bd:  mov    -0x18(%ebp),%edx
086be5be +0x3c0:  mov    %edx,0x4(%esp)
086be5c2 +0x3c4:  mov    %eax,(%esp)
086be5c5 +0x3c7:  call   08469a02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xe5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xe5
086be5ca +0x3cc:  mov    -0x28(%ebp),%edx
086be5cd +0x3cf:  mov    -0x30(%ebp),%ecx
086be5d0 +0x3d2:  mov    0x8(%ebp),%eax
086be5d3 +0x3d5:  add    $0x48,%ecx
086be5d6 +0x3d8:  mov    0xc(%eax,%ecx,4),%eax
086be5da +0x3dc:  mov    %edx,0x4(%esp)
086be5de +0x3e0:  mov    %eax,(%esp)
086be5e1 +0x3e3:  call   0864fc34 <_ZN5CUser21gainPowerWarRewardExpEi>  ; CUser::gainPowerWarRewardExp(int)
086be5e6 +0x3e8:  mov    %eax,-0x14(%ebp)
086be5e9 +0x3eb:  movl   $0x0,-0x58(%ebp)
086be5f0 +0x3f2:  movl   $0x0,-0x5c(%ebp)
086be5f7 +0x3f9:  mov    -0x39c(%ebp),%ecx
086be5fd +0x3ff:  mov    -0x20(%ebp),%eax
086be600 +0x402:  mov    %eax,%edx
086be602 +0x404:  add    -0x28(%ebp),%edx
086be605 +0x407:  mov    -0x1c(%ebp),%eax
086be608 +0x40a:  add    %eax,%edx
086be60a +0x40c:  mov    -0x14(%ebp),%eax
086be60d +0x40f:  add    %eax,%edx
086be60f +0x411:  mov    -0x18(%ebp),%eax
086be612 +0x414:  lea    (%edx,%eax,1),%eax
086be615 +0x417:  mov    %eax,%edx
086be617 +0x419:  mov    -0x30(%ebp),%ebx
086be61a +0x41c:  mov    0x8(%ebp),%eax
086be61d +0x41f:  add    $0x48,%ebx
086be620 +0x422:  mov    0xc(%eax,%ebx,4),%eax
086be624 +0x426:  movl   $0x0,0x18(%esp)
086be62c +0x42e:  mov    %ecx,0x14(%esp)
086be630 +0x432:  movl   $0x4,0x10(%esp)
086be638 +0x43a:  lea    -0x5c(%ebp),%ecx
086be63b +0x43d:  mov    %ecx,0xc(%esp)
086be63f +0x441:  lea    -0x58(%ebp),%ecx
086be642 +0x444:  mov    %ecx,0x8(%esp)
086be646 +0x448:  mov    %edx,0x4(%esp)
086be64a +0x44c:  mov    %eax,(%esp)
086be64d +0x44f:  call   0866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>  ; CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)
086be652 +0x454:  test   %al,%al
086be654 +0x456:  je     086be686 <+0x488>
086be656 +0x458:  mov    -0x30(%ebp),%edx
086be659 +0x45b:  mov    0x8(%ebp),%eax
086be65c +0x45e:  add    $0x48,%edx
086be65f +0x461:  mov    0xc(%eax,%edx,4),%eax
086be663 +0x465:  movl   $0x1,0xc(%esp)
086be66b +0x46d:  movl   $0x2,0x8(%esp)
086be673 +0x475:  movl   $0x3,0x4(%esp)
086be67b +0x47d:  mov    %eax,(%esp)
086be67e +0x480:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
086be683 +0x485:  jmp    086be686 <+0x488>
086be685 +0x487:  nop
086be686 +0x488:  addl   $0x1,-0x30(%ebp)
086be68a +0x48c:  cmpl   $0x5,-0x30(%ebp)
086be68e +0x490:  setle  %al
086be691 +0x493:  test   %al,%al
086be693 +0x495:  jne    086be343 <+0x145>
086be699 +0x49b:  movw   $0xffff,-0x36(%ebp)
086be69f +0x4a1:  cmpl   $0x0,0x14(%ebp)
086be6a3 +0x4a5:  je     086be6b4 <+0x4b6>
086be6a5 +0x4a7:  mov    0x14(%ebp),%eax
086be6a8 +0x4aa:  mov    %eax,(%esp)
086be6ab +0x4ad:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086be6b0 +0x4b2:  mov    %ax,-0x36(%ebp)
086be6b4 +0x4b6:  movl   $0x1,0x4(%esp)
086be6bc +0x4be:  lea    -0x4c(%ebp),%eax
086be6bf +0x4c1:  mov    %eax,(%esp)
086be6c2 +0x4c4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086be6c7 +0x4c9:  movzwl -0x36(%ebp),%eax
086be6cb +0x4cd:  mov    %eax,0x4(%esp)
086be6cf +0x4d1:  lea    -0x4c(%ebp),%eax
086be6d2 +0x4d4:  mov    %eax,(%esp)
086be6d5 +0x4d7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086be6da +0x4dc:  mov    -0x3c(%ebp),%eax
086be6dd +0x4df:  mov    %eax,0x4(%esp)
086be6e1 +0x4e3:  lea    -0x4c(%ebp),%eax
086be6e4 +0x4e6:  mov    %eax,(%esp)
086be6e7 +0x4e9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086be6ec +0x4ee:  movl   $0x1,0x4(%esp)
086be6f4 +0x4f6:  lea    -0x4c(%ebp),%eax
086be6f7 +0x4f9:  mov    %eax,(%esp)
086be6fa +0x4fc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086be6ff +0x501:  lea    -0x4c(%ebp),%eax
086be702 +0x504:  mov    %eax,0x4(%esp)
086be706 +0x508:  mov    0x8(%ebp),%eax
086be709 +0x50b:  mov    %eax,(%esp)
086be70c +0x50e:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086be711 +0x513:  mov    0x8(%ebp),%eax
086be714 +0x516:  add    $0x34,%eax
086be717 +0x519:  mov    %eax,(%esp)
086be71a +0x51c:  call   086b954c <_ZN8WarField11IsGridClearEv>  ; WarField::IsGridClear()
086be71f +0x521:  test   %al,%al
086be721 +0x523:  je     086be852 <+0x654>
086be727 +0x529:  movl   $0x0,-0xc(%ebp)
086be72e +0x530:  jmp    086be7e5 <+0x5e7>
086be733 +0x535:  mov    -0xc(%ebp),%edx
086be736 +0x538:  mov    0x8(%ebp),%eax
086be739 +0x53b:  add    $0x48,%edx
086be73c +0x53e:  mov    0xc(%eax,%edx,4),%eax
086be740 +0x542:  test   %eax,%eax
086be742 +0x544:  je     086be7e0 <+0x5e2>
086be748 +0x54a:  mov    -0xc(%ebp),%edx
086be74b +0x54d:  mov    0x8(%ebp),%eax
086be74e +0x550:  add    $0x48,%edx
086be751 +0x553:  mov    0xc(%eax,%edx,4),%eax
086be755 +0x557:  mov    0x8e08c(%eax),%eax
086be75b +0x55d:  test   %eax,%eax
086be75d +0x55f:  jle    086be7c7 <+0x5c9>
086be75f +0x561:  mov    -0xc(%ebp),%edx
086be762 +0x564:  mov    0x8(%ebp),%eax
086be765 +0x567:  add    $0x48,%edx
086be768 +0x56a:  mov    0xc(%eax,%edx,4),%eax
086be76c +0x56e:  mov    %eax,(%esp)
086be76f +0x571:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086be774 +0x576:  mov    %eax,(%esp)
086be777 +0x579:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
086be77c +0x57e:  mov    %eax,(%esp)
086be77f +0x581:  call   0833debc <_ZNK13user_creature12CCreatureMgr32IsGrowCreature_Equipped_CreatureEv>  ; user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature() const
086be784 +0x586:  xor    $0x1,%eax
086be787 +0x589:  test   %al,%al
086be789 +0x58b:  je     086be7c7 <+0x5c9>
086be78b +0x58d:  mov    -0xc(%ebp),%edx
086be78e +0x590:  mov    0x8(%ebp),%eax
086be791 +0x593:  add    $0x48,%edx
086be794 +0x596:  mov    0xc(%eax,%edx,4),%eax
086be798 +0x59a:  mov    0x8e08c(%eax),%ebx
086be79e +0x5a0:  mov    -0xc(%ebp),%edx
086be7a1 +0x5a3:  mov    0x8(%ebp),%eax
086be7a4 +0x5a6:  add    $0x48,%edx
086be7a7 +0x5a9:  mov    0xc(%eax,%edx,4),%eax
086be7ab +0x5ad:  mov    %eax,(%esp)
086be7ae +0x5b0:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086be7b3 +0x5b5:  mov    %eax,(%esp)
086be7b6 +0x5b8:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
086be7bb +0x5bd:  mov    %ebx,0x4(%esp)
086be7bf +0x5c1:  mov    %eax,(%esp)
086be7c2 +0x5c4:  call   08339b06 <_ZN13user_creature12CCreatureMgr7GainExpEi>  ; user_creature::CCreatureMgr::GainExp(int)
086be7c7 +0x5c9:  mov    -0xc(%ebp),%edx
086be7ca +0x5cc:  mov    0x8(%ebp),%eax
086be7cd +0x5cf:  add    $0x48,%edx
086be7d0 +0x5d2:  mov    0xc(%eax,%edx,4),%eax
086be7d4 +0x5d6:  movl   $0x0,0x8e08c(%eax)
086be7de +0x5e0:  jmp    086be7e1 <+0x5e3>
086be7e0 +0x5e2:  nop
086be7e1 +0x5e3:  addl   $0x1,-0xc(%ebp)
086be7e5 +0x5e7:  cmpl   $0x5,-0xc(%ebp)
086be7e9 +0x5eb:  setle  %al
086be7ec +0x5ee:  test   %al,%al
086be7ee +0x5f0:  jne    086be733 <+0x535>
086be7f4 +0x5f6:  movl   $0x45,0x4(%esp)
086be7fc +0x5fe:  mov    0x8(%ebp),%eax
086be7ff +0x601:  mov    %eax,(%esp)
086be802 +0x604:  call   086c0b24 <_GLOBAL__I__ZN7WarRoomC2Ev+0x1d>  ; global constructors keyed to WarRoom::WarRoom()+0x1d
086be807 +0x609:  mov    0x8(%ebp),%eax
086be80a +0x60c:  mov    0x128(%eax),%edx
086be810 +0x612:  mov    0x8(%ebp),%eax
086be813 +0x615:  mov    0x1d0(%eax),%eax
086be819 +0x61b:  mov    0x744(%eax),%eax
086be81f +0x621:  cmp    %eax,%edx
086be821 +0x623:  jne    086be83f <+0x641>
086be823 +0x625:  mov    0x8(%ebp),%eax
086be826 +0x628:  movb   $0x1,0x12(%eax)
086be82a +0x62c:  movl   $0x5,0x4(%esp)
086be832 +0x634:  mov    0x8(%ebp),%eax
086be835 +0x637:  mov    %eax,(%esp)
086be838 +0x63a:  call   086bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>  ; WarRoom::ChangeState(WARROOM_STATE)
086be83d +0x63f:  jmp    086be852 <+0x654>
086be83f +0x641:  movl   $0x4,0x4(%esp)
086be847 +0x649:  mov    0x8(%ebp),%eax
086be84a +0x64c:  mov    %eax,(%esp)
086be84d +0x64f:  call   086bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>  ; WarRoom::ChangeState(WARROOM_STATE)
086be852 +0x654:  mov    $0x1,%ebx
086be857 +0x659:  jmp    086be86e <+0x670>
086be859 +0x65b:  mov    %edx,%ebx
086be85b +0x65d:  mov    %eax,%esi
086be85d +0x65f:  lea    -0x4c(%ebp),%eax
086be860 +0x662:  mov    %eax,(%esp)
086be863 +0x665:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086be868 +0x66a:  mov    %esi,%eax
086be86a +0x66c:  mov    %ebx,%edx
086be86c +0x66e:  jmp    086be87b <+0x67d>
086be86e +0x670:  lea    -0x4c(%ebp),%eax
086be871 +0x673:  mov    %eax,(%esp)
086be874 +0x676:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086be879 +0x67b:  jmp    086be899 <+0x69b>
086be87b +0x67d:  mov    %edx,%ebx
086be87d +0x67f:  mov    %eax,%esi
086be87f +0x681:  lea    -0x3a8(%ebp),%eax
086be885 +0x687:  mov    %eax,(%esp)
086be888 +0x68a:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
086be88d +0x68f:  mov    %esi,%eax
086be88f +0x691:  mov    %ebx,%edx
086be891 +0x693:  mov    %eax,(%esp)
086be894 +0x696:  call   08ae3750 <_Unwind_Resume>
086be899 +0x69b:  lea    -0x3a8(%ebp),%eax
086be89f +0x6a1:  mov    %eax,(%esp)
086be8a2 +0x6a4:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
086be8a7 +0x6a9:  mov    %ebx,%eax
086be8a9 +0x6ab:  add    $0x3e0,%esp
086be8af +0x6b1:  pop    %ebx
086be8b0 +0x6b2:  pop    %esi
086be8b1 +0x6b3:  pop    %ebp
086be8b2 +0x6b4:  ret
086be8b3 +0x6b5:  nop
```

## 反编译 C

```c
// WarRoom::HandleMonsterKill @ 0x86be1fe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarRoom::HandleMonsterKill(CUser*, int, CUser*) */

undefined4 __thiscall
WarRoom::HandleMonsterKill(WarRoom *this,CUser *param_1,int param_2,CUser *param_3)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  CInventory *pCVar5;
  CCreatureMgr *pCVar6;
  undefined4 uVar7;
  ulonglong local_3bc;
  map_monster local_3ac [8];
  char local_3a4;
  undefined4 local_3a0;
  float local_394;
  float local_384;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  PacketGuard local_50 [12];
  int local_44;
  int local_40;
  ushort local_3a;
  int local_38;
  int local_34;
  char local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  map_monster::map_monster(local_3ac);
                    /* try { // try from 086be21d to 086be221 has its CatchHandler @ 086be87b */
  PacketGuard::PacketGuard(local_50);
  local_44 = GetWaiterCount(this);
  if (local_44 == 0) {
    uVar7 = 0;
  }
  else {
    local_40 = 0;
    for (local_38 = 0; local_38 < 6; local_38 = local_38 + 1) {
      if (((*(int *)(this + (local_38 + 0x48) * 4 + 0xc) != 0) && (param_3 != (CUser *)0x0)) &&
         (*(CUser **)(this + (local_38 + 0x48) * 4 + 0xc) == param_3)) {
                    /* try { // try from 086be2a2 to 086be851 has its CatchHandler @ 086be859 */
        local_40 = WarField::HandleWpPerMonster
                             ((WarField *)(this + 0x34),param_3,param_2,0,local_3ac);
      }
    }
    cVar1 = WarField::HandleMonsterKill
                      ((WarField *)(this + 0x34),param_2,local_50,local_3ac,param_3,
                       *(CDungeon **)(this + 0x1d0));
    if (cVar1 == '\x01') {
      *(float *)(this + (local_3a4 + 0x6c) * 4 + 0xc) =
           local_384 + *(float *)(this + (local_3a4 + 0x6c) * 4 + 0xc);
      for (local_34 = 0; local_34 < 6; local_34 = local_34 + 1) {
        if (*(int *)(this + (local_34 + 0x48) * 4 + 0xc) != 0) {
          if ((param_3 == (CUser *)0x0) ||
             (*(CUser **)(this + (local_34 + 0x48) * 4 + 0xc) != param_3)) {
            local_2d = '\0';
          }
          else {
            local_2d = '\x01';
          }
          if (local_2d != '\0') {
            CUserCharacInfo::WarAreaKill
                      ((CUserCharacInfo *)param_3,(int)local_3a4,local_40,local_394);
            uVar7 = local_3a0;
            local_14 = 1;
            uVar3 = CDungeon::get_index(*(CDungeon **)(this + 0x1d0));
            CUser::CheckQuestMonster(param_3,uVar3,uVar7,local_14);
          }
          local_3bc = (ulonglong)
                      ROUND((float)*(int *)(*(int *)(this + 0x1d0) + 0x10 + (local_3a4 + 0x1e0) * 4)
                            * local_394);
          local_2c = (int)local_3bc;
          if (local_2d != '\0') {
            local_3bc = local_3bc & 0xffffffff;
            iVar4 = G_CDataManager();
            local_3bc._0_4_ = (int)(longlong)ROUND(*(float *)(iVar4 + 0x88f0) * (float)local_3bc);
            local_2c = (int)local_3bc;
          }
          ExpBonusPointResult::ExpBonusPointResult((ExpBonusPointResult *)&local_58);
          if (local_2d != '\0') {
            CUserCharacInfo::checkBonusPoint((CUserCharacInfo *)param_3);
            CUserCharacInfo::getExpBonusPoint
                      ((CUserCharacInfo *)param_3,(ExpBonusPointResult *)&local_58);
          }
          local_28 = local_58 + local_2c;
          local_2c = (int)ROUND(((float)local_54 / _DAT_08cfa704) * (float)local_28) + local_28;
          local_24 = CUser::gainExpAsUpperMember
                               (*(CUser **)(this + (local_34 + 0x48) * 4 + 0xc),local_2c);
          local_20 = CUser::gainGuildSkillExp
                               (*(CUser **)(this + (local_34 + 0x48) * 4 + 0xc),local_2c);
          local_1c = 0;
          sVar2 = CUserCharacInfo::getCurCharacFatigueGrownUpBuff
                            (*(CUserCharacInfo **)(this + (local_34 + 0x48) * 4 + 0xc));
          if (sVar2 != 0) {
            local_1c = local_2c;
            CUserCharacInfo::set_charac_fatigue_buf_bonus_exp
                      (*(CUserCharacInfo **)(this + (local_34 + 0x48) * 4 + 0xc),local_2c);
          }
          local_18 = CUser::gainPowerWarRewardExp(*(int *)(this + (local_34 + 0x48) * 4 + 0xc));
          local_5c = 0;
          local_60 = 0;
          cVar1 = CUser::gain_exp_sp(*(CUser **)(this + (local_34 + 0x48) * 4 + 0xc),
                                     local_24 + local_2c + local_20 + local_18 + local_1c,&local_5c,
                                     &local_60,4,local_3a0,0);
          if (cVar1 != '\0') {
            CUser::SendNotiPacket(*(CUser **)(this + (local_34 + 0x48) * 4 + 0xc),3,2,1);
          }
        }
      }
      local_3a = 0xffff;
      if (param_3 != (CUser *)0x0) {
        local_3a = CUser::get_unique_id(param_3);
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,(uint)local_3a);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,local_40);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      SendToRoom(this,local_50);
      cVar1 = WarField::IsGridClear((WarField *)(this + 0x34));
      if (cVar1 != '\0') {
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
            if (0 < *(int *)(*(int *)(this + (local_10 + 0x48) * 4 + 0xc) + 0x8e08c)) {
              pCVar5 = (CInventory *)
                       CUserCharacInfo::getCurCharacInvenR
                                 (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
              pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar5);
              cVar1 = user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature(pCVar6);
              if (cVar1 != '\x01') {
                iVar4 = *(int *)(*(int *)(this + (local_10 + 0x48) * 4 + 0xc) + 0x8e08c);
                pCVar5 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW
                                   (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
                pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar5);
                user_creature::CCreatureMgr::GainExp(pCVar6,iVar4);
              }
            }
            *(undefined4 *)(*(int *)(this + (local_10 + 0x48) * 4 + 0xc) + 0x8e08c) = 0;
          }
        }
        GenTimerKey(this,0x45);
        if (*(int *)(this + 0x128) == *(int *)(*(int *)(this + 0x1d0) + 0x744)) {
          this[0x12] = (WarRoom)0x1;
          ChangeState(this,5);
        }
        else {
          ChangeState(this,4);
        }
      }
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
  }
                    /* try { // try from 086be874 to 086be878 has its CatchHandler @ 086be87b */
  PacketGuard::~PacketGuard(local_50);
  map_monster::~map_monster(local_3ac);
  return uVar7;
}
```
