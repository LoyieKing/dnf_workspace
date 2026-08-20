# ConsistMap

`_ZN13CBattle_Field10ConsistMapEv`

`CBattle_Field::ConsistMap()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083031d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083031d2  _ZN13CBattle_Field10ConsistMapEv
#           CBattle_Field::ConsistMap()
# range [0x083031d2, 0x083035c7]
083031d2 +0x000:  push   %ebp
083031d3 +0x001:  mov    %esp,%ebp
083031d5 +0x003:  push   %esi
083031d6 +0x004:  push   %ebx
083031d7 +0x005:  sub    $0x3b0,%esp
083031dd +0x00b:  mov    0x8(%ebp),%eax
083031e0 +0x00e:  mov    (%eax),%eax
083031e2 +0x010:  test   %eax,%eax
083031e4 +0x012:  je     083035b6 <+0x3e4>
083031ea +0x018:  mov    0x8(%ebp),%eax
083031ed +0x01b:  mov    %eax,(%esp)
083031f0 +0x01e:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083031f5 +0x023:  mov    %eax,-0x14(%ebp)
083031f8 +0x026:  mov    -0x14(%ebp),%eax
083031fb +0x029:  mov    0x4(%eax),%eax
083031fe +0x02c:  mov    %eax,0x4(%esp)
08303202 +0x030:  mov    0x8(%ebp),%eax
08303205 +0x033:  mov    %eax,(%esp)
08303208 +0x036:  call   08300ed4 <_ZN13CBattle_Field6getMapEi>  ; CBattle_Field::getMap(int)
0830320d +0x03b:  mov    0x8(%ebp),%edx
08303210 +0x03e:  mov    %eax,0x108(%edx)
08303216 +0x044:  mov    0x8(%ebp),%eax
08303219 +0x047:  mov    0x108(%eax),%eax
0830321f +0x04d:  test   %eax,%eax
08303221 +0x04f:  je     083035b9 <+0x3e7>
08303227 +0x055:  mov    0x8(%ebp),%eax
0830322a +0x058:  mov    0x108(%eax),%eax
08303230 +0x05e:  mov    %eax,(%esp)
08303233 +0x061:  call   0830e5b6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x19b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x19b
08303238 +0x066:  mov    -0x14(%ebp),%edx
0830323b +0x069:  mov    0x4(%edx),%edx
0830323e +0x06c:  movl   $0x0,0x10(%esp)
08303246 +0x074:  movl   $0x0,0xc(%esp)
0830324e +0x07c:  mov    %eax,0x8(%esp)
08303252 +0x080:  mov    %edx,0x4(%esp)
08303256 +0x084:  mov    0x8(%ebp),%eax
08303259 +0x087:  mov    %eax,(%esp)
0830325c +0x08a:  call   0830107e <_ZN13CBattle_Field20setDungeonClearTraceEiiii>  ; CBattle_Field::setDungeonClearTrace(int, int, int, int)
08303261 +0x08f:  mov    0x8(%ebp),%eax
08303264 +0x092:  mov    0x194(%eax),%ebx
0830326a +0x098:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830326f +0x09d:  mov    %ebx,0x4(%esp)
08303273 +0x0a1:  mov    %eax,(%esp)
08303276 +0x0a4:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
0830327b +0x0a9:  mov    %eax,-0x10(%ebp)
0830327e +0x0ac:  cmpl   $0x0,-0x10(%ebp)
08303282 +0x0b0:  jne    083032c2 <+0xf0>
08303284 +0x0b2:  mov    0x8(%ebp),%eax
08303287 +0x0b5:  mov    0x194(%eax),%eax
0830328d +0x0bb:  mov    %eax,0x14(%esp)
08303291 +0x0bf:  movl   $"G_CDataManager()->find_dungeon( %d) fail",0x10(%esp)
08303299 +0x0c7:  movl   $0x7f2,0xc(%esp)
083032a1 +0x0cf:  movl   $&_ZZN13CBattle_Field10ConsistMapEvE19__PRETTY_FUNCTION__,0x8(%esp)
083032a9 +0x0d7:  movl   $"battle_field.cpp",0x4(%esp)
083032b1 +0x0df:  movl   $0x1,(%esp)
083032b8 +0x0e6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083032bd +0x0eb:  jmp    083035bd <+0x3eb>
083032c2 +0x0f0:  mov    0x8(%ebp),%eax
083032c5 +0x0f3:  mov    %eax,(%esp)
083032c8 +0x0f6:  call   083010ee <_ZN13CBattle_Field20getAddChampionMobCntEv>  ; CBattle_Field::getAddChampionMobCnt()
083032cd +0x0fb:  mov    %eax,-0xc(%ebp)
083032d0 +0x0fe:  cmpl   $0x0,-0xc(%ebp)
083032d4 +0x102:  js     083035bc <+0x3ea>
083032da +0x108:  lea    -0x1c(%ebp),%eax
083032dd +0x10b:  mov    %eax,(%esp)
083032e0 +0x10e:  call   08310a06 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x25eb>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x25eb
083032e5 +0x113:  lea    -0x1c(%ebp),%eax
083032e8 +0x116:  mov    %eax,0x4(%esp)
083032ec +0x11a:  mov    0x8(%ebp),%eax
083032ef +0x11d:  mov    %eax,(%esp)
083032f2 +0x120:  call   083012a4 <_ZN13CBattle_Field16get_monster_listERSt4listI11_mapMonsterSaIS1_EE>  ; CBattle_Field::get_monster_list(std::list<_mapMonster, std::allocator<_mapMonster> >&)
083032f7 +0x125:  xor    $0x1,%eax
083032fa +0x128:  test   %al,%al
083032fc +0x12a:  jne    083035a9 <+0x3d7>
08303302 +0x130:  movl   $0xffffffff,-0x20(%ebp)
08303309 +0x137:  movl   $0xffffffff,-0x24(%ebp)
08303310 +0x13e:  lea    -0x24(%ebp),%eax
08303313 +0x141:  mov    %eax,0x8(%esp)
08303317 +0x145:  lea    -0x20(%ebp),%eax
0830331a +0x148:  mov    %eax,0x4(%esp)
0830331e +0x14c:  mov    0x8(%ebp),%eax
08303321 +0x14f:  mov    %eax,(%esp)
08303324 +0x152:  call   08300da6 <_ZN13CBattle_Field11getCurPosXYERiS0_>  ; CBattle_Field::getCurPosXY(int&, int&)
08303329 +0x157:  mov    -0x24(%ebp),%edx
0830332c +0x15a:  mov    -0x20(%ebp),%eax
0830332f +0x15d:  mov    %edx,0xc(%esp)
08303333 +0x161:  mov    %eax,0x8(%esp)
08303337 +0x165:  lea    -0x1c(%ebp),%eax
0830333a +0x168:  mov    %eax,0x4(%esp)
0830333e +0x16c:  mov    0x8(%ebp),%eax
08303341 +0x16f:  mov    %eax,(%esp)
08303344 +0x172:  call   083013e2 <_ZN13CBattle_Field35add_monster_list_bossroom_conditionERSt4listI11_mapMonsterSaIS1_EEii>  ; CBattle_Field::add_monster_list_bossroom_condition(std::list<_mapMonster, std::allocator<_mapMonster> >&, int, int)
08303349 +0x177:  movl   $0x0,-0x28(%ebp)
08303350 +0x17e:  lea    -0x390(%ebp),%eax
08303356 +0x184:  mov    %eax,(%esp)
08303359 +0x187:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
0830335e +0x18c:  lea    -0x34(%ebp),%eax
08303361 +0x18f:  mov    %eax,(%esp)
08303364 +0x192:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08303369 +0x197:  movl   $0x0,-0x38(%ebp)
08303370 +0x19e:  movl   $0xea60,(%esp)
08303377 +0x1a5:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0830337c +0x1aa:  mov    %eax,-0x3c(%ebp)
0830337f +0x1ad:  lea    -0x38(%ebp),%eax
08303382 +0x1b0:  mov    %eax,0x18(%esp)
08303386 +0x1b4:  lea    -0x3c(%ebp),%eax
08303389 +0x1b7:  mov    %eax,0x14(%esp)
0830338d +0x1bb:  lea    -0x28(%ebp),%eax
08303390 +0x1be:  mov    %eax,0x10(%esp)
08303394 +0x1c2:  lea    -0x390(%ebp),%eax
0830339a +0x1c8:  mov    %eax,0xc(%esp)
0830339e +0x1cc:  lea    -0x34(%ebp),%eax
083033a1 +0x1cf:  mov    %eax,0x8(%esp)
083033a5 +0x1d3:  lea    -0x1c(%ebp),%eax
083033a8 +0x1d6:  mov    %eax,0x4(%esp)
083033ac +0x1da:  mov    0x8(%ebp),%eax
083033af +0x1dd:  mov    %eax,(%esp)
083033b2 +0x1e0:  call   0830162e <_ZN13CBattle_Field24add_monsters_current_mapERSt4listI11_mapMonsterSaIS1_EERSt6vectorIiSaIiEER11map_monsterRiSB_SB_>  ; CBattle_Field::add_monsters_current_map(std::list<_mapMonster, std::allocator<_mapMonster> >&, std::vector<int, std::allocator<int> >&, map_monster&, int&, int&, int&)
083033b7 +0x1e5:  movb   $0x0,-0x3d(%ebp)
083033bb +0x1e9:  lea    -0x38(%ebp),%eax
083033be +0x1ec:  mov    %eax,0x10(%esp)
083033c2 +0x1f0:  lea    -0x3c(%ebp),%eax
083033c5 +0x1f3:  mov    %eax,0xc(%esp)
083033c9 +0x1f7:  lea    -0x3d(%ebp),%eax
083033cc +0x1fa:  mov    %eax,0x8(%esp)
083033d0 +0x1fe:  lea    -0x390(%ebp),%eax
083033d6 +0x204:  mov    %eax,0x4(%esp)
083033da +0x208:  mov    0x8(%ebp),%eax
083033dd +0x20b:  mov    %eax,(%esp)
083033e0 +0x20e:  call   08301b8c <_ZN13CBattle_Field22add_monster_hell_partyER11map_monsterRbRiS3_>  ; CBattle_Field::add_monster_hell_party(map_monster&, bool&, int&, int&)
083033e5 +0x213:  lea    -0x38(%ebp),%eax
083033e8 +0x216:  mov    %eax,0xc(%esp)
083033ec +0x21a:  lea    -0x3c(%ebp),%eax
083033ef +0x21d:  mov    %eax,0x8(%esp)
083033f3 +0x221:  lea    -0x390(%ebp),%eax
083033f9 +0x227:  mov    %eax,0x4(%esp)
083033fd +0x22b:  mov    0x8(%ebp),%eax
08303400 +0x22e:  mov    %eax,(%esp)
08303403 +0x231:  call   08301bf6 <_ZN13CBattle_Field17add_monster_bloodER11map_monsterRiS2_>  ; CBattle_Field::add_monster_blood(map_monster&, int&, int&)
08303408 +0x236:  xor    $0x1,%eax
0830340b +0x239:  test   %al,%al
0830340d +0x23b:  je     08303419 <+0x247>
0830340f +0x23d:  mov    $0x0,%ebx
08303414 +0x242:  jmp    08303547 <+0x375>
08303419 +0x247:  mov    -0x28(%ebp),%eax
0830341c +0x24a:  mov    0x8(%ebp),%edx
0830341f +0x24d:  add    $0x158,%edx
08303425 +0x253:  mov    %eax,0x4(%esp)
08303429 +0x257:  mov    %edx,(%esp)
0830342c +0x25a:  call   082fee2e <_ZN19CDungeonClearTracer18SetMaxMonsterCountEi>  ; CDungeonClearTracer::SetMaxMonsterCount(int)
08303431 +0x25f:  lea    -0x3c(%ebp),%eax
08303434 +0x262:  mov    %eax,0x4(%esp)
08303438 +0x266:  mov    0x8(%ebp),%eax
0830343b +0x269:  mov    %eax,(%esp)
0830343e +0x26c:  call   08301d76 <_ZN13CBattle_Field18add_monster_APC_AIERi>  ; CBattle_Field::add_monster_APC_AI(int&)
08303443 +0x271:  mov    -0x24(%ebp),%edx
08303446 +0x274:  mov    -0x20(%ebp),%eax
08303449 +0x277:  mov    %edx,0x10(%esp)
0830344d +0x27b:  mov    %eax,0xc(%esp)
08303451 +0x27f:  lea    -0x3c(%ebp),%eax
08303454 +0x282:  mov    %eax,0x8(%esp)
08303458 +0x286:  lea    -0x390(%ebp),%eax
0830345e +0x28c:  mov    %eax,0x4(%esp)
08303462 +0x290:  mov    0x8(%ebp),%eax
08303465 +0x293:  mov    %eax,(%esp)
08303468 +0x296:  call   083020b6 <_ZN13CBattle_Field26add_monster_APC_AI_by_rateER11map_monsterRiii>  ; CBattle_Field::add_monster_APC_AI_by_rate(map_monster&, int&, int, int)
0830346d +0x29b:  mov    -0xc(%ebp),%eax
08303470 +0x29e:  mov    %eax,0x8(%esp)
08303474 +0x2a2:  lea    -0x34(%ebp),%eax
08303477 +0x2a5:  mov    %eax,0x4(%esp)
0830347b +0x2a9:  mov    0x8(%ebp),%eax
0830347e +0x2ac:  mov    %eax,(%esp)
08303481 +0x2af:  call   083022a8 <_ZN13CBattle_Field31add_monster_additional_championERSt6vectorIiSaIiEEi>  ; CBattle_Field::add_monster_additional_champion(std::vector<int, std::allocator<int> >&, int)
08303486 +0x2b4:  mov    -0x24(%ebp),%edx
08303489 +0x2b7:  mov    -0x20(%ebp),%eax
0830348c +0x2ba:  mov    %edx,0xc(%esp)
08303490 +0x2be:  mov    %eax,0x8(%esp)
08303494 +0x2c2:  lea    -0x3c(%ebp),%eax
08303497 +0x2c5:  mov    %eax,0x4(%esp)
0830349b +0x2c9:  mov    0x8(%ebp),%eax
0830349e +0x2cc:  mov    %eax,(%esp)
083034a1 +0x2cf:  call   083023ec <_ZN13CBattle_Field17add_monster_eventERiii>  ; CBattle_Field::add_monster_event(int&, int, int)
083034a6 +0x2d4:  mov    0x8(%ebp),%eax
083034a9 +0x2d7:  mov    %eax,(%esp)
083034ac +0x2da:  call   083026da <_ZN13CBattle_Field19set_monster_abilityEv>  ; CBattle_Field::set_monster_ability()
083034b1 +0x2df:  mov    0x8(%ebp),%eax
083034b4 +0x2e2:  mov    %eax,(%esp)
083034b7 +0x2e5:  call   083029b8 <_ZN13CBattle_Field29insert_tournamentRoundMonsterEv>  ; CBattle_Field::insert_tournamentRoundMonster()
083034bc +0x2ea:  movl   $0xea60,(%esp)
083034c3 +0x2f1:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
083034c8 +0x2f6:  mov    %eax,-0x44(%ebp)
083034cb +0x2f9:  lea    -0x3c(%ebp),%eax
083034ce +0x2fc:  mov    %eax,0x8(%esp)
083034d2 +0x300:  lea    -0x44(%ebp),%eax
083034d5 +0x303:  mov    %eax,0x4(%esp)
083034d9 +0x307:  mov    0x8(%ebp),%eax
083034dc +0x30a:  mov    %eax,(%esp)
083034df +0x30d:  call   08302bc6 <_ZN13CBattle_Field17add_item_curr_mapERiS0_>  ; CBattle_Field::add_item_curr_map(int&, int&)
083034e4 +0x312:  mov    -0x44(%ebp),%edx
083034e7 +0x315:  mov    -0x14(%ebp),%eax
083034ea +0x318:  mov    %edx,0x40(%eax)
083034ed +0x31b:  mov    0x8(%ebp),%eax
083034f0 +0x31e:  mov    0x108(%eax),%eax
083034f6 +0x324:  mov    0xec(%eax),%eax
083034fc +0x32a:  test   %eax,%eax
083034fe +0x32c:  jne    0830350d <+0x33b>
08303500 +0x32e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08303505 +0x333:  mov    0x49d0(%eax),%eax
0830350b +0x339:  jmp    0830351c <+0x34a>
0830350d +0x33b:  mov    0x8(%ebp),%eax
08303510 +0x33e:  mov    0x108(%eax),%eax
08303516 +0x344:  mov    0xec(%eax),%eax
0830351c +0x34a:  mov    %eax,0x4(%esp)
08303520 +0x34e:  mov    -0x14(%ebp),%eax
08303523 +0x351:  mov    %eax,(%esp)
08303526 +0x354:  call   0830e800 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3e5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3e5
0830352b +0x359:  mov    $0x1,%ebx
08303530 +0x35e:  jmp    08303547 <+0x375>
08303532 +0x360:  mov    %edx,%ebx
08303534 +0x362:  mov    %eax,%esi
08303536 +0x364:  lea    -0x34(%ebp),%eax
08303539 +0x367:  mov    %eax,(%esp)
0830353c +0x36a:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08303541 +0x36f:  mov    %esi,%eax
08303543 +0x371:  mov    %ebx,%edx
08303545 +0x373:  jmp    08303564 <+0x392>
08303547 +0x375:  lea    -0x34(%ebp),%eax
0830354a +0x378:  mov    %eax,(%esp)
0830354d +0x37b:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08303552 +0x380:  test   %ebx,%ebx
08303554 +0x382:  jne    0830355d <+0x38b>
08303556 +0x384:  mov    $0x0,%ebx
0830355b +0x389:  jmp    0830357c <+0x3aa>
0830355d +0x38b:  mov    $0x1,%ebx
08303562 +0x390:  jmp    0830357c <+0x3aa>
08303564 +0x392:  mov    %edx,%ebx
08303566 +0x394:  mov    %eax,%esi
08303568 +0x396:  lea    -0x390(%ebp),%eax
0830356e +0x39c:  mov    %eax,(%esp)
08303571 +0x39f:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08303576 +0x3a4:  mov    %esi,%eax
08303578 +0x3a6:  mov    %ebx,%edx
0830357a +0x3a8:  jmp    0830358e <+0x3bc>
0830357c +0x3aa:  lea    -0x390(%ebp),%eax
08303582 +0x3b0:  mov    %eax,(%esp)
08303585 +0x3b3:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0830358a +0x3b8:  test   %ebx,%ebx
0830358c +0x3ba:  jmp    083035a9 <+0x3d7>
0830358e +0x3bc:  mov    %edx,%ebx
08303590 +0x3be:  mov    %eax,%esi
08303592 +0x3c0:  lea    -0x1c(%ebp),%eax
08303595 +0x3c3:  mov    %eax,(%esp)
08303598 +0x3c6:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
0830359d +0x3cb:  mov    %esi,%eax
0830359f +0x3cd:  mov    %ebx,%edx
083035a1 +0x3cf:  mov    %eax,(%esp)
083035a4 +0x3d2:  call   08ae3750 <_Unwind_Resume>
083035a9 +0x3d7:  lea    -0x1c(%ebp),%eax
083035ac +0x3da:  mov    %eax,(%esp)
083035af +0x3dd:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
083035b4 +0x3e2:  jmp    083035bd <+0x3eb>
083035b6 +0x3e4:  nop
083035b7 +0x3e5:  jmp    083035bd <+0x3eb>
083035b9 +0x3e7:  nop
083035ba +0x3e8:  jmp    083035bd <+0x3eb>
083035bc +0x3ea:  nop
083035bd +0x3eb:  add    $0x3b0,%esp
083035c3 +0x3f1:  pop    %ebx
083035c4 +0x3f2:  pop    %esi
083035c5 +0x3f3:  pop    %ebp
083035c6 +0x3f4:  ret
083035c7 +0x3f5:  nop
```

## 反编译 C

```c
// CBattle_Field::ConsistMap @ 0x83031d2

/* CBattle_Field::ConsistMap() */

void __thiscall CBattle_Field::ConsistMap(CBattle_Field *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  map_monster local_394 [844];
  int local_48;
  bool local_41;
  int local_40 [2];
  vector<int,std::allocator<int>> local_38 [12];
  int local_2c;
  int local_28;
  int local_24;
  list<_mapMonster,std::allocator<_mapMonster>> local_20 [8];
  MapInfo *local_18;
  int local_14;
  int local_10;
  
  if (*(int *)this != 0) {
    local_18 = (MapInfo *)GetCurrentMapInfo(this);
    uVar2 = getMap((int)this);
    *(undefined4 *)(this + 0x108) = uVar2;
    if (*(int *)(this + 0x108) != 0) {
      iVar3 = CMap::GetBossCount(*(CMap **)(this + 0x108));
      setDungeonClearTrace(this,*(int *)(local_18 + 4),iVar3,0,0);
      iVar3 = G_CDataManager();
      local_14 = CDataManager::find_dungeon(iVar3);
      if (local_14 == 0) {
        LogManager::logFormat
                  (1,"battle_field.cpp","void CBattle_Field::ConsistMap()",0x7f2,
                   "G_CDataManager()->find_dungeon( %d) fail",*(undefined4 *)(this + 0x194));
      }
      else {
        local_10 = getAddChampionMobCnt(this);
        if (-1 < local_10) {
          std::list<_mapMonster,std::allocator<_mapMonster>>::list(local_20);
                    /* try { // try from 083032f2 to 0830335d has its CatchHandler @ 0830358e */
          cVar1 = get_monster_list(this,(list *)local_20);
          if (cVar1 == '\x01') {
            local_24 = -1;
            local_28 = -1;
            getCurPosXY(this,&local_24,&local_28);
            add_monster_list_bossroom_condition(this,(list *)local_20,local_24,local_28);
            local_2c = 0;
            map_monster::map_monster(local_394);
                    /* try { // try from 08303364 to 08303368 has its CatchHandler @ 08303564 */
            std::vector<int,std::allocator<int>>::vector(local_38);
            local_40[1] = 0;
                    /* try { // try from 08303377 to 0830352a has its CatchHandler @ 08303532 */
            local_40[0] = get_rand_int(60000);
            add_monsters_current_map
                      (this,(list *)local_20,(vector *)local_38,local_394,&local_2c,local_40,
                       local_40 + 1);
            local_41 = false;
            add_monster_hell_party(this,local_394,&local_41,local_40,local_40 + 1);
            cVar1 = add_monster_blood(this,local_394,local_40,local_40 + 1);
            if (cVar1 == '\x01') {
              CDungeonClearTracer::SetMaxMonsterCount
                        ((CDungeonClearTracer *)(this + 0x158),local_2c);
              add_monster_APC_AI(this,local_40);
              add_monster_APC_AI_by_rate(this,local_394,local_40,local_24,local_28);
              add_monster_additional_champion(this,(vector *)local_38,local_10);
              add_monster_event(this,local_40,local_24,local_28);
              set_monster_ability(this);
              insert_tournamentRoundMonster(this);
              local_48 = get_rand_int(60000);
              add_item_curr_map(this,&local_48,local_40);
              *(int *)(local_18 + 0x40) = local_48;
              if (*(int *)(*(int *)(this + 0x108) + 0xec) == 0) {
                iVar3 = G_CDataManager();
                uVar4 = *(uint *)(iVar3 + 0x49d0);
              }
              else {
                uVar4 = *(uint *)(*(int *)(this + 0x108) + 0xec);
              }
              MapInfo::SelectDonsterItemDropLimit(local_18,uVar4);
            }
                    /* try { // try from 0830354d to 08303551 has its CatchHandler @ 08303564 */
            std::vector<int,std::allocator<int>>::~vector(local_38);
                    /* try { // try from 08303585 to 08303589 has its CatchHandler @ 0830358e */
            map_monster::~map_monster(local_394);
          }
          std::list<_mapMonster,std::allocator<_mapMonster>>::~list(local_20);
        }
      }
    }
  }
  return;
}
```
