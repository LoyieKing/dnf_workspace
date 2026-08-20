# MakeTournamentReward

`_ZN6CParty20MakeTournamentRewardER24CTournamentDungeonReward`

`CParty::MakeTournamentReward(CTournamentDungeonReward&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bcb40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bcb40  _ZN6CParty20MakeTournamentRewardER24CTournamentDungeonReward
#           CParty::MakeTournamentReward(CTournamentDungeonReward&)
# range [0x085bcb40, 0x085bd1db]
085bcb40 +0x000:  push   %ebp
085bcb41 +0x001:  mov    %esp,%ebp
085bcb43 +0x003:  push   %esi
085bcb44 +0x004:  push   %ebx
085bcb45 +0x005:  sub    $0xf0,%esp
085bcb4b +0x00b:  mov    0x8(%ebp),%eax
085bcb4e +0x00e:  movzbl 0x11a(%eax),%eax
085bcb55 +0x015:  mov    %al,-0x31(%ebp)
085bcb58 +0x018:  movzbl -0x31(%ebp),%ebx
085bcb5c +0x01c:  mov    0x8(%ebp),%eax
085bcb5f +0x01f:  add    $0xb24,%eax
085bcb64 +0x024:  mov    %eax,(%esp)
085bcb67 +0x027:  call   082fe6ae <_ZN13CBattle_Field21GetTournamentCurRoundEv>  ; CBattle_Field::GetTournamentCurRound()
085bcb6c +0x02c:  mov    0x8(%ebp),%edx
085bcb6f +0x02f:  mov    0xcac(%edx),%edx
085bcb75 +0x035:  lea    0x8c4(%edx),%ecx
085bcb7b +0x03b:  mov    0x8(%ebp),%edx
085bcb7e +0x03e:  mov    0xcac(%edx),%edx
085bcb84 +0x044:  add    $0x8ac,%edx
085bcb8a +0x04a:  mov    %ebx,0x10(%esp)
085bcb8e +0x04e:  mov    %eax,0xc(%esp)
085bcb92 +0x052:  mov    %ecx,0x8(%esp)
085bcb96 +0x056:  mov    %edx,0x4(%esp)
085bcb9a +0x05a:  mov    0xc(%ebp),%eax
085bcb9d +0x05d:  mov    %eax,(%esp)
085bcba0 +0x060:  call   08284890 <_ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib>  ; CTournamentDungeonReward::MakeReward(std::map<int, TournamentRewardRate, std::less<int>, std::allocator<std::pair<int const, TournamentRewardRate> > > const*, TournamentRewardItemRate const*, int, bool)
085bcba5 +0x065:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085bcbaa +0x06a:  mov    %eax,-0x30(%ebp)
085bcbad +0x06d:  mov    0x8(%ebp),%eax
085bcbb0 +0x070:  add    $0xb24,%eax
085bcbb5 +0x075:  mov    %eax,(%esp)
085bcbb8 +0x078:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085bcbbd +0x07d:  mov    %eax,0x4(%esp)
085bcbc1 +0x081:  mov    -0x30(%ebp),%eax
085bcbc4 +0x084:  mov    %eax,(%esp)
085bcbc7 +0x087:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
085bcbcc +0x08c:  mov    %eax,-0x2c(%ebp)
085bcbcf +0x08f:  mov    0x8(%ebp),%eax
085bcbd2 +0x092:  mov    %eax,(%esp)
085bcbd5 +0x095:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085bcbda +0x09a:  mov    %eax,-0x28(%ebp)
085bcbdd +0x09d:  cmpl   $0x0,-0x2c(%ebp)
085bcbe1 +0x0a1:  jne    085bcc28 <+0xe8>
085bcbe3 +0x0a3:  mov    0x8(%ebp),%eax
085bcbe6 +0x0a6:  add    $0xb24,%eax
085bcbeb +0x0ab:  mov    %eax,(%esp)
085bcbee +0x0ae:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085bcbf3 +0x0b3:  mov    %eax,0x14(%esp)
085bcbf7 +0x0b7:  movl   $"Unknown Dungeon %d",0x10(%esp)
085bcbff +0x0bf:  movl   $0x4540,0xc(%esp)
085bcc07 +0x0c7:  movl   $&_ZZN6CParty20MakeTournamentRewardER24CTournamentDungeonRewardE19__PRETTY_FUNCTION__,0x8(%esp)
085bcc0f +0x0cf:  movl   $"party.cpp",0x4(%esp)
085bcc17 +0x0d7:  movl   $0x1,(%esp)
085bcc1e +0x0de:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085bcc23 +0x0e3:  jmp    085bd1d1 <+0x691>
085bcc28 +0x0e8:  cmpl   $0x0,-0x28(%ebp)
085bcc2c +0x0ec:  jg     085bcc66 <+0x126>
085bcc2e +0x0ee:  mov    -0x28(%ebp),%eax
085bcc31 +0x0f1:  mov    %eax,0x14(%esp)
085bcc35 +0x0f5:  movl   $"No Member[%d] in party",0x10(%esp)
085bcc3d +0x0fd:  movl   $0x4545,0xc(%esp)
085bcc45 +0x105:  movl   $&_ZZN6CParty20MakeTournamentRewardER24CTournamentDungeonRewardE19__PRETTY_FUNCTION__,0x8(%esp)
085bcc4d +0x10d:  movl   $"party.cpp",0x4(%esp)
085bcc55 +0x115:  movl   $0x1,(%esp)
085bcc5c +0x11c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085bcc61 +0x121:  jmp    085bd1d1 <+0x691>
085bcc66 +0x126:  mov    -0x2c(%ebp),%eax
085bcc69 +0x129:  mov    %eax,(%esp)
085bcc6c +0x12c:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
085bcc71 +0x131:  mov    %eax,-0x24(%ebp)
085bcc74 +0x134:  mov    -0x24(%ebp),%eax
085bcc77 +0x137:  mov    %eax,-0x20(%ebp)
085bcc7a +0x13a:  lea    -0xd8(%ebp),%eax
085bcc80 +0x140:  mov    %eax,(%esp)
085bcc83 +0x143:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
085bcc88 +0x148:  mov    0x8(%ebp),%eax
085bcc8b +0x14b:  add    $0xb24,%eax
085bcc90 +0x150:  mov    %eax,(%esp)
085bcc93 +0x153:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085bcc98 +0x158:  mov    %al,-0xa3(%ebp)
085bcc9e +0x15e:  mov    -0x20(%ebp),%eax
085bcca1 +0x161:  mov    %al,-0xa4(%ebp)
085bcca7 +0x167:  mov    -0x28(%ebp),%eax
085bccaa +0x16a:  mov    %al,-0xa2(%ebp)
085bccb0 +0x170:  movl   $0x1,-0xa0(%ebp)
085bccba +0x17a:  mov    0x8(%ebp),%eax
085bccbd +0x17d:  mov    0x374(%eax),%eax
085bccc3 +0x183:  mov    %ax,-0x9c(%ebp)
085bccca +0x18a:  mov    0x8(%ebp),%eax
085bcccd +0x18d:  mov    0x36c(%eax),%eax
085bccd3 +0x193:  mov    %ax,-0x9a(%ebp)
085bccda +0x19a:  movw   $0x0,-0x98(%ebp)
085bcce3 +0x1a3:  mov    0x8(%ebp),%eax
085bcce6 +0x1a6:  mov    0x370(%eax),%eax
085bccec +0x1ac:  mov    %ax,-0x96(%ebp)
085bccf3 +0x1b3:  lea    -0x90(%ebp),%eax
085bccf9 +0x1b9:  mov    %eax,(%esp)
085bccfc +0x1bc:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
085bcd01 +0x1c1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085bcd06 +0x1c6:  mov    %eax,(%esp)
085bcd09 +0x1c9:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
085bcd0e +0x1ce:  movl   $0x2,0x4(%esp)
085bcd16 +0x1d6:  mov    %eax,(%esp)
085bcd19 +0x1d9:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
085bcd1e +0x1de:  mov    (%eax),%edx
085bcd20 +0x1e0:  add    $0xc,%edx
085bcd23 +0x1e3:  mov    (%edx),%ecx
085bcd25 +0x1e5:  lea    -0x90(%ebp),%edx
085bcd2b +0x1eb:  mov    %edx,0x8(%esp)
085bcd2f +0x1ef:  lea    -0xd8(%ebp),%edx
085bcd35 +0x1f5:  mov    %edx,0x4(%esp)
085bcd39 +0x1f9:  mov    %eax,(%esp)
085bcd3c +0x1fc:  call   *%ecx
085bcd3e +0x1fe:  mov    -0x2c(%ebp),%eax
085bcd41 +0x201:  mov    0x8d4(%eax),%eax
085bcd47 +0x207:  mov    %eax,-0x1c(%ebp)
085bcd4a +0x20a:  flds   -0x1c(%ebp)
085bcd4d +0x20d:  fldz
085bcd4f +0x20f:  fucompp
085bcd51 +0x211:  fnstsw %ax
085bcd53 +0x213:  test   $0x45,%ah
085bcd56 +0x216:  sete   %al
085bcd59 +0x219:  test   %al,%al
085bcd5b +0x21b:  je     085bcd65 <+0x225>
085bcd5d +0x21d:  mov    $0x3f800000,%eax
085bcd62 +0x222:  mov    %eax,-0x1c(%ebp)
085bcd65 +0x225:  mov    -0x1c(%ebp),%eax
085bcd68 +0x228:  mov    %eax,0x8(%esp)
085bcd6c +0x22c:  lea    -0x90(%ebp),%eax
085bcd72 +0x232:  mov    %eax,0x4(%esp)
085bcd76 +0x236:  mov    0xc(%ebp),%eax
085bcd79 +0x239:  mov    %eax,(%esp)
085bcd7c +0x23c:  call   08284b8e <_ZN24CTournamentDungeonReward13SetRewardGoldERN8WongWork18stGenerateResult_tEf>  ; CTournamentDungeonReward::SetRewardGold(WongWork::stGenerateResult_t&, float)
085bcd81 +0x241:  movl   $0x0,-0x18(%ebp)
085bcd88 +0x248:  mov    0x8(%ebp),%eax
085bcd8b +0x24b:  add    $0xb24,%eax
085bcd90 +0x250:  mov    %eax,(%esp)
085bcd93 +0x253:  call   082fe6ae <_ZN13CBattle_Field21GetTournamentCurRoundEv>  ; CBattle_Field::GetTournamentCurRound()
085bcd98 +0x258:  mov    %eax,-0x14(%ebp)
085bcd9b +0x25b:  movzbl -0x31(%ebp),%eax
085bcd9f +0x25f:  xor    $0x1,%eax
085bcda2 +0x262:  test   %al,%al
085bcda4 +0x264:  je     085bcdaa <+0x26a>
085bcda6 +0x266:  subl   $0x1,-0x14(%ebp)
085bcdaa +0x26a:  cmpl   $0x0,-0x14(%ebp)
085bcdae +0x26e:  jns    085bcdb7 <+0x277>
085bcdb0 +0x270:  movl   $0x0,-0x14(%ebp)
085bcdb7 +0x277:  mov    -0x14(%ebp),%eax
085bcdba +0x27a:  mov    %al,-0x39(%ebp)
085bcdbd +0x27d:  mov    -0x2c(%ebp),%eax
085bcdc0 +0x280:  lea    0x8d8(%eax),%ecx
085bcdc6 +0x286:  lea    -0x40(%ebp),%eax
085bcdc9 +0x289:  lea    -0x39(%ebp),%edx
085bcdcc +0x28c:  mov    %edx,0x8(%esp)
085bcdd0 +0x290:  mov    %ecx,0x4(%esp)
085bcdd4 +0x294:  mov    %eax,(%esp)
085bcdd7 +0x297:  call   085c06e0 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1c3e>  ; global constructors keyed to CParty::cMember::cMember()+0x1c3e
085bcddc +0x29c:  sub    $0x4,%esp
085bcddf +0x29f:  mov    -0x2c(%ebp),%eax
085bcde2 +0x2a2:  lea    0x8d8(%eax),%edx
085bcde8 +0x2a8:  lea    -0x38(%ebp),%eax
085bcdeb +0x2ab:  mov    %edx,0x4(%esp)
085bcdef +0x2af:  mov    %eax,(%esp)
085bcdf2 +0x2b2:  call   085c070c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1c6a>  ; global constructors keyed to CParty::cMember::cMember()+0x1c6a
085bcdf7 +0x2b7:  sub    $0x4,%esp
085bcdfa +0x2ba:  lea    -0x38(%ebp),%eax
085bcdfd +0x2bd:  mov    %eax,0x4(%esp)
085bce01 +0x2c1:  lea    -0x40(%ebp),%eax
085bce04 +0x2c4:  mov    %eax,(%esp)
085bce07 +0x2c7:  call   085c0732 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1c90>  ; global constructors keyed to CParty::cMember::cMember()+0x1c90
085bce0c +0x2cc:  test   %al,%al
085bce0e +0x2ce:  je     085bce21 <+0x2e1>
085bce10 +0x2d0:  lea    -0x40(%ebp),%eax
085bce13 +0x2d3:  mov    %eax,(%esp)
085bce16 +0x2d6:  call   085c0746 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1ca4>  ; global constructors keyed to CParty::cMember::cMember()+0x1ca4
085bce1b +0x2db:  mov    0x4(%eax),%eax
085bce1e +0x2de:  mov    %eax,-0x18(%ebp)
085bce21 +0x2e1:  movl   $0x0,-0x10(%ebp)
085bce28 +0x2e8:  jmp    085bd146 <+0x606>
085bce2d +0x2ed:  lea    -0x4c(%ebp),%eax
085bce30 +0x2f0:  mov    %eax,(%esp)
085bce33 +0x2f3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085bce38 +0x2f8:  lea    -0x4c(%ebp),%eax
085bce3b +0x2fb:  mov    %eax,(%esp)
085bce3e +0x2fe:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085bce43 +0x303:  movl   $0x184,0x8(%esp)
085bce4b +0x30b:  movl   $0x0,0x4(%esp)
085bce53 +0x313:  lea    -0x4c(%ebp),%eax
085bce56 +0x316:  mov    %eax,(%esp)
085bce59 +0x319:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085bce5e +0x31e:  mov    $0x0,%eax
085bce63 +0x323:  mov    %eax,-0xc(%ebp)
085bce66 +0x326:  mov    -0x10(%ebp),%eax
085bce69 +0x329:  mov    %eax,0x4(%esp)
085bce6d +0x32d:  mov    0x8(%ebp),%eax
085bce70 +0x330:  mov    %eax,(%esp)
085bce73 +0x333:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085bce78 +0x338:  xor    $0x1,%eax
085bce7b +0x33b:  test   %al,%al
085bce7d +0x33d:  jne    085bd137 <+0x5f7>
085bce83 +0x343:  mov    -0x10(%ebp),%edx
085bce86 +0x346:  mov    0x8(%ebp),%ecx
085bce89 +0x349:  mov    %edx,%eax
085bce8b +0x34b:  add    %eax,%eax
085bce8d +0x34d:  add    %edx,%eax
085bce8f +0x34f:  shl    $0x3,%eax
085bce92 +0x352:  lea    (%ecx,%eax,1),%eax
085bce95 +0x355:  add    $0x78,%eax
085bce98 +0x358:  mov    (%eax),%eax
085bce9a +0x35a:  movl   $0x0,0x4(%esp)
085bcea2 +0x362:  mov    %eax,(%esp)
085bcea5 +0x365:  call   08469a5c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x13f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x13f
085bceaa +0x36a:  mov    -0x10(%ebp),%edx
085bcead +0x36d:  mov    0x8(%ebp),%ecx
085bceb0 +0x370:  mov    %edx,%eax
085bceb2 +0x372:  add    %eax,%eax
085bceb4 +0x374:  add    %edx,%eax
085bceb6 +0x376:  shl    $0x3,%eax
085bceb9 +0x379:  lea    (%ecx,%eax,1),%eax
085bcebc +0x37c:  add    $0x78,%eax
085bcebf +0x37f:  mov    (%eax),%eax
085bcec1 +0x381:  mov    %eax,0x4(%esp)
085bcec5 +0x385:  mov    0x8(%ebp),%eax
085bcec8 +0x388:  mov    %eax,(%esp)
085bcecb +0x38b:  call   085a21ca <_ZN6CParty16isHelpAbusePartyEP5CUser>  ; CParty::isHelpAbuseParty(CUser*)
085bced0 +0x390:  movzbl %al,%ecx
085bced3 +0x393:  mov    -0x10(%ebp),%edx
085bced6 +0x396:  mov    0x8(%ebp),%ebx
085bced9 +0x399:  mov    %edx,%eax
085bcedb +0x39b:  add    %eax,%eax
085bcedd +0x39d:  add    %edx,%eax
085bcedf +0x39f:  shl    $0x3,%eax
085bcee2 +0x3a2:  lea    (%ebx,%eax,1),%eax
085bcee5 +0x3a5:  add    $0x78,%eax
085bcee8 +0x3a8:  mov    (%eax),%eax
085bceea +0x3aa:  mov    %ecx,0x8(%esp)
085bceee +0x3ae:  mov    -0x18(%ebp),%edx
085bcef1 +0x3b1:  mov    %edx,0x4(%esp)
085bcef5 +0x3b5:  mov    %eax,(%esp)
085bcef8 +0x3b8:  call   0864e402 <_ZN15CUserCharacInfo18calcHelpAbuseRatioEjb>  ; CUserCharacInfo::calcHelpAbuseRatio(unsigned int, bool)
085bcefd +0x3bd:  mov    -0x10(%ebp),%edx
085bcf00 +0x3c0:  mov    0x8(%ebp),%ecx
085bcf03 +0x3c3:  mov    %edx,%eax
085bcf05 +0x3c5:  add    %eax,%eax
085bcf07 +0x3c7:  add    %edx,%eax
085bcf09 +0x3c9:  shl    $0x3,%eax
085bcf0c +0x3cc:  lea    (%ecx,%eax,1),%eax
085bcf0f +0x3cf:  add    $0x78,%eax
085bcf12 +0x3d2:  mov    (%eax),%eax
085bcf14 +0x3d4:  mov    %eax,(%esp)
085bcf17 +0x3d7:  call   08645d96 <_ZN15CUserCharacInfo26reset_level_before_dungeonEv>  ; CUserCharacInfo::reset_level_before_dungeon()
085bcf1c +0x3dc:  movl   $0x0,-0x50(%ebp)
085bcf23 +0x3e3:  movl   $0x0,-0x54(%ebp)
085bcf2a +0x3ea:  mov    -0x18(%ebp),%ecx
085bcf2d +0x3ed:  mov    -0x10(%ebp),%edx
085bcf30 +0x3f0:  mov    0x8(%ebp),%ebx
085bcf33 +0x3f3:  mov    %edx,%eax
085bcf35 +0x3f5:  add    %eax,%eax
085bcf37 +0x3f7:  add    %edx,%eax
085bcf39 +0x3f9:  shl    $0x3,%eax
085bcf3c +0x3fc:  lea    (%ebx,%eax,1),%eax
085bcf3f +0x3ff:  add    $0x78,%eax
085bcf42 +0x402:  mov    (%eax),%eax
085bcf44 +0x404:  movl   $0x0,0x18(%esp)
085bcf4c +0x40c:  movl   $0x0,0x14(%esp)
085bcf54 +0x414:  movl   $0x2,0x10(%esp)
085bcf5c +0x41c:  lea    -0x54(%ebp),%edx
085bcf5f +0x41f:  mov    %edx,0xc(%esp)
085bcf63 +0x423:  lea    -0x50(%ebp),%edx
085bcf66 +0x426:  mov    %edx,0x8(%esp)
085bcf6a +0x42a:  mov    %ecx,0x4(%esp)
085bcf6e +0x42e:  mov    %eax,(%esp)
085bcf71 +0x431:  call   0866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>  ; CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)
085bcf76 +0x436:  test   %al,%al
085bcf78 +0x438:  je     085bd061 <+0x521>
085bcf7e +0x43e:  lea    -0x60(%ebp),%eax
085bcf81 +0x441:  mov    %eax,(%esp)
085bcf84 +0x444:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085bcf89 +0x449:  lea    -0x60(%ebp),%eax
085bcf8c +0x44c:  mov    %eax,(%esp)
085bcf8f +0x44f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085bcf94 +0x454:  movl   $0x2,0x8(%esp)
085bcf9c +0x45c:  movl   $0x0,0x4(%esp)
085bcfa4 +0x464:  lea    -0x60(%ebp),%eax
085bcfa7 +0x467:  mov    %eax,(%esp)
085bcfaa +0x46a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085bcfaf +0x46f:  movl   $0x1,0x4(%esp)
085bcfb7 +0x477:  lea    -0x60(%ebp),%eax
085bcfba +0x47a:  mov    %eax,(%esp)
085bcfbd +0x47d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085bcfc2 +0x482:  movl   $0x1,0x4(%esp)
085bcfca +0x48a:  lea    -0x60(%ebp),%eax
085bcfcd +0x48d:  mov    %eax,(%esp)
085bcfd0 +0x490:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085bcfd5 +0x495:  lea    -0x60(%ebp),%ecx
085bcfd8 +0x498:  mov    -0x10(%ebp),%edx
085bcfdb +0x49b:  mov    0x8(%ebp),%ebx
085bcfde +0x49e:  mov    %edx,%eax
085bcfe0 +0x4a0:  add    %eax,%eax
085bcfe2 +0x4a2:  add    %edx,%eax
085bcfe4 +0x4a4:  shl    $0x3,%eax
085bcfe7 +0x4a7:  lea    (%ebx,%eax,1),%eax
085bcfea +0x4aa:  add    $0x78,%eax
085bcfed +0x4ad:  mov    (%eax),%eax
085bcfef +0x4af:  movl   $0x1,0x8(%esp)
085bcff7 +0x4b7:  mov    %ecx,0x4(%esp)
085bcffb +0x4bb:  mov    %eax,(%esp)
085bcffe +0x4be:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
085bd003 +0x4c3:  movl   $0x1,0x4(%esp)
085bd00b +0x4cb:  lea    -0x60(%ebp),%eax
085bd00e +0x4ce:  mov    %eax,(%esp)
085bd011 +0x4d1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085bd016 +0x4d6:  mov    -0x10(%ebp),%edx
085bd019 +0x4d9:  mov    0x8(%ebp),%ecx
085bd01c +0x4dc:  mov    %edx,%eax
085bd01e +0x4de:  add    %eax,%eax
085bd020 +0x4e0:  add    %edx,%eax
085bd022 +0x4e2:  shl    $0x3,%eax
085bd025 +0x4e5:  lea    (%ecx,%eax,1),%eax
085bd028 +0x4e8:  add    $0x78,%eax
085bd02b +0x4eb:  mov    (%eax),%eax
085bd02d +0x4ed:  lea    -0x60(%ebp),%edx
085bd030 +0x4f0:  mov    %edx,0x4(%esp)
085bd034 +0x4f4:  mov    %eax,(%esp)
085bd037 +0x4f7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085bd03c +0x4fc:  jmp    085bd056 <+0x516>
085bd03e +0x4fe:  mov    %edx,%ebx
085bd040 +0x500:  mov    %eax,%esi
085bd042 +0x502:  lea    -0x60(%ebp),%eax
085bd045 +0x505:  mov    %eax,(%esp)
085bd048 +0x508:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085bd04d +0x50d:  mov    %esi,%eax
085bd04f +0x50f:  mov    %ebx,%edx
085bd051 +0x511:  jmp    085bd122 <+0x5e2>
085bd056 +0x516:  lea    -0x60(%ebp),%eax
085bd059 +0x519:  mov    %eax,(%esp)
085bd05c +0x51c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085bd061 +0x521:  mov    -0x14(%ebp),%eax
085bd064 +0x524:  mov    %eax,0x4(%esp)
085bd068 +0x528:  lea    -0x4c(%ebp),%eax
085bd06b +0x52b:  mov    %eax,(%esp)
085bd06e +0x52e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085bd073 +0x533:  mov    -0x18(%ebp),%eax
085bd076 +0x536:  mov    %eax,0x4(%esp)
085bd07a +0x53a:  lea    -0x4c(%ebp),%eax
085bd07d +0x53d:  mov    %eax,(%esp)
085bd080 +0x540:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085bd085 +0x545:  cmpb   $0x0,-0x31(%ebp)
085bd089 +0x549:  je     085bd0ba <+0x57a>
085bd08b +0x54b:  mov    -0x10(%ebp),%edx
085bd08e +0x54e:  mov    0x8(%ebp),%ecx
085bd091 +0x551:  mov    %edx,%eax
085bd093 +0x553:  add    %eax,%eax
085bd095 +0x555:  add    %edx,%eax
085bd097 +0x557:  shl    $0x3,%eax
085bd09a +0x55a:  lea    (%ecx,%eax,1),%eax
085bd09d +0x55d:  add    $0x78,%eax
085bd0a0 +0x560:  mov    (%eax),%eax
085bd0a2 +0x562:  mov    %eax,0x8(%esp)
085bd0a6 +0x566:  lea    -0x4c(%ebp),%eax
085bd0a9 +0x569:  mov    %eax,0x4(%esp)
085bd0ad +0x56d:  mov    0x8(%ebp),%eax
085bd0b0 +0x570:  mov    %eax,(%esp)
085bd0b3 +0x573:  call   085bd7ae <_ZN6CParty21MakeQuestRewardPacketEP11PacketGuardP5CUser>  ; CParty::MakeQuestRewardPacket(PacketGuard*, CUser*)
085bd0b8 +0x578:  jmp    085bd0cd <+0x58d>
085bd0ba +0x57a:  movl   $0x0,0x4(%esp)
085bd0c2 +0x582:  lea    -0x4c(%ebp),%eax
085bd0c5 +0x585:  mov    %eax,(%esp)
085bd0c8 +0x588:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085bd0cd +0x58d:  movzbl -0x31(%ebp),%eax
085bd0d1 +0x591:  mov    %eax,0x8(%esp)
085bd0d5 +0x595:  lea    -0x4c(%ebp),%eax
085bd0d8 +0x598:  mov    %eax,0x4(%esp)
085bd0dc +0x59c:  mov    0xc(%ebp),%eax
085bd0df +0x59f:  mov    %eax,(%esp)
085bd0e2 +0x5a2:  call   08284caa <_ZN24CTournamentDungeonReward16MakeRewardPacketEP11PacketGuardb>  ; CTournamentDungeonReward::MakeRewardPacket(PacketGuard*, bool)
085bd0e7 +0x5a7:  movl   $0x1,0x4(%esp)
085bd0ef +0x5af:  lea    -0x4c(%ebp),%eax
085bd0f2 +0x5b2:  mov    %eax,(%esp)
085bd0f5 +0x5b5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085bd0fa +0x5ba:  mov    -0x10(%ebp),%edx
085bd0fd +0x5bd:  mov    0x8(%ebp),%ecx
085bd100 +0x5c0:  mov    %edx,%eax
085bd102 +0x5c2:  add    %eax,%eax
085bd104 +0x5c4:  add    %edx,%eax
085bd106 +0x5c6:  shl    $0x3,%eax
085bd109 +0x5c9:  lea    (%ecx,%eax,1),%eax
085bd10c +0x5cc:  add    $0x78,%eax
085bd10f +0x5cf:  mov    (%eax),%eax
085bd111 +0x5d1:  lea    -0x4c(%ebp),%edx
085bd114 +0x5d4:  mov    %edx,0x4(%esp)
085bd118 +0x5d8:  mov    %eax,(%esp)
085bd11b +0x5db:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085bd120 +0x5e0:  jmp    085bd137 <+0x5f7>
085bd122 +0x5e2:  mov    %edx,%ebx
085bd124 +0x5e4:  mov    %eax,%esi
085bd126 +0x5e6:  lea    -0x4c(%ebp),%eax
085bd129 +0x5e9:  mov    %eax,(%esp)
085bd12c +0x5ec:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085bd131 +0x5f1:  mov    %esi,%eax
085bd133 +0x5f3:  mov    %ebx,%edx
085bd135 +0x5f5:  jmp    085bd17d <+0x63d>
085bd137 +0x5f7:  lea    -0x4c(%ebp),%eax
085bd13a +0x5fa:  mov    %eax,(%esp)
085bd13d +0x5fd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085bd142 +0x602:  addl   $0x1,-0x10(%ebp)
085bd146 +0x606:  cmpl   $0x3,-0x10(%ebp)
085bd14a +0x60a:  setle  %al
085bd14d +0x60d:  test   %al,%al
085bd14f +0x60f:  jne    085bce2d <+0x2ed>
085bd155 +0x615:  movl   $0x1,0x4(%esp)
085bd15d +0x61d:  mov    0x8(%ebp),%eax
085bd160 +0x620:  mov    %eax,(%esp)
085bd163 +0x623:  call   085bd6bc <_ZN6CParty30SetTournamentDungeonClearStateEc>  ; CParty::SetTournamentDungeonClearState(char)
085bd168 +0x628:  movl   $0x2e,0x4(%esp)
085bd170 +0x630:  mov    0x8(%ebp),%eax
085bd173 +0x633:  mov    %eax,(%esp)
085bd176 +0x636:  call   085bd6de <_ZN6CParty28InsertTournamentDungeonTimerE13TIMER_MESSAGE>  ; CParty::InsertTournamentDungeonTimer(TIMER_MESSAGE)
085bd17b +0x63b:  jmp    085bd195 <+0x655>
085bd17d +0x63d:  mov    %edx,%ebx
085bd17f +0x63f:  mov    %eax,%esi
085bd181 +0x641:  lea    -0x90(%ebp),%eax
085bd187 +0x647:  mov    %eax,(%esp)
085bd18a +0x64a:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
085bd18f +0x64f:  mov    %esi,%eax
085bd191 +0x651:  mov    %ebx,%edx
085bd193 +0x653:  jmp    085bd1a5 <+0x665>
085bd195 +0x655:  lea    -0x90(%ebp),%eax
085bd19b +0x65b:  mov    %eax,(%esp)
085bd19e +0x65e:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
085bd1a3 +0x663:  jmp    085bd1c3 <+0x683>
085bd1a5 +0x665:  mov    %edx,%ebx
085bd1a7 +0x667:  mov    %eax,%esi
085bd1a9 +0x669:  lea    -0xd8(%ebp),%eax
085bd1af +0x66f:  mov    %eax,(%esp)
085bd1b2 +0x672:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
085bd1b7 +0x677:  mov    %esi,%eax
085bd1b9 +0x679:  mov    %ebx,%edx
085bd1bb +0x67b:  mov    %eax,(%esp)
085bd1be +0x67e:  call   08ae3750 <_Unwind_Resume>
085bd1c3 +0x683:  lea    -0xd8(%ebp),%eax
085bd1c9 +0x689:  mov    %eax,(%esp)
085bd1cc +0x68c:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
085bd1d1 +0x691:  lea    -0x8(%ebp),%esp
085bd1d4 +0x694:  add    $0x0,%esp
085bd1d7 +0x697:  pop    %ebx
085bd1d8 +0x698:  pop    %esi
085bd1d9 +0x699:  pop    %ebp
085bd1da +0x69a:  ret
085bd1db +0x69b:  nop
```

## 反编译 C

```c
// CParty::MakeTournamentReward @ 0x85bcb40

/* CParty::MakeTournamentReward(CTournamentDungeonReward&) */

void __thiscall CParty::MakeTournamentReward(CParty *this,CTournamentDungeonReward *param_1)

{
  CParty CVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CDataManager *this_00;
  CItemGeneratorMgr *pCVar5;
  int *piVar6;
  stGenerateRefData_t local_dc [52];
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  stGenerateResult_t local_94 [48];
  PacketGuard local_64 [12];
  undefined4 local_58;
  undefined4 local_54;
  PacketGuard local_50 [12];
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,unsigned_int>> local_44 [7];
  undefined1 local_3d;
  map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
  local_3c [7];
  CParty local_35;
  int local_34;
  CDungeon *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  CVar1 = this[0x11a];
  local_35 = CVar1;
  iVar3 = CBattle_Field::GetTournamentCurRound((CBattle_Field *)(this + 0xb24));
  CTournamentDungeonReward::MakeReward
            (param_1,(map *)(*(int *)(this + 0xcac) + 0x8ac),
             (TournamentRewardItemRate *)(*(int *)(this + 0xcac) + 0x8c4),iVar3,(bool)CVar1);
  local_34 = G_CDataManager();
  CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
  local_30 = (CDungeon *)CDataManager::find_dungeon(local_34);
  local_2c = get_member_count(this);
  if (local_30 == (CDungeon *)0x0) {
    uVar4 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
    LogManager::logFormat
              (1,"party.cpp","void CParty::MakeTournamentReward(CTournamentDungeonReward&)",0x4540,
               "Unknown Dungeon %d",uVar4);
  }
  else if (local_2c < 1) {
    LogManager::logFormat
              (1,"party.cpp","void CParty::MakeTournamentReward(CTournamentDungeonReward&)",0x4545,
               "No Member[%d] in party",local_2c);
  }
  else {
    local_28 = CDungeon::get_standard_level(local_30);
    local_24 = local_28;
    WongWork::stGenerateRefData_t::stGenerateRefData_t(local_dc);
    local_a7 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
    local_a8 = (undefined1)local_24;
    local_a6 = (undefined1)local_2c;
    local_a4 = 1;
    local_a0 = (undefined2)*(undefined4 *)(this + 0x374);
    local_9e = (undefined2)*(undefined4 *)(this + 0x36c);
    local_9c = 0;
    local_9a = (undefined2)*(undefined4 *)(this + 0x370);
                    /* try { // try from 085bccfc to 085bcd00 has its CatchHandler @ 085bd1a5 */
    WongWork::stGenerateResult_t::stGenerateResult_t(local_94);
                    /* try { // try from 085bcd01 to 085bce37 has its CatchHandler @ 085bd17d */
    this_00 = (CDataManager *)G_CDataManager();
    pCVar5 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(this_00);
    piVar6 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar5,2);
    (**(code **)(*piVar6 + 0xc))(piVar6,local_dc,local_94);
    local_20 = *(float *)(local_30 + 0x8d4);
    if (local_20 < 0.0) {
      local_20 = 1.0;
    }
    CTournamentDungeonReward::SetRewardGold(param_1,local_94,local_20);
    local_1c = 0;
    local_18 = CBattle_Field::GetTournamentCurRound((CBattle_Field *)(this + 0xb24));
    if (local_35 != (CParty)0x1) {
      local_18 = local_18 + -1;
    }
    if (local_18 < 0) {
      local_18 = 0;
    }
    local_3d = (undefined1)local_18;
    std::
    map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
    ::find((uchar *)local_44);
    std::
    map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
    ::end(local_3c);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,unsigned_int>>::operator!=
                      (local_44,(_Rb_tree_const_iterator *)local_3c);
    if (cVar2 != '\0') {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,unsigned_int>>::operator->
                        (local_44);
      local_1c = *(int *)(iVar3 + 4);
    }
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      PacketGuard::PacketGuard(local_50);
                    /* try { // try from 085bce3e to 085bcf88 has its CatchHandler @ 085bd122 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_50);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x184);
      local_10 = 0;
      cVar2 = _checkValidUser(this,local_14);
      if (cVar2 == '\x01') {
        CUser::setChattingMessageCount(*(CUser **)(this + local_14 * 0x18 + 0x78),0);
        isHelpAbuseParty((CUser *)this);
        CUserCharacInfo::calcHelpAbuseRatio
                  (*(uint *)(this + local_14 * 0x18 + 0x78),SUB41(local_1c,0));
        CUserCharacInfo::reset_level_before_dungeon
                  (*(CUserCharacInfo **)(this + local_14 * 0x18 + 0x78));
        local_54 = 0;
        local_58 = 0;
        cVar2 = CUser::gain_exp_sp(*(CUser **)(this + local_14 * 0x18 + 0x78),local_1c,&local_54,
                                   &local_58,2,0,0);
        if (cVar2 != '\0') {
          PacketGuard::PacketGuard(local_64);
                    /* try { // try from 085bcf8f to 085bd03b has its CatchHandler @ 085bd03e */
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_64);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,0,2);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,1);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,1);
          CUser::make_basic_info(*(CUser **)(this + local_14 * 0x18 + 0x78),(char *)local_64,'\x01')
          ;
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
          CUser::Send(*(CUser **)(this + local_14 * 0x18 + 0x78),local_64);
                    /* try { // try from 085bd05c to 085bd11f has its CatchHandler @ 085bd122 */
          PacketGuard::~PacketGuard(local_64);
        }
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_18);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_1c);
        if (local_35 == (CParty)0x0) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        }
        else {
          MakeQuestRewardPacket(this,local_50,*(CUser **)(this + local_14 * 0x18 + 0x78));
        }
        CTournamentDungeonReward::MakeRewardPacket(param_1,local_50,(bool)local_35);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
        CUser::Send(*(CUser **)(this + local_14 * 0x18 + 0x78),local_50);
      }
                    /* try { // try from 085bd13d to 085bd17a has its CatchHandler @ 085bd17d */
      PacketGuard::~PacketGuard(local_50);
    }
    SetTournamentDungeonClearState(this,'\x01');
    InsertTournamentDungeonTimer(this,0x2e);
                    /* try { // try from 085bd19e to 085bd1a2 has its CatchHandler @ 085bd1a5 */
    WongWork::stGenerateResult_t::~stGenerateResult_t(local_94);
    WongWork::stGenerateRefData_t::~stGenerateRefData_t(local_dc);
  }
  return;
}
```
