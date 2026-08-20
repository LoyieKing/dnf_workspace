# SendPartyList

`_ZN12CGameManager13SendPartyListEP5CUser`

`CGameManager::SendPartyList(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08296792` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08296792  _ZN12CGameManager13SendPartyListEP5CUser
#           CGameManager::SendPartyList(CUser*)
# range [0x08296792, 0x08296d2f]
08296792 +0x000:  push   %ebp
08296793 +0x001:  mov    %esp,%ebp
08296795 +0x003:  push   %esi
08296796 +0x004:  push   %ebx
08296797 +0x005:  sub    $0x60,%esp
0829679a +0x008:  lea    -0x4c(%ebp),%eax
0829679d +0x00b:  mov    %eax,(%esp)
082967a0 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082967a5 +0x013:  movl   $0x9,0x8(%esp)
082967ad +0x01b:  movl   $0x0,0x4(%esp)
082967b5 +0x023:  lea    -0x4c(%ebp),%eax
082967b8 +0x026:  mov    %eax,(%esp)
082967bb +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082967c0 +0x02e:  movl   $0x0,-0x30(%ebp)
082967c7 +0x035:  lea    -0x4c(%ebp),%eax
082967ca +0x038:  mov    %eax,(%esp)
082967cd +0x03b:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
082967d2 +0x040:  mov    %eax,-0x50(%ebp)
082967d5 +0x043:  mov    0x8(%ebp),%eax
082967d8 +0x046:  add    $0x270,%eax
082967dd +0x04b:  mov    %eax,(%esp)
082967e0 +0x04e:  call   082b2ba2 <_GLOBAL__I__ZN4CLog5this_E+0xefc9>  ; global constructors keyed to CLog::this_+0xefc9
082967e5 +0x053:  mov    %eax,0x4(%esp)
082967e9 +0x057:  lea    -0x4c(%ebp),%eax
082967ec +0x05a:  mov    %eax,(%esp)
082967ef +0x05d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082967f4 +0x062:  movb   $0x0,-0x29(%ebp)
082967f8 +0x066:  mov    0x8(%ebp),%eax
082967fb +0x069:  lea    0x270(%eax),%edx
08296801 +0x06f:  lea    -0x58(%ebp),%eax
08296804 +0x072:  mov    %edx,0x4(%esp)
08296808 +0x076:  mov    %eax,(%esp)
0829680b +0x079:  call   082b2bb6 <_GLOBAL__I__ZN4CLog5this_E+0xefdd>  ; global constructors keyed to CLog::this_+0xefdd
08296810 +0x07e:  sub    $0x4,%esp
08296813 +0x081:  jmp    08296c8a <+0x4f8>
08296818 +0x086:  lea    -0x58(%ebp),%eax
0829681b +0x089:  mov    %eax,(%esp)
0829681e +0x08c:  call   082b1168 <_GLOBAL__I__ZN4CLog5this_E+0xd58f>  ; global constructors keyed to CLog::this_+0xd58f
08296823 +0x091:  mov    0x4(%eax),%eax
08296826 +0x094:  mov    %eax,-0x28(%ebp)
08296829 +0x097:  cmpl   $0x0,-0x28(%ebp)
0829682d +0x09b:  je     08296848 <+0xb6>
0829682f +0x09d:  mov    -0x28(%ebp),%eax
08296832 +0x0a0:  mov    %eax,(%esp)
08296835 +0x0a3:  call   0822d88c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f36>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f36
0829683a +0x0a8:  xor    $0x1,%eax
0829683d +0x0ab:  test   %al,%al
0829683f +0x0ad:  je     08296848 <+0xb6>
08296841 +0x0af:  mov    $0x1,%eax
08296846 +0x0b4:  jmp    0829684d <+0xbb>
08296848 +0x0b6:  mov    $0x0,%eax
0829684d +0x0bb:  test   %al,%al
0829684f +0x0bd:  je     08296c6d <+0x4db>
08296855 +0x0c3:  addl   $0x1,-0x30(%ebp)
08296859 +0x0c7:  mov    -0x28(%ebp),%eax
0829685c +0x0ca:  mov    %eax,(%esp)
0829685f +0x0cd:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
08296864 +0x0d2:  mov    %eax,0x4(%esp)
08296868 +0x0d6:  lea    -0x4c(%ebp),%eax
0829686b +0x0d9:  mov    %eax,(%esp)
0829686e +0x0dc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08296873 +0x0e1:  movzbl -0x29(%ebp),%eax
08296877 +0x0e5:  mov    %eax,0x4(%esp)
0829687b +0x0e9:  lea    -0x4c(%ebp),%eax
0829687e +0x0ec:  mov    %eax,(%esp)
08296881 +0x0ef:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296886 +0x0f4:  cmpb   $0x0,-0x29(%ebp)
0829688a +0x0f8:  je     08296896 <+0x104>
0829688c +0x0fa:  cmpb   $0x1,-0x29(%ebp)
08296890 +0x0fe:  jne    082969e1 <+0x24f>
08296896 +0x104:  mov    -0x28(%ebp),%eax
08296899 +0x107:  mov    %eax,(%esp)
0829689c +0x10a:  call   082a59f4 <_GLOBAL__I__ZN4CLog5this_E+0x1e1b>  ; global constructors keyed to CLog::this_+0x1e1b
082968a1 +0x10f:  movzbl %al,%eax
082968a4 +0x112:  mov    %eax,0x4(%esp)
082968a8 +0x116:  lea    -0x4c(%ebp),%eax
082968ab +0x119:  mov    %eax,(%esp)
082968ae +0x11c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082968b3 +0x121:  mov    -0x28(%ebp),%eax
082968b6 +0x124:  mov    %eax,(%esp)
082968b9 +0x127:  call   082a59f4 <_GLOBAL__I__ZN4CLog5this_E+0x1e1b>  ; global constructors keyed to CLog::this_+0x1e1b
082968be +0x12c:  test   %al,%al
082968c0 +0x12e:  sete   %al
082968c3 +0x131:  test   %al,%al
082968c5 +0x133:  je     0829691c <+0x18a>
082968c7 +0x135:  mov    -0x28(%ebp),%eax
082968ca +0x138:  mov    %eax,(%esp)
082968cd +0x13b:  call   082a59e6 <_GLOBAL__I__ZN4CLog5this_E+0x1e0d>  ; global constructors keyed to CLog::this_+0x1e0d
082968d2 +0x140:  mov    %eax,(%esp)
082968d5 +0x143:  call   0807e3b0 <_init+0xca8>
082968da +0x148:  mov    %eax,0x4(%esp)
082968de +0x14c:  lea    -0x4c(%ebp),%eax
082968e1 +0x14f:  mov    %eax,(%esp)
082968e4 +0x152:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082968e9 +0x157:  mov    -0x28(%ebp),%eax
082968ec +0x15a:  mov    %eax,(%esp)
082968ef +0x15d:  call   082a59e6 <_GLOBAL__I__ZN4CLog5this_E+0x1e0d>  ; global constructors keyed to CLog::this_+0x1e0d
082968f4 +0x162:  mov    %eax,(%esp)
082968f7 +0x165:  call   0807e3b0 <_init+0xca8>
082968fc +0x16a:  mov    %eax,%ebx
082968fe +0x16c:  mov    -0x28(%ebp),%eax
08296901 +0x16f:  mov    %eax,(%esp)
08296904 +0x172:  call   082a59e6 <_GLOBAL__I__ZN4CLog5this_E+0x1e0d>  ; global constructors keyed to CLog::this_+0x1e0d
08296909 +0x177:  mov    %ebx,0x8(%esp)
0829690d +0x17b:  mov    %eax,0x4(%esp)
08296911 +0x17f:  lea    -0x4c(%ebp),%eax
08296914 +0x182:  mov    %eax,(%esp)
08296917 +0x185:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0829691c +0x18a:  mov    -0x28(%ebp),%eax
0829691f +0x18d:  mov    %eax,(%esp)
08296922 +0x190:  call   085b9f50 <_ZN6CParty17IsReturnUserPartyEv>  ; CParty::IsReturnUserParty()
08296927 +0x195:  test   %al,%al
08296929 +0x197:  je     08296940 <+0x1ae>
0829692b +0x199:  movl   $0x1,0x4(%esp)
08296933 +0x1a1:  lea    -0x4c(%ebp),%eax
08296936 +0x1a4:  mov    %eax,(%esp)
08296939 +0x1a7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0829693e +0x1ac:  jmp    08296953 <+0x1c1>
08296940 +0x1ae:  movl   $0x0,0x4(%esp)
08296948 +0x1b6:  lea    -0x4c(%ebp),%eax
0829694b +0x1b9:  mov    %eax,(%esp)
0829694e +0x1bc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296953 +0x1c1:  mov    -0x28(%ebp),%eax
08296956 +0x1c4:  mov    %eax,(%esp)
08296959 +0x1c7:  call   082a5a04 <_GLOBAL__I__ZN4CLog5this_E+0x1e2b>  ; global constructors keyed to CLog::this_+0x1e2b
0829695e +0x1cc:  movzbl %al,%eax
08296961 +0x1cf:  mov    %eax,0x4(%esp)
08296965 +0x1d3:  lea    -0x4c(%ebp),%eax
08296968 +0x1d6:  mov    %eax,(%esp)
0829696b +0x1d9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296970 +0x1de:  mov    -0x28(%ebp),%eax
08296973 +0x1e1:  mov    %eax,(%esp)
08296976 +0x1e4:  call   082a5a14 <_GLOBAL__I__ZN4CLog5this_E+0x1e3b>  ; global constructors keyed to CLog::this_+0x1e3b
0829697b +0x1e9:  movzwl %ax,%eax
0829697e +0x1ec:  mov    %eax,0x4(%esp)
08296982 +0x1f0:  lea    -0x4c(%ebp),%eax
08296985 +0x1f3:  mov    %eax,(%esp)
08296988 +0x1f6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0829698d +0x1fb:  mov    -0x28(%ebp),%eax
08296990 +0x1fe:  mov    %eax,(%esp)
08296993 +0x201:  call   082a5a24 <_GLOBAL__I__ZN4CLog5this_E+0x1e4b>  ; global constructors keyed to CLog::this_+0x1e4b
08296998 +0x206:  movzbl %al,%eax
0829699b +0x209:  mov    %eax,0x4(%esp)
0829699f +0x20d:  lea    -0x4c(%ebp),%eax
082969a2 +0x210:  mov    %eax,(%esp)
082969a5 +0x213:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082969aa +0x218:  mov    -0x28(%ebp),%eax
082969ad +0x21b:  mov    %eax,(%esp)
082969b0 +0x21e:  call   085b9fd4 <_ZN6CParty18IsEventCharacPartyEv>  ; CParty::IsEventCharacParty()
082969b5 +0x223:  test   %al,%al
082969b7 +0x225:  je     082969ce <+0x23c>
082969b9 +0x227:  movl   $0x1,0x4(%esp)
082969c1 +0x22f:  lea    -0x4c(%ebp),%eax
082969c4 +0x232:  mov    %eax,(%esp)
082969c7 +0x235:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082969cc +0x23a:  jmp    082969e1 <+0x24f>
082969ce +0x23c:  movl   $0x0,0x4(%esp)
082969d6 +0x244:  lea    -0x4c(%ebp),%eax
082969d9 +0x247:  mov    %eax,(%esp)
082969dc +0x24a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082969e1 +0x24f:  cmpb   $0x0,-0x29(%ebp)
082969e5 +0x253:  je     082969f1 <+0x25f>
082969e7 +0x255:  cmpb   $0x2,-0x29(%ebp)
082969eb +0x259:  jne    08296b5a <+0x3c8>
082969f1 +0x25f:  movl   $0x0,-0x24(%ebp)
082969f8 +0x266:  movl   $0x0,-0x20(%ebp)
082969ff +0x26d:  jmp    08296aae <+0x31c>
08296a04 +0x272:  mov    -0x20(%ebp),%eax
08296a07 +0x275:  mov    %eax,0x4(%esp)
08296a0b +0x279:  mov    -0x28(%ebp),%eax
08296a0e +0x27c:  mov    %eax,(%esp)
08296a11 +0x27f:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08296a16 +0x284:  mov    %eax,-0x1c(%ebp)
08296a19 +0x287:  cmpl   $0x0,-0x1c(%ebp)
08296a1d +0x28b:  je     08296a84 <+0x2f2>
08296a1f +0x28d:  mov    -0x1c(%ebp),%eax
08296a22 +0x290:  mov    %eax,(%esp)
08296a25 +0x293:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08296a2a +0x298:  movzwl %ax,%eax
08296a2d +0x29b:  mov    %eax,0x4(%esp)
08296a31 +0x29f:  lea    -0x4c(%ebp),%eax
08296a34 +0x2a2:  mov    %eax,(%esp)
08296a37 +0x2a5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08296a3c +0x2aa:  mov    -0x28(%ebp),%eax
08296a3f +0x2ad:  mov    %eax,(%esp)
08296a42 +0x2b0:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
08296a47 +0x2b5:  cmp    -0x1c(%ebp),%eax
08296a4a +0x2b8:  sete   %al
08296a4d +0x2bb:  test   %al,%al
08296a4f +0x2bd:  je     08296a57 <+0x2c5>
08296a51 +0x2bf:  mov    -0x20(%ebp),%eax
08296a54 +0x2c2:  mov    %eax,-0x24(%ebp)
08296a57 +0x2c5:  mov    -0x1c(%ebp),%eax
08296a5a +0x2c8:  mov    %eax,(%esp)
08296a5d +0x2cb:  call   0867ec12 <_ZN5CUser6getSexEv>  ; CUser::getSex()
08296a62 +0x2d0:  mov    %al,-0x16(%ebp)
08296a65 +0x2d3:  cmpb   $0xff,-0x16(%ebp)
08296a69 +0x2d7:  jne    08296a6f <+0x2dd>
08296a6b +0x2d9:  movb   $0x1,-0x16(%ebp)
08296a6f +0x2dd:  movsbl -0x16(%ebp),%eax
08296a73 +0x2e1:  mov    %eax,0x4(%esp)
08296a77 +0x2e5:  lea    -0x4c(%ebp),%eax
08296a7a +0x2e8:  mov    %eax,(%esp)
08296a7d +0x2eb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296a82 +0x2f0:  jmp    08296aaa <+0x318>
08296a84 +0x2f2:  movl   $0xffff,0x4(%esp)
08296a8c +0x2fa:  lea    -0x4c(%ebp),%eax
08296a8f +0x2fd:  mov    %eax,(%esp)
08296a92 +0x300:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08296a97 +0x305:  movl   $0xff,0x4(%esp)
08296a9f +0x30d:  lea    -0x4c(%ebp),%eax
08296aa2 +0x310:  mov    %eax,(%esp)
08296aa5 +0x313:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296aaa +0x318:  addl   $0x1,-0x20(%ebp)
08296aae +0x31c:  cmpl   $0x3,-0x20(%ebp)
08296ab2 +0x320:  setle  %al
08296ab5 +0x323:  test   %al,%al
08296ab7 +0x325:  jne    08296a04 <+0x272>
08296abd +0x32b:  mov    -0x28(%ebp),%eax
08296ac0 +0x32e:  mov    %eax,(%esp)
08296ac3 +0x331:  call   085b9f50 <_ZN6CParty17IsReturnUserPartyEv>  ; CParty::IsReturnUserParty()
08296ac8 +0x336:  test   %al,%al
08296aca +0x338:  je     08296ae1 <+0x34f>
08296acc +0x33a:  movl   $0x1,0x4(%esp)
08296ad4 +0x342:  lea    -0x4c(%ebp),%eax
08296ad7 +0x345:  mov    %eax,(%esp)
08296ada +0x348:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296adf +0x34d:  jmp    08296af4 <+0x362>
08296ae1 +0x34f:  movl   $0x0,0x4(%esp)
08296ae9 +0x357:  lea    -0x4c(%ebp),%eax
08296aec +0x35a:  mov    %eax,(%esp)
08296aef +0x35d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296af4 +0x362:  mov    -0x24(%ebp),%eax
08296af7 +0x365:  mov    %eax,0x4(%esp)
08296afb +0x369:  lea    -0x4c(%ebp),%eax
08296afe +0x36c:  mov    %eax,(%esp)
08296b01 +0x36f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296b06 +0x374:  mov    -0x28(%ebp),%eax
08296b09 +0x377:  mov    %eax,(%esp)
08296b0c +0x37a:  call   0822d952 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ffc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ffc
08296b11 +0x37f:  movzbl %al,%eax
08296b14 +0x382:  mov    %eax,0x4(%esp)
08296b18 +0x386:  lea    -0x4c(%ebp),%eax
08296b1b +0x389:  mov    %eax,(%esp)
08296b1e +0x38c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296b23 +0x391:  mov    -0x28(%ebp),%eax
08296b26 +0x394:  mov    %eax,(%esp)
08296b29 +0x397:  call   085b9fd4 <_ZN6CParty18IsEventCharacPartyEv>  ; CParty::IsEventCharacParty()
08296b2e +0x39c:  test   %al,%al
08296b30 +0x39e:  je     08296b47 <+0x3b5>
08296b32 +0x3a0:  movl   $0x1,0x4(%esp)
08296b3a +0x3a8:  lea    -0x4c(%ebp),%eax
08296b3d +0x3ab:  mov    %eax,(%esp)
08296b40 +0x3ae:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296b45 +0x3b3:  jmp    08296b5a <+0x3c8>
08296b47 +0x3b5:  movl   $0x0,0x4(%esp)
08296b4f +0x3bd:  lea    -0x4c(%ebp),%eax
08296b52 +0x3c0:  mov    %eax,(%esp)
08296b55 +0x3c3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296b5a +0x3c8:  cmpb   $0x0,-0x29(%ebp)
08296b5e +0x3cc:  je     08296b70 <+0x3de>
08296b60 +0x3ce:  cmpb   $0x1,-0x29(%ebp)
08296b64 +0x3d2:  je     08296b70 <+0x3de>
08296b66 +0x3d4:  cmpb   $0x2,-0x29(%ebp)
08296b6a +0x3d8:  jne    08296c6d <+0x4db>
08296b70 +0x3de:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08296b75 +0x3e3:  movl   $"[impossible]",0x4(%esp)
08296b7d +0x3eb:  mov    %eax,(%esp)
08296b80 +0x3ee:  call   086cbbf6 <_ZN9GameWorld31is_dungeon_tag_matching_channelEPc>  ; GameWorld::is_dungeon_tag_matching_channel(char*)
08296b85 +0x3f3:  mov    %al,-0x15(%ebp)
08296b88 +0x3f6:  movzbl -0x15(%ebp),%eax
08296b8c +0x3fa:  mov    %eax,0x4(%esp)
08296b90 +0x3fe:  lea    -0x4c(%ebp),%eax
08296b93 +0x401:  mov    %eax,(%esp)
08296b96 +0x404:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296b9b +0x409:  cmpb   $0x0,-0x15(%ebp)
08296b9f +0x40d:  je     08296c6d <+0x4db>
08296ba5 +0x413:  movl   $0x0,-0x14(%ebp)
08296bac +0x41a:  jmp    08296c5e <+0x4cc>
08296bb1 +0x41f:  mov    -0x14(%ebp),%eax
08296bb4 +0x422:  mov    %eax,0x4(%esp)
08296bb8 +0x426:  mov    -0x28(%ebp),%eax
08296bbb +0x429:  mov    %eax,(%esp)
08296bbe +0x42c:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08296bc3 +0x431:  mov    %eax,-0x10(%ebp)
08296bc6 +0x434:  cmpl   $0x0,-0x10(%ebp)
08296bca +0x438:  je     08296c47 <+0x4b5>
08296bcc +0x43a:  movl   $0x6,0x4(%esp)
08296bd4 +0x442:  lea    -0x4c(%ebp),%eax
08296bd7 +0x445:  mov    %eax,(%esp)
08296bda +0x448:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296bdf +0x44d:  movl   $0x0,-0xc(%ebp)
08296be6 +0x454:  jmp    08296c3a <+0x4a8>
08296be8 +0x456:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08296bed +0x45b:  mov    -0xc(%ebp),%edx
08296bf0 +0x45e:  mov    %edx,0x4(%esp)
08296bf4 +0x462:  mov    %eax,(%esp)
08296bf7 +0x465:  call   0822b612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcbc
08296bfc +0x46a:  movsbl %al,%eax
08296bff +0x46d:  mov    %eax,0x4(%esp)
08296c03 +0x471:  lea    -0x4c(%ebp),%eax
08296c06 +0x474:  mov    %eax,(%esp)
08296c09 +0x477:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296c0e +0x47c:  mov    -0x10(%ebp),%eax
08296c11 +0x47f:  mov    %eax,(%esp)
08296c14 +0x482:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08296c19 +0x487:  mov    -0xc(%ebp),%edx
08296c1c +0x48a:  movzbl 0xeb9(%eax,%edx,1),%eax
08296c24 +0x492:  movsbl %al,%eax
08296c27 +0x495:  mov    %eax,0x4(%esp)
08296c2b +0x499:  lea    -0x4c(%ebp),%eax
08296c2e +0x49c:  mov    %eax,(%esp)
08296c31 +0x49f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296c36 +0x4a4:  addl   $0x1,-0xc(%ebp)
08296c3a +0x4a8:  cmpl   $0x5,-0xc(%ebp)
08296c3e +0x4ac:  setle  %al
08296c41 +0x4af:  test   %al,%al
08296c43 +0x4b1:  jne    08296be8 <+0x456>
08296c45 +0x4b3:  jmp    08296c5a <+0x4c8>
08296c47 +0x4b5:  movl   $0x0,0x4(%esp)
08296c4f +0x4bd:  lea    -0x4c(%ebp),%eax
08296c52 +0x4c0:  mov    %eax,(%esp)
08296c55 +0x4c3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08296c5a +0x4c8:  addl   $0x1,-0x14(%ebp)
08296c5e +0x4cc:  cmpl   $0x3,-0x14(%ebp)
08296c62 +0x4d0:  setle  %al
08296c65 +0x4d3:  test   %al,%al
08296c67 +0x4d5:  jne    08296bb1 <+0x41f>
08296c6d +0x4db:  lea    -0x38(%ebp),%eax
08296c70 +0x4de:  movl   $0x0,0x8(%esp)
08296c78 +0x4e6:  lea    -0x58(%ebp),%edx
08296c7b +0x4e9:  mov    %edx,0x4(%esp)
08296c7f +0x4ed:  mov    %eax,(%esp)
08296c82 +0x4f0:  call   082b2bdc <_GLOBAL__I__ZN4CLog5this_E+0xf003>  ; global constructors keyed to CLog::this_+0xf003
08296c87 +0x4f5:  sub    $0x4,%esp
08296c8a +0x4f8:  mov    0x8(%ebp),%eax
08296c8d +0x4fb:  lea    0x270(%eax),%edx
08296c93 +0x501:  lea    -0x40(%ebp),%eax
08296c96 +0x504:  mov    %edx,0x4(%esp)
08296c9a +0x508:  mov    %eax,(%esp)
08296c9d +0x50b:  call   082b10f0 <_GLOBAL__I__ZN4CLog5this_E+0xd517>  ; global constructors keyed to CLog::this_+0xd517
08296ca2 +0x510:  sub    $0x4,%esp
08296ca5 +0x513:  lea    -0x40(%ebp),%eax
08296ca8 +0x516:  mov    %eax,0x4(%esp)
08296cac +0x51a:  lea    -0x58(%ebp),%eax
08296caf +0x51d:  mov    %eax,(%esp)
08296cb2 +0x520:  call   082b117c <_GLOBAL__I__ZN4CLog5this_E+0xd5a3>  ; global constructors keyed to CLog::this_+0xd5a3
08296cb7 +0x525:  test   %al,%al
08296cb9 +0x527:  jne    08296818 <+0x86>
08296cbf +0x52d:  mov    -0x30(%ebp),%eax
08296cc2 +0x530:  mov    %eax,0x8(%esp)
08296cc6 +0x534:  lea    -0x50(%ebp),%eax
08296cc9 +0x537:  mov    %eax,0x4(%esp)
08296ccd +0x53b:  lea    -0x4c(%ebp),%eax
08296cd0 +0x53e:  mov    %eax,(%esp)
08296cd3 +0x541:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
08296cd8 +0x546:  movl   $0x1,0x4(%esp)
08296ce0 +0x54e:  lea    -0x4c(%ebp),%eax
08296ce3 +0x551:  mov    %eax,(%esp)
08296ce6 +0x554:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08296ceb +0x559:  lea    -0x4c(%ebp),%eax
08296cee +0x55c:  mov    %eax,0x4(%esp)
08296cf2 +0x560:  mov    0xc(%ebp),%eax
08296cf5 +0x563:  mov    %eax,(%esp)
08296cf8 +0x566:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08296cfd +0x56b:  jmp    08296d1a <+0x588>
08296cff +0x56d:  mov    %edx,%ebx
08296d01 +0x56f:  mov    %eax,%esi
08296d03 +0x571:  lea    -0x4c(%ebp),%eax
08296d06 +0x574:  mov    %eax,(%esp)
08296d09 +0x577:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08296d0e +0x57c:  mov    %esi,%eax
08296d10 +0x57e:  mov    %ebx,%edx
08296d12 +0x580:  mov    %eax,(%esp)
08296d15 +0x583:  call   08ae3750 <_Unwind_Resume>
08296d1a +0x588:  lea    -0x4c(%ebp),%eax
08296d1d +0x58b:  mov    %eax,(%esp)
08296d20 +0x58e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08296d25 +0x593:  lea    -0x8(%ebp),%esp
08296d28 +0x596:  add    $0x0,%esp
08296d2b +0x599:  pop    %ebx
08296d2c +0x59a:  pop    %esi
08296d2d +0x59b:  pop    %ebp
08296d2e +0x59c:  ret
08296d2f +0x59d:  nop
```

## 反编译 C

```c
// CGameManager::SendPartyList @ 0x8296792

/* CGameManager::SendPartyList(CUser*) */

void __thiscall CGameManager::SendPartyList(CGameManager *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  size_t sVar6;
  CUser *pCVar7;
  GameWorld *this_00;
  CDataManager *this_01;
  hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>> local_5c [8]
  ;
  int local_54;
  PacketGuard local_50 [12];
  hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>> local_44 [8]
  ;
  _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
  local_3c [8];
  int local_34;
  byte local_2d;
  CParty *local_2c;
  int local_28;
  int local_24;
  CUser *local_20;
  char local_1a;
  byte local_19;
  int local_18;
  CUserCharacInfo *local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_50);
                    /* try { // try from 082967bb to 08296cfc has its CatchHandler @ 08296cff */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,9);
  local_34 = 0;
  local_54 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_50);
  iVar3 = __gnu_cxx::
          hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>::
          size((hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
                *)(this + 0x270));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,iVar3);
  local_2d = 0;
  __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>::
  begin(local_5c);
  while( true ) {
    __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
    ::end(local_44);
    cVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
                          *)local_5c,(_Hashtable_iterator *)local_44);
    if (cVar2 == '\0') break;
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
                          *)local_5c);
    local_2c = *(CParty **)(iVar3 + 4);
    if ((local_2c == (CParty *)0x0) || (cVar2 = CParty::IsAutoCreated(local_2c), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_34 = local_34 + 1;
      iVar3 = CParty::GetPartyIndex(local_2c);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,iVar3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,(uint)local_2d);
      if ((local_2d == 0) || (local_2d == 1)) {
        uVar4 = CParty::getTitleIndex(local_2c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,uVar4 & 0xff);
        cVar2 = CParty::getTitleIndex(local_2c);
        if (cVar2 == '\0') {
          pcVar5 = (char *)CParty::getTitle(local_2c);
          sVar6 = strlen(pcVar5);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,sVar6);
          pcVar5 = (char *)CParty::getTitle(local_2c);
          sVar6 = strlen(pcVar5);
          pcVar5 = (char *)CParty::getTitle(local_2c);
          InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,pcVar5,sVar6);
        }
        cVar2 = CParty::IsReturnUserParty(local_2c);
        if (cVar2 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
        }
        uVar4 = CParty::getUserMax(local_2c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,uVar4 & 0xff);
        uVar4 = CParty::getDungIndex(local_2c);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,uVar4 & 0xffff);
        uVar4 = CParty::getDungDiffi(local_2c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,uVar4 & 0xff);
        cVar2 = CParty::IsEventCharacParty(local_2c);
        if (cVar2 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
        }
      }
      if ((local_2d == 0) || (local_2d == 2)) {
        local_28 = 0;
        for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
          local_20 = (CUser *)CParty::get_user(local_2c,local_24);
          if (local_20 == (CUser *)0x0) {
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,0xffff);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0xff);
          }
          else {
            uVar4 = CUser::get_unique_id(local_20);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,uVar4 & 0xffff);
            pCVar7 = (CUser *)CParty::getManager(local_2c);
            if (pCVar7 == local_20) {
              local_28 = local_24;
            }
            local_1a = CUser::getSex(local_20);
            if (local_1a == -1) {
              local_1a = '\x01';
            }
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,(int)local_1a);
          }
        }
        cVar2 = CParty::IsReturnUserParty(local_2c);
        if (cVar2 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
        }
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_28);
        uVar4 = CParty::is_quick_party(local_2c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,uVar4 & 0xff);
        cVar2 = CParty::IsEventCharacParty(local_2c);
        if (cVar2 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
        }
      }
      if (((local_2d == 0) || (local_2d == 1)) || (local_2d == 2)) {
        this_00 = (GameWorld *)G_GameWorld();
        local_19 = GameWorld::is_dungeon_tag_matching_channel(this_00,"[impossible]");
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,(uint)local_19);
        if (local_19 != 0) {
          for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
            local_14 = (CUserCharacInfo *)CParty::get_user(local_2c,local_18);
            if (local_14 == (CUserCharacInfo *)0x0) {
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
            }
            else {
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,6);
              for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
                this_01 = (CDataManager *)G_CDataManager();
                cVar2 = CDataManager::get_dimensionInout(this_01,local_10);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,(int)cVar2);
                iVar3 = CUserCharacInfo::getCurCharacR(local_14);
                InterfacePacketBuf::put_byte
                          ((InterfacePacketBuf *)local_50,(int)*(char *)(iVar3 + 0xeb9 + local_10));
              }
            }
          }
        }
      }
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
    ::operator++(local_3c,(int)local_5c);
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,&local_54,local_34);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
  CUser::Send(param_1,local_50);
  PacketGuard::~PacketGuard(local_50);
  return;
}
```
