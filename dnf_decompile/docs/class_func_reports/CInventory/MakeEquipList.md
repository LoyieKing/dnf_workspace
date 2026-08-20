# MakeEquipList

`_ZNK10CInventory13MakeEquipListEPvb13ENUM_USERINFO14ENUM_EQUIPSLOT`

`CInventory::MakeEquipList(void*, bool, ENUM_USERINFO, ENUM_EQUIPSLOT) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fe2e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fe2e2  _ZNK10CInventory13MakeEquipListEPvb13ENUM_USERINFO14ENUM_EQUIPSLOT
#           CInventory::MakeEquipList(void*, bool, ENUM_USERINFO, ENUM_EQUIPSLOT) const
# range [0x084fe2e2, 0x084febd8]
084fe2e2 +0x000:  push   %ebp
084fe2e3 +0x001:  mov    %esp,%ebp
084fe2e5 +0x003:  push   %esi
084fe2e6 +0x004:  push   %ebx
084fe2e7 +0x005:  sub    $0x70,%esp
084fe2ea +0x008:  mov    0x10(%ebp),%eax
084fe2ed +0x00b:  mov    %al,-0x5c(%ebp)
084fe2f0 +0x00e:  cmpl   $0x0,0xc(%ebp)
084fe2f4 +0x012:  jne    084fe300 <+0x1e>
084fe2f6 +0x014:  mov    $0x0,%eax
084fe2fb +0x019:  jmp    084febd2 <+0x8f0>
084fe300 +0x01e:  movl   $0x0,-0x40(%ebp)
084fe307 +0x025:  movl   $0x0,-0x38(%ebp)
084fe30e +0x02c:  movl   $0x0,-0x44(%ebp)
084fe315 +0x033:  cmpb   $0x0,-0x5c(%ebp)
084fe319 +0x037:  je     084fe333 <+0x51>
084fe31b +0x039:  cmpl   $0x0,0x18(%ebp)
084fe31f +0x03d:  je     084fe32a <+0x48>
084fe321 +0x03f:  movl   $0xc,-0x40(%ebp)
084fe328 +0x046:  jmp    084fe33a <+0x58>
084fe32a +0x048:  movl   $0x1a,-0x40(%ebp)
084fe331 +0x04f:  jmp    084fe33a <+0x58>
084fe333 +0x051:  movl   $0xc,-0x40(%ebp)
084fe33a +0x058:  mov    0xc(%ebp),%eax
084fe33d +0x05b:  mov    %eax,-0x34(%ebp)
084fe340 +0x05e:  mov    -0x34(%ebp),%eax
084fe343 +0x061:  mov    %eax,(%esp)
084fe346 +0x064:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
084fe34b +0x069:  mov    %eax,-0x44(%ebp)
084fe34e +0x06c:  mov    -0x34(%ebp),%eax
084fe351 +0x06f:  mov    -0x38(%ebp),%edx
084fe354 +0x072:  mov    %edx,0x4(%esp)
084fe358 +0x076:  mov    %eax,(%esp)
084fe35b +0x079:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fe360 +0x07e:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
084fe365 +0x083:  mov    %eax,-0x30(%ebp)
084fe368 +0x086:  movl   $0x0,-0x2c(%ebp)
084fe36f +0x08d:  mov    0x8(%ebp),%eax
084fe372 +0x090:  mov    (%eax),%eax
084fe374 +0x092:  test   %eax,%eax
084fe376 +0x094:  je     084fe390 <+0xae>
084fe378 +0x096:  mov    0x8(%ebp),%eax
084fe37b +0x099:  mov    (%eax),%eax
084fe37d +0x09b:  movl   $0x9,0x4(%esp)
084fe385 +0x0a3:  mov    %eax,(%esp)
084fe388 +0x0a6:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084fe38d +0x0ab:  mov    %eax,-0x2c(%ebp)
084fe390 +0x0ae:  cmpl   $0x2,0x14(%ebp)
084fe394 +0x0b2:  je     084fe39c <+0xba>
084fe396 +0x0b4:  cmpl   $0x0,0x18(%ebp)
084fe39a +0x0b8:  jne    084fe3a7 <+0xc5>
084fe39c +0x0ba:  mov    0x8(%ebp),%eax
084fe39f +0x0bd:  add    $0x1c,%eax
084fe3a2 +0x0c0:  mov    %eax,-0x28(%ebp)
084fe3a5 +0x0c3:  jmp    084fe3bc <+0xda>
084fe3a7 +0x0c5:  mov    0x18(%ebp),%eax
084fe3aa +0x0c8:  mov    %eax,0x4(%esp)
084fe3ae +0x0cc:  mov    -0x2c(%ebp),%eax
084fe3b1 +0x0cf:  mov    %eax,(%esp)
084fe3b4 +0x0d2:  call   084993e2 <_ZN16CExpandEquipslot19getExpandEquipslotWE14ENUM_EQUIPSLOT>  ; CExpandEquipslot::getExpandEquipslotW(ENUM_EQUIPSLOT)
084fe3b9 +0x0d7:  mov    %eax,-0x28(%ebp)
084fe3bc +0x0da:  movl   $0x0,-0x3c(%ebp)
084fe3c3 +0x0e1:  jmp    084feb2c <+0x84a>
084fe3c8 +0x0e6:  cmpl   $0x0,0x18(%ebp)
084fe3cc +0x0ea:  jne    084fe3d6 <+0xf4>
084fe3ce +0x0ec:  mov    -0x3c(%ebp),%eax
084fe3d1 +0x0ef:  mov    %eax,-0x24(%ebp)
084fe3d4 +0x0f2:  jmp    084fe3df <+0xfd>
084fe3d6 +0x0f4:  mov    -0x3c(%ebp),%eax
084fe3d9 +0x0f7:  add    $0xa,%eax
084fe3dc +0x0fa:  mov    %eax,-0x24(%ebp)
084fe3df +0x0fd:  mov    -0x3c(%ebp),%eax
084fe3e2 +0x100:  imul   $0x3d,%eax,%eax
084fe3e5 +0x103:  add    -0x28(%ebp),%eax
084fe3e8 +0x106:  mov    0x2(%eax),%eax
084fe3eb +0x109:  test   %eax,%eax
084fe3ed +0x10b:  je     084feb28 <+0x846>
084fe3f3 +0x111:  cmpb   $0x0,-0x5c(%ebp)
084fe3f7 +0x115:  je     084fe564 <+0x282>
084fe3fd +0x11b:  mov    -0x34(%ebp),%eax
084fe400 +0x11e:  mov    -0x24(%ebp),%edx
084fe403 +0x121:  mov    %edx,0x4(%esp)
084fe407 +0x125:  mov    %eax,(%esp)
084fe40a +0x128:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fe40f +0x12d:  mov    -0x3c(%ebp),%eax
084fe412 +0x130:  imul   $0x3d,%eax,%eax
084fe415 +0x133:  add    -0x28(%ebp),%eax
084fe418 +0x136:  mov    0x2(%eax),%eax
084fe41b +0x139:  mov    %eax,%edx
084fe41d +0x13b:  mov    -0x34(%ebp),%eax
084fe420 +0x13e:  mov    %edx,0x4(%esp)
084fe424 +0x142:  mov    %eax,(%esp)
084fe427 +0x145:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe42c +0x14a:  cmpl   $0x9,-0x24(%ebp)
084fe430 +0x14e:  jg     084fe46b <+0x189>
084fe432 +0x150:  mov    -0x3c(%ebp),%eax
084fe435 +0x153:  imul   $0x3d,%eax,%eax
084fe438 +0x156:  add    -0x28(%ebp),%eax
084fe43b +0x159:  mov    0x7(%eax),%eax
084fe43e +0x15c:  mov    0x8(%ebp),%edx
084fe441 +0x15f:  lea    0x734(%edx),%ecx
084fe447 +0x165:  mov    -0x30(%ebp),%edx
084fe44a +0x168:  mov    %edx,0x8(%esp)
084fe44e +0x16c:  mov    %eax,0x4(%esp)
084fe452 +0x170:  mov    %ecx,(%esp)
084fe455 +0x173:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
084fe45a +0x178:  mov    -0x34(%ebp),%edx
084fe45d +0x17b:  mov    %eax,0x4(%esp)
084fe461 +0x17f:  mov    %edx,(%esp)
084fe464 +0x182:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe469 +0x187:  jmp    084fe486 <+0x1a4>
084fe46b +0x189:  mov    -0x3c(%ebp),%eax
084fe46e +0x18c:  imul   $0x3d,%eax,%eax
084fe471 +0x18f:  add    -0x28(%ebp),%eax
084fe474 +0x192:  mov    0x7(%eax),%edx
084fe477 +0x195:  mov    -0x34(%ebp),%eax
084fe47a +0x198:  mov    %edx,0x4(%esp)
084fe47e +0x19c:  mov    %eax,(%esp)
084fe481 +0x19f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe486 +0x1a4:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084fe48b +0x1a9:  mov    %eax,(%esp)
084fe48e +0x1ac:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084fe493 +0x1b1:  test   %al,%al
084fe495 +0x1b3:  je     084fe4af <+0x1cd>
084fe497 +0x1b5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084fe49c +0x1ba:  mov    %eax,(%esp)
084fe49f +0x1bd:  call   084e930a <_GLOBAL__I__Z7getUserj+0x2bc>  ; global constructors keyed to getUser(unsigned int)+0x2bc
084fe4a4 +0x1c2:  test   %eax,%eax
084fe4a6 +0x1c4:  jne    084fe4af <+0x1cd>
084fe4a8 +0x1c6:  mov    $0x1,%eax
084fe4ad +0x1cb:  jmp    084fe4b4 <+0x1d2>
084fe4af +0x1cd:  mov    $0x0,%eax
084fe4b4 +0x1d2:  test   %al,%al
084fe4b6 +0x1d4:  je     084fe51d <+0x23b>
084fe4b8 +0x1d6:  movb   $0x0,-0x1d(%ebp)
084fe4bc +0x1da:  cmpl   $0x15,-0x24(%ebp)
084fe4c0 +0x1de:  ja     084fe4f4 <+0x212>
084fe4c2 +0x1e0:  mov    -0x24(%ebp),%eax
084fe4c5 +0x1e3:  mov    $0x1,%edx
084fe4ca +0x1e8:  mov    %edx,%ebx
084fe4cc +0x1ea:  mov    %eax,%ecx
084fe4ce +0x1ec:  shl    %cl,%ebx
084fe4d0 +0x1ee:  mov    %ebx,%eax
084fe4d2 +0x1f0:  and    $0x3ff400,%eax
084fe4d7 +0x1f5:  test   %eax,%eax
084fe4d9 +0x1f7:  je     084fe4f4 <+0x212>
084fe4db +0x1f9:  mov    -0x3c(%ebp),%eax
084fe4de +0x1fc:  imul   $0x3d,%eax,%eax
084fe4e1 +0x1ff:  add    -0x28(%ebp),%eax
084fe4e4 +0x202:  mov    %eax,(%esp)
084fe4e7 +0x205:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
084fe4ec +0x20a:  shl    $0x5,%eax
084fe4ef +0x20d:  mov    %al,-0x1d(%ebp)
084fe4f2 +0x210:  jmp    084fe508 <+0x226>
084fe4f4 +0x212:  mov    -0x3c(%ebp),%eax
084fe4f7 +0x215:  imul   $0x3d,%eax,%eax
084fe4fa +0x218:  add    -0x28(%ebp),%eax
084fe4fd +0x21b:  mov    %eax,(%esp)
084fe500 +0x21e:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
084fe505 +0x223:  mov    %al,-0x1d(%ebp)
084fe508 +0x226:  movzbl -0x1d(%ebp),%edx
084fe50c +0x22a:  mov    -0x34(%ebp),%eax
084fe50f +0x22d:  mov    %edx,0x4(%esp)
084fe513 +0x231:  mov    %eax,(%esp)
084fe516 +0x234:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fe51b +0x239:  jmp    084fe540 <+0x25e>
084fe51d +0x23b:  mov    -0x3c(%ebp),%eax
084fe520 +0x23e:  imul   $0x3d,%eax,%eax
084fe523 +0x241:  add    -0x28(%ebp),%eax
084fe526 +0x244:  mov    %eax,(%esp)
084fe529 +0x247:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
084fe52e +0x24c:  movzbl %al,%edx
084fe531 +0x24f:  mov    -0x34(%ebp),%eax
084fe534 +0x252:  mov    %edx,0x4(%esp)
084fe538 +0x256:  mov    %eax,(%esp)
084fe53b +0x259:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fe540 +0x25e:  mov    -0x3c(%ebp),%eax
084fe543 +0x261:  imul   $0x3d,%eax,%eax
084fe546 +0x264:  add    -0x28(%ebp),%eax
084fe549 +0x267:  movzwl 0xb(%eax),%eax
084fe54d +0x26b:  movzwl %ax,%edx
084fe550 +0x26e:  mov    -0x34(%ebp),%eax
084fe553 +0x271:  mov    %edx,0x4(%esp)
084fe557 +0x275:  mov    %eax,(%esp)
084fe55a +0x278:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fe55f +0x27d:  jmp    084fe856 <+0x574>
084fe564 +0x282:  mov    -0x34(%ebp),%eax
084fe567 +0x285:  mov    -0x24(%ebp),%edx
084fe56a +0x288:  mov    %edx,0x4(%esp)
084fe56e +0x28c:  mov    %eax,(%esp)
084fe571 +0x28f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fe576 +0x294:  cmpl   $0x2,0x14(%ebp)
084fe57a +0x298:  jne    084fe599 <+0x2b7>
084fe57c +0x29a:  mov    -0x24(%ebp),%eax
084fe57f +0x29d:  mov    %eax,0x4(%esp)
084fe583 +0x2a1:  mov    0x8(%ebp),%eax
084fe586 +0x2a4:  mov    %eax,(%esp)
084fe589 +0x2a7:  call   0850d374 <_GLOBAL__I_g_emptySlot+0x2a9>  ; global constructors keyed to g_emptySlot+0x2a9
084fe58e +0x2ac:  test   %eax,%eax
084fe590 +0x2ae:  je     084fe599 <+0x2b7>
084fe592 +0x2b0:  mov    $0x1,%eax
084fe597 +0x2b5:  jmp    084fe59e <+0x2bc>
084fe599 +0x2b7:  mov    $0x0,%eax
084fe59e +0x2bc:  test   %al,%al
084fe5a0 +0x2be:  je     084fe5c5 <+0x2e3>
084fe5a2 +0x2c0:  mov    -0x24(%ebp),%eax
084fe5a5 +0x2c3:  mov    %eax,0x4(%esp)
084fe5a9 +0x2c7:  mov    0x8(%ebp),%eax
084fe5ac +0x2ca:  mov    %eax,(%esp)
084fe5af +0x2cd:  call   0850d374 <_GLOBAL__I_g_emptySlot+0x2a9>  ; global constructors keyed to g_emptySlot+0x2a9
084fe5b4 +0x2d2:  mov    -0x34(%ebp),%edx
084fe5b7 +0x2d5:  mov    %eax,0x4(%esp)
084fe5bb +0x2d9:  mov    %edx,(%esp)
084fe5be +0x2dc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe5c3 +0x2e1:  jmp    084fe5e2 <+0x300>
084fe5c5 +0x2e3:  mov    -0x3c(%ebp),%eax
084fe5c8 +0x2e6:  imul   $0x3d,%eax,%eax
084fe5cb +0x2e9:  add    -0x28(%ebp),%eax
084fe5ce +0x2ec:  mov    0x2(%eax),%eax
084fe5d1 +0x2ef:  mov    %eax,%edx
084fe5d3 +0x2f1:  mov    -0x34(%ebp),%eax
084fe5d6 +0x2f4:  mov    %edx,0x4(%esp)
084fe5da +0x2f8:  mov    %eax,(%esp)
084fe5dd +0x2fb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe5e2 +0x300:  cmpl   $0x2,0x14(%ebp)
084fe5e6 +0x304:  jne    084fe65b <+0x379>
084fe5e8 +0x306:  lea    -0x48(%ebp),%eax
084fe5eb +0x309:  mov    %eax,(%esp)
084fe5ee +0x30c:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
084fe5f3 +0x311:  cmpl   $0x0,-0x3c(%ebp)
084fe5f7 +0x315:  js     084fe629 <+0x347>
084fe5f9 +0x317:  cmpl   $0x9,-0x3c(%ebp)
084fe5fd +0x31b:  jg     084fe629 <+0x347>
084fe5ff +0x31d:  mov    -0x3c(%ebp),%edx
084fe602 +0x320:  mov    0x8(%ebp),%eax
084fe605 +0x323:  add    $0xd0,%edx
084fe60b +0x329:  movzwl 0x8(%eax,%edx,8),%eax
084fe610 +0x32e:  mov    %ax,-0x48(%ebp)
084fe614 +0x332:  mov    -0x3c(%ebp),%edx
084fe617 +0x335:  mov    0x8(%ebp),%eax
084fe61a +0x338:  add    $0xd0,%edx
084fe620 +0x33e:  movzwl 0xa(%eax,%edx,8),%eax
084fe625 +0x343:  mov    %ax,-0x46(%ebp)
084fe629 +0x347:  mov    -0x34(%ebp),%eax
084fe62c +0x34a:  movl   $0x4,0x4(%esp)
084fe634 +0x352:  mov    %eax,(%esp)
084fe637 +0x355:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe63c +0x35a:  lea    -0x48(%ebp),%edx
084fe63f +0x35d:  mov    -0x34(%ebp),%eax
084fe642 +0x360:  movl   $0x4,0x8(%esp)
084fe64a +0x368:  mov    %edx,0x4(%esp)
084fe64e +0x36c:  mov    %eax,(%esp)
084fe651 +0x36f:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
084fe656 +0x374:  jmp    084fe709 <+0x427>
084fe65b +0x379:  cmpl   $0x0,0x14(%ebp)
084fe65f +0x37d:  jne    084fe709 <+0x427>
084fe665 +0x383:  lea    -0x4c(%ebp),%eax
084fe668 +0x386:  mov    %eax,(%esp)
084fe66b +0x389:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
084fe670 +0x38e:  cmpl   $0x0,-0x3c(%ebp)
084fe674 +0x392:  js     084fe6dc <+0x3fa>
084fe676 +0x394:  cmpl   $0x9,-0x3c(%ebp)
084fe67a +0x398:  jg     084fe6dc <+0x3fa>
084fe67c +0x39a:  mov    -0x3c(%ebp),%eax
084fe67f +0x39d:  mov    0x8(%ebp),%edx
084fe682 +0x3a0:  imul   $0x3d,%eax,%eax
084fe685 +0x3a3:  lea    (%edx,%eax,1),%eax
084fe688 +0x3a6:  add    $0x10,%eax
084fe68b +0x3a9:  mov    0xe(%eax),%eax
084fe68e +0x3ac:  test   %eax,%eax
084fe690 +0x3ae:  je     084fe6dc <+0x3fa>
084fe692 +0x3b0:  mov    -0x3c(%ebp),%eax
084fe695 +0x3b3:  mov    0x8(%ebp),%edx
084fe698 +0x3b6:  imul   $0x3d,%eax,%eax
084fe69b +0x3b9:  lea    (%edx,%eax,1),%eax
084fe69e +0x3bc:  add    $0x10,%eax
084fe6a1 +0x3bf:  mov    0x13(%eax),%eax
084fe6a4 +0x3c2:  mov    0x8(%ebp),%edx
084fe6a7 +0x3c5:  add    $0x734,%edx
084fe6ad +0x3cb:  mov    %eax,0x4(%esp)
084fe6b1 +0x3cf:  mov    %edx,(%esp)
084fe6b4 +0x3d2:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
084fe6b9 +0x3d7:  mov    %eax,-0x1c(%ebp)
084fe6bc +0x3da:  cmpl   $0x0,-0x1c(%ebp)
084fe6c0 +0x3de:  je     084fe6dc <+0x3fa>
084fe6c2 +0x3e0:  movl   $0x4,0x8(%esp)
084fe6ca +0x3e8:  mov    -0x1c(%ebp),%eax
084fe6cd +0x3eb:  mov    %eax,0x4(%esp)
084fe6d1 +0x3ef:  lea    -0x4c(%ebp),%eax
084fe6d4 +0x3f2:  mov    %eax,(%esp)
084fe6d7 +0x3f5:  call   0807d8a0 <_init+0x198>
084fe6dc +0x3fa:  mov    -0x34(%ebp),%eax
084fe6df +0x3fd:  movl   $0x4,0x4(%esp)
084fe6e7 +0x405:  mov    %eax,(%esp)
084fe6ea +0x408:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe6ef +0x40d:  lea    -0x4c(%ebp),%edx
084fe6f2 +0x410:  mov    -0x34(%ebp),%eax
084fe6f5 +0x413:  movl   $0x4,0x8(%esp)
084fe6fd +0x41b:  mov    %edx,0x4(%esp)
084fe701 +0x41f:  mov    %eax,(%esp)
084fe704 +0x422:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
084fe709 +0x427:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084fe70e +0x42c:  mov    %eax,(%esp)
084fe711 +0x42f:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084fe716 +0x434:  test   %al,%al
084fe718 +0x436:  je     084fe732 <+0x450>
084fe71a +0x438:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084fe71f +0x43d:  mov    %eax,(%esp)
084fe722 +0x440:  call   084e930a <_GLOBAL__I__Z7getUserj+0x2bc>  ; global constructors keyed to getUser(unsigned int)+0x2bc
084fe727 +0x445:  test   %eax,%eax
084fe729 +0x447:  jne    084fe732 <+0x450>
084fe72b +0x449:  mov    $0x1,%eax
084fe730 +0x44e:  jmp    084fe737 <+0x455>
084fe732 +0x450:  mov    $0x0,%eax
084fe737 +0x455:  test   %al,%al
084fe739 +0x457:  je     084fe7e0 <+0x4fe>
084fe73f +0x45d:  movb   $0x0,-0x17(%ebp)
084fe743 +0x461:  mov    -0x24(%ebp),%eax
084fe746 +0x464:  cmp    $0xa,%eax
084fe749 +0x467:  je     084fe774 <+0x492>
084fe74b +0x469:  cmp    $0xa,%eax
084fe74e +0x46c:  jl     084fe75e <+0x47c>
084fe750 +0x46e:  sub    $0xc,%eax
084fe753 +0x471:  cmp    $0x9,%eax
084fe756 +0x474:  ja     084fe75e <+0x47c>
084fe758 +0x476:  movb   $0x0,-0x17(%ebp)
084fe75c +0x47a:  jmp    084fe775 <+0x493>
084fe75e +0x47c:  mov    -0x3c(%ebp),%eax
084fe761 +0x47f:  imul   $0x3d,%eax,%eax
084fe764 +0x482:  add    -0x28(%ebp),%eax
084fe767 +0x485:  mov    %eax,(%esp)
084fe76a +0x488:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
084fe76f +0x48d:  mov    %al,-0x17(%ebp)
084fe772 +0x490:  jmp    084fe775 <+0x493>
084fe774 +0x492:  nop
084fe775 +0x493:  movb   $0x0,-0x16(%ebp)
084fe779 +0x497:  mov    -0x3c(%ebp),%eax
084fe77c +0x49a:  imul   $0x3d,%eax,%eax
084fe77f +0x49d:  add    -0x28(%ebp),%eax
084fe782 +0x4a0:  add    $0x11,%eax
084fe785 +0x4a3:  mov    %eax,(%esp)
084fe788 +0x4a6:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
084fe78d +0x4ab:  test   %al,%al
084fe78f +0x4ad:  setne  %al
084fe792 +0x4b0:  test   %al,%al
084fe794 +0x4b2:  je     084fe79a <+0x4b8>
084fe796 +0x4b4:  movb   $0x1,-0x16(%ebp)
084fe79a +0x4b8:  movzbl -0x16(%ebp),%eax
084fe79e +0x4bc:  and    $0x1,%eax
084fe7a1 +0x4bf:  mov    %eax,%edx
084fe7a3 +0x4c1:  and    $0x1,%edx
084fe7a6 +0x4c4:  movzbl -0x4d(%ebp),%eax
084fe7aa +0x4c8:  and    $0xfffffffe,%eax
084fe7ad +0x4cb:  or     %edx,%eax
084fe7af +0x4cd:  mov    %al,-0x4d(%ebp)
084fe7b2 +0x4d0:  movzbl -0x17(%ebp),%eax
084fe7b6 +0x4d4:  and    $0x7f,%eax
084fe7b9 +0x4d7:  lea    (%eax,%eax,1),%edx
084fe7bc +0x4da:  movzbl -0x4d(%ebp),%eax
084fe7c0 +0x4de:  and    $0x1,%eax
084fe7c3 +0x4e1:  or     %edx,%eax
084fe7c5 +0x4e3:  mov    %al,-0x4d(%ebp)
084fe7c8 +0x4e6:  movzbl -0x4d(%ebp),%eax
084fe7cc +0x4ea:  movzbl %al,%edx
084fe7cf +0x4ed:  mov    -0x34(%ebp),%eax
084fe7d2 +0x4f0:  mov    %edx,0x4(%esp)
084fe7d6 +0x4f4:  mov    %eax,(%esp)
084fe7d9 +0x4f7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fe7de +0x4fc:  jmp    084fe856 <+0x574>
084fe7e0 +0x4fe:  movb   $0x0,-0x15(%ebp)
084fe7e4 +0x502:  mov    -0x3c(%ebp),%eax
084fe7e7 +0x505:  imul   $0x3d,%eax,%eax
084fe7ea +0x508:  add    -0x28(%ebp),%eax
084fe7ed +0x50b:  add    $0x11,%eax
084fe7f0 +0x50e:  mov    %eax,(%esp)
084fe7f3 +0x511:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
084fe7f8 +0x516:  test   %al,%al
084fe7fa +0x518:  setne  %al
084fe7fd +0x51b:  test   %al,%al
084fe7ff +0x51d:  je     084fe805 <+0x523>
084fe801 +0x51f:  movb   $0x1,-0x15(%ebp)
084fe805 +0x523:  movzbl -0x15(%ebp),%eax
084fe809 +0x527:  and    $0x1,%eax
084fe80c +0x52a:  mov    %eax,%edx
084fe80e +0x52c:  and    $0x1,%edx
084fe811 +0x52f:  movzbl -0x4e(%ebp),%eax
084fe815 +0x533:  and    $0xfffffffe,%eax
084fe818 +0x536:  or     %edx,%eax
084fe81a +0x538:  mov    %al,-0x4e(%ebp)
084fe81d +0x53b:  mov    -0x3c(%ebp),%eax
084fe820 +0x53e:  imul   $0x3d,%eax,%eax
084fe823 +0x541:  add    -0x28(%ebp),%eax
084fe826 +0x544:  mov    %eax,(%esp)
084fe829 +0x547:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
084fe82e +0x54c:  and    $0x7f,%eax
084fe831 +0x54f:  lea    (%eax,%eax,1),%edx
084fe834 +0x552:  movzbl -0x4e(%ebp),%eax
084fe838 +0x556:  and    $0x1,%eax
084fe83b +0x559:  or     %edx,%eax
084fe83d +0x55b:  mov    %al,-0x4e(%ebp)
084fe840 +0x55e:  movzbl -0x4e(%ebp),%eax
084fe844 +0x562:  movzbl %al,%edx
084fe847 +0x565:  mov    -0x34(%ebp),%eax
084fe84a +0x568:  mov    %edx,0x4(%esp)
084fe84e +0x56c:  mov    %eax,(%esp)
084fe851 +0x56f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fe856 +0x574:  mov    -0x24(%ebp),%eax
084fe859 +0x577:  mov    %eax,0x4(%esp)
084fe85d +0x57b:  mov    0x8(%ebp),%eax
084fe860 +0x57e:  mov    %eax,(%esp)
084fe863 +0x581:  call   0850d374 <_GLOBAL__I_g_emptySlot+0x2a9>  ; global constructors keyed to g_emptySlot+0x2a9
084fe868 +0x586:  mov    -0x34(%ebp),%edx
084fe86b +0x589:  mov    %eax,0x4(%esp)
084fe86f +0x58d:  mov    %edx,(%esp)
084fe872 +0x590:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe877 +0x595:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084fe87c +0x59a:  mov    %eax,(%esp)
084fe87f +0x59d:  call   082343fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9aa6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9aa6
084fe884 +0x5a2:  test   %al,%al
084fe886 +0x5a4:  je     084fe89d <+0x5bb>
084fe888 +0x5a6:  mov    -0x34(%ebp),%eax
084fe88b +0x5a9:  movl   $0x0,0x4(%esp)
084fe893 +0x5b1:  mov    %eax,(%esp)
084fe896 +0x5b4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe89b +0x5b9:  jmp    084fe8ba <+0x5d8>
084fe89d +0x5bb:  mov    -0x3c(%ebp),%eax
084fe8a0 +0x5be:  imul   $0x3d,%eax,%eax
084fe8a3 +0x5c1:  add    -0x28(%ebp),%eax
084fe8a6 +0x5c4:  mov    0xd(%eax),%eax
084fe8a9 +0x5c7:  mov    %eax,%edx
084fe8ab +0x5c9:  mov    -0x34(%ebp),%eax
084fe8ae +0x5cc:  mov    %edx,0x4(%esp)
084fe8b2 +0x5d0:  mov    %eax,(%esp)
084fe8b5 +0x5d3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe8ba +0x5d8:  cmpb   $0x0,-0x5c(%ebp)
084fe8be +0x5dc:  je     084feb24 <+0x842>
084fe8c4 +0x5e2:  mov    -0x3c(%ebp),%eax
084fe8c7 +0x5e5:  imul   $0x3d,%eax,%eax
084fe8ca +0x5e8:  add    -0x28(%ebp),%eax
084fe8cd +0x5eb:  add    $0x11,%eax
084fe8d0 +0x5ee:  mov    %eax,(%esp)
084fe8d3 +0x5f1:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
084fe8d8 +0x5f6:  movzbl %al,%edx
084fe8db +0x5f9:  mov    -0x34(%ebp),%eax
084fe8de +0x5fc:  mov    %edx,0x4(%esp)
084fe8e2 +0x600:  mov    %eax,(%esp)
084fe8e5 +0x603:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084fe8ea +0x608:  mov    -0x3c(%ebp),%eax
084fe8ed +0x60b:  imul   $0x3d,%eax,%eax
084fe8f0 +0x60e:  add    -0x28(%ebp),%eax
084fe8f3 +0x611:  add    $0x11,%eax
084fe8f6 +0x614:  mov    %eax,(%esp)
084fe8f9 +0x617:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
084fe8fe +0x61c:  movzwl %ax,%edx
084fe901 +0x61f:  mov    -0x34(%ebp),%eax
084fe904 +0x622:  mov    %edx,0x4(%esp)
084fe908 +0x626:  mov    %eax,(%esp)
084fe90b +0x629:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fe910 +0x62e:  mov    -0x3c(%ebp),%eax
084fe913 +0x631:  imul   $0x3d,%eax,%eax
084fe916 +0x634:  add    -0x28(%ebp),%eax
084fe919 +0x637:  mov    %eax,(%esp)
084fe91c +0x63a:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
084fe921 +0x63f:  test   %al,%al
084fe923 +0x641:  je     084fea7c <+0x79a>
084fe929 +0x647:  mov    -0x34(%ebp),%eax
084fe92c +0x64a:  movl   $0x1e,0x4(%esp)
084fe934 +0x652:  mov    %eax,(%esp)
084fe937 +0x655:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe93c +0x65a:  mov    -0x3c(%ebp),%eax
084fe93f +0x65d:  imul   $0x3d,%eax,%eax
084fe942 +0x660:  add    -0x28(%ebp),%eax
084fe945 +0x663:  mov    0x7(%eax),%eax
084fe948 +0x666:  mov    0x8(%ebp),%edx
084fe94b +0x669:  add    $0x734,%edx
084fe951 +0x66f:  mov    %eax,0x4(%esp)
084fe955 +0x673:  mov    %edx,(%esp)
084fe958 +0x676:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
084fe95d +0x67b:  mov    %eax,%edx
084fe95f +0x67d:  mov    -0x34(%ebp),%eax
084fe962 +0x680:  movl   $0x1e,0x8(%esp)
084fe96a +0x688:  mov    %edx,0x4(%esp)
084fe96e +0x68c:  mov    %eax,(%esp)
084fe971 +0x68f:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
084fe976 +0x694:  mov    -0x34(%ebp),%eax
084fe979 +0x697:  movl   $0x4,0x4(%esp)
084fe981 +0x69f:  mov    %eax,(%esp)
084fe984 +0x6a2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fe989 +0x6a7:  mov    0x8(%ebp),%eax
084fe98c +0x6aa:  mov    (%eax),%eax
084fe98e +0x6ac:  test   %eax,%eax
084fe990 +0x6ae:  je     084fe9ab <+0x6c9>
084fe992 +0x6b0:  mov    0x8(%ebp),%eax
084fe995 +0x6b3:  mov    (%eax),%eax
084fe997 +0x6b5:  mov    %eax,(%esp)
084fe99a +0x6b8:  call   0822f110 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ba
084fe99f +0x6bd:  cmp    0x8(%ebp),%eax
084fe9a2 +0x6c0:  jne    084fe9ab <+0x6c9>
084fe9a4 +0x6c2:  mov    $0x1,%eax
084fe9a9 +0x6c7:  jmp    084fe9b0 <+0x6ce>
084fe9ab +0x6c9:  mov    $0x0,%eax
084fe9b0 +0x6ce:  test   %al,%al
084fe9b2 +0x6d0:  je     084fea11 <+0x72f>
084fe9b4 +0x6d2:  lea    -0x52(%ebp),%eax
084fe9b7 +0x6d5:  mov    %eax,(%esp)
084fe9ba +0x6d8:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
084fe9bf +0x6dd:  cmpl   $0x0,-0x3c(%ebp)
084fe9c3 +0x6e1:  js     084fe9f5 <+0x713>
084fe9c5 +0x6e3:  cmpl   $0x9,-0x3c(%ebp)
084fe9c9 +0x6e7:  jg     084fe9f5 <+0x713>
084fe9cb +0x6e9:  mov    -0x3c(%ebp),%edx
084fe9ce +0x6ec:  mov    0x8(%ebp),%eax
084fe9d1 +0x6ef:  add    $0xd0,%edx
084fe9d7 +0x6f5:  movzwl 0x8(%eax,%edx,8),%eax
084fe9dc +0x6fa:  mov    %ax,-0x52(%ebp)
084fe9e0 +0x6fe:  mov    -0x3c(%ebp),%edx
084fe9e3 +0x701:  mov    0x8(%ebp),%eax
084fe9e6 +0x704:  add    $0xd0,%edx
084fe9ec +0x70a:  movzwl 0xa(%eax,%edx,8),%eax
084fe9f1 +0x70f:  mov    %ax,-0x50(%ebp)
084fe9f5 +0x713:  lea    -0x52(%ebp),%edx
084fe9f8 +0x716:  mov    -0x34(%ebp),%eax
084fe9fb +0x719:  movl   $0x4,0x8(%esp)
084fea03 +0x721:  mov    %edx,0x4(%esp)
084fea07 +0x725:  mov    %eax,(%esp)
084fea0a +0x728:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
084fea0f +0x72d:  jmp    084fea7c <+0x79a>
084fea11 +0x72f:  mov    -0x3c(%ebp),%eax
084fea14 +0x732:  imul   $0x3d,%eax,%eax
084fea17 +0x735:  add    -0x28(%ebp),%eax
084fea1a +0x738:  mov    0x7(%eax),%eax
084fea1d +0x73b:  mov    0x8(%ebp),%edx
084fea20 +0x73e:  add    $0x734,%edx
084fea26 +0x744:  mov    %eax,0x4(%esp)
084fea2a +0x748:  mov    %edx,(%esp)
084fea2d +0x74b:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
084fea32 +0x750:  mov    %eax,-0x14(%ebp)
084fea35 +0x753:  cmpl   $0x0,-0x14(%ebp)
084fea39 +0x757:  je     084fea57 <+0x775>
084fea3b +0x759:  mov    -0x14(%ebp),%edx
084fea3e +0x75c:  mov    -0x34(%ebp),%eax
084fea41 +0x75f:  movl   $0x4,0x8(%esp)
084fea49 +0x767:  mov    %edx,0x4(%esp)
084fea4d +0x76b:  mov    %eax,(%esp)
084fea50 +0x76e:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
084fea55 +0x773:  jmp    084fea7c <+0x79a>
084fea57 +0x775:  lea    -0x56(%ebp),%eax
084fea5a +0x778:  mov    %eax,(%esp)
084fea5d +0x77b:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
084fea62 +0x780:  lea    -0x56(%ebp),%edx
084fea65 +0x783:  mov    -0x34(%ebp),%eax
084fea68 +0x786:  movl   $0x4,0x8(%esp)
084fea70 +0x78e:  mov    %edx,0x4(%esp)
084fea74 +0x792:  mov    %eax,(%esp)
084fea77 +0x795:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
084fea7c +0x79a:  mov    -0x3c(%ebp),%eax
084fea7f +0x79d:  imul   $0x3d,%eax,%eax
084fea82 +0x7a0:  add    -0x28(%ebp),%eax
084fea85 +0x7a3:  movzbl 0x1(%eax),%eax
084fea89 +0x7a7:  cmp    $0x5,%al
084fea8b +0x7a9:  jne    084feadb <+0x7f9>
084fea8d +0x7ab:  movl   $0x0,-0x10(%ebp)
084fea94 +0x7b2:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
084fea99 +0x7b7:  mov    %eax,-0x10(%ebp)
084fea9c +0x7ba:  mov    -0x3c(%ebp),%eax
084fea9f +0x7bd:  imul   $0x3d,%eax,%eax
084feaa2 +0x7c0:  add    -0x28(%ebp),%eax
084feaa5 +0x7c3:  mov    0x7(%eax),%ebx
084feaa8 +0x7c6:  mov    0x8(%ebp),%eax
084feaab +0x7c9:  mov    %eax,(%esp)
084feaae +0x7cc:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
084feab3 +0x7d1:  mov    -0x10(%ebp),%edx
084feab6 +0x7d4:  mov    %edx,0x8(%esp)
084feaba +0x7d8:  mov    %ebx,0x4(%esp)
084feabe +0x7dc:  mov    %eax,(%esp)
084feac1 +0x7df:  call   0833d78e <_ZNK13user_creature12CCreatureMgr13GetRemainDateEii>  ; user_creature::CCreatureMgr::GetRemainDate(int, int) const
084feac6 +0x7e4:  mov    %eax,-0xc(%ebp)
084feac9 +0x7e7:  mov    -0x34(%ebp),%eax
084feacc +0x7ea:  mov    -0xc(%ebp),%edx
084feacf +0x7ed:  mov    %edx,0x4(%esp)
084fead3 +0x7f1:  mov    %eax,(%esp)
084fead6 +0x7f4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084feadb +0x7f9:  mov    -0x3c(%ebp),%eax
084feade +0x7fc:  imul   $0x3d,%eax,%eax
084feae1 +0x7ff:  mov    %eax,%esi
084feae3 +0x801:  add    -0x28(%ebp),%esi
084feae6 +0x804:  mov    0x8(%ebp),%eax
084feae9 +0x807:  mov    (%eax),%ebx
084feaeb +0x809:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084feaf0 +0x80e:  mov    0x20(%eax),%eax
084feaf3 +0x811:  mov    -0x34(%ebp),%edx
084feaf6 +0x814:  mov    %edx,0xc(%esp)
084feafa +0x818:  mov    %esi,0x8(%esp)
084feafe +0x81c:  mov    %ebx,0x4(%esp)
084feb02 +0x820:  mov    %eax,(%esp)
084feb05 +0x823:  call   0854a9aa <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard>  ; WongWork::CItemUpgrade::make3rdChroniclePacket(CUser*, Inven_Item const&, PacketGuard*)
084feb0a +0x828:  mov    -0x3c(%ebp),%eax
084feb0d +0x82b:  imul   $0x3d,%eax,%eax
084feb10 +0x82e:  mov    %eax,%edx
084feb12 +0x830:  add    -0x28(%ebp),%edx
084feb15 +0x833:  mov    -0x34(%ebp),%eax
084feb18 +0x836:  mov    %edx,0x4(%esp)
084feb1c +0x83a:  mov    %eax,(%esp)
084feb1f +0x83d:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084feb24 +0x842:  addl   $0x1,-0x38(%ebp)
084feb28 +0x846:  addl   $0x1,-0x3c(%ebp)
084feb2c +0x84a:  mov    -0x3c(%ebp),%eax
084feb2f +0x84d:  cmp    -0x40(%ebp),%eax
084feb32 +0x850:  setl   %al
084feb35 +0x853:  test   %al,%al
084feb37 +0x855:  jne    084fe3c8 <+0xe6>
084feb3d +0x85b:  mov    -0x34(%ebp),%eax
084feb40 +0x85e:  mov    -0x38(%ebp),%edx
084feb43 +0x861:  mov    %edx,0x8(%esp)
084feb47 +0x865:  lea    -0x44(%ebp),%edx
084feb4a +0x868:  mov    %edx,0x4(%esp)
084feb4e +0x86c:  mov    %eax,(%esp)
084feb51 +0x86f:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
084feb56 +0x874:  movzbl -0x5c(%ebp),%eax
084feb5a +0x878:  xor    $0x1,%eax
084feb5d +0x87b:  test   %al,%al
084feb5f +0x87d:  je     084febcd <+0x8eb>
084feb61 +0x87f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084feb66 +0x884:  mov    %eax,(%esp)
084feb69 +0x887:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084feb6e +0x88c:  test   %al,%al
084feb70 +0x88e:  je     084feb8a <+0x8a8>
084feb72 +0x890:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084feb77 +0x895:  mov    %eax,(%esp)
084feb7a +0x898:  call   084e930a <_GLOBAL__I__Z7getUserj+0x2bc>  ; global constructors keyed to getUser(unsigned int)+0x2bc
084feb7f +0x89d:  test   %eax,%eax
084feb81 +0x89f:  jne    084feb8a <+0x8a8>
084feb83 +0x8a1:  mov    $0x1,%eax
084feb88 +0x8a6:  jmp    084feb8f <+0x8ad>
084feb8a +0x8a8:  mov    $0x0,%eax
084feb8f +0x8ad:  test   %al,%al
084feb91 +0x8af:  je     084feba8 <+0x8c6>
084feb93 +0x8b1:  mov    -0x34(%ebp),%eax
084feb96 +0x8b4:  movl   $0x0,0x4(%esp)
084feb9e +0x8bc:  mov    %eax,(%esp)
084feba1 +0x8bf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084feba6 +0x8c4:  jmp    084febcd <+0x8eb>
084feba8 +0x8c6:  mov    -0x28(%ebp),%eax
084febab +0x8c9:  add    $0x262,%eax
084febb0 +0x8ce:  add    $0x33,%eax
084febb3 +0x8d1:  mov    %eax,(%esp)
084febb6 +0x8d4:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
084febbb +0x8d9:  movzbl %al,%edx
084febbe +0x8dc:  mov    -0x34(%ebp),%eax
084febc1 +0x8df:  mov    %edx,0x4(%esp)
084febc5 +0x8e3:  mov    %eax,(%esp)
084febc8 +0x8e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084febcd +0x8eb:  mov    $0x1,%eax
084febd2 +0x8f0:  add    $0x70,%esp
084febd5 +0x8f3:  pop    %ebx
084febd6 +0x8f4:  pop    %esi
084febd7 +0x8f5:  pop    %ebp
084febd8 +0x8f6:  ret
```

## 反编译 C

```c
// CInventory::MakeEquipList @ 0x84fe2e2

/* CInventory::MakeEquipList(void*, bool, ENUM_USERINFO, ENUM_EQUIPSLOT) const */

undefined4 __thiscall
CInventory::MakeEquipList
          (CInventory *this,InterfacePacketBuf *param_1,char param_2,int param_4,int param_5)

{
  CUser *pCVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  CInventory *pCVar5;
  CCreatureMgr *this_00;
  GameWorld *pGVar6;
  CDataManager *pCVar7;
  int iVar8;
  uint uVar9;
  Inven_Item *pIVar10;
  stAvatarExpansionInfo_t local_5a [4];
  undefined2 local_56;
  undefined2 local_54;
  byte local_52;
  byte local_51;
  stAvatarExpansionInfo_t local_50 [4];
  undefined2 local_4c;
  undefined2 local_4a;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  InterfacePacketBuf *local_38;
  int local_34;
  CExpandEquipslot *local_30;
  CInventory *local_2c;
  uint local_28;
  byte local_21;
  void *local_20;
  char local_1b;
  byte local_1a;
  byte local_19;
  char *local_18;
  int local_14;
  int local_10;
  
  if (param_1 == (InterfacePacketBuf *)0x0) {
    return 0;
  }
  local_3c = 0;
  local_48 = 0;
  if (param_2 == '\0') {
    local_44 = 0xc;
  }
  else if (param_5 == 0) {
    local_44 = 0x1a;
  }
  else {
    local_44 = 0xc;
  }
  local_38 = param_1;
  local_48 = InterfacePacketBuf::get_index(param_1);
  InterfacePacketBuf::put_byte(local_38,local_3c);
  local_34 = OS_API::GetDateTimeTick();
  local_30 = (CExpandEquipslot *)0x0;
  if (*(int *)this != 0) {
    local_30 = (CExpandEquipslot *)CUser::GetCharacExpandData(*(CUser **)this,9);
  }
  if ((param_4 == 2) || (param_5 == 0)) {
    local_2c = this + 0x1c;
  }
  else {
    local_2c = (CInventory *)CExpandEquipslot::getExpandEquipslotW(local_30,param_5);
  }
  for (local_40 = 0; (int)local_40 < local_44; local_40 = local_40 + 1) {
    if (param_5 == 0) {
      local_28 = local_40;
    }
    else {
      local_28 = local_40 + 10;
    }
    if (*(int *)(local_2c + local_40 * 0x3d + 2) != 0) {
      if (param_2 == '\0') {
        InterfacePacketBuf::put_byte(local_38,local_28);
        if ((param_4 == 2) && (iVar8 = GetClearAvatar(this,local_28), iVar8 != 0)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          iVar8 = GetClearAvatar(this,local_28);
          InterfacePacketBuf::put_int(local_38,iVar8);
        }
        else {
          InterfacePacketBuf::put_int(local_38,*(int *)(local_2c + local_40 * 0x3d + 2));
        }
        if (param_4 == 2) {
          stAvatarExpansionInfo_t::init((stAvatarExpansionInfo_t *)&local_4c);
          if ((-1 < (int)local_40) && ((int)local_40 < 10)) {
            local_4c = *(undefined2 *)(this + (local_40 + 0xd0) * 8 + 8);
            local_4a = *(undefined2 *)(this + (local_40 + 0xd0) * 8 + 10);
          }
          InterfacePacketBuf::put_int(local_38,4);
          InterfacePacketBuf::put_binary(local_38,(char *)&local_4c,4);
        }
        else if (param_4 == 0) {
          stAvatarExpansionInfo_t::init(local_50);
          if ((((-1 < (int)local_40) && ((int)local_40 < 10)) &&
              (*(int *)(this + local_40 * 0x3d + 0x1e) != 0)) &&
             (local_20 = (void *)WongWork::CAvatarItemMgr::GetExpansionInfo
                                           ((CAvatarItemMgr *)(this + 0x734),
                                            *(int *)(this + local_40 * 0x3d + 0x23)),
             local_20 != (void *)0x0)) {
            memcpy(local_50,local_20,4);
          }
          InterfacePacketBuf::put_int(local_38,4);
          InterfacePacketBuf::put_binary(local_38,(char *)local_50,4);
        }
        pGVar6 = (GameWorld *)G_GameWorld();
        cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar6);
        if (cVar3 == '\0') {
LAB_084fe732:
          bVar2 = false;
        }
        else {
          pCVar7 = (CDataManager *)G_CDataManager();
          iVar8 = CDataManager::GetUpgradeRevisionPvPChannel(pCVar7);
          if (iVar8 != 0) goto LAB_084fe732;
          bVar2 = true;
        }
        if (bVar2) {
          local_1b = '\0';
          if (local_28 != 10) {
            if (((int)local_28 < 10) || (9 < local_28 - 0xc)) {
              local_1b = Inven_Item::GetUpgrade((Inven_Item *)(local_2c + local_40 * 0x3d));
            }
            else {
              local_1b = '\0';
            }
          }
          local_1a = 0;
          cVar3 = stAmplifyOption_t::getAbilityType
                            ((stAmplifyOption_t *)(local_2c + local_40 * 0x3d + 0x11));
          if (cVar3 != '\0') {
            local_1a = 1;
          }
          local_51 = local_1a & 1 | local_1b * '\x02';
          InterfacePacketBuf::put_byte(local_38,(uint)local_51);
        }
        else {
          local_19 = 0;
          cVar3 = stAmplifyOption_t::getAbilityType
                            ((stAmplifyOption_t *)(local_2c + local_40 * 0x3d + 0x11));
          if (cVar3 != '\0') {
            local_19 = 1;
          }
          local_52 = local_52 & 0xfe | local_19 & 1;
          cVar3 = Inven_Item::GetUpgrade((Inven_Item *)(local_2c + local_40 * 0x3d));
          local_52 = local_52 & 1 | cVar3 * '\x02';
          InterfacePacketBuf::put_byte(local_38,(uint)local_52);
        }
      }
      else {
        InterfacePacketBuf::put_byte(local_38,local_28);
        InterfacePacketBuf::put_int(local_38,*(int *)(local_2c + local_40 * 0x3d + 2));
        if ((int)local_28 < 10) {
          iVar8 = WongWork::CAvatarItemMgr::GetRemainDate
                            ((CAvatarItemMgr *)(this + 0x734),
                             *(int *)(local_2c + local_40 * 0x3d + 7),local_34);
          InterfacePacketBuf::put_int(local_38,iVar8);
        }
        else {
          InterfacePacketBuf::put_int(local_38,*(int *)(local_2c + local_40 * 0x3d + 7));
        }
        pGVar6 = (GameWorld *)G_GameWorld();
        cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar6);
        if (cVar3 == '\0') {
LAB_084fe4af:
          bVar2 = false;
        }
        else {
          pCVar7 = (CDataManager *)G_CDataManager();
          iVar8 = CDataManager::GetUpgradeRevisionPvPChannel(pCVar7);
          if (iVar8 != 0) goto LAB_084fe4af;
          bVar2 = true;
        }
        if (bVar2) {
          local_21 = 0;
          if ((local_28 < 0x16) && ((1 << ((byte)local_28 & 0x1f) & 0x3ff400U) != 0)) {
            cVar3 = Inven_Item::GetReSealCount((Inven_Item *)(local_2c + local_40 * 0x3d));
            local_21 = cVar3 << 5;
          }
          else {
            local_21 = Inven_Item::GetItemAttr((Inven_Item *)(local_2c + local_40 * 0x3d));
          }
          InterfacePacketBuf::put_byte(local_38,(uint)local_21);
        }
        else {
          uVar9 = Inven_Item::GetItemAttr((Inven_Item *)(local_2c + local_40 * 0x3d));
          InterfacePacketBuf::put_byte(local_38,uVar9 & 0xff);
        }
        InterfacePacketBuf::put_short(local_38,(uint)*(ushort *)(local_2c + local_40 * 0x3d + 0xb));
      }
      iVar8 = GetClearAvatar(this,local_28);
      InterfacePacketBuf::put_int(local_38,iVar8);
      pGVar6 = (GameWorld *)G_GameWorld();
      cVar3 = GameWorld::IsEnchantRevisionChannel(pGVar6);
      if (cVar3 == '\0') {
        InterfacePacketBuf::put_int(local_38,*(int *)(local_2c + local_40 * 0x3d + 0xd));
      }
      else {
        InterfacePacketBuf::put_int(local_38,0);
      }
      if (param_2 != '\0') {
        uVar9 = stAmplifyOption_t::getAbilityType
                          ((stAmplifyOption_t *)(local_2c + local_40 * 0x3d + 0x11));
        InterfacePacketBuf::put_byte(local_38,uVar9 & 0xff);
        uVar9 = stAmplifyOption_t::getAbilityValue
                          ((stAmplifyOption_t *)(local_2c + local_40 * 0x3d + 0x11));
        InterfacePacketBuf::put_short(local_38,uVar9 & 0xffff);
        cVar3 = Inven_Item::isAvatarItemType((Inven_Item *)(local_2c + local_40 * 0x3d));
        if (cVar3 != '\0') {
          InterfacePacketBuf::put_int(local_38,0x1e);
          pcVar4 = (char *)WongWork::CAvatarItemMgr::getJewelSocketData
                                     ((CAvatarItemMgr *)(this + 0x734),
                                      *(int *)(local_2c + local_40 * 0x3d + 7));
          InterfacePacketBuf::put_binary(local_38,pcVar4,0x1e);
          InterfacePacketBuf::put_int(local_38,4);
          if ((*(int *)this == 0) ||
             (pCVar5 = (CInventory *)CUserCharacInfo::getTagCharacInvenR(*(CUserCharacInfo **)this),
             pCVar5 != this)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            stAvatarExpansionInfo_t::init((stAvatarExpansionInfo_t *)&local_56);
            if ((-1 < (int)local_40) && ((int)local_40 < 10)) {
              local_56 = *(undefined2 *)(this + (local_40 + 0xd0) * 8 + 8);
              local_54 = *(undefined2 *)(this + (local_40 + 0xd0) * 8 + 10);
            }
            InterfacePacketBuf::put_binary(local_38,(char *)&local_56,4);
          }
          else {
            local_18 = (char *)WongWork::CAvatarItemMgr::GetExpansionInfo
                                         ((CAvatarItemMgr *)(this + 0x734),
                                          *(int *)(local_2c + local_40 * 0x3d + 7));
            if (local_18 == (char *)0x0) {
              stAvatarExpansionInfo_t::init(local_5a);
              InterfacePacketBuf::put_binary(local_38,(char *)local_5a,4);
            }
            else {
              InterfacePacketBuf::put_binary(local_38,local_18,4);
            }
          }
        }
        if (local_2c[local_40 * 0x3d + 1] == (CInventory)0x5) {
          local_14 = 0;
          local_14 = OS_API::GetDateTimeTick();
          iVar8 = *(int *)(local_2c + local_40 * 0x3d + 7);
          this_00 = (CCreatureMgr *)GetCreatureMgrR(this);
          local_10 = user_creature::CCreatureMgr::GetRemainDate(this_00,iVar8,local_14);
          InterfacePacketBuf::put_int(local_38,local_10);
        }
        pIVar10 = (Inven_Item *)(local_2c + local_40 * 0x3d);
        pCVar1 = *(CUser **)this;
        iVar8 = G_CDataManager();
        WongWork::CItemUpgrade::make3rdChroniclePacket
                  (*(CItemUpgrade **)(iVar8 + 0x20),pCVar1,pIVar10,(PacketGuard *)local_38);
        InterfacePacketBuf::put_packet(local_38,(Inven_Item *)(local_2c + local_40 * 0x3d));
      }
      local_3c = local_3c + 1;
    }
  }
  InterfacePacketBuf::put_byte(local_38,&local_48,local_3c);
  if (param_2 == '\x01') {
    return 1;
  }
  pGVar6 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar6);
  if (cVar3 != '\0') {
    pCVar7 = (CDataManager *)G_CDataManager();
    iVar8 = CDataManager::GetUpgradeRevisionPvPChannel(pCVar7);
    if (iVar8 == 0) {
      bVar2 = true;
      goto LAB_084feb8f;
    }
  }
  bVar2 = false;
LAB_084feb8f:
  if (bVar2) {
    InterfacePacketBuf::put_byte(local_38,0);
  }
  else {
    uVar9 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(local_2c + 0x295));
    InterfacePacketBuf::put_byte(local_38,uVar9 & 0xff);
  }
  return 1;
}
```
