# dispatch_sig

`_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GM_Command` | `0x081fa19e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081fa19e  _ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)
# range [0x081fa19e, 0x081fc4dd]
081fa19e +0x0000:  push   %ebp
081fa19f +0x0001:  mov    %esp,%ebp
081fa1a1 +0x0003:  push   %edi
081fa1a2 +0x0004:  push   %esi
081fa1a3 +0x0005:  push   %ebx
081fa1a4 +0x0006:  sub    $0x51c,%esp
081fa1aa +0x000c:  cmpl   $0x0,0xc(%ebp)
081fa1ae +0x0010:  jne    081fa1db <+0x3d>
081fa1b0 +0x0012:  movl   $0x0,0xc(%esp)
081fa1b8 +0x001a:  movl   $0x0,0x8(%esp)
081fa1c0 +0x0022:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fa1c8 +0x002a:  movl   $0x88fd,(%esp)
081fa1cf +0x0031:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fa1d4 +0x0036:  mov    %eax,%ebx
081fa1d6 +0x0038:  jmp    081fc4d1 <+0x2333>
081fa1db +0x003d:  mov    0xc(%ebp),%eax
081fa1de +0x0040:  mov    %eax,(%esp)
081fa1e1 +0x0043:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081fa1e6 +0x0048:  test   %eax,%eax
081fa1e8 +0x004a:  sete   %al
081fa1eb +0x004d:  test   %al,%al
081fa1ed +0x004f:  je     081fa21a <+0x7c>
081fa1ef +0x0051:  movl   $0x0,0xc(%esp)
081fa1f7 +0x0059:  movl   $0x0,0x8(%esp)
081fa1ff +0x0061:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fa207 +0x0069:  movl   $0x8902,(%esp)
081fa20e +0x0070:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fa213 +0x0075:  mov    %eax,%ebx
081fa215 +0x0077:  jmp    081fc4d1 <+0x2333>
081fa21a +0x007c:  mov    0xc(%ebp),%eax
081fa21d +0x007f:  mov    %eax,(%esp)
081fa220 +0x0082:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fa225 +0x0087:  movl   $0x0,0x4(%esp)
081fa22d +0x008f:  mov    %eax,(%esp)
081fa230 +0x0092:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081fa235 +0x0097:  mov    %eax,%ebx
081fa237 +0x0099:  movl   $0x0,0xc(%esp)
081fa23f +0x00a1:  movl   $0x8908,0x8(%esp)
081fa247 +0x00a9:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fa24f +0x00b1:  lea    -0x1b4(%ebp),%eax
081fa255 +0x00b7:  mov    %eax,(%esp)
081fa258 +0x00ba:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fa25d +0x00bf:  mov    %ebx,0x8(%esp)
081fa261 +0x00c3:  movl   $"GM Command : %s",0x4(%esp)
081fa269 +0x00cb:  lea    -0x1b4(%ebp),%eax
081fa26f +0x00d1:  mov    %eax,(%esp)
081fa272 +0x00d4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fa277 +0x00d9:  lea    -0x4e9(%ebp),%eax
081fa27d +0x00df:  add    $0xd,%eax
081fa280 +0x00e2:  mov    %eax,0x4(%esp)
081fa284 +0x00e6:  mov    0x10(%ebp),%eax
081fa287 +0x00e9:  mov    %eax,(%esp)
081fa28a +0x00ec:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081fa28f +0x00f1:  xor    $0x1,%eax
081fa292 +0x00f4:  test   %al,%al
081fa294 +0x00f6:  je     081fa2c1 <+0x123>
081fa296 +0x00f8:  movl   $0x0,0xc(%esp)
081fa29e +0x0100:  movl   $0x0,0x8(%esp)
081fa2a6 +0x0108:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fa2ae +0x0110:  movl   $0x890e,(%esp)
081fa2b5 +0x0117:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fa2ba +0x011c:  mov    %eax,%ebx
081fa2bc +0x011e:  jmp    081fc4d1 <+0x2333>
081fa2c1 +0x0123:  lea    -0x1c0(%ebp),%eax
081fa2c7 +0x0129:  mov    %eax,(%esp)
081fa2ca +0x012c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081fa2cf +0x0131:  movl   $0x6e,0x8(%esp)
081fa2d7 +0x0139:  movl   $0x1,0x4(%esp)
081fa2df +0x0141:  lea    -0x1c0(%ebp),%eax
081fa2e5 +0x0147:  mov    %eax,(%esp)
081fa2e8 +0x014a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081fa2ed +0x014f:  movl   $0x1,0x4(%esp)
081fa2f5 +0x0157:  lea    -0x1c0(%ebp),%eax
081fa2fb +0x015d:  mov    %eax,(%esp)
081fa2fe +0x0160:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081fa303 +0x0165:  movl   $0x63,0x4(%esp)
081fa30b +0x016d:  lea    -0x1c0(%ebp),%eax
081fa311 +0x0173:  mov    %eax,(%esp)
081fa314 +0x0176:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081fa319 +0x017b:  movl   $0x1,0x4(%esp)
081fa321 +0x0183:  lea    -0x1c0(%ebp),%eax
081fa327 +0x0189:  mov    %eax,(%esp)
081fa32a +0x018c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081fa32f +0x0191:  movl   $0x1,0x4(%esp)
081fa337 +0x0199:  lea    -0x1c0(%ebp),%eax
081fa33d +0x019f:  mov    %eax,(%esp)
081fa340 +0x01a2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081fa345 +0x01a7:  lea    -0x1cc(%ebp),%eax
081fa34b +0x01ad:  mov    %eax,(%esp)
081fa34e +0x01b0:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081fa353 +0x01b5:  movl   $0x6e,0x8(%esp)
081fa35b +0x01bd:  movl   $0x1,0x4(%esp)
081fa363 +0x01c5:  lea    -0x1cc(%ebp),%eax
081fa369 +0x01cb:  mov    %eax,(%esp)
081fa36c +0x01ce:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081fa371 +0x01d3:  movl   $0x1,0x4(%esp)
081fa379 +0x01db:  lea    -0x1cc(%ebp),%eax
081fa37f +0x01e1:  mov    %eax,(%esp)
081fa382 +0x01e4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081fa387 +0x01e9:  movzbl -0x4dc(%ebp),%eax
081fa38e +0x01f0:  movzbl %al,%eax
081fa391 +0x01f3:  mov    %eax,0x4(%esp)
081fa395 +0x01f7:  lea    -0x1cc(%ebp),%eax
081fa39b +0x01fd:  mov    %eax,(%esp)
081fa39e +0x0200:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081fa3a3 +0x0205:  movzbl -0x4dc(%ebp),%eax
081fa3aa +0x020c:  movzbl %al,%eax
081fa3ad +0x020f:  cmp    $0xd,%eax
081fa3b0 +0x0212:  ja     081fc3aa <+0x220c>
081fa3b6 +0x0218:  mov    &data#7772634b(.rodata)(,%eax,4),%eax
081fa3bd +0x021f:  jmp    *%eax
081fa3bf +0x0221:  mov    0xc(%ebp),%eax
081fa3c2 +0x0224:  mov    %eax,(%esp)
081fa3c5 +0x0227:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fa3ca +0x022c:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fa3d0 +0x0232:  mov    %eax,0x4(%esp)
081fa3d4 +0x0236:  mov    %edx,(%esp)
081fa3d7 +0x0239:  call   082993d8 <_ZN11CGM_Manager10GetGmLevelEj>  ; CGM_Manager::GetGmLevel(unsigned int)
081fa3dc +0x023e:  test   %eax,%eax
081fa3de +0x0240:  setle  %al
081fa3e1 +0x0243:  test   %al,%al
081fa3e3 +0x0245:  jne    081fc417 <+0x2279>
081fa3e9 +0x024b:  mov    0xc(%ebp),%eax
081fa3ec +0x024e:  mov    %eax,(%esp)
081fa3ef +0x0251:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fa3f4 +0x0256:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fa3fa +0x025c:  mov    %eax,0x4(%esp)
081fa3fe +0x0260:  mov    %edx,(%esp)
081fa401 +0x0263:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081fa406 +0x0268:  xor    $0x1,%eax
081fa409 +0x026b:  test   %al,%al
081fa40b +0x026d:  je     081fa422 <+0x284>
081fa40d +0x026f:  movl   $0x1,0x4(%esp)
081fa415 +0x0277:  mov    0xc(%ebp),%eax
081fa418 +0x027a:  mov    %eax,(%esp)
081fa41b +0x027d:  call   086796dc <_ZN5CUser17SetGameMasterModeEb>  ; CUser::SetGameMasterMode(bool)
081fa420 +0x0282:  jmp    081fa435 <+0x297>
081fa422 +0x0284:  movl   $0x0,0x4(%esp)
081fa42a +0x028c:  mov    0xc(%ebp),%eax
081fa42d +0x028f:  mov    %eax,(%esp)
081fa430 +0x0292:  call   086796dc <_ZN5CUser17SetGameMasterModeEb>  ; CUser::SetGameMasterMode(bool)
081fa435 +0x0297:  mov    0xc(%ebp),%eax
081fa438 +0x029a:  mov    %eax,(%esp)
081fa43b +0x029d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fa440 +0x02a2:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fa446 +0x02a8:  mov    %eax,0x4(%esp)
081fa44a +0x02ac:  mov    %edx,(%esp)
081fa44d +0x02af:  call   0829917c <_ZN11CGM_Manager10TurnGmModeEj>  ; CGM_Manager::TurnGmMode(unsigned int)
081fa452 +0x02b4:  jmp    081fc478 <+0x22da>
081fa457 +0x02b9:  mov    0xc(%ebp),%eax
081fa45a +0x02bc:  mov    %eax,(%esp)
081fa45d +0x02bf:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fa462 +0x02c4:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fa468 +0x02ca:  mov    %eax,0x4(%esp)
081fa46c +0x02ce:  mov    %edx,(%esp)
081fa46f +0x02d1:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081fa474 +0x02d6:  xor    $0x1,%eax
081fa477 +0x02d9:  test   %al,%al
081fa479 +0x02db:  jne    081fc41a <+0x227c>
081fa47f +0x02e1:  mov    0xc(%ebp),%eax
081fa482 +0x02e4:  mov    %eax,(%esp)
081fa485 +0x02e7:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fa48a +0x02ec:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fa490 +0x02f2:  mov    %eax,0x4(%esp)
081fa494 +0x02f6:  mov    %edx,(%esp)
081fa497 +0x02f9:  call   082993d8 <_ZN11CGM_Manager10GetGmLevelEj>  ; CGM_Manager::GetGmLevel(unsigned int)
081fa49c +0x02fe:  test   %eax,%eax
081fa49e +0x0300:  setle  %al
081fa4a1 +0x0303:  test   %al,%al
081fa4a3 +0x0305:  jne    081fc41d <+0x227f>
081fa4a9 +0x030b:  lea    -0x4e9(%ebp),%eax
081fa4af +0x0311:  add    $0xe,%eax
081fa4b2 +0x0314:  mov    %eax,0x4(%esp)
081fa4b6 +0x0318:  mov    0x10(%ebp),%eax
081fa4b9 +0x031b:  mov    %eax,(%esp)
081fa4bc +0x031e:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081fa4c1 +0x0323:  mov    -0x4db(%ebp),%eax
081fa4c7 +0x0329:  mov    %eax,0xc(%esp)
081fa4cb +0x032d:  movl   $0x100,0x8(%esp)
081fa4d3 +0x0335:  lea    -0x4e9(%ebp),%eax
081fa4d9 +0x033b:  add    $0x12,%eax
081fa4dc +0x033e:  mov    %eax,0x4(%esp)
081fa4e0 +0x0342:  mov    0x10(%ebp),%eax
081fa4e3 +0x0345:  mov    %eax,(%esp)
081fa4e6 +0x0348:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081fa4eb +0x034d:  mov    -0x4db(%ebp),%eax
081fa4f1 +0x0353:  test   %eax,%eax
081fa4f3 +0x0355:  je     081fc420 <+0x2282>
081fa4f9 +0x035b:  mov    -0x4db(%ebp),%eax
081fa4ff +0x0361:  mov    %eax,0x4(%esp)
081fa503 +0x0365:  lea    -0x1cc(%ebp),%eax
081fa509 +0x036b:  mov    %eax,(%esp)
081fa50c +0x036e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fa511 +0x0373:  mov    -0x4db(%ebp),%eax
081fa517 +0x0379:  mov    %eax,0x8(%esp)
081fa51b +0x037d:  lea    -0x4e9(%ebp),%eax
081fa521 +0x0383:  add    $0x12,%eax
081fa524 +0x0386:  mov    %eax,0x4(%esp)
081fa528 +0x038a:  lea    -0x1cc(%ebp),%eax
081fa52e +0x0390:  mov    %eax,(%esp)
081fa531 +0x0393:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081fa536 +0x0398:  movl   $0x1,0x4(%esp)
081fa53e +0x03a0:  lea    -0x1cc(%ebp),%eax
081fa544 +0x03a6:  mov    %eax,(%esp)
081fa547 +0x03a9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081fa54c +0x03ae:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fa551 +0x03b3:  lea    -0x1cc(%ebp),%edx
081fa557 +0x03b9:  mov    %edx,0x4(%esp)
081fa55b +0x03bd:  mov    %eax,(%esp)
081fa55e +0x03c0:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
081fa563 +0x03c5:  movl   $0x0,0xc(%esp)
081fa56b +0x03cd:  movl   $0x8939,0x8(%esp)
081fa573 +0x03d5:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fa57b +0x03dd:  lea    -0x1a4(%ebp),%eax
081fa581 +0x03e3:  mov    %eax,(%esp)
081fa584 +0x03e6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fa589 +0x03eb:  lea    -0x4e9(%ebp),%eax
081fa58f +0x03f1:  add    $0x12,%eax
081fa592 +0x03f4:  mov    %eax,0x8(%esp)
081fa596 +0x03f8:  movl   $"GMC %s \n",0x4(%esp)
081fa59e +0x0400:  lea    -0x1a4(%ebp),%eax
081fa5a4 +0x0406:  mov    %eax,(%esp)
081fa5a7 +0x0409:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fa5ac +0x040e:  jmp    081fc478 <+0x22da>
081fa5b1 +0x0413:  mov    0xc(%ebp),%eax
081fa5b4 +0x0416:  mov    %eax,(%esp)
081fa5b7 +0x0419:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fa5bc +0x041e:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fa5c2 +0x0424:  mov    %eax,0x4(%esp)
081fa5c6 +0x0428:  mov    %edx,(%esp)
081fa5c9 +0x042b:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081fa5ce +0x0430:  xor    $0x1,%eax
081fa5d1 +0x0433:  test   %al,%al
081fa5d3 +0x0435:  jne    081fc423 <+0x2285>
081fa5d9 +0x043b:  mov    0xc(%ebp),%eax
081fa5dc +0x043e:  mov    %eax,(%esp)
081fa5df +0x0441:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fa5e4 +0x0446:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fa5ea +0x044c:  mov    %eax,0x4(%esp)
081fa5ee +0x0450:  mov    %edx,(%esp)
081fa5f1 +0x0453:  call   082993d8 <_ZN11CGM_Manager10GetGmLevelEj>  ; CGM_Manager::GetGmLevel(unsigned int)
081fa5f6 +0x0458:  test   %eax,%eax
081fa5f8 +0x045a:  setle  %al
081fa5fb +0x045d:  test   %al,%al
081fa5fd +0x045f:  jne    081fc426 <+0x2288>
081fa603 +0x0465:  lea    -0x4e9(%ebp),%eax
081fa609 +0x046b:  add    $0xe,%eax
081fa60c +0x046e:  mov    %eax,0x4(%esp)
081fa610 +0x0472:  mov    0x10(%ebp),%eax
081fa613 +0x0475:  mov    %eax,(%esp)
081fa616 +0x0478:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081fa61b +0x047d:  mov    -0x4db(%ebp),%eax
081fa621 +0x0483:  mov    %eax,0xc(%esp)
081fa625 +0x0487:  movl   $0x100,0x8(%esp)
081fa62d +0x048f:  lea    -0x4e9(%ebp),%eax
081fa633 +0x0495:  add    $0x12,%eax
081fa636 +0x0498:  mov    %eax,0x4(%esp)
081fa63a +0x049c:  mov    0x10(%ebp),%eax
081fa63d +0x049f:  mov    %eax,(%esp)
081fa640 +0x04a2:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081fa645 +0x04a7:  mov    -0x4db(%ebp),%eax
081fa64b +0x04ad:  test   %eax,%eax
081fa64d +0x04af:  je     081fc429 <+0x228b>
081fa653 +0x04b5:  mov    -0x4db(%ebp),%eax
081fa659 +0x04bb:  mov    %eax,0x4(%esp)
081fa65d +0x04bf:  lea    -0x1cc(%ebp),%eax
081fa663 +0x04c5:  mov    %eax,(%esp)
081fa666 +0x04c8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fa66b +0x04cd:  mov    -0x4db(%ebp),%eax
081fa671 +0x04d3:  mov    %eax,0x8(%esp)
081fa675 +0x04d7:  lea    -0x4e9(%ebp),%eax
081fa67b +0x04dd:  add    $0x12,%eax
081fa67e +0x04e0:  mov    %eax,0x4(%esp)
081fa682 +0x04e4:  lea    -0x1cc(%ebp),%eax
081fa688 +0x04ea:  mov    %eax,(%esp)
081fa68b +0x04ed:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081fa690 +0x04f2:  movl   $0x1,0x4(%esp)
081fa698 +0x04fa:  lea    -0x1cc(%ebp),%eax
081fa69e +0x0500:  mov    %eax,(%esp)
081fa6a1 +0x0503:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081fa6a6 +0x0508:  movl   $0x0,0x4(%esp)
081fa6ae +0x0510:  mov    0xc(%ebp),%eax
081fa6b1 +0x0513:  mov    %eax,(%esp)
081fa6b4 +0x0516:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
081fa6b9 +0x051b:  mov    %eax,%ebx
081fa6bb +0x051d:  mov    0xc(%ebp),%eax
081fa6be +0x0520:  mov    %eax,(%esp)
081fa6c1 +0x0523:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081fa6c6 +0x0528:  movsbl %al,%esi
081fa6c9 +0x052b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fa6ce +0x0530:  lea    -0x1cc(%ebp),%edx
081fa6d4 +0x0536:  mov    %edx,0xc(%esp)
081fa6d8 +0x053a:  mov    %ebx,0x8(%esp)
081fa6dc +0x053e:  mov    %esi,0x4(%esp)
081fa6e0 +0x0542:  mov    %eax,(%esp)
081fa6e3 +0x0545:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
081fa6e8 +0x054a:  movl   $0x0,0xc(%esp)
081fa6f0 +0x0552:  movl   $0x894a,0x8(%esp)
081fa6f8 +0x055a:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fa700 +0x0562:  lea    -0x194(%ebp),%eax
081fa706 +0x0568:  mov    %eax,(%esp)
081fa709 +0x056b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fa70e +0x0570:  lea    -0x4e9(%ebp),%eax
081fa714 +0x0576:  add    $0x12,%eax
081fa717 +0x0579:  mov    %eax,0x8(%esp)
081fa71b +0x057d:  movl   $"GMZ %s \n",0x4(%esp)
081fa723 +0x0585:  lea    -0x194(%ebp),%eax
081fa729 +0x058b:  mov    %eax,(%esp)
081fa72c +0x058e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fa731 +0x0593:  jmp    081fc478 <+0x22da>
081fa736 +0x0598:  mov    0xc(%ebp),%eax
081fa739 +0x059b:  mov    %eax,(%esp)
081fa73c +0x059e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fa741 +0x05a3:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fa747 +0x05a9:  mov    %eax,0x4(%esp)
081fa74b +0x05ad:  mov    %edx,(%esp)
081fa74e +0x05b0:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081fa753 +0x05b5:  xor    $0x1,%eax
081fa756 +0x05b8:  test   %al,%al
081fa758 +0x05ba:  jne    081fc42c <+0x228e>
081fa75e +0x05c0:  mov    0xc(%ebp),%eax
081fa761 +0x05c3:  mov    %eax,(%esp)
081fa764 +0x05c6:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fa769 +0x05cb:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fa76f +0x05d1:  mov    %eax,0x4(%esp)
081fa773 +0x05d5:  mov    %edx,(%esp)
081fa776 +0x05d8:  call   082993d8 <_ZN11CGM_Manager10GetGmLevelEj>  ; CGM_Manager::GetGmLevel(unsigned int)
081fa77b +0x05dd:  test   %eax,%eax
081fa77d +0x05df:  setle  %al
081fa780 +0x05e2:  test   %al,%al
081fa782 +0x05e4:  jne    081fc42f <+0x2291>
081fa788 +0x05ea:  lea    -0x4e9(%ebp),%eax
081fa78e +0x05f0:  add    $0xe,%eax
081fa791 +0x05f3:  mov    %eax,0x4(%esp)
081fa795 +0x05f7:  mov    0x10(%ebp),%eax
081fa798 +0x05fa:  mov    %eax,(%esp)
081fa79b +0x05fd:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081fa7a0 +0x0602:  mov    -0x4db(%ebp),%eax
081fa7a6 +0x0608:  mov    %eax,0xc(%esp)
081fa7aa +0x060c:  movl   $0x100,0x8(%esp)
081fa7b2 +0x0614:  lea    -0x4e9(%ebp),%eax
081fa7b8 +0x061a:  add    $0x12,%eax
081fa7bb +0x061d:  mov    %eax,0x4(%esp)
081fa7bf +0x0621:  mov    0x10(%ebp),%eax
081fa7c2 +0x0624:  mov    %eax,(%esp)
081fa7c5 +0x0627:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081fa7ca +0x062c:  mov    -0x4db(%ebp),%eax
081fa7d0 +0x0632:  test   %eax,%eax
081fa7d2 +0x0634:  je     081fc432 <+0x2294>
081fa7d8 +0x063a:  mov    -0x4db(%ebp),%eax
081fa7de +0x0640:  mov    %eax,0x4(%esp)
081fa7e2 +0x0644:  lea    -0x1cc(%ebp),%eax
081fa7e8 +0x064a:  mov    %eax,(%esp)
081fa7eb +0x064d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fa7f0 +0x0652:  mov    -0x4db(%ebp),%eax
081fa7f6 +0x0658:  mov    %eax,0x8(%esp)
081fa7fa +0x065c:  lea    -0x4e9(%ebp),%eax
081fa800 +0x0662:  add    $0x12,%eax
081fa803 +0x0665:  mov    %eax,0x4(%esp)
081fa807 +0x0669:  lea    -0x1cc(%ebp),%eax
081fa80d +0x066f:  mov    %eax,(%esp)
081fa810 +0x0672:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081fa815 +0x0677:  movl   $0x1,0x4(%esp)
081fa81d +0x067f:  lea    -0x1cc(%ebp),%eax
081fa823 +0x0685:  mov    %eax,(%esp)
081fa826 +0x0688:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081fa82b +0x068d:  lea    -0x3d7(%ebp),%eax
081fa831 +0x0693:  mov    %eax,(%esp)
081fa834 +0x0696:  call   0822bbd6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1280>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1280
081fa839 +0x069b:  mov    -0x4db(%ebp),%eax
081fa83f +0x06a1:  mov    %al,-0x3cd(%ebp)
081fa845 +0x06a7:  mov    -0x4db(%ebp),%eax
081fa84b +0x06ad:  mov    %eax,0x8(%esp)
081fa84f +0x06b1:  lea    -0x4e9(%ebp),%eax
081fa855 +0x06b7:  add    $0x12,%eax
081fa858 +0x06ba:  mov    %eax,0x4(%esp)
081fa85c +0x06be:  lea    -0x3d7(%ebp),%eax
081fa862 +0x06c4:  add    $0xb,%eax
081fa865 +0x06c7:  mov    %eax,(%esp)
081fa868 +0x06ca:  call   0807d8d0 <_init+0x1c8>
081fa86d +0x06cf:  lea    -0x3d7(%ebp),%ebx
081fa873 +0x06d5:  mov    0xc(%ebp),%eax
081fa876 +0x06d8:  mov    %eax,(%esp)
081fa879 +0x06db:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081fa87e +0x06e0:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081fa884 +0x06e6:  mov    %eax,0x4(%esp)
081fa888 +0x06ea:  mov    %edx,(%esp)
081fa88b +0x06ed:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081fa890 +0x06f2:  movl   $0x10b,0x8(%esp)
081fa898 +0x06fa:  mov    %ebx,0x4(%esp)
081fa89c +0x06fe:  mov    %eax,(%esp)
081fa89f +0x0701:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
081fa8a4 +0x0706:  movl   $0x0,0xc(%esp)
081fa8ac +0x070e:  movl   $0x8966,0x8(%esp)
081fa8b4 +0x0716:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fa8bc +0x071e:  lea    -0x184(%ebp),%eax
081fa8c2 +0x0724:  mov    %eax,(%esp)
081fa8c5 +0x0727:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fa8ca +0x072c:  lea    -0x4e9(%ebp),%eax
081fa8d0 +0x0732:  add    $0x12,%eax
081fa8d3 +0x0735:  mov    %eax,0x8(%esp)
081fa8d7 +0x0739:  movl   $"GMS %s \n",0x4(%esp)
081fa8df +0x0741:  lea    -0x184(%ebp),%eax
081fa8e5 +0x0747:  mov    %eax,(%esp)
081fa8e8 +0x074a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fa8ed +0x074f:  jmp    081fc478 <+0x22da>
081fa8f2 +0x0754:  mov    0xc(%ebp),%eax
081fa8f5 +0x0757:  mov    %eax,(%esp)
081fa8f8 +0x075a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fa8fd +0x075f:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fa903 +0x0765:  mov    %eax,0x4(%esp)
081fa907 +0x0769:  mov    %edx,(%esp)
081fa90a +0x076c:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081fa90f +0x0771:  xor    $0x1,%eax
081fa912 +0x0774:  test   %al,%al
081fa914 +0x0776:  jne    081fc435 <+0x2297>
081fa91a +0x077c:  mov    0xc(%ebp),%eax
081fa91d +0x077f:  mov    %eax,(%esp)
081fa920 +0x0782:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fa925 +0x0787:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fa92b +0x078d:  mov    %eax,0x4(%esp)
081fa92f +0x0791:  mov    %edx,(%esp)
081fa932 +0x0794:  call   082993d8 <_ZN11CGM_Manager10GetGmLevelEj>  ; CGM_Manager::GetGmLevel(unsigned int)
081fa937 +0x0799:  test   %eax,%eax
081fa939 +0x079b:  setle  %al
081fa93c +0x079e:  test   %al,%al
081fa93e +0x07a0:  jne    081fc438 <+0x229a>
081fa944 +0x07a6:  lea    -0x4e9(%ebp),%eax
081fa94a +0x07ac:  add    $0xe,%eax
081fa94d +0x07af:  mov    %eax,0x4(%esp)
081fa951 +0x07b3:  mov    0x10(%ebp),%eax
081fa954 +0x07b6:  mov    %eax,(%esp)
081fa957 +0x07b9:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081fa95c +0x07be:  mov    -0x4db(%ebp),%eax
081fa962 +0x07c4:  lea    -0x4e9(%ebp),%edx
081fa968 +0x07ca:  add    $0x12,%edx
081fa96b +0x07cd:  mov    %eax,0xc(%esp)
081fa96f +0x07d1:  movl   $0x1e,0x8(%esp)
081fa977 +0x07d9:  mov    %edx,0x4(%esp)
081fa97b +0x07dd:  mov    0x10(%ebp),%eax
081fa97e +0x07e0:  mov    %eax,(%esp)
081fa981 +0x07e3:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081fa986 +0x07e8:  movl   $0x1e,0x8(%esp)
081fa98e +0x07f0:  movl   $0x0,0x4(%esp)
081fa996 +0x07f8:  lea    -0x1ea(%ebp),%eax
081fa99c +0x07fe:  mov    %eax,(%esp)
081fa99f +0x0801:  call   0807dcc0 <_init+0x5b8>
081fa9a4 +0x0806:  mov    -0x4db(%ebp),%eax
081fa9aa +0x080c:  lea    -0x4e9(%ebp),%edx
081fa9b0 +0x0812:  add    $0x12,%edx
081fa9b3 +0x0815:  mov    %eax,0x8(%esp)
081fa9b7 +0x0819:  mov    %edx,0x4(%esp)
081fa9bb +0x081d:  lea    -0x1ea(%ebp),%eax
081fa9c1 +0x0823:  mov    %eax,(%esp)
081fa9c4 +0x0826:  call   0807d8d0 <_init+0x1c8>
081fa9c9 +0x082b:  lea    -0x4e9(%ebp),%eax
081fa9cf +0x0831:  lea    0x12(%eax),%ebx
081fa9d2 +0x0834:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fa9d7 +0x0839:  mov    %ebx,0x4(%esp)
081fa9db +0x083d:  mov    %eax,(%esp)
081fa9de +0x0840:  call   086cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>  ; GameWorld::GetIDUserInIDMap(char const*)
081fa9e3 +0x0845:  mov    %eax,-0x84(%ebp)
081fa9e9 +0x084b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fa9ee +0x0850:  mov    -0x84(%ebp),%edx
081fa9f4 +0x0856:  mov    %edx,0x4(%esp)
081fa9f8 +0x085a:  mov    %eax,(%esp)
081fa9fb +0x085d:  call   086c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>  ; GameWorld::find_user_from_world_byaccid(unsigned int)
081faa00 +0x0862:  mov    %eax,-0x80(%ebp)
081faa03 +0x0865:  cmpl   $0x0,-0x80(%ebp)
081faa07 +0x0869:  je     081faaaf <+0x911>
081faa0d +0x086f:  mov    -0x4db(%ebp),%eax
081faa13 +0x0875:  mov    %eax,0x4(%esp)
081faa17 +0x0879:  lea    -0x1cc(%ebp),%eax
081faa1d +0x087f:  mov    %eax,(%esp)
081faa20 +0x0882:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081faa25 +0x0887:  mov    -0x4db(%ebp),%eax
081faa2b +0x088d:  lea    -0x4e9(%ebp),%edx
081faa31 +0x0893:  add    $0x12,%edx
081faa34 +0x0896:  mov    %eax,0x8(%esp)
081faa38 +0x089a:  mov    %edx,0x4(%esp)
081faa3c +0x089e:  lea    -0x1cc(%ebp),%eax
081faa42 +0x08a4:  mov    %eax,(%esp)
081faa45 +0x08a7:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081faa4a +0x08ac:  movl   $0x1,0x4(%esp)
081faa52 +0x08b4:  lea    -0x1cc(%ebp),%eax
081faa58 +0x08ba:  mov    %eax,(%esp)
081faa5b +0x08bd:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081faa60 +0x08c2:  lea    -0x1cc(%ebp),%eax
081faa66 +0x08c8:  mov    %eax,0x4(%esp)
081faa6a +0x08cc:  mov    0xc(%ebp),%eax
081faa6d +0x08cf:  mov    %eax,(%esp)
081faa70 +0x08d2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081faa75 +0x08d7:  lea    -0x1cc(%ebp),%eax
081faa7b +0x08dd:  mov    %eax,0x4(%esp)
081faa7f +0x08e1:  mov    -0x80(%ebp),%eax
081faa82 +0x08e4:  mov    %eax,(%esp)
081faa85 +0x08e7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081faa8a +0x08ec:  movl   $0x0,0xc(%esp)
081faa92 +0x08f4:  movl   $0x1,0x8(%esp)
081faa9a +0x08fc:  movl   $0x14,0x4(%esp)
081faaa2 +0x0904:  mov    -0x80(%ebp),%eax
081faaa5 +0x0907:  mov    %eax,(%esp)
081faaa8 +0x090a:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
081faaad +0x090f:  jmp    081faac4 <+0x926>
081faaaf +0x0911:  lea    -0x1c0(%ebp),%eax
081faab5 +0x0917:  mov    %eax,0x4(%esp)
081faab9 +0x091b:  mov    0xc(%ebp),%eax
081faabc +0x091e:  mov    %eax,(%esp)
081faabf +0x0921:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081faac4 +0x0926:  lea    -0x4e9(%ebp),%eax
081faaca +0x092c:  lea    0x12(%eax),%esi
081faacd +0x092f:  mov    0xc(%ebp),%eax
081faad0 +0x0932:  mov    %eax,(%esp)
081faad3 +0x0935:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081faad8 +0x093a:  mov    %eax,%ebx
081faada +0x093c:  movl   $0x0,0xc(%esp)
081faae2 +0x0944:  movl   $0x8993,0x8(%esp)
081faaea +0x094c:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081faaf2 +0x0954:  lea    -0x174(%ebp),%eax
081faaf8 +0x095a:  mov    %eax,(%esp)
081faafb +0x095d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fab00 +0x0962:  mov    %esi,0xc(%esp)
081fab04 +0x0966:  mov    %ebx,0x8(%esp)
081fab08 +0x096a:  movl   $"GM(%s) expel %s \n",0x4(%esp)
081fab10 +0x0972:  lea    -0x174(%ebp),%eax
081fab16 +0x0978:  mov    %eax,(%esp)
081fab19 +0x097b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fab1e +0x0980:  jmp    081fc478 <+0x22da>
081fab23 +0x0985:  mov    0xc(%ebp),%eax
081fab26 +0x0988:  mov    %eax,(%esp)
081fab29 +0x098b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fab2e +0x0990:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fab34 +0x0996:  mov    %eax,0x4(%esp)
081fab38 +0x099a:  mov    %edx,(%esp)
081fab3b +0x099d:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081fab40 +0x09a2:  xor    $0x1,%eax
081fab43 +0x09a5:  test   %al,%al
081fab45 +0x09a7:  jne    081fc43b <+0x229d>
081fab4b +0x09ad:  mov    0xc(%ebp),%eax
081fab4e +0x09b0:  mov    %eax,(%esp)
081fab51 +0x09b3:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fab56 +0x09b8:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fab5c +0x09be:  mov    %eax,0x4(%esp)
081fab60 +0x09c2:  mov    %edx,(%esp)
081fab63 +0x09c5:  call   082993d8 <_ZN11CGM_Manager10GetGmLevelEj>  ; CGM_Manager::GetGmLevel(unsigned int)
081fab68 +0x09ca:  test   %eax,%eax
081fab6a +0x09cc:  setle  %al
081fab6d +0x09cf:  test   %al,%al
081fab6f +0x09d1:  jne    081fc43e <+0x22a0>
081fab75 +0x09d7:  lea    -0x4e9(%ebp),%eax
081fab7b +0x09dd:  add    $0xe,%eax
081fab7e +0x09e0:  mov    %eax,0x4(%esp)
081fab82 +0x09e4:  mov    0x10(%ebp),%eax
081fab85 +0x09e7:  mov    %eax,(%esp)
081fab88 +0x09ea:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081fab8d +0x09ef:  lea    -0x4e9(%ebp),%eax
081fab93 +0x09f5:  add    $0x12,%eax
081fab96 +0x09f8:  mov    %eax,0x4(%esp)
081fab9a +0x09fc:  mov    0x10(%ebp),%eax
081fab9d +0x09ff:  mov    %eax,(%esp)
081faba0 +0x0a02:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081faba5 +0x0a07:  mov    -0x4d7(%ebp),%eax
081fabab +0x0a0d:  lea    -0x4e9(%ebp),%edx
081fabb1 +0x0a13:  add    $0x16,%edx
081fabb4 +0x0a16:  mov    %eax,0xc(%esp)
081fabb8 +0x0a1a:  movl   $0x1e,0x8(%esp)
081fabc0 +0x0a22:  mov    %edx,0x4(%esp)
081fabc4 +0x0a26:  mov    0x10(%ebp),%eax
081fabc7 +0x0a29:  mov    %eax,(%esp)
081fabca +0x0a2c:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081fabcf +0x0a31:  movl   $0x0,-0x78(%ebp)
081fabd6 +0x0a38:  mov    -0x4d7(%ebp),%eax
081fabdc +0x0a3e:  mov    %eax,-0x74(%ebp)
081fabdf +0x0a41:  mov    -0x4db(%ebp),%eax
081fabe5 +0x0a47:  cmp    $0x59f,%eax
081fabea +0x0a4c:  jle    081fabf5 <+0xa57>
081fabec +0x0a4e:  movl   $&_ZL14gUnicodeBuffer+0xac54,-0x78(%ebp)
081fabf3 +0x0a55:  jmp    081fac1f <+0xa81>
081fabf5 +0x0a57:  mov    -0x4db(%ebp),%eax
081fabfb +0x0a5d:  test   %eax,%eax
081fabfd +0x0a5f:  jg     081fac08 <+0xa6a>
081fabff +0x0a61:  movl   $0x3c,-0x78(%ebp)
081fac06 +0x0a68:  jmp    081fac1f <+0xa81>
081fac08 +0x0a6a:  mov    -0x4db(%ebp),%eax
081fac0e +0x0a70:  shl    $0x2,%eax
081fac11 +0x0a73:  mov    %eax,%edx
081fac13 +0x0a75:  shl    $0x4,%edx
081fac16 +0x0a78:  mov    %edx,%ecx
081fac18 +0x0a7a:  sub    %eax,%ecx
081fac1a +0x0a7c:  mov    %ecx,%eax
081fac1c +0x0a7e:  mov    %eax,-0x78(%ebp)
081fac1f +0x0a81:  movl   $0x1e,0x8(%esp)
081fac27 +0x0a89:  movl   $0x0,0x4(%esp)
081fac2f +0x0a91:  lea    -0x208(%ebp),%eax
081fac35 +0x0a97:  mov    %eax,(%esp)
081fac38 +0x0a9a:  call   0807dcc0 <_init+0x5b8>
081fac3d +0x0a9f:  mov    -0x74(%ebp),%eax
081fac40 +0x0aa2:  lea    -0x4e9(%ebp),%edx
081fac46 +0x0aa8:  add    $0x16,%edx
081fac49 +0x0aab:  mov    %eax,0x8(%esp)
081fac4d +0x0aaf:  mov    %edx,0x4(%esp)
081fac51 +0x0ab3:  lea    -0x208(%ebp),%eax
081fac57 +0x0ab9:  mov    %eax,(%esp)
081fac5a +0x0abc:  call   0807d8d0 <_init+0x1c8>
081fac5f +0x0ac1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fac64 +0x0ac6:  lea    -0x208(%ebp),%edx
081fac6a +0x0acc:  mov    %edx,0x4(%esp)
081fac6e +0x0ad0:  mov    %eax,(%esp)
081fac71 +0x0ad3:  call   086cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>  ; GameWorld::GetIDUserInIDMap(char const*)
081fac76 +0x0ad8:  mov    %eax,-0x7c(%ebp)
081fac79 +0x0adb:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fac7e +0x0ae0:  mov    -0x7c(%ebp),%edx
081fac81 +0x0ae3:  mov    %edx,0x4(%esp)
081fac85 +0x0ae7:  mov    %eax,(%esp)
081fac88 +0x0aea:  call   086c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>  ; GameWorld::find_user_from_world_byaccid(unsigned int)
081fac8d +0x0aef:  mov    %eax,-0x70(%ebp)
081fac90 +0x0af2:  cmpl   $0x0,-0x70(%ebp)
081fac94 +0x0af6:  je     081faef2 <+0xd54>
081fac9a +0x0afc:  mov    -0x78(%ebp),%ebx
081fac9d +0x0aff:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081faca2 +0x0b04:  mov    %ebx,0x8(%esp)
081faca6 +0x0b08:  lea    -0x208(%ebp),%edx
081facac +0x0b0e:  mov    %edx,0x4(%esp)
081facb0 +0x0b12:  mov    %eax,(%esp)
081facb3 +0x0b15:  call   086ce054 <_ZN9GameWorld11DisableChatEPKci>  ; GameWorld::DisableChat(char const*, int)
081facb8 +0x0b1a:  mov    -0x70(%ebp),%eax
081facbb +0x0b1d:  mov    %eax,(%esp)
081facbe +0x0b20:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081facc3 +0x0b25:  mov    %eax,%ebx
081facc5 +0x0b27:  movl   $0x0,0xc(%esp)
081faccd +0x0b2f:  movl   $0x89b8,0x8(%esp)
081facd5 +0x0b37:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081facdd +0x0b3f:  lea    -0x164(%ebp),%eax
081face3 +0x0b45:  mov    %eax,(%esp)
081face6 +0x0b48:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081faceb +0x0b4d:  mov    %ebx,0xc(%esp)
081facef +0x0b51:  lea    -0x208(%ebp),%eax
081facf5 +0x0b57:  mov    %eax,0x8(%esp)
081facf9 +0x0b5b:  movl   $"Insert timer queue @ forbidchat: %s %d\n",0x4(%esp)
081fad01 +0x0b63:  lea    -0x164(%ebp),%eax
081fad07 +0x0b69:  mov    %eax,(%esp)
081fad0a +0x0b6c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fad0f +0x0b71:  mov    -0x70(%ebp),%eax
081fad12 +0x0b74:  mov    %eax,(%esp)
081fad15 +0x0b77:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081fad1a +0x0b7c:  mov    %eax,%edi
081fad1c +0x0b7e:  mov    -0x70(%ebp),%eax
081fad1f +0x0b81:  mov    %eax,(%esp)
081fad22 +0x0b84:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
081fad27 +0x0b89:  mov    %eax,%esi
081fad29 +0x0b8b:  mov    -0x78(%ebp),%eax
081fad2c +0x0b8e:  mov    %eax,-0x500(%ebp)
081fad32 +0x0b94:  mov    -0x70(%ebp),%eax
081fad35 +0x0b97:  mov    %eax,(%esp)
081fad38 +0x0b9a:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081fad3d +0x0b9f:  mov    %eax,%ebx
081fad3f +0x0ba1:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
081fad44 +0x0ba6:  mov    %edi,0x18(%esp)
081fad48 +0x0baa:  mov    %esi,0x14(%esp)
081fad4c +0x0bae:  mov    -0x500(%ebp),%edx
081fad52 +0x0bb4:  mov    %edx,0x10(%esp)
081fad56 +0x0bb8:  movl   $0x5d,0xc(%esp)
081fad5e +0x0bc0:  mov    %ebx,0x8(%esp)
081fad62 +0x0bc4:  movl   $0x0,0x4(%esp)
081fad6a +0x0bcc:  mov    %eax,(%esp)
081fad6d +0x0bcf:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
081fad72 +0x0bd4:  mov    -0x4db(%ebp),%eax
081fad78 +0x0bda:  mov    %eax,0x4(%esp)
081fad7c +0x0bde:  lea    -0x1cc(%ebp),%eax
081fad82 +0x0be4:  mov    %eax,(%esp)
081fad85 +0x0be7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fad8a +0x0bec:  mov    -0x4d7(%ebp),%eax
081fad90 +0x0bf2:  mov    %eax,0x4(%esp)
081fad94 +0x0bf6:  lea    -0x1cc(%ebp),%eax
081fad9a +0x0bfc:  mov    %eax,(%esp)
081fad9d +0x0bff:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fada2 +0x0c04:  mov    -0x4d7(%ebp),%eax
081fada8 +0x0c0a:  lea    -0x4e9(%ebp),%edx
081fadae +0x0c10:  add    $0x16,%edx
081fadb1 +0x0c13:  mov    %eax,0x8(%esp)
081fadb5 +0x0c17:  mov    %edx,0x4(%esp)
081fadb9 +0x0c1b:  lea    -0x1cc(%ebp),%eax
081fadbf +0x0c21:  mov    %eax,(%esp)
081fadc2 +0x0c24:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081fadc7 +0x0c29:  movl   $0x1,0x4(%esp)
081fadcf +0x0c31:  lea    -0x1cc(%ebp),%eax
081fadd5 +0x0c37:  mov    %eax,(%esp)
081fadd8 +0x0c3a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081faddd +0x0c3f:  lea    -0x1cc(%ebp),%eax
081fade3 +0x0c45:  mov    %eax,0x4(%esp)
081fade7 +0x0c49:  mov    0xc(%ebp),%eax
081fadea +0x0c4c:  mov    %eax,(%esp)
081faded +0x0c4f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fadf2 +0x0c54:  lea    -0x1cc(%ebp),%eax
081fadf8 +0x0c5a:  mov    %eax,0x4(%esp)
081fadfc +0x0c5e:  mov    -0x70(%ebp),%eax
081fadff +0x0c61:  mov    %eax,(%esp)
081fae02 +0x0c64:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fae07 +0x0c69:  lea    -0x3d7(%ebp),%eax
081fae0d +0x0c6f:  mov    %eax,(%esp)
081fae10 +0x0c72:  call   0822bc70 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x131a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x131a
081fae15 +0x0c77:  mov    -0x78(%ebp),%eax
081fae18 +0x0c7a:  mov    %eax,-0x3cd(%ebp)
081fae1e +0x0c80:  mov    -0x4d7(%ebp),%eax
081fae24 +0x0c86:  mov    %eax,-0x3c9(%ebp)
081fae2a +0x0c8c:  mov    -0x4d7(%ebp),%eax
081fae30 +0x0c92:  lea    -0x4e9(%ebp),%edx
081fae36 +0x0c98:  add    $0x16,%edx
081fae39 +0x0c9b:  mov    %eax,0x8(%esp)
081fae3d +0x0c9f:  mov    %edx,0x4(%esp)
081fae41 +0x0ca3:  lea    -0x3d7(%ebp),%eax
081fae47 +0x0ca9:  add    $0x12,%eax
081fae4a +0x0cac:  mov    %eax,(%esp)
081fae4d +0x0caf:  call   0807d8d0 <_init+0x1c8>
081fae52 +0x0cb4:  lea    -0x3d7(%ebp),%ebx
081fae58 +0x0cba:  mov    -0x70(%ebp),%eax
081fae5b +0x0cbd:  mov    %eax,(%esp)
081fae5e +0x0cc0:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081fae63 +0x0cc5:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081fae69 +0x0ccb:  mov    %eax,0x4(%esp)
081fae6d +0x0ccf:  mov    %edx,(%esp)
081fae70 +0x0cd2:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081fae75 +0x0cd7:  movl   $0x30,0x8(%esp)
081fae7d +0x0cdf:  mov    %ebx,0x4(%esp)
081fae81 +0x0ce3:  mov    %eax,(%esp)
081fae84 +0x0ce6:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
081fae89 +0x0ceb:  mov    -0x4db(%ebp),%esi
081fae8f +0x0cf1:  lea    -0x4e9(%ebp),%eax
081fae95 +0x0cf7:  lea    0x16(%eax),%edi
081fae98 +0x0cfa:  mov    0xc(%ebp),%eax
081fae9b +0x0cfd:  mov    %eax,(%esp)
081fae9e +0x0d00:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081faea3 +0x0d05:  mov    %eax,%ebx
081faea5 +0x0d07:  movl   $0x0,0xc(%esp)
081faead +0x0d0f:  movl   $0x89ce,0x8(%esp)
081faeb5 +0x0d17:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081faebd +0x0d1f:  lea    -0x154(%ebp),%eax
081faec3 +0x0d25:  mov    %eax,(%esp)
081faec6 +0x0d28:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081faecb +0x0d2d:  mov    %esi,0x10(%esp)
081faecf +0x0d31:  mov    %edi,0xc(%esp)
081faed3 +0x0d35:  mov    %ebx,0x8(%esp)
081faed7 +0x0d39:  movl   $"GM(%s) forbid chat %s for %d mins \n",0x4(%esp)
081faedf +0x0d41:  lea    -0x154(%ebp),%eax
081faee5 +0x0d47:  mov    %eax,(%esp)
081faee8 +0x0d4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081faeed +0x0d4f:  jmp    081fc478 <+0x22da>
081faef2 +0x0d54:  lea    -0x1c0(%ebp),%eax
081faef8 +0x0d5a:  mov    %eax,0x4(%esp)
081faefc +0x0d5e:  mov    0xc(%ebp),%eax
081faeff +0x0d61:  mov    %eax,(%esp)
081faf02 +0x0d64:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081faf07 +0x0d69:  jmp    081fc478 <+0x22da>
081faf0c +0x0d6e:  mov    0xc(%ebp),%eax
081faf0f +0x0d71:  mov    %eax,(%esp)
081faf12 +0x0d74:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081faf17 +0x0d79:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081faf1d +0x0d7f:  mov    %eax,0x4(%esp)
081faf21 +0x0d83:  mov    %edx,(%esp)
081faf24 +0x0d86:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081faf29 +0x0d8b:  xor    $0x1,%eax
081faf2c +0x0d8e:  test   %al,%al
081faf2e +0x0d90:  jne    081fc441 <+0x22a3>
081faf34 +0x0d96:  mov    0xc(%ebp),%eax
081faf37 +0x0d99:  mov    %eax,(%esp)
081faf3a +0x0d9c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081faf3f +0x0da1:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081faf45 +0x0da7:  mov    %eax,0x4(%esp)
081faf49 +0x0dab:  mov    %edx,(%esp)
081faf4c +0x0dae:  call   082993d8 <_ZN11CGM_Manager10GetGmLevelEj>  ; CGM_Manager::GetGmLevel(unsigned int)
081faf51 +0x0db3:  test   %eax,%eax
081faf53 +0x0db5:  setle  %al
081faf56 +0x0db8:  test   %al,%al
081faf58 +0x0dba:  jne    081fc444 <+0x22a6>
081faf5e +0x0dc0:  lea    -0x4e9(%ebp),%eax
081faf64 +0x0dc6:  add    $0xe,%eax
081faf67 +0x0dc9:  mov    %eax,0x4(%esp)
081faf6b +0x0dcd:  mov    0x10(%ebp),%eax
081faf6e +0x0dd0:  mov    %eax,(%esp)
081faf71 +0x0dd3:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081faf76 +0x0dd8:  lea    -0x4e9(%ebp),%eax
081faf7c +0x0dde:  add    $0x12,%eax
081faf7f +0x0de1:  mov    %eax,0x4(%esp)
081faf83 +0x0de5:  mov    0x10(%ebp),%eax
081faf86 +0x0de8:  mov    %eax,(%esp)
081faf89 +0x0deb:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081faf8e +0x0df0:  mov    -0x4d7(%ebp),%eax
081faf94 +0x0df6:  lea    -0x4e9(%ebp),%edx
081faf9a +0x0dfc:  add    $0x16,%edx
081faf9d +0x0dff:  mov    %eax,0xc(%esp)
081fafa1 +0x0e03:  movl   $0x1e,0x8(%esp)
081fafa9 +0x0e0b:  mov    %edx,0x4(%esp)
081fafad +0x0e0f:  mov    0x10(%ebp),%eax
081fafb0 +0x0e12:  mov    %eax,(%esp)
081fafb3 +0x0e15:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081fafb8 +0x0e1a:  movl   $0x0,-0x68(%ebp)
081fafbf +0x0e21:  mov    -0x4d7(%ebp),%eax
081fafc5 +0x0e27:  mov    %eax,-0x64(%ebp)
081fafc8 +0x0e2a:  mov    -0x4db(%ebp),%eax
081fafce +0x0e30:  cmp    $0x59f,%eax
081fafd3 +0x0e35:  jle    081fafde <+0xe40>
081fafd5 +0x0e37:  movl   $&_ZL14gUnicodeBuffer+0xac54,-0x68(%ebp)
081fafdc +0x0e3e:  jmp    081fb008 <+0xe6a>
081fafde +0x0e40:  mov    -0x4db(%ebp),%eax
081fafe4 +0x0e46:  test   %eax,%eax
081fafe6 +0x0e48:  jg     081faff1 <+0xe53>
081fafe8 +0x0e4a:  movl   $0x3c,-0x68(%ebp)
081fafef +0x0e51:  jmp    081fb008 <+0xe6a>
081faff1 +0x0e53:  mov    -0x4db(%ebp),%eax
081faff7 +0x0e59:  shl    $0x2,%eax
081faffa +0x0e5c:  mov    %eax,%edx
081faffc +0x0e5e:  shl    $0x4,%edx
081fafff +0x0e61:  mov    %edx,%ecx
081fb001 +0x0e63:  sub    %eax,%ecx
081fb003 +0x0e65:  mov    %ecx,%eax
081fb005 +0x0e67:  mov    %eax,-0x68(%ebp)
081fb008 +0x0e6a:  movl   $0x1e,0x8(%esp)
081fb010 +0x0e72:  movl   $0x0,0x4(%esp)
081fb018 +0x0e7a:  lea    -0x226(%ebp),%eax
081fb01e +0x0e80:  mov    %eax,(%esp)
081fb021 +0x0e83:  call   0807dcc0 <_init+0x5b8>
081fb026 +0x0e88:  mov    -0x64(%ebp),%eax
081fb029 +0x0e8b:  lea    -0x4e9(%ebp),%edx
081fb02f +0x0e91:  add    $0x16,%edx
081fb032 +0x0e94:  mov    %eax,0x8(%esp)
081fb036 +0x0e98:  mov    %edx,0x4(%esp)
081fb03a +0x0e9c:  lea    -0x226(%ebp),%eax
081fb040 +0x0ea2:  mov    %eax,(%esp)
081fb043 +0x0ea5:  call   0807d8d0 <_init+0x1c8>
081fb048 +0x0eaa:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fb04d +0x0eaf:  lea    -0x226(%ebp),%edx
081fb053 +0x0eb5:  mov    %edx,0x4(%esp)
081fb057 +0x0eb9:  mov    %eax,(%esp)
081fb05a +0x0ebc:  call   086cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>  ; GameWorld::GetIDUserInIDMap(char const*)
081fb05f +0x0ec1:  mov    %eax,-0x6c(%ebp)
081fb062 +0x0ec4:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fb067 +0x0ec9:  mov    -0x6c(%ebp),%edx
081fb06a +0x0ecc:  mov    %edx,0x4(%esp)
081fb06e +0x0ed0:  mov    %eax,(%esp)
081fb071 +0x0ed3:  call   086c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>  ; GameWorld::find_user_from_world_byaccid(unsigned int)
081fb076 +0x0ed8:  mov    %eax,-0x60(%ebp)
081fb079 +0x0edb:  cmpl   $0x0,-0x60(%ebp)
081fb07d +0x0edf:  je     081fb272 <+0x10d4>
081fb083 +0x0ee5:  mov    -0x60(%ebp),%eax
081fb086 +0x0ee8:  mov    %eax,(%esp)
081fb089 +0x0eeb:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081fb08e +0x0ef0:  cmp    $0x3,%eax
081fb091 +0x0ef3:  sete   %al
081fb094 +0x0ef6:  test   %al,%al
081fb096 +0x0ef8:  je     081fc447 <+0x22a9>
081fb09c +0x0efe:  mov    -0x68(%ebp),%ebx
081fb09f +0x0f01:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fb0a4 +0x0f06:  mov    %ebx,0x8(%esp)
081fb0a8 +0x0f0a:  lea    -0x226(%ebp),%edx
081fb0ae +0x0f10:  mov    %edx,0x4(%esp)
081fb0b2 +0x0f14:  mov    %eax,(%esp)
081fb0b5 +0x0f17:  call   086ce27a <_ZN9GameWorld11DisableMoveEPKci>  ; GameWorld::DisableMove(char const*, int)
081fb0ba +0x0f1c:  mov    -0x60(%ebp),%eax
081fb0bd +0x0f1f:  mov    %eax,(%esp)
081fb0c0 +0x0f22:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081fb0c5 +0x0f27:  mov    %eax,%ebx
081fb0c7 +0x0f29:  movl   $0x0,0xc(%esp)
081fb0cf +0x0f31:  movl   $0x89fe,0x8(%esp)
081fb0d7 +0x0f39:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fb0df +0x0f41:  lea    -0x144(%ebp),%eax
081fb0e5 +0x0f47:  mov    %eax,(%esp)
081fb0e8 +0x0f4a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fb0ed +0x0f4f:  mov    %ebx,0xc(%esp)
081fb0f1 +0x0f53:  lea    -0x226(%ebp),%eax
081fb0f7 +0x0f59:  mov    %eax,0x8(%esp)
081fb0fb +0x0f5d:  movl   $"Insert timer queue @ forbidmove: %s %d\n",0x4(%esp)
081fb103 +0x0f65:  lea    -0x144(%ebp),%eax
081fb109 +0x0f6b:  mov    %eax,(%esp)
081fb10c +0x0f6e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fb111 +0x0f73:  mov    -0x60(%ebp),%eax
081fb114 +0x0f76:  mov    %eax,(%esp)
081fb117 +0x0f79:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081fb11c +0x0f7e:  mov    %eax,%edi
081fb11e +0x0f80:  mov    -0x60(%ebp),%eax
081fb121 +0x0f83:  mov    %eax,(%esp)
081fb124 +0x0f86:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
081fb129 +0x0f8b:  mov    %eax,%esi
081fb12b +0x0f8d:  mov    -0x68(%ebp),%eax
081fb12e +0x0f90:  mov    %eax,-0x4fc(%ebp)
081fb134 +0x0f96:  mov    -0x60(%ebp),%eax
081fb137 +0x0f99:  mov    %eax,(%esp)
081fb13a +0x0f9c:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081fb13f +0x0fa1:  mov    %eax,%ebx
081fb141 +0x0fa3:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
081fb146 +0x0fa8:  mov    %edi,0x18(%esp)
081fb14a +0x0fac:  mov    %esi,0x14(%esp)
081fb14e +0x0fb0:  mov    -0x4fc(%ebp),%edx
081fb154 +0x0fb6:  mov    %edx,0x10(%esp)
081fb158 +0x0fba:  movl   $0x5e,0xc(%esp)
081fb160 +0x0fc2:  mov    %ebx,0x8(%esp)
081fb164 +0x0fc6:  movl   $0x0,0x4(%esp)
081fb16c +0x0fce:  mov    %eax,(%esp)
081fb16f +0x0fd1:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
081fb174 +0x0fd6:  mov    -0x4db(%ebp),%eax
081fb17a +0x0fdc:  mov    %eax,0x4(%esp)
081fb17e +0x0fe0:  lea    -0x1cc(%ebp),%eax
081fb184 +0x0fe6:  mov    %eax,(%esp)
081fb187 +0x0fe9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fb18c +0x0fee:  mov    -0x4d7(%ebp),%eax
081fb192 +0x0ff4:  mov    %eax,0x4(%esp)
081fb196 +0x0ff8:  lea    -0x1cc(%ebp),%eax
081fb19c +0x0ffe:  mov    %eax,(%esp)
081fb19f +0x1001:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fb1a4 +0x1006:  mov    -0x4d7(%ebp),%eax
081fb1aa +0x100c:  lea    -0x4e9(%ebp),%edx
081fb1b0 +0x1012:  add    $0x16,%edx
081fb1b3 +0x1015:  mov    %eax,0x8(%esp)
081fb1b7 +0x1019:  mov    %edx,0x4(%esp)
081fb1bb +0x101d:  lea    -0x1cc(%ebp),%eax
081fb1c1 +0x1023:  mov    %eax,(%esp)
081fb1c4 +0x1026:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081fb1c9 +0x102b:  movl   $0x1,0x4(%esp)
081fb1d1 +0x1033:  lea    -0x1cc(%ebp),%eax
081fb1d7 +0x1039:  mov    %eax,(%esp)
081fb1da +0x103c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081fb1df +0x1041:  lea    -0x1cc(%ebp),%eax
081fb1e5 +0x1047:  mov    %eax,0x4(%esp)
081fb1e9 +0x104b:  mov    0xc(%ebp),%eax
081fb1ec +0x104e:  mov    %eax,(%esp)
081fb1ef +0x1051:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fb1f4 +0x1056:  lea    -0x1cc(%ebp),%eax
081fb1fa +0x105c:  mov    %eax,0x4(%esp)
081fb1fe +0x1060:  mov    -0x60(%ebp),%eax
081fb201 +0x1063:  mov    %eax,(%esp)
081fb204 +0x1066:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fb209 +0x106b:  mov    -0x4db(%ebp),%esi
081fb20f +0x1071:  lea    -0x4e9(%ebp),%eax
081fb215 +0x1077:  lea    0x16(%eax),%edi
081fb218 +0x107a:  mov    0xc(%ebp),%eax
081fb21b +0x107d:  mov    %eax,(%esp)
081fb21e +0x1080:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081fb223 +0x1085:  mov    %eax,%ebx
081fb225 +0x1087:  movl   $0x0,0xc(%esp)
081fb22d +0x108f:  movl   $0x8a09,0x8(%esp)
081fb235 +0x1097:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fb23d +0x109f:  lea    -0x134(%ebp),%eax
081fb243 +0x10a5:  mov    %eax,(%esp)
081fb246 +0x10a8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fb24b +0x10ad:  mov    %esi,0x10(%esp)
081fb24f +0x10b1:  mov    %edi,0xc(%esp)
081fb253 +0x10b5:  mov    %ebx,0x8(%esp)
081fb257 +0x10b9:  movl   $"GM(%s) forbid move %s for %d mins \n",0x4(%esp)
081fb25f +0x10c1:  lea    -0x134(%ebp),%eax
081fb265 +0x10c7:  mov    %eax,(%esp)
081fb268 +0x10ca:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fb26d +0x10cf:  jmp    081fc478 <+0x22da>
081fb272 +0x10d4:  lea    -0x1c0(%ebp),%eax
081fb278 +0x10da:  mov    %eax,0x4(%esp)
081fb27c +0x10de:  mov    0xc(%ebp),%eax
081fb27f +0x10e1:  mov    %eax,(%esp)
081fb282 +0x10e4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fb287 +0x10e9:  jmp    081fc478 <+0x22da>
081fb28c +0x10ee:  mov    0xc(%ebp),%eax
081fb28f +0x10f1:  mov    %eax,(%esp)
081fb292 +0x10f4:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fb297 +0x10f9:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fb29d +0x10ff:  mov    %eax,0x4(%esp)
081fb2a1 +0x1103:  mov    %edx,(%esp)
081fb2a4 +0x1106:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081fb2a9 +0x110b:  xor    $0x1,%eax
081fb2ac +0x110e:  test   %al,%al
081fb2ae +0x1110:  jne    081fc44a <+0x22ac>
081fb2b4 +0x1116:  mov    0xc(%ebp),%eax
081fb2b7 +0x1119:  mov    %eax,(%esp)
081fb2ba +0x111c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fb2bf +0x1121:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fb2c5 +0x1127:  mov    %eax,0x4(%esp)
081fb2c9 +0x112b:  mov    %edx,(%esp)
081fb2cc +0x112e:  call   082993d8 <_ZN11CGM_Manager10GetGmLevelEj>  ; CGM_Manager::GetGmLevel(unsigned int)
081fb2d1 +0x1133:  test   %eax,%eax
081fb2d3 +0x1135:  setle  %al
081fb2d6 +0x1138:  test   %al,%al
081fb2d8 +0x113a:  jne    081fc44d <+0x22af>
081fb2de +0x1140:  mov    0xc(%ebp),%eax
081fb2e1 +0x1143:  mov    %eax,(%esp)
081fb2e4 +0x1146:  call   0868bdac <_ZN15CUserCharacInfo12SetInvisibleEv>  ; CUserCharacInfo::SetInvisible()
081fb2e9 +0x114b:  mov    0xc(%ebp),%eax
081fb2ec +0x114e:  mov    %eax,(%esp)
081fb2ef +0x1151:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081fb2f4 +0x1156:  cmp    $0x3,%eax
081fb2f7 +0x1159:  sete   %al
081fb2fa +0x115c:  test   %al,%al
081fb2fc +0x115e:  je     081fb321 <+0x1183>
081fb2fe +0x1160:  movl   $0x0,0xc(%esp)
081fb306 +0x1168:  movl   $0x2,0x8(%esp)
081fb30e +0x1170:  movl   $0x0,0x4(%esp)
081fb316 +0x1178:  mov    0xc(%ebp),%eax
081fb319 +0x117b:  mov    %eax,(%esp)
081fb31c +0x117e:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
081fb321 +0x1183:  mov    0xc(%ebp),%eax
081fb324 +0x1186:  mov    %eax,(%esp)
081fb327 +0x1189:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081fb32c +0x118e:  mov    %eax,%ebx
081fb32e +0x1190:  movl   $0x0,0xc(%esp)
081fb336 +0x1198:  movl   $0x8a2b,0x8(%esp)
081fb33e +0x11a0:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fb346 +0x11a8:  lea    -0x124(%ebp),%eax
081fb34c +0x11ae:  mov    %eax,(%esp)
081fb34f +0x11b1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fb354 +0x11b6:  mov    %ebx,0x8(%esp)
081fb358 +0x11ba:  movl   $"GM(%s) is invisible \n",0x4(%esp)
081fb360 +0x11c2:  lea    -0x124(%ebp),%eax
081fb366 +0x11c8:  mov    %eax,(%esp)
081fb369 +0x11cb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fb36e +0x11d0:  jmp    081fc478 <+0x22da>
081fb373 +0x11d5:  mov    0xc(%ebp),%eax
081fb376 +0x11d8:  mov    %eax,(%esp)
081fb379 +0x11db:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fb37e +0x11e0:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fb384 +0x11e6:  mov    %eax,0x4(%esp)
081fb388 +0x11ea:  mov    %edx,(%esp)
081fb38b +0x11ed:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081fb390 +0x11f2:  xor    $0x1,%eax
081fb393 +0x11f5:  test   %al,%al
081fb395 +0x11f7:  jne    081fc450 <+0x22b2>
081fb39b +0x11fd:  mov    0xc(%ebp),%eax
081fb39e +0x1200:  mov    %eax,(%esp)
081fb3a1 +0x1203:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fb3a6 +0x1208:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fb3ac +0x120e:  mov    %eax,0x4(%esp)
081fb3b0 +0x1212:  mov    %edx,(%esp)
081fb3b3 +0x1215:  call   082993d8 <_ZN11CGM_Manager10GetGmLevelEj>  ; CGM_Manager::GetGmLevel(unsigned int)
081fb3b8 +0x121a:  test   %eax,%eax
081fb3ba +0x121c:  setle  %al
081fb3bd +0x121f:  test   %al,%al
081fb3bf +0x1221:  jne    081fc453 <+0x22b5>
081fb3c5 +0x1227:  mov    0xc(%ebp),%eax
081fb3c8 +0x122a:  mov    %eax,(%esp)
081fb3cb +0x122d:  call   0868bdc8 <_ZN15CUserCharacInfo10SetVisibleEv>  ; CUserCharacInfo::SetVisible()
081fb3d0 +0x1232:  mov    0xc(%ebp),%eax
081fb3d3 +0x1235:  mov    %eax,(%esp)
081fb3d6 +0x1238:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081fb3db +0x123d:  cmp    $0x3,%eax
081fb3de +0x1240:  sete   %al
081fb3e1 +0x1243:  test   %al,%al
081fb3e3 +0x1245:  je     081fb408 <+0x126a>
081fb3e5 +0x1247:  movl   $0x0,0xc(%esp)
081fb3ed +0x124f:  movl   $0x2,0x8(%esp)
081fb3f5 +0x1257:  movl   $0x0,0x4(%esp)
081fb3fd +0x125f:  mov    0xc(%ebp),%eax
081fb400 +0x1262:  mov    %eax,(%esp)
081fb403 +0x1265:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
081fb408 +0x126a:  mov    0xc(%ebp),%eax
081fb40b +0x126d:  mov    %eax,(%esp)
081fb40e +0x1270:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081fb413 +0x1275:  mov    %eax,%ebx
081fb415 +0x1277:  movl   $0x0,0xc(%esp)
081fb41d +0x127f:  movl   $0x8a43,0x8(%esp)
081fb425 +0x1287:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fb42d +0x128f:  lea    -0x114(%ebp),%eax
081fb433 +0x1295:  mov    %eax,(%esp)
081fb436 +0x1298:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fb43b +0x129d:  mov    %ebx,0x8(%esp)
081fb43f +0x12a1:  movl   $"GM(%s) is visible \n",0x4(%esp)
081fb447 +0x12a9:  lea    -0x114(%ebp),%eax
081fb44d +0x12af:  mov    %eax,(%esp)
081fb450 +0x12b2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fb455 +0x12b7:  jmp    081fc478 <+0x22da>
081fb45a +0x12bc:  mov    0xc(%ebp),%eax
081fb45d +0x12bf:  mov    %eax,(%esp)
081fb460 +0x12c2:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fb465 +0x12c7:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fb46b +0x12cd:  mov    %eax,0x4(%esp)
081fb46f +0x12d1:  mov    %edx,(%esp)
081fb472 +0x12d4:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081fb477 +0x12d9:  xor    $0x1,%eax
081fb47a +0x12dc:  test   %al,%al
081fb47c +0x12de:  jne    081fc456 <+0x22b8>
081fb482 +0x12e4:  mov    0xc(%ebp),%eax
081fb485 +0x12e7:  mov    %eax,(%esp)
081fb488 +0x12ea:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fb48d +0x12ef:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fb493 +0x12f5:  mov    %eax,0x4(%esp)
081fb497 +0x12f9:  mov    %edx,(%esp)
081fb49a +0x12fc:  call   082993d8 <_ZN11CGM_Manager10GetGmLevelEj>  ; CGM_Manager::GetGmLevel(unsigned int)
081fb49f +0x1301:  test   %eax,%eax
081fb4a1 +0x1303:  setle  %al
081fb4a4 +0x1306:  test   %al,%al
081fb4a6 +0x1308:  jne    081fc459 <+0x22bb>
081fb4ac +0x130e:  lea    -0x4e9(%ebp),%eax
081fb4b2 +0x1314:  add    $0xe,%eax
081fb4b5 +0x1317:  mov    %eax,0x4(%esp)
081fb4b9 +0x131b:  mov    0x10(%ebp),%eax
081fb4bc +0x131e:  mov    %eax,(%esp)
081fb4bf +0x1321:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081fb4c4 +0x1326:  lea    -0x4e9(%ebp),%eax
081fb4ca +0x132c:  add    $0x12,%eax
081fb4cd +0x132f:  mov    %eax,0x4(%esp)
081fb4d1 +0x1333:  mov    0x10(%ebp),%eax
081fb4d4 +0x1336:  mov    %eax,(%esp)
081fb4d7 +0x1339:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081fb4dc +0x133e:  mov    -0x4d7(%ebp),%eax
081fb4e2 +0x1344:  lea    -0x4e9(%ebp),%edx
081fb4e8 +0x134a:  add    $0x16,%edx
081fb4eb +0x134d:  mov    %eax,0xc(%esp)
081fb4ef +0x1351:  movl   $0x1e,0x8(%esp)
081fb4f7 +0x1359:  mov    %edx,0x4(%esp)
081fb4fb +0x135d:  mov    0x10(%ebp),%eax
081fb4fe +0x1360:  mov    %eax,(%esp)
081fb501 +0x1363:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081fb506 +0x1368:  movl   $0x1e,0x8(%esp)
081fb50e +0x1370:  movl   $0x0,0x4(%esp)
081fb516 +0x1378:  lea    -0x244(%ebp),%eax
081fb51c +0x137e:  mov    %eax,(%esp)
081fb51f +0x1381:  call   0807dcc0 <_init+0x5b8>
081fb524 +0x1386:  mov    -0x4d7(%ebp),%eax
081fb52a +0x138c:  lea    -0x4e9(%ebp),%edx
081fb530 +0x1392:  add    $0x16,%edx
081fb533 +0x1395:  mov    %eax,0x8(%esp)
081fb537 +0x1399:  mov    %edx,0x4(%esp)
081fb53b +0x139d:  lea    -0x244(%ebp),%eax
081fb541 +0x13a3:  mov    %eax,(%esp)
081fb544 +0x13a6:  call   0807d8d0 <_init+0x1c8>
081fb549 +0x13ab:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fb54e +0x13b0:  lea    -0x244(%ebp),%edx
081fb554 +0x13b6:  mov    %edx,0x4(%esp)
081fb558 +0x13ba:  mov    %eax,(%esp)
081fb55b +0x13bd:  call   086cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>  ; GameWorld::GetIDUserInIDMap(char const*)
081fb560 +0x13c2:  mov    %eax,-0x5c(%ebp)
081fb563 +0x13c5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fb568 +0x13ca:  mov    -0x5c(%ebp),%edx
081fb56b +0x13cd:  mov    %edx,0x4(%esp)
081fb56f +0x13d1:  mov    %eax,(%esp)
081fb572 +0x13d4:  call   086c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>  ; GameWorld::find_user_from_world_byaccid(unsigned int)
081fb577 +0x13d9:  mov    %eax,-0x58(%ebp)
081fb57a +0x13dc:  cmpl   $0x0,-0x58(%ebp)
081fb57e +0x13e0:  je     081fb854 <+0x16b6>
081fb584 +0x13e6:  mov    -0x4db(%ebp),%ebx
081fb58a +0x13ec:  mov    -0x58(%ebp),%eax
081fb58d +0x13ef:  mov    %eax,(%esp)
081fb590 +0x13f2:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081fb595 +0x13f7:  mov    %ebx,%ecx
081fb597 +0x13f9:  sub    %eax,%ecx
081fb599 +0x13fb:  mov    %ecx,%eax
081fb59b +0x13fd:  mov    %eax,-0x54(%ebp)
081fb59e +0x1400:  movb   $0x0,-0x4d(%ebp)
081fb5a2 +0x1404:  cmpl   $0x0,-0x54(%ebp)
081fb5a6 +0x1408:  jne    081fb5b1 <+0x1413>
081fb5a8 +0x140a:  movb   $0x0,-0x4d(%ebp)
081fb5ac +0x140e:  jmp    081fb681 <+0x14e3>
081fb5b1 +0x1413:  cmpl   $0x0,-0x54(%ebp)
081fb5b5 +0x1417:  jle    081fb61d <+0x147f>
081fb5b7 +0x1419:  movl   $0x0,-0x4c(%ebp)
081fb5be +0x1420:  jmp    081fb60e <+0x1470>
081fb5c0 +0x1422:  mov    -0x58(%ebp),%eax
081fb5c3 +0x1425:  mov    %eax,(%esp)
081fb5c6 +0x1428:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081fb5cb +0x142d:  add    $0x1,%eax
081fb5ce +0x1430:  mov    %eax,-0x104(%ebp)
081fb5d4 +0x1436:  movl   $0xc8,-0x100(%ebp)
081fb5de +0x1440:  lea    -0x104(%ebp),%eax
081fb5e4 +0x1446:  mov    %eax,0x4(%esp)
081fb5e8 +0x144a:  lea    -0x100(%ebp),%eax
081fb5ee +0x1450:  mov    %eax,(%esp)
081fb5f1 +0x1453:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
081fb5f6 +0x1458:  mov    (%eax),%eax
081fb5f8 +0x145a:  mov    %eax,0x4(%esp)
081fb5fc +0x145e:  mov    -0x58(%ebp),%eax
081fb5ff +0x1461:  mov    %eax,(%esp)
081fb602 +0x1464:  call   0867a95c <_ZN5CUser14SetCharacLevelEi>  ; CUser::SetCharacLevel(int)
081fb607 +0x1469:  mov    %al,-0x4d(%ebp)
081fb60a +0x146c:  addl   $0x1,-0x4c(%ebp)
081fb60e +0x1470:  mov    -0x4c(%ebp),%eax
081fb611 +0x1473:  cmp    -0x54(%ebp),%eax
081fb614 +0x1476:  setl   %al
081fb617 +0x1479:  test   %al,%al
081fb619 +0x147b:  jne    081fb5c0 <+0x1422>
081fb61b +0x147d:  jmp    081fb681 <+0x14e3>
081fb61d +0x147f:  movl   $0x0,-0x48(%ebp)
081fb624 +0x1486:  jmp    081fb674 <+0x14d6>
081fb626 +0x1488:  mov    -0x58(%ebp),%eax
081fb629 +0x148b:  mov    %eax,(%esp)
081fb62c +0x148e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081fb631 +0x1493:  sub    $0x1,%eax
081fb634 +0x1496:  mov    %eax,-0xfc(%ebp)
081fb63a +0x149c:  movl   $0xc8,-0xf8(%ebp)
081fb644 +0x14a6:  lea    -0xfc(%ebp),%eax
081fb64a +0x14ac:  mov    %eax,0x4(%esp)
081fb64e +0x14b0:  lea    -0xf8(%ebp),%eax
081fb654 +0x14b6:  mov    %eax,(%esp)
081fb657 +0x14b9:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
081fb65c +0x14be:  mov    (%eax),%eax
081fb65e +0x14c0:  mov    %eax,0x4(%esp)
081fb662 +0x14c4:  mov    -0x58(%ebp),%eax
081fb665 +0x14c7:  mov    %eax,(%esp)
081fb668 +0x14ca:  call   0867a95c <_ZN5CUser14SetCharacLevelEi>  ; CUser::SetCharacLevel(int)
081fb66d +0x14cf:  mov    %al,-0x4d(%ebp)
081fb670 +0x14d2:  subl   $0x1,-0x48(%ebp)
081fb674 +0x14d6:  mov    -0x48(%ebp),%eax
081fb677 +0x14d9:  cmp    -0x54(%ebp),%eax
081fb67a +0x14dc:  setg   %al
081fb67d +0x14df:  test   %al,%al
081fb67f +0x14e1:  jne    081fb626 <+0x1488>
081fb681 +0x14e3:  cmpb   $0x0,-0x4d(%ebp)
081fb685 +0x14e7:  je     081fc45c <+0x22be>
081fb68b +0x14ed:  mov    -0x58(%ebp),%eax
081fb68e +0x14f0:  mov    %eax,(%esp)
081fb691 +0x14f3:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081fb696 +0x14f8:  cmp    $0x3,%eax
081fb699 +0x14fb:  je     081fb6a5 <+0x1507>
081fb69b +0x14fd:  cmp    $0x5,%eax
081fb69e +0x1500:  je     081fb710 <+0x1572>
081fb6a0 +0x1502:  jmp    081fb756 <+0x15b8>
081fb6a5 +0x1507:  movl   $0x0,0xc(%esp)
081fb6ad +0x150f:  movl   $0x25,0x8(%esp)
081fb6b5 +0x1517:  movl   $0x1,0x4(%esp)
081fb6bd +0x151f:  mov    -0x58(%ebp),%eax
081fb6c0 +0x1522:  mov    %eax,(%esp)
081fb6c3 +0x1525:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
081fb6c8 +0x152a:  movl   $0x0,0xc(%esp)
081fb6d0 +0x1532:  movl   $0x2,0x8(%esp)
081fb6d8 +0x153a:  movl   $0x0,0x4(%esp)
081fb6e0 +0x1542:  mov    -0x58(%ebp),%eax
081fb6e3 +0x1545:  mov    %eax,(%esp)
081fb6e6 +0x1548:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
081fb6eb +0x154d:  movl   $0x1,0xc(%esp)
081fb6f3 +0x1555:  movl   $0x2,0x8(%esp)
081fb6fb +0x155d:  movl   $0x1,0x4(%esp)
081fb703 +0x1565:  mov    -0x58(%ebp),%eax
081fb706 +0x1568:  mov    %eax,(%esp)
081fb709 +0x156b:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
081fb70e +0x1570:  jmp    081fb756 <+0x15b8>
081fb710 +0x1572:  movl   $0x0,0xc(%esp)
081fb718 +0x157a:  movl   $0x25,0x8(%esp)
081fb720 +0x1582:  movl   $0x1,0x4(%esp)
081fb728 +0x158a:  mov    -0x58(%ebp),%eax
081fb72b +0x158d:  mov    %eax,(%esp)
081fb72e +0x1590:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
081fb733 +0x1595:  movl   $0x1,0xc(%esp)
081fb73b +0x159d:  movl   $0x2,0x8(%esp)
081fb743 +0x15a5:  movl   $0x2,0x4(%esp)
081fb74b +0x15ad:  mov    -0x58(%ebp),%eax
081fb74e +0x15b0:  mov    %eax,(%esp)
081fb751 +0x15b3:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
081fb756 +0x15b8:  mov    -0x4db(%ebp),%eax
081fb75c +0x15be:  mov    %eax,0x4(%esp)
081fb760 +0x15c2:  lea    -0x1cc(%ebp),%eax
081fb766 +0x15c8:  mov    %eax,(%esp)
081fb769 +0x15cb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fb76e +0x15d0:  mov    -0x4d7(%ebp),%eax
081fb774 +0x15d6:  mov    %eax,0x4(%esp)
081fb778 +0x15da:  lea    -0x1cc(%ebp),%eax
081fb77e +0x15e0:  mov    %eax,(%esp)
081fb781 +0x15e3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fb786 +0x15e8:  mov    -0x4d7(%ebp),%eax
081fb78c +0x15ee:  lea    -0x4e9(%ebp),%edx
081fb792 +0x15f4:  add    $0x16,%edx
081fb795 +0x15f7:  mov    %eax,0x8(%esp)
081fb799 +0x15fb:  mov    %edx,0x4(%esp)
081fb79d +0x15ff:  lea    -0x1cc(%ebp),%eax
081fb7a3 +0x1605:  mov    %eax,(%esp)
081fb7a6 +0x1608:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081fb7ab +0x160d:  movl   $0x1,0x4(%esp)
081fb7b3 +0x1615:  lea    -0x1cc(%ebp),%eax
081fb7b9 +0x161b:  mov    %eax,(%esp)
081fb7bc +0x161e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081fb7c1 +0x1623:  lea    -0x1cc(%ebp),%eax
081fb7c7 +0x1629:  mov    %eax,0x4(%esp)
081fb7cb +0x162d:  mov    0xc(%ebp),%eax
081fb7ce +0x1630:  mov    %eax,(%esp)
081fb7d1 +0x1633:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fb7d6 +0x1638:  lea    -0x1cc(%ebp),%eax
081fb7dc +0x163e:  mov    %eax,0x4(%esp)
081fb7e0 +0x1642:  mov    -0x58(%ebp),%eax
081fb7e3 +0x1645:  mov    %eax,(%esp)
081fb7e6 +0x1648:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fb7eb +0x164d:  mov    -0x4db(%ebp),%esi
081fb7f1 +0x1653:  lea    -0x4e9(%ebp),%eax
081fb7f7 +0x1659:  lea    0x16(%eax),%edi
081fb7fa +0x165c:  mov    0xc(%ebp),%eax
081fb7fd +0x165f:  mov    %eax,(%esp)
081fb800 +0x1662:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081fb805 +0x1667:  mov    %eax,%ebx
081fb807 +0x1669:  movl   $0x0,0xc(%esp)
081fb80f +0x1671:  movl   $0x8a89,0x8(%esp)
081fb817 +0x1679:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fb81f +0x1681:  lea    -0xf4(%ebp),%eax
081fb825 +0x1687:  mov    %eax,(%esp)
081fb828 +0x168a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fb82d +0x168f:  mov    %esi,0x10(%esp)
081fb831 +0x1693:  mov    %edi,0xc(%esp)
081fb835 +0x1697:  mov    %ebx,0x8(%esp)
081fb839 +0x169b:  movl   $"GM(%s) modify %s level to %d \n",0x4(%esp)
081fb841 +0x16a3:  lea    -0xf4(%ebp),%eax
081fb847 +0x16a9:  mov    %eax,(%esp)
081fb84a +0x16ac:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fb84f +0x16b1:  jmp    081fc478 <+0x22da>
081fb854 +0x16b6:  lea    -0x1c0(%ebp),%eax
081fb85a +0x16bc:  mov    %eax,0x4(%esp)
081fb85e +0x16c0:  mov    0xc(%ebp),%eax
081fb861 +0x16c3:  mov    %eax,(%esp)
081fb864 +0x16c6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fb869 +0x16cb:  jmp    081fc478 <+0x22da>
081fb86e +0x16d0:  mov    0xc(%ebp),%eax
081fb871 +0x16d3:  mov    %eax,(%esp)
081fb874 +0x16d6:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fb879 +0x16db:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fb87f +0x16e1:  mov    %eax,0x4(%esp)
081fb883 +0x16e5:  mov    %edx,(%esp)
081fb886 +0x16e8:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081fb88b +0x16ed:  xor    $0x1,%eax
081fb88e +0x16f0:  test   %al,%al
081fb890 +0x16f2:  jne    081fc45f <+0x22c1>
081fb896 +0x16f8:  mov    0xc(%ebp),%eax
081fb899 +0x16fb:  mov    %eax,(%esp)
081fb89c +0x16fe:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fb8a1 +0x1703:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fb8a7 +0x1709:  mov    %eax,0x4(%esp)
081fb8ab +0x170d:  mov    %edx,(%esp)
081fb8ae +0x1710:  call   082993d8 <_ZN11CGM_Manager10GetGmLevelEj>  ; CGM_Manager::GetGmLevel(unsigned int)
081fb8b3 +0x1715:  test   %eax,%eax
081fb8b5 +0x1717:  setle  %al
081fb8b8 +0x171a:  test   %al,%al
081fb8ba +0x171c:  jne    081fc462 <+0x22c4>
081fb8c0 +0x1722:  lea    -0x4e9(%ebp),%eax
081fb8c6 +0x1728:  add    $0xe,%eax
081fb8c9 +0x172b:  mov    %eax,0x4(%esp)
081fb8cd +0x172f:  mov    0x10(%ebp),%eax
081fb8d0 +0x1732:  mov    %eax,(%esp)
081fb8d3 +0x1735:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081fb8d8 +0x173a:  lea    -0x4e9(%ebp),%eax
081fb8de +0x1740:  add    $0x12,%eax
081fb8e1 +0x1743:  mov    %eax,0x4(%esp)
081fb8e5 +0x1747:  mov    0x10(%ebp),%eax
081fb8e8 +0x174a:  mov    %eax,(%esp)
081fb8eb +0x174d:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081fb8f0 +0x1752:  lea    -0x4e9(%ebp),%eax
081fb8f6 +0x1758:  add    $0x14,%eax
081fb8f9 +0x175b:  mov    %eax,0x4(%esp)
081fb8fd +0x175f:  mov    0x10(%ebp),%eax
081fb900 +0x1762:  mov    %eax,(%esp)
081fb903 +0x1765:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081fb908 +0x176a:  mov    -0x4d5(%ebp),%eax
081fb90e +0x1770:  lea    -0x4e9(%ebp),%edx
081fb914 +0x1776:  add    $0x18,%edx
081fb917 +0x1779:  mov    %eax,0xc(%esp)
081fb91b +0x177d:  movl   $0x1e,0x8(%esp)
081fb923 +0x1785:  mov    %edx,0x4(%esp)
081fb927 +0x1789:  mov    0x10(%ebp),%eax
081fb92a +0x178c:  mov    %eax,(%esp)
081fb92d +0x178f:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081fb932 +0x1794:  movl   $0x1e,0x8(%esp)
081fb93a +0x179c:  movl   $0x0,0x4(%esp)
081fb942 +0x17a4:  lea    -0x262(%ebp),%eax
081fb948 +0x17aa:  mov    %eax,(%esp)
081fb94b +0x17ad:  call   0807dcc0 <_init+0x5b8>
081fb950 +0x17b2:  mov    -0x4d5(%ebp),%eax
081fb956 +0x17b8:  lea    -0x4e9(%ebp),%edx
081fb95c +0x17be:  add    $0x18,%edx
081fb95f +0x17c1:  mov    %eax,0x8(%esp)
081fb963 +0x17c5:  mov    %edx,0x4(%esp)
081fb967 +0x17c9:  lea    -0x262(%ebp),%eax
081fb96d +0x17cf:  mov    %eax,(%esp)
081fb970 +0x17d2:  call   0807d8d0 <_init+0x1c8>
081fb975 +0x17d7:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fb97a +0x17dc:  lea    -0x262(%ebp),%edx
081fb980 +0x17e2:  mov    %edx,0x4(%esp)
081fb984 +0x17e6:  mov    %eax,(%esp)
081fb987 +0x17e9:  call   086cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>  ; GameWorld::GetIDUserInIDMap(char const*)
081fb98c +0x17ee:  mov    %eax,-0x44(%ebp)
081fb98f +0x17f1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fb994 +0x17f6:  mov    -0x44(%ebp),%edx
081fb997 +0x17f9:  mov    %edx,0x4(%esp)
081fb99b +0x17fd:  mov    %eax,(%esp)
081fb99e +0x1800:  call   086c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>  ; GameWorld::find_user_from_world_byaccid(unsigned int)
081fb9a3 +0x1805:  mov    %eax,-0x40(%ebp)
081fb9a6 +0x1808:  cmpl   $0x0,-0x40(%ebp)
081fb9aa +0x180c:  je     081fbb88 <+0x19ea>
081fb9b0 +0x1812:  movzwl -0x4d7(%ebp),%eax
081fb9b7 +0x1819:  movzwl %ax,%edx
081fb9ba +0x181c:  mov    -0x4db(%ebp),%eax
081fb9c0 +0x1822:  movl   $0x0,0x14(%esp)
081fb9c8 +0x182a:  lea    -0x268(%ebp),%ecx
081fb9ce +0x1830:  mov    %ecx,0x10(%esp)
081fb9d2 +0x1834:  movl   $0x6,0xc(%esp)
081fb9da +0x183c:  mov    %edx,0x8(%esp)
081fb9de +0x1840:  mov    %eax,0x4(%esp)
081fb9e2 +0x1844:  mov    -0x40(%ebp),%eax
081fb9e5 +0x1847:  mov    %eax,(%esp)
081fb9e8 +0x184a:  call   0867b6d4 <_ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi>  ; CUser::AddItem(int, int, eItemAddReason, ENUM_ITEMSPACE&, int)
081fb9ed +0x184f:  mov    %eax,-0x3c(%ebp)
081fb9f0 +0x1852:  cmpl   $0x0,-0x3c(%ebp)
081fb9f4 +0x1856:  js     081fc465 <+0x22c7>
081fb9fa +0x185c:  mov    -0x40(%ebp),%eax
081fb9fd +0x185f:  mov    %eax,(%esp)
081fba00 +0x1862:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081fba05 +0x1867:  mov    %eax,%esi
081fba07 +0x1869:  mov    0xc(%ebp),%eax
081fba0a +0x186c:  mov    %eax,(%esp)
081fba0d +0x186f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081fba12 +0x1874:  mov    %eax,%ebx
081fba14 +0x1876:  movl   $0x0,0xc(%esp)
081fba1c +0x187e:  movl   $0x8ab0,0x8(%esp)
081fba24 +0x1886:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fba2c +0x188e:  lea    -0xe4(%ebp),%eax
081fba32 +0x1894:  mov    %eax,(%esp)
081fba35 +0x1897:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fba3a +0x189c:  mov    %esi,0x10(%esp)
081fba3e +0x18a0:  mov    -0x3c(%ebp),%eax
081fba41 +0x18a3:  mov    %eax,0xc(%esp)
081fba45 +0x18a7:  mov    %ebx,0x8(%esp)
081fba49 +0x18ab:  movl   $"GM(%s) granted Item(%d) to %s.",0x4(%esp)
081fba51 +0x18b3:  lea    -0xe4(%ebp),%eax
081fba57 +0x18b9:  mov    %eax,(%esp)
081fba5a +0x18bc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fba5f +0x18c1:  mov    -0x268(%ebp),%eax
081fba65 +0x18c7:  mov    -0x3c(%ebp),%edx
081fba68 +0x18ca:  mov    %edx,0xc(%esp)
081fba6c +0x18ce:  mov    %eax,0x8(%esp)
081fba70 +0x18d2:  movl   $0x1,0x4(%esp)
081fba78 +0x18da:  mov    -0x40(%ebp),%eax
081fba7b +0x18dd:  mov    %eax,(%esp)
081fba7e +0x18e0:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081fba83 +0x18e5:  mov    -0x4db(%ebp),%eax
081fba89 +0x18eb:  mov    %eax,0x4(%esp)
081fba8d +0x18ef:  lea    -0x1cc(%ebp),%eax
081fba93 +0x18f5:  mov    %eax,(%esp)
081fba96 +0x18f8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fba9b +0x18fd:  movzwl -0x4d7(%ebp),%eax
081fbaa2 +0x1904:  movzwl %ax,%eax
081fbaa5 +0x1907:  mov    %eax,0x4(%esp)
081fbaa9 +0x190b:  lea    -0x1cc(%ebp),%eax
081fbaaf +0x1911:  mov    %eax,(%esp)
081fbab2 +0x1914:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081fbab7 +0x1919:  mov    -0x4d5(%ebp),%eax
081fbabd +0x191f:  mov    %eax,0x4(%esp)
081fbac1 +0x1923:  lea    -0x1cc(%ebp),%eax
081fbac7 +0x1929:  mov    %eax,(%esp)
081fbaca +0x192c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fbacf +0x1931:  mov    -0x4d5(%ebp),%eax
081fbad5 +0x1937:  lea    -0x4e9(%ebp),%edx
081fbadb +0x193d:  add    $0x18,%edx
081fbade +0x1940:  mov    %eax,0x8(%esp)
081fbae2 +0x1944:  mov    %edx,0x4(%esp)
081fbae6 +0x1948:  lea    -0x1cc(%ebp),%eax
081fbaec +0x194e:  mov    %eax,(%esp)
081fbaef +0x1951:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081fbaf4 +0x1956:  movl   $0x1,0x4(%esp)
081fbafc +0x195e:  lea    -0x1cc(%ebp),%eax
081fbb02 +0x1964:  mov    %eax,(%esp)
081fbb05 +0x1967:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081fbb0a +0x196c:  lea    -0x1cc(%ebp),%eax
081fbb10 +0x1972:  mov    %eax,0x4(%esp)
081fbb14 +0x1976:  mov    0xc(%ebp),%eax
081fbb17 +0x1979:  mov    %eax,(%esp)
081fbb1a +0x197c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fbb1f +0x1981:  lea    -0x4e9(%ebp),%eax
081fbb25 +0x1987:  lea    0x18(%eax),%edi
081fbb28 +0x198a:  mov    -0x4db(%ebp),%esi
081fbb2e +0x1990:  mov    0xc(%ebp),%eax
081fbb31 +0x1993:  mov    %eax,(%esp)
081fbb34 +0x1996:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081fbb39 +0x199b:  mov    %eax,%ebx
081fbb3b +0x199d:  movl   $0x0,0xc(%esp)
081fbb43 +0x19a5:  movl   $0x8aba,0x8(%esp)
081fbb4b +0x19ad:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fbb53 +0x19b5:  lea    -0xd4(%ebp),%eax
081fbb59 +0x19bb:  mov    %eax,(%esp)
081fbb5c +0x19be:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fbb61 +0x19c3:  mov    %edi,0x10(%esp)
081fbb65 +0x19c7:  mov    %esi,0xc(%esp)
081fbb69 +0x19cb:  mov    %ebx,0x8(%esp)
081fbb6d +0x19cf:  movl   $"GM(%s) grant item(%d) to %s \n",0x4(%esp)
081fbb75 +0x19d7:  lea    -0xd4(%ebp),%eax
081fbb7b +0x19dd:  mov    %eax,(%esp)
081fbb7e +0x19e0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fbb83 +0x19e5:  jmp    081fc478 <+0x22da>
081fbb88 +0x19ea:  lea    -0x1c0(%ebp),%eax
081fbb8e +0x19f0:  mov    %eax,0x4(%esp)
081fbb92 +0x19f4:  mov    0xc(%ebp),%eax
081fbb95 +0x19f7:  mov    %eax,(%esp)
081fbb98 +0x19fa:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fbb9d +0x19ff:  jmp    081fc478 <+0x22da>
081fbba2 +0x1a04:  mov    0xc(%ebp),%eax
081fbba5 +0x1a07:  mov    %eax,(%esp)
081fbba8 +0x1a0a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fbbad +0x1a0f:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fbbb3 +0x1a15:  mov    %eax,0x4(%esp)
081fbbb7 +0x1a19:  mov    %edx,(%esp)
081fbbba +0x1a1c:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081fbbbf +0x1a21:  xor    $0x1,%eax
081fbbc2 +0x1a24:  test   %al,%al
081fbbc4 +0x1a26:  jne    081fc468 <+0x22ca>
081fbbca +0x1a2c:  mov    0xc(%ebp),%eax
081fbbcd +0x1a2f:  mov    %eax,(%esp)
081fbbd0 +0x1a32:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fbbd5 +0x1a37:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fbbdb +0x1a3d:  mov    %eax,0x4(%esp)
081fbbdf +0x1a41:  mov    %edx,(%esp)
081fbbe2 +0x1a44:  call   082993d8 <_ZN11CGM_Manager10GetGmLevelEj>  ; CGM_Manager::GetGmLevel(unsigned int)
081fbbe7 +0x1a49:  test   %eax,%eax
081fbbe9 +0x1a4b:  setle  %al
081fbbec +0x1a4e:  test   %al,%al
081fbbee +0x1a50:  jne    081fc46b <+0x22cd>
081fbbf4 +0x1a56:  lea    -0x4e9(%ebp),%eax
081fbbfa +0x1a5c:  add    $0xe,%eax
081fbbfd +0x1a5f:  mov    %eax,0x4(%esp)
081fbc01 +0x1a63:  mov    0x10(%ebp),%eax
081fbc04 +0x1a66:  mov    %eax,(%esp)
081fbc07 +0x1a69:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081fbc0c +0x1a6e:  mov    -0x4db(%ebp),%eax
081fbc12 +0x1a74:  lea    -0x4e9(%ebp),%edx
081fbc18 +0x1a7a:  add    $0x12,%edx
081fbc1b +0x1a7d:  mov    %eax,0xc(%esp)
081fbc1f +0x1a81:  movl   $0x1e,0x8(%esp)
081fbc27 +0x1a89:  mov    %edx,0x4(%esp)
081fbc2b +0x1a8d:  mov    0x10(%ebp),%eax
081fbc2e +0x1a90:  mov    %eax,(%esp)
081fbc31 +0x1a93:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081fbc36 +0x1a98:  movl   $0x1e,0x8(%esp)
081fbc3e +0x1aa0:  movl   $0x0,0x4(%esp)
081fbc46 +0x1aa8:  lea    -0x286(%ebp),%eax
081fbc4c +0x1aae:  mov    %eax,(%esp)
081fbc4f +0x1ab1:  call   0807dcc0 <_init+0x5b8>
081fbc54 +0x1ab6:  mov    -0x4db(%ebp),%eax
081fbc5a +0x1abc:  lea    -0x4e9(%ebp),%edx
081fbc60 +0x1ac2:  add    $0x12,%edx
081fbc63 +0x1ac5:  mov    %eax,0x8(%esp)
081fbc67 +0x1ac9:  mov    %edx,0x4(%esp)
081fbc6b +0x1acd:  lea    -0x286(%ebp),%eax
081fbc71 +0x1ad3:  mov    %eax,(%esp)
081fbc74 +0x1ad6:  call   0807d8d0 <_init+0x1c8>
081fbc79 +0x1adb:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fbc7e +0x1ae0:  lea    -0x286(%ebp),%edx
081fbc84 +0x1ae6:  mov    %edx,0x4(%esp)
081fbc88 +0x1aea:  mov    %eax,(%esp)
081fbc8b +0x1aed:  call   086cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>  ; GameWorld::GetIDUserInIDMap(char const*)
081fbc90 +0x1af2:  mov    %eax,-0x38(%ebp)
081fbc93 +0x1af5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fbc98 +0x1afa:  mov    -0x38(%ebp),%edx
081fbc9b +0x1afd:  mov    %edx,0x4(%esp)
081fbc9f +0x1b01:  mov    %eax,(%esp)
081fbca2 +0x1b04:  call   086c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>  ; GameWorld::find_user_from_world_byaccid(unsigned int)
081fbca7 +0x1b09:  mov    %eax,-0x34(%ebp)
081fbcaa +0x1b0c:  cmpl   $0x0,-0x34(%ebp)
081fbcae +0x1b10:  je     081fbddc <+0x1c3e>
081fbcb4 +0x1b16:  mov    -0x34(%ebp),%eax
081fbcb7 +0x1b19:  mov    %eax,(%esp)
081fbcba +0x1b1c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081fbcbf +0x1b21:  mov    %eax,-0x30(%ebp)
081fbcc2 +0x1b24:  cmpl   $0x0,-0x30(%ebp)
081fbcc6 +0x1b28:  je     081fbdc2 <+0x1c24>
081fbccc +0x1b2e:  movl   $0x1,0x8(%esp)
081fbcd4 +0x1b36:  mov    -0x34(%ebp),%eax
081fbcd7 +0x1b39:  mov    %eax,0x4(%esp)
081fbcdb +0x1b3d:  mov    -0x30(%ebp),%eax
081fbcde +0x1b40:  mov    %eax,(%esp)
081fbce1 +0x1b43:  call   085b29bc <_ZN6CParty15set_charac_liveEP5CUser23ENUM_USER_DUNGEON_STATE>  ; CParty::set_charac_live(CUser*, ENUM_USER_DUNGEON_STATE)
081fbce6 +0x1b48:  mov    -0x4db(%ebp),%eax
081fbcec +0x1b4e:  mov    %eax,0x4(%esp)
081fbcf0 +0x1b52:  lea    -0x1cc(%ebp),%eax
081fbcf6 +0x1b58:  mov    %eax,(%esp)
081fbcf9 +0x1b5b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fbcfe +0x1b60:  mov    -0x4db(%ebp),%eax
081fbd04 +0x1b66:  lea    -0x4e9(%ebp),%edx
081fbd0a +0x1b6c:  add    $0x12,%edx
081fbd0d +0x1b6f:  mov    %eax,0x8(%esp)
081fbd11 +0x1b73:  mov    %edx,0x4(%esp)
081fbd15 +0x1b77:  lea    -0x1cc(%ebp),%eax
081fbd1b +0x1b7d:  mov    %eax,(%esp)
081fbd1e +0x1b80:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081fbd23 +0x1b85:  movl   $0x1,0x4(%esp)
081fbd2b +0x1b8d:  lea    -0x1cc(%ebp),%eax
081fbd31 +0x1b93:  mov    %eax,(%esp)
081fbd34 +0x1b96:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081fbd39 +0x1b9b:  lea    -0x1cc(%ebp),%eax
081fbd3f +0x1ba1:  mov    %eax,0x4(%esp)
081fbd43 +0x1ba5:  mov    0xc(%ebp),%eax
081fbd46 +0x1ba8:  mov    %eax,(%esp)
081fbd49 +0x1bab:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fbd4e +0x1bb0:  lea    -0x1cc(%ebp),%eax
081fbd54 +0x1bb6:  mov    %eax,0x4(%esp)
081fbd58 +0x1bba:  mov    -0x34(%ebp),%eax
081fbd5b +0x1bbd:  mov    %eax,(%esp)
081fbd5e +0x1bc0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fbd63 +0x1bc5:  lea    -0x4e9(%ebp),%eax
081fbd69 +0x1bcb:  lea    0x12(%eax),%esi
081fbd6c +0x1bce:  mov    0xc(%ebp),%eax
081fbd6f +0x1bd1:  mov    %eax,(%esp)
081fbd72 +0x1bd4:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081fbd77 +0x1bd9:  mov    %eax,%ebx
081fbd79 +0x1bdb:  movl   $0x0,0xc(%esp)
081fbd81 +0x1be3:  movl   $0x8ae2,0x8(%esp)
081fbd89 +0x1beb:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fbd91 +0x1bf3:  lea    -0xc4(%ebp),%eax
081fbd97 +0x1bf9:  mov    %eax,(%esp)
081fbd9a +0x1bfc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fbd9f +0x1c01:  mov    %esi,0xc(%esp)
081fbda3 +0x1c05:  mov    %ebx,0x8(%esp)
081fbda7 +0x1c09:  movl   $"GM(%s) revive %s \n",0x4(%esp)
081fbdaf +0x1c11:  lea    -0xc4(%ebp),%eax
081fbdb5 +0x1c17:  mov    %eax,(%esp)
081fbdb8 +0x1c1a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fbdbd +0x1c1f:  jmp    081fc478 <+0x22da>
081fbdc2 +0x1c24:  lea    -0x1c0(%ebp),%eax
081fbdc8 +0x1c2a:  mov    %eax,0x4(%esp)
081fbdcc +0x1c2e:  mov    0xc(%ebp),%eax
081fbdcf +0x1c31:  mov    %eax,(%esp)
081fbdd2 +0x1c34:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fbdd7 +0x1c39:  jmp    081fc478 <+0x22da>
081fbddc +0x1c3e:  lea    -0x1c0(%ebp),%eax
081fbde2 +0x1c44:  mov    %eax,0x4(%esp)
081fbde6 +0x1c48:  mov    0xc(%ebp),%eax
081fbde9 +0x1c4b:  mov    %eax,(%esp)
081fbdec +0x1c4e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fbdf1 +0x1c53:  jmp    081fc478 <+0x22da>
081fbdf6 +0x1c58:  mov    0xc(%ebp),%eax
081fbdf9 +0x1c5b:  mov    %eax,(%esp)
081fbdfc +0x1c5e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fbe01 +0x1c63:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fbe07 +0x1c69:  mov    %eax,0x4(%esp)
081fbe0b +0x1c6d:  mov    %edx,(%esp)
081fbe0e +0x1c70:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081fbe13 +0x1c75:  xor    $0x1,%eax
081fbe16 +0x1c78:  test   %al,%al
081fbe18 +0x1c7a:  jne    081fc46e <+0x22d0>
081fbe1e +0x1c80:  mov    0xc(%ebp),%eax
081fbe21 +0x1c83:  mov    %eax,(%esp)
081fbe24 +0x1c86:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fbe29 +0x1c8b:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fbe2f +0x1c91:  mov    %eax,0x4(%esp)
081fbe33 +0x1c95:  mov    %edx,(%esp)
081fbe36 +0x1c98:  call   082993d8 <_ZN11CGM_Manager10GetGmLevelEj>  ; CGM_Manager::GetGmLevel(unsigned int)
081fbe3b +0x1c9d:  test   %eax,%eax
081fbe3d +0x1c9f:  setle  %al
081fbe40 +0x1ca2:  test   %al,%al
081fbe42 +0x1ca4:  jne    081fc471 <+0x22d3>
081fbe48 +0x1caa:  lea    -0x4e9(%ebp),%eax
081fbe4e +0x1cb0:  add    $0xe,%eax
081fbe51 +0x1cb3:  mov    %eax,0x4(%esp)
081fbe55 +0x1cb7:  mov    0x10(%ebp),%eax
081fbe58 +0x1cba:  mov    %eax,(%esp)
081fbe5b +0x1cbd:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081fbe60 +0x1cc2:  mov    -0x4db(%ebp),%eax
081fbe66 +0x1cc8:  lea    -0x4e9(%ebp),%edx
081fbe6c +0x1cce:  add    $0x12,%edx
081fbe6f +0x1cd1:  mov    %eax,0xc(%esp)
081fbe73 +0x1cd5:  movl   $0x1e,0x8(%esp)
081fbe7b +0x1cdd:  mov    %edx,0x4(%esp)
081fbe7f +0x1ce1:  mov    0x10(%ebp),%eax
081fbe82 +0x1ce4:  mov    %eax,(%esp)
081fbe85 +0x1ce7:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081fbe8a +0x1cec:  movl   $0x1e,0x8(%esp)
081fbe92 +0x1cf4:  movl   $0x0,0x4(%esp)
081fbe9a +0x1cfc:  lea    -0x2a4(%ebp),%eax
081fbea0 +0x1d02:  mov    %eax,(%esp)
081fbea3 +0x1d05:  call   0807dcc0 <_init+0x5b8>
081fbea8 +0x1d0a:  mov    -0x4db(%ebp),%eax
081fbeae +0x1d10:  lea    -0x4e9(%ebp),%edx
081fbeb4 +0x1d16:  add    $0x12,%edx
081fbeb7 +0x1d19:  mov    %eax,0x8(%esp)
081fbebb +0x1d1d:  mov    %edx,0x4(%esp)
081fbebf +0x1d21:  lea    -0x2a4(%ebp),%eax
081fbec5 +0x1d27:  mov    %eax,(%esp)
081fbec8 +0x1d2a:  call   0807d8d0 <_init+0x1c8>
081fbecd +0x1d2f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fbed2 +0x1d34:  lea    -0x2a4(%ebp),%edx
081fbed8 +0x1d3a:  mov    %edx,0x4(%esp)
081fbedc +0x1d3e:  mov    %eax,(%esp)
081fbedf +0x1d41:  call   086cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>  ; GameWorld::GetIDUserInIDMap(char const*)
081fbee4 +0x1d46:  mov    %eax,-0x2c(%ebp)
081fbee7 +0x1d49:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fbeec +0x1d4e:  mov    -0x2c(%ebp),%edx
081fbeef +0x1d51:  mov    %edx,0x4(%esp)
081fbef3 +0x1d55:  mov    %eax,(%esp)
081fbef6 +0x1d58:  call   086c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>  ; GameWorld::find_user_from_world_byaccid(unsigned int)
081fbefb +0x1d5d:  mov    %eax,-0x28(%ebp)
081fbefe +0x1d60:  cmpl   $0x0,-0x28(%ebp)
081fbf02 +0x1d64:  je     081fc002 <+0x1e64>
081fbf08 +0x1d6a:  movl   $0x0,0x4(%esp)
081fbf10 +0x1d72:  mov    -0x28(%ebp),%eax
081fbf13 +0x1d75:  mov    %eax,(%esp)
081fbf16 +0x1d78:  call   08657ada <_ZN5CUser14RecoverFatigueEi>  ; CUser::RecoverFatigue(int)
081fbf1b +0x1d7d:  mov    -0x28(%ebp),%eax
081fbf1e +0x1d80:  mov    %eax,(%esp)
081fbf21 +0x1d83:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
081fbf26 +0x1d88:  mov    -0x4db(%ebp),%eax
081fbf2c +0x1d8e:  mov    %eax,0x4(%esp)
081fbf30 +0x1d92:  lea    -0x1cc(%ebp),%eax
081fbf36 +0x1d98:  mov    %eax,(%esp)
081fbf39 +0x1d9b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fbf3e +0x1da0:  mov    -0x4db(%ebp),%eax
081fbf44 +0x1da6:  lea    -0x4e9(%ebp),%edx
081fbf4a +0x1dac:  add    $0x12,%edx
081fbf4d +0x1daf:  mov    %eax,0x8(%esp)
081fbf51 +0x1db3:  mov    %edx,0x4(%esp)
081fbf55 +0x1db7:  lea    -0x1cc(%ebp),%eax
081fbf5b +0x1dbd:  mov    %eax,(%esp)
081fbf5e +0x1dc0:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081fbf63 +0x1dc5:  movl   $0x1,0x4(%esp)
081fbf6b +0x1dcd:  lea    -0x1cc(%ebp),%eax
081fbf71 +0x1dd3:  mov    %eax,(%esp)
081fbf74 +0x1dd6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081fbf79 +0x1ddb:  lea    -0x1cc(%ebp),%eax
081fbf7f +0x1de1:  mov    %eax,0x4(%esp)
081fbf83 +0x1de5:  mov    0xc(%ebp),%eax
081fbf86 +0x1de8:  mov    %eax,(%esp)
081fbf89 +0x1deb:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fbf8e +0x1df0:  lea    -0x1cc(%ebp),%eax
081fbf94 +0x1df6:  mov    %eax,0x4(%esp)
081fbf98 +0x1dfa:  mov    -0x28(%ebp),%eax
081fbf9b +0x1dfd:  mov    %eax,(%esp)
081fbf9e +0x1e00:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fbfa3 +0x1e05:  lea    -0x4e9(%ebp),%eax
081fbfa9 +0x1e0b:  lea    0x12(%eax),%esi
081fbfac +0x1e0e:  mov    0xc(%ebp),%eax
081fbfaf +0x1e11:  mov    %eax,(%esp)
081fbfb2 +0x1e14:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081fbfb7 +0x1e19:  mov    %eax,%ebx
081fbfb9 +0x1e1b:  movl   $0x0,0xc(%esp)
081fbfc1 +0x1e23:  movl   $0x8b09,0x8(%esp)
081fbfc9 +0x1e2b:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fbfd1 +0x1e33:  lea    -0xb4(%ebp),%eax
081fbfd7 +0x1e39:  mov    %eax,(%esp)
081fbfda +0x1e3c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fbfdf +0x1e41:  mov    %esi,0xc(%esp)
081fbfe3 +0x1e45:  mov    %ebx,0x8(%esp)
081fbfe7 +0x1e49:  movl   $"GM(%s) reset fatigue %s \n",0x4(%esp)
081fbfef +0x1e51:  lea    -0xb4(%ebp),%eax
081fbff5 +0x1e57:  mov    %eax,(%esp)
081fbff8 +0x1e5a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fbffd +0x1e5f:  jmp    081fc478 <+0x22da>
081fc002 +0x1e64:  lea    -0x1c0(%ebp),%eax
081fc008 +0x1e6a:  mov    %eax,0x4(%esp)
081fc00c +0x1e6e:  mov    0xc(%ebp),%eax
081fc00f +0x1e71:  mov    %eax,(%esp)
081fc012 +0x1e74:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fc017 +0x1e79:  jmp    081fc478 <+0x22da>
081fc01c +0x1e7e:  mov    0xc(%ebp),%eax
081fc01f +0x1e81:  mov    %eax,(%esp)
081fc022 +0x1e84:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fc027 +0x1e89:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fc02d +0x1e8f:  mov    %eax,0x4(%esp)
081fc031 +0x1e93:  mov    %edx,(%esp)
081fc034 +0x1e96:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081fc039 +0x1e9b:  xor    $0x1,%eax
081fc03c +0x1e9e:  test   %al,%al
081fc03e +0x1ea0:  jne    081fc474 <+0x22d6>
081fc044 +0x1ea6:  mov    0xc(%ebp),%eax
081fc047 +0x1ea9:  mov    %eax,(%esp)
081fc04a +0x1eac:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fc04f +0x1eb1:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fc055 +0x1eb7:  mov    %eax,0x4(%esp)
081fc059 +0x1ebb:  mov    %edx,(%esp)
081fc05c +0x1ebe:  call   082993d8 <_ZN11CGM_Manager10GetGmLevelEj>  ; CGM_Manager::GetGmLevel(unsigned int)
081fc061 +0x1ec3:  test   %eax,%eax
081fc063 +0x1ec5:  setle  %al
081fc066 +0x1ec8:  test   %al,%al
081fc068 +0x1eca:  jne    081fc477 <+0x22d9>
081fc06e +0x1ed0:  lea    -0x4e9(%ebp),%eax
081fc074 +0x1ed6:  add    $0xe,%eax
081fc077 +0x1ed9:  mov    %eax,0x4(%esp)
081fc07b +0x1edd:  mov    0x10(%ebp),%eax
081fc07e +0x1ee0:  mov    %eax,(%esp)
081fc081 +0x1ee3:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081fc086 +0x1ee8:  lea    -0x4e9(%ebp),%eax
081fc08c +0x1eee:  add    $0x12,%eax
081fc08f +0x1ef1:  mov    %eax,0x4(%esp)
081fc093 +0x1ef5:  mov    0x10(%ebp),%eax
081fc096 +0x1ef8:  mov    %eax,(%esp)
081fc099 +0x1efb:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081fc09e +0x1f00:  mov    -0x4d7(%ebp),%eax
081fc0a4 +0x1f06:  lea    -0x4e9(%ebp),%edx
081fc0aa +0x1f0c:  add    $0x16,%edx
081fc0ad +0x1f0f:  mov    %eax,0xc(%esp)
081fc0b1 +0x1f13:  movl   $0x1e,0x8(%esp)
081fc0b9 +0x1f1b:  mov    %edx,0x4(%esp)
081fc0bd +0x1f1f:  mov    0x10(%ebp),%eax
081fc0c0 +0x1f22:  mov    %eax,(%esp)
081fc0c3 +0x1f25:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081fc0c8 +0x1f2a:  movl   $0x1e,0x8(%esp)
081fc0d0 +0x1f32:  movl   $0x0,0x4(%esp)
081fc0d8 +0x1f3a:  lea    -0x2c2(%ebp),%eax
081fc0de +0x1f40:  mov    %eax,(%esp)
081fc0e1 +0x1f43:  call   0807dcc0 <_init+0x5b8>
081fc0e6 +0x1f48:  mov    -0x4d7(%ebp),%eax
081fc0ec +0x1f4e:  lea    -0x4e9(%ebp),%edx
081fc0f2 +0x1f54:  add    $0x16,%edx
081fc0f5 +0x1f57:  mov    %eax,0x8(%esp)
081fc0f9 +0x1f5b:  mov    %edx,0x4(%esp)
081fc0fd +0x1f5f:  lea    -0x2c2(%ebp),%eax
081fc103 +0x1f65:  mov    %eax,(%esp)
081fc106 +0x1f68:  call   0807d8d0 <_init+0x1c8>
081fc10b +0x1f6d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fc110 +0x1f72:  lea    -0x2c2(%ebp),%edx
081fc116 +0x1f78:  mov    %edx,0x4(%esp)
081fc11a +0x1f7c:  mov    %eax,(%esp)
081fc11d +0x1f7f:  call   086cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>  ; GameWorld::GetIDUserInIDMap(char const*)
081fc122 +0x1f84:  mov    %eax,-0x24(%ebp)
081fc125 +0x1f87:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fc12a +0x1f8c:  mov    -0x24(%ebp),%edx
081fc12d +0x1f8f:  mov    %edx,0x4(%esp)
081fc131 +0x1f93:  mov    %eax,(%esp)
081fc134 +0x1f96:  call   086c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>  ; GameWorld::find_user_from_world_byaccid(unsigned int)
081fc139 +0x1f9b:  mov    %eax,-0x20(%ebp)
081fc13c +0x1f9e:  cmpl   $0x0,-0x20(%ebp)
081fc140 +0x1fa2:  je     081fc390 <+0x21f2>
081fc146 +0x1fa8:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081fc14b +0x1fad:  movl   $0x8b28,0x8(%esp)
081fc153 +0x1fb5:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081fc15b +0x1fbd:  mov    %eax,(%esp)
081fc15e +0x1fc0:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081fc163 +0x1fc5:  movl   $0x1,0x8(%esp)
081fc16b +0x1fcd:  mov    %eax,0x4(%esp)
081fc16f +0x1fd1:  lea    -0x2cc(%ebp),%eax
081fc175 +0x1fd7:  mov    %eax,(%esp)
081fc178 +0x1fda:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081fc17d +0x1fdf:  lea    -0x2cc(%ebp),%eax
081fc183 +0x1fe5:  mov    %eax,(%esp)
081fc186 +0x1fe8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081fc18b +0x1fed:  movl   $0x93,0x4(%esp)
081fc193 +0x1ff5:  mov    %eax,(%esp)
081fc196 +0x1ff8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081fc19b +0x1ffd:  mov    0xc(%ebp),%eax
081fc19e +0x2000:  mov    %eax,(%esp)
081fc1a1 +0x2003:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081fc1a6 +0x2008:  mov    %eax,%ebx
081fc1a8 +0x200a:  lea    -0x2cc(%ebp),%eax
081fc1ae +0x2010:  mov    %eax,(%esp)
081fc1b1 +0x2013:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081fc1b6 +0x2018:  mov    %ebx,0x4(%esp)
081fc1ba +0x201c:  mov    %eax,(%esp)
081fc1bd +0x201f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081fc1c2 +0x2024:  lea    -0x2cc(%ebp),%eax
081fc1c8 +0x202a:  mov    %eax,(%esp)
081fc1cb +0x202d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081fc1d0 +0x2032:  mov    %eax,(%esp)
081fc1d3 +0x2035:  call   082378d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcf82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcf82
081fc1d8 +0x203a:  mov    %eax,-0x1c(%ebp)
081fc1db +0x203d:  movl   $0x9,0x8(%esp)
081fc1e3 +0x2045:  movl   $0x0,0x4(%esp)
081fc1eb +0x204d:  mov    -0x1c(%ebp),%eax
081fc1ee +0x2050:  mov    %eax,(%esp)
081fc1f1 +0x2053:  call   0807dcc0 <_init+0x5b8>
081fc1f6 +0x2058:  mov    -0x20(%ebp),%eax
081fc1f9 +0x205b:  mov    %eax,(%esp)
081fc1fc +0x205e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081fc201 +0x2063:  mov    -0x1c(%ebp),%edx
081fc204 +0x2066:  mov    %eax,(%edx)
081fc206 +0x2068:  mov    -0x1c(%ebp),%eax
081fc209 +0x206b:  movb   $0x1,0x4(%eax)
081fc20d +0x206f:  mov    -0x4db(%ebp),%eax
081fc213 +0x2075:  test   %eax,%eax
081fc215 +0x2077:  jg     081fc223 <+0x2085>
081fc217 +0x2079:  mov    -0x1c(%ebp),%eax
081fc21a +0x207c:  movl   $0x1,0x5(%eax)
081fc221 +0x2083:  jmp    081fc248 <+0x20aa>
081fc223 +0x2085:  mov    -0x4db(%ebp),%eax
081fc229 +0x208b:  cmp    $0x63,%eax
081fc22c +0x208e:  jle    081fc23a <+0x209c>
081fc22e +0x2090:  mov    -0x1c(%ebp),%eax
081fc231 +0x2093:  movl   $0x64,0x5(%eax)
081fc238 +0x209a:  jmp    081fc248 <+0x20aa>
081fc23a +0x209c:  mov    -0x4db(%ebp),%eax
081fc240 +0x20a2:  mov    %eax,%edx
081fc242 +0x20a4:  mov    -0x1c(%ebp),%eax
081fc245 +0x20a7:  mov    %edx,0x5(%eax)
081fc248 +0x20aa:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081fc24d +0x20af:  lea    -0x2cc(%ebp),%edx
081fc253 +0x20b5:  mov    %edx,0x8(%esp)
081fc257 +0x20b9:  movl   $0x2,0x4(%esp)
081fc25f +0x20c1:  mov    %eax,(%esp)
081fc262 +0x20c4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081fc267 +0x20c9:  mov    -0x4db(%ebp),%eax
081fc26d +0x20cf:  mov    %eax,0x4(%esp)
081fc271 +0x20d3:  lea    -0x1cc(%ebp),%eax
081fc277 +0x20d9:  mov    %eax,(%esp)
081fc27a +0x20dc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fc27f +0x20e1:  mov    -0x4d7(%ebp),%eax
081fc285 +0x20e7:  mov    %eax,0x4(%esp)
081fc289 +0x20eb:  lea    -0x1cc(%ebp),%eax
081fc28f +0x20f1:  mov    %eax,(%esp)
081fc292 +0x20f4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fc297 +0x20f9:  mov    -0x4d7(%ebp),%eax
081fc29d +0x20ff:  lea    -0x4e9(%ebp),%edx
081fc2a3 +0x2105:  add    $0x16,%edx
081fc2a6 +0x2108:  mov    %eax,0x8(%esp)
081fc2aa +0x210c:  mov    %edx,0x4(%esp)
081fc2ae +0x2110:  lea    -0x1cc(%ebp),%eax
081fc2b4 +0x2116:  mov    %eax,(%esp)
081fc2b7 +0x2119:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081fc2bc +0x211e:  movl   $0x1,0x4(%esp)
081fc2c4 +0x2126:  lea    -0x1cc(%ebp),%eax
081fc2ca +0x212c:  mov    %eax,(%esp)
081fc2cd +0x212f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081fc2d2 +0x2134:  lea    -0x1cc(%ebp),%eax
081fc2d8 +0x213a:  mov    %eax,0x4(%esp)
081fc2dc +0x213e:  mov    0xc(%ebp),%eax
081fc2df +0x2141:  mov    %eax,(%esp)
081fc2e2 +0x2144:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fc2e7 +0x2149:  lea    -0x1cc(%ebp),%eax
081fc2ed +0x214f:  mov    %eax,0x4(%esp)
081fc2f1 +0x2153:  mov    -0x20(%ebp),%eax
081fc2f4 +0x2156:  mov    %eax,(%esp)
081fc2f7 +0x2159:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fc2fc +0x215e:  mov    -0x4db(%ebp),%esi
081fc302 +0x2164:  lea    -0x4e9(%ebp),%eax
081fc308 +0x216a:  lea    0x16(%eax),%edi
081fc30b +0x216d:  mov    0xc(%ebp),%eax
081fc30e +0x2170:  mov    %eax,(%esp)
081fc311 +0x2173:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081fc316 +0x2178:  mov    %eax,%ebx
081fc318 +0x217a:  movl   $0x0,0xc(%esp)
081fc320 +0x2182:  movl   $0x8b44,0x8(%esp)
081fc328 +0x218a:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fc330 +0x2192:  lea    -0xa4(%ebp),%eax
081fc336 +0x2198:  mov    %eax,(%esp)
081fc339 +0x219b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fc33e +0x21a0:  mov    %esi,0x10(%esp)
081fc342 +0x21a4:  mov    %edi,0xc(%esp)
081fc346 +0x21a8:  mov    %ebx,0x8(%esp)
081fc34a +0x21ac:  movl   $"GM(%s) forbid play %s for %d days \n",0x4(%esp)
081fc352 +0x21b4:  lea    -0xa4(%ebp),%eax
081fc358 +0x21ba:  mov    %eax,(%esp)
081fc35b +0x21bd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fc360 +0x21c2:  jmp    081fc37d <+0x21df>
081fc362 +0x21c4:  mov    %edx,%ebx
081fc364 +0x21c6:  mov    %eax,%esi
081fc366 +0x21c8:  lea    -0x2cc(%ebp),%eax
081fc36c +0x21ce:  mov    %eax,(%esp)
081fc36f +0x21d1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081fc374 +0x21d6:  mov    %esi,%eax
081fc376 +0x21d8:  mov    %ebx,%edx
081fc378 +0x21da:  jmp    081fc48d <+0x22ef>
081fc37d +0x21df:  lea    -0x2cc(%ebp),%eax
081fc383 +0x21e5:  mov    %eax,(%esp)
081fc386 +0x21e8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081fc38b +0x21ed:  jmp    081fc478 <+0x22da>
081fc390 +0x21f2:  lea    -0x1c0(%ebp),%eax
081fc396 +0x21f8:  mov    %eax,0x4(%esp)
081fc39a +0x21fc:  mov    0xc(%ebp),%eax
081fc39d +0x21ff:  mov    %eax,(%esp)
081fc3a0 +0x2202:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fc3a5 +0x2207:  jmp    081fc478 <+0x22da>
081fc3aa +0x220c:  mov    0xc(%ebp),%eax
081fc3ad +0x220f:  mov    %eax,(%esp)
081fc3b0 +0x2212:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fc3b5 +0x2217:  movl   $0x0,0x4(%esp)
081fc3bd +0x221f:  mov    %eax,(%esp)
081fc3c0 +0x2222:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081fc3c5 +0x2227:  mov    %eax,%ebx
081fc3c7 +0x2229:  movzbl -0x4dc(%ebp),%eax
081fc3ce +0x2230:  movzbl %al,%esi
081fc3d1 +0x2233:  movl   $0x0,0xc(%esp)
081fc3d9 +0x223b:  movl   $0x8b52,0x8(%esp)
081fc3e1 +0x2243:  movl   $&_ZZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fc3e9 +0x224b:  lea    -0x94(%ebp),%eax
081fc3ef +0x2251:  mov    %eax,(%esp)
081fc3f2 +0x2254:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fc3f7 +0x2259:  mov    %ebx,0xc(%esp)
081fc3fb +0x225d:  mov    %esi,0x8(%esp)
081fc3ff +0x2261:  movl   $"Undifined GM Command : %d by %s",0x4(%esp)
081fc407 +0x2269:  lea    -0x94(%ebp),%eax
081fc40d +0x226f:  mov    %eax,(%esp)
081fc410 +0x2272:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fc415 +0x2277:  jmp    081fc478 <+0x22da>
081fc417 +0x2279:  nop
081fc418 +0x227a:  jmp    081fc478 <+0x22da>
081fc41a +0x227c:  nop
081fc41b +0x227d:  jmp    081fc478 <+0x22da>
081fc41d +0x227f:  nop
081fc41e +0x2280:  jmp    081fc478 <+0x22da>
081fc420 +0x2282:  nop
081fc421 +0x2283:  jmp    081fc478 <+0x22da>
081fc423 +0x2285:  nop
081fc424 +0x2286:  jmp    081fc478 <+0x22da>
081fc426 +0x2288:  nop
081fc427 +0x2289:  jmp    081fc478 <+0x22da>
081fc429 +0x228b:  nop
081fc42a +0x228c:  jmp    081fc478 <+0x22da>
081fc42c +0x228e:  nop
081fc42d +0x228f:  jmp    081fc478 <+0x22da>
081fc42f +0x2291:  nop
081fc430 +0x2292:  jmp    081fc478 <+0x22da>
081fc432 +0x2294:  nop
081fc433 +0x2295:  jmp    081fc478 <+0x22da>
081fc435 +0x2297:  nop
081fc436 +0x2298:  jmp    081fc478 <+0x22da>
081fc438 +0x229a:  nop
081fc439 +0x229b:  jmp    081fc478 <+0x22da>
081fc43b +0x229d:  nop
081fc43c +0x229e:  jmp    081fc478 <+0x22da>
081fc43e +0x22a0:  nop
081fc43f +0x22a1:  jmp    081fc478 <+0x22da>
081fc441 +0x22a3:  nop
081fc442 +0x22a4:  jmp    081fc478 <+0x22da>
081fc444 +0x22a6:  nop
081fc445 +0x22a7:  jmp    081fc478 <+0x22da>
081fc447 +0x22a9:  nop
081fc448 +0x22aa:  jmp    081fc478 <+0x22da>
081fc44a +0x22ac:  nop
081fc44b +0x22ad:  jmp    081fc478 <+0x22da>
081fc44d +0x22af:  nop
081fc44e +0x22b0:  jmp    081fc478 <+0x22da>
081fc450 +0x22b2:  nop
081fc451 +0x22b3:  jmp    081fc478 <+0x22da>
081fc453 +0x22b5:  nop
081fc454 +0x22b6:  jmp    081fc478 <+0x22da>
081fc456 +0x22b8:  nop
081fc457 +0x22b9:  jmp    081fc478 <+0x22da>
081fc459 +0x22bb:  nop
081fc45a +0x22bc:  jmp    081fc478 <+0x22da>
081fc45c +0x22be:  nop
081fc45d +0x22bf:  jmp    081fc478 <+0x22da>
081fc45f +0x22c1:  nop
081fc460 +0x22c2:  jmp    081fc478 <+0x22da>
081fc462 +0x22c4:  nop
081fc463 +0x22c5:  jmp    081fc478 <+0x22da>
081fc465 +0x22c7:  nop
081fc466 +0x22c8:  jmp    081fc478 <+0x22da>
081fc468 +0x22ca:  nop
081fc469 +0x22cb:  jmp    081fc478 <+0x22da>
081fc46b +0x22cd:  nop
081fc46c +0x22ce:  jmp    081fc478 <+0x22da>
081fc46e +0x22d0:  nop
081fc46f +0x22d1:  jmp    081fc478 <+0x22da>
081fc471 +0x22d3:  nop
081fc472 +0x22d4:  jmp    081fc478 <+0x22da>
081fc474 +0x22d6:  nop
081fc475 +0x22d7:  jmp    081fc478 <+0x22da>
081fc477 +0x22d9:  nop
081fc478 +0x22da:  mov    $0x0,%ebx
081fc47d +0x22df:  lea    -0x1cc(%ebp),%eax
081fc483 +0x22e5:  mov    %eax,(%esp)
081fc486 +0x22e8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081fc48b +0x22ed:  jmp    081fc4c3 <+0x2325>
081fc48d +0x22ef:  mov    %edx,%ebx
081fc48f +0x22f1:  mov    %eax,%esi
081fc491 +0x22f3:  lea    -0x1cc(%ebp),%eax
081fc497 +0x22f9:  mov    %eax,(%esp)
081fc49a +0x22fc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081fc49f +0x2301:  mov    %esi,%eax
081fc4a1 +0x2303:  mov    %ebx,%edx
081fc4a3 +0x2305:  jmp    081fc4a5 <+0x2307>
081fc4a5 +0x2307:  mov    %edx,%ebx
081fc4a7 +0x2309:  mov    %eax,%esi
081fc4a9 +0x230b:  lea    -0x1c0(%ebp),%eax
081fc4af +0x2311:  mov    %eax,(%esp)
081fc4b2 +0x2314:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081fc4b7 +0x2319:  mov    %esi,%eax
081fc4b9 +0x231b:  mov    %ebx,%edx
081fc4bb +0x231d:  mov    %eax,(%esp)
081fc4be +0x2320:  call   08ae3750 <_Unwind_Resume>
081fc4c3 +0x2325:  lea    -0x1c0(%ebp),%eax
081fc4c9 +0x232b:  mov    %eax,(%esp)
081fc4cc +0x232e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081fc4d1 +0x2333:  mov    %ebx,%eax
081fc4d3 +0x2335:  add    $0x51c,%esp
081fc4d9 +0x233b:  pop    %ebx
081fc4da +0x233c:  pop    %esi
081fc4db +0x233d:  pop    %edi
081fc4dc +0x233e:  pop    %ebp
081fc4dd +0x233f:  ret
```

## 反编译 C

```c
// Dispatcher_GM_Command::dispatch_sig @ 0x81fa19e

/* Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_GM_Command::dispatch_sig(Dispatcher_GM_Command *this,CUser *param_1,PacketBuf *param_2)

{
  size_t sVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  CMonitorServerProxy *pCVar6;
  int iVar7;
  undefined4 uVar8;
  TimerQueue *pTVar9;
  int *piVar10;
  undefined4 uVar11;
  GameWorld *pGVar12;
  Stream *pSVar13;
  CStreamGuard *pCVar14;
  byte local_4e0;
  size_t local_4df;
  ushort local_4db;
  undefined2 uStack_4d9;
  undefined2 local_4d7;
  char local_4d5 [250];
  Packet_Monitor_Notice_Message local_3db [10];
  undefined4 local_3d1;
  char acStack_3c9 [249];
  CStreamGuard local_2d0 [10];
  char local_2c6 [30];
  char local_2a8 [30];
  char local_28a [30];
  undefined4 local_26c;
  char local_266 [30];
  char local_248 [30];
  char local_22a [30];
  char local_20c [30];
  char local_1ee [30];
  PacketGuard local_1d0 [12];
  PacketGuard local_1c4 [12];
  cMyTrace local_1b8 [16];
  cMyTrace local_1a8 [16];
  cMyTrace local_198 [16];
  cMyTrace local_188 [16];
  cMyTrace local_178 [16];
  cMyTrace local_168 [16];
  cMyTrace local_158 [16];
  cMyTrace local_148 [16];
  cMyTrace local_138 [16];
  cMyTrace local_128 [16];
  cMyTrace local_118 [16];
  int local_108 [3];
  int local_fc;
  cMyTrace local_f8 [16];
  cMyTrace local_e8 [16];
  cMyTrace local_d8 [16];
  cMyTrace local_c8 [16];
  cMyTrace local_b8 [16];
  cMyTrace local_a8 [16];
  cMyTrace local_98 [16];
  uint local_88;
  CUser *local_84;
  uint local_80;
  int local_7c;
  size_t local_78;
  CUserCharacInfo *local_74;
  uint local_70;
  int local_6c;
  size_t local_68;
  CUser *local_64;
  uint local_60;
  CUserCharacInfo *local_5c;
  int local_58;
  char local_51;
  int local_50;
  int local_4c;
  uint local_48;
  CUserCharacInfo *local_44;
  int local_40;
  uint local_3c;
  CUser *local_38;
  CParty *local_34;
  uint local_30;
  CUser *local_2c;
  uint local_28;
  CUserCharacInfo *local_24;
  SIG_FORBID_USER_TO_PLAY *local_20;
  
  if (param_1 == (CUser *)0x0) {
    uVar3 = LineFunc(0x88fd,"virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  else {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar4 == 0) {
      uVar3 = LineFunc(0x8902,"virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
    else {
      uVar5 = CUser::get_acc_id(param_1);
      uVar3 = NumberToString(uVar5,0);
      cMyTrace::cMyTrace(local_1b8,
                         "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)",
                         0x8908,0);
      cMyTrace::operator()(local_1b8,"GM Command : %s",uVar3);
      cVar2 = PacketBuf::get_byte(param_2,&local_4e0);
      if (cVar2 == '\x01') {
        PacketGuard::PacketGuard(local_1c4);
                    /* try { // try from 081fa2e8 to 081fa352 has its CatchHandler @ 081fc4a5 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c4,1,0x6e);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c4,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c4,99);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c4,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c4,true);
        PacketGuard::PacketGuard(local_1d0);
                    /* try { // try from 081fa36c to 081fc162 has its CatchHandler @ 081fc48d */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1d0,1,0x6e);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1d0,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1d0,(uint)local_4e0);
        switch(local_4e0) {
        case 0:
          CUser::get_acc_id(param_1);
          iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
          if (0 < iVar4) {
            CUser::get_acc_id(param_1);
            cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
            if (cVar2 == '\x01') {
              CUser::SetGameMasterMode(param_1,false);
            }
            else {
              CUser::SetGameMasterMode(param_1,true);
            }
            CUser::get_acc_id(param_1);
            CGM_Manager::TurnGmMode(GlobalData::s_GM_Manager);
          }
          break;
        case 1:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_str(param_2,(char *)&local_4db,0x100,local_4df);
              if (local_4df != 0) {
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                InterfacePacketBuf::put_str
                          ((InterfacePacketBuf *)local_1d0,(char *)&local_4db,local_4df);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                pGVar12 = (GameWorld *)G_GameWorld();
                GameWorld::send_all(pGVar12,local_1d0);
                cMyTrace::cMyTrace(local_1a8,
                                   "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x8939,0);
                cMyTrace::operator()(local_1a8,"GMC %s \n",&local_4db);
              }
            }
          }
          break;
        case 2:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_str(param_2,(char *)&local_4db,0x100,local_4df);
              if (local_4df != 0) {
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                InterfacePacketBuf::put_str
                          ((InterfacePacketBuf *)local_1d0,(char *)&local_4db,local_4df);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                iVar4 = CUser::get_area(param_1,false);
                cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
                pGVar12 = (GameWorld *)G_GameWorld();
                GameWorld::send_to_area(pGVar12,(int)cVar2,iVar4,local_1d0);
                cMyTrace::cMyTrace(local_198,
                                   "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x894a,0);
                cMyTrace::operator()(local_198,"GMZ %s \n",&local_4db);
              }
            }
          }
          break;
        case 3:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_str(param_2,(char *)&local_4db,0x100,local_4df);
              if (local_4df != 0) {
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                InterfacePacketBuf::put_str
                          ((InterfacePacketBuf *)local_1d0,(char *)&local_4db,local_4df);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                Packet_Monitor_Notice_Message::Packet_Monitor_Notice_Message(local_3db);
                local_3d1 = CONCAT31(local_3d1._1_3_,(char)local_4df);
                strncpy((char *)((int)&local_3d1 + 1),(char *)&local_4db,local_4df);
                uVar3 = CUser::GetServerGroup(param_1);
                pCVar6 = (CMonitorServerProxy *)
                         CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                                   (GlobalData::s_monitor_proxy_mgr,uVar3);
                CMonitorServerProxy::SendTcpPacket(pCVar6,(char *)local_3db,0x10b);
                cMyTrace::cMyTrace(local_188,
                                   "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x8966,0);
                cMyTrace::operator()(local_188,"GMS %s \n",&local_4db);
              }
            }
          }
          break;
        case 4:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_str(param_2,(char *)&local_4db,0x1e,local_4df);
              memset(local_1ee,0,0x1e);
              strncpy(local_1ee,(char *)&local_4db,local_4df);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_88 = GameWorld::GetIDUserInIDMap(pGVar12,(char *)&local_4db);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_84 = (CUser *)GameWorld::find_user_from_world_byaccid(pGVar12,local_88);
              if (local_84 == (CUser *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                InterfacePacketBuf::put_str
                          ((InterfacePacketBuf *)local_1d0,(char *)&local_4db,local_4df);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                CUser::Send(param_1,local_1d0);
                CUser::Send(local_84,local_1d0);
                CUser::DisConnSig(local_84,0x14,1,0);
              }
              uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_178,
                                 "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0x8993,0);
              cMyTrace::operator()(local_178,"GM(%s) expel %s \n",uVar3,&local_4db);
            }
          }
          break;
        case 5:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_int(param_2,(int *)&local_4db);
              PacketBuf::get_str(param_2,(char *)&local_4d7,0x1e,CONCAT22(uStack_4d9,local_4db));
              local_78 = CONCAT22(uStack_4d9,local_4db);
              if ((int)local_4df < 0x5a0) {
                if ((int)local_4df < 1) {
                  local_7c = 0x3c;
                }
                else {
                  local_7c = local_4df * 0x3c;
                }
              }
              else {
                local_7c = 0x15180;
              }
              memset(local_20c,0,0x1e);
              strncpy(local_20c,(char *)&local_4d7,local_78);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_80 = GameWorld::GetIDUserInIDMap(pGVar12,local_20c);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_74 = (CUserCharacInfo *)
                         GameWorld::find_user_from_world_byaccid(pGVar12,local_80);
              iVar4 = local_7c;
              if (local_74 == (CUserCharacInfo *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                pGVar12 = (GameWorld *)G_GameWorld();
                GameWorld::DisableChat(pGVar12,local_20c,iVar4);
                uVar3 = CUserCharacInfo::getCurCharacNo(local_74);
                cMyTrace::cMyTrace(local_168,
                                   "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x89b8,0);
                cMyTrace::operator()
                          (local_168,"Insert timer queue @ forbidchat: %s %d\n",local_20c,uVar3);
                uVar3 = CUserCharacInfo::getCurCharacNo(local_74);
                uVar11 = CUserCharacInfo::GetLoginTick(local_74);
                iVar4 = local_7c;
                uVar8 = CUser::GetUID((CUser *)local_74);
                pTVar9 = (TimerQueue *)G_TimerQueue();
                TimerQueue::InsertTimer(pTVar9,0,uVar8,0x5d,iVar4,uVar11,uVar3);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                InterfacePacketBuf::put_int
                          ((InterfacePacketBuf *)local_1d0,CONCAT22(uStack_4d9,local_4db));
                InterfacePacketBuf::put_str
                          ((InterfacePacketBuf *)local_1d0,(char *)&local_4d7,
                           CONCAT22(uStack_4d9,local_4db));
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                CUser::Send(param_1,local_1d0);
                CUser::Send((CUser *)local_74,local_1d0);
                Packet_Forbid_Chat_By_Monitor::Packet_Forbid_Chat_By_Monitor
                          ((Packet_Forbid_Chat_By_Monitor *)local_3db);
                local_3d1 = local_7c;
                strncpy(acStack_3c9,(char *)&local_4d7,CONCAT22(uStack_4d9,local_4db));
                uVar3 = CUser::GetServerGroup((CUser *)local_74);
                pCVar6 = (CMonitorServerProxy *)
                         CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                                   (GlobalData::s_monitor_proxy_mgr,uVar3);
                CMonitorServerProxy::SendTcpPacket(pCVar6,(char *)local_3db,0x30);
                uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                cMyTrace::cMyTrace(local_158,
                                   "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x89ce,0);
                cMyTrace::operator()
                          (local_158,"GM(%s) forbid chat %s for %d mins \n",uVar3,&local_4d7,
                           local_4df);
              }
            }
          }
          break;
        case 6:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_int(param_2,(int *)&local_4db);
              PacketBuf::get_str(param_2,(char *)&local_4d7,0x1e,CONCAT22(uStack_4d9,local_4db));
              local_68 = CONCAT22(uStack_4d9,local_4db);
              if ((int)local_4df < 0x5a0) {
                if ((int)local_4df < 1) {
                  local_6c = 0x3c;
                }
                else {
                  local_6c = local_4df * 0x3c;
                }
              }
              else {
                local_6c = 0x15180;
              }
              memset(local_22a,0,0x1e);
              strncpy(local_22a,(char *)&local_4d7,local_68);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_70 = GameWorld::GetIDUserInIDMap(pGVar12,local_22a);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_64 = (CUser *)GameWorld::find_user_from_world_byaccid(pGVar12,local_70);
              if (local_64 == (CUser *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                iVar7 = CUser::get_state(local_64);
                iVar4 = local_6c;
                if (iVar7 == 3) {
                  pGVar12 = (GameWorld *)G_GameWorld();
                  GameWorld::DisableMove(pGVar12,local_22a,iVar4);
                  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_64);
                  cMyTrace::cMyTrace(local_148,
                                     "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x89fe,0);
                  cMyTrace::operator()
                            (local_148,"Insert timer queue @ forbidmove: %s %d\n",local_22a,uVar3);
                  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_64);
                  uVar11 = CUserCharacInfo::GetLoginTick((CUserCharacInfo *)local_64);
                  iVar4 = local_6c;
                  uVar8 = CUser::GetUID(local_64);
                  pTVar9 = (TimerQueue *)G_TimerQueue();
                  TimerQueue::InsertTimer(pTVar9,0,uVar8,0x5e,iVar4,uVar11,uVar3);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_1d0,CONCAT22(uStack_4d9,local_4db));
                  InterfacePacketBuf::put_str
                            ((InterfacePacketBuf *)local_1d0,(char *)&local_4d7,
                             CONCAT22(uStack_4d9,local_4db));
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                  CUser::Send(param_1,local_1d0);
                  CUser::Send(local_64,local_1d0);
                  uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  cMyTrace::cMyTrace(local_138,
                                     "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x8a09,0);
                  cMyTrace::operator()
                            (local_138,"GM(%s) forbid move %s for %d mins \n",uVar3,&local_4d7,
                             local_4df);
                }
              }
            }
          }
          break;
        case 7:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              CUserCharacInfo::SetInvisible((CUserCharacInfo *)param_1);
              iVar4 = CUser::get_state(param_1);
              if (iVar4 == 3) {
                CUser::SendNotiPacket(param_1,0,2,0);
              }
              uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_128,
                                 "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0x8a2b,0);
              cMyTrace::operator()(local_128,"GM(%s) is invisible \n",uVar3);
            }
          }
          break;
        case 8:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              CUserCharacInfo::SetVisible((CUserCharacInfo *)param_1);
              iVar4 = CUser::get_state(param_1);
              if (iVar4 == 3) {
                CUser::SendNotiPacket(param_1,0,2,0);
              }
              uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_118,
                                 "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0x8a43,0);
              cMyTrace::operator()(local_118,"GM(%s) is visible \n",uVar3);
            }
          }
          break;
        case 9:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_int(param_2,(int *)&local_4db);
              PacketBuf::get_str(param_2,(char *)&local_4d7,0x1e,CONCAT22(uStack_4d9,local_4db));
              memset(local_248,0,0x1e);
              strncpy(local_248,(char *)&local_4d7,CONCAT22(uStack_4d9,local_4db));
              pGVar12 = (GameWorld *)G_GameWorld();
              local_60 = GameWorld::GetIDUserInIDMap(pGVar12,local_248);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_5c = (CUserCharacInfo *)
                         GameWorld::find_user_from_world_byaccid(pGVar12,local_60);
              sVar1 = local_4df;
              if (local_5c == (CUserCharacInfo *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                local_58 = CUserCharacInfo::get_charac_level(local_5c);
                local_58 = sVar1 - local_58;
                local_51 = '\0';
                if (local_58 == 0) {
                  local_51 = '\0';
                }
                else if (local_58 < 1) {
                  for (local_4c = 0; local_58 < local_4c; local_4c = local_4c + -1) {
                    local_108[2] = CUserCharacInfo::get_charac_level(local_5c);
                    local_108[2] = local_108[2] + -1;
                    local_fc = 200;
                    piVar10 = std::min<int>(&local_fc,local_108 + 2);
                    local_51 = CUser::SetCharacLevel((CUser *)local_5c,*piVar10);
                  }
                }
                else {
                  for (local_50 = 0; local_50 < local_58; local_50 = local_50 + 1) {
                    local_108[0] = CUserCharacInfo::get_charac_level(local_5c);
                    local_108[0] = local_108[0] + 1;
                    local_108[1] = 200;
                    piVar10 = std::min<int>(local_108 + 1,local_108);
                    local_51 = CUser::SetCharacLevel((CUser *)local_5c,*piVar10);
                  }
                }
                if (local_51 != '\0') {
                  iVar4 = CUser::get_state((CUser *)local_5c);
                  if (iVar4 == 3) {
                    CUser::SendNotiPacket((CUser *)local_5c,1,0x25,0);
                    CUser::SendNotiPacket((CUser *)local_5c,0,2,0);
                    CUser::SendNotiPacket((CUser *)local_5c,1,2,1);
                  }
                  else if (iVar4 == 5) {
                    CUser::SendNotiPacket((CUser *)local_5c,1,0x25,0);
                    CUser::SendNotiPacket((CUser *)local_5c,2,2,1);
                  }
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_1d0,CONCAT22(uStack_4d9,local_4db));
                  InterfacePacketBuf::put_str
                            ((InterfacePacketBuf *)local_1d0,(char *)&local_4d7,
                             CONCAT22(uStack_4d9,local_4db));
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                  CUser::Send(param_1,local_1d0);
                  CUser::Send((CUser *)local_5c,local_1d0);
                  uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  cMyTrace::cMyTrace(local_f8,
                                     "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x8a89,0);
                  cMyTrace::operator()
                            (local_f8,"GM(%s) modify %s level to %d \n",uVar3,&local_4d7,local_4df);
                }
              }
            }
          }
          break;
        case 10:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_short(param_2,&local_4db);
              PacketBuf::get_int(param_2,(int *)&uStack_4d9);
              PacketBuf::get_str(param_2,local_4d5,0x1e,CONCAT22(local_4d7,uStack_4d9));
              memset(local_266,0,0x1e);
              strncpy(local_266,local_4d5,CONCAT22(local_4d7,uStack_4d9));
              pGVar12 = (GameWorld *)G_GameWorld();
              local_48 = GameWorld::GetIDUserInIDMap(pGVar12,local_266);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_44 = (CUserCharacInfo *)
                         GameWorld::find_user_from_world_byaccid(pGVar12,local_48);
              if (local_44 == (CUserCharacInfo *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                local_40 = CUser::AddItem((CUser *)local_44,local_4df,local_4db,6,&local_26c,0);
                if (-1 < local_40) {
                  uVar3 = CUserCharacInfo::getCurCharacName(local_44);
                  uVar11 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  cMyTrace::cMyTrace(local_e8,
                                     "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x8ab0,0);
                  cMyTrace::operator()
                            (local_e8,"GM(%s) granted Item(%d) to %s.",uVar11,local_40,uVar3);
                  CUser::SendUpdateItemList((CUser *)local_44,1,local_26c,local_40);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1d0,(uint)local_4db);
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_1d0,CONCAT22(local_4d7,uStack_4d9));
                  InterfacePacketBuf::put_str
                            ((InterfacePacketBuf *)local_1d0,local_4d5,
                             CONCAT22(local_4d7,uStack_4d9));
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                  CUser::Send(param_1,local_1d0);
                  uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  cMyTrace::cMyTrace(local_d8,
                                     "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x8aba,0);
                  cMyTrace::operator()
                            (local_d8,"GM(%s) grant item(%d) to %s \n",uVar3,local_4df,local_4d5);
                }
              }
            }
          }
          break;
        case 0xb:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_str(param_2,(char *)&local_4db,0x1e,local_4df);
              memset(local_28a,0,0x1e);
              strncpy(local_28a,(char *)&local_4db,local_4df);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_3c = GameWorld::GetIDUserInIDMap(pGVar12,local_28a);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_38 = (CUser *)GameWorld::find_user_from_world_byaccid(pGVar12,local_3c);
              if (local_38 == (CUser *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                local_34 = (CParty *)CUser::GetParty(local_38);
                if (local_34 == (CParty *)0x0) {
                  CUser::Send(param_1,local_1c4);
                }
                else {
                  CParty::set_charac_live(local_34,local_38,1);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                  InterfacePacketBuf::put_str
                            ((InterfacePacketBuf *)local_1d0,(char *)&local_4db,local_4df);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                  CUser::Send(param_1,local_1d0);
                  CUser::Send(local_38,local_1d0);
                  uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  cMyTrace::cMyTrace(local_c8,
                                     "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x8ae2,0);
                  cMyTrace::operator()(local_c8,"GM(%s) revive %s \n",uVar3,&local_4db);
                }
              }
            }
          }
          break;
        case 0xc:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_str(param_2,(char *)&local_4db,0x1e,local_4df);
              memset(local_2a8,0,0x1e);
              strncpy(local_2a8,(char *)&local_4db,local_4df);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_30 = GameWorld::GetIDUserInIDMap(pGVar12,local_2a8);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_2c = (CUser *)GameWorld::find_user_from_world_byaccid(pGVar12,local_30);
              if (local_2c == (CUser *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                CUser::RecoverFatigue(local_2c,0);
                CUser::SendFatigue(local_2c);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                InterfacePacketBuf::put_str
                          ((InterfacePacketBuf *)local_1d0,(char *)&local_4db,local_4df);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                CUser::Send(param_1,local_1d0);
                CUser::Send(local_2c,local_1d0);
                uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                cMyTrace::cMyTrace(local_b8,
                                   "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x8b09,0);
                cMyTrace::operator()(local_b8,"GM(%s) reset fatigue %s \n",uVar3,&local_4db);
              }
            }
          }
          break;
        case 0xd:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_int(param_2,(int *)&local_4db);
              PacketBuf::get_str(param_2,(char *)&local_4d7,0x1e,CONCAT22(uStack_4d9,local_4db));
              memset(local_2c6,0,0x1e);
              strncpy(local_2c6,(char *)&local_4d7,CONCAT22(uStack_4d9,local_4db));
              pGVar12 = (GameWorld *)G_GameWorld();
              local_28 = GameWorld::GetIDUserInIDMap(pGVar12,local_2c6);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_24 = (CUserCharacInfo *)
                         GameWorld::find_user_from_world_byaccid(pGVar12,local_28);
              if (local_24 == (CUserCharacInfo *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                pSVar13 = (Stream *)
                          StreamPool::Acquire(GlobalData::s_stream_pool,
                                              "PacketDispatcher_Impl_1.cpp",0x8b28);
                CStreamGuard::CStreamGuard(local_2d0,pSVar13,true);
                pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_2d0);
                    /* try { // try from 081fc196 to 081fc35f has its CatchHandler @ 081fc362 */
                CStreamGuard::operator<<(pCVar14,0x93);
                iVar4 = CUser::GetUID(param_1);
                pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_2d0);
                CStreamGuard::operator<<(pCVar14,iVar4);
                pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_2d0);
                local_20 = CStreamGuard::GetInBuffer<SIG_FORBID_USER_TO_PLAY>(pCVar14);
                memset(local_20,0,9);
                uVar3 = CUserCharacInfo::getCurCharacNo(local_24);
                *(undefined4 *)local_20 = uVar3;
                local_20[4] = (SIG_FORBID_USER_TO_PLAY)0x1;
                if ((int)local_4df < 1) {
                  *(undefined4 *)(local_20 + 5) = 1;
                }
                else if ((int)local_4df < 100) {
                  *(size_t *)(local_20 + 5) = local_4df;
                }
                else {
                  *(undefined4 *)(local_20 + 5) = 100;
                }
                MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_2d0);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                InterfacePacketBuf::put_int
                          ((InterfacePacketBuf *)local_1d0,CONCAT22(uStack_4d9,local_4db));
                InterfacePacketBuf::put_str
                          ((InterfacePacketBuf *)local_1d0,(char *)&local_4d7,
                           CONCAT22(uStack_4d9,local_4db));
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                CUser::Send(param_1,local_1d0);
                CUser::Send((CUser *)local_24,local_1d0);
                uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                cMyTrace::cMyTrace(local_a8,
                                   "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x8b44,0);
                cMyTrace::operator()
                          (local_a8,"GM(%s) forbid play %s for %d days \n",uVar3,&local_4d7,
                           local_4df);
                    /* try { // try from 081fc386 to 081fc414 has its CatchHandler @ 081fc48d */
                CStreamGuard::~CStreamGuard(local_2d0);
              }
            }
          }
          break;
        default:
          uVar5 = CUser::get_acc_id(param_1);
          uVar3 = NumberToString(uVar5,0);
          cMyTrace::cMyTrace(local_98,
                             "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)",
                             0x8b52,0);
          cMyTrace::operator()(local_98,"Undifined GM Command : %d by %s",(uint)local_4e0,uVar3);
        }
        uVar3 = 0;
                    /* try { // try from 081fc486 to 081fc48a has its CatchHandler @ 081fc4a5 */
        PacketGuard::~PacketGuard(local_1d0);
        PacketGuard::~PacketGuard(local_1c4);
      }
      else {
        uVar3 = LineFunc(0x890e,
                         "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)",0,0);
      }
    }
  }
  return uVar3;
}
```
