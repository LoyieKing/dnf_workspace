# LeaveAssaultPlace

`_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb`

`pvp_assault::CAssaultPlace::LeaveAssaultPlace(int, bool, bool)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ead6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ead6a  _ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb
#           pvp_assault::CAssaultPlace::LeaveAssaultPlace(int, bool, bool)
# range [0x082ead6a, 0x082eb3b9]
082ead6a +0x000:  push   %ebp
082ead6b +0x001:  mov    %esp,%ebp
082ead6d +0x003:  push   %esi
082ead6e +0x004:  push   %ebx
082ead6f +0x005:  sub    $0x70,%esp
082ead72 +0x008:  mov    0x10(%ebp),%edx
082ead75 +0x00b:  mov    0x14(%ebp),%eax
082ead78 +0x00e:  mov    %dl,-0x4c(%ebp)
082ead7b +0x011:  mov    %al,-0x50(%ebp)
082ead7e +0x014:  cmpl   $0x0,0xc(%ebp)
082ead82 +0x018:  js     082eb3af <+0x645>
082ead88 +0x01e:  cmpl   $0x7,0xc(%ebp)
082ead8c +0x022:  jg     082eb3b2 <+0x648>
082ead92 +0x028:  mov    0xc(%ebp),%eax
082ead95 +0x02b:  shl    $0x5,%eax
082ead98 +0x02e:  add    0x8(%ebp),%eax
082ead9b +0x031:  mov    %eax,(%esp)
082ead9e +0x034:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082eada3 +0x039:  mov    %eax,-0x18(%ebp)
082eada6 +0x03c:  cmpl   $0x0,-0x18(%ebp)
082eadaa +0x040:  je     082eb07a <+0x310>
082eadb0 +0x046:  movzbl -0x50(%ebp),%eax
082eadb4 +0x04a:  mov    %eax,0x4(%esp)
082eadb8 +0x04e:  mov    0x8(%ebp),%eax
082eadbb +0x051:  mov    %eax,(%esp)
082eadbe +0x054:  call   082eacf4 <_ZN11pvp_assault13CAssaultPlace16_IsGiveupPanaltyEb>  ; pvp_assault::CAssaultPlace::_IsGiveupPanalty(bool)
082eadc3 +0x059:  test   %al,%al
082eadc5 +0x05b:  je     082eaeb8 <+0x14e>
082eadcb +0x061:  mov    0xc(%ebp),%eax
082eadce +0x064:  shl    $0x5,%eax
082eadd1 +0x067:  add    0x8(%ebp),%eax
082eadd4 +0x06a:  mov    %eax,(%esp)
082eadd7 +0x06d:  call   082e6868 <_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv>  ; pvp_assault::CAssaulter::GiveupPanalty()
082eaddc +0x072:  mov    0x8(%ebp),%eax
082eaddf +0x075:  mov    0x10c(%eax),%eax
082eade5 +0x07b:  cmp    $0x1,%eax
082eade8 +0x07e:  jle    082eae0d <+0xa3>
082eadea +0x080:  mov    0x8(%ebp),%eax
082eaded +0x083:  mov    0x10c(%eax),%eax
082eadf3 +0x089:  cmp    $0x3,%eax
082eadf6 +0x08c:  jg     082eae0d <+0xa3>
082eadf8 +0x08e:  mov    -0x18(%ebp),%eax
082eadfb +0x091:  movl   $0x1,0x4(%esp)
082eae03 +0x099:  mov    %eax,(%esp)
082eae06 +0x09c:  call   082f0d80 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xb04>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xb04
082eae0b +0x0a1:  jmp    082eae89 <+0x11f>
082eae0d +0x0a3:  mov    0x8(%ebp),%eax
082eae10 +0x0a6:  mov    0x10c(%eax),%eax
082eae16 +0x0ac:  cmp    $0x3,%eax
082eae19 +0x0af:  jle    082eae89 <+0x11f>
082eae1b +0x0b1:  mov    0x8(%ebp),%eax
082eae1e +0x0b4:  mov    0x10c(%eax),%eax
082eae24 +0x0ba:  cmp    $0x6,%eax
082eae27 +0x0bd:  jg     082eae89 <+0x11f>
082eae29 +0x0bf:  lea    -0x30(%ebp),%eax
082eae2c +0x0c2:  mov    %eax,(%esp)
082eae2f +0x0c5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082eae34 +0x0ca:  mov    -0x18(%ebp),%eax
082eae37 +0x0cd:  mov    %eax,0x8(%esp)
082eae3b +0x0d1:  lea    -0x30(%ebp),%eax
082eae3e +0x0d4:  mov    %eax,0x4(%esp)
082eae42 +0x0d8:  mov    0x8(%ebp),%eax
082eae45 +0x0db:  mov    %eax,(%esp)
082eae48 +0x0de:  call   082e8d60 <_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuardP5CUser>  ; pvp_assault::CAssaultPlace::_MakeUserState(PacketGuard*, CUser*)
082eae4d +0x0e3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082eae52 +0x0e8:  lea    -0x30(%ebp),%edx
082eae55 +0x0eb:  mov    %edx,0x4(%esp)
082eae59 +0x0ef:  mov    %eax,(%esp)
082eae5c +0x0f2:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
082eae61 +0x0f7:  jmp    082eae7e <+0x114>
082eae63 +0x0f9:  mov    %edx,%ebx
082eae65 +0x0fb:  mov    %eax,%esi
082eae67 +0x0fd:  lea    -0x30(%ebp),%eax
082eae6a +0x100:  mov    %eax,(%esp)
082eae6d +0x103:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082eae72 +0x108:  mov    %esi,%eax
082eae74 +0x10a:  mov    %ebx,%edx
082eae76 +0x10c:  mov    %eax,(%esp)
082eae79 +0x10f:  call   08ae3750 <_Unwind_Resume>
082eae7e +0x114:  lea    -0x30(%ebp),%eax
082eae81 +0x117:  mov    %eax,(%esp)
082eae84 +0x11a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082eae89 +0x11f:  mov    -0x18(%ebp),%eax
082eae8c +0x122:  mov    %eax,0x4(%esp)
082eae90 +0x126:  mov    0x8(%ebp),%eax
082eae93 +0x129:  mov    %eax,(%esp)
082eae96 +0x12c:  call   082eab1a <_ZN11pvp_assault13CAssaultPlace19_IsBroadcastRunawayEP5CUser>  ; pvp_assault::CAssaultPlace::_IsBroadcastRunaway(CUser*)
082eae9b +0x131:  test   %al,%al
082eae9d +0x133:  je     082eaeb8 <+0x14e>
082eae9f +0x135:  mov    0xc(%ebp),%eax
082eaea2 +0x138:  mov    %eax,0x8(%esp)
082eaea6 +0x13c:  mov    -0x18(%ebp),%eax
082eaea9 +0x13f:  mov    %eax,0x4(%esp)
082eaead +0x143:  mov    0x8(%ebp),%eax
082eaeb0 +0x146:  mov    %eax,(%esp)
082eaeb3 +0x149:  call   082eab7a <_ZN11pvp_assault13CAssaultPlace17_BroadcastRunawayEP5CUseri>  ; pvp_assault::CAssaultPlace::_BroadcastRunaway(CUser*, int)
082eaeb8 +0x14e:  lea    -0x24(%ebp),%eax
082eaebb +0x151:  mov    %eax,(%esp)
082eaebe +0x154:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082eaec3 +0x159:  mov    0xc(%ebp),%eax
082eaec6 +0x15c:  mov    %eax,0x8(%esp)
082eaeca +0x160:  lea    -0x24(%ebp),%eax
082eaecd +0x163:  mov    %eax,0x4(%esp)
082eaed1 +0x167:  mov    0x8(%ebp),%eax
082eaed4 +0x16a:  mov    %eax,(%esp)
082eaed7 +0x16d:  call   082e9046 <_ZN11pvp_assault13CAssaultPlace14_MakeLeaveUserEP11PacketGuardi>  ; pvp_assault::CAssaultPlace::_MakeLeaveUser(PacketGuard*, int)
082eaedc +0x172:  lea    -0x24(%ebp),%eax
082eaedf +0x175:  mov    %eax,0x4(%esp)
082eaee3 +0x179:  mov    0x8(%ebp),%eax
082eaee6 +0x17c:  mov    %eax,(%esp)
082eaee9 +0x17f:  call   082e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>  ; pvp_assault::CAssaultPlace::SendPacket(PacketGuard&)
082eaeee +0x184:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082eaef3 +0x189:  mov    %eax,(%esp)
082eaef6 +0x18c:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082eaefb +0x191:  test   %al,%al
082eaefd +0x193:  je     082eaf15 <+0x1ab>
082eaeff +0x195:  mov    -0x18(%ebp),%eax
082eaf02 +0x198:  mov    %eax,(%esp)
082eaf05 +0x19b:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082eaf0a +0x1a0:  cmp    $0x7,%al
082eaf0c +0x1a2:  jne    082eaf15 <+0x1ab>
082eaf0e +0x1a4:  mov    $0x1,%eax
082eaf13 +0x1a9:  jmp    082eaf1a <+0x1b0>
082eaf15 +0x1ab:  mov    $0x0,%eax
082eaf1a +0x1b0:  test   %al,%al
082eaf1c +0x1b2:  je     082eaf33 <+0x1c9>
082eaf1e +0x1b4:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082eaf23 +0x1b9:  mov    %eax,(%esp)
082eaf26 +0x1bc:  call   082f0906 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x68a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x68a
082eaf2b +0x1c1:  mov    %eax,(%esp)
082eaf2e +0x1c4:  call   082f08f2 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x676>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x676
082eaf33 +0x1c9:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082eaf38 +0x1ce:  mov    %eax,(%esp)
082eaf3b +0x1d1:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082eaf40 +0x1d6:  test   %al,%al
082eaf42 +0x1d8:  je     082eaf5a <+0x1f0>
082eaf44 +0x1da:  mov    -0x18(%ebp),%eax
082eaf47 +0x1dd:  mov    %eax,(%esp)
082eaf4a +0x1e0:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082eaf4f +0x1e5:  cmp    $0x7,%al
082eaf51 +0x1e7:  jne    082eaf5a <+0x1f0>
082eaf53 +0x1e9:  mov    $0x1,%eax
082eaf58 +0x1ee:  jmp    082eaf5f <+0x1f5>
082eaf5a +0x1f0:  mov    $0x0,%eax
082eaf5f +0x1f5:  test   %al,%al
082eaf61 +0x1f7:  je     082eaf89 <+0x21f>
082eaf63 +0x1f9:  mov    -0x18(%ebp),%eax
082eaf66 +0x1fc:  mov    %eax,(%esp)
082eaf69 +0x1ff:  call   082f09ee <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x772>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x772
082eaf6e +0x204:  movzwl %ax,%eax
082eaf71 +0x207:  mov    %eax,0x8(%esp)
082eaf75 +0x20b:  mov    -0x18(%ebp),%eax
082eaf78 +0x20e:  mov    %eax,0x4(%esp)
082eaf7c +0x212:  mov    0x8(%ebp),%eax
082eaf7f +0x215:  mov    %eax,(%esp)
082eaf82 +0x218:  call   082e7b2a <_ZN11pvp_assault13CAssaultPlace17_SendCloseAssaultEP5CUseri>  ; pvp_assault::CAssaultPlace::_SendCloseAssault(CUser*, int)
082eaf87 +0x21d:  jmp    082eafb0 <+0x246>
082eaf89 +0x21f:  mov    0xc(%ebp),%eax
082eaf8c +0x222:  shl    $0x5,%eax
082eaf8f +0x225:  add    0x8(%ebp),%eax
082eaf92 +0x228:  mov    %eax,(%esp)
082eaf95 +0x22b:  call   082e6688 <_ZN11pvp_assault10CAssaulter5GetHpEv>  ; pvp_assault::CAssaulter::GetHp()
082eaf9a +0x230:  mov    %eax,0x8(%esp)
082eaf9e +0x234:  mov    -0x18(%ebp),%eax
082eafa1 +0x237:  mov    %eax,0x4(%esp)
082eafa5 +0x23b:  mov    0x8(%ebp),%eax
082eafa8 +0x23e:  mov    %eax,(%esp)
082eafab +0x241:  call   082e7b2a <_ZN11pvp_assault13CAssaultPlace17_SendCloseAssaultEP5CUseri>  ; pvp_assault::CAssaultPlace::_SendCloseAssault(CUser*, int)
082eafb0 +0x246:  mov    0xc(%ebp),%eax
082eafb3 +0x249:  shl    $0x5,%eax
082eafb6 +0x24c:  add    0x8(%ebp),%eax
082eafb9 +0x24f:  mov    %eax,(%esp)
082eafbc +0x252:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082eafc1 +0x257:  xor    $0x1,%eax
082eafc4 +0x25a:  test   %al,%al
082eafc6 +0x25c:  je     082eb06f <+0x305>
082eafcc +0x262:  movzbl -0x4c(%ebp),%eax
082eafd0 +0x266:  mov    %eax,0x8(%esp)
082eafd4 +0x26a:  mov    0xc(%ebp),%eax
082eafd7 +0x26d:  mov    %eax,0x4(%esp)
082eafdb +0x271:  mov    0x8(%ebp),%eax
082eafde +0x274:  mov    %eax,(%esp)
082eafe1 +0x277:  call   082e6e2c <_ZN11pvp_assault13CAssaultPlace8_DelUserEib>  ; pvp_assault::CAssaultPlace::_DelUser(int, bool)
082eafe6 +0x27c:  mov    -0x18(%ebp),%eax
082eafe9 +0x27f:  mov    %eax,(%esp)
082eafec +0x282:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
082eaff1 +0x287:  xor    $0x1,%eax
082eaff4 +0x28a:  test   %al,%al
082eaff6 +0x28c:  je     082eb06f <+0x305>
082eaff8 +0x28e:  lea    -0x3c(%ebp),%eax
082eaffb +0x291:  mov    %eax,(%esp)
082eaffe +0x294:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082eb003 +0x299:  mov    -0x18(%ebp),%eax
082eb006 +0x29c:  mov    %eax,0x8(%esp)
082eb00a +0x2a0:  lea    -0x3c(%ebp),%eax
082eb00d +0x2a3:  mov    %eax,0x4(%esp)
082eb011 +0x2a7:  mov    0x8(%ebp),%eax
082eb014 +0x2aa:  mov    %eax,(%esp)
082eb017 +0x2ad:  call   082e8d60 <_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuardP5CUser>  ; pvp_assault::CAssaultPlace::_MakeUserState(PacketGuard*, CUser*)
082eb01c +0x2b2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082eb021 +0x2b7:  lea    -0x3c(%ebp),%edx
082eb024 +0x2ba:  mov    %edx,0x4(%esp)
082eb028 +0x2be:  mov    %eax,(%esp)
082eb02b +0x2c1:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
082eb030 +0x2c6:  jmp    082eb047 <+0x2dd>
082eb032 +0x2c8:  mov    %edx,%ebx
082eb034 +0x2ca:  mov    %eax,%esi
082eb036 +0x2cc:  lea    -0x3c(%ebp),%eax
082eb039 +0x2cf:  mov    %eax,(%esp)
082eb03c +0x2d2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082eb041 +0x2d7:  mov    %esi,%eax
082eb043 +0x2d9:  mov    %ebx,%edx
082eb045 +0x2db:  jmp    082eb054 <+0x2ea>
082eb047 +0x2dd:  lea    -0x3c(%ebp),%eax
082eb04a +0x2e0:  mov    %eax,(%esp)
082eb04d +0x2e3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082eb052 +0x2e8:  jmp    082eb06f <+0x305>
082eb054 +0x2ea:  mov    %edx,%ebx
082eb056 +0x2ec:  mov    %eax,%esi
082eb058 +0x2ee:  lea    -0x24(%ebp),%eax
082eb05b +0x2f1:  mov    %eax,(%esp)
082eb05e +0x2f4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082eb063 +0x2f9:  mov    %esi,%eax
082eb065 +0x2fb:  mov    %ebx,%edx
082eb067 +0x2fd:  mov    %eax,(%esp)
082eb06a +0x300:  call   08ae3750 <_Unwind_Resume>
082eb06f +0x305:  lea    -0x24(%ebp),%eax
082eb072 +0x308:  mov    %eax,(%esp)
082eb075 +0x30b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082eb07a +0x310:  cmpl   $0x0,-0x18(%ebp)
082eb07e +0x314:  je     082eb0aa <+0x340>
082eb080 +0x316:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082eb085 +0x31b:  mov    %eax,(%esp)
082eb088 +0x31e:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082eb08d +0x323:  xor    $0x1,%eax
082eb090 +0x326:  test   %al,%al
082eb092 +0x328:  jne    082eb0a3 <+0x339>
082eb094 +0x32a:  mov    -0x18(%ebp),%eax
082eb097 +0x32d:  mov    %eax,(%esp)
082eb09a +0x330:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082eb09f +0x335:  cmp    $0x7,%al
082eb0a1 +0x337:  je     082eb0aa <+0x340>
082eb0a3 +0x339:  mov    $0x1,%eax
082eb0a8 +0x33e:  jmp    082eb0af <+0x345>
082eb0aa +0x340:  mov    $0x0,%eax
082eb0af +0x345:  test   %al,%al
082eb0b1 +0x347:  je     082eb13a <+0x3d0>
082eb0b7 +0x34d:  mov    0x8(%ebp),%eax
082eb0ba +0x350:  mov    0x10c(%eax),%eax
082eb0c0 +0x356:  cmp    $0x3,%eax
082eb0c3 +0x359:  jg     082eb13a <+0x3d0>
082eb0c5 +0x35b:  cmpl   $0x0,0xc(%ebp)
082eb0c9 +0x35f:  je     082eb0d1 <+0x367>
082eb0cb +0x361:  cmpl   $0x1,0xc(%ebp)
082eb0cf +0x365:  jne    082eb13a <+0x3d0>
082eb0d1 +0x367:  mov    0x8(%ebp),%eax
082eb0d4 +0x36a:  mov    0x12c(%eax),%eax
082eb0da +0x370:  test   %eax,%eax
082eb0dc +0x372:  je     082eb0f7 <+0x38d>
082eb0de +0x374:  mov    0x8(%ebp),%eax
082eb0e1 +0x377:  mov    0x12c(%eax),%eax
082eb0e7 +0x37d:  movl   $0x7,0x4(%esp)
082eb0ef +0x385:  mov    %eax,(%esp)
082eb0f2 +0x388:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082eb0f7 +0x38d:  mov    0x8(%ebp),%eax
082eb0fa +0x390:  mov    0x130(%eax),%eax
082eb100 +0x396:  test   %eax,%eax
082eb102 +0x398:  je     082eb11d <+0x3b3>
082eb104 +0x39a:  mov    0x8(%ebp),%eax
082eb107 +0x39d:  mov    0x130(%eax),%eax
082eb10d +0x3a3:  movl   $0x7,0x4(%esp)
082eb115 +0x3ab:  mov    %eax,(%esp)
082eb118 +0x3ae:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082eb11d +0x3b3:  mov    0x8(%ebp),%eax
082eb120 +0x3b6:  movl   $0x7,0x10c(%eax)
082eb12a +0x3c0:  mov    0x8(%ebp),%eax
082eb12d +0x3c3:  mov    %eax,(%esp)
082eb130 +0x3c6:  call   082e9ad6 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv>  ; pvp_assault::CAssaultPlace::CloseAssault()
082eb135 +0x3cb:  jmp    082eb3b3 <+0x649>
082eb13a +0x3d0:  mov    0x8(%ebp),%eax
082eb13d +0x3d3:  mov    0x100(%eax),%eax
082eb143 +0x3d9:  test   %eax,%eax
082eb145 +0x3db:  jne    082eb1b0 <+0x446>
082eb147 +0x3dd:  mov    0x8(%ebp),%eax
082eb14a +0x3e0:  mov    0x12c(%eax),%eax
082eb150 +0x3e6:  test   %eax,%eax
082eb152 +0x3e8:  je     082eb16d <+0x403>
082eb154 +0x3ea:  mov    0x8(%ebp),%eax
082eb157 +0x3ed:  mov    0x12c(%eax),%eax
082eb15d +0x3f3:  movl   $0x7,0x4(%esp)
082eb165 +0x3fb:  mov    %eax,(%esp)
082eb168 +0x3fe:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082eb16d +0x403:  mov    0x8(%ebp),%eax
082eb170 +0x406:  mov    0x130(%eax),%eax
082eb176 +0x40c:  test   %eax,%eax
082eb178 +0x40e:  je     082eb193 <+0x429>
082eb17a +0x410:  mov    0x8(%ebp),%eax
082eb17d +0x413:  mov    0x130(%eax),%eax
082eb183 +0x419:  movl   $0x7,0x4(%esp)
082eb18b +0x421:  mov    %eax,(%esp)
082eb18e +0x424:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082eb193 +0x429:  mov    0x8(%ebp),%eax
082eb196 +0x42c:  movl   $0x7,0x10c(%eax)
082eb1a0 +0x436:  mov    0x8(%ebp),%eax
082eb1a3 +0x439:  mov    %eax,(%esp)
082eb1a6 +0x43c:  call   082e9ad6 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv>  ; pvp_assault::CAssaultPlace::CloseAssault()
082eb1ab +0x441:  jmp    082eb3b3 <+0x649>
082eb1b0 +0x446:  mov    0x8(%ebp),%eax
082eb1b3 +0x449:  mov    %eax,(%esp)
082eb1b6 +0x44c:  call   082e9142 <_ZN11pvp_assault13CAssaultPlace14_CheckPlayableEv>  ; pvp_assault::CAssaultPlace::_CheckPlayable()
082eb1bb +0x451:  xor    $0x1,%eax
082eb1be +0x454:  test   %al,%al
082eb1c0 +0x456:  je     082eb3b3 <+0x649>
082eb1c6 +0x45c:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082eb1cb +0x461:  mov    %eax,(%esp)
082eb1ce +0x464:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082eb1d3 +0x469:  test   %al,%al
082eb1d5 +0x46b:  je     082eb1f3 <+0x489>
082eb1d7 +0x46d:  cmpl   $0x0,-0x18(%ebp)
082eb1db +0x471:  je     082eb1f3 <+0x489>
082eb1dd +0x473:  mov    -0x18(%ebp),%eax
082eb1e0 +0x476:  mov    %eax,(%esp)
082eb1e3 +0x479:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082eb1e8 +0x47e:  cmp    $0x7,%al
082eb1ea +0x480:  jne    082eb1f3 <+0x489>
082eb1ec +0x482:  mov    $0x1,%eax
082eb1f1 +0x487:  jmp    082eb1f8 <+0x48e>
082eb1f3 +0x489:  mov    $0x0,%eax
082eb1f8 +0x48e:  test   %al,%al
082eb1fa +0x490:  je     082eb349 <+0x5df>
082eb200 +0x496:  mov    0x8(%ebp),%eax
082eb203 +0x499:  mov    0x10c(%eax),%eax
082eb209 +0x49f:  cmp    $0x3,%eax
082eb20c +0x4a2:  jle    082eb349 <+0x5df>
082eb212 +0x4a8:  mov    0x8(%ebp),%eax
082eb215 +0x4ab:  mov    0x10c(%eax),%eax
082eb21b +0x4b1:  cmp    $0x4,%eax
082eb21e +0x4b4:  jg     082eb349 <+0x5df>
082eb224 +0x4ba:  movl   $0x0,-0x40(%ebp)
082eb22b +0x4c1:  movl   $0x0,-0x44(%ebp)
082eb232 +0x4c8:  movl   $0x0,-0x48(%ebp)
082eb239 +0x4cf:  mov    -0x18(%ebp),%eax
082eb23c +0x4d2:  mov    %eax,(%esp)
082eb23f +0x4d5:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082eb244 +0x4da:  movsbl %al,%eax
082eb247 +0x4dd:  lea    -0x48(%ebp),%edx
082eb24a +0x4e0:  mov    %edx,0x14(%esp)
082eb24e +0x4e4:  lea    -0x44(%ebp),%edx
082eb251 +0x4e7:  mov    %edx,0x10(%esp)
082eb255 +0x4eb:  lea    -0x40(%ebp),%edx
082eb258 +0x4ee:  mov    %edx,0xc(%esp)
082eb25c +0x4f2:  movl   $0x2,0x8(%esp)
082eb264 +0x4fa:  mov    %eax,0x4(%esp)
082eb268 +0x4fe:  mov    0x8(%ebp),%eax
082eb26b +0x501:  mov    %eax,(%esp)
082eb26e +0x504:  call   082e7362 <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_>  ; pvp_assault::CAssaultPlace::_CheckPowerWarInPlayer(ENUM_POWER_SIDE_TYPE, ENUM_POWER_WAR_WINNER_OR_LOSER, int&, int&, int&)
082eb273 +0x509:  test   %al,%al
082eb275 +0x50b:  je     082eb2a6 <+0x53c>
082eb277 +0x50d:  mov    -0x48(%ebp),%ecx
082eb27a +0x510:  mov    -0x44(%ebp),%edx
082eb27d +0x513:  mov    -0x40(%ebp),%eax
082eb280 +0x516:  mov    %ecx,0x14(%esp)
082eb284 +0x51a:  mov    %edx,0x10(%esp)
082eb288 +0x51e:  mov    %eax,0xc(%esp)
082eb28c +0x522:  movl   $0x2,0x8(%esp)
082eb294 +0x52a:  mov    -0x18(%ebp),%eax
082eb297 +0x52d:  mov    %eax,0x4(%esp)
082eb29b +0x531:  mov    0x8(%ebp),%eax
082eb29e +0x534:  mov    %eax,(%esp)
082eb2a1 +0x537:  call   082eceb2 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii>  ; pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)
082eb2a6 +0x53c:  mov    -0x18(%ebp),%eax
082eb2a9 +0x53f:  mov    %eax,(%esp)
082eb2ac +0x542:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082eb2b1 +0x547:  mov    %eax,-0x14(%ebp)
082eb2b4 +0x54a:  cmpl   $0x0,-0x14(%ebp)
082eb2b8 +0x54e:  je     082eb2c7 <+0x55d>
082eb2ba +0x550:  mov    -0x14(%ebp),%eax
082eb2bd +0x553:  mov    %eax,(%esp)
082eb2c0 +0x556:  call   082f0818 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x59c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x59c
082eb2c5 +0x55b:  jmp    082eb2d2 <+0x568>
082eb2c7 +0x55d:  mov    -0x18(%ebp),%eax
082eb2ca +0x560:  mov    %eax,(%esp)
082eb2cd +0x563:  call   082f0a5c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x7e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x7e0
082eb2d2 +0x568:  movl   $0x0,-0x10(%ebp)
082eb2d9 +0x56f:  jmp    082eb33e <+0x5d4>
082eb2db +0x571:  mov    -0x10(%ebp),%eax
082eb2de +0x574:  shl    $0x5,%eax
082eb2e1 +0x577:  add    0x8(%ebp),%eax
082eb2e4 +0x57a:  mov    %eax,(%esp)
082eb2e7 +0x57d:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082eb2ec +0x582:  test   %al,%al
082eb2ee +0x584:  jne    082eb339 <+0x5cf>
082eb2f0 +0x586:  mov    -0x10(%ebp),%eax
082eb2f3 +0x589:  shl    $0x5,%eax
082eb2f6 +0x58c:  add    0x8(%ebp),%eax
082eb2f9 +0x58f:  mov    %eax,(%esp)
082eb2fc +0x592:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082eb301 +0x597:  mov    %eax,-0xc(%ebp)
082eb304 +0x59a:  mov    -0xc(%ebp),%eax
082eb307 +0x59d:  mov    %eax,(%esp)
082eb30a +0x5a0:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082eb30f +0x5a5:  mov    %eax,%ebx
082eb311 +0x5a7:  mov    -0x18(%ebp),%eax
082eb314 +0x5aa:  mov    %eax,(%esp)
082eb317 +0x5ad:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082eb31c +0x5b2:  cmp    %al,%bl
082eb31e +0x5b4:  setne  %al
082eb321 +0x5b7:  test   %al,%al
082eb323 +0x5b9:  je     082eb33a <+0x5d0>
082eb325 +0x5bb:  mov    -0xc(%ebp),%eax
082eb328 +0x5be:  mov    %eax,0x4(%esp)
082eb32c +0x5c2:  mov    0x8(%ebp),%eax
082eb32f +0x5c5:  mov    %eax,(%esp)
082eb332 +0x5c8:  call   082ec558 <_ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser>  ; pvp_assault::CAssaultPlace::_SendStraightVictories(CUser*)
082eb337 +0x5cd:  jmp    082eb349 <+0x5df>
082eb339 +0x5cf:  nop
082eb33a +0x5d0:  addl   $0x1,-0x10(%ebp)
082eb33e +0x5d4:  cmpl   $0x7,-0x10(%ebp)
082eb342 +0x5d8:  setle  %al
082eb345 +0x5db:  test   %al,%al
082eb347 +0x5dd:  jne    082eb2db <+0x571>
082eb349 +0x5df:  mov    0x8(%ebp),%eax
082eb34c +0x5e2:  mov    0x12c(%eax),%eax
082eb352 +0x5e8:  test   %eax,%eax
082eb354 +0x5ea:  je     082eb36f <+0x605>
082eb356 +0x5ec:  mov    0x8(%ebp),%eax
082eb359 +0x5ef:  mov    0x12c(%eax),%eax
082eb35f +0x5f5:  movl   $0x6,0x4(%esp)
082eb367 +0x5fd:  mov    %eax,(%esp)
082eb36a +0x600:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082eb36f +0x605:  mov    0x8(%ebp),%eax
082eb372 +0x608:  mov    0x130(%eax),%eax
082eb378 +0x60e:  test   %eax,%eax
082eb37a +0x610:  je     082eb395 <+0x62b>
082eb37c +0x612:  mov    0x8(%ebp),%eax
082eb37f +0x615:  mov    0x130(%eax),%eax
082eb385 +0x61b:  movl   $0x6,0x4(%esp)
082eb38d +0x623:  mov    %eax,(%esp)
082eb390 +0x626:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082eb395 +0x62b:  mov    0x8(%ebp),%eax
082eb398 +0x62e:  movl   $0x6,0x10c(%eax)
082eb3a2 +0x638:  mov    0x8(%ebp),%eax
082eb3a5 +0x63b:  mov    %eax,(%esp)
082eb3a8 +0x63e:  call   082e99a2 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv>  ; pvp_assault::CAssaultPlace::EndAssault()
082eb3ad +0x643:  jmp    082eb3b3 <+0x649>
082eb3af +0x645:  nop
082eb3b0 +0x646:  jmp    082eb3b3 <+0x649>
082eb3b2 +0x648:  nop
082eb3b3 +0x649:  add    $0x70,%esp
082eb3b6 +0x64c:  pop    %ebx
082eb3b7 +0x64d:  pop    %esi
082eb3b8 +0x64e:  pop    %ebp
082eb3b9 +0x64f:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::LeaveAssaultPlace @ 0x82ead6a

/* pvp_assault::CAssaultPlace::LeaveAssaultPlace(int, bool, bool) */

void __thiscall
pvp_assault::CAssaultPlace::LeaveAssaultPlace
          (CAssaultPlace *this,int param_1,bool param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  CPowerWarLog *this_00;
  uint uVar4;
  int iVar5;
  GameWorld *pGVar6;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  PacketGuard local_40 [12];
  PacketGuard local_34 [12];
  PacketGuard local_28 [12];
  CUserCharacInfo *local_1c;
  CParty *local_18;
  int local_14;
  CUser *local_10;
  
  if ((-1 < param_1) && (param_1 < 8)) {
    local_1c = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + param_1 * 0x20));
    if (local_1c != (CUserCharacInfo *)0x0) {
      cVar2 = _IsGiveupPanalty(this,param_3);
      if (cVar2 != '\0') {
        CAssaulter::GiveupPanalty((CAssaulter *)(this + param_1 * 0x20));
        if ((*(int *)(this + 0x10c) < 2) || (3 < *(int *)(this + 0x10c))) {
          if ((3 < *(int *)(this + 0x10c)) && (*(int *)(this + 0x10c) < 7)) {
            PacketGuard::PacketGuard(local_34);
                    /* try { // try from 082eae48 to 082eae60 has its CatchHandler @ 082eae63 */
            _MakeUserState(this,local_34,(CUser *)local_1c);
            pGVar6 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(pGVar6,local_34);
            PacketGuard::~PacketGuard(local_34);
          }
        }
        else {
          CUserCharacInfo::SetCurCharacLeaveTimeout(local_1c,true);
        }
        cVar2 = _IsBroadcastRunaway(this,(CUser *)local_1c);
        if (cVar2 != '\0') {
          _BroadcastRunaway(this,(CUser *)local_1c,param_1);
        }
      }
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 082eaed7 to 082eb002 has its CatchHandler @ 082eb054 */
      _MakeLeaveUser(this,local_28,param_1);
      SendPacket(this,local_28);
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if ((cVar2 == '\0') || (cVar2 = CUserCharacInfo::getCurCharacVill(local_1c), cVar2 != '\a')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        this_00 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncTotalLeaveAssaultUser(this_00);
      }
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if ((cVar2 == '\0') || (cVar2 = CUserCharacInfo::getCurCharacVill(local_1c), cVar2 != '\a')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar4 = CUserCharacInfo::getPowerWarHP(local_1c);
        _SendCloseAssault(this,(CUser *)local_1c,uVar4 & 0xffff);
      }
      else {
        iVar5 = CAssaulter::GetHp((CAssaulter *)(this + param_1 * 0x20));
        _SendCloseAssault(this,(CUser *)local_1c,iVar5);
      }
      cVar2 = CAssaulter::Empty((CAssaulter *)(this + param_1 * 0x20));
      if (cVar2 != '\x01') {
        _DelUser(this,param_1,param_2);
        cVar2 = CUserCharacInfo::IsCurCharacGhost(local_1c);
        if (cVar2 != '\x01') {
          PacketGuard::PacketGuard(local_40);
                    /* try { // try from 082eb017 to 082eb02f has its CatchHandler @ 082eb032 */
          _MakeUserState(this,local_40,(CUser *)local_1c);
          pGVar6 = (GameWorld *)G_GameWorld();
          GameWorld::send_all(pGVar6,local_40);
                    /* try { // try from 082eb04d to 082eb051 has its CatchHandler @ 082eb054 */
          PacketGuard::~PacketGuard(local_40);
        }
      }
      PacketGuard::~PacketGuard(local_28);
    }
    if ((local_1c == (CUserCharacInfo *)0x0) ||
       ((cVar2 = CPowerManager::IsPowerWarEventOn(), cVar2 == '\x01' &&
        (cVar2 = CUserCharacInfo::getCurCharacVill(local_1c), cVar2 == '\a')))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(int *)(this + 0x10c) < 4)) && ((param_1 == 0 || (param_1 == 1)))) {
      if (*(int *)(this + 300) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 300),'\a');
      }
      if (*(int *)(this + 0x130) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 0x130),'\a');
      }
      *(undefined4 *)(this + 0x10c) = 7;
      CloseAssault(this);
    }
    else if (*(int *)(this + 0x100) == 0) {
      if (*(int *)(this + 300) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 300),'\a');
      }
      if (*(int *)(this + 0x130) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 0x130),'\a');
      }
      *(undefined4 *)(this + 0x10c) = 7;
      CloseAssault(this);
    }
    else {
      cVar2 = _CheckPlayable(this);
      if (cVar2 != '\x01') {
        cVar2 = CPowerManager::IsPowerWarEventOn();
        if (((cVar2 == '\0') || (local_1c == (CUserCharacInfo *)0x0)) ||
           (cVar2 = CUserCharacInfo::getCurCharacVill(local_1c), cVar2 != '\a')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (((bVar1) && (3 < *(int *)(this + 0x10c))) && (*(int *)(this + 0x10c) < 5)) {
          local_44 = 0;
          local_48 = 0;
          local_4c = 0;
          cVar2 = CUser::getPowerSide((CUser *)local_1c);
          cVar2 = _CheckPowerWarInPlayer(this,(int)cVar2,2,&local_44,&local_48,&local_4c);
          if (cVar2 != '\0') {
            _SendPowerWarPointToGuildServer(this,local_1c,2,local_44,local_48,local_4c);
          }
          local_18 = (CParty *)CUser::GetParty((CUser *)local_1c);
          if (local_18 == (CParty *)0x0) {
            CUserCharacInfo::resetStraightVictories(local_1c);
          }
          else {
            CParty::resetStraightVictories(local_18);
          }
          for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
            cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
            if (cVar2 == '\0') {
              local_10 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
              cVar2 = CUser::getPowerSide(local_10);
              cVar3 = CUser::getPowerSide((CUser *)local_1c);
              if (cVar2 != cVar3) {
                _SendStraightVictories(this,local_10);
                break;
              }
            }
          }
        }
        if (*(int *)(this + 300) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 300),'\x06');
        }
        if (*(int *)(this + 0x130) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x06');
        }
        *(undefined4 *)(this + 0x10c) = 6;
        EndAssault(this);
      }
    }
  }
  return;
}
```
