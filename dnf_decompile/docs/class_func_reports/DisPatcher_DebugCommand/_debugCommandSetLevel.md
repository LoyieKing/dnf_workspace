# _debugCommandSetLevel

`_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri`

`DisPatcher_DebugCommand::_debugCommandSetLevel(CUser*, int)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858efde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858efde  _ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri
#           DisPatcher_DebugCommand::_debugCommandSetLevel(CUser*, int)
# range [0x0858efde, 0x0858f3b9]
0858efde +0x000:  push   %ebp
0858efdf +0x001:  mov    %esp,%ebp
0858efe1 +0x003:  push   %esi
0858efe2 +0x004:  push   %ebx
0858efe3 +0x005:  sub    $0x60,%esp
0858efe6 +0x008:  mov    0xc(%ebp),%eax
0858efe9 +0x00b:  mov    %eax,(%esp)
0858efec +0x00e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858eff1 +0x013:  xor    $0x1,%eax
0858eff4 +0x016:  test   %al,%al
0858eff6 +0x018:  je     0858f002 <+0x24>
0858eff8 +0x01a:  mov    $0x0,%eax
0858effd +0x01f:  jmp    0858f3b2 <+0x3d4>
0858f002 +0x024:  cmpl   $0x46,0x10(%ebp)
0858f006 +0x028:  jle    0858f012 <+0x34>
0858f008 +0x02a:  mov    $0x0,%eax
0858f00d +0x02f:  jmp    0858f3b2 <+0x3d4>
0858f012 +0x034:  movb   $0x1,-0x19(%ebp)
0858f016 +0x038:  mov    0xc(%ebp),%eax
0858f019 +0x03b:  mov    %eax,(%esp)
0858f01c +0x03e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0858f021 +0x043:  mov    0x10(%ebp),%edx
0858f024 +0x046:  mov    %edx,%ecx
0858f026 +0x048:  sub    %eax,%ecx
0858f028 +0x04a:  mov    %ecx,%eax
0858f02a +0x04c:  mov    %eax,-0x18(%ebp)
0858f02d +0x04f:  cmpl   $0x0,-0x18(%ebp)
0858f031 +0x053:  jne    0858f03c <+0x5e>
0858f033 +0x055:  movb   $0x0,-0x19(%ebp)
0858f037 +0x059:  jmp    0858f0ee <+0x110>
0858f03c +0x05e:  cmpl   $0x0,-0x18(%ebp)
0858f040 +0x062:  jle    0858f099 <+0xbb>
0858f042 +0x064:  movl   $0x0,-0x10(%ebp)
0858f049 +0x06b:  jmp    0858f08a <+0xac>
0858f04b +0x06d:  mov    0xc(%ebp),%eax
0858f04e +0x070:  mov    %eax,(%esp)
0858f051 +0x073:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0858f056 +0x078:  add    $0x1,%eax
0858f059 +0x07b:  mov    %eax,-0x2c(%ebp)
0858f05c +0x07e:  movl   $0xc8,-0x28(%ebp)
0858f063 +0x085:  lea    -0x2c(%ebp),%eax
0858f066 +0x088:  mov    %eax,0x4(%esp)
0858f06a +0x08c:  lea    -0x28(%ebp),%eax
0858f06d +0x08f:  mov    %eax,(%esp)
0858f070 +0x092:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0858f075 +0x097:  mov    (%eax),%eax
0858f077 +0x099:  mov    %eax,0x4(%esp)
0858f07b +0x09d:  mov    0xc(%ebp),%eax
0858f07e +0x0a0:  mov    %eax,(%esp)
0858f081 +0x0a3:  call   0867a95c <_ZN5CUser14SetCharacLevelEi>  ; CUser::SetCharacLevel(int)
0858f086 +0x0a8:  addl   $0x1,-0x10(%ebp)
0858f08a +0x0ac:  mov    -0x10(%ebp),%eax
0858f08d +0x0af:  cmp    -0x18(%ebp),%eax
0858f090 +0x0b2:  setl   %al
0858f093 +0x0b5:  test   %al,%al
0858f095 +0x0b7:  jne    0858f04b <+0x6d>
0858f097 +0x0b9:  jmp    0858f0ee <+0x110>
0858f099 +0x0bb:  movl   $0x0,-0xc(%ebp)
0858f0a0 +0x0c2:  jmp    0858f0e1 <+0x103>
0858f0a2 +0x0c4:  mov    0xc(%ebp),%eax
0858f0a5 +0x0c7:  mov    %eax,(%esp)
0858f0a8 +0x0ca:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0858f0ad +0x0cf:  sub    $0x1,%eax
0858f0b0 +0x0d2:  mov    %eax,-0x24(%ebp)
0858f0b3 +0x0d5:  movl   $0xc8,-0x20(%ebp)
0858f0ba +0x0dc:  lea    -0x24(%ebp),%eax
0858f0bd +0x0df:  mov    %eax,0x4(%esp)
0858f0c1 +0x0e3:  lea    -0x20(%ebp),%eax
0858f0c4 +0x0e6:  mov    %eax,(%esp)
0858f0c7 +0x0e9:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0858f0cc +0x0ee:  mov    (%eax),%eax
0858f0ce +0x0f0:  mov    %eax,0x4(%esp)
0858f0d2 +0x0f4:  mov    0xc(%ebp),%eax
0858f0d5 +0x0f7:  mov    %eax,(%esp)
0858f0d8 +0x0fa:  call   0867a95c <_ZN5CUser14SetCharacLevelEi>  ; CUser::SetCharacLevel(int)
0858f0dd +0x0ff:  subl   $0x1,-0xc(%ebp)
0858f0e1 +0x103:  mov    -0xc(%ebp),%eax
0858f0e4 +0x106:  cmp    -0x18(%ebp),%eax
0858f0e7 +0x109:  setg   %al
0858f0ea +0x10c:  test   %al,%al
0858f0ec +0x10e:  jne    0858f0a2 <+0xc4>
0858f0ee +0x110:  mov    0xc(%ebp),%eax
0858f0f1 +0x113:  mov    %eax,(%esp)
0858f0f4 +0x116:  call   0866311a <_ZN5CUser10_onLevelUpEv>  ; CUser::_onLevelUp()
0858f0f9 +0x11b:  mov    0xc(%ebp),%eax
0858f0fc +0x11e:  mov    %eax,(%esp)
0858f0ff +0x121:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0858f104 +0x126:  mov    %eax,%ebx
0858f106 +0x128:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0858f10b +0x12d:  mov    %ebx,0x4(%esp)
0858f10f +0x131:  mov    %eax,(%esp)
0858f112 +0x134:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
0858f117 +0x139:  mov    %eax,-0x14(%ebp)
0858f11a +0x13c:  mov    0xc(%ebp),%eax
0858f11d +0x13f:  mov    -0x14(%ebp),%edx
0858f120 +0x142:  mov    %edx,0x4(%esp)
0858f124 +0x146:  mov    %eax,(%esp)
0858f127 +0x149:  call   0819a87c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x562>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x562
0858f12c +0x14e:  cmpb   $0x0,-0x19(%ebp)
0858f130 +0x152:  je     0858f3ae <+0x3d0>
0858f136 +0x158:  mov    0xc(%ebp),%eax
0858f139 +0x15b:  mov    %eax,(%esp)
0858f13c +0x15e:  call   0868ff04 <_ZN5CUser21CalcurateUserMaxLevelEv>  ; CUser::CalcurateUserMaxLevel()
0858f141 +0x163:  lea    -0x38(%ebp),%eax
0858f144 +0x166:  mov    %eax,(%esp)
0858f147 +0x169:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0858f14c +0x16e:  movl   $0x1ba,0x8(%esp)
0858f154 +0x176:  movl   $0x1,0x4(%esp)
0858f15c +0x17e:  lea    -0x38(%ebp),%eax
0858f15f +0x181:  mov    %eax,(%esp)
0858f162 +0x184:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0858f167 +0x189:  movl   $0x1,0x4(%esp)
0858f16f +0x191:  lea    -0x38(%ebp),%eax
0858f172 +0x194:  mov    %eax,(%esp)
0858f175 +0x197:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0858f17a +0x19c:  lea    -0x38(%ebp),%eax
0858f17d +0x19f:  mov    %eax,0x4(%esp)
0858f181 +0x1a3:  mov    0xc(%ebp),%eax
0858f184 +0x1a6:  mov    %eax,(%esp)
0858f187 +0x1a9:  call   0868e704 <_ZN5CUser22SetMercenaryInfoPacketER11PacketGuard>  ; CUser::SetMercenaryInfoPacket(PacketGuard&)
0858f18c +0x1ae:  movl   $0x1,0x4(%esp)
0858f194 +0x1b6:  lea    -0x38(%ebp),%eax
0858f197 +0x1b9:  mov    %eax,(%esp)
0858f19a +0x1bc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0858f19f +0x1c1:  lea    -0x38(%ebp),%eax
0858f1a2 +0x1c4:  mov    %eax,0x4(%esp)
0858f1a6 +0x1c8:  mov    0xc(%ebp),%eax
0858f1a9 +0x1cb:  mov    %eax,(%esp)
0858f1ac +0x1ce:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0858f1b1 +0x1d3:  mov    0xc(%ebp),%eax
0858f1b4 +0x1d6:  mov    %eax,(%esp)
0858f1b7 +0x1d9:  call   086467a0 <_ZNK15CUserCharacInfo25GetCurCharacMaxEquipLevelEv>  ; CUserCharacInfo::GetCurCharacMaxEquipLevel() const
0858f1bc +0x1de:  test   %eax,%eax
0858f1be +0x1e0:  je     0858f1e3 <+0x205>
0858f1c0 +0x1e2:  mov    0xc(%ebp),%eax
0858f1c3 +0x1e5:  mov    %eax,(%esp)
0858f1c6 +0x1e8:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0858f1cb +0x1ed:  mov    %eax,%ebx
0858f1cd +0x1ef:  mov    0xc(%ebp),%eax
0858f1d0 +0x1f2:  mov    %eax,(%esp)
0858f1d3 +0x1f5:  call   086467a0 <_ZNK15CUserCharacInfo25GetCurCharacMaxEquipLevelEv>  ; CUserCharacInfo::GetCurCharacMaxEquipLevel() const
0858f1d8 +0x1fa:  cmp    %eax,%ebx
0858f1da +0x1fc:  jne    0858f1e3 <+0x205>
0858f1dc +0x1fe:  mov    $0x1,%eax
0858f1e1 +0x203:  jmp    0858f1e8 <+0x20a>
0858f1e3 +0x205:  mov    $0x0,%eax
0858f1e8 +0x20a:  test   %al,%al
0858f1ea +0x20c:  je     0858f1ff <+0x221>
0858f1ec +0x20e:  mov    0xc(%ebp),%eax
0858f1ef +0x211:  movl   $0x0,0x4(%esp)
0858f1f7 +0x219:  mov    %eax,(%esp)
0858f1fa +0x21c:  call   086467c2 <_ZN15CUserCharacInfo25SetCurCharacMaxEquipLevelEi>  ; CUserCharacInfo::SetCurCharacMaxEquipLevel(int)
0858f1ff +0x221:  mov    0xc(%ebp),%eax
0858f202 +0x224:  mov    %eax,(%esp)
0858f205 +0x227:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0858f20a +0x22c:  cmp    $0x3,%eax
0858f20d +0x22f:  je     0858f21d <+0x23f>
0858f20f +0x231:  cmp    $0x5,%eax
0858f212 +0x234:  je     0858f2e7 <+0x309>
0858f218 +0x23a:  jmp    0858f386 <+0x3a8>
0858f21d +0x23f:  movl   $0x0,0xc(%esp)
0858f225 +0x247:  movl   $0x25,0x8(%esp)
0858f22d +0x24f:  movl   $0x1,0x4(%esp)
0858f235 +0x257:  mov    0xc(%ebp),%eax
0858f238 +0x25a:  mov    %eax,(%esp)
0858f23b +0x25d:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0858f240 +0x262:  movl   $0x0,0xc(%esp)
0858f248 +0x26a:  movl   $0x2,0x8(%esp)
0858f250 +0x272:  movl   $0x0,0x4(%esp)
0858f258 +0x27a:  mov    0xc(%ebp),%eax
0858f25b +0x27d:  mov    %eax,(%esp)
0858f25e +0x280:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0858f263 +0x285:  movl   $0x1,0xc(%esp)
0858f26b +0x28d:  movl   $0x2,0x8(%esp)
0858f273 +0x295:  movl   $0x1,0x4(%esp)
0858f27b +0x29d:  mov    0xc(%ebp),%eax
0858f27e +0x2a0:  mov    %eax,(%esp)
0858f281 +0x2a3:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0858f286 +0x2a8:  lea    -0x44(%ebp),%eax
0858f289 +0x2ab:  mov    %eax,(%esp)
0858f28c +0x2ae:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0858f291 +0x2b3:  lea    -0x44(%ebp),%ebx
0858f294 +0x2b6:  mov    0xc(%ebp),%eax
0858f297 +0x2b9:  mov    %eax,(%esp)
0858f29a +0x2bc:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0858f29f +0x2c1:  mov    %ebx,0x4(%esp)
0858f2a3 +0x2c5:  mov    %eax,(%esp)
0858f2a6 +0x2c8:  call   086abba8 <_ZNK9UserQuest14get_quest_infoEPc>  ; UserQuest::get_quest_info(char*) const
0858f2ab +0x2cd:  lea    -0x44(%ebp),%eax
0858f2ae +0x2d0:  mov    %eax,0x4(%esp)
0858f2b2 +0x2d4:  mov    0xc(%ebp),%eax
0858f2b5 +0x2d7:  mov    %eax,(%esp)
0858f2b8 +0x2da:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0858f2bd +0x2df:  jmp    0858f2d7 <+0x2f9>
0858f2bf +0x2e1:  mov    %edx,%ebx
0858f2c1 +0x2e3:  mov    %eax,%esi
0858f2c3 +0x2e5:  lea    -0x44(%ebp),%eax
0858f2c6 +0x2e8:  mov    %eax,(%esp)
0858f2c9 +0x2eb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858f2ce +0x2f0:  mov    %esi,%eax
0858f2d0 +0x2f2:  mov    %ebx,%edx
0858f2d2 +0x2f4:  jmp    0858f393 <+0x3b5>
0858f2d7 +0x2f9:  lea    -0x44(%ebp),%eax
0858f2da +0x2fc:  mov    %eax,(%esp)
0858f2dd +0x2ff:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858f2e2 +0x304:  jmp    0858f386 <+0x3a8>
0858f2e7 +0x309:  movl   $0x0,0xc(%esp)
0858f2ef +0x311:  movl   $0x25,0x8(%esp)
0858f2f7 +0x319:  movl   $0x1,0x4(%esp)
0858f2ff +0x321:  mov    0xc(%ebp),%eax
0858f302 +0x324:  mov    %eax,(%esp)
0858f305 +0x327:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0858f30a +0x32c:  movl   $0x1,0xc(%esp)
0858f312 +0x334:  movl   $0x2,0x8(%esp)
0858f31a +0x33c:  movl   $0x2,0x4(%esp)
0858f322 +0x344:  mov    0xc(%ebp),%eax
0858f325 +0x347:  mov    %eax,(%esp)
0858f328 +0x34a:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0858f32d +0x34f:  lea    -0x50(%ebp),%eax
0858f330 +0x352:  mov    %eax,(%esp)
0858f333 +0x355:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0858f338 +0x35a:  lea    -0x50(%ebp),%ebx
0858f33b +0x35d:  mov    0xc(%ebp),%eax
0858f33e +0x360:  mov    %eax,(%esp)
0858f341 +0x363:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0858f346 +0x368:  mov    %ebx,0x4(%esp)
0858f34a +0x36c:  mov    %eax,(%esp)
0858f34d +0x36f:  call   086abba8 <_ZNK9UserQuest14get_quest_infoEPc>  ; UserQuest::get_quest_info(char*) const
0858f352 +0x374:  lea    -0x50(%ebp),%eax
0858f355 +0x377:  mov    %eax,0x4(%esp)
0858f359 +0x37b:  mov    0xc(%ebp),%eax
0858f35c +0x37e:  mov    %eax,(%esp)
0858f35f +0x381:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0858f364 +0x386:  jmp    0858f37b <+0x39d>
0858f366 +0x388:  mov    %edx,%ebx
0858f368 +0x38a:  mov    %eax,%esi
0858f36a +0x38c:  lea    -0x50(%ebp),%eax
0858f36d +0x38f:  mov    %eax,(%esp)
0858f370 +0x392:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858f375 +0x397:  mov    %esi,%eax
0858f377 +0x399:  mov    %ebx,%edx
0858f379 +0x39b:  jmp    0858f393 <+0x3b5>
0858f37b +0x39d:  lea    -0x50(%ebp),%eax
0858f37e +0x3a0:  mov    %eax,(%esp)
0858f381 +0x3a3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858f386 +0x3a8:  lea    -0x38(%ebp),%eax
0858f389 +0x3ab:  mov    %eax,(%esp)
0858f38c +0x3ae:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858f391 +0x3b3:  jmp    0858f3ae <+0x3d0>
0858f393 +0x3b5:  mov    %edx,%ebx
0858f395 +0x3b7:  mov    %eax,%esi
0858f397 +0x3b9:  lea    -0x38(%ebp),%eax
0858f39a +0x3bc:  mov    %eax,(%esp)
0858f39d +0x3bf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858f3a2 +0x3c4:  mov    %esi,%eax
0858f3a4 +0x3c6:  mov    %ebx,%edx
0858f3a6 +0x3c8:  mov    %eax,(%esp)
0858f3a9 +0x3cb:  call   08ae3750 <_Unwind_Resume>
0858f3ae +0x3d0:  movzbl -0x19(%ebp),%eax
0858f3b2 +0x3d4:  add    $0x60,%esp
0858f3b5 +0x3d7:  pop    %ebx
0858f3b6 +0x3d8:  pop    %esi
0858f3b7 +0x3d9:  pop    %ebp
0858f3b8 +0x3da:  ret
0858f3b9 +0x3db:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandSetLevel @ 0x858efde

/* DisPatcher_DebugCommand::_debugCommandSetLevel(CUser*, int) */

char __thiscall
DisPatcher_DebugCommand::_debugCommandSetLevel
          (DisPatcher_DebugCommand *this,CUser *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  CDataManager *this_00;
  int iVar5;
  UserQuest *pUVar6;
  PacketGuard local_54 [12];
  PacketGuard local_48 [12];
  PacketGuard local_3c [12];
  int local_30 [3];
  int local_24;
  char local_1d;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar2 = CUser::isGMUser(param_1);
  if (cVar2 != '\x01') {
    return '\0';
  }
  if (0x46 < param_2) {
    return '\0';
  }
  local_1d = '\x01';
  local_1c = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  local_1c = param_2 - local_1c;
  if (local_1c == 0) {
    local_1d = '\0';
  }
  else if (local_1c < 1) {
    for (local_10 = 0; local_1c < local_10; local_10 = local_10 + -1) {
      local_30[2] = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      local_30[2] = local_30[2] + -1;
      local_24 = 200;
      piVar3 = std::min<int>(&local_24,local_30 + 2);
      CUser::SetCharacLevel(param_1,*piVar3);
    }
  }
  else {
    for (local_14 = 0; local_14 < local_1c; local_14 = local_14 + 1) {
      local_30[0] = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      local_30[0] = local_30[0] + 1;
      local_30[1] = 200;
      piVar3 = std::min<int>(local_30 + 1,local_30);
      CUser::SetCharacLevel(param_1,*piVar3);
    }
  }
  CUser::_onLevelUp(param_1);
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  this_00 = (CDataManager *)G_CDataManager();
  local_18 = CDataManager::get_level_exp(this_00,iVar4);
  CUserCharacInfo::setCurCharacExp((CUserCharacInfo *)param_1,local_18);
  if (local_1d == '\0') {
    return '\0';
  }
  CUser::CalcurateUserMaxLevel(param_1);
  PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 0858f162 to 0858f290 has its CatchHandler @ 0858f393 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0x1ba);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
  CUser::SetMercenaryInfoPacket(param_1,local_3c);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
  CUser::Send(param_1,local_3c);
  iVar4 = CUserCharacInfo::GetCurCharacMaxEquipLevel((CUserCharacInfo *)param_1);
  if (iVar4 != 0) {
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    iVar5 = CUserCharacInfo::GetCurCharacMaxEquipLevel((CUserCharacInfo *)param_1);
    if (iVar4 == iVar5) {
      bVar1 = true;
      goto LAB_0858f1e8;
    }
  }
  bVar1 = false;
LAB_0858f1e8:
  if (bVar1) {
    CUserCharacInfo::SetCurCharacMaxEquipLevel((CUserCharacInfo *)param_1,0);
  }
  iVar4 = CUser::get_state(param_1);
  if (iVar4 == 3) {
    CUser::SendNotiPacket(param_1,1,0x25,0);
    CUser::SendNotiPacket(param_1,0,2,0);
    CUser::SendNotiPacket(param_1,1,2,1);
    PacketGuard::PacketGuard(local_48);
    pUVar6 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
                    /* try { // try from 0858f2a6 to 0858f2bc has its CatchHandler @ 0858f2bf */
    UserQuest::get_quest_info(pUVar6,(char *)local_48);
    CUser::Send(param_1,local_48);
                    /* try { // try from 0858f2dd to 0858f337 has its CatchHandler @ 0858f393 */
    PacketGuard::~PacketGuard(local_48);
  }
  else if (iVar4 == 5) {
    CUser::SendNotiPacket(param_1,1,0x25,0);
    CUser::SendNotiPacket(param_1,2,2,1);
    PacketGuard::PacketGuard(local_54);
    pUVar6 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
                    /* try { // try from 0858f34d to 0858f363 has its CatchHandler @ 0858f366 */
    UserQuest::get_quest_info(pUVar6,(char *)local_54);
    CUser::Send(param_1,local_54);
                    /* try { // try from 0858f381 to 0858f385 has its CatchHandler @ 0858f393 */
    PacketGuard::~PacketGuard(local_54);
  }
  PacketGuard::~PacketGuard(local_3c);
  return local_1d;
}
```
