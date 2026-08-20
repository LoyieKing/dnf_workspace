# handlePickupItem

`_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc`

`WongWork::CDeathTower::handlePickupItem(CUser*, int, bool, char)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08464036` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08464036  _ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc
#           WongWork::CDeathTower::handlePickupItem(CUser*, int, bool, char)
# range [0x08464036, 0x0846466d]
08464036 +0x000:  push   %ebp
08464037 +0x001:  mov    %esp,%ebp
08464039 +0x003:  push   %esi
0846403a +0x004:  push   %ebx
0846403b +0x005:  sub    $0x110,%esp
08464041 +0x00b:  mov    0x14(%ebp),%edx
08464044 +0x00e:  mov    0x18(%ebp),%eax
08464047 +0x011:  mov    %dl,-0xbc(%ebp)
0846404d +0x017:  mov    %al,-0xc0(%ebp)
08464053 +0x01d:  lea    -0xb8(%ebp),%eax
08464059 +0x023:  mov    %eax,(%esp)
0846405c +0x026:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
08464061 +0x02b:  lea    -0x28(%ebp),%eax
08464064 +0x02e:  mov    %eax,(%esp)
08464067 +0x031:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
0846406c +0x036:  mov    0x8(%ebp),%eax
0846406f +0x039:  lea    0x14(%eax),%edx
08464072 +0x03c:  lea    -0xb8(%ebp),%eax
08464078 +0x042:  mov    %eax,0x8(%esp)
0846407c +0x046:  mov    0x10(%ebp),%eax
0846407f +0x049:  mov    %eax,0x4(%esp)
08464083 +0x04d:  mov    %edx,(%esp)
08464086 +0x050:  call   08461534 <_ZN8WongWork11CDeathTower6CStage8peekItemEiR8map_item>  ; WongWork::CDeathTower::CStage::peekItem(int, map_item&)
0846408b +0x055:  xor    $0x1,%eax
0846408e +0x058:  test   %al,%al
08464090 +0x05a:  je     084640ef <+0xb9>
08464092 +0x05c:  cmpb   $0x3,-0xc0(%ebp)
08464099 +0x063:  jle    084640b8 <+0x82>
0846409b +0x065:  movl   $0x51,0x8(%esp)
084640a3 +0x06d:  movl   $0x2e,0x4(%esp)
084640ab +0x075:  lea    -0x28(%ebp),%eax
084640ae +0x078:  mov    %eax,(%esp)
084640b1 +0x07b:  call   0845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>  ; WongWork::CDeathTower::CPacketHandler::makeCommonError(ENUM_CMDPACKET, ENUM_ERROR)
084640b6 +0x080:  jmp    084640d3 <+0x9d>
084640b8 +0x082:  movl   $0x15,0x8(%esp)
084640c0 +0x08a:  movl   $0x2e,0x4(%esp)
084640c8 +0x092:  lea    -0x28(%ebp),%eax
084640cb +0x095:  mov    %eax,(%esp)
084640ce +0x098:  call   0845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>  ; WongWork::CDeathTower::CPacketHandler::makeCommonError(ENUM_CMDPACKET, ENUM_ERROR)
084640d3 +0x09d:  lea    -0x28(%ebp),%eax
084640d6 +0x0a0:  mov    %eax,0x4(%esp)
084640da +0x0a4:  mov    0xc(%ebp),%eax
084640dd +0x0a7:  mov    %eax,(%esp)
084640e0 +0x0aa:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084640e5 +0x0af:  mov    $0x0,%ebx
084640ea +0x0b4:  jmp    08464657 <+0x621>
084640ef +0x0b9:  mov    0x8(%ebp),%eax
084640f2 +0x0bc:  mov    (%eax),%eax
084640f4 +0x0be:  mov    %eax,(%esp)
084640f7 +0x0c1:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
084640fc +0x0c6:  mov    %eax,-0x1c(%ebp)
084640ff +0x0c9:  cmpl   $0x0,-0x1c(%ebp)
08464103 +0x0cd:  jg     0846413c <+0x106>
08464105 +0x0cf:  movl   $0x15,0x8(%esp)
0846410d +0x0d7:  movl   $0x2e,0x4(%esp)
08464115 +0x0df:  lea    -0x28(%ebp),%eax
08464118 +0x0e2:  mov    %eax,(%esp)
0846411b +0x0e5:  call   0845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>  ; WongWork::CDeathTower::CPacketHandler::makeCommonError(ENUM_CMDPACKET, ENUM_ERROR)
08464120 +0x0ea:  lea    -0x28(%ebp),%eax
08464123 +0x0ed:  mov    %eax,0x4(%esp)
08464127 +0x0f1:  mov    0xc(%ebp),%eax
0846412a +0x0f4:  mov    %eax,(%esp)
0846412d +0x0f7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08464132 +0x0fc:  mov    $0x0,%ebx
08464137 +0x101:  jmp    08464657 <+0x621>
0846413c +0x106:  mov    -0xa6(%ebp),%eax
08464142 +0x10c:  test   %eax,%eax
08464144 +0x10e:  jne    0846425e <+0x228>
0846414a +0x114:  mov    0x8(%ebp),%eax
0846414d +0x117:  lea    0x14(%eax),%edx
08464150 +0x11a:  lea    -0xb8(%ebp),%eax
08464156 +0x120:  mov    %eax,0x8(%esp)
0846415a +0x124:  mov    0x10(%ebp),%eax
0846415d +0x127:  mov    %eax,0x4(%esp)
08464161 +0x12b:  mov    %edx,(%esp)
08464164 +0x12e:  call   084615e4 <_ZN8WongWork11CDeathTower6CStage10pickupItemEiR8map_item>  ; WongWork::CDeathTower::CStage::pickupItem(int, map_item&)
08464169 +0x133:  xor    $0x1,%eax
0846416c +0x136:  test   %al,%al
0846416e +0x138:  je     084641a7 <+0x171>
08464170 +0x13a:  movl   $0x15,0x8(%esp)
08464178 +0x142:  movl   $0x2e,0x4(%esp)
08464180 +0x14a:  lea    -0x28(%ebp),%eax
08464183 +0x14d:  mov    %eax,(%esp)
08464186 +0x150:  call   0845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>  ; WongWork::CDeathTower::CPacketHandler::makeCommonError(ENUM_CMDPACKET, ENUM_ERROR)
0846418b +0x155:  lea    -0x28(%ebp),%eax
0846418e +0x158:  mov    %eax,0x4(%esp)
08464192 +0x15c:  mov    0xc(%ebp),%eax
08464195 +0x15f:  mov    %eax,(%esp)
08464198 +0x162:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0846419d +0x167:  mov    $0x0,%ebx
084641a2 +0x16c:  jmp    08464657 <+0x621>
084641a7 +0x171:  movl   $0x0,-0x38(%ebp)
084641ae +0x178:  movl   $0x0,-0x34(%ebp)
084641b5 +0x17f:  movl   $0x0,-0x30(%ebp)
084641bc +0x186:  movl   $0x0,-0x2c(%ebp)
084641c3 +0x18d:  movl   $0x0,-0x48(%ebp)
084641ca +0x194:  movl   $0x0,-0x44(%ebp)
084641d1 +0x19b:  movl   $0x0,-0x40(%ebp)
084641d8 +0x1a2:  movl   $0x0,-0x3c(%ebp)
084641df +0x1a9:  lea    -0x48(%ebp),%eax
084641e2 +0x1ac:  mov    %eax,0x14(%esp)
084641e6 +0x1b0:  lea    -0x38(%ebp),%eax
084641e9 +0x1b3:  mov    %eax,0x10(%esp)
084641ed +0x1b7:  lea    -0xb8(%ebp),%eax
084641f3 +0x1bd:  mov    %eax,0xc(%esp)
084641f7 +0x1c1:  mov    -0x1c(%ebp),%eax
084641fa +0x1c4:  mov    %eax,0x8(%esp)
084641fe +0x1c8:  mov    0xc(%ebp),%eax
08464201 +0x1cb:  mov    %eax,0x4(%esp)
08464205 +0x1cf:  mov    0x8(%ebp),%eax
08464208 +0x1d2:  mov    %eax,(%esp)
0846420b +0x1d5:  call   08466b02 <_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_>  ; WongWork::CDeathTower::_pickupItemMoney(CUser*, int, map_item const&, int*, int*)
08464210 +0x1da:  mov    0x10(%ebp),%eax
08464213 +0x1dd:  movzwl %ax,%ebx
08464216 +0x1e0:  mov    0xc(%ebp),%eax
08464219 +0x1e3:  mov    %eax,(%esp)
0846421c +0x1e6:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08464221 +0x1eb:  movzwl %ax,%eax
08464224 +0x1ee:  mov    %ebx,0x8(%esp)
08464228 +0x1f2:  mov    %eax,0x4(%esp)
0846422c +0x1f6:  lea    -0x28(%ebp),%eax
0846422f +0x1f9:  mov    %eax,(%esp)
08464232 +0x1fc:  call   0845fc6c <_ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt>  ; WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)
08464237 +0x201:  mov    0x8(%ebp),%eax
0846423a +0x204:  mov    (%eax),%eax
0846423c +0x206:  mov    %eax,0xc(%esp)
08464240 +0x20a:  lea    -0x48(%ebp),%eax
08464243 +0x20d:  mov    %eax,0x8(%esp)
08464247 +0x211:  lea    -0x38(%ebp),%eax
0846424a +0x214:  mov    %eax,0x4(%esp)
0846424e +0x218:  lea    -0x28(%ebp),%eax
08464251 +0x21b:  mov    %eax,(%esp)
08464254 +0x21e:  call   0845fcc4 <_ZN8WongWork11CDeathTower14CPacketHandler17appendPickupMoneyEPiS2_P6CParty>  ; WongWork::CDeathTower::CPacketHandler::appendPickupMoney(int*, int*, CParty*)
08464259 +0x223:  jmp    08464621 <+0x5eb>
0846425e +0x228:  movl   $0x0,-0x4c(%ebp)
08464265 +0x22f:  mov    -0xa6(%ebp),%eax
0846426b +0x235:  mov    %eax,%ebx
0846426d +0x237:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08464272 +0x23c:  mov    %ebx,0x4(%esp)
08464276 +0x240:  mov    %eax,(%esp)
08464279 +0x243:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0846427e +0x248:  mov    %eax,-0x18(%ebp)
08464281 +0x24b:  cmpl   $0x0,-0x18(%ebp)
08464285 +0x24f:  jne    08464291 <+0x25b>
08464287 +0x251:  mov    $0x0,%ebx
0846428c +0x256:  jmp    08464657 <+0x621>
08464291 +0x25b:  movl   $0x0,-0x14(%ebp)
08464298 +0x262:  mov    -0x18(%ebp),%eax
0846429b +0x265:  mov    %eax,(%esp)
0846429e +0x268:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
084642a3 +0x26d:  test   %al,%al
084642a5 +0x26f:  je     084642cc <+0x296>
084642a7 +0x271:  mov    -0x18(%ebp),%eax
084642aa +0x274:  mov    (%eax),%eax
084642ac +0x276:  add    $0xc,%eax
084642af +0x279:  mov    (%eax),%edx
084642b1 +0x27b:  mov    -0x18(%ebp),%eax
084642b4 +0x27e:  mov    %eax,(%esp)
084642b7 +0x281:  call   *%edx
084642b9 +0x283:  cmp    $0x9,%eax
084642bc +0x286:  sete   %al
084642bf +0x289:  test   %al,%al
084642c1 +0x28b:  je     08464308 <+0x2d2>
084642c3 +0x28d:  movl   $0x7,-0x14(%ebp)
084642ca +0x294:  jmp    08464308 <+0x2d2>
084642cc +0x296:  mov    -0x18(%ebp),%eax
084642cf +0x299:  mov    (%eax),%eax
084642d1 +0x29b:  add    $0x14,%eax
084642d4 +0x29e:  mov    (%eax),%edx
084642d6 +0x2a0:  mov    -0x18(%ebp),%eax
084642d9 +0x2a3:  mov    %eax,(%esp)
084642dc +0x2a6:  call   *%edx
084642de +0x2a8:  test   %al,%al
084642e0 +0x2aa:  je     084642eb <+0x2b5>
084642e2 +0x2ac:  movl   $0x7,-0x14(%ebp)
084642e9 +0x2b3:  jmp    08464308 <+0x2d2>
084642eb +0x2b5:  mov    -0x18(%ebp),%eax
084642ee +0x2b8:  mov    (%eax),%eax
084642f0 +0x2ba:  add    $0x10,%eax
084642f3 +0x2bd:  mov    (%eax),%edx
084642f5 +0x2bf:  mov    -0x18(%ebp),%eax
084642f8 +0x2c2:  mov    %eax,(%esp)
084642fb +0x2c5:  call   *%edx
084642fd +0x2c7:  test   %al,%al
084642ff +0x2c9:  je     08464308 <+0x2d2>
08464301 +0x2cb:  movl   $0x1,-0x14(%ebp)
08464308 +0x2d2:  movsbl -0xc0(%ebp),%edx
0846430f +0x2d9:  movzbl -0xbc(%ebp),%eax
08464316 +0x2e0:  mov    -0x18(%ebp),%ecx
08464319 +0x2e3:  mov    %ecx,0x1c(%esp)
0846431d +0x2e7:  mov    %edx,0x18(%esp)
08464321 +0x2eb:  mov    %eax,0x14(%esp)
08464325 +0x2ef:  lea    -0xb8(%ebp),%eax
0846432b +0x2f5:  mov    %eax,0x10(%esp)
0846432f +0x2f9:  mov    -0x1c(%ebp),%eax
08464332 +0x2fc:  mov    %eax,0xc(%esp)
08464336 +0x300:  lea    -0x4c(%ebp),%eax
08464339 +0x303:  mov    %eax,0x8(%esp)
0846433d +0x307:  mov    0xc(%ebp),%eax
08464340 +0x30a:  mov    %eax,0x4(%esp)
08464344 +0x30e:  mov    0x8(%ebp),%eax
08464347 +0x311:  mov    %eax,(%esp)
0846434a +0x314:  call   08466cfe <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem>  ; WongWork::CDeathTower::_pickupItem(CUser*, char*, int, map_item const&, bool, char, CItem const*)
0846434f +0x319:  mov    %eax,-0x10(%ebp)
08464352 +0x31c:  cmpl   $0x0,-0x10(%ebp)
08464356 +0x320:  jne    0846438f <+0x359>
08464358 +0x322:  movl   $0x16,0x8(%esp)
08464360 +0x32a:  movl   $0x2e,0x4(%esp)
08464368 +0x332:  lea    -0x28(%ebp),%eax
0846436b +0x335:  mov    %eax,(%esp)
0846436e +0x338:  call   0845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>  ; WongWork::CDeathTower::CPacketHandler::makeCommonError(ENUM_CMDPACKET, ENUM_ERROR)
08464373 +0x33d:  lea    -0x28(%ebp),%eax
08464376 +0x340:  mov    %eax,0x4(%esp)
0846437a +0x344:  mov    0xc(%ebp),%eax
0846437d +0x347:  mov    %eax,(%esp)
08464380 +0x34a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08464385 +0x34f:  mov    $0x0,%ebx
0846438a +0x354:  jmp    08464657 <+0x621>
0846438f +0x359:  movl   $0xffffffff,-0xc(%ebp)
08464396 +0x360:  lea    -0xb8(%ebp),%eax
0846439c +0x366:  add    $0x10,%eax
0846439f +0x369:  mov    %eax,(%esp)
084643a2 +0x36c:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
084643a7 +0x371:  test   %al,%al
084643a9 +0x373:  je     0846440f <+0x3d9>
084643ab +0x375:  mov    -0x10(%ebp),%eax
084643ae +0x378:  mov    %eax,(%esp)
084643b1 +0x37b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084643b6 +0x380:  lea    -0x64(%ebp),%edx
084643b9 +0x383:  mov    %edx,0x8(%esp)
084643bd +0x387:  mov    %eax,0x4(%esp)
084643c1 +0x38b:  movl   $0x5,(%esp)
084643c8 +0x392:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
084643cd +0x397:  movzwl -0x9d(%ebp),%eax
084643d4 +0x39e:  movsbl %al,%edx
084643d7 +0x3a1:  mov    -0xa6(%ebp),%eax
084643dd +0x3a7:  movl   $0x10,0x14(%esp)
084643e5 +0x3af:  lea    -0x64(%ebp),%ecx
084643e8 +0x3b2:  mov    %ecx,0x10(%esp)
084643ec +0x3b6:  mov    %edx,0xc(%esp)
084643f0 +0x3ba:  movl   $0x0,0x8(%esp)
084643f8 +0x3c2:  mov    %eax,0x4(%esp)
084643fc +0x3c6:  mov    -0x10(%ebp),%eax
084643ff +0x3c9:  mov    %eax,(%esp)
08464402 +0x3cc:  call   08681224 <_ZN5CUser13addAvatarItemEmccPKc20eAvatarItemAddReason>  ; CUser::addAvatarItem(unsigned long, char, char, char const*, eAvatarItemAddReason)
08464407 +0x3d1:  mov    %eax,-0xc(%ebp)
0846440a +0x3d4:  jmp    084644cc <+0x496>
0846440f +0x3d9:  mov    -0x10(%ebp),%eax
08464412 +0x3dc:  mov    %eax,(%esp)
08464415 +0x3df:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0846441a +0x3e4:  movl   $0x1,0x4c(%esp)
08464422 +0x3ec:  movl   $0x1,0x48(%esp)
0846442a +0x3f4:  movl   $0x4,0x44(%esp)
08464432 +0x3fc:  mov    -0xa8(%ebp),%edx
08464438 +0x402:  mov    %edx,0x4(%esp)
0846443c +0x406:  mov    -0xa4(%ebp),%edx
08464442 +0x40c:  mov    %edx,0x8(%esp)
08464446 +0x410:  mov    -0xa0(%ebp),%edx
0846444c +0x416:  mov    %edx,0xc(%esp)
08464450 +0x41a:  mov    -0x9c(%ebp),%edx
08464456 +0x420:  mov    %edx,0x10(%esp)
0846445a +0x424:  mov    -0x98(%ebp),%edx
08464460 +0x42a:  mov    %edx,0x14(%esp)
08464464 +0x42e:  mov    -0x94(%ebp),%edx
0846446a +0x434:  mov    %edx,0x18(%esp)
0846446e +0x438:  mov    -0x90(%ebp),%edx
08464474 +0x43e:  mov    %edx,0x1c(%esp)
08464478 +0x442:  mov    -0x8c(%ebp),%edx
0846447e +0x448:  mov    %edx,0x20(%esp)
08464482 +0x44c:  mov    -0x88(%ebp),%edx
08464488 +0x452:  mov    %edx,0x24(%esp)
0846448c +0x456:  mov    -0x84(%ebp),%edx
08464492 +0x45c:  mov    %edx,0x28(%esp)
08464496 +0x460:  mov    -0x80(%ebp),%edx
08464499 +0x463:  mov    %edx,0x2c(%esp)
0846449d +0x467:  mov    -0x7c(%ebp),%edx
084644a0 +0x46a:  mov    %edx,0x30(%esp)
084644a4 +0x46e:  mov    -0x78(%ebp),%edx
084644a7 +0x471:  mov    %edx,0x34(%esp)
084644ab +0x475:  mov    -0x74(%ebp),%edx
084644ae +0x478:  mov    %edx,0x38(%esp)
084644b2 +0x47c:  mov    -0x70(%ebp),%edx
084644b5 +0x47f:  mov    %edx,0x3c(%esp)
084644b9 +0x483:  movzbl -0x6c(%ebp),%edx
084644bd +0x487:  mov    %dl,0x40(%esp)
084644c1 +0x48b:  mov    %eax,(%esp)
084644c4 +0x48e:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
084644c9 +0x493:  mov    %eax,-0xc(%ebp)
084644cc +0x496:  cmpl   $0xffffffff,-0xc(%ebp)
084644d0 +0x49a:  jne    08464509 <+0x4d3>
084644d2 +0x49c:  movl   $0x4,0x8(%esp)
084644da +0x4a4:  movl   $0x2e,0x4(%esp)
084644e2 +0x4ac:  lea    -0x28(%ebp),%eax
084644e5 +0x4af:  mov    %eax,(%esp)
084644e8 +0x4b2:  call   0845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>  ; WongWork::CDeathTower::CPacketHandler::makeCommonError(ENUM_CMDPACKET, ENUM_ERROR)
084644ed +0x4b7:  lea    -0x28(%ebp),%eax
084644f0 +0x4ba:  mov    %eax,0x4(%esp)
084644f4 +0x4be:  mov    0xc(%ebp),%eax
084644f7 +0x4c1:  mov    %eax,(%esp)
084644fa +0x4c4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084644ff +0x4c9:  mov    $0x0,%ebx
08464504 +0x4ce:  jmp    08464657 <+0x621>
08464509 +0x4d3:  mov    -0x18(%ebp),%eax
0846450c +0x4d6:  mov    (%eax),%eax
0846450e +0x4d8:  add    $0x4c,%eax
08464511 +0x4db:  mov    (%eax),%edx
08464513 +0x4dd:  mov    -0x18(%ebp),%eax
08464516 +0x4e0:  mov    %eax,(%esp)
08464519 +0x4e3:  call   *%edx
0846451b +0x4e5:  test   %al,%al
0846451d +0x4e7:  je     0846456b <+0x535>
0846451f +0x4e9:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08464526 +0x4f0:  call   0823445e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b08>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b08
0846452b +0x4f5:  mov    %eax,%ebx
0846452d +0x4f7:  mov    -0x10(%ebp),%eax
08464530 +0x4fa:  mov    %eax,(%esp)
08464533 +0x4fd:  call   0822f3a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a4a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a4a
08464538 +0x502:  mov    %ebx,0x18(%esp)
0846453c +0x506:  mov    %eax,0x14(%esp)
08464540 +0x50a:  movl   $"%d,'%s'",0x10(%esp)
08464548 +0x512:  movl   $0x1,0xc(%esp)
08464550 +0x51a:  movl   $"pick_cnt",0x8(%esp)
08464558 +0x522:  movl   $"log_random_option",0x4(%esp)
08464560 +0x52a:  mov    -0x10(%ebp),%eax
08464563 +0x52d:  mov    %eax,(%esp)
08464566 +0x530:  call   0860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>  ; statistc_proxy::add(CUser*, char const*, char const*, unsigned int, char const*, ...)
0846456b +0x535:  mov    0x8(%ebp),%eax
0846456e +0x538:  lea    0x14(%eax),%edx
08464571 +0x53b:  lea    -0xb8(%ebp),%eax
08464577 +0x541:  mov    %eax,0x8(%esp)
0846457b +0x545:  mov    0x10(%ebp),%eax
0846457e +0x548:  mov    %eax,0x4(%esp)
08464582 +0x54c:  mov    %edx,(%esp)
08464585 +0x54f:  call   084615e4 <_ZN8WongWork11CDeathTower6CStage10pickupItemEiR8map_item>  ; WongWork::CDeathTower::CStage::pickupItem(int, map_item&)
0846458a +0x554:  xor    $0x1,%eax
0846458d +0x557:  test   %al,%al
0846458f +0x559:  je     084645c8 <+0x592>
08464591 +0x55b:  movl   $0x15,0x8(%esp)
08464599 +0x563:  movl   $0x2e,0x4(%esp)
084645a1 +0x56b:  lea    -0x28(%ebp),%eax
084645a4 +0x56e:  mov    %eax,(%esp)
084645a7 +0x571:  call   0845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>  ; WongWork::CDeathTower::CPacketHandler::makeCommonError(ENUM_CMDPACKET, ENUM_ERROR)
084645ac +0x576:  lea    -0x28(%ebp),%eax
084645af +0x579:  mov    %eax,0x4(%esp)
084645b3 +0x57d:  mov    0xc(%ebp),%eax
084645b6 +0x580:  mov    %eax,(%esp)
084645b9 +0x583:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084645be +0x588:  mov    $0x0,%ebx
084645c3 +0x58d:  jmp    08464657 <+0x621>
084645c8 +0x592:  mov    0x10(%ebp),%eax
084645cb +0x595:  movzwl %ax,%ebx
084645ce +0x598:  mov    0xc(%ebp),%eax
084645d1 +0x59b:  mov    %eax,(%esp)
084645d4 +0x59e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
084645d9 +0x5a3:  movzwl %ax,%eax
084645dc +0x5a6:  mov    %ebx,0x8(%esp)
084645e0 +0x5aa:  mov    %eax,0x4(%esp)
084645e4 +0x5ae:  lea    -0x28(%ebp),%eax
084645e7 +0x5b1:  mov    %eax,(%esp)
084645ea +0x5b4:  call   0845fc6c <_ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt>  ; WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)
084645ef +0x5b9:  mov    -0x10(%ebp),%eax
084645f2 +0x5bc:  mov    %eax,(%esp)
084645f5 +0x5bf:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
084645fa +0x5c4:  movzwl %ax,%eax
084645fd +0x5c7:  mov    -0x14(%ebp),%edx
08464600 +0x5ca:  mov    %edx,0x10(%esp)
08464604 +0x5ce:  mov    -0xc(%ebp),%edx
08464607 +0x5d1:  mov    %edx,0xc(%esp)
0846460b +0x5d5:  mov    %eax,0x8(%esp)
0846460f +0x5d9:  lea    -0x4c(%ebp),%eax
08464612 +0x5dc:  mov    %eax,0x4(%esp)
08464616 +0x5e0:  lea    -0x28(%ebp),%eax
08464619 +0x5e3:  mov    %eax,(%esp)
0846461c +0x5e6:  call   0845fdc0 <_ZN8WongWork11CDeathTower14CPacketHandler16appendPickupItemEPctii>  ; WongWork::CDeathTower::CPacketHandler::appendPickupItem(char*, unsigned short, int, int)
08464621 +0x5eb:  mov    0x8(%ebp),%eax
08464624 +0x5ee:  mov    (%eax),%eax
08464626 +0x5f0:  lea    -0x28(%ebp),%edx
08464629 +0x5f3:  mov    %edx,0x4(%esp)
0846462d +0x5f7:  mov    %eax,(%esp)
08464630 +0x5fa:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08464635 +0x5ff:  mov    $0x1,%ebx
0846463a +0x604:  jmp    08464657 <+0x621>
0846463c +0x606:  mov    %edx,%ebx
0846463e +0x608:  mov    %eax,%esi
08464640 +0x60a:  lea    -0x28(%ebp),%eax
08464643 +0x60d:  mov    %eax,(%esp)
08464646 +0x610:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
0846464b +0x615:  mov    %esi,%eax
0846464d +0x617:  mov    %ebx,%edx
0846464f +0x619:  mov    %eax,(%esp)
08464652 +0x61c:  call   08ae3750 <_Unwind_Resume>
08464657 +0x621:  lea    -0x28(%ebp),%eax
0846465a +0x624:  mov    %eax,(%esp)
0846465d +0x627:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08464662 +0x62c:  mov    %ebx,%eax
08464664 +0x62e:  add    $0x110,%esp
0846466a +0x634:  pop    %ebx
0846466b +0x635:  pop    %esi
0846466c +0x636:  pop    %ebp
0846466d +0x637:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::handlePickupItem @ 0x8464036

/* WongWork::CDeathTower::handlePickupItem(CUser*, int, bool, char) */

undefined4 __thiscall
WongWork::CDeathTower::handlePickupItem
          (CDeathTower *this,CUser *param_1,int param_2,bool param_3,char param_4)

{
  char cVar1;
  ushort uVar2;
  CDataManager *this_00;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  map_item local_bc [16];
  undefined2 uStack_ac;
  undefined2 local_aa;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_68 [24];
  char local_50 [4];
  int local_4c [8];
  CPacketHandler local_2c [12];
  int local_20;
  CItem *local_1c;
  int local_18;
  CUserCharacInfo *local_14;
  int local_10;
  
  map_item::map_item(local_bc);
  CPacketHandler::CPacketHandler(local_2c);
                    /* try { // try from 08464086 to 08464634 has its CatchHandler @ 0846463c */
  cVar1 = CStage::peekItem((CStage *)(this + 0x14),param_2,local_bc);
  if (cVar1 == '\x01') {
    local_20 = CParty::get_member_count(*(CParty **)this);
    if (local_20 < 1) {
      CPacketHandler::makeCommonError(local_2c,0x2e,0x15);
      CUser::Send(param_1,(PacketGuard *)local_2c);
      uVar5 = 0;
    }
    else {
      if (CONCAT22(uStack_a8,local_aa) == 0) {
        cVar1 = CStage::pickupItem((CStage *)(this + 0x14),param_2,local_bc);
        if (cVar1 != '\x01') {
          CPacketHandler::makeCommonError(local_2c,0x2e,0x15);
          CUser::Send(param_1,(PacketGuard *)local_2c);
          uVar5 = 0;
          goto LAB_08464657;
        }
        local_4c[4] = 0;
        local_4c[5] = 0;
        local_4c[6] = 0;
        local_4c[7] = 0;
        local_4c[0] = 0;
        local_4c[1] = 0;
        local_4c[2] = 0;
        local_4c[3] = 0;
        _pickupItemMoney(this,param_1,local_20,local_bc,local_4c + 4,local_4c);
        uVar2 = CUser::get_unique_id(param_1);
        CPacketHandler::makePickupItemHeader(local_2c,uVar2,(ushort)param_2);
        CPacketHandler::appendPickupMoney(local_2c,local_4c + 4,local_4c,*(CParty **)this);
      }
      else {
        local_50[0] = '\0';
        local_50[1] = '\0';
        local_50[2] = '\0';
        local_50[3] = '\0';
        iVar3 = CONCAT22(uStack_a8,local_aa);
        this_00 = (CDataManager *)G_CDataManager();
        local_1c = (CItem *)CDataManager::find_item(this_00,iVar3);
        if (local_1c == (CItem *)0x0) {
          uVar5 = 0;
          goto LAB_08464657;
        }
        local_18 = 0;
        cVar1 = CItem::is_stackable(local_1c);
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*(int *)local_1c + 0x14))(local_1c);
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(*(int *)local_1c + 0x10))(local_1c);
            if (cVar1 != '\0') {
              local_18 = 1;
            }
          }
          else {
            local_18 = 7;
          }
        }
        else {
          iVar3 = (**(code **)(*(int *)local_1c + 0xc))(local_1c);
          if (iVar3 == 9) {
            local_18 = 7;
          }
        }
        local_14 = (CUserCharacInfo *)
                   _pickupItem(this,param_1,local_50,local_20,local_bc,param_3,param_4,local_1c);
        if (local_14 == (CUserCharacInfo *)0x0) {
          CPacketHandler::makeCommonError(local_2c,0x2e,0x16);
          CUser::Send(param_1,(PacketGuard *)local_2c);
          uVar5 = 0;
          goto LAB_08464657;
        }
        local_10 = 0xffffffff;
        cVar1 = Inven_Item::isAvatarItemType((Inven_Item *)&uStack_ac);
        if (cVar1 == '\0') {
          uVar5 = CUserCharacInfo::getCurCharacInvenW(local_14);
          local_10 = CInventory::insertItemIntoInventory
                               (uVar5,CONCAT22(local_aa,uStack_ac),CONCAT22(uStack_a6,uStack_a8),
                                local_a4,uStack_a0,local_9c,local_98,local_94,local_90,local_8c,
                                local_88,local_84,local_80,local_7c,local_78,local_74,local_70,4,1,1
                               );
        }
        else {
          uVar5 = CUserCharacInfo::getCurCharacNo(local_14);
          CGenUniqueNo::genIPGNo(5,uVar5,local_68);
          local_10 = CUser::addAvatarItem
                               ((CUser *)local_14,CONCAT22(uStack_a8,local_aa),0,(int)local_a4._3_1_
                                ,local_68,0x10);
        }
        if (local_10 == -1) {
          CPacketHandler::makeCommonError(local_2c,0x2e,4);
          CUser::Send(param_1,(PacketGuard *)local_2c);
          uVar5 = 0;
          goto LAB_08464657;
        }
        cVar1 = (**(code **)(*(int *)local_1c + 0x4c))(local_1c);
        if (cVar1 != '\0') {
          uVar5 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
          uVar4 = CUserCharacInfo::get_charac_10_level_section(local_14);
          statistc_proxy::add((CUser *)local_14,"log_random_option","pick_cnt",1,"%d,\'%s\'",uVar4,
                              uVar5);
        }
        cVar1 = CStage::pickupItem((CStage *)(this + 0x14),param_2,local_bc);
        if (cVar1 != '\x01') {
          CPacketHandler::makeCommonError(local_2c,0x2e,0x15);
          CUser::Send(param_1,(PacketGuard *)local_2c);
          uVar5 = 0;
          goto LAB_08464657;
        }
        uVar2 = CUser::get_unique_id(param_1);
        CPacketHandler::makePickupItemHeader(local_2c,uVar2,(ushort)param_2);
        uVar2 = CUser::get_unique_id((CUser *)local_14);
        CPacketHandler::appendPickupItem(local_2c,local_50,uVar2,local_10,local_18);
      }
      CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_2c);
      uVar5 = 1;
    }
  }
  else {
    if (param_4 < '\x04') {
      CPacketHandler::makeCommonError(local_2c,0x2e,0x15);
    }
    else {
      CPacketHandler::makeCommonError(local_2c,0x2e,0x51);
    }
    CUser::Send(param_1,(PacketGuard *)local_2c);
    uVar5 = 0;
  }
LAB_08464657:
  CPacketHandler::~CPacketHandler(local_2c);
  return uVar5;
}
```
