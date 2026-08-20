# dispatch_sig

`_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_EPLPCommand::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EPLPCommand` | `0x081feedc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081feedc  _ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_EPLPCommand::dispatch_sig(CUser*, PacketBuf&)
# range [0x081feedc, 0x081ff343]
081feedc +0x000:  push   %ebp
081feedd +0x001:  mov    %esp,%ebp
081feedf +0x003:  push   %esi
081feee0 +0x004:  push   %ebx
081feee1 +0x005:  sub    $0x50,%esp
081feee4 +0x008:  mov    0xc(%ebp),%eax
081feee7 +0x00b:  mov    %eax,(%esp)
081feeea +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081feeef +0x013:  mov    %eax,(%esp)
081feef2 +0x016:  call   081466f0 <_ZN6Global11CGlobalFunc15Get_State_CheckE8ch_state>  ; Global::CGlobalFunc::Get_State_Check(ch_state)
081feef7 +0x01b:  xor    $0x1,%eax
081feefa +0x01e:  test   %al,%al
081feefc +0x020:  je     081fef08 <+0x2c>
081feefe +0x022:  mov    $0x0,%ebx
081fef03 +0x027:  jmp    081ff33b <+0x45f>
081fef08 +0x02c:  lea    -0x2f(%ebp),%eax
081fef0b +0x02f:  add    $0xd,%eax
081fef0e +0x032:  mov    %eax,0x4(%esp)
081fef12 +0x036:  mov    0x10(%ebp),%eax
081fef15 +0x039:  mov    %eax,(%esp)
081fef18 +0x03c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081fef1d +0x041:  xor    $0x1,%eax
081fef20 +0x044:  test   %al,%al
081fef22 +0x046:  je     081fef4f <+0x73>
081fef24 +0x048:  movl   $0x0,0xc(%esp)
081fef2c +0x050:  movl   $0x0,0x8(%esp)
081fef34 +0x058:  movl   $&_ZZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fef3c +0x060:  movl   $0x9238,(%esp)
081fef43 +0x067:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fef48 +0x06c:  mov    %eax,%ebx
081fef4a +0x06e:  jmp    081ff33b <+0x45f>
081fef4f +0x073:  lea    -0x2f(%ebp),%eax
081fef52 +0x076:  add    $0xe,%eax
081fef55 +0x079:  mov    %eax,0x4(%esp)
081fef59 +0x07d:  mov    0x10(%ebp),%eax
081fef5c +0x080:  mov    %eax,(%esp)
081fef5f +0x083:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081fef64 +0x088:  xor    $0x1,%eax
081fef67 +0x08b:  test   %al,%al
081fef69 +0x08d:  je     081fef96 <+0xba>
081fef6b +0x08f:  movl   $0x0,0xc(%esp)
081fef73 +0x097:  movl   $0x0,0x8(%esp)
081fef7b +0x09f:  movl   $&_ZZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fef83 +0x0a7:  movl   $0x9239,(%esp)
081fef8a +0x0ae:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fef8f +0x0b3:  mov    %eax,%ebx
081fef91 +0x0b5:  jmp    081ff33b <+0x45f>
081fef96 +0x0ba:  mov    0xc(%ebp),%eax
081fef99 +0x0bd:  mov    %eax,(%esp)
081fef9c +0x0c0:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081fefa1 +0x0c5:  cmp    $0xd,%eax
081fefa4 +0x0c8:  sete   %al
081fefa7 +0x0cb:  test   %al,%al
081fefa9 +0x0cd:  je     081ff098 <+0x1bc>
081fefaf +0x0d3:  call   0812cfea <_ZN12advancealtar18isOpenAdvanceAltarEv>  ; advancealtar::isOpenAdvanceAltar()
081fefb4 +0x0d8:  mov    %al,-0x11(%ebp)
081fefb7 +0x0db:  lea    -0x3c(%ebp),%eax
081fefba +0x0de:  mov    %eax,(%esp)
081fefbd +0x0e1:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081fefc2 +0x0e6:  movl   $0x4b,0x8(%esp)
081fefca +0x0ee:  movl   $0x1,0x4(%esp)
081fefd2 +0x0f6:  lea    -0x3c(%ebp),%eax
081fefd5 +0x0f9:  mov    %eax,(%esp)
081fefd8 +0x0fc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081fefdd +0x101:  movzbl -0x11(%ebp),%eax
081fefe1 +0x105:  mov    %eax,0x4(%esp)
081fefe5 +0x109:  lea    -0x3c(%ebp),%eax
081fefe8 +0x10c:  mov    %eax,(%esp)
081fefeb +0x10f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081feff0 +0x114:  movzbl -0x22(%ebp),%eax
081feff4 +0x118:  movzbl %al,%eax
081feff7 +0x11b:  mov    %eax,0x4(%esp)
081feffb +0x11f:  lea    -0x3c(%ebp),%eax
081feffe +0x122:  mov    %eax,(%esp)
081ff001 +0x125:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ff006 +0x12a:  movzbl -0x21(%ebp),%eax
081ff00a +0x12e:  movzbl %al,%eax
081ff00d +0x131:  mov    %eax,0x4(%esp)
081ff011 +0x135:  lea    -0x3c(%ebp),%eax
081ff014 +0x138:  mov    %eax,(%esp)
081ff017 +0x13b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ff01c +0x140:  movl   $0x1,0x4(%esp)
081ff024 +0x148:  lea    -0x3c(%ebp),%eax
081ff027 +0x14b:  mov    %eax,(%esp)
081ff02a +0x14e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ff02f +0x153:  lea    -0x3c(%ebp),%eax
081ff032 +0x156:  mov    %eax,0x4(%esp)
081ff036 +0x15a:  mov    0xc(%ebp),%eax
081ff039 +0x15d:  mov    %eax,(%esp)
081ff03c +0x160:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081ff041 +0x165:  movzbl -0x22(%ebp),%eax
081ff045 +0x169:  cmp    $0x1,%al
081ff047 +0x16b:  je     081ff050 <+0x174>
081ff049 +0x16d:  mov    $0x0,%ebx
081ff04e +0x172:  jmp    081ff088 <+0x1ac>
081ff050 +0x174:  movzbl -0x21(%ebp),%eax
081ff054 +0x178:  movzbl %al,%eax
081ff057 +0x17b:  mov    %eax,0x4(%esp)
081ff05b +0x17f:  mov    0xc(%ebp),%eax
081ff05e +0x182:  mov    %eax,(%esp)
081ff061 +0x185:  call   0813101e <_ZN12advancealtar7Manager4eplpEP5CUserNS_8EplpType1TE>  ; advancealtar::Manager::eplp(CUser*, advancealtar::EplpType::T)
081ff066 +0x18a:  mov    $0x0,%ebx
081ff06b +0x18f:  jmp    081ff088 <+0x1ac>
081ff06d +0x191:  mov    %edx,%ebx
081ff06f +0x193:  mov    %eax,%esi
081ff071 +0x195:  lea    -0x3c(%ebp),%eax
081ff074 +0x198:  mov    %eax,(%esp)
081ff077 +0x19b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ff07c +0x1a0:  mov    %esi,%eax
081ff07e +0x1a2:  mov    %ebx,%edx
081ff080 +0x1a4:  mov    %eax,(%esp)
081ff083 +0x1a7:  call   08ae3750 <_Unwind_Resume>
081ff088 +0x1ac:  lea    -0x3c(%ebp),%eax
081ff08b +0x1af:  mov    %eax,(%esp)
081ff08e +0x1b2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ff093 +0x1b7:  jmp    081ff33b <+0x45f>
081ff098 +0x1bc:  mov    0xc(%ebp),%eax
081ff09b +0x1bf:  mov    %eax,(%esp)
081ff09e +0x1c2:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081ff0a3 +0x1c7:  mov    %eax,-0x20(%ebp)
081ff0a6 +0x1ca:  cmpl   $0x0,-0x20(%ebp)
081ff0aa +0x1ce:  jne    081ff0b6 <+0x1da>
081ff0ac +0x1d0:  mov    $0x0,%ebx
081ff0b1 +0x1d5:  jmp    081ff33b <+0x45f>
081ff0b6 +0x1da:  mov    -0x20(%ebp),%eax
081ff0b9 +0x1dd:  mov    %eax,(%esp)
081ff0bc +0x1e0:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
081ff0c1 +0x1e5:  cmp    0xc(%ebp),%eax
081ff0c4 +0x1e8:  setne  %al
081ff0c7 +0x1eb:  test   %al,%al
081ff0c9 +0x1ed:  je     081ff0fa <+0x21e>
081ff0cb +0x1ef:  movzbl -0x21(%ebp),%eax
081ff0cf +0x1f3:  movzbl %al,%eax
081ff0d2 +0x1f6:  movl   $0x8,0xc(%esp)
081ff0da +0x1fe:  mov    %eax,0x8(%esp)
081ff0de +0x202:  mov    -0x20(%ebp),%eax
081ff0e1 +0x205:  mov    %eax,0x4(%esp)
081ff0e5 +0x209:  mov    0x8(%ebp),%eax
081ff0e8 +0x20c:  mov    %eax,(%esp)
081ff0eb +0x20f:  call   081fed4c <_ZN22Dispatcher_EPLPCommand14_SendEPLPErrorEP6CPartyhh>  ; Dispatcher_EPLPCommand::_SendEPLPError(CParty*, unsigned char, unsigned char)
081ff0f0 +0x214:  mov    $0x0,%ebx
081ff0f5 +0x219:  jmp    081ff33b <+0x45f>
081ff0fa +0x21e:  mov    -0x20(%ebp),%eax
081ff0fd +0x221:  mov    %eax,(%esp)
081ff100 +0x224:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
081ff105 +0x229:  cmp    $0x2,%al
081ff107 +0x22b:  setne  %al
081ff10a +0x22e:  test   %al,%al
081ff10c +0x230:  je     081ff12e <+0x252>
081ff10e +0x232:  mov    0xc(%ebp),%eax
081ff111 +0x235:  mov    %eax,0x4(%esp)
081ff115 +0x239:  mov    0x8(%ebp),%eax
081ff118 +0x23c:  mov    %eax,(%esp)
081ff11b +0x23f:  call   0825f760 <_ZN22Dispatcher_EPLPCommand16excludeEplpStateEP5CUser>  ; Dispatcher_EPLPCommand::excludeEplpState(CUser*)
081ff120 +0x244:  test   %al,%al
081ff122 +0x246:  je     081ff12e <+0x252>
081ff124 +0x248:  mov    $0x0,%ebx
081ff129 +0x24d:  jmp    081ff33b <+0x45f>
081ff12e +0x252:  lea    -0x2f(%ebp),%eax
081ff131 +0x255:  mov    %eax,0x8(%esp)
081ff135 +0x259:  mov    -0x20(%ebp),%eax
081ff138 +0x25c:  mov    %eax,0x4(%esp)
081ff13c +0x260:  mov    0x8(%ebp),%eax
081ff13f +0x263:  mov    %eax,(%esp)
081ff142 +0x266:  call   081fee14 <_ZN22Dispatcher_EPLPCommand16_BroadCastPacketEP6CPartyR16MSG_EPLP_COMMAND>  ; Dispatcher_EPLPCommand::_BroadCastPacket(CParty*, MSG_EPLP_COMMAND&)
081ff147 +0x26b:  movzbl -0x22(%ebp),%eax
081ff14b +0x26f:  cmp    $0x1,%al
081ff14d +0x271:  je     081ff159 <+0x27d>
081ff14f +0x273:  mov    $0x0,%ebx
081ff154 +0x278:  jmp    081ff33b <+0x45f>
081ff159 +0x27d:  mov    0xc(%ebp),%eax
081ff15c +0x280:  mov    %eax,(%esp)
081ff15f +0x283:  call   086885a6 <_ZN5CUser17GetSecretShopDataEv>  ; CUser::GetSecretShopData()
081ff164 +0x288:  mov    %eax,-0x1c(%ebp)
081ff167 +0x28b:  cmpl   $0x0,-0x1c(%ebp)
081ff16b +0x28f:  je     081ff183 <+0x2a7>
081ff16d +0x291:  mov    -0x1c(%ebp),%eax
081ff170 +0x294:  mov    %eax,(%esp)
081ff173 +0x297:  call   08ab150c <_ZN10secretshop16SECRET_SHOP_DATA6IsOpenEv>  ; secretshop::SECRET_SHOP_DATA::IsOpen()
081ff178 +0x29c:  test   %al,%al
081ff17a +0x29e:  je     081ff183 <+0x2a7>
081ff17c +0x2a0:  mov    $0x1,%eax
081ff181 +0x2a5:  jmp    081ff188 <+0x2ac>
081ff183 +0x2a7:  mov    $0x0,%eax
081ff188 +0x2ac:  test   %al,%al
081ff18a +0x2ae:  je     081ff1cd <+0x2f1>
081ff18c +0x2b0:  mov    -0x1c(%ebp),%eax
081ff18f +0x2b3:  mov    %eax,(%esp)
081ff192 +0x2b6:  call   08ab155a <_ZN10secretshop16SECRET_SHOP_DATA13IsCompleteBuyEv>  ; secretshop::SECRET_SHOP_DATA::IsCompleteBuy()
081ff197 +0x2bb:  xor    $0x1,%eax
081ff19a +0x2be:  test   %al,%al
081ff19c +0x2c0:  je     081ff1cd <+0x2f1>
081ff19e +0x2c2:  movzbl -0x21(%ebp),%eax
081ff1a2 +0x2c6:  movzbl %al,%eax
081ff1a5 +0x2c9:  movl   $0x85,0xc(%esp)
081ff1ad +0x2d1:  mov    %eax,0x8(%esp)
081ff1b1 +0x2d5:  mov    -0x20(%ebp),%eax
081ff1b4 +0x2d8:  mov    %eax,0x4(%esp)
081ff1b8 +0x2dc:  mov    0x8(%ebp),%eax
081ff1bb +0x2df:  mov    %eax,(%esp)
081ff1be +0x2e2:  call   081fed4c <_ZN22Dispatcher_EPLPCommand14_SendEPLPErrorEP6CPartyhh>  ; Dispatcher_EPLPCommand::_SendEPLPError(CParty*, unsigned char, unsigned char)
081ff1c3 +0x2e7:  mov    $0x0,%ebx
081ff1c8 +0x2ec:  jmp    081ff33b <+0x45f>
081ff1cd +0x2f1:  movl   $0x3,-0x18(%ebp)
081ff1d4 +0x2f8:  movzbl -0x21(%ebp),%eax
081ff1d8 +0x2fc:  movzbl %al,%eax
081ff1db +0x2ff:  cmp    $0x2,%eax
081ff1de +0x302:  je     081ff1f2 <+0x316>
081ff1e0 +0x304:  cmp    $0x2,%eax
081ff1e3 +0x307:  jg     081ff1eb <+0x30f>
081ff1e5 +0x309:  test   %eax,%eax
081ff1e7 +0x30b:  js     081ff218 <+0x33c>
081ff1e9 +0x30d:  jmp    081ff23d <+0x361>
081ff1eb +0x30f:  cmp    $0x3,%eax
081ff1ee +0x312:  je     081ff1fb <+0x31f>
081ff1f0 +0x314:  jmp    081ff218 <+0x33c>
081ff1f2 +0x316:  movl   $0x1,-0x18(%ebp)
081ff1f9 +0x31d:  jmp    081ff23d <+0x361>
081ff1fb +0x31f:  movl   $0x3,0x4(%esp)
081ff203 +0x327:  mov    -0x20(%ebp),%eax
081ff206 +0x32a:  mov    %eax,(%esp)
081ff209 +0x32d:  call   08145828 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2ab>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2ab
081ff20e +0x332:  mov    $0x0,%ebx
081ff213 +0x337:  jmp    081ff33b <+0x45f>
081ff218 +0x33c:  movzbl -0x21(%ebp),%eax
081ff21c +0x340:  movzbl %al,%eax
081ff21f +0x343:  movl   $0x1,0xc(%esp)
081ff227 +0x34b:  mov    %eax,0x8(%esp)
081ff22b +0x34f:  mov    -0x20(%ebp),%eax
081ff22e +0x352:  mov    %eax,0x4(%esp)
081ff232 +0x356:  mov    0x8(%ebp),%eax
081ff235 +0x359:  mov    %eax,(%esp)
081ff238 +0x35c:  call   081fed4c <_ZN22Dispatcher_EPLPCommand14_SendEPLPErrorEP6CPartyhh>  ; Dispatcher_EPLPCommand::_SendEPLPError(CParty*, unsigned char, unsigned char)
081ff23d +0x361:  mov    0xc(%ebp),%eax
081ff240 +0x364:  mov    %eax,(%esp)
081ff243 +0x367:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ff248 +0x36c:  cmp    $0xc,%eax
081ff24b +0x36f:  sete   %al
081ff24e +0x372:  test   %al,%al
081ff250 +0x374:  je     081ff290 <+0x3b4>
081ff252 +0x376:  mov    0xc(%ebp),%eax
081ff255 +0x379:  mov    %eax,(%esp)
081ff258 +0x37c:  call   08655220 <_ZN5CUser12getBossTowerEv>  ; CUser::getBossTower()
081ff25d +0x381:  mov    %eax,-0x10(%ebp)
081ff260 +0x384:  cmpl   $0x0,-0x10(%ebp)
081ff264 +0x388:  jne    081ff270 <+0x394>
081ff266 +0x38a:  mov    $0x0,%ebx
081ff26b +0x38f:  jmp    081ff33b <+0x45f>
081ff270 +0x394:  movzbl -0x21(%ebp),%eax
081ff274 +0x398:  movzbl %al,%eax
081ff277 +0x39b:  mov    %eax,0x4(%esp)
081ff27b +0x39f:  mov    -0x10(%ebp),%eax
081ff27e +0x3a2:  mov    %eax,(%esp)
081ff281 +0x3a5:  call   08142b72 <_ZN8WongWork10CBossTower17handleEPLPCommandEi>  ; WongWork::CBossTower::handleEPLPCommand(int)
081ff286 +0x3aa:  mov    $0x0,%ebx
081ff28b +0x3af:  jmp    081ff33b <+0x45f>
081ff290 +0x3b4:  mov    0xc(%ebp),%eax
081ff293 +0x3b7:  mov    %eax,(%esp)
081ff296 +0x3ba:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ff29b +0x3bf:  cmp    $0xa,%eax
081ff29e +0x3c2:  sete   %al
081ff2a1 +0x3c5:  test   %al,%al
081ff2a3 +0x3c7:  je     081ff301 <+0x425>
081ff2a5 +0x3c9:  mov    0xc(%ebp),%eax
081ff2a8 +0x3cc:  mov    %eax,(%esp)
081ff2ab +0x3cf:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
081ff2b0 +0x3d4:  mov    %eax,-0xc(%ebp)
081ff2b3 +0x3d7:  cmpl   $0x0,-0xc(%ebp)
081ff2b7 +0x3db:  jne    081ff2e1 <+0x405>
081ff2b9 +0x3dd:  movl   $0x0,0xc(%esp)
081ff2c1 +0x3e5:  movl   $0x0,0x8(%esp)
081ff2c9 +0x3ed:  movl   $&_ZZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ff2d1 +0x3f5:  movl   $0x92b9,(%esp)
081ff2d8 +0x3fc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ff2dd +0x401:  mov    %eax,%ebx
081ff2df +0x403:  jmp    081ff33b <+0x45f>
081ff2e1 +0x405:  mov    -0x18(%ebp),%eax
081ff2e4 +0x408:  mov    %eax,0x8(%esp)
081ff2e8 +0x40c:  mov    0xc(%ebp),%eax
081ff2eb +0x40f:  mov    %eax,0x4(%esp)
081ff2ef +0x413:  mov    -0xc(%ebp),%eax
081ff2f2 +0x416:  mov    %eax,(%esp)
081ff2f5 +0x419:  call   08466208 <_ZN8WongWork11CDeathTower23handleSelectEPLPCommandEP5CUseri>  ; WongWork::CDeathTower::handleSelectEPLPCommand(CUser*, int)
081ff2fa +0x41e:  mov    $0x0,%ebx
081ff2ff +0x423:  jmp    081ff33b <+0x45f>
081ff301 +0x425:  mov    0xc(%ebp),%eax
081ff304 +0x428:  mov    %eax,0x4(%esp)
081ff308 +0x42c:  mov    0x8(%ebp),%eax
081ff30b +0x42f:  mov    %eax,(%esp)
081ff30e +0x432:  call   0825f7f4 <_ZN22Dispatcher_EPLPCommand17isReTurnToVillageEP5CUser>  ; Dispatcher_EPLPCommand::isReTurnToVillage(CUser*)
081ff313 +0x437:  test   %al,%al
081ff315 +0x439:  je     081ff324 <+0x448>
081ff317 +0x43b:  mov    -0x20(%ebp),%eax
081ff31a +0x43e:  mov    %eax,(%esp)
081ff31d +0x441:  call   085aca60 <_ZN6CParty15ReturnToVillageEv>  ; CParty::ReturnToVillage()
081ff322 +0x446:  jmp    081ff336 <+0x45a>
081ff324 +0x448:  mov    -0x18(%ebp),%eax
081ff327 +0x44b:  mov    %eax,0x4(%esp)
081ff32b +0x44f:  mov    -0x20(%ebp),%eax
081ff32e +0x452:  mov    %eax,(%esp)
081ff331 +0x455:  call   085a22a8 <_ZN6CParty17SelectEPLPCommandEi>  ; CParty::SelectEPLPCommand(int)
081ff336 +0x45a:  mov    $0x0,%ebx
081ff33b +0x45f:  mov    %ebx,%eax
081ff33d +0x461:  add    $0x50,%esp
081ff340 +0x464:  pop    %ebx
081ff341 +0x465:  pop    %esi
081ff342 +0x466:  pop    %ebp
081ff343 +0x467:  ret
```

## 反编译 C

```c
// Dispatcher_EPLPCommand::dispatch_sig @ 0x81feedc

/* Dispatcher_EPLPCommand::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_EPLPCommand::dispatch_sig(Dispatcher_EPLPCommand *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CUser *pCVar5;
  PacketGuard local_40 [13];
  MSG_EPLP_COMMAND local_33 [13];
  byte local_26;
  byte local_25;
  CParty *local_24;
  SECRET_SHOP_DATA *local_20;
  int local_1c;
  byte local_15;
  CBossTower *local_14;
  CDeathTower *local_10;
  
  uVar3 = CUser::get_state(param_1);
  cVar2 = Global::CGlobalFunc::Get_State_Check(uVar3);
  if (cVar2 == '\x01') {
    cVar2 = PacketBuf::get_byte(param_2,&local_26);
    if (cVar2 == '\x01') {
      cVar2 = PacketBuf::get_byte(param_2,&local_25);
      if (cVar2 == '\x01') {
        iVar4 = CUser::get_state(param_1);
        if (iVar4 == 0xd) {
          local_15 = advancealtar::isOpenAdvanceAltar();
          PacketGuard::PacketGuard(local_40);
                    /* try { // try from 081fefd8 to 081ff065 has its CatchHandler @ 081ff06d */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,1,0x4b);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(uint)local_15);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(uint)local_26);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(uint)local_25);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
          CUser::Send(param_1,local_40);
          if (local_26 == 1) {
            advancealtar::Manager::eplp(param_1,local_25);
          }
          uVar3 = 0;
          PacketGuard::~PacketGuard(local_40);
        }
        else {
          local_24 = (CParty *)CUser::GetParty(param_1);
          if (local_24 == (CParty *)0x0) {
            uVar3 = 0;
          }
          else {
            pCVar5 = (CUser *)CParty::getManager(local_24);
            if (pCVar5 == param_1) {
              cVar2 = CParty::GetEPLPState(local_24);
              if ((cVar2 == '\x02') || (cVar2 = excludeEplpState(this,param_1), cVar2 == '\0')) {
                _BroadCastPacket(this,local_24,local_33);
                if (local_26 == 1) {
                  local_20 = (SECRET_SHOP_DATA *)CUser::GetSecretShopData(param_1);
                  if ((local_20 == (SECRET_SHOP_DATA *)0x0) ||
                     (cVar2 = secretshop::SECRET_SHOP_DATA::IsOpen(local_20), cVar2 == '\0')) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if ((bVar1) &&
                     (cVar2 = secretshop::SECRET_SHOP_DATA::IsCompleteBuy(local_20), cVar2 != '\x01'
                     )) {
                    _SendEPLPError(this,local_24,local_25,0x85);
                    uVar3 = 0;
                  }
                  else {
                    local_1c = 3;
                    if (local_25 == 2) {
                      local_1c = 1;
                    }
                    else if (2 < local_25) {
                      if (local_25 == 3) {
                        CParty::SetSelectedEPLPCmd(local_24,'\x03');
                        return 0;
                      }
                      _SendEPLPError(this,local_24,local_25,'\x01');
                    }
                    iVar4 = CUser::get_state(param_1);
                    if (iVar4 == 0xc) {
                      local_14 = (CBossTower *)CUser::getBossTower(param_1);
                      if (local_14 == (CBossTower *)0x0) {
                        uVar3 = 0;
                      }
                      else {
                        WongWork::CBossTower::handleEPLPCommand(local_14,(uint)local_25);
                        uVar3 = 0;
                      }
                    }
                    else {
                      iVar4 = CUser::get_state(param_1);
                      if (iVar4 == 10) {
                        local_10 = (CDeathTower *)CUser::getDeathTower(param_1);
                        if (local_10 == (CDeathTower *)0x0) {
                          uVar3 = LineFunc(0x92b9,
                                           "virtual int Dispatcher_EPLPCommand::dispatch_sig(CUser*, PacketBuf&)"
                                           ,0,0);
                        }
                        else {
                          WongWork::CDeathTower::handleSelectEPLPCommand(local_10,param_1,local_1c);
                          uVar3 = 0;
                        }
                      }
                      else {
                        cVar2 = isReTurnToVillage(this,param_1);
                        if (cVar2 == '\0') {
                          CParty::SelectEPLPCommand(local_24,local_1c);
                        }
                        else {
                          CParty::ReturnToVillage(local_24);
                        }
                        uVar3 = 0;
                      }
                    }
                  }
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              _SendEPLPError(this,local_24,local_25,'\b');
              uVar3 = 0;
            }
          }
        }
      }
      else {
        uVar3 = LineFunc(0x9239,
                         "virtual int Dispatcher_EPLPCommand::dispatch_sig(CUser*, PacketBuf&)",0,0)
        ;
      }
    }
    else {
      uVar3 = LineFunc(0x9238,"virtual int Dispatcher_EPLPCommand::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
