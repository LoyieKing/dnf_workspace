# game_start

`_ZN6CParty10game_startEP5CUser`

`CParty::game_start(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859d718` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859d718  _ZN6CParty10game_startEP5CUser
#           CParty::game_start(CUser*)
# range [0x0859d718, 0x0859e0d1]
0859d718 +0x000:  push   %ebp
0859d719 +0x001:  mov    %esp,%ebp
0859d71b +0x003:  push   %esi
0859d71c +0x004:  push   %ebx
0859d71d +0x005:  sub    $0xb0,%esp
0859d723 +0x00b:  mov    0x8(%ebp),%eax
0859d726 +0x00e:  movzbl 0x6a(%eax),%eax
0859d72a +0x012:  cmp    $0x2,%al
0859d72c +0x014:  je     0859e0c6 <+0x9ae>
0859d732 +0x01a:  lea    -0x54(%ebp),%eax
0859d735 +0x01d:  mov    %eax,(%esp)
0859d738 +0x020:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0859d73d +0x025:  lea    -0x54(%ebp),%eax
0859d740 +0x028:  mov    %eax,(%esp)
0859d743 +0x02b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0859d748 +0x030:  movl   $0x2,0x8(%esp)
0859d750 +0x038:  movl   $0x0,0x4(%esp)
0859d758 +0x040:  lea    -0x54(%ebp),%eax
0859d75b +0x043:  mov    %eax,(%esp)
0859d75e +0x046:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0859d763 +0x04b:  movl   $0x1,0x4(%esp)
0859d76b +0x053:  lea    -0x54(%ebp),%eax
0859d76e +0x056:  mov    %eax,(%esp)
0859d771 +0x059:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859d776 +0x05e:  mov    0x8(%ebp),%eax
0859d779 +0x061:  mov    %eax,(%esp)
0859d77c +0x064:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859d781 +0x069:  mov    %eax,0x4(%esp)
0859d785 +0x06d:  lea    -0x54(%ebp),%eax
0859d788 +0x070:  mov    %eax,(%esp)
0859d78b +0x073:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859d790 +0x078:  mov    0x8(%ebp),%eax
0859d793 +0x07b:  movb   $0x0,0x11a(%eax)
0859d79a +0x082:  mov    0x8(%ebp),%eax
0859d79d +0x085:  mov    %eax,(%esp)
0859d7a0 +0x088:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859d7a5 +0x08d:  mov    %eax,(%esp)
0859d7a8 +0x090:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0859d7ad +0x095:  mov    0x8(%ebp),%edx
0859d7b0 +0x098:  mov    %eax,0x144(%edx)
0859d7b6 +0x09e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0859d7bd +0x0a5:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0859d7c2 +0x0aa:  mov    0x8(%ebp),%edx
0859d7c5 +0x0ad:  mov    %eax,0x185c(%edx)
0859d7cb +0x0b3:  lea    -0x60(%ebp),%eax
0859d7ce +0x0b6:  mov    %eax,(%esp)
0859d7d1 +0x0b9:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0859d7d6 +0x0be:  movl   $0x3,0x8(%esp)
0859d7de +0x0c6:  movl   $0x0,0x4(%esp)
0859d7e6 +0x0ce:  lea    -0x60(%ebp),%eax
0859d7e9 +0x0d1:  mov    %eax,(%esp)
0859d7ec +0x0d4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0859d7f1 +0x0d9:  movl   $0x0,-0x40(%ebp)
0859d7f8 +0x0e0:  movl   $0x0,-0x64(%ebp)
0859d7ff +0x0e7:  lea    -0x60(%ebp),%eax
0859d802 +0x0ea:  mov    %eax,(%esp)
0859d805 +0x0ed:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0859d80a +0x0f2:  mov    %eax,-0x64(%ebp)
0859d80d +0x0f5:  mov    -0x40(%ebp),%eax
0859d810 +0x0f8:  mov    %eax,0x4(%esp)
0859d814 +0x0fc:  lea    -0x60(%ebp),%eax
0859d817 +0x0ff:  mov    %eax,(%esp)
0859d81a +0x102:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859d81f +0x107:  movb   $0x0,-0x3a(%ebp)
0859d823 +0x10b:  mov    0xc(%ebp),%eax
0859d826 +0x10e:  mov    %eax,(%esp)
0859d829 +0x111:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
0859d82e +0x116:  mov    %al,-0x39(%ebp)
0859d831 +0x119:  movl   $0x0,0x4(%esp)
0859d839 +0x121:  mov    0xc(%ebp),%eax
0859d83c +0x124:  mov    %eax,(%esp)
0859d83f +0x127:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
0859d844 +0x12c:  mov    %eax,-0x38(%ebp)
0859d847 +0x12f:  movl   $0x0,-0x24(%ebp)
0859d84e +0x136:  jmp    0859db2e <+0x416>
0859d853 +0x13b:  mov    -0x24(%ebp),%eax
0859d856 +0x13e:  mov    %eax,0x4(%esp)
0859d85a +0x142:  mov    0x8(%ebp),%eax
0859d85d +0x145:  mov    %eax,(%esp)
0859d860 +0x148:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859d865 +0x14d:  test   %al,%al
0859d867 +0x14f:  je     0859db2a <+0x412>
0859d86d +0x155:  mov    -0x24(%ebp),%edx
0859d870 +0x158:  mov    0x8(%ebp),%ecx
0859d873 +0x15b:  mov    %edx,%eax
0859d875 +0x15d:  add    %eax,%eax
0859d877 +0x15f:  add    %edx,%eax
0859d879 +0x161:  shl    $0x3,%eax
0859d87c +0x164:  lea    (%ecx,%eax,1),%eax
0859d87f +0x167:  add    $0x78,%eax
0859d882 +0x16a:  mov    (%eax),%eax
0859d884 +0x16c:  mov    %eax,(%esp)
0859d887 +0x16f:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
0859d88c +0x174:  mov    %al,-0x1d(%ebp)
0859d88f +0x177:  mov    -0x24(%ebp),%edx
0859d892 +0x17a:  mov    0x8(%ebp),%ecx
0859d895 +0x17d:  mov    %edx,%eax
0859d897 +0x17f:  add    %eax,%eax
0859d899 +0x181:  add    %edx,%eax
0859d89b +0x183:  shl    $0x3,%eax
0859d89e +0x186:  lea    (%ecx,%eax,1),%eax
0859d8a1 +0x189:  add    $0x78,%eax
0859d8a4 +0x18c:  mov    (%eax),%eax
0859d8a6 +0x18e:  movl   $0x0,0x4(%esp)
0859d8ae +0x196:  mov    %eax,(%esp)
0859d8b1 +0x199:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
0859d8b6 +0x19e:  mov    %eax,-0x1c(%ebp)
0859d8b9 +0x1a1:  movzbl -0x39(%ebp),%eax
0859d8bd +0x1a5:  cmp    -0x1d(%ebp),%al
0859d8c0 +0x1a8:  jne    0859d8ca <+0x1b2>
0859d8c2 +0x1aa:  mov    -0x38(%ebp),%eax
0859d8c5 +0x1ad:  cmp    -0x1c(%ebp),%eax
0859d8c8 +0x1b0:  je     0859d8e3 <+0x1cb>
0859d8ca +0x1b2:  mov    0x8(%ebp),%eax
0859d8cd +0x1b5:  mov    %eax,(%esp)
0859d8d0 +0x1b8:  call   0822d952 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ffc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ffc
0859d8d5 +0x1bd:  xor    $0x1,%eax
0859d8d8 +0x1c0:  test   %al,%al
0859d8da +0x1c2:  je     0859d8e3 <+0x1cb>
0859d8dc +0x1c4:  mov    $0x1,%eax
0859d8e1 +0x1c9:  jmp    0859d8e8 <+0x1d0>
0859d8e3 +0x1cb:  mov    $0x0,%eax
0859d8e8 +0x1d0:  test   %al,%al
0859d8ea +0x1d2:  je     0859d989 <+0x271>
0859d8f0 +0x1d8:  mov    0x8(%ebp),%eax
0859d8f3 +0x1db:  movzwl 0xc4c(%eax),%eax
0859d8fa +0x1e2:  test   %ax,%ax
0859d8fd +0x1e5:  jne    0859d989 <+0x271>
0859d903 +0x1eb:  movsbl -0x1d(%ebp),%esi
0859d907 +0x1ef:  movsbl -0x39(%ebp),%ebx
0859d90b +0x1f3:  mov    -0x24(%ebp),%edx
0859d90e +0x1f6:  mov    0x8(%ebp),%ecx
0859d911 +0x1f9:  mov    %edx,%eax
0859d913 +0x1fb:  add    %eax,%eax
0859d915 +0x1fd:  add    %edx,%eax
0859d917 +0x1ff:  shl    $0x3,%eax
0859d91a +0x202:  lea    (%ecx,%eax,1),%eax
0859d91d +0x205:  add    $0x78,%eax
0859d920 +0x208:  mov    (%eax),%eax
0859d922 +0x20a:  mov    %eax,(%esp)
0859d925 +0x20d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0859d92a +0x212:  movl   $0x0,0x4(%esp)
0859d932 +0x21a:  mov    %eax,(%esp)
0859d935 +0x21d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0859d93a +0x222:  mov    -0x1c(%ebp),%edx
0859d93d +0x225:  mov    %edx,0x24(%esp)
0859d941 +0x229:  mov    -0x38(%ebp),%edx
0859d944 +0x22c:  mov    %edx,0x20(%esp)
0859d948 +0x230:  mov    %esi,0x1c(%esp)
0859d94c +0x234:  mov    %ebx,0x18(%esp)
0859d950 +0x238:  mov    %eax,0x14(%esp)
0859d954 +0x23c:  movl   $"[HACK_VILL_AREA] m_id : %s, Vill(%d,%d), Area(%d,%d)",0x10(%esp)
0859d95c +0x244:  movl   $0x84c,0xc(%esp)
0859d964 +0x24c:  movl   $&_ZZN6CParty10game_startEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0859d96c +0x254:  movl   $"party.cpp",0x4(%esp)
0859d974 +0x25c:  movl   $0x1,(%esp)
0859d97b +0x263:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0859d980 +0x268:  movb   $0x1,-0x3a(%ebp)
0859d984 +0x26c:  jmp    0859db3d <+0x425>
0859d989 +0x271:  mov    -0x24(%ebp),%eax
0859d98c +0x274:  mov    0x8(%ebp),%edx
0859d98f +0x277:  movb   $0x1,0x380(%edx,%eax,1)
0859d997 +0x27f:  mov    -0x24(%ebp),%eax
0859d99a +0x282:  mov    0x8(%ebp),%edx
0859d99d +0x285:  movb   $0x1,0x384(%edx,%eax,1)
0859d9a5 +0x28d:  mov    -0x24(%ebp),%eax
0859d9a8 +0x290:  mov    0x8(%ebp),%edx
0859d9ab +0x293:  movb   $0x0,0x388(%edx,%eax,1)
0859d9b3 +0x29b:  mov    -0x24(%ebp),%eax
0859d9b6 +0x29e:  mov    0x8(%ebp),%edx
0859d9b9 +0x2a1:  movb   $0x0,0x38c(%edx,%eax,1)
0859d9c1 +0x2a9:  lea    -0x54(%ebp),%ecx
0859d9c4 +0x2ac:  mov    -0x24(%ebp),%edx
0859d9c7 +0x2af:  mov    0x8(%ebp),%ebx
0859d9ca +0x2b2:  mov    %edx,%eax
0859d9cc +0x2b4:  add    %eax,%eax
0859d9ce +0x2b6:  add    %edx,%eax
0859d9d0 +0x2b8:  shl    $0x3,%eax
0859d9d3 +0x2bb:  lea    (%ebx,%eax,1),%eax
0859d9d6 +0x2be:  add    $0x78,%eax
0859d9d9 +0x2c1:  mov    (%eax),%eax
0859d9db +0x2c3:  movl   $0x1,0x8(%esp)
0859d9e3 +0x2cb:  mov    %ecx,0x4(%esp)
0859d9e7 +0x2cf:  mov    %eax,(%esp)
0859d9ea +0x2d2:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0859d9ef +0x2d7:  mov    -0x24(%ebp),%edx
0859d9f2 +0x2da:  mov    0x8(%ebp),%ecx
0859d9f5 +0x2dd:  mov    %edx,%eax
0859d9f7 +0x2df:  add    %eax,%eax
0859d9f9 +0x2e1:  add    %edx,%eax
0859d9fb +0x2e3:  shl    $0x3,%eax
0859d9fe +0x2e6:  lea    (%ecx,%eax,1),%eax
0859da01 +0x2e9:  add    $0x78,%eax
0859da04 +0x2ec:  mov    (%eax),%ebx
0859da06 +0x2ee:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0859da0b +0x2f3:  mov    %ebx,0x4(%esp)
0859da0f +0x2f7:  mov    %eax,(%esp)
0859da12 +0x2fa:  call   086c67a0 <_ZN9GameWorld12goto_dungeonEP5CUser>  ; GameWorld::goto_dungeon(CUser*)
0859da17 +0x2ff:  mov    -0x24(%ebp),%edx
0859da1a +0x302:  mov    0x8(%ebp),%ecx
0859da1d +0x305:  mov    %edx,%eax
0859da1f +0x307:  add    %eax,%eax
0859da21 +0x309:  add    %edx,%eax
0859da23 +0x30b:  shl    $0x3,%eax
0859da26 +0x30e:  lea    (%ecx,%eax,1),%eax
0859da29 +0x311:  add    $0x78,%eax
0859da2c +0x314:  mov    (%eax),%eax
0859da2e +0x316:  mov    %eax,(%esp)
0859da31 +0x319:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0859da36 +0x31e:  cmp    $0x5,%eax
0859da39 +0x321:  sete   %al
0859da3c +0x324:  test   %al,%al
0859da3e +0x326:  je     0859da88 <+0x370>
0859da40 +0x328:  mov    -0x24(%ebp),%edx
0859da43 +0x32b:  mov    0x8(%ebp),%ecx
0859da46 +0x32e:  mov    %edx,%eax
0859da48 +0x330:  add    %eax,%eax
0859da4a +0x332:  add    %edx,%eax
0859da4c +0x334:  shl    $0x3,%eax
0859da4f +0x337:  lea    (%ecx,%eax,1),%eax
0859da52 +0x33a:  add    $0x78,%eax
0859da55 +0x33d:  mov    (%eax),%eax
0859da57 +0x33f:  mov    %eax,(%esp)
0859da5a +0x342:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0859da5f +0x347:  movzwl %ax,%eax
0859da62 +0x34a:  mov    %eax,0x4(%esp)
0859da66 +0x34e:  lea    -0x60(%ebp),%eax
0859da69 +0x351:  mov    %eax,(%esp)
0859da6c +0x354:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859da71 +0x359:  movl   $0x1,0x4(%esp)
0859da79 +0x361:  lea    -0x60(%ebp),%eax
0859da7c +0x364:  mov    %eax,(%esp)
0859da7f +0x367:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859da84 +0x36c:  addl   $0x1,-0x40(%ebp)
0859da88 +0x370:  mov    -0x24(%ebp),%edx
0859da8b +0x373:  mov    0x8(%ebp),%ecx
0859da8e +0x376:  mov    %edx,%eax
0859da90 +0x378:  add    %eax,%eax
0859da92 +0x37a:  add    %edx,%eax
0859da94 +0x37c:  shl    $0x3,%eax
0859da97 +0x37f:  lea    (%ecx,%eax,1),%eax
0859da9a +0x382:  add    $0x78,%eax
0859da9d +0x385:  mov    (%eax),%eax
0859da9f +0x387:  mov    %eax,(%esp)
0859daa2 +0x38a:  call   0822fe3e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54e8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54e8
0859daa7 +0x38f:  mov    %eax,-0x48(%ebp)
0859daaa +0x392:  cmpl   $0xffffffff,-0x48(%ebp)
0859daae +0x396:  je     0859dafe <+0x3e6>
0859dab0 +0x398:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0859dab5 +0x39d:  mov    -0x48(%ebp),%edx
0859dab8 +0x3a0:  mov    %edx,0x4(%esp)
0859dabc +0x3a4:  mov    %eax,(%esp)
0859dabf +0x3a7:  call   08294d8a <_ZN12CGameManager13GetTradeSpaceEi>  ; CGameManager::GetTradeSpace(int)
0859dac4 +0x3ac:  mov    %eax,-0x44(%ebp)
0859dac7 +0x3af:  cmpl   $0x0,-0x44(%ebp)
0859dacb +0x3b3:  je     0859dafe <+0x3e6>
0859dacd +0x3b5:  mov    -0x44(%ebp),%eax
0859dad0 +0x3b8:  mov    %eax,(%esp)
0859dad3 +0x3bb:  call   0852993c <_ZN11CTradeSpace23check_trade_possibilityEv>  ; CTradeSpace::check_trade_possibility()
0859dad8 +0x3c0:  xor    $0x1,%eax
0859dadb +0x3c3:  test   %al,%al
0859dadd +0x3c5:  je     0859dafe <+0x3e6>
0859dadf +0x3c7:  mov    -0x44(%ebp),%eax
0859dae2 +0x3ca:  mov    %eax,(%esp)
0859dae5 +0x3cd:  call   0852effa <_ZN11CTradeSpace12cancel_tradeEv>  ; CTradeSpace::cancel_trade()
0859daea +0x3d2:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0859daef +0x3d7:  mov    -0x44(%ebp),%edx
0859daf2 +0x3da:  mov    %edx,0x4(%esp)
0859daf6 +0x3de:  mov    %eax,(%esp)
0859daf9 +0x3e1:  call   08294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>  ; CGameManager::PutTradeSpace(CTradeSpace*)
0859dafe +0x3e6:  mov    -0x24(%ebp),%edx
0859db01 +0x3e9:  mov    0x8(%ebp),%ecx
0859db04 +0x3ec:  mov    %edx,%eax
0859db06 +0x3ee:  add    %eax,%eax
0859db08 +0x3f0:  add    %edx,%eax
0859db0a +0x3f2:  shl    $0x3,%eax
0859db0d +0x3f5:  lea    (%ecx,%eax,1),%eax
0859db10 +0x3f8:  add    $0x78,%eax
0859db13 +0x3fb:  mov    (%eax),%eax
0859db15 +0x3fd:  mov    %eax,(%esp)
0859db18 +0x400:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0859db1d +0x405:  add    $0x75d8,%eax
0859db22 +0x40a:  mov    %eax,(%esp)
0859db25 +0x40d:  call   0814aa16 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7b5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7b5
0859db2a +0x412:  addl   $0x1,-0x24(%ebp)
0859db2e +0x416:  cmpl   $0x3,-0x24(%ebp)
0859db32 +0x41a:  setle  %al
0859db35 +0x41d:  test   %al,%al
0859db37 +0x41f:  jne    0859d853 <+0x13b>
0859db3d +0x425:  cmpb   $0x0,-0x3a(%ebp)
0859db41 +0x429:  je     0859dc08 <+0x4f0>
0859db47 +0x42f:  movl   $0x0,-0x18(%ebp)
0859db4e +0x436:  jmp    0859dbef <+0x4d7>
0859db53 +0x43b:  mov    -0x18(%ebp),%eax
0859db56 +0x43e:  mov    %eax,0x4(%esp)
0859db5a +0x442:  mov    0x8(%ebp),%eax
0859db5d +0x445:  mov    %eax,(%esp)
0859db60 +0x448:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0859db65 +0x44d:  mov    %eax,-0x14(%ebp)
0859db68 +0x450:  cmpl   $0x0,-0x14(%ebp)
0859db6c +0x454:  je     0859dbeb <+0x4d3>
0859db6e +0x456:  movsbl -0x39(%ebp),%ebx
0859db72 +0x45a:  mov    -0x14(%ebp),%eax
0859db75 +0x45d:  mov    %eax,(%esp)
0859db78 +0x460:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0859db7d +0x465:  movl   $0x0,0x4(%esp)
0859db85 +0x46d:  mov    %eax,(%esp)
0859db88 +0x470:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0859db8d +0x475:  mov    -0x38(%ebp),%edx
0859db90 +0x478:  mov    %edx,0x1c(%esp)
0859db94 +0x47c:  mov    %ebx,0x18(%esp)
0859db98 +0x480:  mov    %eax,0x14(%esp)
0859db9c +0x484:  movl   $"[HACK_VILL_AREA] m_id : %s, Vill(%d), Area(%d)",0x10(%esp)
0859dba4 +0x48c:  movl   $0x88a,0xc(%esp)
0859dbac +0x494:  movl   $&_ZZN6CParty10game_startEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0859dbb4 +0x49c:  movl   $"party.cpp",0x4(%esp)
0859dbbc +0x4a4:  movl   $0x1,(%esp)
0859dbc3 +0x4ab:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0859dbc8 +0x4b0:  movl   $0x0,0xc(%esp)
0859dbd0 +0x4b8:  movl   $0x1,0x8(%esp)
0859dbd8 +0x4c0:  movl   $0x18,0x4(%esp)
0859dbe0 +0x4c8:  mov    -0x14(%ebp),%eax
0859dbe3 +0x4cb:  mov    %eax,(%esp)
0859dbe6 +0x4ce:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
0859dbeb +0x4d3:  addl   $0x1,-0x18(%ebp)
0859dbef +0x4d7:  cmpl   $0x3,-0x18(%ebp)
0859dbf3 +0x4db:  setle  %al
0859dbf6 +0x4de:  test   %al,%al
0859dbf8 +0x4e0:  jne    0859db53 <+0x43b>
0859dbfe +0x4e6:  mov    $0x0,%ebx
0859dc03 +0x4eb:  jmp    0859e091 <+0x979>
0859dc08 +0x4f0:  mov    -0x40(%ebp),%eax
0859dc0b +0x4f3:  mov    %eax,0x8(%esp)
0859dc0f +0x4f7:  lea    -0x64(%ebp),%eax
0859dc12 +0x4fa:  mov    %eax,0x4(%esp)
0859dc16 +0x4fe:  lea    -0x60(%ebp),%eax
0859dc19 +0x501:  mov    %eax,(%esp)
0859dc1c +0x504:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0859dc21 +0x509:  movl   $0x1,0x4(%esp)
0859dc29 +0x511:  lea    -0x60(%ebp),%eax
0859dc2c +0x514:  mov    %eax,(%esp)
0859dc2f +0x517:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0859dc34 +0x51c:  mov    0x8(%ebp),%eax
0859dc37 +0x51f:  mov    %eax,(%esp)
0859dc3a +0x522:  call   085b6410 <_ZN6CParty16IsExistInvisibleEv>  ; CParty::IsExistInvisible()
0859dc3f +0x527:  test   %al,%al
0859dc41 +0x529:  je     0859dc57 <+0x53f>
0859dc43 +0x52b:  lea    -0x60(%ebp),%eax
0859dc46 +0x52e:  mov    %eax,0x4(%esp)
0859dc4a +0x532:  mov    0x8(%ebp),%eax
0859dc4d +0x535:  mov    %eax,(%esp)
0859dc50 +0x538:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0859dc55 +0x53d:  jmp    0859dc9c <+0x584>
0859dc57 +0x53f:  mov    0x8(%ebp),%eax
0859dc5a +0x542:  mov    %eax,(%esp)
0859dc5d +0x545:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0859dc62 +0x54a:  mov    %eax,(%esp)
0859dc65 +0x54d:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
0859dc6a +0x552:  cmp    $0x1,%eax
0859dc6d +0x555:  setne  %al
0859dc70 +0x558:  test   %al,%al
0859dc72 +0x55a:  je     0859dc8a <+0x572>
0859dc74 +0x55c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0859dc79 +0x561:  lea    -0x60(%ebp),%edx
0859dc7c +0x564:  mov    %edx,0x4(%esp)
0859dc80 +0x568:  mov    %eax,(%esp)
0859dc83 +0x56b:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0859dc88 +0x570:  jmp    0859dc9c <+0x584>
0859dc8a +0x572:  lea    -0x60(%ebp),%eax
0859dc8d +0x575:  mov    %eax,0x4(%esp)
0859dc91 +0x579:  mov    0x8(%ebp),%eax
0859dc94 +0x57c:  mov    %eax,(%esp)
0859dc97 +0x57f:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0859dc9c +0x584:  movl   $0x1,0x4(%esp)
0859dca4 +0x58c:  lea    -0x54(%ebp),%eax
0859dca7 +0x58f:  mov    %eax,(%esp)
0859dcaa +0x592:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0859dcaf +0x597:  lea    -0x54(%ebp),%eax
0859dcb2 +0x59a:  mov    %eax,0x4(%esp)
0859dcb6 +0x59e:  mov    0x8(%ebp),%eax
0859dcb9 +0x5a1:  mov    %eax,(%esp)
0859dcbc +0x5a4:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0859dcc1 +0x5a9:  mov    0x8(%ebp),%eax
0859dcc4 +0x5ac:  mov    %eax,(%esp)
0859dcc7 +0x5af:  call   0859cdbc <_ZN6CParty8set_hostEv>  ; CParty::set_host()
0859dccc +0x5b4:  mov    0x8(%ebp),%eax
0859dccf +0x5b7:  mov    %eax,(%esp)
0859dcd2 +0x5ba:  call   0859cdd2 <_ZN6CParty14send_host_infoEv>  ; CParty::send_host_info()
0859dcd7 +0x5bf:  mov    0x8(%ebp),%eax
0859dcda +0x5c2:  movb   $0x0,0x1864(%eax)
0859dce1 +0x5c9:  mov    0x8(%ebp),%eax
0859dce4 +0x5cc:  movl   $0x0,0x1868(%eax)
0859dcee +0x5d6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0859dcf3 +0x5db:  mov    0xc(%ebp),%edx
0859dcf6 +0x5de:  mov    %edx,0x4(%esp)
0859dcfa +0x5e2:  mov    %eax,(%esp)
0859dcfd +0x5e5:  call   086cebe0 <_ZN9GameWorld16GetWorldMapIndexEP5CUser>  ; GameWorld::GetWorldMapIndex(CUser*)
0859dd02 +0x5ea:  mov    %eax,-0x34(%ebp)
0859dd05 +0x5ed:  cmpl   $0x0,-0x34(%ebp)
0859dd09 +0x5f1:  jle    0859dd2e <+0x616>
0859dd0b +0x5f3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0859dd10 +0x5f8:  lea    0x8780(%eax),%edx
0859dd16 +0x5fe:  mov    -0x34(%ebp),%eax
0859dd19 +0x601:  mov    %eax,0x4(%esp)
0859dd1d +0x605:  mov    %edx,(%esp)
0859dd20 +0x608:  call   083647a2 <_ZNK13CWorldMapList14find_world_mapEi>  ; CWorldMapList::find_world_map(int) const
0859dd25 +0x60d:  mov    0x8(%ebp),%edx
0859dd28 +0x610:  mov    %eax,0x1868(%edx)
0859dd2e +0x616:  lea    -0x54(%ebp),%eax
0859dd31 +0x619:  mov    %eax,(%esp)
0859dd34 +0x61c:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0859dd39 +0x621:  movl   $0x1b,0x8(%esp)
0859dd41 +0x629:  movl   $0x0,0x4(%esp)
0859dd49 +0x631:  lea    -0x54(%ebp),%eax
0859dd4c +0x634:  mov    %eax,(%esp)
0859dd4f +0x637:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0859dd54 +0x63c:  mov    0x8(%ebp),%eax
0859dd57 +0x63f:  mov    %eax,(%esp)
0859dd5a +0x642:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859dd5f +0x647:  cmp    $0x1,%eax
0859dd62 +0x64a:  sete   %al
0859dd65 +0x64d:  test   %al,%al
0859dd67 +0x64f:  je     0859dd8e <+0x676>
0859dd69 +0x651:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0859dd6e +0x656:  mov    %eax,(%esp)
0859dd71 +0x659:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
0859dd76 +0x65e:  mov    0x8(%eax),%eax
0859dd79 +0x661:  mov    0x8(%ebp),%edx
0859dd7c +0x664:  add    $0x32c,%edx
0859dd82 +0x66a:  mov    %eax,0x4(%esp)
0859dd86 +0x66e:  mov    %edx,(%esp)
0859dd89 +0x671:  call   0822d7b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e5c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e5c
0859dd8e +0x676:  mov    0x8(%ebp),%eax
0859dd91 +0x679:  flds   0xb0c(%eax)
0859dd97 +0x67f:  flds   ""
0859dd9d +0x685:  fmulp  %st,%st(1)
0859dd9f +0x687:  mov    0x8(%ebp),%eax
0859dda2 +0x68a:  mov    0xd0c(%eax),%eax
0859dda8 +0x690:  mov    %eax,-0x7c(%ebp)
0859ddab +0x693:  fildl  -0x7c(%ebp)
0859ddae +0x696:  fdivrp %st,%st(1)
0859ddb0 +0x698:  fnstcw -0x7e(%ebp)
0859ddb3 +0x69b:  movzwl -0x7e(%ebp),%eax
0859ddb7 +0x69f:  mov    $0xc,%ah
0859ddb9 +0x6a1:  mov    %ax,-0x80(%ebp)
0859ddbd +0x6a5:  fldcw  -0x80(%ebp)
0859ddc0 +0x6a8:  fistpl -0x30(%ebp)
0859ddc3 +0x6ab:  fldcw  -0x7e(%ebp)
0859ddc6 +0x6ae:  mov    -0x30(%ebp),%eax
0859ddc9 +0x6b1:  mov    %eax,0x4(%esp)
0859ddcd +0x6b5:  lea    -0x54(%ebp),%eax
0859ddd0 +0x6b8:  mov    %eax,(%esp)
0859ddd3 +0x6bb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859ddd8 +0x6c0:  lea    -0x70(%ebp),%eax
0859dddb +0x6c3:  mov    %eax,(%esp)
0859ddde +0x6c6:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0859dde3 +0x6cb:  mov    0x8(%ebp),%eax
0859dde6 +0x6ce:  mov    0x1868(%eax),%eax
0859ddec +0x6d4:  test   %eax,%eax
0859ddee +0x6d6:  je     0859de15 <+0x6fd>
0859ddf0 +0x6d8:  mov    0x8(%ebp),%eax
0859ddf3 +0x6db:  mov    0x1868(%eax),%eax
0859ddf9 +0x6e1:  mov    %eax,(%esp)
0859ddfc +0x6e4:  call   0830e6ba <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x29f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x29f
0859de01 +0x6e9:  test   %al,%al
0859de03 +0x6eb:  je     0859de15 <+0x6fd>
0859de05 +0x6ed:  call   0830ed07 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x8ec>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x8ec
0859de0a +0x6f2:  test   %al,%al
0859de0c +0x6f4:  je     0859de15 <+0x6fd>
0859de0e +0x6f6:  mov    $0x1,%eax
0859de13 +0x6fb:  jmp    0859de1a <+0x702>
0859de15 +0x6fd:  mov    $0x0,%eax
0859de1a +0x702:  test   %al,%al
0859de1c +0x704:  je     0859dee4 <+0x7cc>
0859de22 +0x70a:  lea    -0x70(%ebp),%eax
0859de25 +0x70d:  mov    %eax,0x4(%esp)
0859de29 +0x711:  mov    0x8(%ebp),%eax
0859de2c +0x714:  mov    %eax,(%esp)
0859de2f +0x717:  call   085a7a72 <_ZN6CParty24CheckClearQuestHellPartyERSt6vectorIiSaIiEE>  ; CParty::CheckClearQuestHellParty(std::vector<int, std::allocator<int> >&)
0859de34 +0x71c:  lea    -0x70(%ebp),%eax
0859de37 +0x71f:  mov    %eax,(%esp)
0859de3a +0x722:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0859de3f +0x727:  mov    %eax,-0x10(%ebp)
0859de42 +0x72a:  cmpl   $0x0,-0x10(%ebp)
0859de46 +0x72e:  jle    0859dec5 <+0x7ad>
0859de48 +0x730:  mov    -0x10(%ebp),%eax
0859de4b +0x733:  mov    %eax,0x4(%esp)
0859de4f +0x737:  lea    -0x54(%ebp),%eax
0859de52 +0x73a:  mov    %eax,(%esp)
0859de55 +0x73d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859de5a +0x742:  lea    -0x74(%ebp),%eax
0859de5d +0x745:  lea    -0x70(%ebp),%edx
0859de60 +0x748:  mov    %edx,0x4(%esp)
0859de64 +0x74c:  mov    %eax,(%esp)
0859de67 +0x74f:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0859de6c +0x754:  sub    $0x4,%esp
0859de6f +0x757:  lea    -0x78(%ebp),%eax
0859de72 +0x75a:  lea    -0x70(%ebp),%edx
0859de75 +0x75d:  mov    %edx,0x4(%esp)
0859de79 +0x761:  mov    %eax,(%esp)
0859de7c +0x764:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0859de81 +0x769:  sub    $0x4,%esp
0859de84 +0x76c:  jmp    0859dead <+0x795>
0859de86 +0x76e:  lea    -0x74(%ebp),%eax
0859de89 +0x771:  mov    %eax,(%esp)
0859de8c +0x774:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0859de91 +0x779:  mov    (%eax),%eax
0859de93 +0x77b:  mov    %eax,0x4(%esp)
0859de97 +0x77f:  lea    -0x54(%ebp),%eax
0859de9a +0x782:  mov    %eax,(%esp)
0859de9d +0x785:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859dea2 +0x78a:  lea    -0x74(%ebp),%eax
0859dea5 +0x78d:  mov    %eax,(%esp)
0859dea8 +0x790:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
0859dead +0x795:  lea    -0x78(%ebp),%eax
0859deb0 +0x798:  mov    %eax,0x4(%esp)
0859deb4 +0x79c:  lea    -0x74(%ebp),%eax
0859deb7 +0x79f:  mov    %eax,(%esp)
0859deba +0x7a2:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0859debf +0x7a7:  test   %al,%al
0859dec1 +0x7a9:  jne    0859de86 <+0x76e>
0859dec3 +0x7ab:  jmp    0859def7 <+0x7df>
0859dec5 +0x7ad:  movl   $0x0,0x4(%esp)
0859decd +0x7b5:  lea    -0x54(%ebp),%eax
0859ded0 +0x7b8:  mov    %eax,(%esp)
0859ded3 +0x7bb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859ded8 +0x7c0:  mov    0x8(%ebp),%eax
0859dedb +0x7c3:  movb   $0x1,0x1864(%eax)
0859dee2 +0x7ca:  jmp    0859def7 <+0x7df>
0859dee4 +0x7cc:  movl   $0x0,0x4(%esp)
0859deec +0x7d4:  lea    -0x54(%ebp),%eax
0859deef +0x7d7:  mov    %eax,(%esp)
0859def2 +0x7da:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859def7 +0x7df:  lea    -0x54(%ebp),%eax
0859defa +0x7e2:  mov    %eax,0x8(%esp)
0859defe +0x7e6:  mov    0xc(%ebp),%eax
0859df01 +0x7e9:  mov    %eax,0x4(%esp)
0859df05 +0x7ed:  mov    0x8(%ebp),%eax
0859df08 +0x7f0:  mov    %eax,(%esp)
0859df0b +0x7f3:  call   0859e0d2 <_ZN6CParty23make_blood_dungeon_infoEP5CUserR11PacketGuard>  ; CParty::make_blood_dungeon_info(CUser*, PacketGuard&)
0859df10 +0x7f8:  xor    $0x1,%eax
0859df13 +0x7fb:  test   %al,%al
0859df15 +0x7fd:  je     0859df29 <+0x811>
0859df17 +0x7ff:  lea    -0x54(%ebp),%eax
0859df1a +0x802:  mov    %eax,0x4(%esp)
0859df1e +0x806:  mov    0x8(%ebp),%eax
0859df21 +0x809:  mov    %eax,(%esp)
0859df24 +0x80c:  call   0859e480 <_ZN6CParty29make_blood_dungeon_info_blankER11PacketGuard>  ; CParty::make_blood_dungeon_info_blank(PacketGuard&)
0859df29 +0x811:  movb   $0x0,-0x29(%ebp)
0859df2d +0x815:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0859df32 +0x81a:  mov    0xc(%ebp),%edx
0859df35 +0x81d:  mov    %edx,0x4(%esp)
0859df39 +0x821:  mov    %eax,(%esp)
0859df3c +0x824:  call   086cebe0 <_ZN9GameWorld16GetWorldMapIndexEP5CUser>  ; GameWorld::GetWorldMapIndex(CUser*)
0859df41 +0x829:  mov    %eax,-0x28(%ebp)
0859df44 +0x82c:  cmpl   $0x0,-0x28(%ebp)
0859df48 +0x830:  jle    0859df9d <+0x885>
0859df4a +0x832:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0859df4f +0x837:  lea    0x8780(%eax),%edx
0859df55 +0x83d:  mov    -0x28(%ebp),%eax
0859df58 +0x840:  mov    %eax,0x4(%esp)
0859df5c +0x844:  mov    %edx,(%esp)
0859df5f +0x847:  call   083647a2 <_ZNK13CWorldMapList14find_world_mapEi>  ; CWorldMapList::find_world_map(int) const
0859df64 +0x84c:  mov    %eax,-0xc(%ebp)
0859df67 +0x84f:  mov    0x8(%ebp),%eax
0859df6a +0x852:  mov    0x1868(%eax),%eax
0859df70 +0x858:  test   %eax,%eax
0859df72 +0x85a:  je     0859df90 <+0x878>
0859df74 +0x85c:  mov    0x8(%ebp),%eax
0859df77 +0x85f:  mov    0x1868(%eax),%eax
0859df7d +0x865:  mov    %eax,(%esp)
0859df80 +0x868:  call   0822b520 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xbca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xbca
0859df85 +0x86d:  test   %al,%al
0859df87 +0x86f:  je     0859df90 <+0x878>
0859df89 +0x871:  mov    $0x1,%eax
0859df8e +0x876:  jmp    0859df95 <+0x87d>
0859df90 +0x878:  mov    $0x0,%eax
0859df95 +0x87d:  test   %al,%al
0859df97 +0x87f:  je     0859df9d <+0x885>
0859df99 +0x881:  movb   $0x1,-0x29(%ebp)
0859df9d +0x885:  movzbl -0x29(%ebp),%eax
0859dfa1 +0x889:  mov    %eax,0x4(%esp)
0859dfa5 +0x88d:  mov    0x8(%ebp),%eax
0859dfa8 +0x890:  mov    %eax,(%esp)
0859dfab +0x893:  call   085be8a0 <_ZN6CParty31isDungeonDifficultyInfromNoticeEb>  ; CParty::isDungeonDifficultyInfromNotice(bool)
0859dfb0 +0x898:  test   %al,%al
0859dfb2 +0x89a:  je     0859dfdf <+0x8c7>
0859dfb4 +0x89c:  movl   $0x1,0x4(%esp)
0859dfbc +0x8a4:  lea    -0x54(%ebp),%eax
0859dfbf +0x8a7:  mov    %eax,(%esp)
0859dfc2 +0x8aa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859dfc7 +0x8af:  mov    0x8(%ebp),%eax
0859dfca +0x8b2:  mov    0x74(%eax),%eax
0859dfcd +0x8b5:  movl   $0x1,0x4(%esp)
0859dfd5 +0x8bd:  mov    %eax,(%esp)
0859dfd8 +0x8c0:  call   085bfb10 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x106e>  ; global constructors keyed to CParty::cMember::cMember()+0x106e
0859dfdd +0x8c5:  jmp    0859dff2 <+0x8da>
0859dfdf +0x8c7:  movl   $0x0,0x4(%esp)
0859dfe7 +0x8cf:  lea    -0x54(%ebp),%eax
0859dfea +0x8d2:  mov    %eax,(%esp)
0859dfed +0x8d5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859dff2 +0x8da:  cmpb   $0x0,-0x29(%ebp)
0859dff6 +0x8de:  je     0859e011 <+0x8f9>
0859dff8 +0x8e0:  movzbl -0x29(%ebp),%eax
0859dffc +0x8e4:  mov    0x8(%ebp),%edx
0859dfff +0x8e7:  add    $0xb24,%edx
0859e005 +0x8ed:  mov    %eax,0x4(%esp)
0859e009 +0x8f1:  mov    %edx,(%esp)
0859e00c +0x8f4:  call   085bf300 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x85e>  ; global constructors keyed to CParty::cMember::cMember()+0x85e
0859e011 +0x8f9:  movl   $0x1,0x4(%esp)
0859e019 +0x901:  lea    -0x54(%ebp),%eax
0859e01c +0x904:  mov    %eax,(%esp)
0859e01f +0x907:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0859e024 +0x90c:  lea    -0x54(%ebp),%eax
0859e027 +0x90f:  mov    %eax,0x4(%esp)
0859e02b +0x913:  mov    0x8(%ebp),%eax
0859e02e +0x916:  mov    %eax,(%esp)
0859e031 +0x919:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0859e036 +0x91e:  mov    0x8(%ebp),%eax
0859e039 +0x921:  movb   $0x0,0x118(%eax)
0859e040 +0x928:  mov    0x8(%ebp),%eax
0859e043 +0x92b:  mov    %eax,(%esp)
0859e046 +0x92e:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
0859e04b +0x933:  mov    %eax,(%esp)
0859e04e +0x936:  call   085bc044 <_ZN14CPartyTelePort19reset_teleport_dataEv>  ; CPartyTelePort::reset_teleport_data()
0859e053 +0x93b:  lea    -0x70(%ebp),%eax
0859e056 +0x93e:  mov    %eax,(%esp)
0859e059 +0x941:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0859e05e +0x946:  jmp    0859e075 <+0x95d>
0859e060 +0x948:  mov    %edx,%ebx
0859e062 +0x94a:  mov    %eax,%esi
0859e064 +0x94c:  lea    -0x70(%ebp),%eax
0859e067 +0x94f:  mov    %eax,(%esp)
0859e06a +0x952:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0859e06f +0x957:  mov    %esi,%eax
0859e071 +0x959:  mov    %ebx,%edx
0859e073 +0x95b:  jmp    0859e07c <+0x964>
0859e075 +0x95d:  mov    $0x1,%ebx
0859e07a +0x962:  jmp    0859e091 <+0x979>
0859e07c +0x964:  mov    %edx,%ebx
0859e07e +0x966:  mov    %eax,%esi
0859e080 +0x968:  lea    -0x60(%ebp),%eax
0859e083 +0x96b:  mov    %eax,(%esp)
0859e086 +0x96e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859e08b +0x973:  mov    %esi,%eax
0859e08d +0x975:  mov    %ebx,%edx
0859e08f +0x977:  jmp    0859e0ab <+0x993>
0859e091 +0x979:  lea    -0x60(%ebp),%eax
0859e094 +0x97c:  mov    %eax,(%esp)
0859e097 +0x97f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859e09c +0x984:  test   %ebx,%ebx
0859e09e +0x986:  lea    -0x54(%ebp),%eax
0859e0a1 +0x989:  mov    %eax,(%esp)
0859e0a4 +0x98c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859e0a9 +0x991:  jmp    0859e0c7 <+0x9af>
0859e0ab +0x993:  mov    %edx,%ebx
0859e0ad +0x995:  mov    %eax,%esi
0859e0af +0x997:  lea    -0x54(%ebp),%eax
0859e0b2 +0x99a:  mov    %eax,(%esp)
0859e0b5 +0x99d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859e0ba +0x9a2:  mov    %esi,%eax
0859e0bc +0x9a4:  mov    %ebx,%edx
0859e0be +0x9a6:  mov    %eax,(%esp)
0859e0c1 +0x9a9:  call   08ae3750 <_Unwind_Resume>
0859e0c6 +0x9ae:  nop
0859e0c7 +0x9af:  lea    -0x8(%ebp),%esp
0859e0ca +0x9b2:  add    $0x0,%esp
0859e0cd +0x9b5:  pop    %ebx
0859e0ce +0x9b6:  pop    %esi
0859e0cf +0x9b7:  pop    %ebp
0859e0d0 +0x9b8:  ret
0859e0d1 +0x9b9:  nop
```

## 反编译 C

```c
// CParty::game_start @ 0x859d718

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CParty::game_start(CUser*) */

void __thiscall CParty::game_start(CParty *this,CUser *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  CGameManager *pCVar5;
  uint uVar6;
  CUser *pCVar7;
  GameWorld *pGVar8;
  int *piVar9;
  CPartyTelePort *this_00;
  int iVar10;
  __normal_iterator local_7c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_78 [4];
  vector<int,std::allocator<int>> local_74 [12];
  int local_68;
  PacketGuard local_64 [12];
  PacketGuard local_58 [12];
  int local_4c;
  CTradeSpace *local_48;
  int local_44;
  char local_3e;
  char local_3d;
  int local_3c;
  int local_38;
  int local_34;
  bool local_2d;
  int local_2c;
  int local_28;
  char local_21;
  int local_20;
  int local_1c;
  CUser *local_18;
  int local_14;
  undefined4 local_10;
  
  if (this[0x6a] != (CParty)0x2) {
    PacketGuard::PacketGuard(local_58);
                    /* try { // try from 0859d743 to 0859d7d5 has its CatchHandler @ 0859e0ab */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_58);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_58,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,1);
    iVar3 = get_member_count(this);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_58,iVar3);
    this[0x11a] = (CParty)0x0;
    iVar3 = get_member_count(this);
    uVar4 = get_rand_int(iVar3);
    *(undefined4 *)(this + 0x144) = uVar4;
    uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x185c) = uVar4;
    PacketGuard::PacketGuard(local_64);
                    /* try { // try from 0859d7ec to 0859dde2 has its CatchHandler @ 0859e07c */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,0,3);
    local_44 = 0;
    local_68 = 0;
    local_68 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_64);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,local_44);
    local_3e = '\0';
    local_3d = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    local_3c = CUser::get_area(param_1,false);
    for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
      cVar1 = _checkValidUser(this,local_28);
      if (cVar1 != '\0') {
        local_21 = CUserCharacInfo::getCurCharacVill
                             (*(CUserCharacInfo **)(this + local_28 * 0x18 + 0x78));
        local_20 = CUser::get_area(*(CUser **)(this + local_28 * 0x18 + 0x78),false);
        if (((local_3d == local_21) && (local_3c == local_20)) ||
           (cVar1 = is_quick_party(this), cVar1 == '\x01')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (*(short *)(this + 0xc4c) == 0)) {
          iVar10 = (int)local_21;
          iVar3 = (int)local_3d;
          uVar6 = CUser::get_acc_id(*(CUser **)(this + local_28 * 0x18 + 0x78));
          uVar4 = NumberToString(uVar6,0);
          LogManager::logFormat
                    (1,"party.cpp","void CParty::game_start(CUser*)",0x84c,
                     "[HACK_VILL_AREA] m_id : %s, Vill(%d,%d), Area(%d,%d)",uVar4,iVar3,iVar10,
                     local_3c,local_20);
          local_3e = '\x01';
          break;
        }
        this[local_28 + 0x380] = (CParty)0x1;
        this[local_28 + 900] = (CParty)0x1;
        this[local_28 + 0x388] = (CParty)0x0;
        this[local_28 + 0x38c] = (CParty)0x0;
        CUser::make_basic_info(*(CUser **)(this + local_28 * 0x18 + 0x78),(char *)local_58,'\x01');
        pCVar7 = *(CUser **)(this + local_28 * 0x18 + 0x78);
        pGVar8 = (GameWorld *)G_GameWorld();
        GameWorld::goto_dungeon(pGVar8,pCVar7);
        iVar3 = CUser::get_state(*(CUser **)(this + local_28 * 0x18 + 0x78));
        if (iVar3 == 5) {
          uVar6 = CUser::get_unique_id(*(CUser **)(this + local_28 * 0x18 + 0x78));
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,uVar6 & 0xffff);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,1);
          local_44 = local_44 + 1;
        }
        local_4c = CUser::GetTradeSpace(*(CUser **)(this + local_28 * 0x18 + 0x78));
        if (local_4c != -1) {
          pCVar5 = (CGameManager *)G_CGameManager();
          local_48 = (CTradeSpace *)CGameManager::GetTradeSpace(pCVar5,local_4c);
          if ((local_48 != (CTradeSpace *)0x0) &&
             (cVar1 = CTradeSpace::check_trade_possibility(local_48), cVar1 != '\x01')) {
            CTradeSpace::cancel_trade(local_48);
            pCVar5 = (CGameManager *)G_CGameManager();
            CGameManager::PutTradeSpace(pCVar5,local_48);
          }
        }
        iVar3 = CUser::getCurCharacQuestW(*(CUser **)(this + local_28 * 0x18 + 0x78));
        _Quest_Authen_Data::reset((_Quest_Authen_Data *)(iVar3 + 0x75d8));
      }
    }
    if (local_3e == '\0') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,&local_68,local_44);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
      cVar1 = IsExistInvisible(this);
      if (cVar1 == '\0') {
        pCVar7 = (CUser *)getManager(this);
        iVar3 = CUser::getMoveSpace(pCVar7);
        if (iVar3 == 1) {
          send_to_party(this,local_64);
        }
        else {
          pGVar8 = (GameWorld *)G_GameWorld();
          GameWorld::send_all(pGVar8,local_64);
        }
      }
      else {
        send_to_party(this,local_64);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_58,true);
      send_to_party(this,local_58);
      set_host(this);
      send_host_info(this);
      this[0x1864] = (CParty)0x0;
      *(undefined4 *)(this + 0x1868) = 0;
      pGVar8 = (GameWorld *)G_GameWorld();
      local_38 = GameWorld::GetWorldMapIndex(pGVar8,param_1);
      if (0 < local_38) {
        iVar3 = G_CDataManager();
        uVar4 = CWorldMapList::find_world_map(iVar3 + 0x8780);
        *(undefined4 *)(this + 0x1868) = uVar4;
      }
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_58);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_58,0,0x1b);
      iVar3 = get_member_count(this);
      if (iVar3 == 1) {
        G_CDataManager();
        iVar3 = CDataManager::get_hellparty_script_values();
        BattleData::SetHellPartyValueTotal((BattleData *)(this + 0x32c),*(int *)(iVar3 + 8));
      }
      local_34 = (int)ROUND((_DAT_08cbbbcc * *(float *)(this + 0xb0c)) /
                            (float)*(int *)(this + 0xd0c));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_58,local_34);
      std::vector<int,std::allocator<int>>::vector(local_74);
      if (((*(int *)(this + 0x1868) == 0) ||
          (cVar1 = CWorldMap::IsInHellDungeon(*(CWorldMap **)(this + 0x1868)), cVar1 == '\0')) ||
         (cVar1 = CBattle_Field::IsEnableHellDungeon(), cVar1 == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
                    /* try { // try from 0859de2f to 0859e035 has its CatchHandler @ 0859e060 */
        CheckClearQuestHellParty(this,(vector *)local_74);
        local_14 = std::vector<int,std::allocator<int>>::size(local_74);
        if (local_14 < 1) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,0);
          this[0x1864] = (CParty)0x1;
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,local_14);
          std::vector<int,std::allocator<int>>::begin();
          std::vector<int,std::allocator<int>>::end();
          while (bVar2 = __gnu_cxx::operator!=(local_78,local_7c), bVar2) {
            piVar9 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>
                            ::operator*(local_78);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_58,*piVar9);
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                      (local_78);
          }
        }
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,0);
      }
      cVar1 = make_blood_dungeon_info(this,param_1,local_58);
      if (cVar1 != '\x01') {
        make_blood_dungeon_info_blank(this,local_58);
      }
      local_2d = false;
      pGVar8 = (GameWorld *)G_GameWorld();
      local_2c = GameWorld::GetWorldMapIndex(pGVar8,param_1);
      if (0 < local_2c) {
        iVar3 = G_CDataManager();
        local_10 = CWorldMapList::find_world_map(iVar3 + 0x8780);
        if ((*(int *)(this + 0x1868) == 0) ||
           (cVar1 = CWorldMap::hasDeathTower(*(CWorldMap **)(this + 0x1868)), cVar1 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_2d = true;
        }
      }
      cVar1 = isDungeonDifficultyInfromNotice(this,local_2d);
      if (cVar1 == '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,0);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,1);
        CUserCharacInfo::setMemberDungeonFlag(*(CUserCharacInfo **)(this + 0x74),true);
      }
      if (local_2d != false) {
        CBattle_Field::setWorldMapTowerArea((CBattle_Field *)(this + 0xb24),local_2d);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_58,true);
      send_to_party(this,local_58);
      this[0x118] = (CParty)0x0;
      this_00 = (CPartyTelePort *)GetPartyTelePort(this);
      CPartyTelePort::reset_teleport_data(this_00);
                    /* try { // try from 0859e059 to 0859e05d has its CatchHandler @ 0859e07c */
      std::vector<int,std::allocator<int>>::~vector(local_74);
    }
    else {
      for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
        local_18 = (CUser *)get_user(this,local_1c);
        if (local_18 != (CUser *)0x0) {
          iVar3 = (int)local_3d;
          uVar6 = CUser::get_acc_id(local_18);
          uVar4 = NumberToString(uVar6,0);
          LogManager::logFormat
                    (1,"party.cpp","void CParty::game_start(CUser*)",0x88a,
                     "[HACK_VILL_AREA] m_id : %s, Vill(%d), Area(%d)",uVar4,iVar3,local_3c);
          CUser::DisConnSig(local_18,0x18,1,0);
        }
      }
    }
                    /* try { // try from 0859e097 to 0859e09b has its CatchHandler @ 0859e0ab */
    PacketGuard::~PacketGuard(local_64);
    PacketGuard::~PacketGuard(local_58);
  }
  return;
}
```
