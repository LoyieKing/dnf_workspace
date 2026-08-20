# add_hell_party_monster

`_ZN13CBattle_Field22add_hell_party_monsterER11map_monsterRiS2_PSt3mapIt21STHellPartyGroupOrderSt4lessItESaISt4pairIKtS4_EEE`

`CBattle_Field::add_hell_party_monster(map_monster&, int&, int&, std::map<unsigned short, STHellPartyGroupOrder, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, STHellPartyGroupOrder> > >*)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083071ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083071ba  _ZN13CBattle_Field22add_hell_party_monsterER11map_monsterRiS2_PSt3mapIt21STHellPartyGroupOrderSt4lessItESaISt4pairIKtS4_EEE
#           CBattle_Field::add_hell_party_monster(map_monster&, int&, int&, std::map<unsigned short, STHellPartyGroupOrder, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, STHellPartyGroupOrder> > >*)
# range [0x083071ba, 0x08307655]
083071ba +0x000:  push   %ebp
083071bb +0x001:  mov    %esp,%ebp
083071bd +0x003:  push   %esi
083071be +0x004:  push   %ebx
083071bf +0x005:  sub    $0x3d0,%esp
083071c5 +0x00b:  movl   $0x0,-0x24(%ebp)
083071cc +0x012:  movl   $0x0,-0x20(%ebp)
083071d3 +0x019:  movl   $0x1,-0x1c(%ebp)
083071da +0x020:  movl   $0x0,-0x18(%ebp)
083071e1 +0x027:  mov    0x8(%ebp),%eax
083071e4 +0x02a:  mov    %eax,(%esp)
083071e7 +0x02d:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083071ec +0x032:  add    $0x8c,%eax
083071f1 +0x037:  mov    %eax,(%esp)
083071f4 +0x03a:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
083071f9 +0x03f:  lea    -0x3a0(%ebp),%eax
083071ff +0x045:  mov    0x18(%ebp),%edx
08307202 +0x048:  mov    %edx,0x4(%esp)
08307206 +0x04c:  mov    %eax,(%esp)
08307209 +0x04f:  call   08311a7e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3663>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3663
0830720e +0x054:  sub    $0x4,%esp
08307211 +0x057:  jmp    08307613 <+0x459>
08307216 +0x05c:  lea    -0x3a0(%ebp),%eax
0830721c +0x062:  mov    %eax,(%esp)
0830721f +0x065:  call   08311afc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x36e1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x36e1
08307224 +0x06a:  add    $0x10,%eax
08307227 +0x06d:  mov    %eax,0x4(%esp)
0830722b +0x071:  lea    -0x3a8(%ebp),%eax
08307231 +0x077:  mov    %eax,(%esp)
08307234 +0x07a:  call   08311b0a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x36ef>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x36ef
08307239 +0x07f:  lea    -0x3ac(%ebp),%eax
0830723f +0x085:  lea    -0x3a8(%ebp),%edx
08307245 +0x08b:  mov    %edx,0x4(%esp)
08307249 +0x08f:  mov    %eax,(%esp)
0830724c +0x092:  call   08311bd4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x37b9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x37b9
08307251 +0x097:  sub    $0x4,%esp
08307254 +0x09a:  lea    -0x3a0(%ebp),%eax
0830725a +0x0a0:  mov    %eax,(%esp)
0830725d +0x0a3:  call   08311afc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x36e1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x36e1
08307262 +0x0a8:  mov    0x8(%ebp),%edx
08307265 +0x0ab:  movzbl 0x1cc(%edx),%edx
0830726c +0x0b2:  movsbl %dl,%edx
0830726f +0x0b5:  movzwl 0x4(%eax,%edx,2),%eax
08307274 +0x0ba:  movzwl %ax,%eax
08307277 +0x0bd:  mov    %eax,-0x18(%ebp)
0830727a +0x0c0:  mov    -0x18(%ebp),%eax
0830727d +0x0c3:  mov    %eax,(%esp)
08307280 +0x0c6:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08307285 +0x0cb:  mov    %eax,-0x14(%ebp)
08307288 +0x0ce:  jmp    0830759c <+0x3e2>
0830728d +0x0d3:  lea    -0x3ac(%ebp),%eax
08307293 +0x0d9:  mov    %eax,(%esp)
08307296 +0x0dc:  call   08311c32 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3817>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3817
0830729b +0x0e1:  movzbl 0x8(%eax),%edx
0830729f +0x0e5:  mov    0x8(%ebp),%eax
083072a2 +0x0e8:  movzbl 0x1cc(%eax),%eax
083072a9 +0x0ef:  cmp    %al,%dl
083072ab +0x0f1:  setne  %al
083072ae +0x0f4:  test   %al,%al
083072b0 +0x0f6:  je     083072da <+0x120>
083072b2 +0x0f8:  lea    -0x394(%ebp),%eax
083072b8 +0x0fe:  movl   $0x0,0x8(%esp)
083072c0 +0x106:  lea    -0x3ac(%ebp),%edx
083072c6 +0x10c:  mov    %edx,0x4(%esp)
083072ca +0x110:  mov    %eax,(%esp)
083072cd +0x113:  call   08311c40 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3825>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3825
083072d2 +0x118:  sub    $0x4,%esp
083072d5 +0x11b:  jmp    0830759c <+0x3e2>
083072da +0x120:  lea    -0x3ac(%ebp),%eax
083072e0 +0x126:  mov    %eax,(%esp)
083072e3 +0x129:  call   08311c32 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3817>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3817
083072e8 +0x12e:  mov    0x4(%eax),%eax
083072eb +0x131:  add    %eax,-0x24(%ebp)
083072ee +0x134:  mov    -0x24(%ebp),%eax
083072f1 +0x137:  cmp    -0x14(%ebp),%eax
083072f4 +0x13a:  jge    0830731e <+0x164>
083072f6 +0x13c:  lea    -0x390(%ebp),%eax
083072fc +0x142:  movl   $0x0,0x8(%esp)
08307304 +0x14a:  lea    -0x3ac(%ebp),%edx
0830730a +0x150:  mov    %edx,0x4(%esp)
0830730e +0x154:  mov    %eax,(%esp)
08307311 +0x157:  call   08311c40 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3825>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3825
08307316 +0x15c:  sub    $0x4,%esp
08307319 +0x15f:  jmp    0830759c <+0x3e2>
0830731e +0x164:  movl   $0x0,-0x10(%ebp)
08307325 +0x16b:  lea    -0x3ac(%ebp),%eax
0830732b +0x171:  mov    %eax,(%esp)
0830732e +0x174:  call   08311c32 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3817>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3817
08307333 +0x179:  mov    (%eax),%ebx
08307335 +0x17b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830733a +0x180:  mov    %ebx,0x4(%esp)
0830733e +0x184:  mov    %eax,(%esp)
08307341 +0x187:  call   08363716 <_ZN12CDataManager20find_hellparty_groupEi>  ; CDataManager::find_hellparty_group(int)
08307346 +0x18c:  mov    %eax,-0xc(%ebp)
08307349 +0x18f:  cmpl   $0x0,-0xc(%ebp)
0830734d +0x193:  jne    08307507 <+0x34d>
08307353 +0x199:  mov    0x8(%ebp),%eax
08307356 +0x19c:  mov    %eax,(%esp)
08307359 +0x19f:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830735e +0x1a4:  mov    0x4(%eax),%ebx
08307361 +0x1a7:  lea    -0x3ac(%ebp),%eax
08307367 +0x1ad:  mov    %eax,(%esp)
0830736a +0x1b0:  call   08311c32 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3817>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3817
0830736f +0x1b5:  mov    (%eax),%eax
08307371 +0x1b7:  mov    %ebx,0x18(%esp)
08307375 +0x1bb:  mov    %eax,0x14(%esp)
08307379 +0x1bf:  movl   $"HELLPARTY_LOG : HELLPARTY GROUP INDEX (%d) , MAP INDEX (%d) : ADD HELL PARTY GROUP ERROR!!\n",0x10(%esp)
08307381 +0x1c7:  movl   $0x1076,0xc(%esp)
08307389 +0x1cf:  movl   $&_ZZN13CBattle_Field22add_hell_party_monsterER11map_monsterRiS2_PSt3mapIt21STHellPartyGroupOrderSt4lessItESaISt4pairIKtS4_EEEE19__PRETTY_FUNCTION__,0x8(%esp)
08307391 +0x1d7:  movl   $"battle_field.cpp",0x4(%esp)
08307399 +0x1df:  movl   $0x1,(%esp)
083073a0 +0x1e6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083073a5 +0x1eb:  jmp    083075d7 <+0x41d>
083073aa +0x1f0:  mov    0x14(%ebp),%eax
083073ad +0x1f3:  mov    (%eax),%eax
083073af +0x1f5:  mov    0xc(%ebp),%edx
083073b2 +0x1f8:  mov    %eax,(%edx)
083073b4 +0x1fa:  lea    0x1(%eax),%edx
083073b7 +0x1fd:  mov    0x14(%ebp),%eax
083073ba +0x200:  mov    %edx,(%eax)
083073bc +0x202:  lea    -0x3a0(%ebp),%eax
083073c2 +0x208:  mov    %eax,(%esp)
083073c5 +0x20b:  call   08311afc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x36e1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x36e1
083073ca +0x210:  movzwl (%eax),%edx
083073cd +0x213:  mov    0xc(%ebp),%eax
083073d0 +0x216:  mov    %dx,0x334(%eax)
083073d7 +0x21d:  lea    -0x3ac(%ebp),%eax
083073dd +0x223:  mov    %eax,(%esp)
083073e0 +0x226:  call   08311c32 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3817>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3817
083073e5 +0x22b:  mov    (%eax),%eax
083073e7 +0x22d:  mov    %eax,%edx
083073e9 +0x22f:  mov    0xc(%ebp),%eax
083073ec +0x232:  mov    %dx,0x336(%eax)
083073f3 +0x239:  mov    0x8(%ebp),%eax
083073f6 +0x23c:  mov    0x188(%eax),%eax
083073fc +0x242:  mov    %eax,(%esp)
083073ff +0x245:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
08307404 +0x24a:  mov    %eax,%edx
08307406 +0x24c:  mov    0xc(%ebp),%eax
08307409 +0x24f:  mov    %dl,0x10(%eax)
0830740c +0x252:  mov    -0x10(%ebp),%edx
0830740f +0x255:  mov    -0xc(%ebp),%eax
08307412 +0x258:  mov    (%eax,%edx,4),%edx
08307415 +0x25b:  mov    0xc(%ebp),%eax
08307418 +0x25e:  mov    %edx,0xc(%eax)
0830741b +0x261:  mov    -0x10(%ebp),%eax
0830741e +0x264:  mov    -0xc(%ebp),%edx
08307421 +0x267:  movzbl 0x40(%edx,%eax,1),%eax
08307426 +0x26c:  test   %al,%al
08307428 +0x26e:  jne    08307433 <+0x279>
0830742a +0x270:  mov    0xc(%ebp),%eax
0830742d +0x273:  movb   $0x0,0x8(%eax)
08307431 +0x277:  jmp    0830743a <+0x280>
08307433 +0x279:  mov    0xc(%ebp),%eax
08307436 +0x27c:  movb   $0x5,0x8(%eax)
0830743a +0x280:  mov    0x10(%ebp),%eax
0830743d +0x283:  mov    (%eax),%eax
0830743f +0x285:  mov    0xc(%ebp),%edx
08307442 +0x288:  mov    %eax,0x4(%edx)
08307445 +0x28b:  lea    0x1(%eax),%edx
08307448 +0x28e:  mov    0x10(%ebp),%eax
0830744b +0x291:  mov    %edx,(%eax)
0830744d +0x293:  mov    0xc(%ebp),%eax
08307450 +0x296:  movl   $0x64,0x2c(%eax)
08307457 +0x29d:  mov    0xc(%ebp),%eax
0830745a +0x2a0:  movb   $0x1,0x13(%eax)
0830745e +0x2a4:  mov    0xc(%ebp),%eax
08307461 +0x2a7:  movb   $0x0,0x14(%eax)
08307465 +0x2ab:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830746a +0x2b0:  mov    %eax,(%esp)
0830746d +0x2b3:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
08307472 +0x2b8:  mov    0x8(%ebp),%edx
08307475 +0x2bb:  movzbl 0x1cc(%edx),%edx
0830747c +0x2c2:  movsbl %dl,%edx
0830747f +0x2c5:  movzbl 0x6c(%eax,%edx,1),%edx
08307484 +0x2ca:  mov    0xc(%ebp),%eax
08307487 +0x2cd:  mov    %dl,0x11(%eax)
0830748a +0x2d0:  mov    0xc(%ebp),%eax
0830748d +0x2d3:  movb   $0x1,0x12(%eax)
08307491 +0x2d7:  mov    0x8(%ebp),%eax
08307494 +0x2da:  movzbl 0x1cc(%eax),%edx
0830749b +0x2e1:  mov    0xc(%ebp),%eax
0830749e +0x2e4:  mov    %dl,0x338(%eax)
083074a4 +0x2ea:  mov    0xc(%ebp),%eax
083074a7 +0x2ed:  mov    %eax,0x4(%esp)
083074ab +0x2f1:  lea    -0x38c(%ebp),%eax
083074b1 +0x2f7:  mov    %eax,(%esp)
083074b4 +0x2fa:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
083074b9 +0x2ff:  mov    0x8(%ebp),%eax
083074bc +0x302:  mov    %eax,(%esp)
083074bf +0x305:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083074c4 +0x30a:  lea    -0x38c(%ebp),%edx
083074ca +0x310:  mov    %edx,0x4(%esp)
083074ce +0x314:  mov    %eax,(%esp)
083074d1 +0x317:  call   08151612 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf47>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf47
083074d6 +0x31c:  jmp    083074f3 <+0x339>
083074d8 +0x31e:  mov    %edx,%ebx
083074da +0x320:  mov    %eax,%esi
083074dc +0x322:  lea    -0x38c(%ebp),%eax
083074e2 +0x328:  mov    %eax,(%esp)
083074e5 +0x32b:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
083074ea +0x330:  mov    %esi,%eax
083074ec +0x332:  mov    %ebx,%edx
083074ee +0x334:  jmp    083075f5 <+0x43b>
083074f3 +0x339:  lea    -0x38c(%ebp),%eax
083074f9 +0x33f:  mov    %eax,(%esp)
083074fc +0x342:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08307501 +0x347:  addl   $0x1,-0x10(%ebp)
08307505 +0x34b:  jmp    08307508 <+0x34e>
08307507 +0x34d:  nop
08307508 +0x34e:  mov    -0x10(%ebp),%edx
0830750b +0x351:  mov    -0xc(%ebp),%eax
0830750e +0x354:  mov    (%eax,%edx,4),%eax
08307511 +0x357:  test   %eax,%eax
08307513 +0x359:  setg   %al
08307516 +0x35c:  test   %al,%al
08307518 +0x35e:  jne    083073aa <+0x1f0>
0830751e +0x364:  mov    -0x10(%ebp),%eax
08307521 +0x367:  sub    $0x1,%eax
08307524 +0x36a:  mov    %eax,-0x28(%ebp)
08307527 +0x36d:  lea    -0x3ac(%ebp),%eax
0830752d +0x373:  mov    %eax,(%esp)
08307530 +0x376:  call   08311c32 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3817>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3817
08307535 +0x37b:  mov    %eax,%edx
08307537 +0x37d:  lea    -0x30(%ebp),%eax
0830753a +0x380:  lea    -0x28(%ebp),%ecx
0830753d +0x383:  mov    %ecx,0x8(%esp)
08307541 +0x387:  mov    %edx,0x4(%esp)
08307545 +0x38b:  mov    %eax,(%esp)
08307548 +0x38e:  call   080dd799 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x2e2>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x2e2
0830754d +0x393:  sub    $0x4,%esp
08307550 +0x396:  lea    -0x30(%ebp),%eax
08307553 +0x399:  mov    %eax,0x4(%esp)
08307557 +0x39d:  lea    -0x38(%ebp),%eax
0830755a +0x3a0:  mov    %eax,(%esp)
0830755d +0x3a3:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
08307562 +0x3a8:  mov    0x8(%ebp),%eax
08307565 +0x3ab:  mov    %eax,(%esp)
08307568 +0x3ae:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830756d +0x3b3:  lea    0x8c(%eax),%ecx
08307573 +0x3b9:  lea    -0x40(%ebp),%eax
08307576 +0x3bc:  lea    -0x38(%ebp),%edx
08307579 +0x3bf:  mov    %edx,0x8(%esp)
0830757d +0x3c3:  mov    %ecx,0x4(%esp)
08307581 +0x3c7:  mov    %eax,(%esp)
08307584 +0x3ca:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
08307589 +0x3cf:  sub    $0x4,%esp
0830758c +0x3d2:  movl   $0x0,-0x24(%ebp)
08307593 +0x3d9:  movl   $0x0,-0x20(%ebp)
0830759a +0x3e0:  jmp    083075d7 <+0x41d>
0830759c +0x3e2:  lea    -0x398(%ebp),%eax
083075a2 +0x3e8:  lea    -0x3a8(%ebp),%edx
083075a8 +0x3ee:  mov    %edx,0x4(%esp)
083075ac +0x3f2:  mov    %eax,(%esp)
083075af +0x3f5:  call   08311bfa <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x37df>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x37df
083075b4 +0x3fa:  sub    $0x4,%esp
083075b7 +0x3fd:  lea    -0x398(%ebp),%eax
083075bd +0x403:  mov    %eax,0x4(%esp)
083075c1 +0x407:  lea    -0x3ac(%ebp),%eax
083075c7 +0x40d:  mov    %eax,(%esp)
083075ca +0x410:  call   08311c1e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3803>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3803
083075cf +0x415:  test   %al,%al
083075d1 +0x417:  jne    0830728d <+0xd3>
083075d7 +0x41d:  lea    -0x3a8(%ebp),%eax
083075dd +0x423:  mov    %eax,(%esp)
083075e0 +0x426:  call   0830e4e8 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xcd>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xcd
083075e5 +0x42b:  lea    -0x3a0(%ebp),%eax
083075eb +0x431:  mov    %eax,(%esp)
083075ee +0x434:  call   08311ade <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x36c3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x36c3
083075f3 +0x439:  jmp    08307613 <+0x459>
083075f5 +0x43b:  mov    %edx,%ebx
083075f7 +0x43d:  mov    %eax,%esi
083075f9 +0x43f:  lea    -0x3a8(%ebp),%eax
083075ff +0x445:  mov    %eax,(%esp)
08307602 +0x448:  call   0830e4e8 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xcd>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xcd
08307607 +0x44d:  mov    %esi,%eax
08307609 +0x44f:  mov    %ebx,%edx
0830760b +0x451:  mov    %eax,(%esp)
0830760e +0x454:  call   08ae3750 <_Unwind_Resume>
08307613 +0x459:  lea    -0x39c(%ebp),%eax
08307619 +0x45f:  mov    0x18(%ebp),%edx
0830761c +0x462:  mov    %edx,0x4(%esp)
08307620 +0x466:  mov    %eax,(%esp)
08307623 +0x469:  call   08311aa4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3689>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3689
08307628 +0x46e:  sub    $0x4,%esp
0830762b +0x471:  lea    -0x39c(%ebp),%eax
08307631 +0x477:  mov    %eax,0x4(%esp)
08307635 +0x47b:  lea    -0x3a0(%ebp),%eax
0830763b +0x481:  mov    %eax,(%esp)
0830763e +0x484:  call   08311aca <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x36af>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x36af
08307643 +0x489:  test   %al,%al
08307645 +0x48b:  jne    08307216 <+0x5c>
0830764b +0x491:  lea    -0x8(%ebp),%esp
0830764e +0x494:  add    $0x0,%esp
08307651 +0x497:  pop    %ebx
08307652 +0x498:  pop    %esi
08307653 +0x499:  pop    %ebp
08307654 +0x49a:  ret
08307655 +0x49b:  nop
```

## 反编译 C

```c
// CBattle_Field::add_hell_party_monster @ 0x83071ba

/* CBattle_Field::add_hell_party_monster(map_monster&, int&, int&, std::map<unsigned short,
   STHellPartyGroupOrder, std::less<unsigned short>, std::allocator<std::pair<unsigned short const,
   STHellPartyGroupOrder> > >*) */

void CBattle_Field::add_hell_party_monster
               (map_monster *param_1,int *param_2,int *param_3,map *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  CDataManager *this;
  undefined4 *puVar6;
  undefined2 *puVar7;
  MapInfo *pMVar8;
  _List_iterator<STHellPartyGroupRate> local_3b0 [4];
  list<STHellPartyGroupRate,std::allocator<STHellPartyGroupRate>> local_3ac [8];
  map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>
  local_3a4 [4];
  map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>
  local_3a0 [4];
  _List_iterator local_39c [4];
  _List_iterator<STHellPartyGroupRate> local_398 [4];
  _List_iterator<STHellPartyGroupRate> local_394 [4];
  map_monster local_390 [844];
  pair local_44 [8];
  pair<int_const,int> local_3c [8];
  int local_34 [2];
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 1;
  local_1c = 0;
  iVar4 = GetCurrentMapInfo((CBattle_Field *)param_1);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(iVar4 + 0x8c))
  ;
  std::
  map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>
  ::begin(local_3a4);
  do {
    std::
    map<unsigned_short,STHellPartyGroupOrder,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>>
    ::end(local_3a0);
    cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_short_const,STHellPartyGroupOrder>> *)
                       local_3a4,(_Rb_tree_iterator *)local_3a0);
    if (cVar3 == '\0') {
      return;
    }
    iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STHellPartyGroupOrder>> *)
                       local_3a4);
    std::list<STHellPartyGroupRate,std::allocator<STHellPartyGroupRate>>::list
              (local_3ac,(list *)(iVar4 + 0x10));
                    /* try { // try from 0830724c to 083074b8 has its CatchHandler @ 083075f5 */
    std::list<STHellPartyGroupRate,std::allocator<STHellPartyGroupRate>>::begin();
    iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STHellPartyGroupOrder>> *)
                       local_3a4);
    local_1c = (uint)*(ushort *)(iVar4 + 4 + (char)param_1[0x1cc] * 2);
    local_18 = get_rand_int(local_1c);
    while( true ) {
      std::list<STHellPartyGroupRate,std::allocator<STHellPartyGroupRate>>::end();
      cVar3 = std::_List_iterator<STHellPartyGroupRate>::operator!=(local_3b0,local_39c);
      if (cVar3 == '\0') break;
      iVar4 = std::_List_iterator<STHellPartyGroupRate>::operator->(local_3b0);
      if (*(map_monster *)(iVar4 + 8) == param_1[0x1cc]) {
        iVar4 = std::_List_iterator<STHellPartyGroupRate>::operator->(local_3b0);
        local_28 = local_28 + *(int *)(iVar4 + 4);
        if (local_18 <= local_28) {
          local_14 = 0;
          piVar5 = (int *)std::_List_iterator<STHellPartyGroupRate>::operator->(local_3b0);
          iVar4 = *piVar5;
          this = (CDataManager *)G_CDataManager();
          local_10 = CDataManager::find_hellparty_group(this,iVar4);
          if (local_10 == 0) {
            iVar4 = GetCurrentMapInfo((CBattle_Field *)param_1);
            uVar1 = *(undefined4 *)(iVar4 + 4);
            puVar6 = (undefined4 *)std::_List_iterator<STHellPartyGroupRate>::operator->(local_3b0);
            LogManager::logFormat
                      (1,"battle_field.cpp",
                       "void CBattle_Field::add_hell_party_monster(map_monster&, int&, int&, MAP_HELL_PARTY_GROUP_ORDER*)"
                       ,0x1076,
                       "HELLPARTY_LOG : HELLPARTY GROUP INDEX (%d) , MAP INDEX (%d) : ADD HELL PARTY GROUP ERROR!!\n"
                       ,*puVar6,uVar1);
          }
          else {
            for (; 0 < *(int *)(local_10 + local_14 * 4); local_14 = local_14 + 1) {
              iVar4 = *(int *)param_4;
              *param_2 = iVar4;
              *(int *)param_4 = iVar4 + 1;
              puVar7 = (undefined2 *)
                       std::_Rb_tree_iterator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>
                       ::operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>
                                     *)local_3a4);
              *(undefined2 *)(param_2 + 0xcd) = *puVar7;
              puVar6 = (undefined4 *)
                       std::_List_iterator<STHellPartyGroupRate>::operator->(local_3b0);
              *(short *)((int)param_2 + 0x336) = (short)*puVar6;
              uVar2 = CDungeon::get_standard_level(*(CDungeon **)(param_1 + 0x188));
              *(undefined1 *)(param_2 + 4) = uVar2;
              param_2[3] = *(int *)(local_10 + local_14 * 4);
              if (*(char *)(local_10 + 0x40 + local_14) == '\0') {
                *(undefined1 *)(param_2 + 2) = 0;
              }
              else {
                *(undefined1 *)(param_2 + 2) = 5;
              }
              iVar4 = *param_3;
              param_2[1] = iVar4;
              *param_3 = iVar4 + 1;
              param_2[0xb] = 100;
              *(undefined1 *)((int)param_2 + 0x13) = 1;
              *(undefined1 *)(param_2 + 5) = 0;
              G_CDataManager();
              iVar4 = CDataManager::get_hellparty_script_values();
              *(undefined1 *)((int)param_2 + 0x11) =
                   *(undefined1 *)(iVar4 + 0x6c + (int)(char)param_1[0x1cc]);
              *(undefined1 *)((int)param_2 + 0x12) = 1;
              *(map_monster *)(param_2 + 0xce) = param_1[0x1cc];
              map_monster::map_monster(local_390,(map_monster *)param_2);
                    /* try { // try from 083074bf to 083074d5 has its CatchHandler @ 083074d8 */
              pMVar8 = (MapInfo *)GetCurrentMapInfo((CBattle_Field *)param_1);
              MapInfo::Add_Mob(pMVar8,local_390);
                    /* try { // try from 083074fc to 083075b3 has its CatchHandler @ 083075f5 */
              map_monster::~map_monster(local_390);
            }
            local_2c = local_14 + -1;
            piVar5 = (int *)std::_List_iterator<STHellPartyGroupRate>::operator->(local_3b0);
            std::make_pair<int&,int>(local_34,piVar5);
            std::pair<int_const,int>::pair<int,int>(local_3c,(pair *)local_34);
            GetCurrentMapInfo((CBattle_Field *)param_1);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                      (local_44);
            local_28 = 0;
            local_24 = 0;
          }
          break;
        }
        std::_List_iterator<STHellPartyGroupRate>::operator++(local_394,(int)local_3b0);
      }
      else {
        std::_List_iterator<STHellPartyGroupRate>::operator++(local_398,(int)local_3b0);
      }
    }
    std::list<STHellPartyGroupRate,std::allocator<STHellPartyGroupRate>>::~list(local_3ac);
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,STHellPartyGroupOrder>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_short_const,STHellPartyGroupOrder>> *)local_3a4
              );
  } while( true );
}
```
