# doPassPadReplay

`_ZN24Dispatcher_MouseRegister15doPassPadReplayEP5CUserPccRbRh`

`Dispatcher_MouseRegister::doPassPadReplay(CUser*, char*, char, bool&, unsigned char&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MouseRegister` | `0x082633c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082633c6  _ZN24Dispatcher_MouseRegister15doPassPadReplayEP5CUserPccRbRh
#           Dispatcher_MouseRegister::doPassPadReplay(CUser*, char*, char, bool&, unsigned char&)
# range [0x082633c6, 0x082637fd]
082633c6 +0x000:  push   %ebp
082633c7 +0x001:  mov    %esp,%ebp
082633c9 +0x003:  push   %esi
082633ca +0x004:  push   %ebx
082633cb +0x005:  sub    $0x50,%esp
082633ce +0x008:  mov    0x10(%ebp),%eax
082633d1 +0x00b:  mov    %al,-0x2c(%ebp)
082633d4 +0x00e:  mov    0x14(%ebp),%eax
082633d7 +0x011:  movb   $0x0,(%eax)
082633da +0x014:  mov    0x18(%ebp),%eax
082633dd +0x017:  movb   $0x0,(%eax)
082633e0 +0x01a:  movl   $0x0,-0xc(%ebp)
082633e7 +0x021:  jmp    08263422 <+0x5c>
082633e9 +0x023:  mov    -0xc(%ebp),%eax
082633ec +0x026:  mov    %eax,%ebx
082633ee +0x028:  add    0xc(%ebp),%ebx
082633f1 +0x02b:  mov    -0xc(%ebp),%eax
082633f4 +0x02e:  add    0xc(%ebp),%eax
082633f7 +0x031:  movzbl (%eax),%eax
082633fa +0x034:  mov    %eax,%esi
082633fc +0x036:  mov    0x8(%ebp),%eax
082633ff +0x039:  mov    %eax,(%esp)
08263402 +0x03c:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08263407 +0x041:  mov    -0xc(%ebp),%edx
0826340a +0x044:  mov    %edx,0x4(%esp)
0826340e +0x048:  mov    %eax,(%esp)
08263411 +0x04b:  call   08599936 <_ZN8Sanicova4CPad12GetShakeDataEi>  ; Sanicova::CPad::GetShakeData(int)
08263416 +0x050:  mov    %esi,%edx
08263418 +0x052:  sub    %al,%dl
0826341a +0x054:  mov    %edx,%eax
0826341c +0x056:  mov    %al,(%ebx)
0826341e +0x058:  addl   $0x1,-0xc(%ebp)
08263422 +0x05c:  cmpl   $0x3,-0xc(%ebp)
08263426 +0x060:  setle  %al
08263429 +0x063:  test   %al,%al
0826342b +0x065:  jne    082633e9 <+0x23>
0826342d +0x067:  mov    0x8(%ebp),%eax
08263430 +0x06a:  mov    %eax,(%esp)
08263433 +0x06d:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08263438 +0x072:  mov    0xc(%ebp),%edx
0826343b +0x075:  mov    %edx,0x4(%esp)
0826343f +0x079:  mov    %eax,(%esp)
08263442 +0x07c:  call   08599712 <_ZNK8Sanicova4CPad11checkAnswerEPc>  ; Sanicova::CPad::checkAnswer(char*) const
08263447 +0x081:  xor    $0x1,%eax
0826344a +0x084:  test   %al,%al
0826344c +0x086:  je     08263659 <+0x293>
08263452 +0x08c:  mov    0x8(%ebp),%eax
08263455 +0x08f:  add    $0x79700,%eax
0826345a +0x094:  movl   $0x0,0x8(%esp)
08263462 +0x09c:  movl   $0x0,0x4(%esp)
0826346a +0x0a4:  mov    %eax,(%esp)
0826346d +0x0a7:  call   0868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>  ; cUserHistoryLog::SecuService(ENUM_SECU_SERVICE_TYPE, ENUM_SECU_SERVICE_ACTION)
08263472 +0x0ac:  mov    0x8(%ebp),%eax
08263475 +0x0af:  mov    %eax,(%esp)
08263478 +0x0b2:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0826347d +0x0b7:  mov    %eax,(%esp)
08263480 +0x0ba:  call   082652d8 <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0xb0>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0xb0
08263485 +0x0bf:  cmp    $0x2,%eax
08263488 +0x0c2:  setg   %al
0826348b +0x0c5:  test   %al,%al
0826348d +0x0c7:  je     082634f7 <+0x131>
0826348f +0x0c9:  mov    0x18(%ebp),%eax
08263492 +0x0cc:  movb   $0x88,(%eax)
08263495 +0x0cf:  mov    0x8(%ebp),%eax
08263498 +0x0d2:  mov    %eax,(%esp)
0826349b +0x0d5:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
082634a0 +0x0da:  movl   $0x21,0x8(%esp)
082634a8 +0x0e2:  movl   $0x1,0x4(%esp)
082634b0 +0x0ea:  mov    %eax,(%esp)
082634b3 +0x0ed:  call   084b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>  ; XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int)
082634b8 +0x0f2:  mov    0x8(%ebp),%eax
082634bb +0x0f5:  mov    %eax,(%esp)
082634be +0x0f8:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
082634c3 +0x0fd:  movl   $0x0,0x14(%esp)
082634cb +0x105:  movl   $0x0,0x10(%esp)
082634d3 +0x10d:  movl   $0x1,0xc(%esp)
082634db +0x115:  movl   $0x342,0x8(%esp)
082634e3 +0x11d:  mov    0x8(%ebp),%edx
082634e6 +0x120:  mov    %edx,0x4(%esp)
082634ea +0x124:  mov    %eax,(%esp)
082634ed +0x127:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
082634f2 +0x12c:  jmp    08263617 <+0x251>
082634f7 +0x131:  lea    -0x24(%ebp),%eax
082634fa +0x134:  mov    %eax,(%esp)
082634fd +0x137:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08263502 +0x13c:  movl   $0xa7,0x8(%esp)
0826350a +0x144:  movl   $0x1,0x4(%esp)
08263512 +0x14c:  lea    -0x24(%ebp),%eax
08263515 +0x14f:  mov    %eax,(%esp)
08263518 +0x152:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0826351d +0x157:  movl   $0x0,0x4(%esp)
08263525 +0x15f:  lea    -0x24(%ebp),%eax
08263528 +0x162:  mov    %eax,(%esp)
0826352b +0x165:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08263530 +0x16a:  movl   $0x87,0x4(%esp)
08263538 +0x172:  lea    -0x24(%ebp),%eax
0826353b +0x175:  mov    %eax,(%esp)
0826353e +0x178:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08263543 +0x17d:  mov    0x8(%ebp),%eax
08263546 +0x180:  mov    %eax,(%esp)
08263549 +0x183:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0826354e +0x188:  mov    %eax,(%esp)
08263551 +0x18b:  call   0822ef8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4638>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4638
08263556 +0x190:  mov    %eax,0x4(%esp)
0826355a +0x194:  lea    -0x24(%ebp),%eax
0826355d +0x197:  mov    %eax,(%esp)
08263560 +0x19a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08263565 +0x19f:  movl   $0x1,0x4(%esp)
0826356d +0x1a7:  lea    -0x24(%ebp),%eax
08263570 +0x1aa:  mov    %eax,(%esp)
08263573 +0x1ad:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08263578 +0x1b2:  lea    -0x24(%ebp),%eax
0826357b +0x1b5:  mov    %eax,0x4(%esp)
0826357f +0x1b9:  mov    0x8(%ebp),%eax
08263582 +0x1bc:  mov    %eax,(%esp)
08263585 +0x1bf:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0826358a +0x1c4:  mov    0x8(%ebp),%eax
0826358d +0x1c7:  mov    %eax,(%esp)
08263590 +0x1ca:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08263595 +0x1cf:  mov    %eax,(%esp)
08263598 +0x1d2:  call   0822ef8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4638>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4638
0826359d +0x1d7:  cmp    $0x1,%eax
082635a0 +0x1da:  sete   %al
082635a3 +0x1dd:  test   %al,%al
082635a5 +0x1df:  je     082635cc <+0x206>
082635a7 +0x1e1:  mov    0x8(%ebp),%eax
082635aa +0x1e4:  mov    %eax,(%esp)
082635ad +0x1e7:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
082635b2 +0x1ec:  movl   $0x1f,0x8(%esp)
082635ba +0x1f4:  movl   $0x1,0x4(%esp)
082635c2 +0x1fc:  mov    %eax,(%esp)
082635c5 +0x1ff:  call   084b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>  ; XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int)
082635ca +0x204:  jmp    0826360c <+0x246>
082635cc +0x206:  mov    0x8(%ebp),%eax
082635cf +0x209:  mov    %eax,(%esp)
082635d2 +0x20c:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
082635d7 +0x211:  movl   $0x20,0x8(%esp)
082635df +0x219:  movl   $0x1,0x4(%esp)
082635e7 +0x221:  mov    %eax,(%esp)
082635ea +0x224:  call   084b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>  ; XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int)
082635ef +0x229:  jmp    0826360c <+0x246>
082635f1 +0x22b:  mov    %edx,%ebx
082635f3 +0x22d:  mov    %eax,%esi
082635f5 +0x22f:  lea    -0x24(%ebp),%eax
082635f8 +0x232:  mov    %eax,(%esp)
082635fb +0x235:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08263600 +0x23a:  mov    %esi,%eax
08263602 +0x23c:  mov    %ebx,%edx
08263604 +0x23e:  mov    %eax,(%esp)
08263607 +0x241:  call   08ae3750 <_Unwind_Resume>
0826360c +0x246:  lea    -0x24(%ebp),%eax
0826360f +0x249:  mov    %eax,(%esp)
08263612 +0x24c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08263617 +0x251:  mov    0x8(%ebp),%eax
0826361a +0x254:  mov    %eax,(%esp)
0826361d +0x257:  call   0822fd12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53bc
08263622 +0x25c:  mov    %eax,%ebx
08263624 +0x25e:  mov    0x8(%ebp),%eax
08263627 +0x261:  mov    %eax,(%esp)
0826362a +0x264:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0826362f +0x269:  mov    %eax,(%esp)
08263632 +0x26c:  call   0822ef8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4638>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4638
08263637 +0x271:  mov    %eax,%esi
08263639 +0x273:  mov    0x8(%ebp),%eax
0826363c +0x276:  mov    %eax,(%esp)
0826363f +0x279:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08263644 +0x27e:  mov    %ebx,0x8(%esp)
08263648 +0x282:  mov    %esi,0x4(%esp)
0826364c +0x286:  mov    %eax,(%esp)
0826364f +0x289:  call   08423eb4 <_ZN23DB_PassPadUpdateFailCnt11makeRequestEjjPc>  ; DB_PassPadUpdateFailCnt::makeRequest(unsigned int, unsigned int, char*)
08263654 +0x28e:  jmp    082637f7 <+0x431>
08263659 +0x293:  mov    0x8(%ebp),%eax
0826365c +0x296:  add    $0x79700,%eax
08263661 +0x29b:  movl   $0x1,0x8(%esp)
08263669 +0x2a3:  movl   $0x0,0x4(%esp)
08263671 +0x2ab:  mov    %eax,(%esp)
08263674 +0x2ae:  call   0868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>  ; cUserHistoryLog::SecuService(ENUM_SECU_SERVICE_TYPE, ENUM_SECU_SERVICE_ACTION)
08263679 +0x2b3:  mov    0x8(%ebp),%eax
0826367c +0x2b6:  mov    %eax,(%esp)
0826367f +0x2b9:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
08263684 +0x2be:  movl   $0x23,0x8(%esp)
0826368c +0x2c6:  movl   $0x1,0x4(%esp)
08263694 +0x2ce:  mov    %eax,(%esp)
08263697 +0x2d1:  call   084b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>  ; XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int)
0826369c +0x2d6:  mov    0x14(%ebp),%eax
0826369f +0x2d9:  movb   $0x1,(%eax)
082636a2 +0x2dc:  lea    -0x18(%ebp),%eax
082636a5 +0x2df:  mov    %eax,(%esp)
082636a8 +0x2e2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082636ad +0x2e7:  movl   $0xa7,0x8(%esp)
082636b5 +0x2ef:  movl   $0x1,0x4(%esp)
082636bd +0x2f7:  lea    -0x18(%ebp),%eax
082636c0 +0x2fa:  mov    %eax,(%esp)
082636c3 +0x2fd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082636c8 +0x302:  movl   $0x2,0x4(%esp)
082636d0 +0x30a:  lea    -0x18(%ebp),%eax
082636d3 +0x30d:  mov    %eax,(%esp)
082636d6 +0x310:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082636db +0x315:  mov    0x8(%ebp),%eax
082636de +0x318:  mov    %eax,(%esp)
082636e1 +0x31b:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
082636e6 +0x320:  mov    %eax,(%esp)
082636e9 +0x323:  call   08265302 <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0xda>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0xda
082636ee +0x328:  movzbl %al,%eax
082636f1 +0x32b:  mov    %eax,0x4(%esp)
082636f5 +0x32f:  lea    -0x18(%ebp),%eax
082636f8 +0x332:  mov    %eax,(%esp)
082636fb +0x335:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08263700 +0x33a:  movl   $0x1,0x4(%esp)
08263708 +0x342:  lea    -0x18(%ebp),%eax
0826370b +0x345:  mov    %eax,(%esp)
0826370e +0x348:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08263713 +0x34d:  lea    -0x18(%ebp),%eax
08263716 +0x350:  mov    %eax,0x4(%esp)
0826371a +0x354:  mov    0x8(%ebp),%eax
0826371d +0x357:  mov    %eax,(%esp)
08263720 +0x35a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08263725 +0x35f:  mov    0x8(%ebp),%eax
08263728 +0x362:  mov    %eax,(%esp)
0826372b +0x365:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08263730 +0x36a:  mov    %eax,(%esp)
08263733 +0x36d:  call   0822ef8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4638>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4638
08263738 +0x372:  test   %eax,%eax
0826373a +0x374:  setg   %al
0826373d +0x377:  test   %al,%al
0826373f +0x379:  je     0826376d <+0x3a7>
08263741 +0x37b:  mov    0x8(%ebp),%eax
08263744 +0x37e:  mov    %eax,(%esp)
08263747 +0x381:  call   0822fd12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53bc
0826374c +0x386:  mov    %eax,%ebx
0826374e +0x388:  mov    0x8(%ebp),%eax
08263751 +0x38b:  mov    %eax,(%esp)
08263754 +0x38e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08263759 +0x393:  mov    %ebx,0x8(%esp)
0826375d +0x397:  movl   $0x0,0x4(%esp)
08263765 +0x39f:  mov    %eax,(%esp)
08263768 +0x3a2:  call   08423eb4 <_ZN23DB_PassPadUpdateFailCnt11makeRequestEjjPc>  ; DB_PassPadUpdateFailCnt::makeRequest(unsigned int, unsigned int, char*)
0826376d +0x3a7:  mov    0x8(%ebp),%eax
08263770 +0x3aa:  mov    %eax,(%esp)
08263773 +0x3ad:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08263778 +0x3b2:  movl   $0x1,0x4(%esp)
08263780 +0x3ba:  mov    %eax,(%esp)
08263783 +0x3bd:  call   0826530e <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0xe6>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0xe6
08263788 +0x3c2:  mov    0x8(%ebp),%eax
0826378b +0x3c5:  mov    %eax,(%esp)
0826378e +0x3c8:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08263793 +0x3cd:  mov    %eax,(%esp)
08263796 +0x3d0:  call   082652f2 <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0xca>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0xca
0826379b +0x3d5:  mov    0x8(%ebp),%eax
0826379e +0x3d8:  mov    %eax,(%esp)
082637a1 +0x3db:  call   0822fd12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53bc
082637a6 +0x3e0:  mov    %eax,%ebx
082637a8 +0x3e2:  movsbl -0x2c(%ebp),%esi
082637ac +0x3e6:  mov    0x8(%ebp),%eax
082637af +0x3e9:  mov    %eax,(%esp)
082637b2 +0x3ec:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
082637b7 +0x3f1:  mov    %ebx,0xc(%esp)
082637bb +0x3f5:  movl   $0x0,0x8(%esp)
082637c3 +0x3fd:  mov    %esi,0x4(%esp)
082637c7 +0x401:  mov    %eax,(%esp)
082637ca +0x404:  call   08424452 <_ZN24DB_GoblinPadUpdateReward11makeRequestEjcbPc>  ; DB_GoblinPadUpdateReward::makeRequest(unsigned int, char, bool, char*)
082637cf +0x409:  jmp    082637ec <+0x426>
082637d1 +0x40b:  mov    %edx,%ebx
082637d3 +0x40d:  mov    %eax,%esi
082637d5 +0x40f:  lea    -0x18(%ebp),%eax
082637d8 +0x412:  mov    %eax,(%esp)
082637db +0x415:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082637e0 +0x41a:  mov    %esi,%eax
082637e2 +0x41c:  mov    %ebx,%edx
082637e4 +0x41e:  mov    %eax,(%esp)
082637e7 +0x421:  call   08ae3750 <_Unwind_Resume>
082637ec +0x426:  lea    -0x18(%ebp),%eax
082637ef +0x429:  mov    %eax,(%esp)
082637f2 +0x42c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082637f7 +0x431:  add    $0x50,%esp
082637fa +0x434:  pop    %ebx
082637fb +0x435:  pop    %esi
082637fc +0x436:  pop    %ebp
082637fd +0x437:  ret
```

## 反编译 C

```c
// Dispatcher_MouseRegister::doPassPadReplay @ 0x82633c6

/* Dispatcher_MouseRegister::doPassPadReplay(CUser*, char*, char, bool&, unsigned char&) */

void Dispatcher_MouseRegister::doPassPadReplay
               (CUser *param_1,char *param_2,char param_3,bool *param_4,uchar *param_5)

{
  char cVar1;
  char cVar2;
  CPad *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CHackAnalyzer *pCVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  int local_10;
  
  *param_4 = false;
  *param_5 = '\0';
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    pcVar7 = param_2 + local_10;
    cVar2 = param_2[local_10];
    pCVar3 = (CPad *)CUser::getPad(param_1);
    cVar1 = Sanicova::CPad::GetShakeData(pCVar3,local_10);
    *pcVar7 = cVar2 - cVar1;
  }
  pCVar3 = (CPad *)CUser::getPad(param_1);
  cVar2 = Sanicova::CPad::checkAnswer(pCVar3,param_2);
  if (cVar2 == '\x01') {
    cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),0,1);
    uVar5 = CUser::getHades(param_1);
    XNuclear::CHades::ChangeSecurity(uVar5,1,0x23);
    *param_4 = true;
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 082636c3 to 082637ce has its CatchHandler @ 082637d1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xa7);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,2);
    pCVar3 = (CPad *)CUser::getPad(param_1);
    uVar8 = Sanicova::CPad::getAdvideChangePwd(pCVar3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,uVar8 & 0xff);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    pCVar3 = (CPad *)CUser::getPad(param_1);
    iVar4 = Sanicova::CPad::getFailCnt(pCVar3);
    if (0 < iVar4) {
      pcVar7 = (char *)CUser::getWebAddress(param_1);
      uVar8 = CUser::get_acc_id(param_1);
      DB_PassPadUpdateFailCnt::makeRequest(uVar8,0,pcVar7);
    }
    pCVar3 = (CPad *)CUser::getPad(param_1);
    Sanicova::CPad::setCertified(pCVar3,true);
    pCVar3 = (CPad *)CUser::getPad(param_1);
    Sanicova::CPad::resetFailCnt(pCVar3);
    pcVar7 = (char *)CUser::getWebAddress(param_1);
    uVar8 = CUser::get_acc_id(param_1);
    DB_GoblinPadUpdateReward::makeRequest(uVar8,param_3,false,pcVar7);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),0,0);
    pCVar3 = (CPad *)CUser::getPad(param_1);
    iVar4 = Sanicova::CPad::incFailCnt(pCVar3);
    if (iVar4 < 3) {
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 08263518 to 082635ee has its CatchHandler @ 082635f1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0xa7);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0x87);
      pCVar3 = (CPad *)CUser::getPad(param_1);
      iVar4 = Sanicova::CPad::getFailCnt(pCVar3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,iVar4);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send(param_1,local_28);
      pCVar3 = (CPad *)CUser::getPad(param_1);
      iVar4 = Sanicova::CPad::getFailCnt(pCVar3);
      if (iVar4 == 1) {
        uVar5 = CUser::getHades(param_1);
        XNuclear::CHades::ChangeSecurity(uVar5,1,0x1f);
      }
      else {
        uVar5 = CUser::getHades(param_1);
        XNuclear::CHades::ChangeSecurity(uVar5,1,0x20);
      }
      PacketGuard::~PacketGuard(local_28);
    }
    else {
      *param_5 = 0x88;
      uVar5 = CUser::getHades(param_1);
      XNuclear::CHades::ChangeSecurity(uVar5,1,0x21);
      pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x342,1,0,0);
    }
    pcVar7 = (char *)CUser::getWebAddress(param_1);
    pCVar3 = (CPad *)CUser::getPad(param_1);
    uVar8 = Sanicova::CPad::getFailCnt(pCVar3);
    uVar9 = CUser::get_acc_id(param_1);
    DB_PassPadUpdateFailCnt::makeRequest(uVar9,uVar8,pcVar7);
  }
  return;
}
```
