# SelectDungeon

`_ZN13CBattle_Field13SelectDungeonEiPK8CDungeoni17ENUM_DUNGEON_TYPEiP9CWorldMapbi`

`CBattle_Field::SelectDungeon(int, CDungeon const*, int, ENUM_DUNGEON_TYPE, int, CWorldMap*, bool, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x082ff486` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ff486  _ZN13CBattle_Field13SelectDungeonEiPK8CDungeoni17ENUM_DUNGEON_TYPEiP9CWorldMapbi
#           CBattle_Field::SelectDungeon(int, CDungeon const*, int, ENUM_DUNGEON_TYPE, int, CWorldMap*, bool, int)
# range [0x082ff486, 0x082ff987]
082ff486 +0x000:  push   %ebp
082ff487 +0x001:  mov    %esp,%ebp
082ff489 +0x003:  push   %esi
082ff48a +0x004:  push   %ebx
082ff48b +0x005:  sub    $0x320,%esp
082ff491 +0x00b:  mov    0x24(%ebp),%eax
082ff494 +0x00e:  mov    %al,-0x2fc(%ebp)
082ff49a +0x014:  mov    0x8(%ebp),%eax
082ff49d +0x017:  mov    0xc(%ebp),%edx
082ff4a0 +0x01a:  mov    %edx,0x194(%eax)
082ff4a6 +0x020:  mov    0x14(%ebp),%eax
082ff4a9 +0x023:  movsbl %al,%eax
082ff4ac +0x026:  mov    %eax,0x4(%esp)
082ff4b0 +0x02a:  mov    0x8(%ebp),%eax
082ff4b3 +0x02d:  mov    %eax,(%esp)
082ff4b6 +0x030:  call   0830ed1e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x903>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x903
082ff4bb +0x035:  mov    0x8(%ebp),%eax
082ff4be +0x038:  mov    0x1c(%ebp),%edx
082ff4c1 +0x03b:  mov    %edx,0x198(%eax)
082ff4c7 +0x041:  mov    0x8(%ebp),%eax
082ff4ca +0x044:  mov    0x28(%ebp),%edx
082ff4cd +0x047:  mov    %edx,0x19c(%eax)
082ff4d3 +0x04d:  mov    0x8(%ebp),%eax
082ff4d6 +0x050:  movb   $0x0,0x1b8(%eax)
082ff4dd +0x057:  mov    0x8(%ebp),%eax
082ff4e0 +0x05a:  mov    0x18(%ebp),%edx
082ff4e3 +0x05d:  mov    %edx,0x1b0(%eax)
082ff4e9 +0x063:  call   0830ed07 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x8ec>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x8ec
082ff4ee +0x068:  test   %al,%al
082ff4f0 +0x06a:  je     082ff6b0 <+0x22a>
082ff4f6 +0x070:  cmpl   $0x0,0x20(%ebp)
082ff4fa +0x074:  je     082ff6b0 <+0x22a>
082ff500 +0x07a:  mov    0x20(%ebp),%eax
082ff503 +0x07d:  mov    %eax,(%esp)
082ff506 +0x080:  call   0830e6ba <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x29f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x29f
082ff50b +0x085:  test   %al,%al
082ff50d +0x087:  je     082ff6b0 <+0x22a>
082ff513 +0x08d:  cmpl   $0x1,0x18(%ebp)
082ff517 +0x091:  jne    082ff5c1 <+0x13b>
082ff51d +0x097:  mov    0x8(%ebp),%eax
082ff520 +0x09a:  mov    (%eax),%eax
082ff522 +0x09c:  mov    %eax,(%esp)
082ff525 +0x09f:  call   085b690a <_ZN6CParty19sub_hellparty_valueEv>  ; CParty::sub_hellparty_value()
082ff52a +0x0a4:  mov    0x18(%ebp),%eax
082ff52d +0x0a7:  mov    %eax,0x4(%esp)
082ff531 +0x0ab:  mov    0x8(%ebp),%eax
082ff534 +0x0ae:  mov    %eax,(%esp)
082ff537 +0x0b1:  call   082ffa2e <_ZN13CBattle_Field22GetHellPartyDifficultyE17ENUM_DUNGEON_TYPE>  ; CBattle_Field::GetHellPartyDifficulty(ENUM_DUNGEON_TYPE)
082ff53c +0x0b6:  mov    %eax,%edx
082ff53e +0x0b8:  mov    0x8(%ebp),%eax
082ff541 +0x0bb:  mov    %dl,0x1cc(%eax)
082ff547 +0x0c1:  mov    0x8(%ebp),%eax
082ff54a +0x0c4:  movzbl 0x1cc(%eax),%eax
082ff551 +0x0cb:  test   %al,%al
082ff553 +0x0cd:  jne    082ff58b <+0x105>
082ff555 +0x0cf:  movl   $"HELLPARTY_LOG : HELLPARTY DIFFICULTY ERROR!!\n",0x10(%esp)
082ff55d +0x0d7:  movl   $0x1fc,0xc(%esp)
082ff565 +0x0df:  movl   $&_ZZN13CBattle_Field13SelectDungeonEiPK8CDungeoni17ENUM_DUNGEON_TYPEiP9CWorldMapbiE19__PRETTY_FUNCTION__,0x8(%esp)
082ff56d +0x0e7:  movl   $"battle_field.cpp",0x4(%esp)
082ff575 +0x0ef:  movl   $0x1,(%esp)
082ff57c +0x0f6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082ff581 +0x0fb:  mov    $0x0,%ebx
082ff586 +0x100:  jmp    082ff97b <+0x4f5>
082ff58b +0x105:  mov    0x8(%ebp),%eax
082ff58e +0x108:  movzbl 0x1cc(%eax),%eax
082ff595 +0x10f:  movsbl %al,%eax
082ff598 +0x112:  mov    %eax,0x4(%esp)
082ff59c +0x116:  mov    0x8(%ebp),%eax
082ff59f +0x119:  mov    %eax,(%esp)
082ff5a2 +0x11c:  call   082ffb06 <_ZN13CBattle_Field21GetHellPartyEventTypeEc>  ; CBattle_Field::GetHellPartyEventType(char)
082ff5a7 +0x121:  mov    %eax,%edx
082ff5a9 +0x123:  mov    0x8(%ebp),%eax
082ff5ac +0x126:  mov    %dl,0x1cd(%eax)
082ff5b2 +0x12c:  mov    0x8(%ebp),%eax
082ff5b5 +0x12f:  movb   $0x1,0x1b8(%eax)
082ff5bc +0x136:  jmp    082ff6b0 <+0x22a>
082ff5c1 +0x13b:  cmpb   $0x0,-0x2fc(%ebp)
082ff5c8 +0x142:  je     082ff6b0 <+0x22a>
082ff5ce +0x148:  mov    0x8(%ebp),%eax
082ff5d1 +0x14b:  mov    (%eax),%eax
082ff5d3 +0x14d:  mov    %eax,(%esp)
082ff5d6 +0x150:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
082ff5db +0x155:  cmp    $0x1,%eax
082ff5de +0x158:  setne  %al
082ff5e1 +0x15b:  test   %al,%al
082ff5e3 +0x15d:  je     082ff6b0 <+0x22a>
082ff5e9 +0x163:  mov    0x8(%ebp),%eax
082ff5ec +0x166:  mov    %eax,(%esp)
082ff5ef +0x169:  call   082ff988 <_ZN13CBattle_Field23CheckHellPartyConditionEv>  ; CBattle_Field::CheckHellPartyCondition()
082ff5f4 +0x16e:  mov    %al,-0x9(%ebp)
082ff5f7 +0x171:  cmpb   $0x0,-0x9(%ebp)
082ff5fb +0x175:  je     082ff6b0 <+0x22a>
082ff601 +0x17b:  mov    0x8(%ebp),%eax
082ff604 +0x17e:  mov    (%eax),%eax
082ff606 +0x180:  mov    %eax,(%esp)
082ff609 +0x183:  call   085b690a <_ZN6CParty19sub_hellparty_valueEv>  ; CParty::sub_hellparty_value()
082ff60e +0x188:  mov    0x8(%ebp),%eax
082ff611 +0x18b:  movb   $0x1,0x1b8(%eax)
082ff618 +0x192:  mov    0x8(%ebp),%eax
082ff61b +0x195:  movzbl -0x2fc(%ebp),%edx
082ff622 +0x19c:  mov    %dl,0x1ce(%eax)
082ff628 +0x1a2:  mov    0x18(%ebp),%eax
082ff62b +0x1a5:  mov    %eax,0x4(%esp)
082ff62f +0x1a9:  mov    0x8(%ebp),%eax
082ff632 +0x1ac:  mov    %eax,(%esp)
082ff635 +0x1af:  call   082ffa2e <_ZN13CBattle_Field22GetHellPartyDifficultyE17ENUM_DUNGEON_TYPE>  ; CBattle_Field::GetHellPartyDifficulty(ENUM_DUNGEON_TYPE)
082ff63a +0x1b4:  mov    %eax,%edx
082ff63c +0x1b6:  mov    0x8(%ebp),%eax
082ff63f +0x1b9:  mov    %dl,0x1cc(%eax)
082ff645 +0x1bf:  mov    0x8(%ebp),%eax
082ff648 +0x1c2:  movzbl 0x1cc(%eax),%eax
082ff64f +0x1c9:  test   %al,%al
082ff651 +0x1cb:  jne    082ff689 <+0x203>
082ff653 +0x1cd:  movl   $"HELLPARTY_LOG : HELLPARTY DIFFICULTY ERROR!!\n",0x10(%esp)
082ff65b +0x1d5:  movl   $0x22b,0xc(%esp)
082ff663 +0x1dd:  movl   $&_ZZN13CBattle_Field13SelectDungeonEiPK8CDungeoni17ENUM_DUNGEON_TYPEiP9CWorldMapbiE19__PRETTY_FUNCTION__,0x8(%esp)
082ff66b +0x1e5:  movl   $"battle_field.cpp",0x4(%esp)
082ff673 +0x1ed:  movl   $0x1,(%esp)
082ff67a +0x1f4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082ff67f +0x1f9:  mov    $0x0,%ebx
082ff684 +0x1fe:  jmp    082ff97b <+0x4f5>
082ff689 +0x203:  mov    0x8(%ebp),%eax
082ff68c +0x206:  movzbl 0x1cc(%eax),%eax
082ff693 +0x20d:  movsbl %al,%eax
082ff696 +0x210:  mov    %eax,0x4(%esp)
082ff69a +0x214:  mov    0x8(%ebp),%eax
082ff69d +0x217:  mov    %eax,(%esp)
082ff6a0 +0x21a:  call   082ffb06 <_ZN13CBattle_Field21GetHellPartyEventTypeEc>  ; CBattle_Field::GetHellPartyEventType(char)
082ff6a5 +0x21f:  mov    %eax,%edx
082ff6a7 +0x221:  mov    0x8(%ebp),%eax
082ff6aa +0x224:  mov    %dl,0x1cd(%eax)
082ff6b0 +0x22a:  cmpl   $0x0,0x10(%ebp)
082ff6b4 +0x22e:  je     082ff6d1 <+0x24b>
082ff6b6 +0x230:  mov    0x10(%ebp),%eax
082ff6b9 +0x233:  movzbl 0x89d(%eax),%eax
082ff6c0 +0x23a:  xor    $0x1,%eax
082ff6c3 +0x23d:  test   %al,%al
082ff6c5 +0x23f:  je     082ff6d1 <+0x24b>
082ff6c7 +0x241:  mov    0x8(%ebp),%eax
082ff6ca +0x244:  movb   $0x0,0x1b8(%eax)
082ff6d1 +0x24b:  mov    0x8(%ebp),%eax
082ff6d4 +0x24e:  mov    0x10(%ebp),%edx
082ff6d7 +0x251:  mov    %edx,0x188(%eax)
082ff6dd +0x257:  mov    0x14(%ebp),%edx
082ff6e0 +0x25a:  mov    0x10(%ebp),%eax
082ff6e3 +0x25d:  add    $0x1b8,%edx
082ff6e9 +0x263:  mov    (%eax,%edx,4),%edx
082ff6ec +0x266:  mov    0x8(%ebp),%eax
082ff6ef +0x269:  mov    %edx,0x70(%eax)
082ff6f2 +0x26c:  mov    0x8(%ebp),%eax
082ff6f5 +0x26f:  movl   $0x0,0x1a4(%eax)
082ff6ff +0x279:  mov    0x14(%ebp),%eax
082ff702 +0x27c:  mov    %eax,0x4(%esp)
082ff706 +0x280:  mov    0x8(%ebp),%eax
082ff709 +0x283:  mov    %eax,(%esp)
082ff70c +0x286:  call   082ff128 <_ZNK13CBattle_Field18GetAppropriateMazeE23ENUM_DUNGEON_DIFFICULTY>  ; CBattle_Field::GetAppropriateMaze(ENUM_DUNGEON_DIFFICULTY) const
082ff711 +0x28b:  mov    %eax,-0x18(%ebp)
082ff714 +0x28e:  mov    -0x18(%ebp),%eax
082ff717 +0x291:  mov    0x64(%eax),%edx
082ff71a +0x294:  mov    0x8(%ebp),%eax
082ff71d +0x297:  mov    %edx,0x1ac(%eax)
082ff723 +0x29d:  mov    0x8(%ebp),%eax
082ff726 +0x2a0:  mov    %eax,(%esp)
082ff729 +0x2a3:  call   0830e170 <_ZN13CBattle_Field16setQuestMazeInfoEv>  ; CBattle_Field::setQuestMazeInfo()
082ff72e +0x2a8:  mov    -0x18(%ebp),%eax
082ff731 +0x2ab:  lea    0x58(%eax),%edx
082ff734 +0x2ae:  mov    0x8(%ebp),%eax
082ff737 +0x2b1:  add    $0xf0,%eax
082ff73c +0x2b6:  mov    %edx,0x4(%esp)
082ff740 +0x2ba:  mov    %eax,(%esp)
082ff743 +0x2bd:  call   082fef12 <_ZN15CClearCondition30SetDungeonClearConditionVectorERSt6vectorI21DungeonClearConditionSaIS1_EE>  ; CClearCondition::SetDungeonClearConditionVector(std::vector<DungeonClearCondition, std::allocator<DungeonClearCondition> >&)
082ff748 +0x2c2:  mov    0x10(%ebp),%eax
082ff74b +0x2c5:  mov    %eax,(%esp)
082ff74e +0x2c8:  call   0830e620 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x205>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x205
082ff753 +0x2cd:  mov    %eax,0x8(%esp)
082ff757 +0x2d1:  mov    -0x18(%ebp),%eax
082ff75a +0x2d4:  mov    %eax,0x4(%esp)
082ff75e +0x2d8:  mov    0x8(%ebp),%eax
082ff761 +0x2db:  mov    %eax,(%esp)
082ff764 +0x2de:  call   082ffb30 <_ZN13CBattle_Field11SetGridPathEP10MazeScripti>  ; CBattle_Field::SetGridPath(MazeScript*, int)
082ff769 +0x2e3:  movl   $0xffffffff,-0x204(%ebp)
082ff773 +0x2ed:  movl   $0xffffffff,-0x208(%ebp)
082ff77d +0x2f7:  lea    -0x208(%ebp),%eax
082ff783 +0x2fd:  mov    %eax,0x8(%esp)
082ff787 +0x301:  lea    -0x204(%ebp),%eax
082ff78d +0x307:  mov    %eax,0x4(%esp)
082ff791 +0x30b:  mov    0x8(%ebp),%eax
082ff794 +0x30e:  mov    %eax,(%esp)
082ff797 +0x311:  call   08300da6 <_ZN13CBattle_Field11getCurPosXYERiS0_>  ; CBattle_Field::getCurPosXY(int&, int&)
082ff79c +0x316:  mov    -0x208(%ebp),%ecx
082ff7a2 +0x31c:  mov    -0x204(%ebp),%edx
082ff7a8 +0x322:  mov    0x8(%ebp),%eax
082ff7ab +0x325:  mov    0x74(%eax),%eax
082ff7ae +0x328:  mov    %ecx,0x8(%esp)
082ff7b2 +0x32c:  mov    %edx,0x4(%esp)
082ff7b6 +0x330:  mov    %eax,(%esp)
082ff7b9 +0x333:  call   0822adc2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46c
082ff7be +0x338:  mov    %eax,-0x14(%ebp)
082ff7c1 +0x33b:  cmpl   $0x0,-0x14(%ebp)
082ff7c5 +0x33f:  jne    082ff7d1 <+0x34b>
082ff7c7 +0x341:  mov    $0x0,%ebx
082ff7cc +0x346:  jmp    082ff97b <+0x4f5>
082ff7d1 +0x34b:  movl   $0x0,-0x10(%ebp)
082ff7d8 +0x352:  mov    -0x14(%ebp),%eax
082ff7db +0x355:  mov    (%eax),%eax
082ff7dd +0x357:  mov    %eax,0x4(%esp)
082ff7e1 +0x35b:  mov    0x10(%ebp),%eax
082ff7e4 +0x35e:  mov    %eax,(%esp)
082ff7e7 +0x361:  call   0834c75a <_ZNK8CDungeon11GetStartMapEi>  ; CDungeon::GetStartMap(int) const
082ff7ec +0x366:  mov    %eax,-0x10(%ebp)
082ff7ef +0x369:  cmpl   $0x0,-0x10(%ebp)
082ff7f3 +0x36d:  jg     082ff846 <+0x3c0>
082ff7f5 +0x36f:  mov    0x8(%ebp),%eax
082ff7f8 +0x372:  mov    0x64(%eax),%edx
082ff7fb +0x375:  mov    0x8(%ebp),%eax
082ff7fe +0x378:  mov    0x60(%eax),%eax
082ff801 +0x37b:  mov    %edx,0x1c(%esp)
082ff805 +0x37f:  mov    %eax,0x18(%esp)
082ff809 +0x383:  mov    0xc(%ebp),%eax
082ff80c +0x386:  mov    %eax,0x14(%esp)
082ff810 +0x38a:  movl   $"[CBattle_Field::SelectDungeon] Error Map : (%d)(%d,%d)\n",0x10(%esp)
082ff818 +0x392:  movl   $0x27c,0xc(%esp)
082ff820 +0x39a:  movl   $&_ZZN13CBattle_Field13SelectDungeonEiPK8CDungeoni17ENUM_DUNGEON_TYPEiP9CWorldMapbiE19__PRETTY_FUNCTION__,0x8(%esp)
082ff828 +0x3a2:  movl   $"battle_field.cpp",0x4(%esp)
082ff830 +0x3aa:  movl   $0x1,(%esp)
082ff837 +0x3b1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082ff83c +0x3b6:  mov    $0x0,%ebx
082ff841 +0x3bb:  jmp    082ff97b <+0x4f5>
082ff846 +0x3c0:  lea    -0x2f8(%ebp),%eax
082ff84c +0x3c6:  mov    %eax,(%esp)
082ff84f +0x3c9:  call   08151394 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xcc9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xcc9
082ff854 +0x3ce:  mov    -0x10(%ebp),%eax
082ff857 +0x3d1:  mov    %eax,-0x2f4(%ebp)
082ff85d +0x3d7:  mov    -0x14(%ebp),%eax
082ff860 +0x3da:  mov    (%eax),%eax
082ff862 +0x3dc:  mov    %al,-0x2f0(%ebp)
082ff868 +0x3e2:  mov    -0x208(%ebp),%edx
082ff86e +0x3e8:  mov    -0x204(%ebp),%eax
082ff874 +0x3ee:  mov    %edx,0x8(%esp)
082ff878 +0x3f2:  mov    %eax,0x4(%esp)
082ff87c +0x3f6:  mov    0x8(%ebp),%eax
082ff87f +0x3f9:  mov    %eax,(%esp)
082ff882 +0x3fc:  call   0822cbbe <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2268>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2268
082ff887 +0x401:  mov    %eax,-0x20c(%ebp)
082ff88d +0x407:  lea    -0x108(%ebp),%eax
082ff893 +0x40d:  lea    -0x2f8(%ebp),%edx
082ff899 +0x413:  mov    %edx,0x8(%esp)
082ff89d +0x417:  lea    -0x20c(%ebp),%edx
082ff8a3 +0x41d:  mov    %edx,0x4(%esp)
082ff8a7 +0x421:  mov    %eax,(%esp)
082ff8aa +0x424:  call   08235cfb <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb3a5>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb3a5
082ff8af +0x429:  sub    $0x4,%esp
082ff8b2 +0x42c:  lea    -0x108(%ebp),%eax
082ff8b8 +0x432:  mov    %eax,0x4(%esp)
082ff8bc +0x436:  lea    -0x1f8(%ebp),%eax
082ff8c2 +0x43c:  mov    %eax,(%esp)
082ff8c5 +0x43f:  call   08235fb2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb65c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb65c
082ff8ca +0x444:  mov    0x8(%ebp),%eax
082ff8cd +0x447:  lea    0x78(%eax),%ecx
082ff8d0 +0x44a:  lea    -0x200(%ebp),%eax
082ff8d6 +0x450:  lea    -0x1f8(%ebp),%edx
082ff8dc +0x456:  mov    %edx,0x8(%esp)
082ff8e0 +0x45a:  mov    %ecx,0x4(%esp)
082ff8e4 +0x45e:  mov    %eax,(%esp)
082ff8e7 +0x461:  call   08235fec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb696>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb696
082ff8ec +0x466:  sub    $0x4,%esp
082ff8ef +0x469:  lea    -0x1f8(%ebp),%eax
082ff8f5 +0x46f:  mov    %eax,(%esp)
082ff8f8 +0x472:  call   0822cc32 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22dc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22dc
082ff8fd +0x477:  jmp    082ff92f <+0x4a9>
082ff8ff +0x479:  mov    %edx,%ebx
082ff901 +0x47b:  mov    %eax,%esi
082ff903 +0x47d:  lea    -0x1f8(%ebp),%eax
082ff909 +0x483:  mov    %eax,(%esp)
082ff90c +0x486:  call   0822cc32 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22dc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22dc
082ff911 +0x48b:  mov    %esi,%eax
082ff913 +0x48d:  mov    %ebx,%edx
082ff915 +0x48f:  jmp    082ff917 <+0x491>
082ff917 +0x491:  mov    %edx,%ebx
082ff919 +0x493:  mov    %eax,%esi
082ff91b +0x495:  lea    -0x108(%ebp),%eax
082ff921 +0x49b:  mov    %eax,(%esp)
082ff924 +0x49e:  call   0822cc1c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22c6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22c6
082ff929 +0x4a3:  mov    %esi,%eax
082ff92b +0x4a5:  mov    %ebx,%edx
082ff92d +0x4a7:  jmp    082ff95d <+0x4d7>
082ff92f +0x4a9:  lea    -0x108(%ebp),%eax
082ff935 +0x4af:  mov    %eax,(%esp)
082ff938 +0x4b2:  call   0822cc1c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22c6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22c6
082ff93d +0x4b7:  mov    0x8(%ebp),%eax
082ff940 +0x4ba:  mov    %eax,(%esp)
082ff943 +0x4bd:  call   083031d2 <_ZN13CBattle_Field10ConsistMapEv>  ; CBattle_Field::ConsistMap()
082ff948 +0x4c2:  mov    $0x1,%ebx
082ff94d +0x4c7:  lea    -0x2f8(%ebp),%eax
082ff953 +0x4cd:  mov    %eax,(%esp)
082ff956 +0x4d0:  call   081518bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11f1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11f1
082ff95b +0x4d5:  jmp    082ff97b <+0x4f5>
082ff95d +0x4d7:  mov    %edx,%ebx
082ff95f +0x4d9:  mov    %eax,%esi
082ff961 +0x4db:  lea    -0x2f8(%ebp),%eax
082ff967 +0x4e1:  mov    %eax,(%esp)
082ff96a +0x4e4:  call   081518bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11f1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11f1
082ff96f +0x4e9:  mov    %esi,%eax
082ff971 +0x4eb:  mov    %ebx,%edx
082ff973 +0x4ed:  mov    %eax,(%esp)
082ff976 +0x4f0:  call   08ae3750 <_Unwind_Resume>
082ff97b +0x4f5:  mov    %ebx,%eax
082ff97d +0x4f7:  lea    -0x8(%ebp),%esp
082ff980 +0x4fa:  add    $0x0,%esp
082ff983 +0x4fd:  pop    %ebx
082ff984 +0x4fe:  pop    %esi
082ff985 +0x4ff:  pop    %ebp
082ff986 +0x500:  ret
082ff987 +0x501:  nop
```

## 反编译 C

```c
// CBattle_Field::SelectDungeon @ 0x82ff486

/* CBattle_Field::SelectDungeon(int, CDungeon const*, int, ENUM_DUNGEON_TYPE, int, CWorldMap*, bool,
   int) */

undefined4 __thiscall
CBattle_Field::SelectDungeon
          (CBattle_Field *this,undefined4 param_1,CDungeon *param_2,int param_3,int param_5,
          undefined4 param_6,CWorldMap *param_7,CBattle_Field param_8,undefined4 param_9)

{
  char cVar1;
  CBattle_Field CVar2;
  int iVar3;
  undefined4 uVar4;
  MapInfo local_2fc [4];
  int local_2f8;
  undefined1 local_2f4;
  undefined4 local_210;
  int local_20c;
  int local_208;
  pair local_204 [8];
  pair<int_const,MapInfo> local_1fc [240];
  pair<int,MapInfo> local_10c [240];
  MazeScript *local_1c;
  int *local_18;
  int local_14;
  char local_d;
  
  *(undefined4 *)(this + 0x194) = param_1;
  set_dungeon_diff(this,(char)param_3);
  *(undefined4 *)(this + 0x198) = param_6;
  *(undefined4 *)(this + 0x19c) = param_9;
  this[0x1b8] = (CBattle_Field)0x0;
  *(int *)(this + 0x1b0) = param_5;
  cVar1 = IsEnableHellDungeon();
  if (((cVar1 != '\0') && (param_7 != (CWorldMap *)0x0)) &&
     (cVar1 = CWorldMap::IsInHellDungeon(param_7), cVar1 != '\0')) {
    if (param_5 == 1) {
      CParty::sub_hellparty_value(*(CParty **)this);
      CVar2 = (CBattle_Field)GetHellPartyDifficulty(this,1);
      this[0x1cc] = CVar2;
      if (this[0x1cc] == (CBattle_Field)0x0) {
        LogManager::logFormat
                  (1,"battle_field.cpp",
                   "bool CBattle_Field::SelectDungeon(int, const CDungeon*, int, ENUM_DUNGEON_TYPE, int, CWorldMap*, bool, int)"
                   ,0x1fc,"HELLPARTY_LOG : HELLPARTY DIFFICULTY ERROR!!\n");
        return 0;
      }
      CVar2 = (CBattle_Field)GetHellPartyEventType(this,(char)this[0x1cc]);
      this[0x1cd] = CVar2;
      this[0x1b8] = (CBattle_Field)0x1;
    }
    else if (((param_8 != (CBattle_Field)0x0) &&
             (iVar3 = CParty::get_member_count(*(CParty **)this), iVar3 != 1)) &&
            (local_d = CheckHellPartyCondition(this), local_d != '\0')) {
      CParty::sub_hellparty_value(*(CParty **)this);
      this[0x1b8] = (CBattle_Field)0x1;
      this[0x1ce] = param_8;
      CVar2 = (CBattle_Field)GetHellPartyDifficulty(this,param_5);
      this[0x1cc] = CVar2;
      if (this[0x1cc] == (CBattle_Field)0x0) {
        LogManager::logFormat
                  (1,"battle_field.cpp",
                   "bool CBattle_Field::SelectDungeon(int, const CDungeon*, int, ENUM_DUNGEON_TYPE, int, CWorldMap*, bool, int)"
                   ,0x22b,"HELLPARTY_LOG : HELLPARTY DIFFICULTY ERROR!!\n");
        return 0;
      }
      CVar2 = (CBattle_Field)GetHellPartyEventType(this,(char)this[0x1cc]);
      this[0x1cd] = CVar2;
    }
  }
  if ((param_2 != (CDungeon *)0x0) && (param_2[0x89d] != (CDungeon)0x1)) {
    this[0x1b8] = (CBattle_Field)0x0;
  }
  *(CDungeon **)(this + 0x188) = param_2;
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_2 + (param_3 + 0x1b8) * 4);
  *(undefined4 *)(this + 0x1a4) = 0;
  local_1c = (MazeScript *)GetAppropriateMaze(this,param_3);
  *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(local_1c + 100);
  setQuestMazeInfo(this);
  CClearCondition::SetDungeonClearConditionVector
            ((CClearCondition *)(this + 0xf0),(vector *)(local_1c + 0x58));
  iVar3 = CDungeon::GetDummyAppearCount(param_2);
  SetGridPath(this,local_1c,iVar3);
  local_208 = -1;
  local_20c = -1;
  getCurPosXY(this,&local_208,&local_20c);
  local_18 = (int *)MazeScript::getGridR(*(MazeScript **)(this + 0x74),local_208,local_20c);
  if (local_18 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    local_14 = 0;
    local_14 = CDungeon::GetStartMap(param_2,*local_18);
    if (local_14 < 1) {
      LogManager::logFormat
                (1,"battle_field.cpp",
                 "bool CBattle_Field::SelectDungeon(int, const CDungeon*, int, ENUM_DUNGEON_TYPE, int, CWorldMap*, bool, int)"
                 ,0x27c,"[CBattle_Field::SelectDungeon] Error Map : (%d)(%d,%d)\n",param_1,
                 *(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100));
      uVar4 = 0;
    }
    else {
      MapInfo::MapInfo(local_2fc);
      local_2f8 = local_14;
      local_2f4 = (undefined1)*local_18;
      local_210 = GetMapInfoKeyValue(this,local_208,local_20c);
                    /* try { // try from 082ff8aa to 082ff8ae has its CatchHandler @ 082ff95d */
      std::make_pair<int&,MapInfo&>((int *)local_10c,(MapInfo *)&local_210);
                    /* try { // try from 082ff8c5 to 082ff8c9 has its CatchHandler @ 082ff917 */
      std::pair<int_const,MapInfo>::pair<int,MapInfo>(local_1fc,local_10c);
                    /* try { // try from 082ff8e7 to 082ff8eb has its CatchHandler @ 082ff8ff */
      std::map<int,MapInfo,std::less<int>,std::allocator<std::pair<int_const,MapInfo>>>::insert
                (local_204);
                    /* try { // try from 082ff8f8 to 082ff8fc has its CatchHandler @ 082ff917 */
      std::pair<int_const,MapInfo>::~pair(local_1fc);
                    /* try { // try from 082ff938 to 082ff947 has its CatchHandler @ 082ff95d */
      std::pair<int,MapInfo>::~pair(local_10c);
      ConsistMap(this);
      uVar4 = 1;
      MapInfo::~MapInfo(local_2fc);
    }
  }
  return uVar4;
}
```
