# dispatch_sig

`_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_HumanCertify::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_HumanCertify` | `0x082064d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082064d6  _ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_HumanCertify::dispatch_sig(CUser*, PacketBuf&)
# range [0x082064d6, 0x0820697b]
082064d6 +0x000:  push   %ebp
082064d7 +0x001:  mov    %esp,%ebp
082064d9 +0x003:  sub    $0x48,%esp
082064dc +0x006:  mov    0xc(%ebp),%eax
082064df +0x009:  mov    %eax,(%esp)
082064e2 +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082064e7 +0x011:  cmp    $0x2,%eax
082064ea +0x014:  setle  %al
082064ed +0x017:  test   %al,%al
082064ef +0x019:  je     0820651a <+0x44>
082064f1 +0x01b:  movl   $0x0,0xc(%esp)
082064f9 +0x023:  movl   $0x0,0x8(%esp)
08206501 +0x02b:  movl   $&_ZZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206509 +0x033:  movl   $0xa007,(%esp)
08206510 +0x03a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206515 +0x03f:  jmp    08206979 <+0x4a3>
0820651a +0x044:  mov    0xc(%ebp),%eax
0820651d +0x047:  add    $0x8e3f0,%eax
08206522 +0x04c:  mov    %eax,(%esp)
08206525 +0x04f:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
0820652a +0x054:  cmp    $0x251b,%eax
0820652f +0x059:  seta   %al
08206532 +0x05c:  test   %al,%al
08206534 +0x05e:  je     0820659b <+0xc5>
08206536 +0x060:  movl   $0x64,(%esp)
0820653d +0x067:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08206542 +0x06c:  mov    %eax,-0xc(%ebp)
08206545 +0x06f:  cmpl   $0xa,-0xc(%ebp)
08206549 +0x073:  jg     0820659b <+0xc5>
0820654b +0x075:  mov    0xc(%ebp),%eax
0820654e +0x078:  add    $0x8e3f0,%eax
08206553 +0x07d:  mov    %eax,(%esp)
08206556 +0x080:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
0820655b +0x085:  mov    0xc(%ebp),%edx
0820655e +0x088:  add    $0x79700,%edx
08206564 +0x08e:  movl   $0x2,0x8(%esp)
0820656c +0x096:  mov    %eax,0x4(%esp)
08206570 +0x09a:  mov    %edx,(%esp)
08206573 +0x09d:  call   086853e6 <_ZN15cUserHistoryLog15RequestCleanPadEjc>  ; cUserHistoryLog::RequestCleanPad(unsigned int, char)
08206578 +0x0a2:  movl   $0x0,0xc(%esp)
08206580 +0x0aa:  movl   $0x1,0x8(%esp)
08206588 +0x0b2:  movl   $0x35,0x4(%esp)
08206590 +0x0ba:  mov    0xc(%ebp),%eax
08206593 +0x0bd:  mov    %eax,(%esp)
08206596 +0x0c0:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
0820659b +0x0c5:  movl   $0x0,-0x18(%ebp)
082065a2 +0x0cc:  movl   $0xa,-0x14(%ebp)
082065a9 +0x0d3:  movl   $0x0,-0x22(%ebp)
082065b0 +0x0da:  movl   $0x0,-0x1e(%ebp)
082065b7 +0x0e1:  movw   $0x0,-0x1a(%ebp)
082065bd +0x0e7:  lea    -0x18(%ebp),%eax
082065c0 +0x0ea:  mov    %eax,0x4(%esp)
082065c4 +0x0ee:  mov    0x10(%ebp),%eax
082065c7 +0x0f1:  mov    %eax,(%esp)
082065ca +0x0f4:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082065cf +0x0f9:  xor    $0x1,%eax
082065d2 +0x0fc:  test   %al,%al
082065d4 +0x0fe:  jne    082065de <+0x108>
082065d6 +0x100:  mov    -0x18(%ebp),%eax
082065d9 +0x103:  cmp    $0xa,%eax
082065dc +0x106:  jle    082065e5 <+0x10f>
082065de +0x108:  mov    $0x1,%eax
082065e3 +0x10d:  jmp    082065ea <+0x114>
082065e5 +0x10f:  mov    $0x0,%eax
082065ea +0x114:  test   %al,%al
082065ec +0x116:  je     08206617 <+0x141>
082065ee +0x118:  movl   $0x0,0xc(%esp)
082065f6 +0x120:  movl   $0x0,0x8(%esp)
082065fe +0x128:  movl   $&_ZZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206606 +0x130:  movl   $0xa023,(%esp)
0820660d +0x137:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206612 +0x13c:  jmp    08206979 <+0x4a3>
08206617 +0x141:  lea    -0x22(%ebp),%eax
0820661a +0x144:  movl   $0xa,0x8(%esp)
08206622 +0x14c:  mov    %eax,0x4(%esp)
08206626 +0x150:  mov    0x10(%ebp),%eax
08206629 +0x153:  mov    %eax,(%esp)
0820662c +0x156:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
08206631 +0x15b:  xor    $0x1,%eax
08206634 +0x15e:  test   %al,%al
08206636 +0x160:  je     08206661 <+0x18b>
08206638 +0x162:  movl   $0x0,0xc(%esp)
08206640 +0x16a:  movl   $0x0,0x8(%esp)
08206648 +0x172:  movl   $&_ZZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206650 +0x17a:  movl   $0xa024,(%esp)
08206657 +0x181:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820665c +0x186:  jmp    08206979 <+0x4a3>
08206661 +0x18b:  movb   $0x1,-0xd(%ebp)
08206665 +0x18f:  movw   $0x0,-0x24(%ebp)
0820666b +0x195:  lea    -0x24(%ebp),%eax
0820666e +0x198:  mov    %eax,0x4(%esp)
08206672 +0x19c:  mov    0x10(%ebp),%eax
08206675 +0x19f:  mov    %eax,(%esp)
08206678 +0x1a2:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0820667d +0x1a7:  xor    $0x1,%eax
08206680 +0x1aa:  test   %al,%al
08206682 +0x1ac:  je     082066ad <+0x1d7>
08206684 +0x1ae:  movl   $0x0,0xc(%esp)
0820668c +0x1b6:  movl   $0x0,0x8(%esp)
08206694 +0x1be:  movl   $&_ZZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820669c +0x1c6:  movl   $0xa02f,(%esp)
082066a3 +0x1cd:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082066a8 +0x1d2:  jmp    08206979 <+0x4a3>
082066ad +0x1d7:  movb   $0x0,-0x25(%ebp)
082066b1 +0x1db:  lea    -0x25(%ebp),%eax
082066b4 +0x1de:  mov    %eax,0x4(%esp)
082066b8 +0x1e2:  mov    0x10(%ebp),%eax
082066bb +0x1e5:  mov    %eax,(%esp)
082066be +0x1e8:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
082066c3 +0x1ed:  xor    $0x1,%eax
082066c6 +0x1f0:  test   %al,%al
082066c8 +0x1f2:  je     082066f3 <+0x21d>
082066ca +0x1f4:  movl   $0x0,0xc(%esp)
082066d2 +0x1fc:  movl   $0x0,0x8(%esp)
082066da +0x204:  movl   $&_ZZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082066e2 +0x20c:  movl   $0xa032,(%esp)
082066e9 +0x213:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082066ee +0x218:  jmp    08206979 <+0x4a3>
082066f3 +0x21d:  movzbl -0x25(%ebp),%eax
082066f7 +0x221:  cmp    $0x2,%al
082066f9 +0x223:  jne    0820673c <+0x266>
082066fb +0x225:  movl   $0x1,0x4(%esp)
08206703 +0x22d:  mov    0xc(%ebp),%eax
08206706 +0x230:  mov    %eax,(%esp)
08206709 +0x233:  call   0823022a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58d4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58d4
0820670e +0x238:  movl   $0x0,0x4(%esp)
08206716 +0x240:  mov    0xc(%ebp),%eax
08206719 +0x243:  mov    %eax,(%esp)
0820671c +0x246:  call   08689f12 <_ZN5CUser8SendMailEb>  ; CUser::SendMail(bool)
08206721 +0x24b:  mov    0xc(%ebp),%eax
08206724 +0x24e:  mov    %eax,(%esp)
08206727 +0x251:  call   082307da <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5e84>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5e84
0820672c +0x256:  mov    0xc(%ebp),%eax
0820672f +0x259:  mov    %eax,(%esp)
08206732 +0x25c:  call   0867f720 <_ZN5CUser21resetHumanCertifyDataEv>  ; CUser::resetHumanCertifyData()
08206737 +0x261:  jmp    0820690f <+0x439>
0820673c +0x266:  mov    -0x18(%ebp),%eax
0820673f +0x269:  lea    -0x22(%ebp),%edx
08206742 +0x26c:  mov    %edx,0x8(%esp)
08206746 +0x270:  mov    %eax,0x4(%esp)
0820674a +0x274:  mov    0xc(%ebp),%eax
0820674d +0x277:  mov    %eax,(%esp)
08206750 +0x27a:  call   0867f4c8 <_ZN5CUser17checkHumanCertifyEiPt>  ; CUser::checkHumanCertify(int, unsigned short*)
08206755 +0x27f:  xor    $0x1,%eax
08206758 +0x282:  test   %al,%al
0820675a +0x284:  je     0820685f <+0x389>
08206760 +0x28a:  mov    0xc(%ebp),%eax
08206763 +0x28d:  add    $0x8e3f0,%eax
08206768 +0x292:  mov    %eax,(%esp)
0820676b +0x295:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
08206770 +0x29a:  mov    0xc(%ebp),%edx
08206773 +0x29d:  add    $0x79700,%edx
08206779 +0x2a3:  movl   $0x2,0x8(%esp)
08206781 +0x2ab:  mov    %eax,0x4(%esp)
08206785 +0x2af:  mov    %edx,(%esp)
08206788 +0x2b2:  call   086853e6 <_ZN15cUserHistoryLog15RequestCleanPadEjc>  ; cUserHistoryLog::RequestCleanPad(unsigned int, char)
0820678d +0x2b7:  movb   $0x0,-0xd(%ebp)
08206791 +0x2bb:  mov    0xc(%ebp),%eax
08206794 +0x2be:  mov    %eax,(%esp)
08206797 +0x2c1:  call   082307ec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5e96>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5e96
0820679c +0x2c6:  test   %al,%al
0820679e +0x2c8:  je     082067fe <+0x328>
082067a0 +0x2ca:  movzbl -0x25(%ebp),%eax
082067a4 +0x2ce:  cmp    $0x1,%al
082067a6 +0x2d0:  jne    082067d6 <+0x300>
082067a8 +0x2d2:  movl   $0x0,0x4(%esp)
082067b0 +0x2da:  mov    0xc(%ebp),%eax
082067b3 +0x2dd:  mov    %eax,(%esp)
082067b6 +0x2e0:  call   08689f12 <_ZN5CUser8SendMailEb>  ; CUser::SendMail(bool)
082067bb +0x2e5:  mov    0xc(%ebp),%eax
082067be +0x2e8:  mov    %eax,(%esp)
082067c1 +0x2eb:  call   0867f720 <_ZN5CUser21resetHumanCertifyDataEv>  ; CUser::resetHumanCertifyData()
082067c6 +0x2f0:  mov    0xc(%ebp),%eax
082067c9 +0x2f3:  mov    %eax,(%esp)
082067cc +0x2f6:  call   082307da <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5e84>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5e84
082067d1 +0x2fb:  jmp    0820690f <+0x439>
082067d6 +0x300:  movl   $0x0,0xc(%esp)
082067de +0x308:  movl   $0x1,0x8(%esp)
082067e6 +0x310:  movl   $0x1f,0x4(%esp)
082067ee +0x318:  mov    0xc(%ebp),%eax
082067f1 +0x31b:  mov    %eax,(%esp)
082067f4 +0x31e:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
082067f9 +0x323:  jmp    0820690f <+0x439>
082067fe +0x328:  movzbl -0x25(%ebp),%eax
08206802 +0x32c:  cmp    $0x1,%al
08206804 +0x32e:  jne    08206834 <+0x35e>
08206806 +0x330:  mov    0xc(%ebp),%eax
08206809 +0x333:  mov    %eax,(%esp)
0820680c +0x336:  call   0868a51a <_ZN5CUser18reqSendMailCertifyEv>  ; CUser::reqSendMailCertify()
08206811 +0x33b:  xor    $0x1,%eax
08206814 +0x33e:  test   %al,%al
08206816 +0x340:  je     0820690f <+0x439>
0820681c +0x346:  movl   $0x1,0x4(%esp)
08206824 +0x34e:  mov    0xc(%ebp),%eax
08206827 +0x351:  mov    %eax,(%esp)
0820682a +0x354:  call   08689f12 <_ZN5CUser8SendMailEb>  ; CUser::SendMail(bool)
0820682f +0x359:  jmp    0820690f <+0x439>
08206834 +0x35e:  movl   $0x1,0x4(%esp)
0820683c +0x366:  mov    0xc(%ebp),%eax
0820683f +0x369:  mov    %eax,(%esp)
08206842 +0x36c:  call   0823022a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58d4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58d4
08206847 +0x371:  movl   $0x0,0x4(%esp)
0820684f +0x379:  mov    0xc(%ebp),%eax
08206852 +0x37c:  mov    %eax,(%esp)
08206855 +0x37f:  call   086802b8 <_ZN5CUser24reqHumanCertify4ClearMapEb>  ; CUser::reqHumanCertify4ClearMap(bool)
0820685a +0x384:  jmp    0820690f <+0x439>
0820685f +0x389:  movzbl -0x25(%ebp),%eax
08206863 +0x38d:  cmp    $0x1,%al
08206865 +0x38f:  jne    0820687a <+0x3a4>
08206867 +0x391:  movl   $0x1,0x4(%esp)
0820686f +0x399:  mov    0xc(%ebp),%eax
08206872 +0x39c:  mov    %eax,(%esp)
08206875 +0x39f:  call   08689f12 <_ZN5CUser8SendMailEb>  ; CUser::SendMail(bool)
0820687a +0x3a4:  mov    0xc(%ebp),%eax
0820687d +0x3a7:  mov    %eax,(%esp)
08206880 +0x3aa:  call   082307da <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5e84>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5e84
08206885 +0x3af:  mov    0xc(%ebp),%eax
08206888 +0x3b2:  add    $0x8e3f0,%eax
0820688d +0x3b7:  mov    %eax,(%esp)
08206890 +0x3ba:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
08206895 +0x3bf:  mov    0xc(%ebp),%edx
08206898 +0x3c2:  add    $0x79700,%edx
0820689e +0x3c8:  movl   $0x1,0x8(%esp)
082068a6 +0x3d0:  mov    %eax,0x4(%esp)
082068aa +0x3d4:  mov    %edx,(%esp)
082068ad +0x3d7:  call   086853e6 <_ZN15cUserHistoryLog15RequestCleanPadEjc>  ; cUserHistoryLog::RequestCleanPad(unsigned int, char)
082068b2 +0x3dc:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082068b9 +0x3e3:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
082068be +0x3e8:  mov    0xc(%ebp),%edx
082068c1 +0x3eb:  mov    0x8e94c(%edx),%edx
082068c7 +0x3f1:  sub    %edx,%eax
082068c9 +0x3f3:  cmp    $0x7cf,%eax
082068ce +0x3f8:  setbe  %al
082068d1 +0x3fb:  test   %al,%al
082068d3 +0x3fd:  je     0820690f <+0x439>
082068d5 +0x3ff:  mov    0xc(%ebp),%eax
082068d8 +0x402:  mov    %eax,(%esp)
082068db +0x405:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
082068e0 +0x40a:  movl   $0x0,0x14(%esp)
082068e8 +0x412:  movl   $0x0,0x10(%esp)
082068f0 +0x41a:  movl   $0x1,0xc(%esp)
082068f8 +0x422:  movl   $0x341,0x8(%esp)
08206900 +0x42a:  mov    0xc(%ebp),%edx
08206903 +0x42d:  mov    %edx,0x4(%esp)
08206907 +0x431:  mov    %eax,(%esp)
0820690a +0x434:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0820690f +0x439:  movzwl -0x24(%ebp),%eax
08206913 +0x43d:  movzwl %ax,%eax
08206916 +0x440:  mov    %eax,0x4(%esp)
0820691a +0x444:  mov    0xc(%ebp),%eax
0820691d +0x447:  mov    %eax,(%esp)
08206920 +0x44a:  call   08649b44 <_ZN5CUser22VerifyCleanPadVeriDataEj>  ; CUser::VerifyCleanPadVeriData(unsigned int)
08206925 +0x44f:  test   %al,%al
08206927 +0x451:  je     08206963 <+0x48d>
08206929 +0x453:  mov    0xc(%ebp),%eax
0820692c +0x456:  mov    %eax,(%esp)
0820692f +0x459:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08206934 +0x45e:  movl   $0x0,0x14(%esp)
0820693c +0x466:  movl   $0x0,0x10(%esp)
08206944 +0x46e:  movl   $0x1,0xc(%esp)
0820694c +0x476:  movl   $0x337,0x8(%esp)
08206954 +0x47e:  mov    0xc(%ebp),%edx
08206957 +0x481:  mov    %edx,0x4(%esp)
0820695b +0x485:  mov    %eax,(%esp)
0820695e +0x488:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08206963 +0x48d:  cmpb   $0x0,-0xd(%ebp)
08206967 +0x491:  je     08206974 <+0x49e>
08206969 +0x493:  mov    0xc(%ebp),%eax
0820696c +0x496:  mov    %eax,(%esp)
0820696f +0x499:  call   0867f720 <_ZN5CUser21resetHumanCertifyDataEv>  ; CUser::resetHumanCertifyData()
08206974 +0x49e:  mov    $0x0,%eax
08206979 +0x4a3:  leave
0820697a +0x4a4:  ret
0820697b +0x4a5:  nop
```

## 反编译 C

```c
// Dispatcher_HumanCertify::dispatch_sig @ 0x82064d6

/* Dispatcher_HumanCertify::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_HumanCertify::dispatch_sig
          (Dispatcher_HumanCertify *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  CHackAnalyzer *pCVar6;
  uchar local_29;
  ushort local_28;
  ushort local_26 [5];
  int local_1c [2];
  char local_11;
  int local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 < 3) {
    uVar4 = LineFunc(0xa007,"virtual int Dispatcher_HumanCertify::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    uVar5 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_1 + 0x8e3f0));
    if (0x251b < uVar5) {
      local_10 = get_rand_int(100);
      if (local_10 < 0xb) {
        uVar5 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_1 + 0x8e3f0));
        cUserHistoryLog::RequestCleanPad((cUserHistoryLog *)(param_1 + 0x79700),uVar5,'\x02');
        CUser::DisConnSig(param_1,0x35,1,0);
      }
    }
    local_1c[0] = 0;
    local_1c[1] = 10;
    local_26[0] = 0;
    local_26[1] = 0;
    local_26[2] = 0;
    local_26[3] = 0;
    local_26[4] = 0;
    cVar2 = PacketBuf::get_int(param_2,local_1c);
    if ((cVar2 == '\x01') && (local_1c[0] < 0xb)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = LineFunc(0xa023,
                       "virtual int Dispatcher_HumanCertify::dispatch_sig(CUser*, PacketBuf&)",0,0);
    }
    else {
      cVar2 = PacketBuf::get_binary(param_2,(char *)local_26,10);
      if (cVar2 == '\x01') {
        local_11 = '\x01';
        local_28 = 0;
        cVar2 = PacketBuf::get_short(param_2,&local_28);
        if (cVar2 == '\x01') {
          local_29 = '\0';
          cVar2 = PacketBuf::get_byte(param_2,&local_29);
          if (cVar2 == '\x01') {
            if (local_29 == '\x02') {
              CUser::setHumanCertified(param_1,true);
              CUser::SendMail(param_1,false);
              CUser::resetCleanpadFailCnt(param_1);
              CUser::resetHumanCertifyData(param_1);
            }
            else {
              cVar2 = CUser::checkHumanCertify(param_1,local_1c[0],local_26);
              if (cVar2 == '\x01') {
                if (local_29 == '\x01') {
                  CUser::SendMail(param_1,true);
                }
                CUser::resetCleanpadFailCnt(param_1);
                uVar5 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_1 + 0x8e3f0));
                cUserHistoryLog::RequestCleanPad
                          ((cUserHistoryLog *)(param_1 + 0x79700),uVar5,'\x01');
                iVar3 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
                if ((uint)(iVar3 - *(int *)(param_1 + 0x8e94c)) < 2000) {
                  pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x341,1,0,0);
                }
              }
              else {
                uVar5 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_1 + 0x8e3f0));
                cUserHistoryLog::RequestCleanPad
                          ((cUserHistoryLog *)(param_1 + 0x79700),uVar5,'\x02');
                local_11 = '\0';
                cVar2 = CUser::isCleanPadVerifyLimit(param_1);
                if (cVar2 == '\0') {
                  if (local_29 == '\x01') {
                    cVar2 = CUser::reqSendMailCertify(param_1);
                    if (cVar2 != '\x01') {
                      CUser::SendMail(param_1,true);
                    }
                  }
                  else {
                    CUser::setHumanCertified(param_1,true);
                    CUser::reqHumanCertify4ClearMap(param_1,false);
                  }
                }
                else if (local_29 == '\x01') {
                  CUser::SendMail(param_1,false);
                  CUser::resetHumanCertifyData(param_1);
                  CUser::resetCleanpadFailCnt(param_1);
                }
                else {
                  CUser::DisConnSig(param_1,0x1f,1,0);
                }
              }
            }
            cVar2 = CUser::VerifyCleanPadVeriData(param_1,(uint)local_28);
            if (cVar2 != '\0') {
              pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x337,1,0,0);
            }
            if (local_11 != '\0') {
              CUser::resetHumanCertifyData(param_1);
            }
            uVar4 = 0;
          }
          else {
            uVar4 = LineFunc(0xa032,
                             "virtual int Dispatcher_HumanCertify::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar4 = LineFunc(0xa02f,
                           "virtual int Dispatcher_HumanCertify::dispatch_sig(CUser*, PacketBuf&)",0
                           ,0);
        }
      }
      else {
        uVar4 = LineFunc(0xa024,
                         "virtual int Dispatcher_HumanCertify::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
      }
    }
  }
  return uVar4;
}
```
