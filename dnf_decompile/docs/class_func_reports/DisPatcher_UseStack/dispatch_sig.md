# dispatch_sig

`_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseStack` | `0x081f63c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f63c0  _ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)
# range [0x081f63c0, 0x081f793b]
081f63c0 +0x0000:  push   %ebp
081f63c1 +0x0001:  mov    %esp,%ebp
081f63c3 +0x0003:  push   %esi
081f63c4 +0x0004:  push   %ebx
081f63c5 +0x0005:  sub    $0x120,%esp
081f63cb +0x000b:  lea    -0x77(%ebp),%eax
081f63ce +0x000e:  add    $0xd,%eax
081f63d1 +0x0011:  mov    %eax,0x4(%esp)
081f63d5 +0x0015:  mov    0x10(%ebp),%eax
081f63d8 +0x0018:  mov    %eax,(%esp)
081f63db +0x001b:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f63e0 +0x0020:  xor    $0x1,%eax
081f63e3 +0x0023:  test   %al,%al
081f63e5 +0x0025:  je     081f6412 <+0x52>
081f63e7 +0x0027:  movl   $0x0,0xc(%esp)
081f63ef +0x002f:  movl   $0x0,0x8(%esp)
081f63f7 +0x0037:  movl   $&_ZZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f63ff +0x003f:  movl   $0x8315,(%esp)
081f6406 +0x0046:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f640b +0x004b:  mov    %eax,%ebx
081f640d +0x004d:  jmp    081f7930 <+0x1570>
081f6412 +0x0052:  lea    -0x78(%ebp),%eax
081f6415 +0x0055:  mov    %eax,0x4(%esp)
081f6419 +0x0059:  mov    0x10(%ebp),%eax
081f641c +0x005c:  mov    %eax,(%esp)
081f641f +0x005f:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081f6424 +0x0064:  xor    $0x1,%eax
081f6427 +0x0067:  test   %al,%al
081f6429 +0x0069:  je     081f6456 <+0x96>
081f642b +0x006b:  movl   $0x0,0xc(%esp)
081f6433 +0x0073:  movl   $0x0,0x8(%esp)
081f643b +0x007b:  movl   $&_ZZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f6443 +0x0083:  movl   $0x8318,(%esp)
081f644a +0x008a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f644f +0x008f:  mov    %eax,%ebx
081f6451 +0x0091:  jmp    081f7930 <+0x1570>
081f6456 +0x0096:  movl   $0x0,-0x7c(%ebp)
081f645d +0x009d:  movl   $0x0,-0x80(%ebp)
081f6464 +0x00a4:  lea    -0x7c(%ebp),%eax
081f6467 +0x00a7:  mov    %eax,0x4(%esp)
081f646b +0x00ab:  mov    0x10(%ebp),%eax
081f646e +0x00ae:  mov    %eax,(%esp)
081f6471 +0x00b1:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f6476 +0x00b6:  xor    $0x1,%eax
081f6479 +0x00b9:  test   %al,%al
081f647b +0x00bb:  je     081f64a8 <+0xe8>
081f647d +0x00bd:  movl   $0x0,0xc(%esp)
081f6485 +0x00c5:  movl   $0x0,0x8(%esp)
081f648d +0x00cd:  movl   $&_ZZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f6495 +0x00d5:  movl   $0x831d,(%esp)
081f649c +0x00dc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f64a1 +0x00e1:  mov    %eax,%ebx
081f64a3 +0x00e3:  jmp    081f7930 <+0x1570>
081f64a8 +0x00e8:  lea    -0x80(%ebp),%eax
081f64ab +0x00eb:  mov    %eax,0x4(%esp)
081f64af +0x00ef:  mov    0x10(%ebp),%eax
081f64b2 +0x00f2:  mov    %eax,(%esp)
081f64b5 +0x00f5:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f64ba +0x00fa:  xor    $0x1,%eax
081f64bd +0x00fd:  test   %al,%al
081f64bf +0x00ff:  je     081f64ec <+0x12c>
081f64c1 +0x0101:  movl   $0x0,0xc(%esp)
081f64c9 +0x0109:  movl   $0x0,0x8(%esp)
081f64d1 +0x0111:  movl   $&_ZZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f64d9 +0x0119:  movl   $0x831e,(%esp)
081f64e0 +0x0120:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f64e5 +0x0125:  mov    %eax,%ebx
081f64e7 +0x0127:  jmp    081f7930 <+0x1570>
081f64ec +0x012c:  mov    0xc(%ebp),%eax
081f64ef +0x012f:  mov    %eax,(%esp)
081f64f2 +0x0132:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f64f7 +0x0137:  cmp    $0x5,%eax
081f64fa +0x013a:  je     081f6563 <+0x1a3>
081f64fc +0x013c:  mov    0xc(%ebp),%eax
081f64ff +0x013f:  mov    %eax,(%esp)
081f6502 +0x0142:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f6507 +0x0147:  cmp    $0x7,%eax
081f650a +0x014a:  je     081f6563 <+0x1a3>
081f650c +0x014c:  mov    0xc(%ebp),%eax
081f650f +0x014f:  mov    %eax,(%esp)
081f6512 +0x0152:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f6517 +0x0157:  cmp    $0x8,%eax
081f651a +0x015a:  je     081f6563 <+0x1a3>
081f651c +0x015c:  mov    0xc(%ebp),%eax
081f651f +0x015f:  mov    %eax,(%esp)
081f6522 +0x0162:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f6527 +0x0167:  cmp    $0x3,%eax
081f652a +0x016a:  je     081f6563 <+0x1a3>
081f652c +0x016c:  mov    0xc(%ebp),%eax
081f652f +0x016f:  mov    %eax,(%esp)
081f6532 +0x0172:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f6537 +0x0177:  cmp    $0x6,%eax
081f653a +0x017a:  je     081f6563 <+0x1a3>
081f653c +0x017c:  mov    0xc(%ebp),%eax
081f653f +0x017f:  mov    %eax,(%esp)
081f6542 +0x0182:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f6547 +0x0187:  cmp    $0xa,%eax
081f654a +0x018a:  je     081f6563 <+0x1a3>
081f654c +0x018c:  mov    0xc(%ebp),%eax
081f654f +0x018f:  mov    %eax,(%esp)
081f6552 +0x0192:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f6557 +0x0197:  cmp    $0xc,%eax
081f655a +0x019a:  je     081f6563 <+0x1a3>
081f655c +0x019c:  mov    $0x1,%eax
081f6561 +0x01a1:  jmp    081f6568 <+0x1a8>
081f6563 +0x01a3:  mov    $0x0,%eax
081f6568 +0x01a8:  test   %al,%al
081f656a +0x01aa:  je     081f666c <+0x2ac>
081f6570 +0x01b0:  lea    -0x90(%ebp),%eax
081f6576 +0x01b6:  mov    %eax,(%esp)
081f6579 +0x01b9:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f657e +0x01be:  movl   $0x2f,0x8(%esp)
081f6586 +0x01c6:  movl   $0x1,0x4(%esp)
081f658e +0x01ce:  lea    -0x90(%ebp),%eax
081f6594 +0x01d4:  mov    %eax,(%esp)
081f6597 +0x01d7:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f659c +0x01dc:  movl   $0x0,0x4(%esp)
081f65a4 +0x01e4:  lea    -0x90(%ebp),%eax
081f65aa +0x01ea:  mov    %eax,(%esp)
081f65ad +0x01ed:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f65b2 +0x01f2:  movl   $0x13,0x4(%esp)
081f65ba +0x01fa:  lea    -0x90(%ebp),%eax
081f65c0 +0x0200:  mov    %eax,(%esp)
081f65c3 +0x0203:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f65c8 +0x0208:  movzbl -0x78(%ebp),%eax
081f65cc +0x020c:  movzbl %al,%eax
081f65cf +0x020f:  mov    %eax,0x4(%esp)
081f65d3 +0x0213:  lea    -0x90(%ebp),%eax
081f65d9 +0x0219:  mov    %eax,(%esp)
081f65dc +0x021c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f65e1 +0x0221:  mov    -0x7c(%ebp),%eax
081f65e4 +0x0224:  mov    %eax,0x4(%esp)
081f65e8 +0x0228:  lea    -0x90(%ebp),%eax
081f65ee +0x022e:  mov    %eax,(%esp)
081f65f1 +0x0231:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f65f6 +0x0236:  mov    -0x80(%ebp),%eax
081f65f9 +0x0239:  mov    %eax,0x4(%esp)
081f65fd +0x023d:  lea    -0x90(%ebp),%eax
081f6603 +0x0243:  mov    %eax,(%esp)
081f6606 +0x0246:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f660b +0x024b:  movl   $0x1,0x4(%esp)
081f6613 +0x0253:  lea    -0x90(%ebp),%eax
081f6619 +0x0259:  mov    %eax,(%esp)
081f661c +0x025c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f6621 +0x0261:  lea    -0x90(%ebp),%eax
081f6627 +0x0267:  mov    %eax,0x4(%esp)
081f662b +0x026b:  mov    0xc(%ebp),%eax
081f662e +0x026e:  mov    %eax,(%esp)
081f6631 +0x0271:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f6636 +0x0276:  mov    $0x0,%ebx
081f663b +0x027b:  lea    -0x90(%ebp),%eax
081f6641 +0x0281:  mov    %eax,(%esp)
081f6644 +0x0284:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f6649 +0x0289:  jmp    081f7930 <+0x1570>
081f664e +0x028e:  mov    %edx,%ebx
081f6650 +0x0290:  mov    %eax,%esi
081f6652 +0x0292:  lea    -0x90(%ebp),%eax
081f6658 +0x0298:  mov    %eax,(%esp)
081f665b +0x029b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f6660 +0x02a0:  mov    %esi,%eax
081f6662 +0x02a2:  mov    %ebx,%edx
081f6664 +0x02a4:  mov    %eax,(%esp)
081f6667 +0x02a7:  call   08ae3750 <_Unwind_Resume>
081f666c +0x02ac:  movl   $0x0,-0x84(%ebp)
081f6676 +0x02b6:  lea    -0x84(%ebp),%eax
081f667c +0x02bc:  mov    %eax,0x4(%esp)
081f6680 +0x02c0:  mov    0x10(%ebp),%eax
081f6683 +0x02c3:  mov    %eax,(%esp)
081f6686 +0x02c6:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f668b +0x02cb:  xor    $0x1,%eax
081f668e +0x02ce:  test   %al,%al
081f6690 +0x02d0:  je     081f66bd <+0x2fd>
081f6692 +0x02d2:  movl   $0x0,0xc(%esp)
081f669a +0x02da:  movl   $0x0,0x8(%esp)
081f66a2 +0x02e2:  movl   $&_ZZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f66aa +0x02ea:  movl   $0x8338,(%esp)
081f66b1 +0x02f1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f66b6 +0x02f6:  mov    %eax,%ebx
081f66b8 +0x02f8:  jmp    081f7930 <+0x1570>
081f66bd +0x02fd:  mov    0xc(%ebp),%eax
081f66c0 +0x0300:  mov    %eax,(%esp)
081f66c3 +0x0303:  call   0864e0b6 <_ZNK5CUser25getCurCharacInvenCheckSumEv>  ; CUser::getCurCharacInvenCheckSum() const
081f66c8 +0x0308:  mov    -0x84(%ebp),%edx
081f66ce +0x030e:  cmp    %edx,%eax
081f66d0 +0x0310:  setne  %al
081f66d3 +0x0313:  test   %al,%al
081f66d5 +0x0315:  je     081f6711 <+0x351>
081f66d7 +0x0317:  mov    0xc(%ebp),%eax
081f66da +0x031a:  mov    %eax,(%esp)
081f66dd +0x031d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f66e2 +0x0322:  movl   $0x0,0x14(%esp)
081f66ea +0x032a:  movl   $0x0,0x10(%esp)
081f66f2 +0x0332:  movl   $0x1,0xc(%esp)
081f66fa +0x033a:  movl   $0x25b,0x8(%esp)
081f6702 +0x0342:  mov    0xc(%ebp),%edx
081f6705 +0x0345:  mov    %edx,0x4(%esp)
081f6709 +0x0349:  mov    %eax,(%esp)
081f670c +0x034c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f6711 +0x0351:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081f6716 +0x0356:  movl   $0xc,0xc(%esp)
081f671e +0x035e:  movl   $0x1,0x8(%esp)
081f6726 +0x0366:  mov    0xc(%ebp),%edx
081f6729 +0x0369:  mov    %edx,0x4(%esp)
081f672d +0x036d:  mov    %eax,(%esp)
081f6730 +0x0370:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081f6735 +0x0375:  test   %al,%al
081f6737 +0x0377:  je     081f6839 <+0x479>
081f673d +0x037d:  lea    -0x9c(%ebp),%eax
081f6743 +0x0383:  mov    %eax,(%esp)
081f6746 +0x0386:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f674b +0x038b:  movl   $0x2f,0x8(%esp)
081f6753 +0x0393:  movl   $0x1,0x4(%esp)
081f675b +0x039b:  lea    -0x9c(%ebp),%eax
081f6761 +0x03a1:  mov    %eax,(%esp)
081f6764 +0x03a4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f6769 +0x03a9:  movl   $0x0,0x4(%esp)
081f6771 +0x03b1:  lea    -0x9c(%ebp),%eax
081f6777 +0x03b7:  mov    %eax,(%esp)
081f677a +0x03ba:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f677f +0x03bf:  movl   $0xd1,0x4(%esp)
081f6787 +0x03c7:  lea    -0x9c(%ebp),%eax
081f678d +0x03cd:  mov    %eax,(%esp)
081f6790 +0x03d0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f6795 +0x03d5:  movzbl -0x78(%ebp),%eax
081f6799 +0x03d9:  movzbl %al,%eax
081f679c +0x03dc:  mov    %eax,0x4(%esp)
081f67a0 +0x03e0:  lea    -0x9c(%ebp),%eax
081f67a6 +0x03e6:  mov    %eax,(%esp)
081f67a9 +0x03e9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f67ae +0x03ee:  mov    -0x7c(%ebp),%eax
081f67b1 +0x03f1:  mov    %eax,0x4(%esp)
081f67b5 +0x03f5:  lea    -0x9c(%ebp),%eax
081f67bb +0x03fb:  mov    %eax,(%esp)
081f67be +0x03fe:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f67c3 +0x0403:  mov    -0x80(%ebp),%eax
081f67c6 +0x0406:  mov    %eax,0x4(%esp)
081f67ca +0x040a:  lea    -0x9c(%ebp),%eax
081f67d0 +0x0410:  mov    %eax,(%esp)
081f67d3 +0x0413:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f67d8 +0x0418:  movl   $0x1,0x4(%esp)
081f67e0 +0x0420:  lea    -0x9c(%ebp),%eax
081f67e6 +0x0426:  mov    %eax,(%esp)
081f67e9 +0x0429:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f67ee +0x042e:  lea    -0x9c(%ebp),%eax
081f67f4 +0x0434:  mov    %eax,0x4(%esp)
081f67f8 +0x0438:  mov    0xc(%ebp),%eax
081f67fb +0x043b:  mov    %eax,(%esp)
081f67fe +0x043e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f6803 +0x0443:  mov    $0x0,%ebx
081f6808 +0x0448:  lea    -0x9c(%ebp),%eax
081f680e +0x044e:  mov    %eax,(%esp)
081f6811 +0x0451:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f6816 +0x0456:  jmp    081f7930 <+0x1570>
081f681b +0x045b:  mov    %edx,%ebx
081f681d +0x045d:  mov    %eax,%esi
081f681f +0x045f:  lea    -0x9c(%ebp),%eax
081f6825 +0x0465:  mov    %eax,(%esp)
081f6828 +0x0468:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f682d +0x046d:  mov    %esi,%eax
081f682f +0x046f:  mov    %ebx,%edx
081f6831 +0x0471:  mov    %eax,(%esp)
081f6834 +0x0474:  call   08ae3750 <_Unwind_Resume>
081f6839 +0x0479:  movzwl -0x6a(%ebp),%eax
081f683d +0x047d:  movswl %ax,%ecx
081f6840 +0x0480:  movzbl -0x78(%ebp),%eax
081f6844 +0x0484:  movsbl %al,%edx
081f6847 +0x0487:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081f684c +0x048c:  mov    %ecx,0xc(%esp)
081f6850 +0x0490:  mov    %edx,0x8(%esp)
081f6854 +0x0494:  mov    0xc(%ebp),%edx
081f6857 +0x0497:  mov    %edx,0x4(%esp)
081f685b +0x049b:  mov    %eax,(%esp)
081f685e +0x049e:  call   082884d6 <_ZN21CSecu_ProtectionField10GetItemPtrEP5CUsercs>  ; CSecu_ProtectionField::GetItemPtr(CUser*, char, short)
081f6863 +0x04a3:  mov    %eax,-0x58(%ebp)
081f6866 +0x04a6:  cmpl   $0x0,-0x58(%ebp)
081f686a +0x04aa:  jne    081f6897 <+0x4d7>
081f686c +0x04ac:  movl   $0x0,0xc(%esp)
081f6874 +0x04b4:  movl   $0x0,0x8(%esp)
081f687c +0x04bc:  movl   $&_ZZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f6884 +0x04c4:  movl   $0x8354,(%esp)
081f688b +0x04cb:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f6890 +0x04d0:  mov    %eax,%ebx
081f6892 +0x04d2:  jmp    081f7930 <+0x1570>
081f6897 +0x04d7:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081f689c +0x04dc:  mov    -0x58(%ebp),%edx
081f689f +0x04df:  mov    %edx,0xc(%esp)
081f68a3 +0x04e3:  movl   $0x2a,0x8(%esp)
081f68ab +0x04eb:  mov    0xc(%ebp),%edx
081f68ae +0x04ee:  mov    %edx,0x4(%esp)
081f68b2 +0x04f2:  mov    %eax,(%esp)
081f68b5 +0x04f5:  call   08288786 <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONPK5CItem>  ; CSecu_ProtectionField::CheckItem(CUser*, SECURITY_PROTCTION, CItem const*)
081f68ba +0x04fa:  mov    %eax,-0x54(%ebp)
081f68bd +0x04fd:  cmpl   $0x0,-0x54(%ebp)
081f68c1 +0x0501:  je     081f69c2 <+0x602>
081f68c7 +0x0507:  lea    -0xa8(%ebp),%eax
081f68cd +0x050d:  mov    %eax,(%esp)
081f68d0 +0x0510:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f68d5 +0x0515:  movl   $0x2f,0x8(%esp)
081f68dd +0x051d:  movl   $0x1,0x4(%esp)
081f68e5 +0x0525:  lea    -0xa8(%ebp),%eax
081f68eb +0x052b:  mov    %eax,(%esp)
081f68ee +0x052e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f68f3 +0x0533:  movl   $0x0,0x4(%esp)
081f68fb +0x053b:  lea    -0xa8(%ebp),%eax
081f6901 +0x0541:  mov    %eax,(%esp)
081f6904 +0x0544:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f6909 +0x0549:  mov    -0x54(%ebp),%eax
081f690c +0x054c:  mov    %eax,0x4(%esp)
081f6910 +0x0550:  lea    -0xa8(%ebp),%eax
081f6916 +0x0556:  mov    %eax,(%esp)
081f6919 +0x0559:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f691e +0x055e:  movzbl -0x78(%ebp),%eax
081f6922 +0x0562:  movzbl %al,%eax
081f6925 +0x0565:  mov    %eax,0x4(%esp)
081f6929 +0x0569:  lea    -0xa8(%ebp),%eax
081f692f +0x056f:  mov    %eax,(%esp)
081f6932 +0x0572:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f6937 +0x0577:  mov    -0x7c(%ebp),%eax
081f693a +0x057a:  mov    %eax,0x4(%esp)
081f693e +0x057e:  lea    -0xa8(%ebp),%eax
081f6944 +0x0584:  mov    %eax,(%esp)
081f6947 +0x0587:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f694c +0x058c:  mov    -0x80(%ebp),%eax
081f694f +0x058f:  mov    %eax,0x4(%esp)
081f6953 +0x0593:  lea    -0xa8(%ebp),%eax
081f6959 +0x0599:  mov    %eax,(%esp)
081f695c +0x059c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f6961 +0x05a1:  movl   $0x1,0x4(%esp)
081f6969 +0x05a9:  lea    -0xa8(%ebp),%eax
081f696f +0x05af:  mov    %eax,(%esp)
081f6972 +0x05b2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f6977 +0x05b7:  lea    -0xa8(%ebp),%eax
081f697d +0x05bd:  mov    %eax,0x4(%esp)
081f6981 +0x05c1:  mov    0xc(%ebp),%eax
081f6984 +0x05c4:  mov    %eax,(%esp)
081f6987 +0x05c7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f698c +0x05cc:  mov    $0x0,%ebx
081f6991 +0x05d1:  lea    -0xa8(%ebp),%eax
081f6997 +0x05d7:  mov    %eax,(%esp)
081f699a +0x05da:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f699f +0x05df:  jmp    081f7930 <+0x1570>
081f69a4 +0x05e4:  mov    %edx,%ebx
081f69a6 +0x05e6:  mov    %eax,%esi
081f69a8 +0x05e8:  lea    -0xa8(%ebp),%eax
081f69ae +0x05ee:  mov    %eax,(%esp)
081f69b1 +0x05f1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f69b6 +0x05f6:  mov    %esi,%eax
081f69b8 +0x05f8:  mov    %ebx,%edx
081f69ba +0x05fa:  mov    %eax,(%esp)
081f69bd +0x05fd:  call   08ae3750 <_Unwind_Resume>
081f69c2 +0x0602:  mov    -0x58(%ebp),%eax
081f69c5 +0x0605:  mov    %eax,(%esp)
081f69c8 +0x0608:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081f69cd +0x060d:  test   %al,%al
081f69cf +0x060f:  je     081f6aee <+0x72e>
081f69d5 +0x0615:  mov    -0x58(%ebp),%eax
081f69d8 +0x0618:  mov    0xc(%ebp),%edx
081f69db +0x061b:  mov    %edx,0x4(%esp)
081f69df +0x061f:  mov    %eax,(%esp)
081f69e2 +0x0622:  call   0850e9f4 <_ZN14CStackableItem17verifyUsablePlaceEP5CUser>  ; CStackableItem::verifyUsablePlace(CUser*)
081f69e7 +0x0627:  xor    $0x1,%eax
081f69ea +0x062a:  test   %al,%al
081f69ec +0x062c:  je     081f6aee <+0x72e>
081f69f2 +0x0632:  lea    -0xb4(%ebp),%eax
081f69f8 +0x0638:  mov    %eax,(%esp)
081f69fb +0x063b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f6a00 +0x0640:  movl   $0x2f,0x8(%esp)
081f6a08 +0x0648:  movl   $0x1,0x4(%esp)
081f6a10 +0x0650:  lea    -0xb4(%ebp),%eax
081f6a16 +0x0656:  mov    %eax,(%esp)
081f6a19 +0x0659:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f6a1e +0x065e:  movl   $0x0,0x4(%esp)
081f6a26 +0x0666:  lea    -0xb4(%ebp),%eax
081f6a2c +0x066c:  mov    %eax,(%esp)
081f6a2f +0x066f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f6a34 +0x0674:  movl   $0x13,0x4(%esp)
081f6a3c +0x067c:  lea    -0xb4(%ebp),%eax
081f6a42 +0x0682:  mov    %eax,(%esp)
081f6a45 +0x0685:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f6a4a +0x068a:  movzbl -0x78(%ebp),%eax
081f6a4e +0x068e:  movzbl %al,%eax
081f6a51 +0x0691:  mov    %eax,0x4(%esp)
081f6a55 +0x0695:  lea    -0xb4(%ebp),%eax
081f6a5b +0x069b:  mov    %eax,(%esp)
081f6a5e +0x069e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f6a63 +0x06a3:  mov    -0x7c(%ebp),%eax
081f6a66 +0x06a6:  mov    %eax,0x4(%esp)
081f6a6a +0x06aa:  lea    -0xb4(%ebp),%eax
081f6a70 +0x06b0:  mov    %eax,(%esp)
081f6a73 +0x06b3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f6a78 +0x06b8:  mov    -0x80(%ebp),%eax
081f6a7b +0x06bb:  mov    %eax,0x4(%esp)
081f6a7f +0x06bf:  lea    -0xb4(%ebp),%eax
081f6a85 +0x06c5:  mov    %eax,(%esp)
081f6a88 +0x06c8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f6a8d +0x06cd:  movl   $0x1,0x4(%esp)
081f6a95 +0x06d5:  lea    -0xb4(%ebp),%eax
081f6a9b +0x06db:  mov    %eax,(%esp)
081f6a9e +0x06de:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f6aa3 +0x06e3:  lea    -0xb4(%ebp),%eax
081f6aa9 +0x06e9:  mov    %eax,0x4(%esp)
081f6aad +0x06ed:  mov    0xc(%ebp),%eax
081f6ab0 +0x06f0:  mov    %eax,(%esp)
081f6ab3 +0x06f3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f6ab8 +0x06f8:  mov    $0x0,%ebx
081f6abd +0x06fd:  lea    -0xb4(%ebp),%eax
081f6ac3 +0x0703:  mov    %eax,(%esp)
081f6ac6 +0x0706:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f6acb +0x070b:  jmp    081f7930 <+0x1570>
081f6ad0 +0x0710:  mov    %edx,%ebx
081f6ad2 +0x0712:  mov    %eax,%esi
081f6ad4 +0x0714:  lea    -0xb4(%ebp),%eax
081f6ada +0x071a:  mov    %eax,(%esp)
081f6add +0x071d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f6ae2 +0x0722:  mov    %esi,%eax
081f6ae4 +0x0724:  mov    %ebx,%edx
081f6ae6 +0x0726:  mov    %eax,(%esp)
081f6ae9 +0x0729:  call   08ae3750 <_Unwind_Resume>
081f6aee +0x072e:  movl   $0x0,-0x50(%ebp)
081f6af5 +0x0735:  mov    0xc(%ebp),%eax
081f6af8 +0x0738:  mov    %eax,(%esp)
081f6afb +0x073b:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
081f6b00 +0x0740:  test   %eax,%eax
081f6b02 +0x0742:  jne    081f6b2b <+0x76b>
081f6b04 +0x0744:  mov    0xc(%ebp),%eax
081f6b07 +0x0747:  mov    %eax,(%esp)
081f6b0a +0x074a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f6b0f +0x074f:  cmp    $0x3,%eax
081f6b12 +0x0752:  je     081f6b24 <+0x764>
081f6b14 +0x0754:  mov    0xc(%ebp),%eax
081f6b17 +0x0757:  mov    %eax,(%esp)
081f6b1a +0x075a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f6b1f +0x075f:  cmp    $0x6,%eax
081f6b22 +0x0762:  jne    081f6b2b <+0x76b>
081f6b24 +0x0764:  mov    $0x1,%eax
081f6b29 +0x0769:  jmp    081f6b30 <+0x770>
081f6b2b +0x076b:  mov    $0x0,%eax
081f6b30 +0x0770:  test   %al,%al
081f6b32 +0x0772:  je     081f7043 <+0xc83>
081f6b38 +0x0778:  movzwl -0x6a(%ebp),%eax
081f6b3c +0x077c:  movswl %ax,%esi
081f6b3f +0x077f:  movzbl -0x78(%ebp),%eax
081f6b43 +0x0783:  movzbl %al,%eax
081f6b46 +0x0786:  mov    %eax,(%esp)
081f6b49 +0x0789:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081f6b4e +0x078e:  mov    %eax,%ebx
081f6b50 +0x0790:  mov    0xc(%ebp),%eax
081f6b53 +0x0793:  mov    %eax,(%esp)
081f6b56 +0x0796:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081f6b5b +0x079b:  mov    %esi,0x8(%esp)
081f6b5f +0x079f:  mov    %ebx,0x4(%esp)
081f6b63 +0x07a3:  mov    %eax,(%esp)
081f6b66 +0x07a6:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081f6b6b +0x07ab:  mov    %eax,-0x44(%ebp)
081f6b6e +0x07ae:  cmpl   $0x0,-0x44(%ebp)
081f6b72 +0x07b2:  jne    081f6b9f <+0x7df>
081f6b74 +0x07b4:  movl   $0x0,0xc(%esp)
081f6b7c +0x07bc:  movl   $0x0,0x8(%esp)
081f6b84 +0x07c4:  movl   $&_ZZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f6b8c +0x07cc:  movl   $0x83b7,(%esp)
081f6b93 +0x07d3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f6b98 +0x07d8:  mov    %eax,%ebx
081f6b9a +0x07da:  jmp    081f7930 <+0x1570>
081f6b9f +0x07df:  mov    -0x44(%ebp),%eax
081f6ba2 +0x07e2:  mov    0x2(%eax),%eax
081f6ba5 +0x07e5:  mov    %eax,%ebx
081f6ba7 +0x07e7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081f6bac +0x07ec:  mov    %ebx,0x4(%esp)
081f6bb0 +0x07f0:  mov    %eax,(%esp)
081f6bb3 +0x07f3:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081f6bb8 +0x07f8:  mov    %eax,-0x40(%ebp)
081f6bbb +0x07fb:  cmpl   $0x0,-0x40(%ebp)
081f6bbf +0x07ff:  jne    081f6bcb <+0x80b>
081f6bc1 +0x0801:  mov    $0x0,%ebx
081f6bc6 +0x0806:  jmp    081f7930 <+0x1570>
081f6bcb +0x080b:  mov    -0x40(%ebp),%eax
081f6bce +0x080e:  mov    (%eax),%eax
081f6bd0 +0x0810:  add    $0xc,%eax
081f6bd3 +0x0813:  mov    (%eax),%edx
081f6bd5 +0x0815:  mov    -0x40(%ebp),%eax
081f6bd8 +0x0818:  mov    %eax,(%esp)
081f6bdb +0x081b:  call   *%edx
081f6bdd +0x081d:  cmp    $0x16,%eax
081f6be0 +0x0820:  je     081f6d53 <+0x993>
081f6be6 +0x0826:  cmp    $0x16,%eax
081f6be9 +0x0829:  jg     081f6bf6 <+0x836>
081f6beb +0x082b:  cmp    $0x3,%eax
081f6bee +0x082e:  je     081f6d56 <+0x996>
081f6bf4 +0x0834:  jmp    081f6c08 <+0x848>
081f6bf6 +0x0836:  cmp    $0x18,%eax
081f6bf9 +0x0839:  je     081f6d59 <+0x999>
081f6bff +0x083f:  cmp    $0x23,%eax
081f6c02 +0x0842:  je     081f6d5c <+0x99c>
081f6c08 +0x0848:  mov    -0x44(%ebp),%eax
081f6c0b +0x084b:  mov    0x2(%eax),%eax
081f6c0e +0x084e:  cmp    $0x33,%eax
081f6c11 +0x0851:  je     081f6d5f <+0x99f>
081f6c17 +0x0857:  cmp    $0x33,%eax
081f6c1a +0x085a:  ja     081f6c30 <+0x870>
081f6c1c +0x085c:  cmp    $0xa,%eax
081f6c1f +0x085f:  je     081f6d62 <+0x9a2>
081f6c25 +0x0865:  cmp    $0x18,%eax
081f6c28 +0x0868:  je     081f6d65 <+0x9a5>
081f6c2e +0x086e:  jmp    081f6c4d <+0x88d>
081f6c30 +0x0870:  cmp    $0x1e6d,%eax
081f6c35 +0x0875:  jb     081f6c4d <+0x88d>
081f6c37 +0x0877:  cmp    $0x1e73,%eax
081f6c3c +0x087c:  jbe    081f6d68 <+0x9a8>
081f6c42 +0x0882:  cmp    $0x28978a,%eax
081f6c47 +0x0887:  je     081f6d6b <+0x9ab>
081f6c4d +0x088d:  lea    -0xc0(%ebp),%eax
081f6c53 +0x0893:  mov    %eax,(%esp)
081f6c56 +0x0896:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f6c5b +0x089b:  movl   $0x2f,0x8(%esp)
081f6c63 +0x08a3:  movl   $0x1,0x4(%esp)
081f6c6b +0x08ab:  lea    -0xc0(%ebp),%eax
081f6c71 +0x08b1:  mov    %eax,(%esp)
081f6c74 +0x08b4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f6c79 +0x08b9:  movl   $0x0,0x4(%esp)
081f6c81 +0x08c1:  lea    -0xc0(%ebp),%eax
081f6c87 +0x08c7:  mov    %eax,(%esp)
081f6c8a +0x08ca:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f6c8f +0x08cf:  movl   $0x13,0x4(%esp)
081f6c97 +0x08d7:  lea    -0xc0(%ebp),%eax
081f6c9d +0x08dd:  mov    %eax,(%esp)
081f6ca0 +0x08e0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f6ca5 +0x08e5:  movzbl -0x78(%ebp),%eax
081f6ca9 +0x08e9:  movzbl %al,%eax
081f6cac +0x08ec:  mov    %eax,0x4(%esp)
081f6cb0 +0x08f0:  lea    -0xc0(%ebp),%eax
081f6cb6 +0x08f6:  mov    %eax,(%esp)
081f6cb9 +0x08f9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f6cbe +0x08fe:  mov    -0x7c(%ebp),%eax
081f6cc1 +0x0901:  mov    %eax,0x4(%esp)
081f6cc5 +0x0905:  lea    -0xc0(%ebp),%eax
081f6ccb +0x090b:  mov    %eax,(%esp)
081f6cce +0x090e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f6cd3 +0x0913:  mov    -0x80(%ebp),%eax
081f6cd6 +0x0916:  mov    %eax,0x4(%esp)
081f6cda +0x091a:  lea    -0xc0(%ebp),%eax
081f6ce0 +0x0920:  mov    %eax,(%esp)
081f6ce3 +0x0923:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f6ce8 +0x0928:  movl   $0x1,0x4(%esp)
081f6cf0 +0x0930:  lea    -0xc0(%ebp),%eax
081f6cf6 +0x0936:  mov    %eax,(%esp)
081f6cf9 +0x0939:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f6cfe +0x093e:  lea    -0xc0(%ebp),%eax
081f6d04 +0x0944:  mov    %eax,0x4(%esp)
081f6d08 +0x0948:  mov    0xc(%ebp),%eax
081f6d0b +0x094b:  mov    %eax,(%esp)
081f6d0e +0x094e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f6d13 +0x0953:  mov    $0x0,%ebx
081f6d18 +0x0958:  mov    $0x0,%esi
081f6d1d +0x095d:  lea    -0xc0(%ebp),%eax
081f6d23 +0x0963:  mov    %eax,(%esp)
081f6d26 +0x0966:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f6d2b +0x096b:  test   %esi,%esi
081f6d2d +0x096d:  je     081f7930 <+0x1570>
081f6d33 +0x0973:  jmp    081f6d6c <+0x9ac>
081f6d35 +0x0975:  mov    %edx,%ebx
081f6d37 +0x0977:  mov    %eax,%esi
081f6d39 +0x0979:  lea    -0xc0(%ebp),%eax
081f6d3f +0x097f:  mov    %eax,(%esp)
081f6d42 +0x0982:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f6d47 +0x0987:  mov    %esi,%eax
081f6d49 +0x0989:  mov    %ebx,%edx
081f6d4b +0x098b:  mov    %eax,(%esp)
081f6d4e +0x098e:  call   08ae3750 <_Unwind_Resume>
081f6d53 +0x0993:  nop
081f6d54 +0x0994:  jmp    081f6d6c <+0x9ac>
081f6d56 +0x0996:  nop
081f6d57 +0x0997:  jmp    081f6d6c <+0x9ac>
081f6d59 +0x0999:  nop
081f6d5a +0x099a:  jmp    081f6d6c <+0x9ac>
081f6d5c +0x099c:  nop
081f6d5d +0x099d:  jmp    081f6d6c <+0x9ac>
081f6d5f +0x099f:  nop
081f6d60 +0x09a0:  jmp    081f6d6c <+0x9ac>
081f6d62 +0x09a2:  nop
081f6d63 +0x09a3:  jmp    081f6d6c <+0x9ac>
081f6d65 +0x09a5:  nop
081f6d66 +0x09a6:  jmp    081f6d6c <+0x9ac>
081f6d68 +0x09a8:  nop
081f6d69 +0x09a9:  jmp    081f6d6c <+0x9ac>
081f6d6b +0x09ab:  nop
081f6d6c +0x09ac:  movw   $0x0,-0x3c(%ebp)
081f6d72 +0x09b2:  movb   $0x0,-0x39(%ebp)
081f6d76 +0x09b6:  mov    -0x44(%ebp),%eax
081f6d79 +0x09b9:  mov    0x2(%eax),%eax
081f6d7c +0x09bc:  cmp    $0x1f8f,%eax
081f6d81 +0x09c1:  je     081f6df8 <+0xa38>
081f6d83 +0x09c3:  cmp    $0x1f8f,%eax
081f6d88 +0x09c8:  ja     081f6dad <+0x9ed>
081f6d8a +0x09ca:  cmp    $0x1d5e,%eax
081f6d8f +0x09cf:  je     081f6de0 <+0xa20>
081f6d91 +0x09d1:  cmp    $0x1d5e,%eax
081f6d96 +0x09d6:  ja     081f6da1 <+0x9e1>
081f6d98 +0x09d8:  cmp    $0x1d20,%eax
081f6d9d +0x09dd:  je     081f6dd4 <+0xa14>
081f6d9f +0x09df:  jmp    081f6e0e <+0xa4e>
081f6da1 +0x09e1:  sub    $0x1ddc,%eax
081f6da6 +0x09e6:  cmp    $0x1,%eax
081f6da9 +0x09e9:  ja     081f6e0e <+0xa4e>
081f6dab +0x09eb:  jmp    081f6dec <+0xa2c>
081f6dad +0x09ed:  cmp    $0x27ac5a,%eax
081f6db2 +0x09f2:  je     081f6df8 <+0xa38>
081f6db4 +0x09f4:  cmp    $0x27ac5a,%eax
081f6db9 +0x09f9:  ja     081f6dc4 <+0xa04>
081f6dbb +0x09fb:  cmp    $0x201d,%eax
081f6dc0 +0x0a00:  je     081f6e04 <+0xa44>
081f6dc2 +0x0a02:  jmp    081f6e0e <+0xa4e>
081f6dc4 +0x0a04:  cmp    $0x27addd,%eax
081f6dc9 +0x0a09:  je     081f6df8 <+0xa38>
081f6dcb +0x0a0b:  cmp    $0x292090de,%eax
081f6dd0 +0x0a10:  je     081f6df8 <+0xa38>
081f6dd2 +0x0a12:  jmp    081f6e0e <+0xa4e>
081f6dd4 +0x0a14:  movb   $0x1,-0x39(%ebp)
081f6dd8 +0x0a18:  movw   $0x28,-0x3c(%ebp)
081f6dde +0x0a1e:  jmp    081f6e0e <+0xa4e>
081f6de0 +0x0a20:  movb   $0x1,-0x39(%ebp)
081f6de4 +0x0a24:  movw   $0xa,-0x3c(%ebp)
081f6dea +0x0a2a:  jmp    081f6e0e <+0xa4e>
081f6dec +0x0a2c:  movb   $0x1,-0x39(%ebp)
081f6df0 +0x0a30:  movw   $0x6,-0x3c(%ebp)
081f6df6 +0x0a36:  jmp    081f6e0e <+0xa4e>
081f6df8 +0x0a38:  movw   $0x1e,-0x3c(%ebp)
081f6dfe +0x0a3e:  movb   $0x1,-0x39(%ebp)
081f6e02 +0x0a42:  jmp    081f6e0e <+0xa4e>
081f6e04 +0x0a44:  movw   $0x14,-0x3c(%ebp)
081f6e0a +0x0a4a:  movb   $0x1,-0x39(%ebp)
081f6e0e +0x0a4e:  cmpb   $0x0,-0x39(%ebp)
081f6e12 +0x0a52:  je     081f7043 <+0xc83>
081f6e18 +0x0a58:  mov    0xc(%ebp),%eax
081f6e1b +0x0a5b:  mov    %eax,(%esp)
081f6e1e +0x0a5e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f6e23 +0x0a63:  cmp    $0x3,%eax
081f6e26 +0x0a66:  setne  %al
081f6e29 +0x0a69:  test   %al,%al
081f6e2b +0x0a6b:  je     081f6f2d <+0xb6d>
081f6e31 +0x0a71:  lea    -0xcc(%ebp),%eax
081f6e37 +0x0a77:  mov    %eax,(%esp)
081f6e3a +0x0a7a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f6e3f +0x0a7f:  movl   $0x2f,0x8(%esp)
081f6e47 +0x0a87:  movl   $0x1,0x4(%esp)
081f6e4f +0x0a8f:  lea    -0xcc(%ebp),%eax
081f6e55 +0x0a95:  mov    %eax,(%esp)
081f6e58 +0x0a98:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f6e5d +0x0a9d:  movl   $0x0,0x4(%esp)
081f6e65 +0x0aa5:  lea    -0xcc(%ebp),%eax
081f6e6b +0x0aab:  mov    %eax,(%esp)
081f6e6e +0x0aae:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f6e73 +0x0ab3:  movl   $0x13,0x4(%esp)
081f6e7b +0x0abb:  lea    -0xcc(%ebp),%eax
081f6e81 +0x0ac1:  mov    %eax,(%esp)
081f6e84 +0x0ac4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f6e89 +0x0ac9:  movzbl -0x78(%ebp),%eax
081f6e8d +0x0acd:  movzbl %al,%eax
081f6e90 +0x0ad0:  mov    %eax,0x4(%esp)
081f6e94 +0x0ad4:  lea    -0xcc(%ebp),%eax
081f6e9a +0x0ada:  mov    %eax,(%esp)
081f6e9d +0x0add:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f6ea2 +0x0ae2:  mov    -0x7c(%ebp),%eax
081f6ea5 +0x0ae5:  mov    %eax,0x4(%esp)
081f6ea9 +0x0ae9:  lea    -0xcc(%ebp),%eax
081f6eaf +0x0aef:  mov    %eax,(%esp)
081f6eb2 +0x0af2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f6eb7 +0x0af7:  mov    -0x80(%ebp),%eax
081f6eba +0x0afa:  mov    %eax,0x4(%esp)
081f6ebe +0x0afe:  lea    -0xcc(%ebp),%eax
081f6ec4 +0x0b04:  mov    %eax,(%esp)
081f6ec7 +0x0b07:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f6ecc +0x0b0c:  movl   $0x1,0x4(%esp)
081f6ed4 +0x0b14:  lea    -0xcc(%ebp),%eax
081f6eda +0x0b1a:  mov    %eax,(%esp)
081f6edd +0x0b1d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f6ee2 +0x0b22:  lea    -0xcc(%ebp),%eax
081f6ee8 +0x0b28:  mov    %eax,0x4(%esp)
081f6eec +0x0b2c:  mov    0xc(%ebp),%eax
081f6eef +0x0b2f:  mov    %eax,(%esp)
081f6ef2 +0x0b32:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f6ef7 +0x0b37:  mov    $0x0,%ebx
081f6efc +0x0b3c:  lea    -0xcc(%ebp),%eax
081f6f02 +0x0b42:  mov    %eax,(%esp)
081f6f05 +0x0b45:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f6f0a +0x0b4a:  jmp    081f7930 <+0x1570>
081f6f0f +0x0b4f:  mov    %edx,%ebx
081f6f11 +0x0b51:  mov    %eax,%esi
081f6f13 +0x0b53:  lea    -0xcc(%ebp),%eax
081f6f19 +0x0b59:  mov    %eax,(%esp)
081f6f1c +0x0b5c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f6f21 +0x0b61:  mov    %esi,%eax
081f6f23 +0x0b63:  mov    %ebx,%edx
081f6f25 +0x0b65:  mov    %eax,(%esp)
081f6f28 +0x0b68:  call   08ae3750 <_Unwind_Resume>
081f6f2d +0x0b6d:  mov    0xc(%ebp),%eax
081f6f30 +0x0b70:  mov    %eax,(%esp)
081f6f33 +0x0b73:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
081f6f38 +0x0b78:  cmp    -0x3c(%ebp),%ax
081f6f3c +0x0b7c:  setb   %al
081f6f3f +0x0b7f:  test   %al,%al
081f6f41 +0x0b81:  je     081f7043 <+0xc83>
081f6f47 +0x0b87:  lea    -0xd8(%ebp),%eax
081f6f4d +0x0b8d:  mov    %eax,(%esp)
081f6f50 +0x0b90:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f6f55 +0x0b95:  movl   $0x2f,0x8(%esp)
081f6f5d +0x0b9d:  movl   $0x1,0x4(%esp)
081f6f65 +0x0ba5:  lea    -0xd8(%ebp),%eax
081f6f6b +0x0bab:  mov    %eax,(%esp)
081f6f6e +0x0bae:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f6f73 +0x0bb3:  movl   $0x0,0x4(%esp)
081f6f7b +0x0bbb:  lea    -0xd8(%ebp),%eax
081f6f81 +0x0bc1:  mov    %eax,(%esp)
081f6f84 +0x0bc4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f6f89 +0x0bc9:  movl   $0x5f,0x4(%esp)
081f6f91 +0x0bd1:  lea    -0xd8(%ebp),%eax
081f6f97 +0x0bd7:  mov    %eax,(%esp)
081f6f9a +0x0bda:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f6f9f +0x0bdf:  movzbl -0x78(%ebp),%eax
081f6fa3 +0x0be3:  movzbl %al,%eax
081f6fa6 +0x0be6:  mov    %eax,0x4(%esp)
081f6faa +0x0bea:  lea    -0xd8(%ebp),%eax
081f6fb0 +0x0bf0:  mov    %eax,(%esp)
081f6fb3 +0x0bf3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f6fb8 +0x0bf8:  mov    -0x7c(%ebp),%eax
081f6fbb +0x0bfb:  mov    %eax,0x4(%esp)
081f6fbf +0x0bff:  lea    -0xd8(%ebp),%eax
081f6fc5 +0x0c05:  mov    %eax,(%esp)
081f6fc8 +0x0c08:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f6fcd +0x0c0d:  mov    -0x80(%ebp),%eax
081f6fd0 +0x0c10:  mov    %eax,0x4(%esp)
081f6fd4 +0x0c14:  lea    -0xd8(%ebp),%eax
081f6fda +0x0c1a:  mov    %eax,(%esp)
081f6fdd +0x0c1d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f6fe2 +0x0c22:  movl   $0x1,0x4(%esp)
081f6fea +0x0c2a:  lea    -0xd8(%ebp),%eax
081f6ff0 +0x0c30:  mov    %eax,(%esp)
081f6ff3 +0x0c33:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f6ff8 +0x0c38:  lea    -0xd8(%ebp),%eax
081f6ffe +0x0c3e:  mov    %eax,0x4(%esp)
081f7002 +0x0c42:  mov    0xc(%ebp),%eax
081f7005 +0x0c45:  mov    %eax,(%esp)
081f7008 +0x0c48:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f700d +0x0c4d:  mov    $0x0,%ebx
081f7012 +0x0c52:  lea    -0xd8(%ebp),%eax
081f7018 +0x0c58:  mov    %eax,(%esp)
081f701b +0x0c5b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f7020 +0x0c60:  jmp    081f7930 <+0x1570>
081f7025 +0x0c65:  mov    %edx,%ebx
081f7027 +0x0c67:  mov    %eax,%esi
081f7029 +0x0c69:  lea    -0xd8(%ebp),%eax
081f702f +0x0c6f:  mov    %eax,(%esp)
081f7032 +0x0c72:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f7037 +0x0c77:  mov    %esi,%eax
081f7039 +0x0c79:  mov    %ebx,%edx
081f703b +0x0c7b:  mov    %eax,(%esp)
081f703e +0x0c7e:  call   08ae3750 <_Unwind_Resume>
081f7043 +0x0c83:  mov    0xc(%ebp),%eax
081f7046 +0x0c86:  mov    %eax,(%esp)
081f7049 +0x0c89:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f704e +0x0c8e:  cmp    $0xa,%eax
081f7051 +0x0c91:  sete   %al
081f7054 +0x0c94:  test   %al,%al
081f7056 +0x0c96:  je     081f70f5 <+0xd35>
081f705c +0x0c9c:  mov    0xc(%ebp),%eax
081f705f +0x0c9f:  mov    %eax,(%esp)
081f7062 +0x0ca2:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
081f7067 +0x0ca7:  mov    %eax,-0x38(%ebp)
081f706a +0x0caa:  cmpl   $0x0,-0x38(%ebp)
081f706e +0x0cae:  jne    081f709b <+0xcdb>
081f7070 +0x0cb0:  movl   $0x0,0xc(%esp)
081f7078 +0x0cb8:  movl   $0x0,0x8(%esp)
081f7080 +0x0cc0:  movl   $&_ZZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f7088 +0x0cc8:  movl   $0x8456,(%esp)
081f708f +0x0ccf:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f7094 +0x0cd4:  mov    %eax,%ebx
081f7096 +0x0cd6:  jmp    081f7930 <+0x1570>
081f709b +0x0cdb:  movzwl -0x6a(%ebp),%eax
081f709f +0x0cdf:  movzwl %ax,%edx
081f70a2 +0x0ce2:  movzbl -0x78(%ebp),%eax
081f70a6 +0x0ce6:  movzbl %al,%eax
081f70a9 +0x0ce9:  mov    %edx,0xc(%esp)
081f70ad +0x0ced:  mov    %eax,0x8(%esp)
081f70b1 +0x0cf1:  mov    0xc(%ebp),%eax
081f70b4 +0x0cf4:  mov    %eax,0x4(%esp)
081f70b8 +0x0cf8:  mov    -0x38(%ebp),%eax
081f70bb +0x0cfb:  mov    %eax,(%esp)
081f70be +0x0cfe:  call   084662cc <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt>  ; WongWork::CDeathTower::handleUseStackable(CUser*, ENUM_ITEMSPACE, unsigned short)
081f70c3 +0x0d03:  xor    $0x1,%eax
081f70c6 +0x0d06:  test   %al,%al
081f70c8 +0x0d08:  je     081f70f5 <+0xd35>
081f70ca +0x0d0a:  movl   $0x0,0xc(%esp)
081f70d2 +0x0d12:  movl   $0x0,0x8(%esp)
081f70da +0x0d1a:  movl   $&_ZZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f70e2 +0x0d22:  movl   $0x8458,(%esp)
081f70e9 +0x0d29:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f70ee +0x0d2e:  mov    %eax,%ebx
081f70f0 +0x0d30:  jmp    081f7930 <+0x1570>
081f70f5 +0x0d35:  mov    0xc(%ebp),%eax
081f70f8 +0x0d38:  mov    %eax,(%esp)
081f70fb +0x0d3b:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081f7100 +0x0d40:  mov    %eax,-0x4c(%ebp)
081f7103 +0x0d43:  cmpl   $0x0,-0x4c(%ebp)
081f7107 +0x0d47:  je     081f7708 <+0x1348>
081f710d +0x0d4d:  movl   $0x0,-0x34(%ebp)
081f7114 +0x0d54:  mov    0xc(%ebp),%eax
081f7117 +0x0d57:  mov    %eax,(%esp)
081f711a +0x0d5a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f711f +0x0d5f:  cmp    $0xa,%eax
081f7122 +0x0d62:  sete   %al
081f7125 +0x0d65:  test   %al,%al
081f7127 +0x0d67:  je     081f7137 <+0xd77>
081f7129 +0x0d69:  mov    0xc(%ebp),%eax
081f712c +0x0d6c:  mov    %eax,(%esp)
081f712f +0x0d6f:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
081f7134 +0x0d74:  mov    %eax,-0x34(%ebp)
081f7137 +0x0d77:  cmpl   $0x0,-0x34(%ebp)
081f713b +0x0d7b:  je     081f7281 <+0xec1>
081f7141 +0x0d81:  mov    -0x34(%ebp),%eax
081f7144 +0x0d84:  mov    %eax,(%esp)
081f7147 +0x0d87:  call   08234612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9cbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9cbc
081f714c +0x0d8c:  mov    %eax,(%esp)
081f714f +0x0d8f:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
081f7154 +0x0d94:  mov    %eax,(%esp)
081f7157 +0x0d97:  call   0822b4ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb78>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb78
081f715c +0x0d9c:  xor    $0x1,%eax
081f715f +0x0d9f:  test   %al,%al
081f7161 +0x0da1:  je     081f7178 <+0xdb8>
081f7163 +0x0da3:  mov    -0x4c(%ebp),%eax
081f7166 +0x0da6:  mov    0xcd8(%eax),%eax
081f716c +0x0dac:  cmp    $0x1,%eax
081f716f +0x0daf:  jne    081f7178 <+0xdb8>
081f7171 +0x0db1:  mov    $0x1,%eax
081f7176 +0x0db6:  jmp    081f717d <+0xdbd>
081f7178 +0x0db8:  mov    $0x0,%eax
081f717d +0x0dbd:  test   %al,%al
081f717f +0x0dbf:  je     081f7708 <+0x1348>
081f7185 +0x0dc5:  lea    -0xe4(%ebp),%eax
081f718b +0x0dcb:  mov    %eax,(%esp)
081f718e +0x0dce:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f7193 +0x0dd3:  movl   $0x2f,0x8(%esp)
081f719b +0x0ddb:  movl   $0x1,0x4(%esp)
081f71a3 +0x0de3:  lea    -0xe4(%ebp),%eax
081f71a9 +0x0de9:  mov    %eax,(%esp)
081f71ac +0x0dec:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f71b1 +0x0df1:  movl   $0x0,0x4(%esp)
081f71b9 +0x0df9:  lea    -0xe4(%ebp),%eax
081f71bf +0x0dff:  mov    %eax,(%esp)
081f71c2 +0x0e02:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f71c7 +0x0e07:  movl   $0x0,0x4(%esp)
081f71cf +0x0e0f:  lea    -0xe4(%ebp),%eax
081f71d5 +0x0e15:  mov    %eax,(%esp)
081f71d8 +0x0e18:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f71dd +0x0e1d:  movzbl -0x78(%ebp),%eax
081f71e1 +0x0e21:  movzbl %al,%eax
081f71e4 +0x0e24:  mov    %eax,0x4(%esp)
081f71e8 +0x0e28:  lea    -0xe4(%ebp),%eax
081f71ee +0x0e2e:  mov    %eax,(%esp)
081f71f1 +0x0e31:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f71f6 +0x0e36:  mov    -0x7c(%ebp),%eax
081f71f9 +0x0e39:  mov    %eax,0x4(%esp)
081f71fd +0x0e3d:  lea    -0xe4(%ebp),%eax
081f7203 +0x0e43:  mov    %eax,(%esp)
081f7206 +0x0e46:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f720b +0x0e4b:  mov    -0x80(%ebp),%eax
081f720e +0x0e4e:  mov    %eax,0x4(%esp)
081f7212 +0x0e52:  lea    -0xe4(%ebp),%eax
081f7218 +0x0e58:  mov    %eax,(%esp)
081f721b +0x0e5b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f7220 +0x0e60:  movl   $0x1,0x4(%esp)
081f7228 +0x0e68:  lea    -0xe4(%ebp),%eax
081f722e +0x0e6e:  mov    %eax,(%esp)
081f7231 +0x0e71:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f7236 +0x0e76:  lea    -0xe4(%ebp),%eax
081f723c +0x0e7c:  mov    %eax,0x4(%esp)
081f7240 +0x0e80:  mov    0xc(%ebp),%eax
081f7243 +0x0e83:  mov    %eax,(%esp)
081f7246 +0x0e86:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f724b +0x0e8b:  mov    $0x0,%ebx
081f7250 +0x0e90:  lea    -0xe4(%ebp),%eax
081f7256 +0x0e96:  mov    %eax,(%esp)
081f7259 +0x0e99:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f725e +0x0e9e:  jmp    081f7930 <+0x1570>
081f7263 +0x0ea3:  mov    %edx,%ebx
081f7265 +0x0ea5:  mov    %eax,%esi
081f7267 +0x0ea7:  lea    -0xe4(%ebp),%eax
081f726d +0x0ead:  mov    %eax,(%esp)
081f7270 +0x0eb0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f7275 +0x0eb5:  mov    %esi,%eax
081f7277 +0x0eb7:  mov    %ebx,%edx
081f7279 +0x0eb9:  mov    %eax,(%esp)
081f727c +0x0ebc:  call   08ae3750 <_Unwind_Resume>
081f7281 +0x0ec1:  mov    -0x4c(%ebp),%eax
081f7284 +0x0ec4:  mov    0xcd8(%eax),%eax
081f728a +0x0eca:  cmp    $0x1,%eax
081f728d +0x0ecd:  jne    081f738f <+0xfcf>
081f7293 +0x0ed3:  lea    -0xf0(%ebp),%eax
081f7299 +0x0ed9:  mov    %eax,(%esp)
081f729c +0x0edc:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f72a1 +0x0ee1:  movl   $0x2f,0x8(%esp)
081f72a9 +0x0ee9:  movl   $0x1,0x4(%esp)
081f72b1 +0x0ef1:  lea    -0xf0(%ebp),%eax
081f72b7 +0x0ef7:  mov    %eax,(%esp)
081f72ba +0x0efa:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f72bf +0x0eff:  movl   $0x0,0x4(%esp)
081f72c7 +0x0f07:  lea    -0xf0(%ebp),%eax
081f72cd +0x0f0d:  mov    %eax,(%esp)
081f72d0 +0x0f10:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f72d5 +0x0f15:  movl   $0x0,0x4(%esp)
081f72dd +0x0f1d:  lea    -0xf0(%ebp),%eax
081f72e3 +0x0f23:  mov    %eax,(%esp)
081f72e6 +0x0f26:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f72eb +0x0f2b:  movzbl -0x78(%ebp),%eax
081f72ef +0x0f2f:  movzbl %al,%eax
081f72f2 +0x0f32:  mov    %eax,0x4(%esp)
081f72f6 +0x0f36:  lea    -0xf0(%ebp),%eax
081f72fc +0x0f3c:  mov    %eax,(%esp)
081f72ff +0x0f3f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f7304 +0x0f44:  mov    -0x7c(%ebp),%eax
081f7307 +0x0f47:  mov    %eax,0x4(%esp)
081f730b +0x0f4b:  lea    -0xf0(%ebp),%eax
081f7311 +0x0f51:  mov    %eax,(%esp)
081f7314 +0x0f54:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f7319 +0x0f59:  mov    -0x80(%ebp),%eax
081f731c +0x0f5c:  mov    %eax,0x4(%esp)
081f7320 +0x0f60:  lea    -0xf0(%ebp),%eax
081f7326 +0x0f66:  mov    %eax,(%esp)
081f7329 +0x0f69:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f732e +0x0f6e:  movl   $0x1,0x4(%esp)
081f7336 +0x0f76:  lea    -0xf0(%ebp),%eax
081f733c +0x0f7c:  mov    %eax,(%esp)
081f733f +0x0f7f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f7344 +0x0f84:  lea    -0xf0(%ebp),%eax
081f734a +0x0f8a:  mov    %eax,0x4(%esp)
081f734e +0x0f8e:  mov    0xc(%ebp),%eax
081f7351 +0x0f91:  mov    %eax,(%esp)
081f7354 +0x0f94:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f7359 +0x0f99:  mov    $0x0,%ebx
081f735e +0x0f9e:  lea    -0xf0(%ebp),%eax
081f7364 +0x0fa4:  mov    %eax,(%esp)
081f7367 +0x0fa7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f736c +0x0fac:  jmp    081f7930 <+0x1570>
081f7371 +0x0fb1:  mov    %edx,%ebx
081f7373 +0x0fb3:  mov    %eax,%esi
081f7375 +0x0fb5:  lea    -0xf0(%ebp),%eax
081f737b +0x0fbb:  mov    %eax,(%esp)
081f737e +0x0fbe:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f7383 +0x0fc3:  mov    %esi,%eax
081f7385 +0x0fc5:  mov    %ebx,%edx
081f7387 +0x0fc7:  mov    %eax,(%esp)
081f738a +0x0fca:  call   08ae3750 <_Unwind_Resume>
081f738f +0x0fcf:  mov    -0x4c(%ebp),%eax
081f7392 +0x0fd2:  mov    0xcac(%eax),%eax
081f7398 +0x0fd8:  test   %eax,%eax
081f739a +0x0fda:  je     081f74bd <+0x10fd>
081f73a0 +0x0fe0:  mov    -0x4c(%ebp),%eax
081f73a3 +0x0fe3:  mov    0xcac(%eax),%eax
081f73a9 +0x0fe9:  mov    %eax,(%esp)
081f73ac +0x0fec:  call   0822b4fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xba4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xba4
081f73b1 +0x0ff1:  test   %al,%al
081f73b3 +0x0ff3:  je     081f74bd <+0x10fd>
081f73b9 +0x0ff9:  mov    -0x4c(%ebp),%eax
081f73bc +0x0ffc:  mov    0xcac(%eax),%eax
081f73c2 +0x1002:  mov    %eax,(%esp)
081f73c5 +0x1005:  call   0822b4ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb78>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb78
081f73ca +0x100a:  test   %al,%al
081f73cc +0x100c:  je     081f74bd <+0x10fd>
081f73d2 +0x1012:  movzwl -0x6a(%ebp),%eax
081f73d6 +0x1016:  movswl %ax,%esi
081f73d9 +0x1019:  movzbl -0x78(%ebp),%eax
081f73dd +0x101d:  movzbl %al,%eax
081f73e0 +0x1020:  mov    %eax,(%esp)
081f73e3 +0x1023:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081f73e8 +0x1028:  mov    %eax,%ebx
081f73ea +0x102a:  mov    0xc(%ebp),%eax
081f73ed +0x102d:  mov    %eax,(%esp)
081f73f0 +0x1030:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081f73f5 +0x1035:  mov    %esi,0x8(%esp)
081f73f9 +0x1039:  mov    %ebx,0x4(%esp)
081f73fd +0x103d:  mov    %eax,(%esp)
081f7400 +0x1040:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081f7405 +0x1045:  mov    %eax,-0x30(%ebp)
081f7408 +0x1048:  cmpl   $0x0,-0x30(%ebp)
081f740c +0x104c:  jne    081f7418 <+0x1058>
081f740e +0x104e:  mov    $0x0,%ebx
081f7413 +0x1053:  jmp    081f7930 <+0x1570>
081f7418 +0x1058:  mov    -0x30(%ebp),%eax
081f741b +0x105b:  mov    0x2(%eax),%eax
081f741e +0x105e:  mov    %eax,-0x2c(%ebp)
081f7421 +0x1061:  mov    -0x2c(%ebp),%eax
081f7424 +0x1064:  cmp    $0x18,%eax
081f7427 +0x1067:  je     081f74b3 <+0x10f3>
081f742d +0x106d:  cmp    $0x18,%eax
081f7430 +0x1070:  ja     081f7439 <+0x1079>
081f7432 +0x1072:  cmp    $0xa,%eax
081f7435 +0x1075:  je     081f74b6 <+0x10f6>
081f7437 +0x1077:  jmp    081f7445 <+0x1085>
081f7439 +0x1079:  cmp    $0x33,%eax
081f743c +0x107c:  je     081f74b9 <+0x10f9>
081f743e +0x107e:  cmp    $0x28978a,%eax
081f7443 +0x1083:  je     081f74bc <+0x10fc>
081f7445 +0x1085:  mov    -0x4c(%ebp),%eax
081f7448 +0x1088:  add    $0xb24,%eax
081f744d +0x108d:  mov    %eax,(%esp)
081f7450 +0x1090:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
081f7455 +0x1095:  mov    %eax,%esi
081f7457 +0x1097:  mov    0xc(%ebp),%eax
081f745a +0x109a:  mov    %eax,(%esp)
081f745d +0x109d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081f7462 +0x10a2:  mov    %eax,%ebx
081f7464 +0x10a4:  movl   $0x5,0xc(%esp)
081f746c +0x10ac:  movl   $0x84a2,0x8(%esp)
081f7474 +0x10b4:  movl   $&_ZZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f747c +0x10bc:  lea    -0x68(%ebp),%eax
081f747f +0x10bf:  mov    %eax,(%esp)
081f7482 +0x10c2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081f7487 +0x10c7:  mov    -0x2c(%ebp),%eax
081f748a +0x10ca:  mov    %eax,0x10(%esp)
081f748e +0x10ce:  mov    %esi,0xc(%esp)
081f7492 +0x10d2:  mov    %ebx,0x8(%esp)
081f7496 +0x10d6:  movl   $"TOD : charac_no(%u),dungeonIndex(%d),item_id(%lu)",0x4(%esp)
081f749e +0x10de:  lea    -0x68(%ebp),%eax
081f74a1 +0x10e1:  mov    %eax,(%esp)
081f74a4 +0x10e4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081f74a9 +0x10e9:  mov    $0x0,%ebx
081f74ae +0x10ee:  jmp    081f7930 <+0x1570>
081f74b3 +0x10f3:  nop
081f74b4 +0x10f4:  jmp    081f74bd <+0x10fd>
081f74b6 +0x10f6:  nop
081f74b7 +0x10f7:  jmp    081f74bd <+0x10fd>
081f74b9 +0x10f9:  nop
081f74ba +0x10fa:  jmp    081f74bd <+0x10fd>
081f74bc +0x10fc:  nop
081f74bd +0x10fd:  mov    -0x4c(%ebp),%eax
081f74c0 +0x1100:  mov    0xcac(%eax),%eax
081f74c6 +0x1106:  test   %eax,%eax
081f74c8 +0x1108:  je     081f7708 <+0x1348>
081f74ce +0x110e:  mov    -0x4c(%ebp),%eax
081f74d1 +0x1111:  mov    0xcac(%eax),%eax
081f74d7 +0x1117:  mov    %eax,-0x28(%ebp)
081f74da +0x111a:  mov    -0x28(%ebp),%eax
081f74dd +0x111d:  mov    %eax,(%esp)
081f74e0 +0x1120:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
081f74e5 +0x1125:  test   %al,%al
081f74e7 +0x1127:  je     081f7708 <+0x1348>
081f74ed +0x112d:  movzwl -0x6a(%ebp),%eax
081f74f1 +0x1131:  movswl %ax,%esi
081f74f4 +0x1134:  movzbl -0x78(%ebp),%eax
081f74f8 +0x1138:  movzbl %al,%eax
081f74fb +0x113b:  mov    %eax,(%esp)
081f74fe +0x113e:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081f7503 +0x1143:  mov    %eax,%ebx
081f7505 +0x1145:  mov    0xc(%ebp),%eax
081f7508 +0x1148:  mov    %eax,(%esp)
081f750b +0x114b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081f7510 +0x1150:  mov    %esi,0x8(%esp)
081f7514 +0x1154:  mov    %ebx,0x4(%esp)
081f7518 +0x1158:  mov    %eax,(%esp)
081f751b +0x115b:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081f7520 +0x1160:  mov    %eax,-0x24(%ebp)
081f7523 +0x1163:  cmpl   $0x0,-0x24(%ebp)
081f7527 +0x1167:  jne    081f7554 <+0x1194>
081f7529 +0x1169:  movl   $0x0,0xc(%esp)
081f7531 +0x1171:  movl   $0x0,0x8(%esp)
081f7539 +0x1179:  movl   $&_ZZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f7541 +0x1181:  movl   $0x84b1,(%esp)
081f7548 +0x1188:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f754d +0x118d:  mov    %eax,%ebx
081f754f +0x118f:  jmp    081f7930 <+0x1570>
081f7554 +0x1194:  mov    -0x24(%ebp),%eax
081f7557 +0x1197:  mov    0x2(%eax),%eax
081f755a +0x119a:  mov    %eax,%ebx
081f755c +0x119c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081f7561 +0x11a1:  mov    %ebx,0x4(%esp)
081f7565 +0x11a5:  mov    %eax,(%esp)
081f7568 +0x11a8:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081f756d +0x11ad:  mov    %eax,-0x20(%ebp)
081f7570 +0x11b0:  cmpl   $0x0,-0x20(%ebp)
081f7574 +0x11b4:  jne    081f7580 <+0x11c0>
081f7576 +0x11b6:  mov    $0x0,%ebx
081f757b +0x11bb:  jmp    081f7930 <+0x1570>
081f7580 +0x11c0:  mov    -0x20(%ebp),%eax
081f7583 +0x11c3:  mov    %eax,(%esp)
081f7586 +0x11c6:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081f758b +0x11cb:  xor    $0x1,%eax
081f758e +0x11ce:  test   %al,%al
081f7590 +0x11d0:  je     081f759c <+0x11dc>
081f7592 +0x11d2:  mov    $0x0,%ebx
081f7597 +0x11d7:  jmp    081f7930 <+0x1570>
081f759c +0x11dc:  mov    -0x20(%ebp),%eax
081f759f +0x11df:  mov    %eax,-0x1c(%ebp)
081f75a2 +0x11e2:  movl   $0x0,-0x18(%ebp)
081f75a9 +0x11e9:  mov    -0x1c(%ebp),%eax
081f75ac +0x11ec:  mov    %eax,(%esp)
081f75af +0x11ef:  call   0822c9d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x207c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x207c
081f75b4 +0x11f4:  cmp    $0x2,%eax
081f75b7 +0x11f7:  sete   %al
081f75ba +0x11fa:  test   %al,%al
081f75bc +0x11fc:  je     081f75c7 <+0x1207>
081f75be +0x11fe:  movl   $0xff,-0x18(%ebp)
081f75c5 +0x1205:  jmp    081f7603 <+0x1243>
081f75c7 +0x1207:  mov    -0x1c(%ebp),%eax
081f75ca +0x120a:  movzbl 0x364(%eax),%eax
081f75d1 +0x1211:  test   %al,%al
081f75d3 +0x1213:  je     081f75f3 <+0x1233>
081f75d5 +0x1215:  mov    -0x1c(%ebp),%eax
081f75d8 +0x1218:  mov    (%eax),%eax
081f75da +0x121a:  add    $0xc,%eax
081f75dd +0x121d:  mov    (%eax),%edx
081f75df +0x121f:  mov    -0x1c(%ebp),%eax
081f75e2 +0x1222:  mov    %eax,(%esp)
081f75e5 +0x1225:  call   *%edx
081f75e7 +0x1227:  cmp    $0x12,%eax
081f75ea +0x122a:  je     081f75f3 <+0x1233>
081f75ec +0x122c:  mov    $0x1,%eax
081f75f1 +0x1231:  jmp    081f75f8 <+0x1238>
081f75f3 +0x1233:  mov    $0x0,%eax
081f75f8 +0x1238:  test   %al,%al
081f75fa +0x123a:  je     081f7603 <+0x1243>
081f75fc +0x123c:  movl   $0xff,-0x18(%ebp)
081f7603 +0x1243:  cmpl   $0x0,-0x18(%ebp)
081f7607 +0x1247:  je     081f7708 <+0x1348>
081f760d +0x124d:  lea    -0xfc(%ebp),%eax
081f7613 +0x1253:  mov    %eax,(%esp)
081f7616 +0x1256:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f761b +0x125b:  movl   $0x2f,0x8(%esp)
081f7623 +0x1263:  movl   $0x1,0x4(%esp)
081f762b +0x126b:  lea    -0xfc(%ebp),%eax
081f7631 +0x1271:  mov    %eax,(%esp)
081f7634 +0x1274:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f7639 +0x1279:  movl   $0x0,0x4(%esp)
081f7641 +0x1281:  lea    -0xfc(%ebp),%eax
081f7647 +0x1287:  mov    %eax,(%esp)
081f764a +0x128a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f764f +0x128f:  mov    -0x18(%ebp),%eax
081f7652 +0x1292:  mov    %eax,0x4(%esp)
081f7656 +0x1296:  lea    -0xfc(%ebp),%eax
081f765c +0x129c:  mov    %eax,(%esp)
081f765f +0x129f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f7664 +0x12a4:  movzbl -0x78(%ebp),%eax
081f7668 +0x12a8:  movzbl %al,%eax
081f766b +0x12ab:  mov    %eax,0x4(%esp)
081f766f +0x12af:  lea    -0xfc(%ebp),%eax
081f7675 +0x12b5:  mov    %eax,(%esp)
081f7678 +0x12b8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f767d +0x12bd:  mov    -0x7c(%ebp),%eax
081f7680 +0x12c0:  mov    %eax,0x4(%esp)
081f7684 +0x12c4:  lea    -0xfc(%ebp),%eax
081f768a +0x12ca:  mov    %eax,(%esp)
081f768d +0x12cd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f7692 +0x12d2:  mov    -0x80(%ebp),%eax
081f7695 +0x12d5:  mov    %eax,0x4(%esp)
081f7699 +0x12d9:  lea    -0xfc(%ebp),%eax
081f769f +0x12df:  mov    %eax,(%esp)
081f76a2 +0x12e2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f76a7 +0x12e7:  movl   $0x1,0x4(%esp)
081f76af +0x12ef:  lea    -0xfc(%ebp),%eax
081f76b5 +0x12f5:  mov    %eax,(%esp)
081f76b8 +0x12f8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f76bd +0x12fd:  lea    -0xfc(%ebp),%eax
081f76c3 +0x1303:  mov    %eax,0x4(%esp)
081f76c7 +0x1307:  mov    0xc(%ebp),%eax
081f76ca +0x130a:  mov    %eax,(%esp)
081f76cd +0x130d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f76d2 +0x1312:  mov    $0x0,%ebx
081f76d7 +0x1317:  lea    -0xfc(%ebp),%eax
081f76dd +0x131d:  mov    %eax,(%esp)
081f76e0 +0x1320:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f76e5 +0x1325:  jmp    081f7930 <+0x1570>
081f76ea +0x132a:  mov    %edx,%ebx
081f76ec +0x132c:  mov    %eax,%esi
081f76ee +0x132e:  lea    -0xfc(%ebp),%eax
081f76f4 +0x1334:  mov    %eax,(%esp)
081f76f7 +0x1337:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f76fc +0x133c:  mov    %esi,%eax
081f76fe +0x133e:  mov    %ebx,%edx
081f7700 +0x1340:  mov    %eax,(%esp)
081f7703 +0x1343:  call   08ae3750 <_Unwind_Resume>
081f7708 +0x1348:  movzwl -0x6a(%ebp),%eax
081f770c +0x134c:  movswl %ax,%esi
081f770f +0x134f:  movzbl -0x78(%ebp),%eax
081f7713 +0x1353:  movzbl %al,%eax
081f7716 +0x1356:  mov    %eax,(%esp)
081f7719 +0x1359:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081f771e +0x135e:  mov    %eax,%ebx
081f7720 +0x1360:  mov    0xc(%ebp),%eax
081f7723 +0x1363:  mov    %eax,(%esp)
081f7726 +0x1366:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081f772b +0x136b:  mov    %esi,0x8(%esp)
081f772f +0x136f:  mov    %ebx,0x4(%esp)
081f7733 +0x1373:  mov    %eax,(%esp)
081f7736 +0x1376:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081f773b +0x137b:  mov    %eax,-0x48(%ebp)
081f773e +0x137e:  cmpl   $0x0,-0x48(%ebp)
081f7742 +0x1382:  jne    081f774e <+0x138e>
081f7744 +0x1384:  mov    $0x0,%ebx
081f7749 +0x1389:  jmp    081f7930 <+0x1570>
081f774e +0x138e:  mov    -0x48(%ebp),%eax
081f7751 +0x1391:  mov    0x2(%eax),%eax
081f7754 +0x1394:  cmp    $0x27ac4a,%eax
081f7759 +0x1399:  jne    081f78cf <+0x150f>
081f775f +0x139f:  mov    0xc(%ebp),%eax
081f7762 +0x13a2:  mov    %eax,(%esp)
081f7765 +0x13a5:  call   0822f7ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e58>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e58
081f776a +0x13aa:  mov    %eax,-0x14(%ebp)
081f776d +0x13ad:  mov    0xc(%ebp),%eax
081f7770 +0x13b0:  mov    %eax,(%esp)
081f7773 +0x13b3:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081f7778 +0x13b8:  mov    %eax,-0x10(%ebp)
081f777b +0x13bb:  movb   $0x0,-0x9(%ebp)
081f777f +0x13bf:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081f7786 +0x13c6:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081f778b +0x13cb:  mov    -0x14(%ebp),%edx
081f778e +0x13ce:  add    $0x258,%edx
081f7794 +0x13d4:  cmp    %edx,%eax
081f7796 +0x13d6:  setl   %al
081f7799 +0x13d9:  test   %al,%al
081f779b +0x13db:  je     081f77a3 <+0x13e3>
081f779d +0x13dd:  movb   $0xfa,-0x9(%ebp)
081f77a1 +0x13e1:  jmp    081f77cc <+0x140c>
081f77a3 +0x13e3:  cmpl   $0x0,-0x10(%ebp)
081f77a7 +0x13e7:  je     081f77bf <+0x13ff>
081f77a9 +0x13e9:  mov    -0x10(%ebp),%eax
081f77ac +0x13ec:  mov    %eax,(%esp)
081f77af +0x13ef:  call   085bcab6 <_ZN6CParty29CheckMemberLastTryAssaultTimeEv>  ; CParty::CheckMemberLastTryAssaultTime()
081f77b4 +0x13f4:  test   %al,%al
081f77b6 +0x13f6:  je     081f77bf <+0x13ff>
081f77b8 +0x13f8:  mov    $0x1,%eax
081f77bd +0x13fd:  jmp    081f77c4 <+0x1404>
081f77bf +0x13ff:  mov    $0x0,%eax
081f77c4 +0x1404:  test   %al,%al
081f77c6 +0x1406:  je     081f77cc <+0x140c>
081f77c8 +0x1408:  movb   $0xfd,-0x9(%ebp)
081f77cc +0x140c:  cmpb   $0x0,-0x9(%ebp)
081f77d0 +0x1410:  je     081f78cf <+0x150f>
081f77d6 +0x1416:  lea    -0x108(%ebp),%eax
081f77dc +0x141c:  mov    %eax,(%esp)
081f77df +0x141f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f77e4 +0x1424:  movl   $0x2f,0x8(%esp)
081f77ec +0x142c:  movl   $0x1,0x4(%esp)
081f77f4 +0x1434:  lea    -0x108(%ebp),%eax
081f77fa +0x143a:  mov    %eax,(%esp)
081f77fd +0x143d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f7802 +0x1442:  movl   $0x0,0x4(%esp)
081f780a +0x144a:  lea    -0x108(%ebp),%eax
081f7810 +0x1450:  mov    %eax,(%esp)
081f7813 +0x1453:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f7818 +0x1458:  movsbl -0x9(%ebp),%eax
081f781c +0x145c:  mov    %eax,0x4(%esp)
081f7820 +0x1460:  lea    -0x108(%ebp),%eax
081f7826 +0x1466:  mov    %eax,(%esp)
081f7829 +0x1469:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f782e +0x146e:  movzbl -0x78(%ebp),%eax
081f7832 +0x1472:  movzbl %al,%eax
081f7835 +0x1475:  mov    %eax,0x4(%esp)
081f7839 +0x1479:  lea    -0x108(%ebp),%eax
081f783f +0x147f:  mov    %eax,(%esp)
081f7842 +0x1482:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f7847 +0x1487:  mov    -0x7c(%ebp),%eax
081f784a +0x148a:  mov    %eax,0x4(%esp)
081f784e +0x148e:  lea    -0x108(%ebp),%eax
081f7854 +0x1494:  mov    %eax,(%esp)
081f7857 +0x1497:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f785c +0x149c:  mov    -0x80(%ebp),%eax
081f785f +0x149f:  mov    %eax,0x4(%esp)
081f7863 +0x14a3:  lea    -0x108(%ebp),%eax
081f7869 +0x14a9:  mov    %eax,(%esp)
081f786c +0x14ac:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f7871 +0x14b1:  movl   $0x1,0x4(%esp)
081f7879 +0x14b9:  lea    -0x108(%ebp),%eax
081f787f +0x14bf:  mov    %eax,(%esp)
081f7882 +0x14c2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f7887 +0x14c7:  lea    -0x108(%ebp),%eax
081f788d +0x14cd:  mov    %eax,0x4(%esp)
081f7891 +0x14d1:  mov    0xc(%ebp),%eax
081f7894 +0x14d4:  mov    %eax,(%esp)
081f7897 +0x14d7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f789c +0x14dc:  mov    $0x0,%ebx
081f78a1 +0x14e1:  lea    -0x108(%ebp),%eax
081f78a7 +0x14e7:  mov    %eax,(%esp)
081f78aa +0x14ea:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f78af +0x14ef:  jmp    081f7930 <+0x1570>
081f78b1 +0x14f1:  mov    %edx,%ebx
081f78b3 +0x14f3:  mov    %eax,%esi
081f78b5 +0x14f5:  lea    -0x108(%ebp),%eax
081f78bb +0x14fb:  mov    %eax,(%esp)
081f78be +0x14fe:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f78c3 +0x1503:  mov    %esi,%eax
081f78c5 +0x1505:  mov    %ebx,%edx
081f78c7 +0x1507:  mov    %eax,(%esp)
081f78ca +0x150a:  call   08ae3750 <_Unwind_Resume>
081f78cf +0x150f:  mov    -0x80(%ebp),%ebx
081f78d2 +0x1512:  mov    -0x7c(%ebp),%ecx
081f78d5 +0x1515:  movzbl -0x78(%ebp),%eax
081f78d9 +0x1519:  movzbl %al,%edx
081f78dc +0x151c:  movzwl -0x6a(%ebp),%eax
081f78e0 +0x1520:  cwtl
081f78e1 +0x1521:  mov    %ebx,0x10(%esp)
081f78e5 +0x1525:  mov    %ecx,0xc(%esp)
081f78e9 +0x1529:  mov    %edx,0x8(%esp)
081f78ed +0x152d:  mov    %eax,0x4(%esp)
081f78f1 +0x1531:  mov    0xc(%ebp),%eax
081f78f4 +0x1534:  mov    %eax,(%esp)
081f78f7 +0x1537:  call   0865e0ae <_ZN5CUser13use_stackableEsiii>  ; CUser::use_stackable(short, int, int, int)
081f78fc +0x153c:  xor    $0x1,%eax
081f78ff +0x153f:  test   %al,%al
081f7901 +0x1541:  je     081f792b <+0x156b>
081f7903 +0x1543:  movl   $0x0,0xc(%esp)
081f790b +0x154b:  movl   $0x0,0x8(%esp)
081f7913 +0x1553:  movl   $&_ZZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f791b +0x155b:  movl   $0x8508,(%esp)
081f7922 +0x1562:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f7927 +0x1567:  mov    %eax,%ebx
081f7929 +0x1569:  jmp    081f7930 <+0x1570>
081f792b +0x156b:  mov    $0x0,%ebx
081f7930 +0x1570:  mov    %ebx,%eax
081f7932 +0x1572:  add    $0x120,%esp
081f7938 +0x1578:  pop    %ebx
081f7939 +0x1579:  pop    %esi
081f793a +0x157a:  pop    %ebp
081f793b +0x157b:  ret
```

## 反编译 C

```c
// DisPatcher_UseStack::dispatch_sig @ 0x81f63c0

/* WARNING: Removing unreachable block (ram,0x081f6d33) */
/* DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_UseStack::dispatch_sig(DisPatcher_UseStack *this,CUser *param_1,PacketBuf *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  CHackAnalyzer *pCVar7;
  ServiceRestrictManager *pSVar8;
  CInventory *pCVar9;
  CDataManager *pCVar10;
  CDungeonMgr *this_00;
  CDungeon *this_01;
  undefined4 uVar11;
  int iVar12;
  PacketGuard local_10c [12];
  PacketGuard local_100 [12];
  PacketGuard local_f4 [12];
  PacketGuard local_e8 [12];
  PacketGuard local_dc [12];
  PacketGuard local_d0 [12];
  PacketGuard local_c4 [12];
  PacketGuard local_b8 [12];
  PacketGuard local_ac [12];
  PacketGuard local_a0 [12];
  PacketGuard local_94 [12];
  int local_88;
  int local_84;
  int local_80;
  byte local_7c [14];
  short local_6e;
  cMyTrace local_6c [16];
  CItem *local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int *local_44;
  ushort local_40;
  char local_3d;
  CDeathTower *local_3c;
  CDeathTower *local_38;
  int local_34;
  uint local_30;
  CDungeon *local_2c;
  int local_28;
  CStackableItem *local_24;
  CStackableItem *local_20;
  int local_1c;
  int local_18;
  CParty *local_14;
  char local_d;
  
  cVar3 = PacketBuf::get_short(param_2,&local_6e);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0x8315,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar5;
  }
  cVar3 = PacketBuf::get_byte(param_2,local_7c);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0x8318,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar5;
  }
  local_80 = 0;
  local_84 = 0;
  cVar3 = PacketBuf::get_int(param_2,&local_80);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0x831d,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar5;
  }
  cVar3 = PacketBuf::get_int(param_2,&local_84);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0x831e,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar5;
  }
  iVar6 = CUser::get_state(param_1);
  if (((((iVar6 == 5) || (iVar6 = CUser::get_state(param_1), iVar6 == 7)) ||
       (iVar6 = CUser::get_state(param_1), iVar6 == 8)) ||
      ((iVar6 = CUser::get_state(param_1), iVar6 == 3 ||
       (iVar6 = CUser::get_state(param_1), iVar6 == 6)))) ||
     ((iVar6 = CUser::get_state(param_1), iVar6 == 10 ||
      (iVar6 = CUser::get_state(param_1), iVar6 == 0xc)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    PacketGuard::PacketGuard(local_94);
                    /* try { // try from 081f6597 to 081f6635 has its CatchHandler @ 081f664e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,1,0x2f);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0x13);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,(uint)local_7c[0]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_80);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_84);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
    CUser::Send(param_1,local_94);
    PacketGuard::~PacketGuard(local_94);
    return 0;
  }
  local_88 = 0;
  cVar3 = PacketBuf::get_int(param_2,&local_88);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0x8338,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar5;
  }
  iVar6 = CUser::getCurCharacInvenCheckSum(param_1);
  if (iVar6 != local_88) {
    pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_1,0x25b,1,0,0);
  }
  pSVar8 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar3 = ServiceRestrictManager::isRestricted(pSVar8,param_1,1,0xc);
  if (cVar3 != '\0') {
    PacketGuard::PacketGuard(local_a0);
                    /* try { // try from 081f6764 to 081f6802 has its CatchHandler @ 081f681b */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a0,1,0x2f);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0xd1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,(uint)local_7c[0]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a0,local_80);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a0,local_84);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a0,true);
    CUser::Send(param_1,local_a0);
    PacketGuard::~PacketGuard(local_a0);
    return 0;
  }
  local_5c = (CItem *)CSecu_ProtectionField::GetItemPtr
                                (GlobalData::s_pSecuProtectionField,param_1,local_7c[0],local_6e);
  if (local_5c == (CItem *)0x0) {
    uVar5 = LineFunc(0x8354,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar5;
  }
  local_58 = CSecu_ProtectionField::CheckItem
                       (GlobalData::s_pSecuProtectionField,param_1,0x2a,local_5c);
  if (local_58 != 0) {
    PacketGuard::PacketGuard(local_ac);
                    /* try { // try from 081f68ee to 081f698b has its CatchHandler @ 081f69a4 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_ac,1,0x2f);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ac,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ac,local_58);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ac,(uint)local_7c[0]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_ac,local_80);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_ac,local_84);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_ac,true);
    CUser::Send(param_1,local_ac);
    PacketGuard::~PacketGuard(local_ac);
    return 0;
  }
  cVar3 = CItem::is_stackable(local_5c);
  if ((cVar3 != '\0') &&
     (cVar3 = CStackableItem::verifyUsablePlace((CStackableItem *)local_5c,param_1), cVar3 != '\x01'
     )) {
    PacketGuard::PacketGuard(local_b8);
                    /* try { // try from 081f6a19 to 081f6ab7 has its CatchHandler @ 081f6ad0 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b8,1,0x2f);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b8,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b8,0x13);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b8,(uint)local_7c[0]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b8,local_80);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b8,local_84);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b8,true);
    CUser::Send(param_1,local_b8);
    PacketGuard::~PacketGuard(local_b8);
    return 0;
  }
  local_54 = 0;
  iVar6 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
  if ((iVar6 == 0) &&
     ((iVar6 = CUser::get_state(param_1), iVar6 == 3 ||
      (iVar6 = CUser::get_state(param_1), iVar6 == 6)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    iVar12 = (int)local_6e;
    iVar6 = GetInvenTypeFromItemSpace(local_7c[0]);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_48 = CInventory::GetInvenRef(pCVar9,iVar6,iVar12);
    if (local_48 == 0) {
      uVar5 = LineFunc(0x83b7,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
      return uVar5;
    }
    iVar6 = *(int *)(local_48 + 2);
    pCVar10 = (CDataManager *)G_CDataManager();
    local_44 = (int *)CDataManager::find_item(pCVar10,iVar6);
    if (local_44 == (int *)0x0) {
      return 0;
    }
    iVar6 = (**(code **)(*local_44 + 0xc))(local_44);
    if (iVar6 != 0x16) {
      if (iVar6 < 0x17) {
        if (iVar6 != 3) {
LAB_081f6c08:
          uVar1 = *(uint *)(local_48 + 2);
          if (uVar1 != 0x33) {
            if (uVar1 < 0x34) {
              if ((uVar1 != 10) && (uVar1 != 0x18)) {
LAB_081f6c4d:
                PacketGuard::PacketGuard(local_c4);
                    /* try { // try from 081f6c74 to 081f6d12 has its CatchHandler @ 081f6d35 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_c4,1,0x2f);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,0);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,0x13);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,(uint)local_7c[0]);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_c4,local_80);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_c4,local_84);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_c4,true);
                CUser::Send(param_1,local_c4);
                PacketGuard::~PacketGuard(local_c4);
                return 0;
              }
            }
            else if ((uVar1 < 0x1e6d) || ((0x1e73 < uVar1 && (uVar1 != 0x28978a))))
            goto LAB_081f6c4d;
          }
        }
      }
      else if ((iVar6 != 0x18) && (iVar6 != 0x23)) goto LAB_081f6c08;
    }
    local_40 = 0;
    local_3d = '\0';
    uVar1 = *(uint *)(local_48 + 2);
    if (uVar1 == 0x1f8f) {
LAB_081f6df8:
      local_40 = 0x1e;
      local_3d = '\x01';
    }
    else if (uVar1 < 0x1f90) {
      if (uVar1 == 0x1d5e) {
        local_3d = '\x01';
        local_40 = 10;
      }
      else if (uVar1 < 0x1d5f) {
        if (uVar1 == 0x1d20) {
          local_3d = '\x01';
          local_40 = 0x28;
        }
      }
      else if (uVar1 - 0x1ddc < 2) {
        local_3d = '\x01';
        local_40 = 6;
      }
    }
    else {
      if (uVar1 == 0x27ac5a) goto LAB_081f6df8;
      if (uVar1 < 0x27ac5b) {
        if (uVar1 == 0x201d) {
          local_40 = 0x14;
          local_3d = '\x01';
        }
      }
      else if ((uVar1 == 0x27addd) || (uVar1 == 0x292090de)) goto LAB_081f6df8;
    }
    if (local_3d != '\0') {
      iVar6 = CUser::get_state(param_1);
      if (iVar6 != 3) {
        PacketGuard::PacketGuard(local_d0);
                    /* try { // try from 081f6e58 to 081f6ef6 has its CatchHandler @ 081f6f0f */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d0,1,0x2f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d0,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d0,0x13);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d0,(uint)local_7c[0]);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d0,local_80);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d0,local_84);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d0,true);
        CUser::Send(param_1,local_d0);
        PacketGuard::~PacketGuard(local_d0);
        return 0;
      }
      uVar4 = CUserCharacInfo::getCurCharacFatigue((CUserCharacInfo *)param_1);
      if (uVar4 < local_40) {
        PacketGuard::PacketGuard(local_dc);
                    /* try { // try from 081f6f6e to 081f700c has its CatchHandler @ 081f7025 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_dc,1,0x2f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_dc,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_dc,0x5f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_dc,(uint)local_7c[0]);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_dc,local_80);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_dc,local_84);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_dc,true);
        CUser::Send(param_1,local_dc);
        PacketGuard::~PacketGuard(local_dc);
        return 0;
      }
    }
  }
  iVar6 = CUser::get_state(param_1);
  if (iVar6 == 10) {
    local_3c = (CDeathTower *)CUser::getDeathTower(param_1);
    if (local_3c == (CDeathTower *)0x0) {
      uVar5 = LineFunc(0x8456,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
      return uVar5;
    }
    cVar3 = WongWork::CDeathTower::handleUseStackable(local_3c,param_1,local_7c[0],local_6e);
    if (cVar3 != '\x01') {
      uVar5 = LineFunc(0x8458,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
      return uVar5;
    }
  }
  local_50 = CUser::GetParty(param_1);
  if (local_50 != 0) {
    local_38 = (CDeathTower *)0x0;
    iVar6 = CUser::get_state(param_1);
    if (iVar6 == 10) {
      local_38 = (CDeathTower *)CUser::getDeathTower(param_1);
    }
    if (local_38 == (CDeathTower *)0x0) {
      if (*(int *)(local_50 + 0xcd8) == 1) {
        PacketGuard::PacketGuard(local_f4);
                    /* try { // try from 081f72ba to 081f7358 has its CatchHandler @ 081f7371 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_f4,1,0x2f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f4,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f4,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f4,(uint)local_7c[0]);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f4,local_80);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f4,local_84);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_f4,true);
        CUser::Send(param_1,local_f4);
        PacketGuard::~PacketGuard(local_f4);
        return 0;
      }
      if (((*(int *)(local_50 + 0xcac) != 0) &&
          (cVar3 = CDungeon::isTowerOfDespairDungeon(*(CDungeon **)(local_50 + 0xcac)),
          cVar3 != '\0')) &&
         (cVar3 = CDungeon::limitOfStackableItemInTower(*(CDungeon **)(local_50 + 0xcac)),
         cVar3 != '\0')) {
        iVar12 = (int)local_6e;
        iVar6 = GetInvenTypeFromItemSpace(local_7c[0]);
        pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        local_34 = CInventory::GetInvenRef(pCVar9,iVar6,iVar12);
        if (local_34 == 0) {
          return 0;
        }
        local_30 = *(uint *)(local_34 + 2);
        if (local_30 != 0x18) {
          if (local_30 < 0x19) {
            if (local_30 != 10) {
LAB_081f7445:
              uVar5 = CBattle_Field::get_dungeon_index((CBattle_Field *)(local_50 + 0xb24));
              uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_6c,
                                 "virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0x84a2,5);
              cMyTrace::operator()
                        (local_6c,"TOD : charac_no(%u),dungeonIndex(%d),item_id(%lu)",uVar11,uVar5,
                         local_30);
              return 0;
            }
          }
          else if ((local_30 != 0x33) && (local_30 != 0x28978a)) goto LAB_081f7445;
        }
      }
      if (*(int *)(local_50 + 0xcac) != 0) {
        local_2c = *(CDungeon **)(local_50 + 0xcac);
        cVar3 = CDungeon::isTournamentDungeon(local_2c);
        if (cVar3 != '\0') {
          iVar12 = (int)local_6e;
          iVar6 = GetInvenTypeFromItemSpace(local_7c[0]);
          pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          local_28 = CInventory::GetInvenRef(pCVar9,iVar6,iVar12);
          if (local_28 == 0) {
            uVar5 = LineFunc(0x84b1,
                             "virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,0
                            );
            return uVar5;
          }
          iVar6 = *(int *)(local_28 + 2);
          pCVar10 = (CDataManager *)G_CDataManager();
          local_24 = (CStackableItem *)CDataManager::find_item(pCVar10,iVar6);
          if (local_24 == (CStackableItem *)0x0) {
            return 0;
          }
          cVar3 = CItem::is_stackable((CItem *)local_24);
          if (cVar3 != '\x01') {
            return 0;
          }
          local_20 = local_24;
          local_1c = 0;
          iVar6 = CStackableItem::get_sub_type(local_24);
          if (iVar6 == 2) {
            local_1c = 0xff;
          }
          else {
            if ((local_20[0x364] == (CStackableItem)0x0) ||
               (iVar6 = (**(code **)(*(int *)local_20 + 0xc))(local_20), iVar6 == 0x12)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              local_1c = 0xff;
            }
          }
          if (local_1c != 0) {
            PacketGuard::PacketGuard(local_100);
                    /* try { // try from 081f7634 to 081f76d1 has its CatchHandler @ 081f76ea */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_100,1,0x2f);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_100,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_100,local_1c);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_100,(uint)local_7c[0]);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_100,local_80);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_100,local_84);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_100,true);
            CUser::Send(param_1,local_100);
            PacketGuard::~PacketGuard(local_100);
            return 0;
          }
        }
      }
    }
    else {
      this_00 = (CDungeonMgr *)WongWork::CDeathTower::getCDungeonMGr(local_38);
      this_01 = (CDungeon *)WongWork::CDeathTower::CDungeonMgr::getDungeon(this_00);
      cVar3 = CDungeon::limitOfStackableItemInTower(this_01);
      if ((cVar3 == '\x01') || (*(int *)(local_50 + 0xcd8) != 1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        PacketGuard::PacketGuard(local_e8);
                    /* try { // try from 081f71ac to 081f724a has its CatchHandler @ 081f7263 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_e8,1,0x2f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e8,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e8,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e8,(uint)local_7c[0]);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e8,local_80);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e8,local_84);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_e8,true);
        CUser::Send(param_1,local_e8);
        PacketGuard::~PacketGuard(local_e8);
        return 0;
      }
    }
  }
  iVar12 = (int)local_6e;
  iVar6 = GetInvenTypeFromItemSpace(local_7c[0]);
  pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_4c = CInventory::GetInvenRef(pCVar9,iVar6,iVar12);
  if (local_4c == 0) {
    uVar5 = 0;
  }
  else {
    if (*(int *)(local_4c + 2) == 0x27ac4a) {
      local_18 = CUserCharacInfo::GetCurCharacChaosKillTime((CUserCharacInfo *)param_1);
      local_14 = (CParty *)CUser::GetParty(param_1);
      local_d = '\0';
      iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if (iVar6 < local_18 + 600) {
        local_d = -6;
      }
      else {
        if ((local_14 == (CParty *)0x0) ||
           (cVar3 = CParty::CheckMemberLastTryAssaultTime(local_14), cVar3 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_d = -3;
        }
      }
      if (local_d != '\0') {
        PacketGuard::PacketGuard(local_10c);
                    /* try { // try from 081f77fd to 081f789b has its CatchHandler @ 081f78b1 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_10c,1,0x2f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_10c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_10c,(int)local_d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_10c,(uint)local_7c[0]);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_10c,local_80);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_10c,local_84);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_10c,true);
        CUser::Send(param_1,local_10c);
        PacketGuard::~PacketGuard(local_10c);
        return 0;
      }
    }
    cVar3 = CUser::use_stackable(param_1,local_6e,(uint)local_7c[0],local_80,local_84);
    if (cVar3 == '\x01') {
      uVar5 = 0;
    }
    else {
      uVar5 = LineFunc(0x8508,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar5;
}
```
