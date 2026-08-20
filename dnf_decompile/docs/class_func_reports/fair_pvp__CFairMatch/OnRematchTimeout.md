# OnRematchTimeout

`_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room`

`fair_pvp::CFairMatch::OnRematchTimeout(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08565f92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08565f92  _ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room
#           fair_pvp::CFairMatch::OnRematchTimeout(PvP_Room*)
# range [0x08565f92, 0x085663a7]
08565f92 +0x000:  push   %ebp
08565f93 +0x001:  mov    %esp,%ebp
08565f95 +0x003:  push   %edi
08565f96 +0x004:  push   %esi
08565f97 +0x005:  push   %ebx
08565f98 +0x006:  sub    $0x6c,%esp
08565f9b +0x009:  mov    0xc(%ebp),%eax
08565f9e +0x00c:  mov    %eax,0x4(%esp)
08565fa2 +0x010:  mov    0x8(%ebp),%eax
08565fa5 +0x013:  mov    %eax,(%esp)
08565fa8 +0x016:  call   08565d04 <_ZN8fair_pvp10CFairMatch12CheckRematchEP8PvP_Room>  ; fair_pvp::CFairMatch::CheckRematch(PvP_Room*)
08565fad +0x01b:  movzbl %al,%edi
08565fb0 +0x01e:  mov    0xc(%ebp),%eax
08565fb3 +0x021:  mov    %eax,(%esp)
08565fb6 +0x024:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
08565fbb +0x029:  mov    %eax,%esi
08565fbd +0x02b:  mov    0xc(%ebp),%eax
08565fc0 +0x02e:  mov    %eax,(%esp)
08565fc3 +0x031:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
08565fc8 +0x036:  mov    %eax,%ebx
08565fca +0x038:  movl   $0x0,0x10(%esp)
08565fd2 +0x040:  movl   $0x0,0xc(%esp)
08565fda +0x048:  movl   $0xfd7,0x8(%esp)
08565fe2 +0x050:  movl   $&_ZZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_RoomE19__PRETTY_FUNCTION__,0x4(%esp)
08565fea +0x058:  lea    -0x34(%ebp),%eax
08565fed +0x05b:  mov    %eax,(%esp)
08565ff0 +0x05e:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
08565ff5 +0x063:  mov    %edi,0x10(%esp)
08565ff9 +0x067:  mov    %esi,0xc(%esp)
08565ffd +0x06b:  mov    %ebx,0x8(%esp)
08566001 +0x06f:  movl   $"pvp@log room(%d),%d,%d",0x4(%esp)
08566009 +0x077:  lea    -0x34(%ebp),%eax
0856600c +0x07a:  mov    %eax,(%esp)
0856600f +0x07d:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
08566014 +0x082:  mov    0xc(%ebp),%eax
08566017 +0x085:  mov    %eax,0x4(%esp)
0856601b +0x089:  mov    0x8(%ebp),%eax
0856601e +0x08c:  mov    %eax,(%esp)
08566021 +0x08f:  call   08565d04 <_ZN8fair_pvp10CFairMatch12CheckRematchEP8PvP_Room>  ; fair_pvp::CFairMatch::CheckRematch(PvP_Room*)
08566026 +0x094:  xor    $0x1,%eax
08566029 +0x097:  test   %al,%al
0856602b +0x099:  je     085662bb <+0x329>
08566031 +0x09f:  mov    0x8(%ebp),%eax
08566034 +0x0a2:  add    $0x64,%eax
08566037 +0x0a5:  mov    %eax,(%esp)
0856603a +0x0a8:  call   0856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>  ; fair_pvp::TeamInfoThird::size() const
0856603f +0x0ad:  test   %eax,%eax
08566041 +0x0af:  je     08566054 <+0xc2>
08566043 +0x0b1:  mov    0x8(%ebp),%eax
08566046 +0x0b4:  mov    0x68(%eax),%eax
08566049 +0x0b7:  test   %eax,%eax
0856604b +0x0b9:  jne    08566054 <+0xc2>
0856604d +0x0bb:  mov    $0x1,%eax
08566052 +0x0c0:  jmp    08566059 <+0xc7>
08566054 +0x0c2:  mov    $0x0,%eax
08566059 +0x0c7:  test   %al,%al
0856605b +0x0c9:  je     08566077 <+0xe5>
0856605d +0x0cb:  movl   $0x1,0x8(%esp)
08566065 +0x0d3:  mov    0xc(%ebp),%eax
08566068 +0x0d6:  mov    %eax,0x4(%esp)
0856606c +0x0da:  mov    0x8(%ebp),%eax
0856606f +0x0dd:  mov    %eax,(%esp)
08566072 +0x0e0:  call   08565d86 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM>  ; fair_pvp::CFairMatch::_PullOutRoomTeam(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM)
08566077 +0x0e5:  mov    0x8(%ebp),%eax
0856607a +0x0e8:  mov    0x20(%eax),%eax
0856607d +0x0eb:  test   %eax,%eax
0856607f +0x0ed:  je     08566097 <+0x105>
08566081 +0x0ef:  test   %eax,%eax
08566083 +0x0f1:  js     0856639b <+0x409>
08566089 +0x0f7:  cmp    $0x2,%eax
0856608c +0x0fa:  jg     0856639e <+0x40c>
08566092 +0x100:  jmp    0856618a <+0x1f8>
08566097 +0x105:  movl   $0x0,0x8(%esp)
0856609f +0x10d:  mov    0xc(%ebp),%eax
085660a2 +0x110:  mov    %eax,0x4(%esp)
085660a6 +0x114:  mov    0x8(%ebp),%eax
085660a9 +0x117:  mov    %eax,(%esp)
085660ac +0x11a:  call   08565d86 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM>  ; fair_pvp::CFairMatch::_PullOutRoomTeam(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM)
085660b1 +0x11f:  mov    0x8(%ebp),%eax
085660b4 +0x122:  add    $0x64,%eax
085660b7 +0x125:  mov    %eax,(%esp)
085660ba +0x128:  call   0856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>  ; fair_pvp::TeamInfoThird::size() const
085660bf +0x12d:  test   %eax,%eax
085660c1 +0x12f:  setne  %al
085660c4 +0x132:  test   %al,%al
085660c6 +0x134:  je     08566184 <+0x1f2>
085660cc +0x13a:  lea    -0x40(%ebp),%eax
085660cf +0x13d:  mov    %eax,(%esp)
085660d2 +0x140:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085660d7 +0x145:  movl   $0x13b,0x8(%esp)
085660df +0x14d:  movl   $0x0,0x4(%esp)
085660e7 +0x155:  lea    -0x40(%ebp),%eax
085660ea +0x158:  mov    %eax,(%esp)
085660ed +0x15b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085660f2 +0x160:  movl   $0x1,0x4(%esp)
085660fa +0x168:  lea    -0x40(%ebp),%eax
085660fd +0x16b:  mov    %eax,(%esp)
08566100 +0x16e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08566105 +0x173:  mov    0x8(%ebp),%eax
08566108 +0x176:  lea    0x64(%eax),%edx
0856610b +0x179:  lea    -0x40(%ebp),%eax
0856610e +0x17c:  mov    %eax,0x4(%esp)
08566112 +0x180:  mov    %edx,(%esp)
08566115 +0x183:  call   0856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>  ; fair_pvp::TeamInfoThird::SendToTeam(PacketGuard&)
0856611a +0x188:  mov    0x8(%ebp),%edx
0856611d +0x18b:  mov    0x8(%ebp),%eax
08566120 +0x18e:  add    $0x1c,%edx
08566123 +0x191:  lea    0x64(%eax),%ebx
08566126 +0x194:  mov    $0x12,%eax
0856612b +0x199:  mov    %edx,%edi
0856612d +0x19b:  mov    %ebx,%esi
0856612f +0x19d:  mov    %eax,%ecx
08566131 +0x19f:  rep movsl %ds:(%esi),%es:(%edi)
08566133 +0x1a1:  mov    0x8(%ebp),%eax
08566136 +0x1a4:  add    $0x1c,%eax
08566139 +0x1a7:  mov    %eax,(%esp)
0856613c +0x1aa:  call   085624de <_ZN8fair_pvp13TeamInfoThird7refreshEv>  ; fair_pvp::TeamInfoThird::refresh()
08566141 +0x1af:  mov    0x8(%ebp),%eax
08566144 +0x1b2:  add    $0x64,%eax
08566147 +0x1b5:  mov    %eax,(%esp)
0856614a +0x1b8:  call   08562582 <_ZN8fair_pvp13TeamInfoThird5resetEv>  ; fair_pvp::TeamInfoThird::reset()
0856614f +0x1bd:  mov    0x8(%ebp),%eax
08566152 +0x1c0:  movl   $0x0,0xb0(%eax)
0856615c +0x1ca:  lea    -0x40(%ebp),%eax
0856615f +0x1cd:  mov    %eax,(%esp)
08566162 +0x1d0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08566167 +0x1d5:  jmp    08566184 <+0x1f2>
08566169 +0x1d7:  mov    %edx,%ebx
0856616b +0x1d9:  mov    %eax,%esi
0856616d +0x1db:  lea    -0x40(%ebp),%eax
08566170 +0x1de:  mov    %eax,(%esp)
08566173 +0x1e1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08566178 +0x1e6:  mov    %esi,%eax
0856617a +0x1e8:  mov    %ebx,%edx
0856617c +0x1ea:  mov    %eax,(%esp)
0856617f +0x1ed:  call   08ae3750 <_Unwind_Resume>
08566184 +0x1f2:  nop
08566185 +0x1f3:  jmp    0856639f <+0x40d>
0856618a +0x1f8:  mov    0xc(%ebp),%eax
0856618d +0x1fb:  mov    %eax,(%esp)
08566190 +0x1fe:  call   085d9242 <_ZN8PvP_Room16get_manager_teamEv>  ; PvP_Room::get_manager_team()
08566195 +0x203:  mov    %eax,-0x24(%ebp)
08566198 +0x206:  mov    -0x24(%ebp),%eax
0856619b +0x209:  movl   $0x0,0xc(%esp)
085661a3 +0x211:  mov    %eax,0x8(%esp)
085661a7 +0x215:  mov    0xc(%ebp),%eax
085661aa +0x218:  mov    %eax,0x4(%esp)
085661ae +0x21c:  mov    0x8(%ebp),%eax
085661b1 +0x21f:  mov    %eax,(%esp)
085661b4 +0x222:  call   08564dea <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser>  ; fair_pvp::CFairMatch::_ReturnTeam(PvP_Room*, int, CUser*)
085661b9 +0x227:  mov    %eax,-0x20(%ebp)
085661bc +0x22a:  lea    -0x4c(%ebp),%eax
085661bf +0x22d:  mov    %eax,(%esp)
085661c2 +0x230:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085661c7 +0x235:  movl   $0x13b,0x8(%esp)
085661cf +0x23d:  movl   $0x0,0x4(%esp)
085661d7 +0x245:  lea    -0x4c(%ebp),%eax
085661da +0x248:  mov    %eax,(%esp)
085661dd +0x24b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085661e2 +0x250:  movl   $0x1,0x4(%esp)
085661ea +0x258:  lea    -0x4c(%ebp),%eax
085661ed +0x25b:  mov    %eax,(%esp)
085661f0 +0x25e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085661f5 +0x263:  cmpl   $0x0,-0x20(%ebp)
085661f9 +0x267:  je     0856620d <+0x27b>
085661fb +0x269:  lea    -0x4c(%ebp),%eax
085661fe +0x26c:  mov    %eax,0x4(%esp)
08566202 +0x270:  mov    -0x20(%ebp),%eax
08566205 +0x273:  mov    %eax,(%esp)
08566208 +0x276:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
0856620d +0x27b:  mov    0x8(%ebp),%eax
08566210 +0x27e:  lea    0x1c(%eax),%edx
08566213 +0x281:  lea    -0x4c(%ebp),%eax
08566216 +0x284:  mov    %eax,0x4(%esp)
0856621a +0x288:  mov    %edx,(%esp)
0856621d +0x28b:  call   0856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>  ; fair_pvp::TeamInfoThird::SendToTeam(PacketGuard&)
08566222 +0x290:  mov    0x8(%ebp),%eax
08566225 +0x293:  lea    0x64(%eax),%edx
08566228 +0x296:  lea    -0x4c(%ebp),%eax
0856622b +0x299:  mov    %eax,0x4(%esp)
0856622f +0x29d:  mov    %edx,(%esp)
08566232 +0x2a0:  call   0856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>  ; fair_pvp::TeamInfoThird::SendToTeam(PacketGuard&)
08566237 +0x2a5:  mov    0x8(%ebp),%eax
0856623a +0x2a8:  add    $0x1c,%eax
0856623d +0x2ab:  mov    %eax,(%esp)
08566240 +0x2ae:  call   0856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>  ; fair_pvp::TeamInfoThird::size() const
08566245 +0x2b3:  test   %eax,%eax
08566247 +0x2b5:  sete   %al
0856624a +0x2b8:  test   %al,%al
0856624c +0x2ba:  je     08566267 <+0x2d5>
0856624e +0x2bc:  mov    0x8(%ebp),%edx
08566251 +0x2bf:  mov    0x8(%ebp),%eax
08566254 +0x2c2:  add    $0x1c,%edx
08566257 +0x2c5:  lea    0x64(%eax),%ebx
0856625a +0x2c8:  mov    $0x12,%eax
0856625f +0x2cd:  mov    %edx,%edi
08566261 +0x2cf:  mov    %ebx,%esi
08566263 +0x2d1:  mov    %eax,%ecx
08566265 +0x2d3:  rep movsl %ds:(%esi),%es:(%edi)
08566267 +0x2d5:  mov    0x8(%ebp),%eax
0856626a +0x2d8:  add    $0x1c,%eax
0856626d +0x2db:  mov    %eax,(%esp)
08566270 +0x2de:  call   085624de <_ZN8fair_pvp13TeamInfoThird7refreshEv>  ; fair_pvp::TeamInfoThird::refresh()
08566275 +0x2e3:  mov    0x8(%ebp),%eax
08566278 +0x2e6:  add    $0x64,%eax
0856627b +0x2e9:  mov    %eax,(%esp)
0856627e +0x2ec:  call   08562582 <_ZN8fair_pvp13TeamInfoThird5resetEv>  ; fair_pvp::TeamInfoThird::reset()
08566283 +0x2f1:  mov    0x8(%ebp),%eax
08566286 +0x2f4:  movl   $0x0,0xb0(%eax)
08566290 +0x2fe:  lea    -0x4c(%ebp),%eax
08566293 +0x301:  mov    %eax,(%esp)
08566296 +0x304:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0856629b +0x309:  jmp    0856639f <+0x40d>
085662a0 +0x30e:  mov    %edx,%ebx
085662a2 +0x310:  mov    %eax,%esi
085662a4 +0x312:  lea    -0x4c(%ebp),%eax
085662a7 +0x315:  mov    %eax,(%esp)
085662aa +0x318:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085662af +0x31d:  mov    %esi,%eax
085662b1 +0x31f:  mov    %ebx,%edx
085662b3 +0x321:  mov    %eax,(%esp)
085662b6 +0x324:  call   08ae3750 <_Unwind_Resume>
085662bb +0x329:  mov    0x8(%ebp),%eax
085662be +0x32c:  add    $0x1c,%eax
085662c1 +0x32f:  mov    %eax,(%esp)
085662c4 +0x332:  call   085624de <_ZN8fair_pvp13TeamInfoThird7refreshEv>  ; fair_pvp::TeamInfoThird::refresh()
085662c9 +0x337:  mov    0x8(%ebp),%eax
085662cc +0x33a:  add    $0x64,%eax
085662cf +0x33d:  mov    %eax,(%esp)
085662d2 +0x340:  call   085624de <_ZN8fair_pvp13TeamInfoThird7refreshEv>  ; fair_pvp::TeamInfoThird::refresh()
085662d7 +0x345:  lea    -0x58(%ebp),%eax
085662da +0x348:  mov    %eax,(%esp)
085662dd +0x34b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085662e2 +0x350:  mov    0xc(%ebp),%eax
085662e5 +0x353:  mov    %eax,(%esp)
085662e8 +0x356:  call   085d6430 <_ZN8PvP_Room12battle_resetEv>  ; PvP_Room::battle_reset()
085662ed +0x35b:  movl   $0x0,-0x1c(%ebp)
085662f4 +0x362:  jmp    08566335 <+0x3a3>
085662f6 +0x364:  mov    -0x1c(%ebp),%eax
085662f9 +0x367:  mov    %eax,0x4(%esp)
085662fd +0x36b:  mov    0xc(%ebp),%eax
08566300 +0x36e:  mov    %eax,(%esp)
08566303 +0x371:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
08566308 +0x376:  test   %eax,%eax
0856630a +0x378:  setne  %al
0856630d +0x37b:  test   %al,%al
0856630f +0x37d:  je     08566331 <+0x39f>
08566311 +0x37f:  mov    0xc(%ebp),%eax
08566314 +0x382:  lea    0x620(%eax),%edx
0856631a +0x388:  movl   $0x1,0x8(%esp)
08566322 +0x390:  mov    -0x1c(%ebp),%eax
08566325 +0x393:  mov    %eax,0x4(%esp)
08566329 +0x397:  mov    %edx,(%esp)
0856632c +0x39a:  call   085de252 <_ZN15CRelayBattleMgr7OnReadyEib>  ; CRelayBattleMgr::OnReady(int, bool)
08566331 +0x39f:  addl   $0x1,-0x1c(%ebp)
08566335 +0x3a3:  cmpl   $0x7,-0x1c(%ebp)
08566339 +0x3a7:  setle  %al
0856633c +0x3aa:  test   %al,%al
0856633e +0x3ac:  jne    085662f6 <+0x364>
08566340 +0x3ae:  mov    0xc(%ebp),%eax
08566343 +0x3b1:  mov    %eax,(%esp)
08566346 +0x3b4:  call   085d8c3a <_ZN8PvP_Room9start_pvpEv>  ; PvP_Room::start_pvp()
0856634b +0x3b9:  lea    -0x58(%ebp),%eax
0856634e +0x3bc:  mov    %eax,0x4(%esp)
08566352 +0x3c0:  mov    0xc(%ebp),%eax
08566355 +0x3c3:  mov    %eax,(%esp)
08566358 +0x3c6:  call   085dbd3a <_ZN8PvP_Room15make_state_infoEPc>  ; PvP_Room::make_state_info(char*)
0856635d +0x3cb:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08566362 +0x3d0:  lea    -0x58(%ebp),%edx
08566365 +0x3d3:  mov    %edx,0x4(%esp)
08566369 +0x3d7:  mov    %eax,(%esp)
0856636c +0x3da:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08566371 +0x3df:  jmp    0856638e <+0x3fc>
08566373 +0x3e1:  mov    %edx,%ebx
08566375 +0x3e3:  mov    %eax,%esi
08566377 +0x3e5:  lea    -0x58(%ebp),%eax
0856637a +0x3e8:  mov    %eax,(%esp)
0856637d +0x3eb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08566382 +0x3f0:  mov    %esi,%eax
08566384 +0x3f2:  mov    %ebx,%edx
08566386 +0x3f4:  mov    %eax,(%esp)
08566389 +0x3f7:  call   08ae3750 <_Unwind_Resume>
0856638e +0x3fc:  lea    -0x58(%ebp),%eax
08566391 +0x3ff:  mov    %eax,(%esp)
08566394 +0x402:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08566399 +0x407:  jmp    0856639f <+0x40d>
0856639b +0x409:  nop
0856639c +0x40a:  jmp    0856639f <+0x40d>
0856639e +0x40c:  nop
0856639f +0x40d:  add    $0x6c,%esp
085663a2 +0x410:  pop    %ebx
085663a3 +0x411:  pop    %esi
085663a4 +0x412:  pop    %edi
085663a5 +0x413:  pop    %ebp
085663a6 +0x414:  ret
085663a7 +0x415:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnRematchTimeout @ 0x8565f92

/* fair_pvp::CFairMatch::OnRematchTimeout(PvP_Room*) */

void __thiscall fair_pvp::CFairMatch::OnRematchTimeout(CFairMatch *this,PvP_Room *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  GameWorld *this_00;
  CFairMatch *pCVar7;
  CFairMatch *pCVar8;
  byte bVar9;
  PacketGuard local_5c [12];
  PacketGuard local_50 [12];
  PacketGuard local_44 [12];
  CSwitchLog local_38 [16];
  int local_28;
  PvP_Room *local_24;
  int local_20;
  
  bVar9 = 0;
  uVar3 = CheckRematch(this,param_1);
  uVar4 = PvP_Room::get_pvp_battle_mode(param_1);
  uVar5 = PvP_Room::get_index(param_1);
  CSwitchLog::CSwitchLog
            (local_38,"virtual void fair_pvp::CFairMatch::OnRematchTimeout(PvP_Room*)",0xfd7,0,0);
  CSwitchLog::operator()(local_38,"pvp@log room(%d),%d,%d",uVar5,uVar4,uVar3 & 0xff);
  cVar2 = CheckRematch(this,param_1);
  if (cVar2 == '\x01') {
    TeamInfoThird::refresh((TeamInfoThird *)(this + 0x1c));
    TeamInfoThird::refresh((TeamInfoThird *)(this + 100));
    PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 085662e8 to 08566370 has its CatchHandler @ 08566373 */
    PvP_Room::battle_reset(param_1);
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      iVar6 = PvP_Room::get_user_seat(param_1,local_20);
      if (iVar6 != 0) {
        CRelayBattleMgr::OnReady((CRelayBattleMgr *)(param_1 + 0x620),local_20,true);
      }
    }
    PvP_Room::start_pvp(param_1);
    PvP_Room::make_state_info(param_1,(char *)local_5c);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_5c);
    PacketGuard::~PacketGuard(local_5c);
  }
  else {
    iVar6 = TeamInfoThird::size((TeamInfoThird *)(this + 100));
    if ((iVar6 == 0) || (*(int *)(this + 0x68) != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      _PullOutRoomTeam(this,param_1,1);
    }
    iVar6 = *(int *)(this + 0x20);
    if (iVar6 == 0) {
      _PullOutRoomTeam(this,param_1,0);
      iVar6 = TeamInfoThird::size((TeamInfoThird *)(this + 100));
      if (iVar6 != 0) {
        PacketGuard::PacketGuard(local_44);
                    /* try { // try from 085660ed to 08566119 has its CatchHandler @ 08566169 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x13b);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
        TeamInfoThird::SendToTeam((TeamInfoThird *)(this + 100),local_44);
        pCVar7 = this + 100;
        pCVar8 = this + 0x1c;
        for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pCVar8 = *(undefined4 *)pCVar7;
          pCVar7 = pCVar7 + (uint)bVar9 * -8 + 4;
          pCVar8 = pCVar8 + (uint)bVar9 * -8 + 4;
        }
        TeamInfoThird::refresh((TeamInfoThird *)(this + 0x1c));
        TeamInfoThird::reset((TeamInfoThird *)(this + 100));
        *(undefined4 *)(this + 0xb0) = 0;
        PacketGuard::~PacketGuard(local_44);
      }
    }
    else if ((-1 < iVar6) && (iVar6 < 3)) {
      local_28 = PvP_Room::get_manager_team(param_1);
      local_24 = (PvP_Room *)_ReturnTeam(this,param_1,local_28,(CUser *)0x0);
      PacketGuard::PacketGuard(local_50);
                    /* try { // try from 085661dd to 08566236 has its CatchHandler @ 085662a0 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x13b);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      if (local_24 != (PvP_Room *)0x0) {
        PvP_Room::send_to_pvp(local_24,local_50);
      }
      TeamInfoThird::SendToTeam((TeamInfoThird *)(this + 0x1c),local_50);
      TeamInfoThird::SendToTeam((TeamInfoThird *)(this + 100),local_50);
      iVar6 = TeamInfoThird::size((TeamInfoThird *)(this + 0x1c));
      if (iVar6 == 0) {
        pCVar7 = this + 100;
        pCVar8 = this + 0x1c;
        for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pCVar8 = *(undefined4 *)pCVar7;
          pCVar7 = pCVar7 + (uint)bVar9 * -8 + 4;
          pCVar8 = pCVar8 + (uint)bVar9 * -8 + 4;
        }
      }
      TeamInfoThird::refresh((TeamInfoThird *)(this + 0x1c));
      TeamInfoThird::reset((TeamInfoThird *)(this + 100));
      *(undefined4 *)(this + 0xb0) = 0;
      PacketGuard::~PacketGuard(local_50);
    }
  }
  return;
}
```
