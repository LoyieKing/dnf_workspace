# BloodPhaseSpawn

`_ZN13CBattle_Field15BloodPhaseSpawnEsRsii`

`CBattle_Field::BloodPhaseSpawn(short, short&, int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830553a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830553a  _ZN13CBattle_Field15BloodPhaseSpawnEsRsii
#           CBattle_Field::BloodPhaseSpawn(short, short&, int, int)
# range [0x0830553a, 0x08305991]
0830553a +0x000:  push   %ebp
0830553b +0x001:  mov    %esp,%ebp
0830553d +0x003:  push   %edi
0830553e +0x004:  push   %esi
0830553f +0x005:  push   %ebx
08305540 +0x006:  sub    $0x6c,%esp
08305543 +0x009:  mov    0xc(%ebp),%eax
08305546 +0x00c:  mov    %ax,-0x4c(%ebp)
0830554a +0x010:  mov    0x10(%ebp),%eax
0830554d +0x013:  movzwl (%eax),%eax
08305550 +0x016:  movswl %ax,%edx
08305553 +0x019:  movswl -0x4c(%ebp),%eax
08305557 +0x01d:  mov    %edx,0x8(%esp)
0830555b +0x021:  mov    %eax,0x4(%esp)
0830555f +0x025:  mov    0x8(%ebp),%eax
08305562 +0x028:  mov    %eax,(%esp)
08305565 +0x02b:  call   08306a62 <_ZN13CBattle_Field28get_blood_spawn_cnt_of_phaseEss>  ; CBattle_Field::get_blood_spawn_cnt_of_phase(short, short)
0830556a +0x030:  mov    %ax,-0x3e(%ebp)
0830556e +0x034:  movswl -0x4c(%ebp),%eax
08305572 +0x038:  mov    %eax,0x4(%esp)
08305576 +0x03c:  mov    0x8(%ebp),%eax
08305579 +0x03f:  mov    %eax,(%esp)
0830557c +0x042:  call   0830690a <_ZN13CBattle_Field29get_blood_spawn_time_of_phaseEs>  ; CBattle_Field::get_blood_spawn_time_of_phase(short)
08305581 +0x047:  mov    %eax,-0x3c(%ebp)
08305584 +0x04a:  mov    0x8(%ebp),%eax
08305587 +0x04d:  add    $0x2ac,%eax
0830558c +0x052:  mov    %eax,(%esp)
0830558f +0x055:  call   0830ebc2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7a7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7a7
08305594 +0x05a:  mov    %ax,-0x36(%ebp)
08305598 +0x05e:  mov    0x8(%ebp),%eax
0830559b +0x061:  add    $0x2ac,%eax
083055a0 +0x066:  mov    %eax,(%esp)
083055a3 +0x069:  call   0830ebce <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7b3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7b3
083055a8 +0x06e:  mov    %ax,-0x34(%ebp)
083055ac +0x072:  mov    0x8(%ebp),%eax
083055af +0x075:  add    $0x2ac,%eax
083055b4 +0x07a:  mov    %eax,(%esp)
083055b7 +0x07d:  call   0830ebda <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7bf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7bf
083055bc +0x082:  mov    %ax,-0x32(%ebp)
083055c0 +0x086:  cmpw   $0x0,-0x3e(%ebp)
083055c5 +0x08b:  js     083055cd <+0x93>
083055c7 +0x08d:  cmpl   $0x0,-0x3c(%ebp)
083055cb +0x091:  jns    08305606 <+0xcc>
083055cd +0x093:  movswl -0x4c(%ebp),%eax
083055d1 +0x097:  mov    %eax,0x14(%esp)
083055d5 +0x09b:  movl   $"BLOOD_LOG : small_round_order_ (%d) : ABNOMAL ORDER!!\n",0x10(%esp)
083055dd +0x0a3:  movl   $0xdb8,0xc(%esp)
083055e5 +0x0ab:  movl   $&_ZZN13CBattle_Field15BloodPhaseSpawnEsRsiiE19__PRETTY_FUNCTION__,0x8(%esp)
083055ed +0x0b3:  movl   $"battle_field.cpp",0x4(%esp)
083055f5 +0x0bb:  movl   $0x1,(%esp)
083055fc +0x0c2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08305601 +0x0c7:  jmp    08305986 <+0x44c>
08305606 +0x0cc:  mov    0x8(%ebp),%eax
08305609 +0x0cf:  mov    0x108(%eax),%eax
0830560f +0x0d5:  test   %eax,%eax
08305611 +0x0d7:  je     08305648 <+0x10e>
08305613 +0x0d9:  movzwl -0x32(%ebp),%eax
08305617 +0x0dd:  cmp    -0x4c(%ebp),%ax
0830561b +0x0e1:  jne    08305648 <+0x10e>
0830561d +0x0e3:  mov    0x8(%ebp),%eax
08305620 +0x0e6:  mov    0x108(%eax),%eax
08305626 +0x0ec:  mov    %eax,(%esp)
08305629 +0x0ef:  call   0830e5c0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a5
0830562e +0x0f4:  cmp    $0x1,%eax
08305631 +0x0f7:  sete   %al
08305634 +0x0fa:  test   %al,%al
08305636 +0x0fc:  je     08305641 <+0x107>
08305638 +0x0fe:  movl   $0xffffffff,-0x3c(%ebp)
0830563f +0x105:  jmp    08305648 <+0x10e>
08305641 +0x107:  movl   $0x0,-0x3c(%ebp)
08305648 +0x10e:  mov    0x10(%ebp),%eax
0830564b +0x111:  movzwl (%eax),%eax
0830564e +0x114:  movswl %ax,%ecx
08305651 +0x117:  movswl -0x4c(%ebp),%edx
08305655 +0x11b:  movswl -0x3e(%ebp),%eax
08305659 +0x11f:  mov    %ecx,0x10(%esp)
0830565d +0x123:  mov    %edx,0xc(%esp)
08305661 +0x127:  mov    -0x3c(%ebp),%edx
08305664 +0x12a:  mov    %edx,0x8(%esp)
08305668 +0x12e:  mov    %eax,0x4(%esp)
0830566c +0x132:  mov    0x8(%ebp),%eax
0830566f +0x135:  mov    %eax,(%esp)
08305672 +0x138:  call   08305992 <_ZN13CBattle_Field23BloodMonsterSpawnPacketEiiss>  ; CBattle_Field::BloodMonsterSpawnPacket(int, int, short, short)
08305677 +0x13d:  movswl -0x4c(%ebp),%eax
0830567b +0x141:  mov    %eax,0x4(%esp)
0830567f +0x145:  mov    0x8(%ebp),%eax
08305682 +0x148:  mov    %eax,(%esp)
08305685 +0x14b:  call   08306c0e <_ZN13CBattle_Field46get_blood_spawn_phase_total_cnt_of_small_roundEs>  ; CBattle_Field::get_blood_spawn_phase_total_cnt_of_small_round(short)
0830568a +0x150:  mov    %eax,-0x30(%ebp)
0830568d +0x153:  cmpl   $0x0,-0x30(%ebp)
08305691 +0x157:  jns    083056cc <+0x192>
08305693 +0x159:  movswl -0x4c(%ebp),%eax
08305697 +0x15d:  mov    %eax,0x14(%esp)
0830569b +0x161:  movl   $"BLOOD_LOG : small_round_order_ (%d) : ABNOMAL ORDER!!\n",0x10(%esp)
083056a3 +0x169:  movl   $0xdcc,0xc(%esp)
083056ab +0x171:  movl   $&_ZZN13CBattle_Field15BloodPhaseSpawnEsRsiiE19__PRETTY_FUNCTION__,0x8(%esp)
083056b3 +0x179:  movl   $"battle_field.cpp",0x4(%esp)
083056bb +0x181:  movl   $0x1,(%esp)
083056c2 +0x188:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083056c7 +0x18d:  jmp    08305986 <+0x44c>
083056cc +0x192:  mov    -0x30(%ebp),%eax
083056cf +0x195:  lea    -0x1(%eax),%edx
083056d2 +0x198:  mov    0x10(%ebp),%eax
083056d5 +0x19b:  movzwl (%eax),%eax
083056d8 +0x19e:  cwtl
083056d9 +0x19f:  cmp    %eax,%edx
083056db +0x1a1:  jle    0830574f <+0x215>
083056dd +0x1a3:  mov    0x14(%ebp),%edx
083056e0 +0x1a6:  mov    0x8(%ebp),%eax
083056e3 +0x1a9:  mov    (%eax),%eax
083056e5 +0x1ab:  mov    %edx,0x4(%esp)
083056e9 +0x1af:  mov    %eax,(%esp)
083056ec +0x1b2:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
083056f1 +0x1b7:  mov    %eax,-0x58(%ebp)
083056f4 +0x1ba:  mov    -0x3c(%ebp),%eax
083056f7 +0x1bd:  mov    %eax,%ebx
083056f9 +0x1bf:  mov    %eax,%esi
083056fb +0x1c1:  sar    $0x1f,%esi
083056fe +0x1c4:  mov    0x14(%ebp),%eax
08305701 +0x1c7:  mov    %eax,-0x54(%ebp)
08305704 +0x1ca:  mov    0x8(%ebp),%eax
08305707 +0x1cd:  mov    (%eax),%eax
08305709 +0x1cf:  mov    %eax,(%esp)
0830570c +0x1d2:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
08305711 +0x1d7:  mov    %eax,%edi
08305713 +0x1d9:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08305718 +0x1de:  movl   $0x0,0x1c(%esp)
08305720 +0x1e6:  mov    -0x58(%ebp),%edx
08305723 +0x1e9:  mov    %edx,0x18(%esp)
08305727 +0x1ed:  mov    %ebx,0x10(%esp)
0830572b +0x1f1:  mov    %esi,0x14(%esp)
0830572f +0x1f5:  mov    -0x54(%ebp),%edx
08305732 +0x1f8:  mov    %edx,0xc(%esp)
08305736 +0x1fc:  mov    %edi,0x8(%esp)
0830573a +0x200:  movl   $0x1,0x4(%esp)
08305742 +0x208:  mov    %eax,(%esp)
08305745 +0x20b:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
0830574a +0x210:  jmp    08305977 <+0x43d>
0830574f +0x215:  mov    0x18(%ebp),%edx
08305752 +0x218:  mov    0x8(%ebp),%eax
08305755 +0x21b:  add    $0x140,%edx
0830575b +0x221:  movw   $0x0,0xe(%eax,%edx,2)
08305762 +0x228:  movswl -0x4c(%ebp),%edx
08305766 +0x22c:  mov    0x8(%ebp),%eax
08305769 +0x22f:  lea    0x264(%eax),%ecx
0830576f +0x235:  lea    -0x48(%ebp),%eax
08305772 +0x238:  mov    %edx,0x8(%esp)
08305776 +0x23c:  mov    %ecx,0x4(%esp)
0830577a +0x240:  mov    %eax,(%esp)
0830577d +0x243:  call   083118f6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34db>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34db
08305782 +0x248:  sub    $0x4,%esp
08305785 +0x24b:  movl   $0x1,0x4(%esp)
0830578d +0x253:  lea    -0x48(%ebp),%eax
08305790 +0x256:  mov    %eax,(%esp)
08305793 +0x259:  call   0814a2ae <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4d>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4d
08305798 +0x25e:  movswl -0x34(%ebp),%eax
0830579c +0x262:  mov    %eax,0x4(%esp)
083057a0 +0x266:  mov    0x8(%ebp),%eax
083057a3 +0x269:  mov    %eax,(%esp)
083057a6 +0x26c:  call   08306e32 <_ZN13CBattle_Field20checkBloodSpawnOrderEs>  ; CBattle_Field::checkBloodSpawnOrder(short)
083057ab +0x271:  test   %al,%al
083057ad +0x273:  je     08305977 <+0x43d>
083057b3 +0x279:  movzwl -0x32(%ebp),%eax
083057b7 +0x27d:  cmp    -0x34(%ebp),%ax
083057bb +0x281:  jge    083057e2 <+0x2a8>
083057bd +0x283:  mov    0x8(%ebp),%eax
083057c0 +0x286:  add    $0x2ac,%eax
083057c5 +0x28b:  mov    %eax,(%esp)
083057c8 +0x28e:  call   0830ebe6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7cb>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7cb
083057cd +0x293:  mov    0x8(%ebp),%eax
083057d0 +0x296:  add    $0x2ac,%eax
083057d5 +0x29b:  mov    %eax,(%esp)
083057d8 +0x29e:  call   0830eb84 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x769>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x769
083057dd +0x2a3:  jmp    08305986 <+0x44c>
083057e2 +0x2a8:  movswl -0x34(%ebp),%eax
083057e6 +0x2ac:  mov    %eax,0x4(%esp)
083057ea +0x2b0:  mov    0x8(%ebp),%eax
083057ed +0x2b3:  mov    %eax,(%esp)
083057f0 +0x2b6:  call   083065f8 <_ZN13CBattle_Field30get_blood_round_of_small_roundEs>  ; CBattle_Field::get_blood_round_of_small_round(short)
083057f5 +0x2bb:  mov    %eax,-0x2c(%ebp)
083057f8 +0x2be:  movzwl -0x34(%ebp),%eax
083057fc +0x2c2:  sub    $0x1,%eax
083057ff +0x2c5:  cwtl
08305800 +0x2c6:  mov    %eax,0x4(%esp)
08305804 +0x2ca:  mov    0x8(%ebp),%eax
08305807 +0x2cd:  mov    %eax,(%esp)
0830580a +0x2d0:  call   083065f8 <_ZN13CBattle_Field30get_blood_round_of_small_roundEs>  ; CBattle_Field::get_blood_round_of_small_round(short)
0830580f +0x2d5:  mov    %eax,-0x28(%ebp)
08305812 +0x2d8:  movswl -0x34(%ebp),%eax
08305816 +0x2dc:  mov    %eax,0x4(%esp)
0830581a +0x2e0:  mov    0x8(%ebp),%eax
0830581d +0x2e3:  mov    %eax,(%esp)
08305820 +0x2e6:  call   083062fe <_ZN13CBattle_Field41get_blood_round_difficylty_of_small_roundEs>  ; CBattle_Field::get_blood_round_difficylty_of_small_round(short)
08305825 +0x2eb:  mov    %eax,-0x24(%ebp)
08305828 +0x2ee:  movzwl -0x34(%ebp),%eax
0830582c +0x2f2:  sub    $0x1,%eax
0830582f +0x2f5:  cwtl
08305830 +0x2f6:  mov    %eax,0x4(%esp)
08305834 +0x2fa:  mov    0x8(%ebp),%eax
08305837 +0x2fd:  mov    %eax,(%esp)
0830583a +0x300:  call   083062fe <_ZN13CBattle_Field41get_blood_round_difficylty_of_small_roundEs>  ; CBattle_Field::get_blood_round_difficylty_of_small_round(short)
0830583f +0x305:  mov    %eax,-0x20(%ebp)
08305842 +0x308:  cmpl   $0x0,-0x2c(%ebp)
08305846 +0x30c:  js     0830584e <+0x314>
08305848 +0x30e:  cmpl   $0x0,-0x28(%ebp)
0830584c +0x312:  jns    08305887 <+0x34d>
0830584e +0x314:  movswl -0x34(%ebp),%eax
08305852 +0x318:  mov    %eax,0x14(%esp)
08305856 +0x31c:  movl   $"BLOOD_LOG : small_round_order_ (%d) : ABNOMAL ROUND!!\n",0x10(%esp)
0830585e +0x324:  movl   $0xdee,0xc(%esp)
08305866 +0x32c:  movl   $&_ZZN13CBattle_Field15BloodPhaseSpawnEsRsiiE19__PRETTY_FUNCTION__,0x8(%esp)
0830586e +0x334:  movl   $"battle_field.cpp",0x4(%esp)
08305876 +0x33c:  movl   $0x1,(%esp)
0830587d +0x343:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08305882 +0x348:  jmp    08305986 <+0x44c>
08305887 +0x34d:  movswl -0x4c(%ebp),%eax
0830588b +0x351:  mov    %eax,0x4(%esp)
0830588f +0x355:  mov    0x8(%ebp),%eax
08305892 +0x358:  mov    %eax,(%esp)
08305895 +0x35b:  call   0830676a <_ZN13CBattle_Field40get_blood_spawn_time_of_next_small_roundEs>  ; CBattle_Field::get_blood_spawn_time_of_next_small_round(short)
0830589a +0x360:  mov    %eax,-0x1c(%ebp)
0830589d +0x363:  cmpl   $0x0,-0x1c(%ebp)
083058a1 +0x367:  jg     083058dc <+0x3a2>
083058a3 +0x369:  movswl -0x34(%ebp),%eax
083058a7 +0x36d:  mov    %eax,0x14(%esp)
083058ab +0x371:  movl   $"BLOOD_LOG : small_round_order_ (%d) : ABNOMAL ORDER!!\n",0x10(%esp)
083058b3 +0x379:  movl   $0xdf5,0xc(%esp)
083058bb +0x381:  movl   $&_ZZN13CBattle_Field15BloodPhaseSpawnEsRsiiE19__PRETTY_FUNCTION__,0x8(%esp)
083058c3 +0x389:  movl   $"battle_field.cpp",0x4(%esp)
083058cb +0x391:  movl   $0x1,(%esp)
083058d2 +0x398:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083058d7 +0x39d:  jmp    08305986 <+0x44c>
083058dc +0x3a2:  mov    -0x28(%ebp),%eax
083058df +0x3a5:  cmp    -0x2c(%ebp),%eax
083058e2 +0x3a8:  jne    08305957 <+0x41d>
083058e4 +0x3aa:  mov    -0x24(%ebp),%eax
083058e7 +0x3ad:  cmp    -0x20(%ebp),%eax
083058ea +0x3b0:  jne    08305957 <+0x41d>
083058ec +0x3b2:  mov    0x8(%ebp),%eax
083058ef +0x3b5:  mov    (%eax),%eax
083058f1 +0x3b7:  movl   $0x16,0x4(%esp)
083058f9 +0x3bf:  mov    %eax,(%esp)
083058fc +0x3c2:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
08305901 +0x3c7:  mov    %eax,-0x50(%ebp)
08305904 +0x3ca:  mov    -0x1c(%ebp),%eax
08305907 +0x3cd:  mov    %eax,%ebx
08305909 +0x3cf:  mov    %eax,%esi
0830590b +0x3d1:  sar    $0x1f,%esi
0830590e +0x3d4:  mov    0x8(%ebp),%eax
08305911 +0x3d7:  mov    (%eax),%eax
08305913 +0x3d9:  mov    %eax,(%esp)
08305916 +0x3dc:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
0830591b +0x3e1:  mov    %eax,%edi
0830591d +0x3e3:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08305922 +0x3e8:  movl   $0x0,0x1c(%esp)
0830592a +0x3f0:  mov    -0x50(%ebp),%edx
0830592d +0x3f3:  mov    %edx,0x18(%esp)
08305931 +0x3f7:  mov    %ebx,0x10(%esp)
08305935 +0x3fb:  mov    %esi,0x14(%esp)
08305939 +0x3ff:  movl   $0x16,0xc(%esp)
08305941 +0x407:  mov    %edi,0x8(%esp)
08305945 +0x40b:  movl   $0x1,0x4(%esp)
0830594d +0x413:  mov    %eax,(%esp)
08305950 +0x416:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
08305955 +0x41b:  jmp    08305977 <+0x43d>
08305957 +0x41d:  mov    0x8(%ebp),%eax
0830595a +0x420:  add    $0x2ac,%eax
0830595f +0x425:  mov    %eax,(%esp)
08305962 +0x428:  call   0830ebe6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7cb>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7cb
08305967 +0x42d:  mov    0x8(%ebp),%eax
0830596a +0x430:  add    $0x2ac,%eax
0830596f +0x435:  mov    %eax,(%esp)
08305972 +0x438:  call   0830eb84 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x769>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x769
08305977 +0x43d:  mov    0x10(%ebp),%eax
0830597a +0x440:  movzwl (%eax),%eax
0830597d +0x443:  lea    0x1(%eax),%edx
08305980 +0x446:  mov    0x10(%ebp),%eax
08305983 +0x449:  mov    %dx,(%eax)
08305986 +0x44c:  lea    -0xc(%ebp),%esp
08305989 +0x44f:  add    $0x0,%esp
0830598c +0x452:  pop    %ebx
0830598d +0x453:  pop    %esi
0830598e +0x454:  pop    %edi
0830598f +0x455:  pop    %ebp
08305990 +0x456:  ret
08305991 +0x457:  nop
```

## 反编译 C

```c
// CBattle_Field::BloodPhaseSpawn @ 0x830553a

/* CBattle_Field::BloodPhaseSpawn(short, short&, int, int) */

void __thiscall
CBattle_Field::BloodPhaseSpawn
          (CBattle_Field *this,short param_1,short *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  _Bit_reference local_4c [10];
  short local_42;
  int local_40;
  undefined2 local_3a;
  short local_38;
  short local_36;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_42 = get_blood_spawn_cnt_of_phase(this,param_1,*param_2);
  local_40 = get_blood_spawn_time_of_phase(this,param_1);
  local_3a = CBloodRound::getBloodRoundOrder((CBloodRound *)(this + 0x2ac));
  local_38 = CBloodRound::getBloodSmallRoundOrder((CBloodRound *)(this + 0x2ac));
  local_36 = CBloodRound::getBloodLastSmallRoundOrder((CBloodRound *)(this + 0x2ac));
  if ((local_42 < 0) || (local_40 < 0)) {
    LogManager::logFormat
              (1,"battle_field.cpp",
               "void CBattle_Field::BloodPhaseSpawn(short int, short int&, int, int)",0xdb8,
               "BLOOD_LOG : small_round_order_ (%d) : ABNOMAL ORDER!!\n",(int)param_1);
  }
  else {
    if ((*(int *)(this + 0x108) != 0) && (local_36 == param_1)) {
      iVar2 = CMap::get_map_type(*(CMap **)(this + 0x108));
      if (iVar2 == 1) {
        local_40 = -1;
      }
      else {
        local_40 = 0;
      }
    }
    iVar6 = (int)*param_2;
    iVar7 = (int)param_1;
    iVar2 = local_40;
    BloodMonsterSpawnPacket((int)this,(int)local_42,(short)local_40,param_1);
    local_34 = get_blood_spawn_phase_total_cnt_of_small_round(this,param_1);
    if (local_34 < 0) {
      LogManager::logFormat
                (1,"battle_field.cpp",
                 "void CBattle_Field::BloodPhaseSpawn(short int, short int&, int, int)",0xdcc,
                 "BLOOD_LOG : small_round_order_ (%d) : ABNOMAL ORDER!!\n",(int)param_1);
    }
    else {
      if ((int)*param_2 < local_34 + -1) {
        uVar3 = CParty::gen_timer_key(*(CParty **)this,param_3,iVar2,iVar7,iVar6);
        iVar2 = local_40;
        iVar6 = local_40 >> 0x1f;
        uVar4 = CParty::GetPartyIndex(*(CParty **)this);
        uVar5 = G_TimerQueue();
        TimerQueue::InsertTimerInMilisecond(uVar5,1,uVar4,param_3,iVar2,iVar6,uVar3,0);
      }
      else {
        *(undefined2 *)(this + (param_4 + 0x140) * 2 + 0xe) = 0;
        std::vector<bool,std::allocator<bool>>::operator[]((uint)local_4c);
        std::_Bit_reference::operator=(local_4c,true);
        cVar1 = checkBloodSpawnOrder(this,local_38);
        if (cVar1 != '\0') {
          if (local_36 < local_38) {
            CBloodRound::incBloodRoundOrder((CBloodRound *)(this + 0x2ac));
            CBloodRound::setPreMapBloodRoundOrder((CBloodRound *)(this + 0x2ac));
            return;
          }
          local_30 = get_blood_round_of_small_round(this,local_38);
          local_2c = get_blood_round_of_small_round(this,local_38 + -1);
          local_28 = get_blood_round_difficylty_of_small_round(this,local_38);
          local_24 = get_blood_round_difficylty_of_small_round(this,local_38 + -1);
          if ((local_30 < 0) || (local_2c < 0)) {
            LogManager::logFormat
                      (1,"battle_field.cpp",
                       "void CBattle_Field::BloodPhaseSpawn(short int, short int&, int, int)",0xdee,
                       "BLOOD_LOG : small_round_order_ (%d) : ABNOMAL ROUND!!\n",(int)local_38);
            return;
          }
          local_20 = get_blood_spawn_time_of_next_small_round(this,param_1);
          if (local_20 < 1) {
            LogManager::logFormat
                      (1,"battle_field.cpp",
                       "void CBattle_Field::BloodPhaseSpawn(short int, short int&, int, int)",0xdf5,
                       "BLOOD_LOG : small_round_order_ (%d) : ABNOMAL ORDER!!\n",(int)local_38);
            return;
          }
          if ((local_2c == local_30) && (local_28 == local_24)) {
            uVar3 = CParty::gen_timer_key(*(CParty **)this,0x16);
            iVar2 = local_20;
            iVar6 = local_20 >> 0x1f;
            uVar4 = CParty::GetPartyIndex(*(CParty **)this);
            uVar5 = G_TimerQueue();
            TimerQueue::InsertTimerInMilisecond(uVar5,1,uVar4,0x16,iVar2,iVar6,uVar3,0);
          }
          else {
            CBloodRound::incBloodRoundOrder((CBloodRound *)(this + 0x2ac));
            CBloodRound::setPreMapBloodRoundOrder((CBloodRound *)(this + 0x2ac));
          }
        }
      }
      *param_2 = *param_2 + 1;
    }
  }
  return;
}
```
