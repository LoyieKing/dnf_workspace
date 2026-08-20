# doDispatch

`_ZN16PacketDispatcher10doDispatchEP5CUser16ENUM_PACKETCLASStPciS2_t`

`PacketDispatcher::doDispatch(CUser*, ENUM_PACKETCLASS, unsigned short, char*, int, ENUM_PACKETCLASS, unsigned short)`

| 类 | 地址 |
|---|---|
| `PacketDispatcher` | `0x08594922` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08594922  _ZN16PacketDispatcher10doDispatchEP5CUser16ENUM_PACKETCLASStPciS2_t
#           PacketDispatcher::doDispatch(CUser*, ENUM_PACKETCLASS, unsigned short, char*, int, ENUM_PACKETCLASS, unsigned short)
# range [0x08594922, 0x08594e51]
08594922 +0x000:  push   %ebp
08594923 +0x001:  mov    %esp,%ebp
08594925 +0x003:  push   %esi
08594926 +0x004:  push   %ebx
08594927 +0x005:  sub    $&_ZL14gUnicodeBuffer+0xce64,%esp
0859492d +0x00b:  mov    0x14(%ebp),%edx
08594930 +0x00e:  mov    0x24(%ebp),%eax
08594933 +0x011:  mov    %dx,-&_ZL14gUnicodeBuffer+0xce40(%ebp)
0859493a +0x018:  mov    %ax,-&_ZL14gUnicodeBuffer+0xce44(%ebp)
08594941 +0x01f:  movzwl -&_ZL14gUnicodeBuffer+0xce40(%ebp),%eax
08594948 +0x026:  mov    0x1c(%ebp),%edx
0859494b +0x029:  mov    %edx,0x14(%esp)
0859494f +0x02d:  mov    0x18(%ebp),%edx
08594952 +0x030:  mov    %edx,0x10(%esp)
08594956 +0x034:  mov    %eax,0xc(%esp)
0859495a +0x038:  mov    0x10(%ebp),%eax
0859495d +0x03b:  mov    %eax,0x8(%esp)
08594961 +0x03f:  mov    0xc(%ebp),%eax
08594964 +0x042:  mov    %eax,0x4(%esp)
08594968 +0x046:  mov    0x8(%ebp),%eax
0859496b +0x049:  mov    %eax,(%esp)
0859496e +0x04c:  call   0825f72e <_ZN16PacketDispatcher15log_recv_packetEP5CUser16ENUM_PACKETCLASStPci>  ; PacketDispatcher::log_recv_packet(CUser*, ENUM_PACKETCLASS, unsigned short, char*, int)
08594973 +0x051:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
08594978 +0x056:  mov    (%eax),%eax
0859497a +0x058:  add    $0x30,%eax
0859497d +0x05b:  mov    (%eax),%esi
0859497f +0x05d:  movzwl -&_ZL14gUnicodeBuffer+0xce40(%ebp),%ebx
08594986 +0x064:  mov    0xc(%ebp),%eax
08594989 +0x067:  mov    %eax,(%esp)
0859498c +0x06a:  call   0822fce4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x538e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x538e
08594991 +0x06f:  mov    %eax,%edx
08594993 +0x071:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
08594998 +0x076:  mov    %ebx,0x8(%esp)
0859499c +0x07a:  mov    %edx,0x4(%esp)
085949a0 +0x07e:  mov    %eax,(%esp)
085949a3 +0x081:  call   *%esi
085949a5 +0x083:  test   %eax,%eax
085949a7 +0x085:  setne  %al
085949aa +0x088:  test   %al,%al
085949ac +0x08a:  je     08594a0f <+0xed>
085949ae +0x08c:  cmpw   $0x25c,-&_ZL14gUnicodeBuffer+0xce44(%ebp)
085949b7 +0x095:  je     08594a0f <+0xed>
085949b9 +0x097:  movzwl -&_ZL14gUnicodeBuffer+0xce40(%ebp),%ebx
085949c0 +0x09e:  mov    0xc(%ebp),%eax
085949c3 +0x0a1:  mov    %eax,(%esp)
085949c6 +0x0a4:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085949cb +0x0a9:  movl   $0x0,0x4(%esp)
085949d3 +0x0b1:  mov    %eax,(%esp)
085949d6 +0x0b4:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
085949db +0x0b9:  mov    %ebx,0x18(%esp)
085949df +0x0bd:  mov    %eax,0x14(%esp)
085949e3 +0x0c1:  movl   $"m_id:%s, cmd:%d",0x10(%esp)
085949eb +0x0c9:  movl   $0xa06,0xc(%esp)
085949f3 +0x0d1:  movl   $&_ZZN16PacketDispatcher10doDispatchEP5CUser16ENUM_PACKETCLASStPciS2_tE19__PRETTY_FUNCTION__,0x8(%esp)
085949fb +0x0d9:  movl   $"PacketDispatcher.cpp",0x4(%esp)
08594a03 +0x0e1:  movl   $0x1,(%esp)
08594a0a +0x0e8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08594a0f +0x0ed:  movzwl -&_ZL14gUnicodeBuffer+0xce40(%ebp),%eax
08594a16 +0x0f4:  mov    %eax,0x4(%esp)
08594a1a +0x0f8:  mov    0x8(%ebp),%eax
08594a1d +0x0fb:  mov    %eax,(%esp)
08594a20 +0x0fe:  call   085948e2 <_ZN16PacketDispatcher14get_dispatcherEi>  ; PacketDispatcher::get_dispatcher(int)
08594a25 +0x103:  mov    %eax,-0x20(%ebp)
08594a28 +0x106:  cmpl   $0x0,-0x20(%ebp)
08594a2c +0x10a:  jne    08594a38 <+0x116>
08594a2e +0x10c:  mov    $0x0,%ebx
08594a33 +0x111:  jmp    08594e46 <+0x524>
08594a38 +0x116:  mov    0x8(%ebp),%eax
08594a3b +0x119:  mov    %eax,(%esp)
08594a3e +0x11c:  call   0825f658 <_ZN16PacketDispatcher22server_load_monitoringEv>  ; PacketDispatcher::server_load_monitoring()
08594a43 +0x121:  mov    0xc(%ebp),%eax
08594a46 +0x124:  mov    %eax,(%esp)
08594a49 +0x127:  call   08595060 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x40>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x40
08594a4e +0x12c:  cmpl   $0xd,0x1c(%ebp)
08594a52 +0x130:  jle    08594b45 <+0x223>
08594a58 +0x136:  cmpw   $0x25c,-&_ZL14gUnicodeBuffer+0xce44(%ebp)
08594a61 +0x13f:  jne    08594b45 <+0x223>
08594a67 +0x145:  mov    0x1c(%ebp),%eax
08594a6a +0x148:  lea    -0xb(%eax),%edx
08594a6d +0x14b:  mov    0x18(%ebp),%eax
08594a70 +0x14e:  add    $0xb,%eax
08594a73 +0x151:  mov    %edx,0x4(%esp)
08594a77 +0x155:  mov    %eax,(%esp)
08594a7a +0x158:  call   0848d4c8 <_ZN10Encryption6crc32NEPvi>  ; Encryption::crc32N(void*, int)
08594a7f +0x15d:  mov    %eax,-0x24(%ebp)
08594a82 +0x160:  movl   $0xd,0x8(%esp)
08594a8a +0x168:  mov    0x18(%ebp),%eax
08594a8d +0x16b:  mov    %eax,0x4(%esp)
08594a91 +0x16f:  lea    -0x31(%ebp),%eax
08594a94 +0x172:  mov    %eax,(%esp)
08594a97 +0x175:  call   0807d8a0 <_init+0x198>
08594a9c +0x17a:  lea    -0x31(%ebp),%eax
08594a9f +0x17d:  add    $0x7,%eax
08594aa2 +0x180:  mov    %eax,0x4(%esp)
08594aa6 +0x184:  lea    -0x24(%ebp),%eax
08594aa9 +0x187:  mov    %eax,(%esp)
08594aac +0x18a:  call   0808cc4b <_Z31_NS_PI_2ND_MakeChecksumTo1Byte2RjS_>  ; _NS_PI_2ND_MakeChecksumTo1Byte2(unsigned int&, unsigned int&)
08594ab1 +0x18f:  mov    -0x2a(%ebp),%edx
08594ab4 +0x192:  mov    -0x24(%ebp),%eax
08594ab7 +0x195:  cmp    %eax,%edx
08594ab9 +0x197:  je     08594b45 <+0x223>
08594abf +0x19d:  mov    0xc(%ebp),%eax
08594ac2 +0x1a0:  mov    %eax,(%esp)
08594ac5 +0x1a3:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08594aca +0x1a8:  movl   $0x0,0x4(%esp)
08594ad2 +0x1b0:  mov    %eax,(%esp)
08594ad5 +0x1b3:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08594ada +0x1b8:  mov    -0x2a(%ebp),%ecx
08594add +0x1bb:  mov    -0x24(%ebp),%edx
08594ae0 +0x1be:  mov    %eax,0x1c(%esp)
08594ae4 +0x1c2:  mov    %ecx,0x18(%esp)
08594ae8 +0x1c6:  mov    %edx,0x14(%esp)
08594aec +0x1ca:  movl   $"Check Sum Error: server(%d), client(%d), mid(%s)",0x10(%esp)
08594af4 +0x1d2:  movl   $0xa37,0xc(%esp)
08594afc +0x1da:  movl   $&_ZZN16PacketDispatcher10doDispatchEP5CUser16ENUM_PACKETCLASStPciS2_tE19__PRETTY_FUNCTION__,0x8(%esp)
08594b04 +0x1e2:  movl   $"PacketDispatcher.cpp",0x4(%esp)
08594b0c +0x1ea:  movl   $0x1,(%esp)
08594b13 +0x1f1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08594b18 +0x1f6:  movl   $0x0,0xc(%esp)
08594b20 +0x1fe:  movl   $0x1,0x8(%esp)
08594b28 +0x206:  movl   $0xd,0x4(%esp)
08594b30 +0x20e:  mov    0xc(%ebp),%eax
08594b33 +0x211:  mov    %eax,(%esp)
08594b36 +0x214:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
08594b3b +0x219:  mov    $0x0,%ebx
08594b40 +0x21e:  jmp    08594e46 <+0x524>
08594b45 +0x223:  lea    -&_ZL14gUnicodeBuffer+0xce3c(%ebp),%eax
08594b4b +0x229:  mov    %eax,(%esp)
08594b4e +0x22c:  call   0858c8c0 <_ZN9PacketBufC1Ev>  ; PacketBuf::PacketBuf()
08594b53 +0x231:  mov    0x1c(%ebp),%eax
08594b56 +0x234:  mov    %eax,0x8(%esp)
08594b5a +0x238:  mov    0x18(%ebp),%eax
08594b5d +0x23b:  mov    %eax,0x4(%esp)
08594b61 +0x23f:  lea    -&_ZL14gUnicodeBuffer+0xce3c(%ebp),%eax
08594b67 +0x245:  mov    %eax,(%esp)
08594b6a +0x248:  call   0858d4de <_ZN9PacketBuf11bind_packetEPci>  ; PacketBuf::bind_packet(char*, int)
08594b6f +0x24d:  movzwl -&_ZL14gUnicodeBuffer+0xce40(%ebp),%eax
08594b76 +0x254:  mov    %eax,0x4(%esp)
08594b7a +0x258:  mov    0xc(%ebp),%eax
08594b7d +0x25b:  mov    %eax,(%esp)
08594b80 +0x25e:  call   0867cbc4 <_ZN5CUser15setLastPacketIDEi>  ; CUser::setLastPacketID(int)
08594b85 +0x263:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08594b8a +0x268:  mov    %eax,(%esp)
08594b8d +0x26b:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08594b92 +0x270:  cmp    $0x7,%eax
08594b95 +0x273:  je     08594ba8 <+0x286>
08594b97 +0x275:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08594b9c +0x27a:  mov    %eax,(%esp)
08594b9f +0x27d:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
08594ba4 +0x282:  test   %al,%al
08594ba6 +0x284:  je     08594baf <+0x28d>
08594ba8 +0x286:  mov    $0x1,%eax
08594bad +0x28b:  jmp    08594bb4 <+0x292>
08594baf +0x28d:  mov    $0x0,%eax
08594bb4 +0x292:  test   %al,%al
08594bb6 +0x294:  je     08594bd5 <+0x2b3>
08594bb8 +0x296:  movzwl -&_ZL14gUnicodeBuffer+0xce40(%ebp),%eax
08594bbf +0x29d:  mov    %eax,(%esp)
08594bc2 +0x2a0:  call   0859092a <_Z10DenyPacketi>  ; DenyPacket(int)
08594bc7 +0x2a5:  test   %al,%al
08594bc9 +0x2a7:  je     08594bd5 <+0x2b3>
08594bcb +0x2a9:  mov    $0x1,%ebx
08594bd0 +0x2ae:  jmp    08594e38 <+0x516>
08594bd5 +0x2b3:  cmpw   $0x25b,-&_ZL14gUnicodeBuffer+0xce40(%ebp)
08594bde +0x2bc:  jne    08594bef <+0x2cd>
08594be0 +0x2be:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08594be7 +0x2c5:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
08594bec +0x2ca:  mov    %eax,-0x1c(%ebp)
08594bef +0x2cd:  movl   $0x0,-0x18(%ebp)
08594bf6 +0x2d4:  movzwl -&_ZL14gUnicodeBuffer+0xce40(%ebp),%eax
08594bfd +0x2db:  mov    0x8(%ebp),%edx
08594c00 +0x2de:  add    $0x978,%edx
08594c06 +0x2e4:  mov    %eax,0x8(%esp)
08594c0a +0x2e8:  mov    0xc(%ebp),%eax
08594c0d +0x2eb:  mov    %eax,0x4(%esp)
08594c11 +0x2ef:  mov    %edx,(%esp)
08594c14 +0x2f2:  call   0812af6a <_ZNK26CLocalChinaErrorDispatcher17doErrorDispatcherEP5CUsert>  ; CLocalChinaErrorDispatcher::doErrorDispatcher(CUser*, unsigned short) const
08594c19 +0x2f7:  mov    %eax,-0x18(%ebp)
08594c1c +0x2fa:  cmpl   $0x0,-0x18(%ebp)
08594c20 +0x2fe:  setne  %al
08594c23 +0x301:  test   %al,%al
08594c25 +0x303:  je     08594d1b <+0x3f9>
08594c2b +0x309:  mov    -0x18(%ebp),%eax
08594c2e +0x30c:  cmp    $0x1,%eax
08594c31 +0x30f:  je     08594cbb <+0x399>
08594c37 +0x315:  cmp    $0x2,%eax
08594c3a +0x318:  jne    08594d11 <+0x3ef>
08594c40 +0x31e:  mov    0xc(%ebp),%eax
08594c43 +0x321:  mov    %eax,(%esp)
08594c46 +0x324:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08594c4b +0x329:  movl   $0x0,0x4(%esp)
08594c53 +0x331:  mov    %eax,(%esp)
08594c56 +0x334:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08594c5b +0x339:  movzwl -&_ZL14gUnicodeBuffer+0xce40(%ebp),%edx
08594c62 +0x340:  mov    %eax,0x18(%esp)
08594c66 +0x344:  mov    %edx,0x14(%esp)
08594c6a +0x348:  movl   $"[doErrorDispatcher] ERROR_TING - code : %d, m_id :%s",0x10(%esp)
08594c72 +0x350:  movl   $0xa5b,0xc(%esp)
08594c7a +0x358:  movl   $&_ZZN16PacketDispatcher10doDispatchEP5CUser16ENUM_PACKETCLASStPciS2_tE19__PRETTY_FUNCTION__,0x8(%esp)
08594c82 +0x360:  movl   $"PacketDispatcher.cpp",0x4(%esp)
08594c8a +0x368:  movl   $0x1,(%esp)
08594c91 +0x36f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08594c96 +0x374:  movl   $0x0,0xc(%esp)
08594c9e +0x37c:  movl   $0x1,0x8(%esp)
08594ca6 +0x384:  movl   $0xa,0x4(%esp)
08594cae +0x38c:  mov    0xc(%ebp),%eax
08594cb1 +0x38f:  mov    %eax,(%esp)
08594cb4 +0x392:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
08594cb9 +0x397:  jmp    08594d11 <+0x3ef>
08594cbb +0x399:  mov    0xc(%ebp),%eax
08594cbe +0x39c:  mov    %eax,(%esp)
08594cc1 +0x39f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08594cc6 +0x3a4:  movl   $0x0,0x4(%esp)
08594cce +0x3ac:  mov    %eax,(%esp)
08594cd1 +0x3af:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08594cd6 +0x3b4:  movzwl -&_ZL14gUnicodeBuffer+0xce40(%ebp),%edx
08594cdd +0x3bb:  mov    %eax,0x18(%esp)
08594ce1 +0x3bf:  mov    %edx,0x14(%esp)
08594ce5 +0x3c3:  movl   $"[doErrorDispatcher] ERROR_NOT_TING - code : %d, m_id :%s",0x10(%esp)
08594ced +0x3cb:  movl   $0xa60,0xc(%esp)
08594cf5 +0x3d3:  movl   $&_ZZN16PacketDispatcher10doDispatchEP5CUser16ENUM_PACKETCLASStPciS2_tE19__PRETTY_FUNCTION__,0x8(%esp)
08594cfd +0x3db:  movl   $"PacketDispatcher.cpp",0x4(%esp)
08594d05 +0x3e3:  movl   $0x1,(%esp)
08594d0c +0x3ea:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08594d11 +0x3ef:  mov    $0x0,%ebx
08594d16 +0x3f4:  jmp    08594e38 <+0x516>
08594d1b +0x3f9:  mov    -0x20(%ebp),%eax
08594d1e +0x3fc:  mov    (%eax),%eax
08594d20 +0x3fe:  mov    (%eax),%edx
08594d22 +0x400:  lea    -&_ZL14gUnicodeBuffer+0xce3c(%ebp),%eax
08594d28 +0x406:  mov    %eax,0x8(%esp)
08594d2c +0x40a:  mov    0xc(%ebp),%eax
08594d2f +0x40d:  mov    %eax,0x4(%esp)
08594d33 +0x411:  mov    -0x20(%ebp),%eax
08594d36 +0x414:  mov    %eax,(%esp)
08594d39 +0x417:  call   *%edx
08594d3b +0x419:  mov    %eax,-0x14(%ebp)
08594d3e +0x41c:  cmpl   $0x0,-0x14(%ebp)
08594d42 +0x420:  setne  %al
08594d45 +0x423:  test   %al,%al
08594d47 +0x425:  je     08594d75 <+0x453>
08594d49 +0x427:  mov    -0x14(%ebp),%eax
08594d4c +0x42a:  mov    %eax,0xc(%esp)
08594d50 +0x42e:  movl   $0x1,0x8(%esp)
08594d58 +0x436:  movl   $0xa,0x4(%esp)
08594d60 +0x43e:  mov    0xc(%ebp),%eax
08594d63 +0x441:  mov    %eax,(%esp)
08594d66 +0x444:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
08594d6b +0x449:  mov    $0x0,%ebx
08594d70 +0x44e:  jmp    08594e38 <+0x516>
08594d75 +0x453:  cmpw   $0x25b,-&_ZL14gUnicodeBuffer+0xce40(%ebp)
08594d7e +0x45c:  jne    08594de1 <+0x4bf>
08594d80 +0x45e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08594d87 +0x465:  call   082a68c8 <_GLOBAL__I__ZN4CLog5this_E+0x2cef>  ; global constructors keyed to CLog::this_+0x2cef
08594d8c +0x46a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08594d93 +0x471:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
08594d98 +0x476:  sub    -0x1c(%ebp),%eax
08594d9b +0x479:  mov    %eax,-0x10(%ebp)
08594d9e +0x47c:  movl   $0x7d0,-0xc(%ebp)
08594da5 +0x483:  cmpl   $0x7d0,-0x10(%ebp)
08594dac +0x48a:  jbe    08594de1 <+0x4bf>
08594dae +0x48c:  mov    -0x10(%ebp),%eax
08594db1 +0x48f:  mov    %eax,0x14(%esp)
08594db5 +0x493:  movl   $"Delay notice, OnRecvBufferFromClient dispatch time : %u",0x10(%esp)
08594dbd +0x49b:  movl   $0xa7a,0xc(%esp)
08594dc5 +0x4a3:  movl   $&_ZZN16PacketDispatcher10doDispatchEP5CUser16ENUM_PACKETCLASStPciS2_tE19__PRETTY_FUNCTION__,0x8(%esp)
08594dcd +0x4ab:  movl   $"PacketDispatcher.cpp",0x4(%esp)
08594dd5 +0x4b3:  movl   $0x1,(%esp)
08594ddc +0x4ba:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08594de1 +0x4bf:  cmpw   $0x25b,-&_ZL14gUnicodeBuffer+0xce40(%ebp)
08594dea +0x4c8:  je     08594e13 <+0x4f1>
08594dec +0x4ca:  movzwl -&_ZL14gUnicodeBuffer+0xce40(%ebp),%eax
08594df3 +0x4d1:  mov    0xc(%ebp),%edx
08594df6 +0x4d4:  mov    %edx,0xc(%esp)
08594dfa +0x4d8:  lea    -&_ZL14gUnicodeBuffer+0xce3c(%ebp),%edx
08594e00 +0x4de:  mov    %edx,0x8(%esp)
08594e04 +0x4e2:  mov    %eax,0x4(%esp)
08594e08 +0x4e6:  mov    0x10(%ebp),%eax
08594e0b +0x4e9:  mov    %eax,(%esp)
08594e0e +0x4ec:  call   08274778 <_Z16_NS_PI_Check_CMD16ENUM_PACKETCLASStR9PacketBufP5CUser>  ; _NS_PI_Check_CMD(ENUM_PACKETCLASS, unsigned short, PacketBuf&, CUser*)
08594e13 +0x4f1:  mov    $0x1,%ebx
08594e18 +0x4f6:  jmp    08594e38 <+0x516>
08594e1a +0x4f8:  mov    %edx,%ebx
08594e1c +0x4fa:  mov    %eax,%esi
08594e1e +0x4fc:  lea    -&_ZL14gUnicodeBuffer+0xce3c(%ebp),%eax
08594e24 +0x502:  mov    %eax,(%esp)
08594e27 +0x505:  call   0858c8dc <_ZN9PacketBufD1Ev>  ; PacketBuf::~PacketBuf()
08594e2c +0x50a:  mov    %esi,%eax
08594e2e +0x50c:  mov    %ebx,%edx
08594e30 +0x50e:  mov    %eax,(%esp)
08594e33 +0x511:  call   08ae3750 <_Unwind_Resume>
08594e38 +0x516:  lea    -&_ZL14gUnicodeBuffer+0xce3c(%ebp),%eax
08594e3e +0x51c:  mov    %eax,(%esp)
08594e41 +0x51f:  call   0858c8dc <_ZN9PacketBufD1Ev>  ; PacketBuf::~PacketBuf()
08594e46 +0x524:  mov    %ebx,%eax
08594e48 +0x526:  add    $&_ZL14gUnicodeBuffer+0xce64,%esp
08594e4e +0x52c:  pop    %ebx
08594e4f +0x52d:  pop    %esi
08594e50 +0x52e:  pop    %ebp
08594e51 +0x52f:  ret
```

## 反编译 C

```c
// PacketDispatcher::doDispatch @ 0x8594922

/* PacketDispatcher::doDispatch(CUser*, ENUM_PACKETCLASS, unsigned short, char*, int,
   ENUM_PACKETCLASS, unsigned short) */

undefined4 __thiscall
PacketDispatcher::doDispatch
          (PacketDispatcher *this,CUser *param_1,undefined4 param_3,ushort param_4,char *param_5,
          int param_6,undefined4 param_7,short param_8)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  GameWorld *pGVar7;
  PacketBuf aPStack_1736c [95031];
  undefined1 local_35 [7];
  uint local_2e;
  uint local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  undefined4 local_10;
  
  log_recv_packet(this,param_1,param_3,param_4,param_5,param_6);
  pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 0x30);
  uVar4 = CUser::getAntibotKey(param_1);
  iVar5 = (*pcVar1)(GlobalData::s_antibotChecker_,uVar4,param_4);
  if ((iVar5 != 0) && (param_8 != 0x25c)) {
    uVar6 = CUser::get_acc_id(param_1);
    uVar4 = NumberToString(uVar6,0);
    LogManager::logFormat
              (1,"PacketDispatcher.cpp",
               "bool PacketDispatcher::doDispatch(CUser*, ENUM_PACKETCLASS, short unsigned int, char*, int, ENUM_PACKETCLASS, short unsigned int)"
               ,0xa06,"m_id:%s, cmd:%d",uVar4,(uint)param_4);
  }
  local_24 = (undefined4 *)get_dispatcher(this,(uint)param_4);
  if (local_24 == (undefined4 *)0x0) {
    return 0;
  }
  server_load_monitoring();
  CUser::backupSeed(param_1);
  if ((0xd < param_6) && (param_8 == 0x25c)) {
    local_28 = Encryption::crc32N(param_5 + 0xb,param_6 + -0xb);
    memcpy(local_35,param_5,0xd);
    _NS_PI_2ND_MakeChecksumTo1Byte2(&local_28,&local_2e);
    if (local_2e != local_28) {
      uVar6 = CUser::get_acc_id(param_1);
      uVar4 = NumberToString(uVar6,0);
      LogManager::logFormat
                (1,"PacketDispatcher.cpp",
                 "bool PacketDispatcher::doDispatch(CUser*, ENUM_PACKETCLASS, short unsigned int, char*, int, ENUM_PACKETCLASS, short unsigned int)"
                 ,0xa37,"Check Sum Error: server(%d), client(%d), mid(%s)",local_28,local_2e,uVar4);
      CUser::DisConnSig(param_1,0xd,1,0);
      return 0;
    }
  }
  PacketBuf::PacketBuf(aPStack_1736c);
                    /* try { // try from 08594b6a to 08594e12 has its CatchHandler @ 08594e1a */
  PacketBuf::bind_packet(aPStack_1736c,param_5,param_6);
  CUser::setLastPacketID(param_1,(uint)param_4);
  pGVar7 = (GameWorld *)G_GameWorld();
  iVar5 = GameWorld::GetChannelType(pGVar7);
  if (iVar5 != 7) {
    pGVar7 = (GameWorld *)G_GameWorld();
    cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar7);
    if (cVar3 == '\0') {
      bVar2 = false;
      goto LAB_08594bb4;
    }
  }
  bVar2 = true;
LAB_08594bb4:
  if ((bVar2) && (cVar3 = DenyPacket((uint)param_4), cVar3 != '\0')) {
    uVar4 = 1;
  }
  else {
    if (param_4 == 0x25b) {
      local_20 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
    }
    local_1c = 0;
    local_1c = CLocalChinaErrorDispatcher::doErrorDispatcher
                         ((CLocalChinaErrorDispatcher *)(this + 0x978),param_1,param_4);
    if (local_1c == 0) {
      local_18 = (**(code **)*local_24)(local_24,param_1,aPStack_1736c);
      if (local_18 == 0) {
        if (param_4 == 0x25b) {
          CSystemTime::update((CSystemTime *)GlobalData::s_systemTime_);
          iVar5 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
          local_14 = iVar5 - local_20;
          local_10 = 2000;
          if (2000 < local_14) {
            LogManager::logFormat
                      (1,"PacketDispatcher.cpp",
                       "bool PacketDispatcher::doDispatch(CUser*, ENUM_PACKETCLASS, short unsigned int, char*, int, ENUM_PACKETCLASS, short unsigned int)"
                       ,0xa7a,"Delay notice, OnRecvBufferFromClient dispatch time : %u",local_14);
          }
        }
        if (param_4 != 0x25b) {
          _NS_PI_Check_CMD(param_3,param_4,aPStack_1736c,param_1);
        }
        uVar4 = 1;
      }
      else {
        CUser::DisConnSig(param_1,10,1,local_18);
        uVar4 = 0;
      }
    }
    else {
      if (local_1c == 1) {
        uVar6 = CUser::get_acc_id(param_1);
        uVar4 = NumberToString(uVar6,0);
        LogManager::logFormat
                  (1,"PacketDispatcher.cpp",
                   "bool PacketDispatcher::doDispatch(CUser*, ENUM_PACKETCLASS, short unsigned int, char*, int, ENUM_PACKETCLASS, short unsigned int)"
                   ,0xa60,"[doErrorDispatcher] ERROR_NOT_TING - code : %d, m_id :%s",(uint)param_4,
                   uVar4);
      }
      else if (local_1c == 2) {
        uVar6 = CUser::get_acc_id(param_1);
        uVar4 = NumberToString(uVar6,0);
        LogManager::logFormat
                  (1,"PacketDispatcher.cpp",
                   "bool PacketDispatcher::doDispatch(CUser*, ENUM_PACKETCLASS, short unsigned int, char*, int, ENUM_PACKETCLASS, short unsigned int)"
                   ,0xa5b,"[doErrorDispatcher] ERROR_TING - code : %d, m_id :%s",(uint)param_4,uVar4
                  );
        CUser::DisConnSig(param_1,10,1,0);
      }
      uVar4 = 0;
    }
  }
  PacketBuf::~PacketBuf(aPStack_1736c);
  return uVar4;
}
```
